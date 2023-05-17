model System

Prm p; // parameters
K k;   // constants

OutputReal cc_choice = p.cc_choice;
OutputReal Tcc = p.Tcc;

Drone d[p.nDrones];
ControlCenter cc;
Monitor m;


//---------------------------//

equation

	// PARAMETER
	
	connect(cc_choice, cc.choice);
	connect(Tcc, cc.Tcc);

	for i in 1:p.nDrones loop		
			
		// CONTROL CENTER --> CONTROLLER
			connect(cc.setx[i], d[i].setx);
			connect(cc.sety[i], d[i].sety);
			connect(cc.setz[i], d[i].setz);
			
		// DRONE --> CONTROL CENTER
			connect(d[i].x, cc.pos[i,1]);
			connect(d[i].y, cc.pos[i,2]);
			connect(d[i].z, cc.pos[i,3]);
				
	end for;

end System;
