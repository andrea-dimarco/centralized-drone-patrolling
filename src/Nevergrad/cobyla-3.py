# 
# Andrea Di Marco
# 1935169
# 2022
#

import os
import sys
import math
import numpy as np
import time
import os.path

from OMPython import OMCSessionZMQ
import nevergrad as ng


trial = 1
#  model output function
def model(p_worst: float, cc_choice: float) -> float:
	# seed random number generator
	np.random.seed(1)
	res = 0.0
	AvgDrones = 0.0
	AvgNoDrone = 0.0
	MaxNoDrone = 0.0
	PrDrones = 0.0
	StdDev = 0.0
	global trial
	global num_iterations
	
	print("[+]Trial " + str(trial) + " of " + str(num_iterations) + " (" + str(trial/num_iterations*100) + "%) started")
	
	os.system("rm -f System_res.mat") # To be on the safe side
	os.system("rm -f modelica_parameters.in") # To be on the safe side
	
	with open ("modelica_parameters.in", 'wt') as f:
		f.write("p.cc_choice="+str(cc_choice)+"\n"+"p.p_worst="+str(p_worst)+"\n")
		f.flush()
		os.fsync(f)
		    
	# execute simulation
	os.system("./System -overrideFile=modelica_parameters.in >> log")
	os.system("rm -f modelica_parameters.in") # To be on the safe side
	
	with open ("outputs.txt", 'r') as f:
		i = 1
		w = 0
		for line in f:
			if i == 2:
				# unpack line
				tokens = line.split()
				# get values
				AvgDrones = float(tokens[0])
				AvgNoDrone = float(tokens[1])
				MaxNoDrone = float(tokens[2])
				PrDrones = float(tokens[3])
				StdDev = float(tokens[4])
			else:
				i += 1
		f.close()
	
	# limiti
	global lb # lower-bound
	global ub # upper bound
	 
	# distanze da limiti
	ds = [0.0, 0.0, 0.0] # proximity (%) to either upperbound or lowerbound
	ds[0] = (cc_choice -lb[0])/(ub[0]-lb[0])*100
	ds[1] = (p_worst -lb[1])/(ub[1]-lb[1])*100
	print(" | Parameters distance from bounds: " + str(int(ds[0])) +"% "+ str(int(ds[1])) +"%")
	
	# constraints
	# if ci > 0 then constraint has been violated
	c1 = 0.40 - AvgDrones
	c2 = AvgNoDrone - 30.0
	c3 = MaxNoDrone - 300 # 5 min
	c4 = 0.20 - PrDrones
	c5 = StdDev - 0.5
	
	c6 = abs(ds[0] - 50.0) - 40.0 # input must be withing range of 40% from middle of parameter's domain
	c7 = abs(ds[1] - 50.0) - 40.0 # input must be withing range of 40% from middle of parameter's domain
	
	# moltiplicatori di lagrange
	l0 = 0.50
	
	l1 = 0.08
	l2 = 0.08
	l3 = 0.08
	l4 = 0.08
	l5 = 0.08
	
	l6 = 0.05
	l7 = 0.05
	
	res = (-AvgDrones)*l0 + c1*l1 + c2*l2 + c3*l3 + c4*l4 + c5*l5 + c6*l6 + c7*l7  # cl of constraints
	print(" | Trial ended with result: "+str(res) + "\n")
	trial += 1
	return res
	
with open ("log", 'wt') as f:
	f.write("Begin log"+"\n")
	f.flush()
	os.fsync(f)


optimizer_name = "Cobyla"

lb = [0.001, 0.001] # lower-bound
ub = [1.0, 0.30] # upper bound

instrumentation = ng.p.Instrumentation(
	p_worst=ng.p.Log(lower=lb[1], upper=ub[1]),
	cc_choice=ng.p.Log(lower=lb[0], upper=ub[0])
)
num_workers = 1
num_iterations = 5000 * num_workers # budget per worker

# Let us create a Nevergrad optimization method.
optimizer = ng.optimizers.registry[optimizer_name](instrumentation, budget=num_iterations, num_workers=num_workers)
# do the job
recommendation = optimizer.minimize(model)

# visualize result
print(recommendation.kwargs)
#print(optimizer.recommend().value)
