function batteryMonitor

input Real battery;
input Real dischargeRate;
output Real outBattery;

algorithm
	
	if(battery < 0) then 
		outBattery := 0;
	elseif ( (battery-dischargeRate) < 0) then
		outBattery := 0;
	else
		outBattery := battery - dischargeRate;
	end if;
	
end batteryMonitor;


//---------------------------//


function returnedHome

input Prm p;
input Real x,y,z;

output Boolean res;

algorithm
	if( ( abs(x - p.docking_bay[1]) < p.arrivalThreshold )
		and ( abs(y - p.docking_bay[2]) < p.arrivalThreshold )
		and ( abs(z - p.docking_bay[3]) < p.arrivalThreshold ) ) then
		res := true;
	else 
		res := false;
	end if; 

end returnedHome;


//---------------------------//


function charging

input Prm p;
input Real battery;

output Real new_battery;

algorithm

	new_battery := battery + p.rechargeRate;
	
	if ( new_battery > p.capacity ) then
		new_battery := p.capacity;
	end if;

end charging;


//---------------------------//


function areaCenter

input K k;
input Integer id;

output Real areaX;
output Real areaY;
output Real areaZ;

algorithm

				// low_x		up_x
	areaX := (k.areas[id,1] + k.areas[id,2])/2;
	
				// low_y		up_y
	areaY := (k.areas[id,3] + k.areas[id,4])/2;
	
				// low_z		up_z
	areaZ := (k.areas[id,5] + k.areas[id,6])/2;
	
end areaCenter;


//---------------------------//


function check_pos_x
input Prm p;
input Real x;
output Boolean result;

algorithm
	
	if ( (x < 0)
		or (x > p.flyZone[1])
		) then
	
		result := false;
	else
		result := true;
		
	end if;

end check_pos_x;


//---------------------------//


function check_pos_y
input Prm p;
input Real y;
output Boolean result;

algorithm
	
	if ( (y < 0)
		or (y > p.flyZone[2])
		) then
	
		result := false;
		
	else
		result := true;
		
	end if;

end check_pos_y;


//---------------------------//


function check_pos_z
input Prm p;
input Real z;
output Boolean result;

algorithm
	
	if ( (z < 0) 
		or (z > p.flyZone[3])
		) then
	
		result := false;
		
	else
		result := true;
		
	end if;

end check_pos_z;


//---------------------------//


function check_pos
input Prm p;
input Real x;
input Real y;
input Real z;
output Boolean result;

algorithm
	
	if ( (x < 0) or (y < 0) or (z < 0)
		or (x > p.flyZone[1]) or (y > p.flyZone[2]) or (z > p.flyZone[3])
		) then
	
		result := false;
		
	else
		result := true;
		
	end if;
end check_pos;


//---------------------------//


//...
