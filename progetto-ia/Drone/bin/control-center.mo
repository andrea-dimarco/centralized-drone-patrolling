
class ControlCenter

	// PARAMETERS
Prm p; // parameters
K const;   // constants
InputReal choice;
InputReal Tcc;

	// INPUT FROM DRONES
InputReal pos[p.nDrones,3];

	// OUTPUT TO CONTROLLERS (of each drone)
OutputReal setx[p.nDrones];
OutputReal sety[p.nDrones];
OutputReal setz[p.nDrones];

protected Real err; // error variable
protected Integer z;
protected Boolean isBusy[p.nDrones]; // if each drone is able to receive a new setpoint or not
protected Real lastAnswered[p.nDrones]; // last time the drone has sent in his position
protected Boolean isDead[p.nDrones]; // if the drone is dead or not
protected Boolean setpointChanged[p.nDrones]; // if during this iteration the drone's setpoint has been changed
protected Real setpointChangeTime[p.nDrones]; // last time CC changed the setpoint of drone
protected Boolean hasBeenVisited[const.nAreas]; // if each area has been visited since the last time span
protected Real lastVisited[const.nAreas]; // last time when each area has been visited
protected Real time_span; // ogni quanto ogni area deve essere stata visitata
protected Real time_passed_since_last_loop; // amount of time needed to visit each area

protected Integer hasBeenSelected[const.nAreas]; // quale drone è diretto in quell'area al momento
protected Real min_distance;
protected Real tmp_distance;
protected Real max_time;
protected Real tmp_time;
protected Integer tmp_area_1, tmp_area_2; // [1] closest area to drone, [2] area left unchecked for the longest time
protected Real area_x, area_y, area_z;
protected Real choice_value_1, choice_value_2; // the expected gain of chooosing area [1] and area [2]


//---------------------------//	
algorithm

when initial() then
		// checks if the parameter has actually been modified by the System and trial
	//Modelica.Utilities.Files.remove("test.txt");
    //Modelica.Utilities.Streams.print("cc_choice: " + String(choice), "test.txt");
	
		// initial conditions
	err := 0.0;
	z := 0;
	
	setx := fill(p.flyZone[1], p.nDrones);
	sety := fill(p.flyZone[2], p.nDrones);
	setz := fill(p.flyZone[3], p.nDrones);
	
	hasBeenVisited := fill(false, const.nAreas);
	lastVisited := fill(0.0, const.nAreas);
	isBusy := fill(false, p.nDrones);
	time_span := 0.0;
	time_passed_since_last_loop := 0.0;

	hasBeenSelected := fill(0, const.nAreas);
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
	
	isDead := fill(false, p.nDrones);
	lastAnswered := fill(0.0, p.nDrones); // last time the drone has sent in his position
	setpointChanged := fill(false, p.nDrones); // if during this iteration the drone's setpoint has been changed
	setpointChangeTime := fill(0.0, p.nDrones);
	
		// setup
	setup_db();
	setup_areas(p);
	setup_drones(p);
	

