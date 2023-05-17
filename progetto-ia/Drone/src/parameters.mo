
record Prm

		// time related parameters
	parameter Real stop_simulation = 250.0;	
	
	parameter Real Tdrone = 1.0; // drone wait time
	parameter Real Tcc = 2.05646;//1.5; // control center wait time
	parameter Real Tm = 5.0; // monitor wait time
	parameter Real monitor_start = 0.01;
	
	parameter Real cc_choice = 0.02997; // decisione control center
	parameter Real p_worst = 0.05; // probability of choosing the worst option (exploration)
	parameter Real comm_timeout = 10.0; // the amount of time the CC waits for an answer from the drone before considering it dead 
		// più simulazioni e valore atteso
	parameter Real p_comm_error = 0.10; // probability of communication error between CC and drones 
	parameter Real arrival_timeout = 20.0; // the maximum time CC waits before force resetting the setpoint of the drone

	parameter Integer nDrones = 3; // Number of uavs
	
	//Distanza da mantenere tra ogni drone
	parameter Real dDistance = 25; 
	
	//Costante utile alla cattura dei risultati. Valuta una distanza massima dal punto di arrivo al fine di considerare il drone arrivato a destinazione
	parameter Real arrivalThreshold = 5;

	//Dimensione area di volo
	parameter Real flyZone[3] = {200.0, 200.0, 200.0};
	parameter Real docking_bay[3] = {-10.0, -10.0, -10.0}; // outside the fly zone

	//--------------------------------------------

	//Costanti Drone

	//Peso
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

	//Distanza di sicurezza che ogni drone deve mantenere dagli ostacoli(dm) e che utilizza per iniziare la manovra di evasione
	parameter Real dangerRadius = 8.0;

	//Distanza minima tra droni e ostacoli
	parameter Real minDistanceFromObs = 5;

	//Capacità massima (mAh) di un drone
	parameter Real capacity = 2500.0;
	
	// Perdita di batteria dovuta al movimento
	parameter Real batteryDischarge = 5.0;
	
	// perdita di batteria dovuta alla comunicazionne
	parameter Real commDischarge = 2.0;
	
	parameter Real rechargeRate = 500.0;
	
	parameter Real dangerousBatteryLevel = 50.0;


end Prm;

