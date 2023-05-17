block Drone

Prm p; // parameters
K k;   // constants

// objects
	DroneFS d;
	Controller ctrl;

// algorithm
	Integer flag;
	Integer fifox;
	Integer comm_state; 
	Real batteryPercentage;
		/* COMM STATE
		 * 00 = dead
		 * 10 = receive from CC
		 * 20 = send to CC
		 */
	
// comm
	// read
		// in
			InputReal     msg_from_cc[p.msg_len];
			InputBoolean  datavailable;
		// out
			OutputBoolean readsignal;
	
	// write
		// in
			InputBoolean  spaceavailable;
		//out
			OutputBoolean writesignal;
			OutputReal    msg_to_cc[p.msg_len];

// set points
	OutputReal setx;
	OutputReal sety;
	OutputReal setz;

// drone position
	InputReal x;
	InputReal y;
	InputReal z;



//---------------------------//

equation

	batteryPercentage = (d.battery/p.capacity)*100;

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



//---------------------------//

algorithm

	when initial() then
		msg_to_cc := fill(0.0, p.msg_len);
		setx := myrandom()*p.flyZone[1];
		sety := myrandom()*p.flyZone[2];
		setz := myrandom()*p.flyZone[3];
		flag := 0;
		readsignal := false;
		writesignal := false;
		
		fifox := InitFifoIOState();
		comm_state := 10;
	
	elsewhen sample(0, p.Tdrone) then


// DRONE IS DEAD ///////////////////////////////////////////////////////////////////////////////////////
		if ( pre(d.droneDead) ) then
			
			comm_state := 0;

			
			
// RECEIVE MESSAGE /////////////////////////////////////////////////////////////////////////////////////
		elseif ( pre(comm_state) == 10 ) then
			
			(readsignal, fifox) := ReadFromFIFO(pre(fifox), pre(datavailable), pre(readsignal));

			if (FifoIODone(fifox)) then  // message retrieved, value ready
				
				//("[DRONE]Message retrieved\n | flag: "+String(msg_from_cc[1])+"\n");
				
				// read
				flag := integer(msg_from_cc[1]);
				
				// flag = 1.0 --> CC wants to know the drone's position
				if ( flag == 1 ) then
				
					// write message: current drone position
					msg_to_cc[1] := 2.0; // flag
					msg_to_cc[2] := x;
					msg_to_cc[3] := y;
					msg_to_cc[4] := z;
					msg_to_cc[5] := d.battery;
					
					// update comunication behaviour
					comm_state := 20; // send the current position
					

				// flag = 2.0 --> CC has sent the new setpoint
				elseif ( flag == 2 ) then
					
					// get new setpoints
					setx := msg_from_cc[2];
					sety := msg_from_cc[3];
					setz := msg_from_cc[4];
					
					//(" | Received new set point\n |  | setx: "+String(setx)+" sety: "+String(sety)+" setz: "+String(setz)+"\n");
					
					// update comunication behaviour
					comm_state := pre(comm_state); // wait for next message
				end if;

				// reset fifo state
				fifox := InitFifoIOState();
				
			end if;
			
			
		
// SEND MESSAGE /////////////////////////////////////////////////////////////////////////////////////////////
		elseif (pre(comm_state) == 20 ) then
			
			(writesignal, fifox) := WriteToFIFO( pre(fifox), pre(writesignal), pre(spaceavailable) );
			 
			if ( FifoIODone(fifox) ) then  // writing is over, value sent
					
				//("[DRONE]Sent position\n | x: "+String(msg_to_cc[2])+" sety: "+String(msg_to_cc[3])+" setz: "+String(msg_to_cc[4])+"\n");
				
				// update comunication behaviour
				comm_state := 10; // wait for next message 
				// reset fifo state
				fifox := InitFifoIOState();
				
			end if; 
			
			
			
// DO NOTHING /////////////////////////////////////////////////////
		else
			comm_state := pre(comm_state);
			
		end if;
		
	end when;


end Drone;
