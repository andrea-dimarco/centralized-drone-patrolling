
class ControlCenter

	// PARAMETERS
Prm p; // parameters
K const;   // constants
InputReal choice;
InputReal Tcc;
InputReal comm_timeout;
InputReal p_worst;
InputReal arrival_timeout;
InputReal arrivalThreshold;
InputReal p_recharge;

// ANALYSIS VARIABLES
	// drones
		Boolean isBusy[p.nDrones]; // if each drone is able to receive a new setpoint or not
		Real    lastAnswered[p.nDrones]; // last time the drone has sent in his position
		Boolean isDead[p.nDrones]; // if the drone is dead or not
		Real    setpointChangeTime[p.nDrones]; // last time CC changed the setpoint of drone
	
	// areas
		Boolean hasBeenVisited[p.nAreas]; // if each area has been visited since the last time span
		Real    lastVisited[p.nAreas]; // last time when each area has been visited
		Integer hasBeenSelected[p.nAreas]; // which drone is directed towards which area
	
// COMM API
	// read
		// in 
			InputReal     msg_from_drone[p.nDrones, p.msg_len]; // contains the message to be read
			InputBoolean  datavailable[p.nDrones]; // it's true whenever there is something to read on the fifo
		// out
			OutputBoolean readsignal[p.nDrones]; // changes to signal that the reader wants to read something
	
	// write
		// in usa il pre in lettura!!
			InputBoolean  spaceavailable[p.nDrones]; // it's true when there is space available
		// out
			OutputBoolean writesignal[p.nDrones]; // changes to signal that the writer wants to write something
			OutputReal    msg_to_drone[p.nDrones, p.msg_len]; // contains the message to be written on the fifo
		
	// local variables usa il pre in lettura!!
		Boolean setpointChanged[p.nDrones]; // if during this iteration the drone's setpoint has been changed
		Integer fifox[p.nDrones];
		Boolean comm_done[p.nDrones]; // the comunication with this drone has ended succesfully


// ALGORITHM VARIABLES
	Integer state;
		/* Control Center state
		 * 00 = setup requests for drones
		 * 10 = ask drones for positons
		 * 15 = receive positions from drones
		 * 20 = elaborate
		 * 25 = compute new setpoints
		 * 30 = setup messages to drones
		 * 40 = send new setpoints to drones
		 */ 
	Real    pos[p.nDrones,3]; // position of each drone
	Real    setx[p.nDrones]; //
	Real    sety[p.nDrones]; // set point of each drone
	Real    setz[p.nDrones]; //
	Real    battery[p.nDrones]; // battery level of each drones
	Boolean isRecharging[p.nDrones]; // if the drone is recharging
	Integer rechargingDrones;
	Real    time_span; // ogni quanto ogni area deve essere stata visitata
	Real    err; // error variable
	Integer z; // how many drones are currently in the area
	Integer aliveDrones;
	
	OutputBoolean endSimulation; // tells the monitor to end it all
	
	OutputReal time_passed_since_last_loop; // amount of time needed to visit each area
	
	// CHOICE VARIABLES	
		Real min_distance;
		Real tmp_distance;
		Real max_time;
		Real tmp_time;
		Integer tmp_area_1, tmp_area_2; // [1] closest area to drone, [2] area left unchecked for the longest time
		Real area_x, area_y, area_z;
		Real choice_value_1, choice_value_2; // the expected gain of chooosing area [1] and area [2]


//---------------------------//	
algorithm