elsewhen sample(0, Tcc) then

	setpointChanged := fill(false, p.nDrones);
	err := 0.0;
	
	// RECEIVE INFORMATIONS
	for drone in 1:p.nDrones loop
		if ( not(isDead[drone]) ) then
				// ask position
			// do magic...
			
				// receive position
			if ( myrandom() > p.p_comm_error ) then // comunication is working properly
				lastAnswered[drone] := time;	
				// recv...
			
			else // comunication not working
				if ( abs(time-lastAnswered[drone]) > p.comm_timeout ) then // drone hasn't been responding for too much time
					isDead[drone] := true; // must be dead
					isBusy[drone] := true; // to be on the safe side
					for area in 1:const.nAreas loop
							// if the dead drone was heading somewhere
						if ( hasBeenSelected[area] == drone ) then
								// free the area and allow other drones to go there
							hasBeenSelected[area] := 0; 
							//break;
						end if;
					end for;
				end if;
			end if;
			
				// if the drone has arrived to the setpoint we have last given to it
			if ( isBusy[drone] // the drone was, in fact, heading somewhere
				and abs(lastAnswered[drone] - time) < 1E-1 // the drone correctly sent its position
				and (abs(pos[drone,1] - setx[drone]) < p.arrivalThreshold)
				and (abs(pos[drone,2] - sety[drone]) < p.arrivalThreshold)
				and (abs(pos[drone,3] - setz[drone]) < p.arrivalThreshold) ) then
						// free the drone
					isBusy[drone] := false;
						// free the area
					for area in 1:const.nAreas loop
						if ( hasBeenSelected[area] == drone ) then
							hasBeenSelected[area] := 0; // no drone is directed towards this area now
							hasBeenVisited[area] := true; // the area has definitely been visited by our drone
							lastVisited[area] := time;
							break;
						end if;
					end for;
			elseif ( isBusy[drone] ) then // the drone did NOT reach its setpoint yet
					// the drone SHOULD have reached the setpoint, but it didn't, reset the drone 
				if ( abs(time-setpointChangeTime[drone]) > p.arrival_timeout ) then
						// free the drone
					isBusy[drone] := false;
						// free the area
					for area in 1:const.nAreas loop
						if ( hasBeenSelected[area] == drone ) then
								// free the area and allow other drones to go there
							hasBeenSelected[area] := 0;
							//break;
						end if;
					end for;
				end if;
			end if;
		end if;
	end for; 
	
		// send to DB
	for drone in 1:p.nDrones loop
		if ( not(isDead[drone]) ) then
			err := update_drone_pos(drone, time, pos[drone]);
		end if;
	end for; 
	
		// check areas and update values
	for area in 1:const.nAreas loop
			// since the last loop the area was not visited 
		if ( not(hasBeenVisited[area]) ) then
				// has area been visited yet?
			z := how_many_drones_in_area(area, time_span);
			if ( z > 0 ) then // some drones got in the area
					// the area has been visited since the last time_span
				hasBeenVisited[area] := true;
				lastVisited[area] := time;
			end if;
		end if;
	end for; 
	
	
	// DECISION TIME //
		// send drones to areas
	for drone in 1:p.nDrones loop
			// reset variables
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
		if ( not(isBusy[drone]) and not(isDead[drone]) ) then
				// find best two areas to choose from (might also be the same)
			for area in 1:const.nAreas loop
					// if the area has not been visited AND no drone has been sent there yet
				if ( not(hasBeenVisited[area]) and (hasBeenSelected[area] == 0) ) then
				
				// CLOSEST AREA TO THE DRONE
						// find area center
					( area_x, area_y, area_z ) := areaCenter(const, area);
						// find distance from drone
					tmp_distance := sqrt( (pos[drone,1]-area_x)^2 + (pos[drone,2]-area_y)^2 + (pos[drone,3]-area_z)^2 );
						// if distance is the min distance found
					if ( tmp_distance < min_distance ) then
							// update min distance
						min_distance := tmp_distance;
							// substitute chosen area
						tmp_area_1 := area;
					end if;
					
				
				// AREA LEFT UNCHECKED FOR THE LONGEST TIME
						// get time
					tmp_time := time-lastVisited[area];
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
				
				if ( choice_value_1 > choice_value_2 ) then
					if ( myrandom() > p.p_worst ) then
							// the drone will go to the closest unchecked area
						( setx[drone], sety[drone], setz[drone] ) := areaCenter(const, tmp_area_1);
						isBusy[drone] := true;
						hasBeenSelected[tmp_area_1] := drone;
						setpointChanged[drone] := true;
						setpointChangeTime[drone] := time;
					else // exploration chance
							// the drone will go to the area left unchecked for the longest time
						( setx[drone], sety[drone], setz[drone] ) := areaCenter(const, tmp_area_2);
						isBusy[drone] := true;
						hasBeenSelected[tmp_area_2] := drone;
						setpointChanged[drone] := true;
						setpointChangeTime[drone] := time;
					end if;
				else
					if ( myrandom() > p.p_worst ) then
							// the drone will go to the area left unchecked for the longest time
						( setx[drone], sety[drone], setz[drone] ) := areaCenter(const, tmp_area_2);
						isBusy[drone] := true;
						hasBeenSelected[tmp_area_2] := drone;
						setpointChanged[drone] := true;
						setpointChangeTime[drone] := time;
					else
							// the drone will go to the closest unchecked area
						( setx[drone], sety[drone], setz[drone] ) := areaCenter(const, tmp_area_1);
						isBusy[drone] := true;
						hasBeenSelected[tmp_area_1] := drone;
						setpointChanged[drone] := true;
						setpointChangeTime[drone] := time;
					end if;
				end if;
			end if;
		end if;
	end for;
	
	// SEND NEW SETPOINTS TO DRONES
	for drone in 1:p.nDrones loop
		if ( setpointChanged[drone] ) then
			// send...
			
		end if;
	end for;	
	
	// ROUTINE CHECKS
		// area check
	err := 0.0;
	for area in 1:const.nAreas loop
			// there is at least one area still left unchecked
		if ( not(hasBeenVisited[area]) ) then
			err := 100.0;
			break;
		end if;
	end for;
	
	if ( err < 1.0 ) then // every area has been visited
		time_passed_since_last_loop := time - time_span;
		time_span := time; // new cycle starts now
		hasBeenVisited := fill(false, const.nAreas);
		hasBeenSelected := fill(0, const.nAreas);
	end if;
	
		// drone check
	err := 0.0;
	for drone in 1:p.nDrones loop
			// as long as there is at least 1 drone alive
		if ( not(isDead[drone]) ) then
			err := 100.0;
			break;
		end if;
	end for;
		
	if ( err < 1.0 ) then // every drone is dead
		terminate("Every drone has died :("); // very sad outcome
	end if;
end when;

end ControlCenter;
