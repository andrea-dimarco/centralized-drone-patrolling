block DroneFS
	
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
	* Trustx = f
	* der(Vx) = f/m
	* der(Vx) = Trustx/m
	*/
	der(Vx) = Trustx/p.m;	
	der(Vy) = Trusty/p.m;
	der(Vz) = (Trustz/p.m) - const.g;
	
	der(x) = Vx;
	der(y) = Vy;
	der(z) = Vz;


algorithm
	
	when initial() then
	
		battery := p.capacity;//*myrandom() + charging(p, 0);
		droneState := 1;
		droneDead  := false;
		
	elsewhen ( abs(pre(battery) - 0.0) < 1E-2 ) then
	
		droneDead := true;

	elsewhen ( sample(0, p.Tdrone) and (pre(droneState) == 1) ) then
	
		// the drone is in the docking bay
		if ( returnedHome(p, pre(x),pre(y),pre(z)) ) then
			// recharge
			battery := charging(p, pre(battery));
			
		else // the drone is in the arena
			
			// consume battery
			battery := batteryMonitor(pre(battery), p.batteryDischarge);
			
			// if drone has still battery and is not dead
			if ( pre(battery) > 0 and not(pre(droneDead)) ) then
				// check the area
				//...
			end if;
		end if;
	end when;
	
end DroneFS;