when initial() then
	
		// initial conditions
	err := 0.0;
	z := 0;
	aliveDrones := p.nDrones;
	
	setx := fill(p.flyZone[1], p.nDrones);
	sety := fill(p.flyZone[2], p.nDrones);
	setz := fill(p.flyZone[3], p.nDrones);
	
	hasBeenVisited := fill(false, p.nAreas);
	lastVisited := fill(0.0, p.nAreas);
	isBusy := fill(false, p.nDrones);
	time_span := 0.0;
	time_passed_since_last_loop := 0.0;

	hasBeenSelected := fill(0, p.nAreas);
	min_distance := max(p.flyZone);
	tmp_distance := 0.0;
	tmp_area_1 := 0;
	tmp_area_2 := 0;
	choice_value_1 := 0.0;
	choice_value_2 := 0.0;
	area_x := 0.0;
	area_y := 0.0;
	area_z := 0.0;
	max_time := 0.0;
	tmp_time := 0.0;
	
	battery := fill(0.0, p.nDrones);
	isRecharging := fill(false, p.nDrones);
	rechargingDrones := 0;
	
	isDead := fill(false, p.nDrones);
	lastAnswered := fill(0.0, p.nDrones); // last time the drone has sent in his position
	setpointChangeTime := fill(0.0, p.nDrones);
	
		// COMM variables
	readsignal := fill(false, p.nDrones);
	writesignal := fill(false, p.nDrones); // changes to signal that the writer wants to write something
	for i in 1:p.nDrones loop
		for j in 1:p.msg_len loop
			msg_to_drone[i, j] := 0.0;
		end for;
	end for;
	
	for i in 1:p.nDrones loop
		for j in 1:3 loop
			pos[i, j] := 0.0;
		end for;
	end for; 
	
		// state
	fifox := fill(InitFifoIOState(), p.nDrones);
	state := 0;
	comm_done := fill(true, p.nDrones);
	setpointChanged := fill(false, p.nDrones); // if during this iteration the drone's setpoint has been changed
	endSimulation := false;
	
	
		// setup
	setup_db();
	setup_areas(p);
	setup_drones(p);


// WRITE REQUESTS FOR DRONES ///////////////////////////////////////////////////////////////////////////////
elsewhen ( sample(0, Tcc) ) then
if ( pre(state) == 0 ) then

		// write requests
		for drone in 1:p.nDrones loop
			if ( not(pre(isDead[drone])) ) then
				// write message
				msg_to_drone[drone,1] := 1.0;
				msg_to_drone[drone,2] := 0.0;
				msg_to_drone[drone,3] := 0.0;
				msg_to_drone[drone,4] := 0.0;
				// update variables
				comm_done[drone] := false; // message has not yet been sent
			else
				comm_done[drone] := true; // drone is dead, no need to send message
			end if;
		end for;
		// update state
		state := 10;
	

// SEND REQUESTS TO DRONES /////////////////////////////////////////////////////////////////////////////////
elseif ( pre(state) == 10 ) then
		
		//print("[CC]Sending requests to drones at time: "+String(time)+"\n");
		//print(" | starting state = "+String(state)+"\n");
		
		for drone in 1:p.nDrones loop
			if ( not(pre(isDead[drone])) 
					and not(pre(comm_done[drone])) ) then
				
				(writesignal[drone], fifox[drone])
					:= WriteToFIFO( pre(fifox[drone]), pre(writesignal[drone]), pre(spaceavailable[drone]) );
			 			// anche gli argomenti!!
				if ( FifoIODone(fifox[drone]) ) then  // writing is over, value sent
				
					//("[CC]Sent request at time: "+String(time)+"\n | flag: "+String(1.0)+"\n");
				
					// update variables
					comm_done[drone] := true; // message has been sent
					// reset fifo state
					fifox[drone] := InitFifoIOState();
				end if; 
			end if;
		end for;
		// check if all messages have been sent
		z := 0;
		for drone in 1:p.nDrones loop
			if ( not(pre(isDead[drone])) ) then
				// there are still messages to send
				if ( not(pre(comm_done[drone])) ) then
					// can't leave this state yet
					z := 100;
					break;
				end if;
			end if;
		end for;
		if ( z == 0 ) then
			// update cc state
			state := 15; // receive the positions
			// update comm
			comm_done := fill(false, p.nDrones); // wait for the drones to answer
		end if;
		
		//print(" | ending state = "+String(state)+"\n");
	

