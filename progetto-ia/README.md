###########
# MODELLO #
###########

Il modello di Modelica è già compilato. Per una versione più leggibile basta guardare in progetto-ia/Drone/AAA-Drone-non-compilato.

Per eseguirlo occorre scrivere sul file progetto-ia/Server/DB-api.c alla riga 210 le credenziali per accedere ad un database PostgreSQL già esistente (oppure crearne uno con le credenziali scritte nel file).

A quel punto non si dimentichi di accendere il server dalla cartella 'Server' con ./server (si consiglia di eseguire il server in background)


#############
# LIBRERIE  #
#############

Per poter testare gli script occorrono le librerie corrette.
Dovrebbe bastare (per Ubuntu) eseguire lo script ./build.sh in progetto-ia/


#############
# NEVERGRAD #
#############

Gli script di Nevergrad si trovano nella cartella progetto-ia/Nevergrad, per testarli basterà quindi copiare il file python desideraro nella cartella Drone, ed eseguirlo con

python3 <nome-file>.py


#########
# NOMAD #
#########

Gli script di NOMAD si trovano nella cartella progetto-ia/NOMAD, per testarli basterà quindi copiare il file python desideraro nella cartella Drone, ed eseguirlo con

python <nome-file>.py


##########
# SERVER #
##########

Per spegnere il server eseguire ./turn-off-server da dentro la cartella progetto-ia/Drone, o anche da progetto-ia/

:)
