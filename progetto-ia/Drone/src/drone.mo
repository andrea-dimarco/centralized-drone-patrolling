block Drone

Prm p; // parameters
K k;   // constants

DroneHW d;
Controller ctrl;

InputReal setx;
InputReal sety;
InputReal setz;

OutputReal x;
OutputReal y;
OutputReal z;

//---------------------------//

equation
	// DRONE_HW --> CONTROLLER
		connect(d.battery, ctrl.battery);
		
		connect(d.x, ctrl.x);		
		connect(d.y, ctrl.y);
		connect(d.z, ctrl.z);
			
		connect(d.Vx, ctrl.Vx);
		connect(d.Vy, ctrl.Vy);
		connect(d.Vz, ctrl.Vz);
			
		connect(d.droneState, ctrl.droneState);
		connect(d.droneDead, ctrl.droneDead);
			
	// CONTROLLER --> DRONE_HW
		connect(ctrl.Trustx, d.Trustx);
		connect(ctrl.Trusty, d.Trusty);
		connect(ctrl.Trustz, d.Trustz);
		
	// DRONE --> CONTROLLER
		connect(setx, ctrl.setx);
		connect(sety, ctrl.sety);
		connect(setz, ctrl.setz);
			
	// DRONE_HW --> DRONE
		connect(d.x, x);
		connect(d.y, y);
		connect(d.z, z);
	

end Drone;
