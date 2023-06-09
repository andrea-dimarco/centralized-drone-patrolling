record K

//Costanti simulazione

constant Real g = 9.81; // gravity

constant Real pi = 3.14; // cake

constant Integer nAreas = 8; // Total number of areas

constant Real areas[8,6] = {
	//l_x    u_x    l_y    u_u    l_z    u_z
	{ 0.0,   100.0, 0.0,   100.0, 0.0,   100.0 }, // 1
	{ 100.0, 200.0, 0.0,   100.0, 0.0,   100.0 }, // 2
	{ 0.0,   100.0, 100.0, 200.0, 0.0,   100.0 }, // 3
	{ 100.0, 200.0, 100.0, 200.0, 0.0,   100.0 }, // 4
	{ 0.0,   100.0, 0.0,   100.0, 100.0, 200.0 }, // 5
	{ 100.0, 200.0, 0.0,   100.0, 100.0, 200.0 }, // 6
	{ 0.0,   100.0, 100.0, 200.0, 100.0, 200.0 }, // 7
	{ 100.0, 200.0, 100.0, 200.0, 100.0, 200.0 }  // 8
};

end K;
