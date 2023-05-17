block Controller

K const; 
Prm prm; 

// Drone Battery
	InputReal battery;
	
//Set Point dal centro di controllo
	InputReal setx;
	InputReal sety;
	InputReal setz;

//Posizione e velocità drone
	InputReal x;
	InputReal y;
	InputReal z;
	InputReal Vx;
	InputReal Vy;
	InputReal Vz;

//Stato del drone, fornito dal faultSys
	/* Drone's possible states:
	*		0 = recharging;
	*		1 = flying;
	*		2 = sensor error;
	*		3 = flight error;
	*		4 = comm error;
	*/
	InputInteger droneState;
	InputBoolean droneDead;


//Forza
	OutputReal Trustx;
	OutputReal Trusty;
	OutputReal Trustz;


parameter Real T = 0.01;   //seconds

parameter Real p = -1;
parameter Real kz1 = -(p^2);   
parameter Real kz2 = 2*p;   

parameter Real ky1 = -(p^2);   
parameter Real ky2 = 2*p;  

parameter Real kx1 = -(p^2);   
parameter Real kx2 = 2*p;

protected Real destX;
protected Real destY;
protected Real destZ;


initial equation

	destX = 0;
	destY = 0;
	destZ = 0;

equation

		Trustx = prm.m*(kx1*(x - destX) + kx2*Vx);
		Trusty = prm.m*(ky1*(y - destY) + ky2*Vy);
		Trustz = prm.m*(const.g + kz1*(z - destZ) + kz2*Vz);	

algorithm
	
	when ( sample(0, prm.Tdrone) and (droneState == 1) and (battery > prm.dangerousBatteryLevel) ) then
	
		destX := setx;
		destY := sety;
		destZ := setz;
			
	elsewhen ( sample(0, T) and ((battery < prm.dangerousBatteryLevel) or droneState == 0) ) then
		
		destX := prm.docking_bay[1];
		destY := prm.docking_bay[2];
		destZ := prm.docking_bay[3];
		
	end when;

end Controller;

