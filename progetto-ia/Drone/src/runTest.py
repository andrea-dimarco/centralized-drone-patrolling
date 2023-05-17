import PyNomad

# This example of blackbox function is for a single process
# The blackbox output must be put in the EvalPoint passed as argument
# la funzione obiettivo può restituire diversi vincoli che vengono contati come grado di violazione, ovver da >0 è violato
def bb(x):
    dim = x.size() # x oggetto di PyNomad che rappresenta i parametri
    f = sum([x.get_coord(i)**2 for i in range(dim)]) # get_coord per accedere all'i-esimo parametro
    
    # esempio constraint
    obj = 7
    c1 = -3
    c2 = 0
    #unisci i valori in una stringa
    f = str(obj) + " " + str(c1) + " " + str(c2)
    
    x.setBBO(str(f).encode("UTF-8")) # l'output va impostato dentro x come stringa nel formato alla riga 15
    return 1 # 1: success 0: failed evaluation

x0 = [0.71, 0.51, 0.51] # condizione iniziale
lb = [-1, -1, -1] # lower-bound
ub = [] # upper bound (definito dentro params)
#obligatorio output singolo insieme ai constraint ad esempio 'PB' (vedi documentazione)
# MAX_BB_EVAL è il budget
# UPPERBOUND imposta l'upper-bound per tutte le variabili a uno, per impostarslo separatamente mettere gli spazi Es(1 2 3)
# PB progressive barrier
params = ["BB_OUTPUT_TYPE OBJ PB PB", "MAX_BB_EVAL 100", "UPPER_BOUND * 1", "DISPLAY_DEGREE 2", "DISPLAY_ALL_EVAL false", "DISPLAY_STATS BBE OBJ"] 

# prendi suggerimenti
# cerca il minimo valore che rispetta tutti i constraint
# altrimenti restituisce quello che rispetta il più possibile i constraint
result = PyNomad.optimize(bb, x0, lb, ub, params)

fmt = ["{} = {}".format(n,v) for (n,v) in result.items()]
output = "\n".join(fmt)
print("\nNOMAD results \n" + output + " \n")
