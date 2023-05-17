model System

Prm p; // parameters
K k;   // constants

// parameters
	OutputReal cc_choice = p.cc_choice;
	OutputReal Tcc = p.Tcc;
	OutputReal comm_timeout = p.comm_timeout;
	OutputReal p_worst = p.p_worst;
	OutputReal arrival_timeout = p.arrival_timeout;
	OutputReal arrivalThreshold = p.arrivalThreshold;
	OutputReal p_recharge = p.p_recharge;

// objects
	Drone d[p.nDrones];
	ControlCenter cc;
	Monitor m;

// communication
	FIFO cc_to_drone[p.nDrones];
	FIFO drone_to_cc[p.nDrones];


//---------------------------//

equation

	// PARAMETER
	
	connect(cc_choice, cc.choice);
	connect(Tcc, cc.Tcc);
	connect(comm_timeout, cc.comm_timeout);
	connect(p_worst, cc.p_worst);
	connect(arrival_timeout, cc.arrival_timeout);
	connect(arrivalThreshold, cc.arrivalThreshold);
	connect(p_recharge, cc.p_recharge);
	
	connect(cc.time_passed_since_last_loop, m.time_passed_since_last_loop);
	
	connect(cc.endSimulation, m.endSimulation);

	for i in 1:p.nDrones loop		
			
		// CONTROL CENTER --> DRONE
			
			// COMM --> DRONE
				// fifo -> drone
					connect(cc_to_drone[i].outputdata, d[i].msg_from_cc);
					connect(cc_to_drone[i].datavailable, d[i].datavailable);
				// drone -> fifo
					connect(d[i].readsignal, cc_to_drone[i].readsignal);
			
			// CONTROL CENTER --> COMM
				// fifo -> cc
					connect(cc_to_drone[i].spaceavailable, cc.spaceavailable[i]);
				// cc -> fifo
					connect(cc.writesignal[i], cc_to_drone[i].writesignal);
					connect(cc.msg_to_drone[i], cc_to_drone[i].inputdata); // matrix
			
		// DRONE --> CONTROL CENTER
		
			// DRONE --> COMM
				// fifo -> drone
					connect(drone_to_cc[i].spaceavailable, d[i].spaceavailable);
				// drone -> fifo
					connect(d[i].writesignal, drone_to_cc[i].writesignal);
					connect(d[i].msg_to_cc, drone_to_cc[i].inputdata);
				
			// COMM --> CONTROL CENTER
				// fifo -> cc
					connect(drone_to_cc[i].datavailable, cc.datavailable[i]);
					connect(drone_to_cc[i].outputdata, cc.msg_from_drone[i]);
				// cc -> fifo
					connect(cc.readsignal[i], drone_to_cc[i].readsignal);

	end for;

end System;
