block DroneHW
	
	K const;
	Prm p;

// Flight parameters

	// Movement strenght
	InputReal Trustx;
	InputReal Trusty;
	InputReal Trustz;	

	//Campi di fault
	/* Drone's possible states:
	*		0 = recharging;
	*		1 = flying;
	*		2 = sensor error;
	*		3 = flight error;
	*		4 = comm error;
	*/
	OutputInteger droneState;
	OutputBoolean droneDead;

	// Position
	OutputReal x;
	OutputReal y;
	OutputReal z;
	
	// Velocity
	OutputReal Vx;
	OutputReal Vy;
	OutputReal Vz;


// Policy parameter
	// Battery level
	OutputReal battery; 	
	protected Real tmpBatt;
	
	// Drone id
	parameter Integer drone_id = 1;
	
	// message flag
	/*
	 *	0 = no message
	 *	1 = send position
	 *	2 = update setpoint
	 */
	//parameter Integer flag;

initial equation

	x = p.docking_bay[1]; //
	y = p.docking_bay[2]; // it starts from outside the area
	z = p.docking_bay[3] + ( p.dDistance*drone_id); //

	Vx = 0;
	Vy = 0;
	Vz = 0;	

equation
	/*
	* v = der(x)
	* a = der(Vx)
	* f = m * a
	* f = m * der(Vx)
	* Trustx = f/m
	* der(Vx) = f/m
	* der(Vx) = Trustx
	*/
	der(Vx) = Trustx/p.m;	
	der(Vy) = Trusty/p.m;
	der(Vz) = (Trustz/p.m) - const.g;
	
	der(x) = Vx;
	der(y) = Vy;
	der(z) = Vz;


algorithm
	
	when initial() then
	
		battery := p.capacity;
		tmpBatt := battery;
		droneState := 1;
		droneDead  := false;

	elsewhen ( sample(0, p.Tdrone) and (droneState == 1) ) then
	
				// CONTROLLARE SE CI SONO RICHIESTE DI COMUNICAZIONE DAL CC
		if (  true // il CC ha inviato una richiesta
			and myrandom() > p.p_comm_error  ) then
			// il cc ha richiesto la nostra posizione
			if ( true ) then
				// invia posizione
				// comunica invio
			elseif ( false ) then
				// aggiorna il setpoint
				// comunica invio
			end if;
			// aggiorna la batteria
			battery := batteryMonitor(pre(battery), p.batteryDischarge+p.commDischarge);
		else
				// just keep moving
			battery := batteryMonitor(pre(battery), p.batteryDischarge);
		end if;
			
		// if drone has battery and is not dead
		if (battery > 0 and (not droneDead)) then
			// check the area
			
		end if;
		
		
		if ( returnedHome(p, x,y,z) and battery < p.dangerousBatteryLevel) then
			droneState := 0; // start charging process
		end if;
		
	elsewhen ( sample(0, p.Tdrone) and (droneState == 0) ) then
	
		battery := charging(p, pre(battery));
		
		if ( abs(battery - p.capacity) < 1E-1 ) then // batttery has fully charged
			droneState := 1; // go back to work
		end if;
		
	end when;
	
end DroneHW;
