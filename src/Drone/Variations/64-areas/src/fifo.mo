
block FIFO

Prm p;

// read side
	// in
		InputBoolean  readsignal;
	// out
		OutputReal    outputdata[p.msg_len];
		OutputBoolean datavailable;  

// write side
	// in
		InputBoolean  writesignal;  
		InputReal     inputdata[p.msg_len]; 
	// out
		OutputBoolean spaceavailable;  

// execution variables
	Real    fifo[p.fifo_len, p.msg_len];  // fifo of input msg
	Integer oldest; 
	Integer newest; 
	Integer fifosize;

	Boolean readsigint;  
	Boolean writesigint;


equation

	readsigint = not(pre(readsignal) == readsignal);
	writesigint = not(pre(writesignal) == writesignal);


algorithm

	when initial() then

		// read
			datavailable := false;
			for j in 1:p.msg_len loop
				outputdata[j] := 0.0;
			end for;
			
		// write
			spaceavailable := true;
			
		//algorithm variables
			for i in 1:p.fifo_len loop
				for j in 1:p.msg_len loop
				   fifo[i,j] := 0.0;
				end for; // j
			end for; // i
			fifosize := 0;
			oldest := 1; // where to read
			newest := 1; //  where to write



// READ & WRITE //////////////////////////////////////////////////////////////////////////////
	elsewhen ( pre(readsigint) and pre(writesigint) ) then

		if ( pre(fifosize) < p.fifo_len ) then
			
		// write
			for j in 1:p.msg_len loop
				fifo[pre(newest), j] := inputdata[j];
			end for;
			newest := mod(pre(newest), p.fifo_len) + 1; // mod(pre(newest) + 1 - 1, p.N) + 1
			
		//  read
			for j in 1:p.msg_len loop
				outputdata[j] := fifo[pre(oldest), j];
			end for;
			oldest := mod(pre(oldest), p.fifo_len) + 1;

		else  // pre(fifosize) >= p.fifo_len
		  
		//  read
			for j in 1:p.msg_len loop
				outputdata[j] := fifo[pre(oldest), j];
			end for;    
			oldest := mod(pre(oldest), p.fifo_len) + 1; 
		
		// write
			for j in 1:p.msg_len loop
				fifo[pre(newest), j] := inputdata[j];
			end for; 
			newest := mod(pre(newest), p.fifo_len) + 1; // mod(pre(newest) + 1 - 1, p.fifo_len) + 1

		end if;



// READ ////////////////////////////////////////////////////////////////////////////////////
	elsewhen ( pre(readsigint) and not(pre(writesigint)) and (pre(fifosize) >= 1) ) then

		for j in 1:p.msg_len loop
			outputdata[j] :=  fifo[pre(oldest), j] ;
		end for; 
	 	oldest := mod(pre(oldest), p.fifo_len) + 1;
	 	
	 	//print("[FIFO]Read: ("+String(fifo[pre(oldest), 1])+") at fifo["+String(pre(oldest))+",1]"+"\n");
	 	
		fifosize := pre(fifosize) - 1;
		datavailable := if (fifosize >= 1) then true else false;
		spaceavailable := true;



// WRITE /////////////////////////////////////////////////////////////////////////////////////
	elsewhen ( not(pre(readsigint)) and pre(writesigint) and (pre(fifosize) < p.fifo_len) ) then
	  
		for j in 1:p.msg_len loop
			fifo[pre(newest), j] := inputdata[j];
		end for;
		newest := mod(pre(newest), p.fifo_len) + 1;
		
		//print("[FIFO]Wrote: ("+String(fifo[pre(newest), 1])+") at fifo["+String(pre(newest))+",1]"+"\n");
		
		fifosize := pre(fifosize) + 1;
		datavailable := true;
		spaceavailable := if (pre(fifosize) < p.fifo_len) then true else false;
		
		for j in 1:p.msg_len loop
			outputdata[j] := fifo[pre(oldest), j] ;
		end for;
	 
	end when;


end FIFO;
