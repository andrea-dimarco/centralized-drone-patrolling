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
best = 200000.0
#  model output function
def model(p_worst: float, cc_choice: float, p_recharge: float) -> float:
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
		f.write("p.cc_choice="+str(cc_choice)+"\n"+"p.p_worst="+str(p_worst)+"\np.p_recharge="+str(p_recharge)+"\n")
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
	
	global best
	 
	# distanze da limiti
	ds = [0.0, 0.0, 0.0] # proximity (%) to either upperbound or lowerbound
	ds[0] = (cc_choice - lb[0])/(ub[0]-lb[0])*100
	ds[1] = (p_worst - lb[1])/(ub[1]-lb[1])*100
	
	# constraints
	# if ci > 0 then constraint has been violated
	
	obj = -AvgDrones
	
	c1 = 0.85 - AvgDrones
	c2 = (AvgNoDrone - 30.0)/10
	c3 = (MaxNoDrone - 180)/10 # 3 min
	c4 = 0.20 - PrDrones
	c5 = StdDev - 0.5
	
	c6 = abs(ds[0] - 50.0) - 40.0 # input must be withing range of 40% from middle of parameter's domain
	c7 = abs(ds[1] - 50.0) - 45.0 # input must be withing range of 45% from middle of parameter's domain
	
	# moltiplicatori di lagrange
	l0 = 1.0#0.60
	
	l1 = 0.60
	l2 = 0.10
	l3 = 0.025
	l4 = 0.20
	l5 = 0.20
	
	l6 = 0.005
	l7 = 0.005
	
	res = obj*l0 + c1*l1 + c2*l2 + c3*l3 + c4*l4 + c5*l5 + c6*l6 + c7*l7  # cl of constraints
	print(" | Trial ended with result: "+str(res) + "\n")
	trial += 1
	
	if res <= best:
		best = res
		with open("best_result_nevergrad.txt", "w") as f:
			f.write("res: " + str(res) + "\nobj: " + str(obj) + " (" + str(obj*l0) + ") ["+str(obj*l0/res*100)+"%]\n\nc1:  " + str(c1) + " (" + str(c1*l1) + ")["+str(c1*l1/res*100)+"%]\nc2:  " + str(c2) + " (" + str(c2*l2) + ") ["+str(c2*l2/res*100)+"%]\nc3:  " + str(c3) + " (" + str(c3*l3) + ") ["+str(c3*l3/res*100)+"%]\nc4:  " + str(c4) + " (" + str(c4*l4)+ ") ["+str(c4*l4/res*100)+"%]\nc5:  " + str(c5) + " (" + str(c5*l5) + ") ["+str(c5*l5/res*100)+"%]\n\nc6:  " + str(c6) + " (" + str(c6*l6) + ") ["+str(c6*l6/res*100)+"%]\nc7:  " + str(c7) + " (" + str(c7*l7)+ ") ["+str(c7*l7/res*100)+"%]\n\n-------\n\nAvgDrones:  " + str(AvgDrones) + "\nAvgNoDrone: " + str(AvgNoDrone) + "\nMaxNoDrone: " + str(MaxNoDrone) + "\nPrDrones:   " + str(PrDrones) + "\nStdDev:     " + str(StdDev) + "\n\n-------\n\ncc_choice: " + str(cc_choice) + "\np_worst: " + str(p_worst) + "\np_recharge: "+str(p_recharge) + "\n")
			f.flush()
			os.fsync(f)
			
	
	return res
	
with open ("log", 'wt') as f:
	f.write("Begin log"+"\n")
	f.flush()
	os.fsync(f)


optimizer_name = "Cobyla"

lb = [0.001, 0.001, 0.0001] # lower-bound
ub = [1.0,   0.30,  0.02  ] # upper bound

instrumentation = ng.p.Instrumentation(
	cc_choice=ng.p.Log(lower=lb[0], upper=ub[0]),
	p_worst=ng.p.Log(lower=lb[1], upper=ub[1]),
	p_recharge=ng.p.Log(lower=lb[2], upper=ub[2]),
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