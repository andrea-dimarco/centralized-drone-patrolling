# 
# Andrea Di Marco
# 1935169
# 2022
#

import os
import sys
import os.path

from OMPython import OMCSessionZMQ
import nevergrad as ng


trial = 1
best = 200000.0

def multiple_samples(num_samples):
	AvgDrones = []
	AvgNoDrone = []
	MaxNoDrone = []
	PrDrones = []
	StdDev = []

	mu_AvgDrones = 0.0
	mu_AvgNoDrone = 0.0
	mu_MaxNoDrone = 0.0
	mu_PrDrones = 0.0
	mu_StdDev = 0.0

	for j in range(num_samples):
				
		# execute simulation
		os.system("./System >> log")
		
		with open ("outputs.txt", 'r') as f:
			i = 1
			for line in f:
				if i == 2:
					# unpack line
					tokens = line.split()
					# get values
					AvgDrones.append(float(tokens[0]))
					AvgNoDrone.append(float(tokens[1]))
					MaxNoDrone.append(float(tokens[2]))
					PrDrones.append(float(tokens[3]))
					StdDev.append(float(tokens[4]))
				else:
					i += 1
			f.close()

	mu_AvgDrones = sum(AvgDrones)/num_samples
	mu_AvgNoDrone = sum(AvgNoDrone)/num_samples
	mu_MaxNoDrone = sum(MaxNoDrone)/num_samples
	mu_PrDrones = sum(PrDrones)/num_samples
	mu_StdDev = sum(StdDev)/num_samples
	
	return (mu_AvgDrones, mu_AvgNoDrone, mu_MaxNoDrone, mu_PrDrones, mu_StdDev )


#  model output function
def model(p_worst: float, cc_choice: float, p_recharge: float) -> float:
	# seed random number generator
	res = 0.0
	AvgDrones = 0.0
	AvgNoDrone = 0.0
	MaxNoDrone = 0.0
	PrDrones = 0.0
	StdDev = 0.0
	num_samples = 10
	global trial
	global num_iterations
	
	print("[+]Test started.")
		    
	# execute simulation
	AvgDrones, AvgNoDrone, MaxNoDrone, PrDrones, StdDev = multiple_samples(num_samples)
	
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
	
	c1 = 0.80 - AvgDrones
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
	
	l6 = 0.0025
	l7 = 0.0025
	
	res = obj*l0 + c1*l1 + c2*l2 + c3*l3 + c4*l4 + c5*l5 + c6*l6 + c7*l7  # cl of constraints
	print(" | Test ended.")
	trial += 1
	
	if res <= best:
		best = res
		with open("avg-results.txt", "w") as f:
			f.write("res: " + str(res) + "\nobj: " + str(obj) + " (" + str(obj*l0) + ") ["+str(obj*l0/res*100)+"%]\n\nc1:  " + str(c1) + " (" + str(c1*l1) + ")["+str(c1*l1/res*100)+"%]\nc2:  " + str(c2) + " (" + str(c2*l2) + ") ["+str(c2*l2/res*100)+"%]\nc3:  " + str(c3) + " (" + str(c3*l3) + ") ["+str(c3*l3/res*100)+"%]\nc4:  " + str(c4) + " (" + str(c4*l4)+ ") ["+str(c4*l4/res*100)+"%]\nc5:  " + str(c5) + " (" + str(c5*l5) + ") ["+str(c5*l5/res*100)+"%]\n\nc6:  " + str(c6) + " (" + str(c6*l6) + ") ["+str(c6*l6/res*100)+"%]\nc7:  " + str(c7) + " (" + str(c7*l7)+ ") ["+str(c7*l7/res*100)+"%]\n\n-------\n\nAvgDrones:  " + str(AvgDrones) + "\nAvgNoDrone: " + str(AvgNoDrone) + "\nMaxNoDrone: " + str(MaxNoDrone) + "\nPrDrones:   " + str(PrDrones) + "\nStdDev:     " + str(StdDev) + "\n")
			f.flush()
			os.fsync(f)
			
	
	return res
	
with open ("log", 'wt') as f:
	f.write("Begin log"+"\n")
	f.flush()
	os.fsync(f)


optimizer_name = "Powell"

lb = [0.001, 0.001, 0.0001] # lower-bound
ub = [1.0,   0.30,  0.02  ] # upper bound

instrumentation = ng.p.Instrumentation(
	cc_choice=ng.p.Log(lower=lb[0], upper=ub[0]),
	p_worst=ng.p.Log(lower=lb[1], upper=ub[1]),
	p_recharge=ng.p.Log(lower=lb[2], upper=ub[2]),
)
num_workers = 1
num_iterations = 1 * num_workers # budget per worker

# Let us create a Nevergrad optimization method.
optimizer = ng.optimizers.registry[optimizer_name](instrumentation, budget=num_iterations, num_workers=num_workers, )
# do the job
recommendation = optimizer.minimize(model)

# visualize result
#print(recommendation.kwargs)
#print(optimizer.recommend().value)
os._exit(0)

