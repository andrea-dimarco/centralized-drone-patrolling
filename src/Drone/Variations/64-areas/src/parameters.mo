
record Prm

		// time related parameters
	parameter Real stop_simulation = 50400.0; //172800; // 14 hours // 2 days
		// comm related parameter
	parameter Integer fifo_len = 10;
	parameter Integer msg_len = 5;
	
	parameter Real Tdrone = 1.0; // drone refresh rate
	parameter Real Tcc = 1.0; // control center refresh rate
	parameter Real Tm = 60.0; // monitor refresh rate
	parameter Real monitor_start = 1E-2;
	
	parameter Integer nDrones = 7; // Number of uavs

	parameter Real cc_choice = 0.48557; // decisione control center (exploitation)
	parameter Real p_worst = 0.11837; // probability of choosing the worst option (exploration)
	parameter Real p_recharge = 0.01224; // 0,15% max probability of sending a drone to recharge even if battery charged
	
	parameter Real comm_timeout = 300.0; // the amount of time the CC waits for an answer from the drone before considering it dead 
	
		// più simulazioni e valore atteso
	parameter Real p_comm_error = 0.05; // probability of communication error between CC and drones 
	parameter Real arrival_timeout = 60.0; // the maximum time CC waits before resetting the setpoint of the drone
	
	//Distanza da mantenere tra ogni drone
	parameter Real dDistance = 25; 
	
	//Costante utile alla cattura dei risultati. Valuta una distanza massima dal punto di arrivo al fine di considerare il drone arrivato a destinazione
	parameter Real arrivalThreshold = 20;

	//Dimensione area di volo
	parameter Real flyZone[3] = {200.0, 200.0, 200.0}; //in meters
	parameter Real docking_bay[3] = {-10.0, -10.0, -10.0}; // outside the fly zone

	//--------------------------------------------

	//Costanti Drone

	//Peso del drone
	parameter Real m = 0.895;

	//Velocità massima di volo(m/s)
	parameter Real maxSpeed = 15;

	//Distanza di controllo ambientale tramite videocamera
		//Orizzontale
		parameter Real horizontalODD = 40;
		//Verticale
		parameter Real verticalODD = 30;

	//Massimo angolo di sterzata
	parameter Real maxAngle = 30.0;

	//Distanza minima tra droni e ostacoli
	parameter Real minDistanceFromObs = 5.0;
	
	//Distanza di sicurezza dagli ostacoli e utilizzata per manovra di evasione
	parameter Real dangerRadius = minDistanceFromObs + 3.0;


	parameter Real unita = 10; // numero di mAh che la batteria perde/guadagna ogni battito
	//Capacità massima (mAh) di un drone
	parameter Real capacity = 18000.0*unita; // should last 5 hours
	
	// Perdita di batteria dovuta al movimento
	parameter Real batteryDischarge = 1.0*unita; // should last 5 hours
	
	// perdita di batteria dovuta alla comunicazionne
	parameter Real commDischarge = 5.0*unita;
	
	parameter Real rechargeRate = 2.5*unita; // should recharge in 2 hours 7200 seconds)
	
	parameter Real dangerousBatteryPercentage = 0.05;
	
	parameter Real dangerousBatteryLevel = capacity*dangerousBatteryPercentage;
	
	parameter Real rechargedPercentage = 0.99;
	
	parameter Real rechargedThreshold = capacity*rechargedPercentage;
	
	// numero e coordinate aree
	parameter Integer nAreas = 64;
	parameter Real areas[64,6] = {
		//l_x             u_x               l_y              u_y             l_z           u_z
		{ 0.0,            flyZone[3]*1/8,   flyZone[3]*7/8,  flyZone[3],     0.0,          flyZone[3] }, // 1
		{ flyZone[3]*1/8, flyZone[3]*1/4,   flyZone[3]*7/8,  flyZone[3],     0.0,          flyZone[3] }, // 2
		{ flyZone[3]*1/4, flyZone[3]*3/8,   flyZone[3]*7/8,  flyZone[3],     0.0,          flyZone[3] }, // 3
		{ flyZone[3]*3/8, flyZone[3]*1/2,   flyZone[3]*7/8,  flyZone[3],     0.0,          flyZone[3] }, // 4
		{ flyZone[3]*1/2, flyZone[3]*5/8,   flyZone[3]*7/8,  flyZone[3],     0.0,          flyZone[3] }, // 5
		{ flyZone[3]*5/8, flyZone[3]*3/4,   flyZone[3]*7/8,  flyZone[3],     0.0,          flyZone[3] }, // 6
		{ flyZone[3]*3/4, flyZone[3]*7/8,   flyZone[3]*7/8,  flyZone[3],     0.0,          flyZone[3] }, // 7
		{ flyZone[3]*7/8, flyZone[3],       flyZone[3]*7/8,  flyZone[3],     0.0,          flyZone[3] }, // 8
		
		{ 0.0,            flyZone[3]*1/8,   flyZone[3]*3/4,  flyZone[3]*7/8, 0.0,          flyZone[3] }, // 9
		{ flyZone[3]*1/8, flyZone[3]*1/4,   flyZone[3]*3/4,  flyZone[3]*7/8, 0.0,          flyZone[3] }, // 10
		{ flyZone[3]*1/4, flyZone[3]*3/8,   flyZone[3]*3/4,  flyZone[3]*7/8, 0.0,          flyZone[3] }, // 11
		{ flyZone[3]*3/8, flyZone[3]*1/2,   flyZone[3]*3/4,  flyZone[3]*7/8, 0.0,          flyZone[3] }, // 12
		{ flyZone[3]*1/2, flyZone[3]*5/8,   flyZone[3]*3/4,  flyZone[3]*7/8, 0.0,          flyZone[3] }, // 13
		{ flyZone[3]*5/8, flyZone[3]*3/4,   flyZone[3]*3/4,  flyZone[3]*7/8, 0.0,          flyZone[3] }, // 14
		{ flyZone[3]*3/4, flyZone[3]*7/8,   flyZone[3]*3/4,  flyZone[3]*7/8, 0.0,          flyZone[3] }, // 15
		{ flyZone[3]*7/8, flyZone[3],       flyZone[3]*3/4,  flyZone[3]*7/8, 0.0,          flyZone[3] }, // 16
		
		{ 0.0,            flyZone[3]*1/8,   flyZone[3]*5/8,  flyZone[3]*3/4, 0.0,          flyZone[3] }, // 17
		{ flyZone[3]*1/8, flyZone[3]*1/4,   flyZone[3]*5/8,  flyZone[3]*3/4, 0.0,          flyZone[3] }, // 18
		{ flyZone[3]*1/4, flyZone[3]*3/8,   flyZone[3]*5/8,  flyZone[3]*3/4, 0.0,          flyZone[3] }, // 19
		{ flyZone[3]*3/8, flyZone[3]*1/2,   flyZone[3]*5/8,  flyZone[3]*3/4, 0.0,          flyZone[3] }, // 20
		{ flyZone[3]*1/2, flyZone[3]*5/8,   flyZone[3]*5/8,  flyZone[3]*3/4, 0.0,          flyZone[3] }, // 21
		{ flyZone[3]*5/8, flyZone[3]*3/4,   flyZone[3]*5/8,  flyZone[3]*3/4, 0.0,          flyZone[3] }, // 22
		{ flyZone[3]*3/4, flyZone[3]*7/8,   flyZone[3]*5/8,  flyZone[3]*3/4, 0.0,          flyZone[3] }, // 23
		{ flyZone[3]*7/8, flyZone[3],       flyZone[3]*5/8,  flyZone[3]*3/4, 0.0,          flyZone[3] }, // 24
		
		{ 0.0,            flyZone[3]*1/8,   flyZone[3]*1/2,  flyZone[3]*5/8, 0.0,          flyZone[3] }, // 25
		{ flyZone[3]*1/8, flyZone[3]*1/4,   flyZone[3]*1/2,  flyZone[3]*5/8, 0.0,          flyZone[3] }, // 26
		{ flyZone[3]*1/4, flyZone[3]*3/8,   flyZone[3]*1/2,  flyZone[3]*5/8, 0.0,          flyZone[3] }, // 27
		{ flyZone[3]*3/8, flyZone[3]*1/2,   flyZone[3]*1/2,  flyZone[3]*5/8, 0.0,          flyZone[3] }, // 28
		{ flyZone[3]*1/2, flyZone[3]*5/8,   flyZone[3]*1/2,  flyZone[3]*5/8, 0.0,          flyZone[3] }, // 29
		{ flyZone[3]*5/8, flyZone[3]*3/4,   flyZone[3]*1/2,  flyZone[3]*5/8, 0.0,          flyZone[3] }, // 30
		{ flyZone[3]*3/4, flyZone[3]*7/8,   flyZone[3]*1/2,  flyZone[3]*5/8, 0.0,          flyZone[3] }, // 31
		{ flyZone[3]*7/8, flyZone[3],       flyZone[3]*1/2,  flyZone[3]*5/8, 0.0,          flyZone[3] }, // 32
		
		{ 0.0,            flyZone[3]*1/8,   flyZone[3]*3/8,  flyZone[3]*1/2, 0.0,          flyZone[3] }, // 33
		{ flyZone[3]*1/8, flyZone[3]*1/4,   flyZone[3]*3/8,  flyZone[3]*1/2, 0.0,          flyZone[3] }, // 34
		{ flyZone[3]*1/4, flyZone[3]*3/8,   flyZone[3]*3/8,  flyZone[3]*1/2, 0.0,          flyZone[3] }, // 35
		{ flyZone[3]*3/8, flyZone[3]*1/2,   flyZone[3]*3/8,  flyZone[3]*1/2, 0.0,          flyZone[3] }, // 36
		{ flyZone[3]*1/2, flyZone[3]*5/8,   flyZone[3]*3/8,  flyZone[3]*1/2, 0.0,          flyZone[3] }, // 37
		{ flyZone[3]*5/8, flyZone[3]*3/4,   flyZone[3]*3/8,  flyZone[3]*1/2, 0.0,          flyZone[3] }, // 38
		{ flyZone[3]*3/4, flyZone[3]*7/8,   flyZone[3]*3/8,  flyZone[3]*1/2, 0.0,          flyZone[3] }, // 39
		{ flyZone[3]*7/8, flyZone[3],       flyZone[3]*3/8,  flyZone[3]*1/2, 0.0,          flyZone[3] }, // 40
		
		{ 0.0,            flyZone[3]*1/8,   flyZone[3]*1/4,  flyZone[3]*3/8, 0.0,          flyZone[3] }, // 41
		{ flyZone[3]*1/8, flyZone[3]*1/4,   flyZone[3]*1/4,  flyZone[3]*3/8, 0.0,          flyZone[3] }, // 42
		{ flyZone[3]*1/4, flyZone[3]*3/8,   flyZone[3]*1/4,  flyZone[3]*3/8, 0.0,          flyZone[3] }, // 43
		{ flyZone[3]*3/8, flyZone[3]*1/2,   flyZone[3]*1/4,  flyZone[3]*3/8, 0.0,          flyZone[3] }, // 44
		{ flyZone[3]*1/2, flyZone[3]*5/8,   flyZone[3]*1/4,  flyZone[3]*3/8, 0.0,          flyZone[3] }, // 45
		{ flyZone[3]*5/8, flyZone[3]*3/4,   flyZone[3]*1/4,  flyZone[3]*3/8, 0.0,          flyZone[3] }, // 46
		{ flyZone[3]*3/4, flyZone[3]*7/8,   flyZone[3]*1/4,  flyZone[3]*3/8, 0.0,          flyZone[3] }, // 47
		{ flyZone[3]*7/8, flyZone[3],       flyZone[3]*1/4,  flyZone[3]*3/8, 0.0,          flyZone[3] }, // 48
		
		{ 0.0,            flyZone[3]*1/8,   flyZone[3]*1/8,  flyZone[3]*1/4, 0.0,          flyZone[3] }, // 49
		{ flyZone[3]*1/8, flyZone[3]*1/4,   flyZone[3]*1/8,  flyZone[3]*1/4, 0.0,          flyZone[3] }, // 50
		{ flyZone[3]*1/4, flyZone[3]*3/8,   flyZone[3]*1/8,  flyZone[3]*1/4, 0.0,          flyZone[3] }, // 51
		{ flyZone[3]*3/8, flyZone[3]*1/2,   flyZone[3]*1/8,  flyZone[3]*1/4, 0.0,          flyZone[3] }, // 52
		{ flyZone[3]*1/2, flyZone[3]*5/8,   flyZone[3]*1/8,  flyZone[3]*1/4, 0.0,          flyZone[3] }, // 53
		{ flyZone[3]*5/8, flyZone[3]*3/4,   flyZone[3]*1/8,  flyZone[3]*1/4, 0.0,          flyZone[3] }, // 54
		{ flyZone[3]*3/4, flyZone[3]*7/8,   flyZone[3]*1/8,  flyZone[3]*1/4, 0.0,          flyZone[3] }, // 55
		{ flyZone[3]*7/8, flyZone[3],       flyZone[3]*1/8,  flyZone[3]*1/4, 0.0,          flyZone[3] }, // 56
		
		{ 0.0,            flyZone[3]*1/8,   0.0,             flyZone[3]*1/8, 0.0,          flyZone[3] }, // 57
		{ flyZone[3]*1/8, flyZone[3]*1/4,   0.0,             flyZone[3]*1/8, 0.0,          flyZone[3] }, // 58
		{ flyZone[3]*1/4, flyZone[3]*3/8,   0.0,             flyZone[3]*1/8, 0.0,          flyZone[3] }, // 59
		{ flyZone[3]*3/8, flyZone[3]*1/2,   0.0,             flyZone[3]*1/8, 0.0,          flyZone[3] }, // 60
		{ flyZone[3]*1/2, flyZone[3]*5/8,   0.0,             flyZone[3]*1/8, 0.0,          flyZone[3] }, // 61
		{ flyZone[3]*5/8, flyZone[3]*3/4,   0.0,             flyZone[3]*1/8, 0.0,          flyZone[3] }, // 62
		{ flyZone[3]*3/4, flyZone[3]*7/8,   0.0,             flyZone[3]*1/8, 0.0,          flyZone[3] }, // 63
		{ flyZone[3]*7/8, flyZone[3],       0.0,             flyZone[3]*1/8, 0.0,          flyZone[3] }  // 64	
		
	};


end Prm;

