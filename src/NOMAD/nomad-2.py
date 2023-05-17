import os
import sys
import math
import numpy as np
import time
import os.path

from OMPython import OMCSessionZMQ
import PyNomad

trial = 1

# This example of blackbox function is for a single process
# The blackbox output must be put in the EvalPoint passed as argument
# la funzione obiettivo può restituire diversi vincoli che vengono contati come grado di violazione, ovver da >0 è violato
def model(x):
	dim = x.size() # x oggetto di PyNomad che rappresenta i parametri
	f = [x.get_coord(i)**2 for i in range(dim)] # get_coord per accedere all'i-esimo parametro

	# estraggo i parametri
	cc_choice = f[0]
	Tcc = f[1]
	# eseguo il modello
	np.random.seed(1)
	res = 0.0
	AvgDrones = 0.0
	AvgNoDrone = 0.0
	MaxNoDrone = 0.0
	PrDrones = 0.0
	StdDev = 0.0
	global trial

	print("- trial "+str(trial)+" started with parameter: "+str(cc_choice)+", "+str(Tcc))

	os.system("rm -f System_res.mat") # To be on the safe side
	os.system("rm -f modelica_parameters.in") # To be on the safe side

	with open ("modelica_parameters.in", 'wt') as f:
		f.write("p.cc_choice="+str(cc_choice)+"\n"+"p.Tcc="+str(Tcc)+"\n")
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
	
	trial += 1
    
	# calcola risultato finale e constraint
	obj = AvgNoDrone
	# se ci > 0 allora il vincolo è stato violato
	c1 = 0.30 - AvgDrones
	c2 = AvgNoDrone - 100.0
	c3 = MaxNoDrone - 400
	c4 = 0.10 - PrDrones
	c5 = StdDev - 0.4
	#unisci i valori in una stringa
	f = str(obj) + " " + str(c1) + " " + str(c2) + " " + str(c3) + " " + str(c4) + " " + str(c5)
	print("-- trial " + str(trial) + " ended with result: " + f + "\n")

	# formatta output
	x.setBBO(str(f).encode("UTF-8")) # l'output va impostato dentro x come stringa nel formato "val1 val2 val3 ..."
	# fine
	return 1 # 1: success 0: failed evaluation
    
    
    
   
# cc_choice, Tcc
x0 = [0.5, 1.5] # condizione iniziale
lb = [0.0, 1.0] # lower-bound
ub = [1.0, 3.0] # upper bound

# PB = progressive barrier
budget = 500;
params = ["BB_OUTPUT_TYPE OBJ PB PB PB PB PB", "MAX_BB_EVAL "+str(budget), "DISPLAY_DEGREE 2", "DISPLAY_ALL_EVAL false", "DISPLAY_STATS BBE OBJ"] 

# prendi suggerimenti
# cerca il minimo valore che rispetta tutti i constraint
# altrimenti restituisce quello che rispetta il più possibile i constraint
result = PyNomad.optimize(model, x0, lb, ub, params)

# stampa i risultati
fmt = ["{} = {}".format(n,v) for (n,v) in result.items()]
output = "\n".join(fmt)
print("\nNOMAD results \n" + output + " \n")
