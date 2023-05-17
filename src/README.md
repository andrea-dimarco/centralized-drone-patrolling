###########
# MODELLO #
###########

Il modello di Modelica si trova nella cartella ./Drone

Variazioni delle configurazioni dei parametri (numero aree, numero droni) si trovano nella cartella ./Drone/Variations

Per eseguire il modello si consigliano le cartelle contenenti i file già compilati per ogni configurazione, situati nelle cartelle

./Drone/Variations/x-areas/y%-drones

A quel punto chiamare lo script multi-test.py che eseguirà 10 simulazioni e ritornerà la media dei risultati nel file avg-results.txt 
In alternativa si può eseguire direttamente una singola simulazione con il comando ./System oppure ./run.sh che salverà i risultati nel file outputs.txt


#############
# NEVERGRAD #
#############

Gli script di Nevergrad si trovano nella cartella ./Nevergrad, per testarli basterà quindi copiare il file python desideraro nella cartella ./Drone, ed eseguirlo.


#########
# NOMAD #
#########

Gli script di NOMAD si trovano nella cartella ./NOMAD, per testarli basterà quindi copiare il file python desiderato nella cartella ./Drone, ed eseguirlo.


##########
# SERVER #
##########

Per eseguirlo occorre scrivere sul file ./Server/DB-api.c alla riga 210 le credenziali per accedere ad un database PostgreSQL già esistente (oppure crearne uno con le credenziali scritte nel file).

A quel punto accendere il server dalla cartella ./Server con ./server (si consiglia di eseguire il server in background)

Per spegnere il server eseguire ./turn-off-server da dentro la cartella ./Drone, o anche da ./

:)