// RECEIVE POSITIONS FROM DRONES ////////////////////////////////////////////////////////////////////
elseif ( pre(state) == 15 ) then
		
	//print(" | starting state = "+String(state)+"\n");	
	
	for drone in 1:p.nDrones loop
		if ( not(pre(isDead[drone])) 
				and not(pre(comm_done[drone])) ) then
			
			// if drone isn't responding since too long
					// if the amounnt of time passed since an answer is greater that the timeout
			if ( (time - pre(lastAnswered[drone])) > comm_timeout ) then
			
				//print("[CC]Drone ("+String(drone)+") died at time: "+String(time)+"\n");
				
				// update variables
				comm_done[drone] := true;
				isDead[drone] := true;
				aliveDrones := pre(aliveDrones) - 1;
				// free the area the drone was going to reach
				for area in 1:p.nAreas loop
					if ( pre(hasBeenSelected[area]) == drone ) then
						// free area
						hasBeenSelected[area] := 0;
						//break; // uncomment this for faster but less safe algorithm
					end if;
				end for;
				
			else // comm hasn't timed out yet keep waiting for the message
			
				if ( myrandom() > p.p_comm_error ) then
					
					(readsignal[drone], fifox[drone]) :=
						ReadFromFIFO( pre(fifox[drone]), pre(datavailable[drone]), pre(readsignal[drone]) );

					if ( FifoIODone(fifox[drone]) ) then  // reading done, value ready
					 	
					 	// read
						pos[drone,1] := pre(msg_from_drone[drone,2]); // x
						pos[drone,2] := pre(msg_from_drone[drone,3]); // y
						pos[drone,3] := pre(msg_from_drone[drone,4]); // z
						battery[drone] := pre(msg_from_drone[drone,5]); // battery level
						
						if ( abs(battery[drone]-p.capacity ) < 1E-1) then aliveDrones := pre(aliveDrones)-1; end if;
						
						// update variables
						lastAnswered[drone] := time;
						comm_done[drone] := true;
						// reset fifo state
						fifox[drone] := InitFifoIOState();
						
					end if;
				end if;
			end if;
		end if;
	end for;
	// check if all messages have been sent
	z := 0;
	for drone in 1:p.nDrones loop
		if ( not(pre(isDead[drone])) ) then
			// there are still messages to send
			if ( not(pre(comm_done[drone])) ) then
				z := 100;
				break;
			end if;
		end if;
	end for;
	if ( z == 0 ) then
		// update status
		state := 20; // elaborate data
		// update variables
		comm_done := fill(false, p.nDrones); // we need to wait for the drones' answers
	end if;
	
	//print(" | ending state = "+String(state)+"\n");


// ELABORATE DATA //////////////////////////////////////////////////////////////////////////////////////////////
elseif ( pre(state) == 20 ) then
		
		//print("[CC]Elaborating data at time: "+String(time)+"\n");
		//print(" | starting state = "+String(state)+"\n");
		
	// DRONE CHEKS
		for drone in 1:p.nDrones loop
			// if the drone has arrived to the setpoint we have last given to it
			if ( pre(isBusy[drone]) // the drone was, in fact, heading somewhere
				and ( sqrt( (pre(pos[drone,1])-pre(setx[drone]))^2 + (pre(pos[drone,2]) - pre(sety[drone]))^2 + (pre(pos[drone,3]) - pre(setz[drone]))^2 ) < arrivalThreshold ) // drone has arrived
				) then //
						// free the drone
					isBusy[drone] := false;
						// free the area
					for area in 1:p.nAreas loop
						if ( pre(hasBeenSelected[area]) == drone ) then
							hasBeenSelected[area] := 0; // no drone is directed towards this area now
							hasBeenVisited[area] := true; // the area has definitely been visited by our drone
							lastVisited[area] := time;
							break;
						end if;
					end for;
					
			elseif ( pre(isBusy[drone]) ) then // the drone did NOT reach its setpoint yet
					// the drone SHOULD have reached the setpoint, but it didn't, reset the drone 
				if ( abs(time - pre(setpointChangeTime[drone])) > arrival_timeout ) then
						// free the drone
					isBusy[drone] := false;
						// free the area
					for area in 1:p.nAreas loop
						if ( pre(hasBeenSelected[area]) == drone ) then
							// free area
							hasBeenSelected[area] := 0;
							//break; // uncomment this for faster but less safe algorithm
						end if;
					end for;
				end if;
			end if;
		end for;
		
		
	// SEND DRONE POSITION TO DATABASE
		for drone in 1:p.nDrones loop
			if ( not(pre(isDead[drone])) ) then // the drone correctly sent its position 
				update_drone_pos(drone, time, pre(pos[drone]));
			end if;
		end for; 
		
		
	// AREA CHECKS
		for area in 1:p.nAreas loop
			// since the last loop the area was not visited 
			if ( true ) then //not(pre(hasBeenVisited[area])) ) then
				// has area been visited yet?
				if ( how_many_drones_in_area(area, pre(time_span)) > 0 ) then // some drones got in the area
					// the area has been visited since the last time_span
					hasBeenVisited[area] := true;
					lastVisited[area] := time;
				end if;
			end if;
		end for; 
		
		
	// ROUTINE CHECKS
			// area check
		err := 0.0;
		for area in 1:p.nAreas loop
				// there is at least one area still left unchecked
			if ( not(pre(hasBeenVisited[area])) ) then
				err := 100.0;
				break;
			end if;
		end for;
		
		if ( pre(err) < 1.0 ) then // every area has been visited
			time_passed_since_last_loop := time - pre(time_span);
			time_span := time; // new cycle starts now
			hasBeenVisited := fill(false, p.nAreas);
			hasBeenSelected := fill(0, p.nAreas);
		end if;
		
			// drone check
		if ( aliveDrones <= 0 ) then // every drone is dead
			disconnect_from_db();
			endSimulation := true;
			//terminate("All drones are dead :(");
		end if;
		// update status
		state := 25;
		

