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

		Trustx = prm.m*(kx1*(x - pre(destX)) + kx2*Vx);
		Trusty = prm.m*(ky1*(y - pre(destY)) + ky2*Vy);
		Trustz = prm.m*(const.g + kz1*(z - pre(destZ)) + kz2*Vz);	

algorithm

	when ( sample(0, prm.Tdrone) and pre(droneDead) ) then
	
		destX := pre(x);
		destY := pre(y);
		destZ := 0.0;
	
	elsewhen ( sample(0, prm.Tdrone) ) then
	
		destX := pre(setx);
		destY := pre(sety);
		destZ := pre(setz);
		
	end when;

end Controller;

