import os
import sys
import math
import numpy as np
import time
import os.path

from OMPython import OMCSessionZMQ
import PyNomad

trial = 1
best = 20000.0

# This example of blackbox function is for a single process
# The blackbox output must be put in the EvalPoint passed as argument
# la funzione obiettivo può restituire diversi vincoli che vengono contati come grado di violazione, ovver da >0 è violato
def model(x):
	dim = x.size() # x oggetto di PyNomad che rappresenta i parametri
	f = [x.get_coord(i)**2 for i in range(dim)] # get_coord per accedere all'i-esimo parametro

	# estraggo i parametri
	cc_choice       = f[0]
	p_worst         = f[1]
	
	# limiti
	global lb # lower-bound
	global ub # upper bound
	
	global best
	global budget
	
	# distanze da limiti
	ds = [0.0, 0.0, 0.0] # proximity (%) to either upperbound or lowerbound
	ds[0] = (cc_choice -lb[0])/(ub[0]-lb[0])*100
	ds[1] = (p_worst -lb[1])/(ub[1]-lb[1])*100
	
	
	# initialize variables
	AvgDrones = 0.0
	AvgNoDrone = 0.0
	MaxNoDrone = 0.0
	PrDrones = 0.0
	StdDev = 0.0
	global trial

	# prepare simulation
	#os.system("rm -f modelica_parameters.in") # To be on the safe side
	with open ("modelica_parameters.in", 'wt') as f:
		f.write("p.cc_choice="+str(cc_choice) + "\n"+ "p.p_worst="+str(p_worst) + "\n")
		f.flush()
		os.fsync(f)
		    
	# execute simulation
	print("[+]Trial " + str(trial) + " of " + str(budget) + " (" + str(trial/budget*100) + "%) started")
	os.system("./System -overrideFile=modelica_parameters.in >> log")
	os.system("rm -f modelica_parameters.in") # To be on the safe side
	
	# get output from the model
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
    
	# objectinve function
	obj = -AvgDrones
	
	# constraints
		# if ci > 0 then constraint has been violated
	c1 = 0.85 - AvgDrones
	c2 = (AvgNoDrone - 30.0)/10
	c3 = (MaxNoDrone - 180)/10 # 3 min
	c4 = 0.20 - PrDrones
	c5 = StdDev - 0.5
	
	c6 = abs(ds[0]-50.0) - 40.0 # input must be withing range of 40% from middle of parameter's domain
	c7 = abs(ds[1]-50.0) - 40.0 # input must be withing range of 40% from middle of parameter's domain
	
	# verbosity
	print(" | Trial " + str(trial) + " ended with obj = " + str(obj))# + "\n")
	print(" | Parameters distance from bounds: " + str(int(ds[0])) +"% "+ str(int(ds[1])) +"%" + "\n")
	trial += 1

	if obj <= best:
		best = obj
		with open("best_result.txt", "w") as f:
			f.write("obj: " + str(obj) + "\nc1:  " + str(c1) + "\nc2:  " + str(c2) + "\nc3:  " + str(c3) + "\nc4:  " + str(c4) + "\nc5:  " + str(c5) + "\n\nc6:  " + str(c6) + "\nc7:  " + str(c7) + "\n\n-------\n\nAvgDrones:  " + str(AvgDrones) + "\nAvgNoDrone: " + str(AvgNoDrone) + "\nMaxNoDrone: " + str(MaxNoDrone) + "\nPrDrones:   " + str(PrDrones) + "\nStdDev:     " + str(StdDev) + "\n\n-------\n\ncc_choice: " + str(cc_choice) + "\np_worst: " + str(p_worst) + "\n")
			f.flush()
			os.fsync(f)

	# format output
	f = str(obj) + " " + str(c1) + " " + str(c2) + " " + str(c3) + " " + str(c4) + " " + str(c5) + " " + str(c6) + " " + str(c7)
	# write output
	x.setBBO(str(f).encode("UTF-8"))
	# end
	return 1 # 1: success 0: failed evaluation
    
    
    
   
# cc_choice, p_worst
x0 = [0.5, 0.05] # condizione iniziale
lb = [0.0, 0.01] # lower-bound
ub = [1.0, 0.30] # upper bound

budget = 10000# 10 thousand
params = ["BB_OUTPUT_TYPE OBJ PB PB PB PB PB PB PB", "MAX_BB_EVAL "+str(budget), "DISPLAY_DEGREE 2", "DISPLAY_ALL_EVAL false", "DISPLAY_STATS BBE OBJ"] 

# prendi suggerimenti
# cerca il minimo valore che rispetta tutti i constraint
# altrimenti restituisce quello che rispetta il più possibile i constraint
result = PyNomad.optimize(model, x0, lb, ub, params)

# stampa i risultati
fmt = ["{} = {}".format(n,v) for (n,v) in result.items()]
output = "\n".join(fmt)
print("\nNOMAD results \n" + output + " \n")