// FIND NEW SETPOINTS ///////////////////////////////////////////////////////////////////////////////////////////
elseif ( pre(state) == 25 ) then
	// SET POINT CHANGE
		for drone in 1:p.nDrones loop
				// reset variables
			setpointChanged[drone] := false;
			min_distance := max(p.flyZone);
			tmp_distance := 0.0;
			tmp_area_1 := 0;
			tmp_area_2 := 0;
			choice_value_1 := 0.0;
			choice_value_2 := 0.0;
			area_x := 0.0;
			area_y := 0.0;
			area_z := 0.0;
			max_time := 0.0;
			tmp_time := 0.0;
				// if the drone is not already heading somewhere AND it's not dead
			if ( not(pre(isBusy[drone]))
					and not(pre(isDead[drone])) ) then // the drone correctly sent its position) then
				// find best two areas to choose from (might also be the same)
				for area in 1:p.nAreas loop
						// if the area has not been visited AND no drone has been sent there yet
					if ( not(pre(hasBeenVisited[area])) and (pre(hasBeenSelected[area]) == 0) ) then
					
					// CLOSEST AREA TO THE DRONE
							// find area center
						( area_x, area_y, area_z ) := areaCenter(p, area);
							// find distance from drone
						tmp_distance := sqrt( (pre(pos[drone,1])-area_x)^2 + (pre(pos[drone,2])-area_y)^2 + (pre(pos[drone,3])-area_z)^2 );
							// if distance is the min distance found
						if ( tmp_distance < min_distance ) then
								// update min distance
							min_distance := tmp_distance;
								// substitute chosen area
							tmp_area_1 := area;
						end if;
						
					
					// AREA LEFT UNCHECKED FOR THE LONGEST TIME
							// get time
						tmp_time := time - pre(lastVisited[area]);
							// compare
						if ( tmp_time > max_time ) then
								// update time
							max_time := tmp_time;
								// update area
							tmp_area_2 := area;
						end if;
					end if;
				end for;
				
			// CHOOSE
					// if an area has been selected for this drone
				if ( not(tmp_area_1 == 0) and not(tmp_area_2 == 0) ) then
					
					choice_value_1 := min_distance * ( choice );
					choice_value_2 := max_time * ( 1 - choice );
					setpointChanged[drone] := true;
					setpointChangeTime[drone] := time;
					isBusy[drone] := true;
					
					if ( choice_value_1 > choice_value_2 ) then
						if ( myrandom() > p_worst ) then
								// the drone will go to the closest unchecked area
							( setx[drone], sety[drone], setz[drone] ) := areaCenter(p, tmp_area_1);
							hasBeenSelected[tmp_area_1] := drone;
						else // exploration chance
								// the drone will go to the area left unchecked for the longest time
							( setx[drone], sety[drone], setz[drone] ) := areaCenter(p, tmp_area_2);
							hasBeenSelected[tmp_area_2] := drone;
						end if;
					else
						if ( myrandom() > p_worst ) then
								// the drone will go to the area left unchecked for the longest time
							( setx[drone], sety[drone], setz[drone] ) := areaCenter(p, tmp_area_2);
							hasBeenSelected[tmp_area_2] := drone;
						else
								// the drone will go to the closest unchecked area
							( setx[drone], sety[drone], setz[drone] ) := areaCenter(p, tmp_area_1);
							hasBeenSelected[tmp_area_1] := drone;
						end if;
					end if;
				else // choose a random point
					setpointChanged[drone] := true;
					setpointChangeTime[drone] := time;
					isBusy[drone] := true;
					setx[drone] := myrandom()*p.flyZone[1];
					sety[drone] := myrandom()*p.flyZone[2];
					setz[drone] := myrandom()*p.flyZone[3];
				end if;
			end if;
		end for;
		
				
	// RECHARGE POLICY
		for drone in 1:p.nDrones loop
			if ( not(pre(isDead[drone])) ) then
				// the drone was in the recharging process
				if ( pre(isRecharging[drone]) ) then
					// drone has recharged enough
					if ( battery[drone] > p.rechargedThreshold ) then
						// the drone can leave the docking bay now
						isRecharging[drone] := false;
						rechargingDrones := pre(rechargingDrones) - 1;
						// the drone will head to its designated setpoint
						
					// drone has not recharged enough
					elseif ( battery[drone] < p.rechargedThreshold ) then
						// keep recharging
						isRecharging[drone] := true;
						// keep headind towards the docking bay to recharge
						setx[drone] := p.docking_bay[1];
						sety[drone] := p.docking_bay[2];
						setz[drone] := p.docking_bay[3];
					end if;
				
				else // the drone is not currently recharging nor it intends to
				
					// if the battery is below the dangerous level
					if ( battery[drone] < p.dangerousBatteryLevel ) then
						// go to recharge! NOW!!
						rechargingDrones := pre(rechargingDrones) + 1; 
						isRecharging[drone] := true;
						setpointChanged[drone] := true;
						isBusy[drone] := true;
						setx[drone] := p.docking_bay[1];
						sety[drone] := p.docking_bay[2];
						setz[drone] := p.docking_bay[3];
					
					// the drone has still a very small probability of recharging
					// the probability increases over time
					elseif ( pre(rechargingDrones) < (p.nDrones*0.30 + 1) ) then
					
						// if no drone is recharging and
						// probability that increases with lowering of battery
						if ( myrandom() < p_recharge*(1.0 - (battery[drone]/p.capacity)) 
							) then	
							// go to recharge anyway
							isRecharging[drone] := true;
							rechargingDrones := pre(rechargingDrones) + 1; 
							setpointChanged[drone] := true;
							isBusy[drone] := true;
							setx[drone] := p.docking_bay[1];
							sety[drone] := p.docking_bay[2];
							setz[drone] := p.docking_bay[3];
						end if;
					end if;
				end if;
			end if;
		end for;
		
	// STATE TRANSITION
		for drone in 1:p.nDrones loop
			// the set point of at least one drone has changed
			if ( pre(setpointChanged[drone]) ) then
				state := 30; // send new set points
				break;
			else
				state := 0; // ask drones for position
			end if;
		end for;
		
		//print(" | ending state = "+String(state)+"\n");


