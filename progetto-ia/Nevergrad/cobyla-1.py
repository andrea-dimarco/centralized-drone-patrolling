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
def model(cc_choice: float) -> float:
	# seed random number generator
	np.random.seed(1)
	res = 0.0
	AvgDrones = 0.0
	AvgNoDrone = 0.0
	MaxNoDrone = 0.0
	PrDrones = 0.0
	StdDev = 0.0
	global trial
	
	print("- trial "+str(trial)+" started with parameter: "+str(cc_choice))
	
	os.system("rm -f System_res.mat") # To be on the safe side
	os.system("rm -f modelica_parameters.in") # To be on the safe side
	
	with open ("modelica_parameters.in", 'wt') as f:
		f.write("p.cc_choice="+str(cc_choice)+"\n")
		f.flush()
		os.fsync(f)
		    
	# execute simulation
	os.system("./System -overrideFile=modelica_parameters.in >> log")

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
	
	res = AvgNoDrone
	print("-- trial "+str(trial)+" ended with result: "+str(res)+"\n")
	
	trial += 1
	
	return res
	
with open ("log", 'wt') as f:
	f.write("Begin log"+"\n")
	f.flush()
	os.fsync(f)


optimizer_name = "Cobyla"

											# a Real between 0.001 to 1
instrumentation = ng.p.Instrumentation( cc_choice=ng.p.Log(lower=0.001, upper=1.0) )
num_workers = 1
num_iterations = 500 * num_workers # budget per lavoratore

# Let us create a Nevergrad optimization method.
optimizer = ng.optimizers.registry[optimizer_name](instrumentation, budget=num_iterations, num_workers=num_workers)
recommendation = optimizer.minimize(model)

# visualize result
print(recommendation.kwargs)
#print(optimizer.recommend().value)
