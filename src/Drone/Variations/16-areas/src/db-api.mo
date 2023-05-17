
function update_drone_pos

	// static nella funzione C e un intero che tiene conto dell'inizializzazione
input Integer drone_id;
input Real position_time;
input Real pos[3];

output Real result = 0.0; // 0.0 if ok, 1.0 if error

external "C" result = update_drone_pos(drone_id, position_time, pos[1], pos[2], pos[3]);

	annotation(Include = "#include \"db-mockup-fast.c\"");


end update_drone_pos;


//---------------------------//


function get_drone_pos_1

input Integer drone_id;

output Real result; // pos_x if ok, -1.0 if error

algorithm

external "C" result = get_drone_pos_1(drone_id);

	annotation(Include = "#include \"db-mockup-fast.c\"");

end get_drone_pos_1;



function get_drone_pos_2

input Integer drone_id;

output Real result; // pos_y if ok, -1.0 if error

external "C" result = get_drone_pos_2(drone_id);

	annotation(Include = "#include \"db-mockup-fast.c\"");

end get_drone_pos_2;



function get_drone_pos_3

input Integer drone_id;

output Real result; // pos_z if ok, -1.0 if error

external "C" result = get_drone_pos_3(drone_id);

	annotation(Include = "#include \"db-mockup-fast.c\"");

end get_drone_pos_3;



function get_drone_pos

input Integer drone_id;

output Real result[3]; // position if ok, {-1.0,-1.0,-1.0} if error

algorithm
		
	result[1] := get_drone_pos_1(drone_id);
	result[2] := get_drone_pos_2(drone_id);
	result[3] := get_drone_pos_3(drone_id);

end get_drone_pos;


//---------------------------//


function flush_history

output Real result = 0.0; // 0.0 if ok, 1.0 if error

//external "C" result = flush_history();

	//annotation(Include = "#include \"db-mockup-fast.c\"");


end flush_history;


//---------------------------//


function turn_off

output Real result; // 0.0 if ok, 1.0 if error

external "C" result = turn_off();

	annotation(Include = "#include \"db-mockup-fast.c\"");


end turn_off;


//---------------------------//


function create_area

input Integer id;
input Real    low_x;
input Real    up_x;
input Real    low_y;
input Real    up_y;
input Real    low_z;
input Real    up_z;

output Real result = 0.0; // 0.0 if ok, 1.0 if error

external "C" result = create_area(id, low_x, up_x, low_y, up_y, low_z, up_z);

	annotation(Include = "#include \"db-mockup-fast.c\"");


end create_area;


//---------------------------//


function how_many_drones_in_area

input Integer area_id;
input Real    time_span;

output Integer result; // number of drones in the area
	
external "C" result = how_many_drones_in_area(area_id, time_span);

	annotation(Include = "#include \"db-mockup-fast.c\"");

end how_many_drones_in_area;


//---------------------------//


function setup_areas

input Prm p;

protected Integer id;

algorithm
	
	for id in 1:p.nAreas loop
	
		create_area(id, p.areas[id,1], p.areas[id,2], p.areas[id,3], p.areas[id,4], p.areas[id,5], p.areas[id,6]);
	
	end for;
	
end setup_areas;


//---------------------------//


function setup_db

output Real result; // 0.0 if ok, 1.0 if error

external "C" result = setup_db();

	annotation(Include = "#include \"db-mockup-fast.c\"");


end setup_db;


//---------------------------//


function disconnect_from_db

output Real result; // 0.0 if ok, 1.0 if error

external "C" result = disconnect_from_db();

	annotation(Include = "#include \"db-mockup-fast.c\"");


end disconnect_from_db;


//---------------------------////---------------------------//


function setup_db

output Real result; // 0.0 if ok, 1.0 if error

external "C" result = setup_db();

	annotation(Include = "#include \"db-mockup-fast.c\"");


end setup_db;


//---------------------------//


function create_drone

input Integer id;

output Real result; // 0.0 if ok, 1.0 if error

external "C" result = create_drone(id);

	annotation(Include = "#include \"db-mockup-fast.c\"");
	
	
end create_drone;


//---------------------------//


function setup_drones

input Prm p;

algorithm
	
	for i in 1:p.nDrones loop
	
		create_drone(i);
	
	end for;
	
	
end setup_drones;


//---------------------------//


function has_drone_been_in_area

input Integer drone_id;
input Integer area_id;
input Real time_span;

output Real result; // 0.0 means no, 1.0 means yes

external "C" result = has_drone_been_in_area(drone_id, area_id, time_span);

	annotation(Include = "#include \"db-mockup-fast.c\"");
	
	
end has_drone_been_in_area;


//---------------------------//


function has_area_been_visited

input Integer id;
input Real    time_span;

output Real result; // 0.0 means no, 1.0 means yes

external "C" result = has_area_been_visited(id, time_span);

	annotation(Include = "#include \"db-mockup-fast.c\"");


end has_area_been_visited;


//---------------------------//