// WRITE MESSAGE TO DRONES /////////////////////////////////////////////////////////////////////////
	elseif ( pre(state) == 30 ) then
				
		//print("[CC]Writing new SET POINT at time: "+String(time)+"\n");
		
		// write requests
		for drone in 1:p.nDrones loop
		
			if ( not(isDead[drone]) ) then
				//print("[CC]New set point sent\n | setx: "+String(setx[drone])+" sety: "+String(sety[drone])+" setz: "+String(setz[drone])+"\n");
			
				// write message
				msg_to_drone[drone,1] := 2.0;
				msg_to_drone[drone,2] := setx[drone];
				msg_to_drone[drone,3] := sety[drone];
				msg_to_drone[drone,4] := setz[drone];
				// update variables
				comm_done[drone] := false; // message has not yet been sent
				setpointChanged[drone] := false;
			
			else
				comm_done[drone] := true;
			end if;
		end for;
		// update status
		state := 40; // send setpoints


// SEND NEW SET POINTS ////////////////////////////////////////////////////////////////////////////
	elseif ( pre(state) == 40 ) then
		
		for drone in 1:p.nDrones loop
			if ( not(pre(comm_done[drone])) ) then
				
				(writesignal[drone], fifox[drone])
					:= WriteToFIFO( pre(fifox[drone]), pre(writesignal[drone]), pre(spaceavailable[drone]) );
			 			// anche gli argomenti!!
				if ( FifoIODone(fifox[drone]) ) then  // writing is over, value sent
					// update variables
					comm_done[drone] := true; // message has been sent
					// reset fifo state
					fifox[drone] := InitFifoIOState();
				end if; 
			end if;
		end for;
		// check if all messages have been sent
		z := 0;
		for drone in 1:p.nDrones loop
			if ( not(pre(isDead[drone])) ) then
				// there are still messages to send
				if ( not(pre(comm_done[drone])) ) then
					// can't leave this state yet
					z := 100;
					break;
				end if;
			end if;
		end for;
		if ( z == 0 ) then
			// update cc state
			state := 0; // receive the positions
		end if;
	
	
	else 
		// stay still
		state := pre(state);

	end if;
	
end when;


end ControlCenter;
