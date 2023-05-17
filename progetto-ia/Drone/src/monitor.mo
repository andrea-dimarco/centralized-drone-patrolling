/*
		OBIETTIVO
		Associa indice ad area e ogni T secondi guarda quanti droni sono in una certa area
		 e per quanto tempo
		
		Monitora quindi il valore atteso del numero di droni di ogni area
		
		

*/
class Monitor


Prm p; // system parameters
K k;   // constants

protected Integer z;
protected Integer samples; // how many samples have been taken

	// requisito 1
protected Integer current_drones[k.nAreas]; // current number of drones in area
protected Real avg_drones[k.nAreas]; // expected number of drones in the area
protected Real avg_drones_all_areas; // expected number of drones in every area

	// requisito 2
protected Integer beenVisited[k.nAreas];
protected Real p_drones[k.nAreas]; // probability of finding a drone in the area
protected Real p_drones_all_areas;

	// requisito 3
protected Real no_drone_time[k.nAreas]; // time the area has been left unchecked
protected Real avg_no_drone_time[k.nAreas];
protected Real avg_no_drone_time_all_areas; // check this one
protected Real max_no_drone_time; // check this one too (as a constraint)

	// requisito 4
protected Real std_dev[k.nAreas];
protected Real std_dev_all_areas;


//---------------------------//
algorithm

when initial() then
	
	z := 0;
	samples := 0;
	
		// requisito 1
	current_drones := fill(0, k.nAreas);
	avg_drones := fill(0, k.nAreas);
	avg_drones_all_areas := 0.0;
	
		// requisito 2
	beenVisited := fill(0, k.nAreas);
	p_drones := fill(0, k.nAreas);
	p_drones_all_areas := 0.0;
	
		// requisito 3
	no_drone_time := fill(0.0, k.nAreas);
	avg_no_drone_time := fill(0.0, k.nAreas);
	avg_no_drone_time_all_areas := 0.0;
	max_no_drone_time := 0.0;
	
		// requisito 4
	std_dev := fill(0.0, k.nAreas);
	std_dev_all_areas := 0.0;
	

elsewhen sample(p.monitor_start, p.Tm) then

	samples := pre(samples) + 1; // we have just taken a new sample
	current_drones := fill(0, k.nAreas);
	
	for area in 1:k.nAreas loop		
		
		// how many drones are in the area?
		current_drones[area] := 0;
		beenVisited[area] := 0;
			
		z := how_many_drones_in_area(area, (time-p.Tm) );
			
		if ( z > 0 ) then // z = 0.0 means no, z = 1.0 means yes
			current_drones[area] := current_drones[area] + z;
			beenVisited[area] := 1;
			no_drone_time[area] := 0.0;
		else 
			no_drone_time[area] := no_drone_time[area] + p.Tm;
		end if;
		
			// average number of drones in the area
		/*
		* ITERATIVE AVERAGE 
		* E = sum(values)/n_samples
		* E = ( pre(E)*(n_samples - 1) + new_value ) / n_samples
		* E = ( pre(E)* (n_samples -1) / n_samples ) + ( new_value / n_samples )
		*/
		avg_drones[area] := pre(avg_drones[area])*(pre(samples)/(pre(samples)+1)) + (pre(current_drones[area])/(pre(samples)+1));
		
			// probability of drones in area
		p_drones[area] := pre(p_drones[area])*(pre(samples)/(pre(samples)+1)) + (pre(beenVisited[area])/(pre(samples)+1));
		
			// expected amount of time the area has to wait before being visited by any drone
		avg_no_drone_time[area] := pre(avg_no_drone_time[area])*(pre(samples)/(pre(samples)+1)) + (pre(no_drone_time[area])/(pre(samples)+1));
		
			// standard deviation of amount of drones in the area
		std_dev[area] := sqrt( current_drones[area] - (avg_drones[area])^2 );
		
	end for;
	
	
		// total average of number of drones in each area
	avg_drones_all_areas := sum(avg_drones)/k.nAreas;
	
		// total probability of finding a drone in an area
	p_drones_all_areas := sum(p_drones)/k.nAreas;
	
		// expexted wait time for every area to be visited by a drone
	avg_no_drone_time_all_areas := sum(no_drone_time)/k.nAreas;
	
		// maximum wait time of an area to be visited by a drone
	if ( max_no_drone_time < max(no_drone_time) ) then
		max_no_drone_time := max(no_drone_time);
	end if;
		
		// standard deviation of amount of drones in the area
	std_dev_all_areas := sqrt( avg_drones_all_areas - (pre(avg_drones_all_areas))^2 );


elsewhen ( time > p.stop_simulation ) then

	// print results
	Modelica.Utilities.Files.remove("outputs.txt");
    Modelica.Utilities.Streams.print("AvgDrones AvgNoDrone MaxNoDrone PrDrones StdDev (time = " + String(time) + " )", "outputs.txt");
    
    Modelica.Utilities.Streams.print(String(avg_drones_all_areas) + "  " + String(avg_no_drone_time_all_areas) + "  " + String(max_no_drone_time) + "  " + String(p_drones_all_areas) + "  " + String(std_dev_all_areas), "outputs.txt");     

	// end suffering
	terminate("Simulation limit reached. Go home now.");	

end when;

end Monitor;
