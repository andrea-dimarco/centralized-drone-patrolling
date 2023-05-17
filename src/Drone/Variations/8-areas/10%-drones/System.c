/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "System_model.h"
#include "simulation/solver/events.h"

/* FIXME these defines are ugly and hard to read, why not use direct function pointers instead? */
#define prefixedName_performSimulation System_performSimulation
#define prefixedName_updateContinuousSystem System_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation System_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int System_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int System_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int System_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int System_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int System_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int System_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int System_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = (data->localData[0]->realVars[12]/* Tcc variable */) ;
  data->simulationInfo->outputVars[1] = (data->localData[0]->realVars[13]/* arrivalThreshold variable */) ;
  data->simulationInfo->outputVars[2] = (data->localData[0]->realVars[14]/* arrival_timeout variable */) ;
  data->simulationInfo->outputVars[3] = (data->localData[0]->realVars[20]/* cc_choice variable */) ;
  data->simulationInfo->outputVars[4] = (data->localData[0]->realVars[26]/* comm_timeout variable */) ;
  data->simulationInfo->outputVars[5] = (data->localData[0]->realVars[41]/* p_recharge variable */) ;
  data->simulationInfo->outputVars[6] = (data->localData[0]->realVars[42]/* p_worst variable */) ;
  
  TRACE_POP
  return 0;
}

int System_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 83
type: SIMPLE_ASSIGN
p_recharge = p.p_recharge
*/
void System_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  (data->localData[0]->realVars[41]/* p_recharge variable */)  = (data->simulationInfo->realParameter[670]/* p.p_recharge PARAM */) ;
  TRACE_POP
}
/*
equation index: 84
type: SIMPLE_ASSIGN
arrivalThreshold = p.arrivalThreshold
*/
void System_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  (data->localData[0]->realVars[13]/* arrivalThreshold variable */)  = (data->simulationInfo->realParameter[646]/* p.arrivalThreshold PARAM */) ;
  TRACE_POP
}
/*
equation index: 85
type: SIMPLE_ASSIGN
arrival_timeout = p.arrival_timeout
*/
void System_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  (data->localData[0]->realVars[14]/* arrival_timeout variable */)  = (data->simulationInfo->realParameter[647]/* p.arrival_timeout PARAM */) ;
  TRACE_POP
}
/*
equation index: 86
type: SIMPLE_ASSIGN
p_worst = p.p_worst
*/
void System_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  (data->localData[0]->realVars[42]/* p_worst variable */)  = (data->simulationInfo->realParameter[671]/* p.p_worst PARAM */) ;
  TRACE_POP
}
/*
equation index: 87
type: SIMPLE_ASSIGN
comm_timeout = p.comm_timeout
*/
void System_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  (data->localData[0]->realVars[26]/* comm_timeout variable */)  = (data->simulationInfo->realParameter[652]/* p.comm_timeout PARAM */) ;
  TRACE_POP
}
/*
equation index: 88
type: SIMPLE_ASSIGN
Tcc = p.Tcc
*/
void System_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  (data->localData[0]->realVars[12]/* Tcc variable */)  = (data->simulationInfo->realParameter[595]/* p.Tcc PARAM */) ;
  TRACE_POP
}
/*
equation index: 89
type: SIMPLE_ASSIGN
cc_choice = p.cc_choice
*/
void System_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  (data->localData[0]->realVars[20]/* cc_choice variable */)  = (data->simulationInfo->realParameter[650]/* p.cc_choice PARAM */) ;
  TRACE_POP
}
/*
equation index: 90
type: SIMPLE_ASSIGN
d[1].ctrl.Trustz = d[1].ctrl.prm.m * (9.81 + d[1].ctrl.kz1 * (d[1].d.z - pre(d[1].ctrl.destZ)) + d[1].ctrl.kz2 * d[1].d.Vz)
*/
void System_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  (data->localData[0]->realVars[30]/* d[1].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[249]/* d[1].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[177]/* d[1].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[5]/* d[1].d.z STATE(1,d[1].d.Vz) */)  - (data->simulationInfo->realVarsPre[134]/* d[1].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[178]/* d[1].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[2]/* d[1].d.Vz STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 91
type: SIMPLE_ASSIGN
$DER.d[1].d.Vz = -9.81 + d[1].ctrl.Trustz / d[1].d.p.m
*/
void System_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  (data->localData[0]->realVars[8]/* der(d[1].d.Vz) STATE_DER */)  = -9.81 + DIVISION_SIM((data->localData[0]->realVars[30]/* d[1].ctrl.Trustz variable */) ,(data->simulationInfo->realParameter[332]/* d[1].d.p.m PARAM */) ,"d[1].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 92
type: SIMPLE_ASSIGN
$DER.d[1].d.z = d[1].d.Vz
*/
void System_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  (data->localData[0]->realVars[11]/* der(d[1].d.z) STATE_DER */)  = (data->localData[0]->realVars[2]/* d[1].d.Vz STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 93
type: SIMPLE_ASSIGN
$DER.d[1].d.y = d[1].d.Vy
*/
void System_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  (data->localData[0]->realVars[10]/* der(d[1].d.y) STATE_DER */)  = (data->localData[0]->realVars[1]/* d[1].d.Vy STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 94
type: SIMPLE_ASSIGN
$DER.d[1].d.x = d[1].d.Vx
*/
void System_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  (data->localData[0]->realVars[9]/* der(d[1].d.x) STATE_DER */)  = (data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 95
type: ALGORITHM

  cc.endSimulation := pre(cc.endSimulation);
  cc.setpointChanged[1] := pre(cc.setpointChanged[1]);
  cc.comm_done[1] := pre(cc.comm_done[1]);
  cc.state := pre(cc.state);
  cc.fifox[1] := pre(cc.fifox[1]);
  cc.pos[1,3] := pre(cc.pos[1,3]);
  cc.pos[1,2] := pre(cc.pos[1,2]);
  cc.pos[1,1] := pre(cc.pos[1,1]);
  cc.msg_to_drone[1,5] := pre(cc.msg_to_drone[1,5]);
  cc.msg_to_drone[1,4] := pre(cc.msg_to_drone[1,4]);
  cc.msg_to_drone[1,3] := pre(cc.msg_to_drone[1,3]);
  cc.msg_to_drone[1,2] := pre(cc.msg_to_drone[1,2]);
  cc.msg_to_drone[1,1] := pre(cc.msg_to_drone[1,1]);
  cc.writesignal[1] := pre(cc.writesignal[1]);
  cc.readsignal[1] := pre(cc.readsignal[1]);
  cc.setpointChangeTime[1] := pre(cc.setpointChangeTime[1]);
  cc.lastAnswered[1] := pre(cc.lastAnswered[1]);
  cc.isDead[1] := pre(cc.isDead[1]);
  cc.rechargingDrones := pre(cc.rechargingDrones);
  cc.isRecharging[1] := pre(cc.isRecharging[1]);
  cc.battery[1] := pre(cc.battery[1]);
  cc.tmp_time := pre(cc.tmp_time);
  cc.max_time := pre(cc.max_time);
  cc.area_z := pre(cc.area_z);
  cc.area_y := pre(cc.area_y);
  cc.area_x := pre(cc.area_x);
  cc.choice_value_2 := pre(cc.choice_value_2);
  cc.choice_value_1 := pre(cc.choice_value_1);
  cc.tmp_area_2 := pre(cc.tmp_area_2);
  cc.tmp_area_1 := pre(cc.tmp_area_1);
  cc.tmp_distance := pre(cc.tmp_distance);
  cc.min_distance := pre(cc.min_distance);
  cc.hasBeenSelected[8] := pre(cc.hasBeenSelected[8]);
  cc.hasBeenSelected[7] := pre(cc.hasBeenSelected[7]);
  cc.hasBeenSelected[6] := pre(cc.hasBeenSelected[6]);
  cc.hasBeenSelected[5] := pre(cc.hasBeenSelected[5]);
  cc.hasBeenSelected[4] := pre(cc.hasBeenSelected[4]);
  cc.hasBeenSelected[3] := pre(cc.hasBeenSelected[3]);
  cc.hasBeenSelected[2] := pre(cc.hasBeenSelected[2]);
  cc.hasBeenSelected[1] := pre(cc.hasBeenSelected[1]);
  cc.time_passed_since_last_loop := pre(cc.time_passed_since_last_loop);
  cc.time_span := pre(cc.time_span);
  cc.isBusy[1] := pre(cc.isBusy[1]);
  cc.lastVisited[8] := pre(cc.lastVisited[8]);
  cc.lastVisited[7] := pre(cc.lastVisited[7]);
  cc.lastVisited[6] := pre(cc.lastVisited[6]);
  cc.lastVisited[5] := pre(cc.lastVisited[5]);
  cc.lastVisited[4] := pre(cc.lastVisited[4]);
  cc.lastVisited[3] := pre(cc.lastVisited[3]);
  cc.lastVisited[2] := pre(cc.lastVisited[2]);
  cc.lastVisited[1] := pre(cc.lastVisited[1]);
  cc.hasBeenVisited[8] := pre(cc.hasBeenVisited[8]);
  cc.hasBeenVisited[7] := pre(cc.hasBeenVisited[7]);
  cc.hasBeenVisited[6] := pre(cc.hasBeenVisited[6]);
  cc.hasBeenVisited[5] := pre(cc.hasBeenVisited[5]);
  cc.hasBeenVisited[4] := pre(cc.hasBeenVisited[4]);
  cc.hasBeenVisited[3] := pre(cc.hasBeenVisited[3]);
  cc.hasBeenVisited[2] := pre(cc.hasBeenVisited[2]);
  cc.hasBeenVisited[1] := pre(cc.hasBeenVisited[1]);
  cc.setz[1] := pre(cc.setz[1]);
  cc.sety[1] := pre(cc.sety[1]);
  cc.setx[1] := pre(cc.setx[1]);
  cc.aliveDrones := pre(cc.aliveDrones);
  cc.z := pre(cc.z);
  cc.err := pre(cc.err);
  $whenCondition9 := pre($whenCondition9);
  $whenCondition9 := sample(4, 0.0, p.Tcc);
  when false then
    cc.err := 0.0;
    cc.z := 0;
    cc.aliveDrones := 1;
    cc.setx := {cc.p.flyZone[1]};
    cc.sety := {cc.p.flyZone[2]};
    cc.setz := {cc.p.flyZone[3]};
    cc.hasBeenVisited := {false, false, false, false, false, false, false, false};
    cc.lastVisited := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    cc.isBusy := {false};
    cc.time_span := 0.0;
    cc.time_passed_since_last_loop := 0.0;
    cc.hasBeenSelected := {0, 0, 0, 0, 0, 0, 0, 0};
    cc.min_distance := max(cc.p.flyZone);
    cc.tmp_distance := 0.0;
    cc.tmp_area_1 := 0;
    cc.tmp_area_2 := 0;
    cc.choice_value_1 := 0.0;
    cc.choice_value_2 := 0.0;
    cc.area_x := 0.0;
    cc.area_y := 0.0;
    cc.area_z := 0.0;
    cc.max_time := 0.0;
    cc.tmp_time := 0.0;
    cc.battery := {0.0};
    cc.isRecharging := {false};
    cc.rechargingDrones := 0;
    cc.isDead := {false};
    cc.lastAnswered := {0.0};
    cc.setpointChangeTime := {0.0};
    cc.readsignal := {false};
    cc.writesignal := {false};
    for i in 1:1 loop
      for j in 1:5 loop
        cc.msg_to_drone[i,j] := 0.0;
      end for;
    end for;
    for i in 1:1 loop
      for j in 1:3 loop
        cc.pos[i,j] := 0.0;
      end for;
    end for;
    cc.fifox := {0};
    cc.state := 0;
    cc.comm_done := {true};
    cc.setpointChanged := {false};
    cc.endSimulation := false;
    setup_db();
    setup_areas(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 1, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 8, cc.p.areas));
    setup_drones(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 1, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 8, cc.p.areas));
  elsewhen $whenCondition9 then
    if pre(cc.state) == 0 then
      for drone in 1:1 loop
        if not pre(cc.isDead[drone]) then
          cc.msg_to_drone[drone,1] := 1.0;
          cc.msg_to_drone[drone,2] := 0.0;
          cc.msg_to_drone[drone,3] := 0.0;
          cc.msg_to_drone[drone,4] := 0.0;
          cc.comm_done[drone] := false;
        else
          cc.comm_done[drone] := true;
        end if;
      end for;
      cc.state := 10;
    elseif pre(cc.state) == 10 then
      for drone in 1:1 loop
        if not pre(cc.isDead[drone]) and not pre(cc.comm_done[drone]) then
          (cc.writesignal[drone], cc.fifox[drone]) := WriteToFIFO(pre(cc.fifox[drone]), pre(cc.writesignal[drone]), pre(cc.spaceavailable[drone]));
          if FifoIODone(cc.fifox[drone]) then
            cc.comm_done[drone] := true;
            cc.fifox[drone] := 0;
          end if;
        end if;
      end for;
      cc.z := 0;
      for drone in 1:1 loop
        if not pre(cc.isDead[drone]) then
          if not pre(cc.comm_done[drone]) then
            cc.z := 100;
            break;
          end if;
        end if;
      end for;
      if cc.z == 0 then
        cc.state := 15;
        cc.comm_done := {false};
      end if;
    elseif pre(cc.state) == 15 then
      for drone in 1:1 loop
        if not pre(cc.isDead[drone]) and not pre(cc.comm_done[drone]) then
          if time - pre(cc.lastAnswered[drone]) > p.comm_timeout then
            cc.comm_done[drone] := true;
            cc.isDead[drone] := true;
            cc.aliveDrones := pre(cc.aliveDrones) - 1;
            for area in 1:8 loop
              if pre(cc.hasBeenSelected[area]) == drone then
                cc.hasBeenSelected[area] := 0;
              end if;
            end for;
          else
            if myrandom() > cc.p.p_comm_error then
              (cc.readsignal[drone], cc.fifox[drone]) := ReadFromFIFO(pre(cc.fifox[drone]), pre(cc.datavailable[drone]), pre(cc.readsignal[drone]));
              if FifoIODone(cc.fifox[drone]) then
                cc.pos[drone,1] := pre(cc.msg_from_drone[drone,2]);
                cc.pos[drone,2] := pre(cc.msg_from_drone[drone,3]);
                cc.pos[drone,3] := pre(cc.msg_from_drone[drone,4]);
                cc.battery[drone] := pre(cc.msg_from_drone[drone,5]);
                if abs(cc.battery[drone] - cc.p.capacity) < 0.1 then
                  cc.aliveDrones := pre(cc.aliveDrones) - 1;
                end if;
                cc.lastAnswered[drone] := time;
                cc.comm_done[drone] := true;
                cc.fifox[drone] := 0;
              end if;
            end if;
          end if;
        end if;
      end for;
      cc.z := 0;
      for drone in 1:1 loop
        if not pre(cc.isDead[drone]) then
          if not pre(cc.comm_done[drone]) then
            cc.z := 100;
            break;
          end if;
        end if;
      end for;
      if cc.z == 0 then
        cc.state := 20;
        cc.comm_done := {false};
      end if;
    elseif pre(cc.state) == 20 then
      for drone in 1:1 loop
        if pre(cc.isBusy[drone]) and sqrt((pre(cc.pos[drone,1]) - pre(cc.setx[drone])) ^ 2.0 + (pre(cc.pos[drone,2]) - pre(cc.sety[drone])) ^ 2.0 + (pre(cc.pos[drone,3]) - pre(cc.setz[drone])) ^ 2.0) < p.arrivalThreshold then
          cc.isBusy[drone] := false;
          for area in 1:8 loop
            if pre(cc.hasBeenSelected[area]) == drone then
              cc.hasBeenSelected[area] := 0;
              cc.hasBeenVisited[area] := true;
              cc.lastVisited[area] := time;
              break;
            end if;
          end for;
        elseif pre(cc.isBusy[drone]) then
          if abs(time - pre(cc.setpointChangeTime[drone])) > p.arrival_timeout then
            cc.isBusy[drone] := false;
            for area in 1:8 loop
              if pre(cc.hasBeenSelected[area]) == drone then
                cc.hasBeenSelected[area] := 0;
              end if;
            end for;
          end if;
        end if;
      end for;
      for drone in 1:1 loop
        if not pre(cc.isDead[drone]) then
          update_drone_pos(drone, time, pre(cc.pos[drone]));
        end if;
      end for;
      for area in 1:8 loop
        if how_many_drones_in_area(area, pre(cc.time_span)) > 0 then
          cc.hasBeenVisited[area] := true;
          cc.lastVisited[area] := time;
        end if;
      end for;
      cc.err := 0.0;
      for area in 1:8 loop
        if not pre(cc.hasBeenVisited[area]) then
          cc.err := 100.0;
          break;
        end if;
      end for;
      if pre(cc.err) < 1.0 then
        cc.time_passed_since_last_loop := time - pre(cc.time_span);
        cc.time_span := time;
        cc.hasBeenVisited := {false, false, false, false, false, false, false, false};
        cc.hasBeenSelected := {0, 0, 0, 0, 0, 0, 0, 0};
      end if;
      if cc.aliveDrones <= 0 then
        disconnect_from_db();
        cc.endSimulation := true;
      end if;
      cc.state := 25;
    elseif pre(cc.state) == 25 then
      for drone in 1:1 loop
        cc.setpointChanged[drone] := false;
        cc.min_distance := max(cc.p.flyZone);
        cc.tmp_distance := 0.0;
        cc.tmp_area_1 := 0;
        cc.tmp_area_2 := 0;
        cc.choice_value_1 := 0.0;
        cc.choice_value_2 := 0.0;
        cc.area_x := 0.0;
        cc.area_y := 0.0;
        cc.area_z := 0.0;
        cc.max_time := 0.0;
        cc.tmp_time := 0.0;
        if not pre(cc.isBusy[drone]) and not pre(cc.isDead[drone]) then
          for area in 1:8 loop
            if not pre(cc.hasBeenVisited[area]) and pre(cc.hasBeenSelected[area]) == 0 then
              (cc.area_x, cc.area_y, cc.area_z) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 1, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 8, cc.p.areas), area);
              cc.tmp_distance := sqrt((pre(cc.pos[drone,1]) - cc.area_x) ^ 2.0 + (pre(cc.pos[drone,2]) - cc.area_y) ^ 2.0 + (pre(cc.pos[drone,3]) - cc.area_z) ^ 2.0);
              if cc.tmp_distance < cc.min_distance then
                cc.min_distance := cc.tmp_distance;
                cc.tmp_area_1 := area;
              end if;
              cc.tmp_time := time - pre(cc.lastVisited[area]);
              if cc.tmp_time > cc.max_time then
                cc.max_time := cc.tmp_time;
                cc.tmp_area_2 := area;
              end if;
            end if;
          end for;
          if not cc.tmp_area_1 == 0 and not cc.tmp_area_2 == 0 then
            cc.choice_value_1 := cc.min_distance * p.cc_choice;
            cc.choice_value_2 := cc.max_time * (1.0 - p.cc_choice);
            cc.setpointChanged[drone] := true;
            cc.setpointChangeTime[drone] := time;
            cc.isBusy[drone] := true;
            if cc.choice_value_1 > cc.choice_value_2 then
              if myrandom() > p.p_worst then
                (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 1, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 8, cc.p.areas), cc.tmp_area_1);
                cc.hasBeenSelected[cc.tmp_area_1] := drone;
              else
                (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 1, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 8, cc.p.areas), cc.tmp_area_2);
                cc.hasBeenSelected[cc.tmp_area_2] := drone;
              end if;
            else
              if myrandom() > p.p_worst then
                (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 1, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 8, cc.p.areas), cc.tmp_area_2);
                cc.hasBeenSelected[cc.tmp_area_2] := drone;
              else
                (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 1, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 8, cc.p.areas), cc.tmp_area_1);
                cc.hasBeenSelected[cc.tmp_area_1] := drone;
              end if;
            end if;
          else
            cc.setpointChanged[drone] := true;
            cc.setpointChangeTime[drone] := time;
            cc.isBusy[drone] := true;
            cc.setx[drone] := myrandom() * cc.p.flyZone[1];
            cc.sety[drone] := myrandom() * cc.p.flyZone[2];
            cc.setz[drone] := myrandom() * cc.p.flyZone[3];
          end if;
        end if;
      end for;
      for drone in 1:1 loop
        if not pre(cc.isDead[drone]) then
          if pre(cc.isRecharging[drone]) then
            if cc.battery[drone] > cc.p.rechargedThreshold then
              cc.isRecharging[drone] := false;
              cc.rechargingDrones := pre(cc.rechargingDrones) - 1;
            elseif cc.battery[drone] < cc.p.rechargedThreshold then
              cc.isRecharging[drone] := true;
              cc.setx[drone] := cc.p.docking_bay[1];
              cc.sety[drone] := cc.p.docking_bay[2];
              cc.setz[drone] := cc.p.docking_bay[3];
            end if;
          else
            if cc.battery[drone] < cc.p.dangerousBatteryLevel then
              cc.rechargingDrones := pre(cc.rechargingDrones) + 1;
              cc.isRecharging[drone] := true;
              cc.setpointChanged[drone] := true;
              cc.isBusy[drone] := true;
              cc.setx[drone] := cc.p.docking_bay[1];
              cc.sety[drone] := cc.p.docking_bay[2];
              cc.setz[drone] := cc.p.docking_bay[3];
            elseif (*Real*)(pre(cc.rechargingDrones)) < 1.1 then
              if myrandom() < p.p_recharge * (1.0 - cc.battery[drone] / cc.p.capacity) then
                cc.isRecharging[drone] := true;
                cc.rechargingDrones := pre(cc.rechargingDrones) + 1;
                cc.setpointChanged[drone] := true;
                cc.isBusy[drone] := true;
                cc.setx[drone] := cc.p.docking_bay[1];
                cc.sety[drone] := cc.p.docking_bay[2];
                cc.setz[drone] := cc.p.docking_bay[3];
              end if;
            end if;
          end if;
        end if;
      end for;
      for drone in 1:1 loop
        if pre(cc.setpointChanged[drone]) then
          cc.state := 30;
          break;
        else
          cc.state := 0;
        end if;
      end for;
    elseif pre(cc.state) == 30 then
      for drone in 1:1 loop
        if not cc.isDead[drone] then
          cc.msg_to_drone[drone,1] := 2.0;
          cc.msg_to_drone[drone,2] := cc.setx[drone];
          cc.msg_to_drone[drone,3] := cc.sety[drone];
          cc.msg_to_drone[drone,4] := cc.setz[drone];
          cc.comm_done[drone] := false;
          cc.setpointChanged[drone] := false;
        else
          cc.comm_done[drone] := true;
        end if;
      end for;
      cc.state := 40;
    elseif pre(cc.state) == 40 then
      for drone in 1:1 loop
        if not pre(cc.comm_done[drone]) then
          (cc.writesignal[drone], cc.fifox[drone]) := WriteToFIFO(pre(cc.fifox[drone]), pre(cc.writesignal[drone]), pre(cc.spaceavailable[drone]));
          if FifoIODone(cc.fifox[drone]) then
            cc.comm_done[drone] := true;
            cc.fifox[drone] := 0;
          end if;
        end if;
      end for;
      cc.z := 0;
      for drone in 1:1 loop
        if not pre(cc.isDead[drone]) then
          if not pre(cc.comm_done[drone]) then
            cc.z := 100;
            break;
          end if;
        end if;
      end for;
      if cc.z == 0 then
        cc.state := 0;
      end if;
    else
      cc.state := pre(cc.state);
    end if;
  end when;
*/
void System_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  real_array tmp3;
  real_array tmp4;
  real_array tmp5;
  real_array tmp6;
  real_array tmp7;
  real_array tmp8;
  boolean_array tmp9;
  boolean_array tmp10;
  real_array tmp11;
  real_array tmp12;
  boolean_array tmp13;
  boolean_array tmp14;
  integer_array tmp15;
  integer_array tmp16;
  real_array tmp17;
  modelica_real tmp18;
  real_array tmp19;
  real_array tmp20;
  boolean_array tmp21;
  boolean_array tmp22;
  boolean_array tmp23;
  boolean_array tmp24;
  real_array tmp25;
  real_array tmp26;
  real_array tmp27;
  real_array tmp28;
  boolean_array tmp29;
  boolean_array tmp30;
  boolean_array tmp31;
  boolean_array tmp32;
  modelica_integer tmp33;
  modelica_integer tmp34;
  modelica_integer tmp35;
  modelica_integer tmp36;
  modelica_integer tmp37;
  modelica_integer tmp38;
  modelica_integer tmp39;
  modelica_integer tmp40;
  modelica_integer tmp41;
  modelica_integer tmp42;
  modelica_integer tmp43;
  modelica_integer tmp44;
  integer_array tmp45;
  integer_array tmp46;
  boolean_array tmp47;
  boolean_array tmp48;
  boolean_array tmp49;
  boolean_array tmp50;
  Prm tmp51;
  real_array tmp52;
  real_array tmp53;
  real_array tmp54;
  Prm tmp55;
  real_array tmp56;
  real_array tmp57;
  real_array tmp58;
  modelica_integer tmp60;
  modelica_integer tmp61;
  modelica_integer tmp62;
  modelica_integer tmp64;
  modelica_integer tmp65;
  modelica_integer tmp66;
  modelica_integer tmp67;
  modelica_integer tmp68;
  modelica_integer tmp69;
  boolean_array tmp71;
  boolean_array tmp72;
  modelica_boolean tmp74;
  modelica_integer tmp76;
  modelica_integer tmp77;
  modelica_integer tmp78;
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  modelica_integer tmp81;
  modelica_integer tmp82;
  modelica_integer tmp83;
  modelica_integer tmp84;
  modelica_integer tmp85;
  modelica_integer tmp86;
  boolean_array tmp88;
  boolean_array tmp89;
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_boolean tmp94;
  modelica_integer tmp96;
  modelica_integer tmp97;
  modelica_integer tmp98;
  modelica_boolean tmp99;
  modelica_integer tmp101;
  modelica_integer tmp102;
  modelica_integer tmp103;
  modelica_integer tmp104;
  modelica_integer tmp105;
  modelica_integer tmp106;
  real_array tmp107;
  modelica_integer tmp108;
  modelica_integer tmp109;
  modelica_integer tmp110;
  modelica_boolean tmp111;
  modelica_integer tmp112;
  modelica_integer tmp113;
  modelica_integer tmp114;
  modelica_integer tmp115;
  modelica_integer tmp116;
  modelica_integer tmp117;
  modelica_boolean tmp118;
  boolean_array tmp119;
  boolean_array tmp120;
  integer_array tmp121;
  integer_array tmp122;
  modelica_boolean tmp123;
  real_array tmp125;
  modelica_real tmp126;
  Prm tmp128;
  real_array tmp129;
  real_array tmp130;
  real_array tmp131;
  modelica_real tmp132;
  modelica_real tmp133;
  modelica_real tmp134;
  modelica_boolean tmp135;
  modelica_boolean tmp136;
  modelica_integer tmp137;
  modelica_integer tmp138;
  modelica_integer tmp139;
  modelica_boolean tmp142;
  modelica_boolean tmp143;
  Prm tmp144;
  real_array tmp145;
  real_array tmp146;
  real_array tmp147;
  Prm tmp148;
  real_array tmp149;
  real_array tmp150;
  real_array tmp151;
  modelica_boolean tmp152;
  Prm tmp153;
  real_array tmp154;
  real_array tmp155;
  real_array tmp156;
  Prm tmp157;
  real_array tmp158;
  real_array tmp159;
  real_array tmp160;
  modelica_integer tmp161;
  modelica_integer tmp162;
  modelica_integer tmp163;
  modelica_boolean tmp164;
  modelica_boolean tmp165;
  modelica_boolean tmp166;
  modelica_boolean tmp167;
  modelica_boolean tmp168;
  modelica_integer tmp169;
  modelica_integer tmp170;
  modelica_integer tmp171;
  modelica_integer tmp172;
  modelica_integer tmp173;
  modelica_integer tmp174;
  modelica_integer tmp176;
  modelica_integer tmp177;
  modelica_integer tmp178;
  modelica_integer tmp180;
  modelica_integer tmp181;
  modelica_integer tmp182;
  modelica_integer tmp183;
  modelica_integer tmp184;
  modelica_integer tmp185;
  (data->localData[0]->booleanVars[16]/* cc.endSimulation DISCRETE */)  = (data->simulationInfo->booleanVarsPre[16]/* cc.endSimulation DISCRETE */) ;

  (data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[29]/* cc.setpointChanged[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[14]/* cc.comm_done[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[14]/* cc.comm_done[1] DISCRETE */) ;

  (data->localData[0]->integerVars[11]/* cc.state DISCRETE */)  = (data->simulationInfo->integerVarsPre[11]/* cc.state DISCRETE */) ;

  (data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[1]/* cc.fifox[1] DISCRETE */) ;

  (data->localData[0]->realVars[68]/* cc.pos[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[68]/* cc.pos[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[67]/* cc.pos[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[67]/* cc.pos[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[66]/* cc.pos[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[66]/* cc.pos[1,1] DISCRETE */) ;

  (data->localData[0]->realVars[65]/* cc.msg_to_drone[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[65]/* cc.msg_to_drone[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[64]/* cc.msg_to_drone[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[64]/* cc.msg_to_drone[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[63]/* cc.msg_to_drone[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[63]/* cc.msg_to_drone[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[62]/* cc.msg_to_drone[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[62]/* cc.msg_to_drone[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[61]/* cc.msg_to_drone[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[61]/* cc.msg_to_drone[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[31]/* cc.writesignal[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[31]/* cc.writesignal[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[28]/* cc.readsignal[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[28]/* cc.readsignal[1] DISCRETE */) ;

  (data->localData[0]->realVars[69]/* cc.setpointChangeTime[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[69]/* cc.setpointChangeTime[1] DISCRETE */) ;

  (data->localData[0]->realVars[50]/* cc.lastAnswered[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[50]/* cc.lastAnswered[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[26]/* cc.isDead[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[26]/* cc.isDead[1] DISCRETE */) ;

  (data->localData[0]->integerVars[10]/* cc.rechargingDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[10]/* cc.rechargingDrones DISCRETE */) ;

  (data->localData[0]->booleanVars[27]/* cc.isRecharging[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[27]/* cc.isRecharging[1] DISCRETE */) ;

  (data->localData[0]->realVars[46]/* cc.battery[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[46]/* cc.battery[1] DISCRETE */) ;

  (data->localData[0]->realVars[76]/* cc.tmp_time DISCRETE */)  = (data->simulationInfo->realVarsPre[76]/* cc.tmp_time DISCRETE */) ;

  (data->localData[0]->realVars[59]/* cc.max_time DISCRETE */)  = (data->simulationInfo->realVarsPre[59]/* cc.max_time DISCRETE */) ;

  (data->localData[0]->realVars[45]/* cc.area_z DISCRETE */)  = (data->simulationInfo->realVarsPre[45]/* cc.area_z DISCRETE */) ;

  (data->localData[0]->realVars[44]/* cc.area_y DISCRETE */)  = (data->simulationInfo->realVarsPre[44]/* cc.area_y DISCRETE */) ;

  (data->localData[0]->realVars[43]/* cc.area_x DISCRETE */)  = (data->simulationInfo->realVarsPre[43]/* cc.area_x DISCRETE */) ;

  (data->localData[0]->realVars[48]/* cc.choice_value_2 DISCRETE */)  = (data->simulationInfo->realVarsPre[48]/* cc.choice_value_2 DISCRETE */) ;

  (data->localData[0]->realVars[47]/* cc.choice_value_1 DISCRETE */)  = (data->simulationInfo->realVarsPre[47]/* cc.choice_value_1 DISCRETE */) ;

  (data->localData[0]->integerVars[13]/* cc.tmp_area_2 DISCRETE */)  = (data->simulationInfo->integerVarsPre[13]/* cc.tmp_area_2 DISCRETE */) ;

  (data->localData[0]->integerVars[12]/* cc.tmp_area_1 DISCRETE */)  = (data->simulationInfo->integerVarsPre[12]/* cc.tmp_area_1 DISCRETE */) ;

  (data->localData[0]->realVars[75]/* cc.tmp_distance DISCRETE */)  = (data->simulationInfo->realVarsPre[75]/* cc.tmp_distance DISCRETE */) ;

  (data->localData[0]->realVars[60]/* cc.min_distance DISCRETE */)  = (data->simulationInfo->realVarsPre[60]/* cc.min_distance DISCRETE */) ;

  (data->localData[0]->integerVars[9]/* cc.hasBeenSelected[8] DISCRETE */)  = (data->simulationInfo->integerVarsPre[9]/* cc.hasBeenSelected[8] DISCRETE */) ;

  (data->localData[0]->integerVars[8]/* cc.hasBeenSelected[7] DISCRETE */)  = (data->simulationInfo->integerVarsPre[8]/* cc.hasBeenSelected[7] DISCRETE */) ;

  (data->localData[0]->integerVars[7]/* cc.hasBeenSelected[6] DISCRETE */)  = (data->simulationInfo->integerVarsPre[7]/* cc.hasBeenSelected[6] DISCRETE */) ;

  (data->localData[0]->integerVars[6]/* cc.hasBeenSelected[5] DISCRETE */)  = (data->simulationInfo->integerVarsPre[6]/* cc.hasBeenSelected[5] DISCRETE */) ;

  (data->localData[0]->integerVars[5]/* cc.hasBeenSelected[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[5]/* cc.hasBeenSelected[4] DISCRETE */) ;

  (data->localData[0]->integerVars[4]/* cc.hasBeenSelected[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[4]/* cc.hasBeenSelected[3] DISCRETE */) ;

  (data->localData[0]->integerVars[3]/* cc.hasBeenSelected[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[3]/* cc.hasBeenSelected[2] DISCRETE */) ;

  (data->localData[0]->integerVars[2]/* cc.hasBeenSelected[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[2]/* cc.hasBeenSelected[1] DISCRETE */) ;

  (data->localData[0]->realVars[73]/* cc.time_passed_since_last_loop DISCRETE */)  = (data->simulationInfo->realVarsPre[73]/* cc.time_passed_since_last_loop DISCRETE */) ;

  (data->localData[0]->realVars[74]/* cc.time_span DISCRETE */)  = (data->simulationInfo->realVarsPre[74]/* cc.time_span DISCRETE */) ;

  (data->localData[0]->booleanVars[25]/* cc.isBusy[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[25]/* cc.isBusy[1] DISCRETE */) ;

  (data->localData[0]->realVars[58]/* cc.lastVisited[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[58]/* cc.lastVisited[8] DISCRETE */) ;

  (data->localData[0]->realVars[57]/* cc.lastVisited[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[57]/* cc.lastVisited[7] DISCRETE */) ;

  (data->localData[0]->realVars[56]/* cc.lastVisited[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[56]/* cc.lastVisited[6] DISCRETE */) ;

  (data->localData[0]->realVars[55]/* cc.lastVisited[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[55]/* cc.lastVisited[5] DISCRETE */) ;

  (data->localData[0]->realVars[54]/* cc.lastVisited[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[54]/* cc.lastVisited[4] DISCRETE */) ;

  (data->localData[0]->realVars[53]/* cc.lastVisited[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[53]/* cc.lastVisited[3] DISCRETE */) ;

  (data->localData[0]->realVars[52]/* cc.lastVisited[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[52]/* cc.lastVisited[2] DISCRETE */) ;

  (data->localData[0]->realVars[51]/* cc.lastVisited[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[51]/* cc.lastVisited[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[24]/* cc.hasBeenVisited[8] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[24]/* cc.hasBeenVisited[8] DISCRETE */) ;

  (data->localData[0]->booleanVars[23]/* cc.hasBeenVisited[7] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[23]/* cc.hasBeenVisited[7] DISCRETE */) ;

  (data->localData[0]->booleanVars[22]/* cc.hasBeenVisited[6] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[22]/* cc.hasBeenVisited[6] DISCRETE */) ;

  (data->localData[0]->booleanVars[21]/* cc.hasBeenVisited[5] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[21]/* cc.hasBeenVisited[5] DISCRETE */) ;

  (data->localData[0]->booleanVars[20]/* cc.hasBeenVisited[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[20]/* cc.hasBeenVisited[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[19]/* cc.hasBeenVisited[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[19]/* cc.hasBeenVisited[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[18]/* cc.hasBeenVisited[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[18]/* cc.hasBeenVisited[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[17]/* cc.hasBeenVisited[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[17]/* cc.hasBeenVisited[1] DISCRETE */) ;

  (data->localData[0]->realVars[72]/* cc.setz[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[72]/* cc.setz[1] DISCRETE */) ;

  (data->localData[0]->realVars[71]/* cc.sety[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[71]/* cc.sety[1] DISCRETE */) ;

  (data->localData[0]->realVars[70]/* cc.setx[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[70]/* cc.setx[1] DISCRETE */) ;

  (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[0]/* cc.aliveDrones DISCRETE */) ;

  (data->localData[0]->integerVars[14]/* cc.z DISCRETE */)  = (data->simulationInfo->integerVarsPre[14]/* cc.z DISCRETE */) ;

  (data->localData[0]->realVars[49]/* cc.err DISCRETE */)  = (data->simulationInfo->realVarsPre[49]/* cc.err DISCRETE */) ;

  (data->localData[0]->booleanVars[13]/* $whenCondition9 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[13]/* $whenCondition9 DISCRETE */) ;

  (data->localData[0]->booleanVars[13]/* $whenCondition9 DISCRETE */)  = data->simulationInfo->samples[3];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[49]/* cc.err DISCRETE */)  = 0.0;

      (data->localData[0]->integerVars[14]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = ((modelica_integer) 1);

      array_alloc_scalar_real_array(&tmp3, 1, (modelica_real)(data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
      real_array_create(&tmp4, ((modelica_real*)&((&(data->localData[0]->realVars[70]/* cc.setx[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
      real_array_copy_data(tmp3, tmp4);

      array_alloc_scalar_real_array(&tmp5, 1, (modelica_real)(data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
      real_array_create(&tmp6, ((modelica_real*)&((&(data->localData[0]->realVars[71]/* cc.sety[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
      real_array_copy_data(tmp5, tmp6);

      array_alloc_scalar_real_array(&tmp7, 1, (modelica_real)(data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
      real_array_create(&tmp8, ((modelica_real*)&((&(data->localData[0]->realVars[72]/* cc.setz[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
      real_array_copy_data(tmp7, tmp8);

      array_alloc_scalar_boolean_array(&tmp9, 8, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp10, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[17]/* cc.hasBeenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      boolean_array_copy_data(tmp9, tmp10);

      array_alloc_scalar_real_array(&tmp11, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp12, ((modelica_real*)&((&(data->localData[0]->realVars[51]/* cc.lastVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp11, tmp12);

      array_alloc_scalar_boolean_array(&tmp13, 1, (modelica_boolean)0);
      boolean_array_create(&tmp14, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[25]/* cc.isBusy[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
      boolean_array_copy_data(tmp13, tmp14);

      (data->localData[0]->realVars[74]/* cc.time_span DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[73]/* cc.time_passed_since_last_loop DISCRETE */)  = 0.0;

      array_alloc_scalar_integer_array(&tmp15, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp16, ((modelica_integer*)&((&(data->localData[0]->integerVars[2]/* cc.hasBeenSelected[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      integer_array_copy_data(tmp15, tmp16);

      real_array_create(&tmp17, ((modelica_real*)&((&data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
      tmp18 = max_real_array(tmp17);
      (data->localData[0]->realVars[60]/* cc.min_distance DISCRETE */)  = tmp18;

      (data->localData[0]->realVars[75]/* cc.tmp_distance DISCRETE */)  = 0.0;

      (data->localData[0]->integerVars[12]/* cc.tmp_area_1 DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[13]/* cc.tmp_area_2 DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->realVars[47]/* cc.choice_value_1 DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[48]/* cc.choice_value_2 DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[43]/* cc.area_x DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[44]/* cc.area_y DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[45]/* cc.area_z DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[59]/* cc.max_time DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[76]/* cc.tmp_time DISCRETE */)  = 0.0;

      array_alloc_scalar_real_array(&tmp19, 1, (modelica_real)0.0);
      real_array_create(&tmp20, ((modelica_real*)&((&(data->localData[0]->realVars[46]/* cc.battery[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
      real_array_copy_data(tmp19, tmp20);

      array_alloc_scalar_boolean_array(&tmp21, 1, (modelica_boolean)0);
      boolean_array_create(&tmp22, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[27]/* cc.isRecharging[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
      boolean_array_copy_data(tmp21, tmp22);

      (data->localData[0]->integerVars[10]/* cc.rechargingDrones DISCRETE */)  = ((modelica_integer) 0);

      array_alloc_scalar_boolean_array(&tmp23, 1, (modelica_boolean)0);
      boolean_array_create(&tmp24, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[26]/* cc.isDead[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
      boolean_array_copy_data(tmp23, tmp24);

      array_alloc_scalar_real_array(&tmp25, 1, (modelica_real)0.0);
      real_array_create(&tmp26, ((modelica_real*)&((&(data->localData[0]->realVars[50]/* cc.lastAnswered[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
      real_array_copy_data(tmp25, tmp26);

      array_alloc_scalar_real_array(&tmp27, 1, (modelica_real)0.0);
      real_array_create(&tmp28, ((modelica_real*)&((&(data->localData[0]->realVars[69]/* cc.setpointChangeTime[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
      real_array_copy_data(tmp27, tmp28);

      array_alloc_scalar_boolean_array(&tmp29, 1, (modelica_boolean)0);
      boolean_array_create(&tmp30, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[28]/* cc.readsignal[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
      boolean_array_copy_data(tmp29, tmp30);

      array_alloc_scalar_boolean_array(&tmp31, 1, (modelica_boolean)0);
      boolean_array_create(&tmp32, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[31]/* cc.writesignal[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
      boolean_array_copy_data(tmp31, tmp32);

      tmp36 = ((modelica_integer) 1); tmp37 = 1; tmp38 = ((modelica_integer) 1);
      if(!(((tmp37 > 0) && (tmp36 > tmp38)) || ((tmp37 < 0) && (tmp36 < tmp38))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp36, tmp38); i += tmp37)
        {
          tmp33 = ((modelica_integer) 1); tmp34 = 1; tmp35 = ((modelica_integer) 5);
          if(!(((tmp34 > 0) && (tmp33 > tmp35)) || ((tmp34 < 0) && (tmp33 < tmp35))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp33, tmp35); j += tmp34)
            {
              (&(data->localData[0]->realVars[61]/* cc.msg_to_drone[1,1] DISCRETE */) )[(i - 1) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      tmp42 = ((modelica_integer) 1); tmp43 = 1; tmp44 = ((modelica_integer) 1);
      if(!(((tmp43 > 0) && (tmp42 > tmp44)) || ((tmp43 < 0) && (tmp42 < tmp44))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp42, tmp44); i += tmp43)
        {
          tmp39 = ((modelica_integer) 1); tmp40 = 1; tmp41 = ((modelica_integer) 3);
          if(!(((tmp40 > 0) && (tmp39 > tmp41)) || ((tmp40 < 0) && (tmp39 < tmp41))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp39, tmp41); j += tmp40)
            {
              (&(data->localData[0]->realVars[66]/* cc.pos[1,1] DISCRETE */) )[(i - 1) * 3 + (j-1)] = 0.0;
            }
          }
        }
      }

      array_alloc_scalar_integer_array(&tmp45, 1, (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp46, ((modelica_integer*)&((&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
      integer_array_copy_data(tmp45, tmp46);

      (data->localData[0]->integerVars[11]/* cc.state DISCRETE */)  = ((modelica_integer) 0);

      array_alloc_scalar_boolean_array(&tmp47, 1, (modelica_boolean)1);
      boolean_array_create(&tmp48, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[14]/* cc.comm_done[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
      boolean_array_copy_data(tmp47, tmp48);

      array_alloc_scalar_boolean_array(&tmp49, 1, (modelica_boolean)0);
      boolean_array_create(&tmp50, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
      boolean_array_copy_data(tmp49, tmp50);

      (data->localData[0]->booleanVars[16]/* cc.endSimulation DISCRETE */)  = 0;

      omc_setup__db(threadData);

      real_array_create(&tmp52, ((modelica_real*)&((&data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
      real_array_create(&tmp53, ((modelica_real*)&((&data->simulationInfo->realParameter[67]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
      real_array_create(&tmp54, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
      tmp51._stop_simulation = (data->simulationInfo->realParameter[85]/* cc.p.stop_simulation PARAM */) ;
      tmp51._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
      tmp51._msg_len = ((modelica_integer) 5);
      tmp51._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
      tmp51._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
      tmp51._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
      tmp51._monitor_start = (data->simulationInfo->realParameter[78]/* cc.p.monitor_start PARAM */) ;
      tmp51._nDrones = ((modelica_integer) 1);
      tmp51._cc_choice = (data->simulationInfo->realParameter[60]/* cc.p.cc_choice PARAM */) ;
      tmp51._p_worst = (data->simulationInfo->realParameter[81]/* cc.p.p_worst PARAM */) ;
      tmp51._p_recharge = (data->simulationInfo->realParameter[80]/* cc.p.p_recharge PARAM */) ;
      tmp51._comm_timeout = (data->simulationInfo->realParameter[62]/* cc.p.comm_timeout PARAM */) ;
      tmp51._p_comm_error = (data->simulationInfo->realParameter[79]/* cc.p.p_comm_error PARAM */) ;
      tmp51._arrival_timeout = (data->simulationInfo->realParameter[57]/* cc.p.arrival_timeout PARAM */) ;
      tmp51._dDistance = (data->simulationInfo->realParameter[63]/* cc.p.dDistance PARAM */) ;
      tmp51._arrivalThreshold = (data->simulationInfo->realParameter[56]/* cc.p.arrivalThreshold PARAM */) ;
      tmp51._flyZone = tmp52;
      tmp51._docking_bay = tmp53;
      tmp51._m = (data->simulationInfo->realParameter[74]/* cc.p.m PARAM */) ;
      tmp51._maxSpeed = (data->simulationInfo->realParameter[76]/* cc.p.maxSpeed PARAM */) ;
      tmp51._horizontalODD = (data->simulationInfo->realParameter[73]/* cc.p.horizontalODD PARAM */) ;
      tmp51._verticalODD = (data->simulationInfo->realParameter[87]/* cc.p.verticalODD PARAM */) ;
      tmp51._maxAngle = (data->simulationInfo->realParameter[75]/* cc.p.maxAngle PARAM */) ;
      tmp51._minDistanceFromObs = (data->simulationInfo->realParameter[77]/* cc.p.minDistanceFromObs PARAM */) ;
      tmp51._dangerRadius = (data->simulationInfo->realParameter[64]/* cc.p.dangerRadius PARAM */) ;
      tmp51._unita = (data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) ;
      tmp51._capacity = (data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ;
      tmp51._batteryDischarge = (data->simulationInfo->realParameter[58]/* cc.p.batteryDischarge PARAM */) ;
      tmp51._commDischarge = (data->simulationInfo->realParameter[61]/* cc.p.commDischarge PARAM */) ;
      tmp51._rechargeRate = (data->simulationInfo->realParameter[82]/* cc.p.rechargeRate PARAM */) ;
      tmp51._dangerousBatteryPercentage = (data->simulationInfo->realParameter[66]/* cc.p.dangerousBatteryPercentage PARAM */) ;
      tmp51._dangerousBatteryLevel = (data->simulationInfo->realParameter[65]/* cc.p.dangerousBatteryLevel PARAM */) ;
      tmp51._rechargedPercentage = (data->simulationInfo->realParameter[83]/* cc.p.rechargedPercentage PARAM */) ;
      tmp51._rechargedThreshold = (data->simulationInfo->realParameter[84]/* cc.p.rechargedThreshold PARAM */) ;
      tmp51._nAreas = ((modelica_integer) 8);
      tmp51._areas = tmp54;
      omc_setup__areas(threadData, tmp51);

      real_array_create(&tmp56, ((modelica_real*)&((&data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
      real_array_create(&tmp57, ((modelica_real*)&((&data->simulationInfo->realParameter[67]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
      real_array_create(&tmp58, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
      tmp55._stop_simulation = (data->simulationInfo->realParameter[85]/* cc.p.stop_simulation PARAM */) ;
      tmp55._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
      tmp55._msg_len = ((modelica_integer) 5);
      tmp55._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
      tmp55._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
      tmp55._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
      tmp55._monitor_start = (data->simulationInfo->realParameter[78]/* cc.p.monitor_start PARAM */) ;
      tmp55._nDrones = ((modelica_integer) 1);
      tmp55._cc_choice = (data->simulationInfo->realParameter[60]/* cc.p.cc_choice PARAM */) ;
      tmp55._p_worst = (data->simulationInfo->realParameter[81]/* cc.p.p_worst PARAM */) ;
      tmp55._p_recharge = (data->simulationInfo->realParameter[80]/* cc.p.p_recharge PARAM */) ;
      tmp55._comm_timeout = (data->simulationInfo->realParameter[62]/* cc.p.comm_timeout PARAM */) ;
      tmp55._p_comm_error = (data->simulationInfo->realParameter[79]/* cc.p.p_comm_error PARAM */) ;
      tmp55._arrival_timeout = (data->simulationInfo->realParameter[57]/* cc.p.arrival_timeout PARAM */) ;
      tmp55._dDistance = (data->simulationInfo->realParameter[63]/* cc.p.dDistance PARAM */) ;
      tmp55._arrivalThreshold = (data->simulationInfo->realParameter[56]/* cc.p.arrivalThreshold PARAM */) ;
      tmp55._flyZone = tmp56;
      tmp55._docking_bay = tmp57;
      tmp55._m = (data->simulationInfo->realParameter[74]/* cc.p.m PARAM */) ;
      tmp55._maxSpeed = (data->simulationInfo->realParameter[76]/* cc.p.maxSpeed PARAM */) ;
      tmp55._horizontalODD = (data->simulationInfo->realParameter[73]/* cc.p.horizontalODD PARAM */) ;
      tmp55._verticalODD = (data->simulationInfo->realParameter[87]/* cc.p.verticalODD PARAM */) ;
      tmp55._maxAngle = (data->simulationInfo->realParameter[75]/* cc.p.maxAngle PARAM */) ;
      tmp55._minDistanceFromObs = (data->simulationInfo->realParameter[77]/* cc.p.minDistanceFromObs PARAM */) ;
      tmp55._dangerRadius = (data->simulationInfo->realParameter[64]/* cc.p.dangerRadius PARAM */) ;
      tmp55._unita = (data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) ;
      tmp55._capacity = (data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ;
      tmp55._batteryDischarge = (data->simulationInfo->realParameter[58]/* cc.p.batteryDischarge PARAM */) ;
      tmp55._commDischarge = (data->simulationInfo->realParameter[61]/* cc.p.commDischarge PARAM */) ;
      tmp55._rechargeRate = (data->simulationInfo->realParameter[82]/* cc.p.rechargeRate PARAM */) ;
      tmp55._dangerousBatteryPercentage = (data->simulationInfo->realParameter[66]/* cc.p.dangerousBatteryPercentage PARAM */) ;
      tmp55._dangerousBatteryLevel = (data->simulationInfo->realParameter[65]/* cc.p.dangerousBatteryLevel PARAM */) ;
      tmp55._rechargedPercentage = (data->simulationInfo->realParameter[83]/* cc.p.rechargedPercentage PARAM */) ;
      tmp55._rechargedThreshold = (data->simulationInfo->realParameter[84]/* cc.p.rechargedThreshold PARAM */) ;
      tmp55._nAreas = ((modelica_integer) 8);
      tmp55._areas = tmp58;
      omc_setup__drones(threadData, tmp55);
    }
    else if(((data->localData[0]->booleanVars[13]/* $whenCondition9 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[13]/* $whenCondition9 DISCRETE */)  /* edge */))
    {
      if(((data->simulationInfo->integerVarsPre[11]/* cc.state DISCRETE */)  == ((modelica_integer) 0)))
      {
        tmp60 = ((modelica_integer) 1); tmp61 = 1; tmp62 = ((modelica_integer) 1);
        if(!(((tmp61 > 0) && (tmp60 > tmp62)) || ((tmp61 < 0) && (tmp60 < tmp62))))
        {
          modelica_integer drone;
          for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp60, tmp62); drone += tmp61)
          {
            if((!(&(data->simulationInfo->booleanVarsPre[26]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
            {
              (&(data->localData[0]->realVars[61]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 1)-1)] = 1.0;

              (&(data->localData[0]->realVars[61]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 2)-1)] = 0.0;

              (&(data->localData[0]->realVars[61]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 3)-1)] = 0.0;

              (&(data->localData[0]->realVars[61]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 4)-1)] = 0.0;

              (&(data->localData[0]->booleanVars[14]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 0;
            }
            else
            {
              (&(data->localData[0]->booleanVars[14]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;
            }
          }
        }

        (data->localData[0]->integerVars[11]/* cc.state DISCRETE */)  = ((modelica_integer) 10);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[11]/* cc.state DISCRETE */)  == ((modelica_integer) 10)))
        {
          tmp64 = ((modelica_integer) 1); tmp65 = 1; tmp66 = ((modelica_integer) 1);
          if(!(((tmp65 > 0) && (tmp64 > tmp66)) || ((tmp65 < 0) && (tmp64 < tmp66))))
          {
            modelica_integer drone;
            for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp64, tmp66); drone += tmp65)
            {
              if(((!(&(data->simulationInfo->booleanVarsPre[26]/* cc.isDead[1] DISCRETE */) )[drone - 1]) && (!(&(data->simulationInfo->booleanVarsPre[14]/* cc.comm_done[1] DISCRETE */) )[drone - 1])))
              {
                (&(data->localData[0]->booleanVars[31]/* cc.writesignal[1] DISCRETE */) )[drone - 1] = omc_WriteToFIFO(threadData, (&(data->simulationInfo->integerVarsPre[1]/* cc.fifox[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[31]/* cc.writesignal[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[30]/* cc.spaceavailable[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1]);

                if(omc_FifoIODone(threadData, (&data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)[drone - 1] ))
                {
                  (&(data->localData[0]->booleanVars[14]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;

                  (&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1] = ((modelica_integer) 0);
                }
              }
            }
          }

          (data->localData[0]->integerVars[14]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

          tmp67 = ((modelica_integer) 1); tmp68 = 1; tmp69 = ((modelica_integer) 1);
          if(!(((tmp68 > 0) && (tmp67 > tmp69)) || ((tmp68 < 0) && (tmp67 < tmp69))))
          {
            modelica_integer drone;
            for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp67, tmp69); drone += tmp68)
            {
              if((!(&(data->simulationInfo->booleanVarsPre[26]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
              {
                if((!(&(data->simulationInfo->booleanVarsPre[14]/* cc.comm_done[1] DISCRETE */) )[drone - 1]))
                {
                  (data->localData[0]->integerVars[14]/* cc.z DISCRETE */)  = ((modelica_integer) 100);

                  break;
                }
              }
            }
          }

          if(((data->localData[0]->integerVars[14]/* cc.z DISCRETE */)  == ((modelica_integer) 0)))
          {
            (data->localData[0]->integerVars[11]/* cc.state DISCRETE */)  = ((modelica_integer) 15);

            array_alloc_scalar_boolean_array(&tmp71, 1, (modelica_boolean)0);
            boolean_array_create(&tmp72, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[14]/* cc.comm_done[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
            boolean_array_copy_data(tmp71, tmp72);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[11]/* cc.state DISCRETE */)  == ((modelica_integer) 15)))
          {
            tmp81 = ((modelica_integer) 1); tmp82 = 1; tmp83 = ((modelica_integer) 1);
            if(!(((tmp82 > 0) && (tmp81 > tmp83)) || ((tmp82 < 0) && (tmp81 < tmp83))))
            {
              modelica_integer drone;
              for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp81, tmp83); drone += tmp82)
              {
                if(((!(&(data->simulationInfo->booleanVarsPre[26]/* cc.isDead[1] DISCRETE */) )[drone - 1]) && (!(&(data->simulationInfo->booleanVarsPre[14]/* cc.comm_done[1] DISCRETE */) )[drone - 1])))
                {
                  tmp74 = Greater(data->localData[0]->timeValue - (&(data->simulationInfo->realVarsPre[50]/* cc.lastAnswered[1] DISCRETE */) )[drone - 1],(data->simulationInfo->realParameter[652]/* p.comm_timeout PARAM */) );
                  if(tmp74)
                  {
                    (&(data->localData[0]->booleanVars[14]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;

                    (&(data->localData[0]->booleanVars[26]/* cc.isDead[1] DISCRETE */) )[drone - 1] = 1;

                    (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[0]/* cc.aliveDrones DISCRETE */)  - ((modelica_integer) 1);

                    tmp76 = ((modelica_integer) 1); tmp77 = 1; tmp78 = ((modelica_integer) 8);
                    if(!(((tmp77 > 0) && (tmp76 > tmp78)) || ((tmp77 < 0) && (tmp76 < tmp78))))
                    {
                      modelica_integer area;
                      for(area = ((modelica_integer) 1); in_range_integer(area, tmp76, tmp78); area += tmp77)
                      {
                        if(((&(data->simulationInfo->integerVarsPre[2]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] == drone))
                        {
                          (&(data->localData[0]->integerVars[2]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);
                        }
                      }
                    }
                  }
                  else
                  {
                    tmp79 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[79]/* cc.p.p_comm_error PARAM */) );
                    if(tmp79)
                    {
                      (&(data->localData[0]->booleanVars[28]/* cc.readsignal[1] DISCRETE */) )[drone - 1] = omc_ReadFromFIFO(threadData, (&(data->simulationInfo->integerVarsPre[1]/* cc.fifox[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[15]/* cc.datavailable[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[28]/* cc.readsignal[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1]);

                      if(omc_FifoIODone(threadData, (&data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)[drone - 1] ))
                      {
                        (&(data->localData[0]->realVars[66]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 1)-1)] = (&(data->simulationInfo->realVarsPre[15]/* cc.msg_from_drone[1,1] variable */) )[(drone - 1) * 5 + (((modelica_integer) 2)-1)];

                        (&(data->localData[0]->realVars[66]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 2)-1)] = (&(data->simulationInfo->realVarsPre[15]/* cc.msg_from_drone[1,1] variable */) )[(drone - 1) * 5 + (((modelica_integer) 3)-1)];

                        (&(data->localData[0]->realVars[66]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 3)-1)] = (&(data->simulationInfo->realVarsPre[15]/* cc.msg_from_drone[1,1] variable */) )[(drone - 1) * 5 + (((modelica_integer) 4)-1)];

                        (&(data->localData[0]->realVars[46]/* cc.battery[1] DISCRETE */) )[drone - 1] = (&(data->simulationInfo->realVarsPre[15]/* cc.msg_from_drone[1,1] variable */) )[(drone - 1) * 5 + (((modelica_integer) 5)-1)];

                        tmp80 = Less(fabs((&data->localData[0]->realVars[46]/* cc.battery[1] DISCRETE */)[drone - 1]  - (data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ),0.1);
                        if(tmp80)
                        {
                          (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[0]/* cc.aliveDrones DISCRETE */)  - ((modelica_integer) 1);
                        }

                        (&(data->localData[0]->realVars[50]/* cc.lastAnswered[1] DISCRETE */) )[drone - 1] = data->localData[0]->timeValue;

                        (&(data->localData[0]->booleanVars[14]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;

                        (&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1] = ((modelica_integer) 0);
                      }
                    }
                  }
                }
              }
            }

            (data->localData[0]->integerVars[14]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

            tmp84 = ((modelica_integer) 1); tmp85 = 1; tmp86 = ((modelica_integer) 1);
            if(!(((tmp85 > 0) && (tmp84 > tmp86)) || ((tmp85 < 0) && (tmp84 < tmp86))))
            {
              modelica_integer drone;
              for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp84, tmp86); drone += tmp85)
              {
                if((!(&(data->simulationInfo->booleanVarsPre[26]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
                {
                  if((!(&(data->simulationInfo->booleanVarsPre[14]/* cc.comm_done[1] DISCRETE */) )[drone - 1]))
                  {
                    (data->localData[0]->integerVars[14]/* cc.z DISCRETE */)  = ((modelica_integer) 100);

                    break;
                  }
                }
              }
            }

            if(((data->localData[0]->integerVars[14]/* cc.z DISCRETE */)  == ((modelica_integer) 0)))
            {
              (data->localData[0]->integerVars[11]/* cc.state DISCRETE */)  = ((modelica_integer) 20);

              array_alloc_scalar_boolean_array(&tmp88, 1, (modelica_boolean)0);
              boolean_array_create(&tmp89, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[14]/* cc.comm_done[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
              boolean_array_copy_data(tmp88, tmp89);
            }
          }
          else
          {
            if(((data->simulationInfo->integerVarsPre[11]/* cc.state DISCRETE */)  == ((modelica_integer) 20)))
            {
              tmp104 = ((modelica_integer) 1); tmp105 = 1; tmp106 = ((modelica_integer) 1);
              if(!(((tmp105 > 0) && (tmp104 > tmp106)) || ((tmp105 < 0) && (tmp104 < tmp106))))
              {
                modelica_integer drone;
                for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp104, tmp106); drone += tmp105)
                {
                  tmp91 = (&(data->simulationInfo->realVarsPre[66]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 1)-1)] - (&(data->simulationInfo->realVarsPre[70]/* cc.setx[1] DISCRETE */) )[drone - 1];
                  tmp92 = (&(data->simulationInfo->realVarsPre[66]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 2)-1)] - (&(data->simulationInfo->realVarsPre[71]/* cc.sety[1] DISCRETE */) )[drone - 1];
                  tmp93 = (&(data->simulationInfo->realVarsPre[66]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 3)-1)] - (&(data->simulationInfo->realVarsPre[72]/* cc.setz[1] DISCRETE */) )[drone - 1];
                  tmp94 = Less(sqrt((tmp91 * tmp91) + (tmp92 * tmp92) + (tmp93 * tmp93)),(data->simulationInfo->realParameter[646]/* p.arrivalThreshold PARAM */) );
                  if(((&(data->simulationInfo->booleanVarsPre[25]/* cc.isBusy[1] DISCRETE */) )[drone - 1] && tmp94))
                  {
                    (&(data->localData[0]->booleanVars[25]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 0;

                    tmp96 = ((modelica_integer) 1); tmp97 = 1; tmp98 = ((modelica_integer) 8);
                    if(!(((tmp97 > 0) && (tmp96 > tmp98)) || ((tmp97 < 0) && (tmp96 < tmp98))))
                    {
                      modelica_integer area;
                      for(area = ((modelica_integer) 1); in_range_integer(area, tmp96, tmp98); area += tmp97)
                      {
                        if(((&(data->simulationInfo->integerVarsPre[2]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] == drone))
                        {
                          (&(data->localData[0]->integerVars[2]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);

                          (&(data->localData[0]->booleanVars[17]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1] = 1;

                          (&(data->localData[0]->realVars[51]/* cc.lastVisited[1] DISCRETE */) )[area - 1] = data->localData[0]->timeValue;

                          break;
                        }
                      }
                    }
                  }
                  else
                  {
                    if((&(data->simulationInfo->booleanVarsPre[25]/* cc.isBusy[1] DISCRETE */) )[drone - 1])
                    {
                      tmp99 = Greater(fabs(data->localData[0]->timeValue - (&(data->simulationInfo->realVarsPre[69]/* cc.setpointChangeTime[1] DISCRETE */) )[drone - 1]),(data->simulationInfo->realParameter[647]/* p.arrival_timeout PARAM */) );
                      if(tmp99)
                      {
                        (&(data->localData[0]->booleanVars[25]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 0;

                        tmp101 = ((modelica_integer) 1); tmp102 = 1; tmp103 = ((modelica_integer) 8);
                        if(!(((tmp102 > 0) && (tmp101 > tmp103)) || ((tmp102 < 0) && (tmp101 < tmp103))))
                        {
                          modelica_integer area;
                          for(area = ((modelica_integer) 1); in_range_integer(area, tmp101, tmp103); area += tmp102)
                          {
                            if(((&(data->simulationInfo->integerVarsPre[2]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] == drone))
                            {
                              (&(data->localData[0]->integerVars[2]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }

              tmp108 = ((modelica_integer) 1); tmp109 = 1; tmp110 = ((modelica_integer) 1);
              if(!(((tmp109 > 0) && (tmp108 > tmp110)) || ((tmp109 < 0) && (tmp108 < tmp110))))
              {
                modelica_integer drone;
                for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp108, tmp110); drone += tmp109)
                {
                  if((!(&(data->simulationInfo->booleanVarsPre[26]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
                  {
                    real_array_create(&tmp107, ((modelica_real*)&((&(data->simulationInfo->realVarsPre[66]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 1)-1)])), 1, (_index_t)3);
                    omc_update__drone__pos(threadData, drone, data->localData[0]->timeValue, tmp107);
                  }
                }
              }

              tmp112 = ((modelica_integer) 1); tmp113 = 1; tmp114 = ((modelica_integer) 8);
              if(!(((tmp113 > 0) && (tmp112 > tmp114)) || ((tmp113 < 0) && (tmp112 < tmp114))))
              {
                modelica_integer area;
                for(area = ((modelica_integer) 1); in_range_integer(area, tmp112, tmp114); area += tmp113)
                {
                  tmp111 = Greater(omc_how__many__drones__in__area(threadData, area, (data->simulationInfo->realVarsPre[74]/* cc.time_span DISCRETE */) ),((modelica_integer) 0));
                  if(tmp111)
                  {
                    (&(data->localData[0]->booleanVars[17]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1] = 1;

                    (&(data->localData[0]->realVars[51]/* cc.lastVisited[1] DISCRETE */) )[area - 1] = data->localData[0]->timeValue;
                  }
                }
              }

              (data->localData[0]->realVars[49]/* cc.err DISCRETE */)  = 0.0;

              tmp115 = ((modelica_integer) 1); tmp116 = 1; tmp117 = ((modelica_integer) 8);
              if(!(((tmp116 > 0) && (tmp115 > tmp117)) || ((tmp116 < 0) && (tmp115 < tmp117))))
              {
                modelica_integer area;
                for(area = ((modelica_integer) 1); in_range_integer(area, tmp115, tmp117); area += tmp116)
                {
                  if((!(&(data->simulationInfo->booleanVarsPre[17]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1]))
                  {
                    (data->localData[0]->realVars[49]/* cc.err DISCRETE */)  = 100.0;

                    break;
                  }
                }
              }

              tmp118 = Less((data->simulationInfo->realVarsPre[49]/* cc.err DISCRETE */) ,1.0);
              if(tmp118)
              {
                (data->localData[0]->realVars[73]/* cc.time_passed_since_last_loop DISCRETE */)  = data->localData[0]->timeValue - (data->simulationInfo->realVarsPre[74]/* cc.time_span DISCRETE */) ;

                (data->localData[0]->realVars[74]/* cc.time_span DISCRETE */)  = data->localData[0]->timeValue;

                array_alloc_scalar_boolean_array(&tmp119, 8, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
                boolean_array_create(&tmp120, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[17]/* cc.hasBeenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
                boolean_array_copy_data(tmp119, tmp120);

                array_alloc_scalar_integer_array(&tmp121, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
                integer_array_create(&tmp122, ((modelica_integer*)&((&(data->localData[0]->integerVars[2]/* cc.hasBeenSelected[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
                integer_array_copy_data(tmp121, tmp122);
              }

              tmp123 = LessEq((data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */) ,((modelica_integer) 0));
              if(tmp123)
              {
                omc_disconnect__from__db(threadData);

                (data->localData[0]->booleanVars[16]/* cc.endSimulation DISCRETE */)  = 1;
              }

              (data->localData[0]->integerVars[11]/* cc.state DISCRETE */)  = ((modelica_integer) 25);
            }
            else
            {
              if(((data->simulationInfo->integerVarsPre[11]/* cc.state DISCRETE */)  == ((modelica_integer) 25)))
              {
                tmp161 = ((modelica_integer) 1); tmp162 = 1; tmp163 = ((modelica_integer) 1);
                if(!(((tmp162 > 0) && (tmp161 > tmp163)) || ((tmp162 < 0) && (tmp161 < tmp163))))
                {
                  modelica_integer drone;
                  for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp161, tmp163); drone += tmp162)
                  {
                    (&(data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 0;

                    real_array_create(&tmp125, ((modelica_real*)&((&data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                    tmp126 = max_real_array(tmp125);
                    (data->localData[0]->realVars[60]/* cc.min_distance DISCRETE */)  = tmp126;

                    (data->localData[0]->realVars[75]/* cc.tmp_distance DISCRETE */)  = 0.0;

                    (data->localData[0]->integerVars[12]/* cc.tmp_area_1 DISCRETE */)  = ((modelica_integer) 0);

                    (data->localData[0]->integerVars[13]/* cc.tmp_area_2 DISCRETE */)  = ((modelica_integer) 0);

                    (data->localData[0]->realVars[47]/* cc.choice_value_1 DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[48]/* cc.choice_value_2 DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[43]/* cc.area_x DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[44]/* cc.area_y DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[45]/* cc.area_z DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[59]/* cc.max_time DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[76]/* cc.tmp_time DISCRETE */)  = 0.0;

                    if(((!(&(data->simulationInfo->booleanVarsPre[25]/* cc.isBusy[1] DISCRETE */) )[drone - 1]) && (!(&(data->simulationInfo->booleanVarsPre[26]/* cc.isDead[1] DISCRETE */) )[drone - 1])))
                    {
                      tmp137 = ((modelica_integer) 1); tmp138 = 1; tmp139 = ((modelica_integer) 8);
                      if(!(((tmp138 > 0) && (tmp137 > tmp139)) || ((tmp138 < 0) && (tmp137 < tmp139))))
                      {
                        modelica_integer area;
                        for(area = ((modelica_integer) 1); in_range_integer(area, tmp137, tmp139); area += tmp138)
                        {
                          if(((!(&(data->simulationInfo->booleanVarsPre[17]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1]) && ((&(data->simulationInfo->integerVarsPre[2]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] == ((modelica_integer) 0))))
                          {
                            real_array_create(&tmp129, ((modelica_real*)&((&data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp130, ((modelica_real*)&((&data->simulationInfo->realParameter[67]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp131, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
                            tmp128._stop_simulation = (data->simulationInfo->realParameter[85]/* cc.p.stop_simulation PARAM */) ;
                            tmp128._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
                            tmp128._msg_len = ((modelica_integer) 5);
                            tmp128._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
                            tmp128._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
                            tmp128._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
                            tmp128._monitor_start = (data->simulationInfo->realParameter[78]/* cc.p.monitor_start PARAM */) ;
                            tmp128._nDrones = ((modelica_integer) 1);
                            tmp128._cc_choice = (data->simulationInfo->realParameter[60]/* cc.p.cc_choice PARAM */) ;
                            tmp128._p_worst = (data->simulationInfo->realParameter[81]/* cc.p.p_worst PARAM */) ;
                            tmp128._p_recharge = (data->simulationInfo->realParameter[80]/* cc.p.p_recharge PARAM */) ;
                            tmp128._comm_timeout = (data->simulationInfo->realParameter[62]/* cc.p.comm_timeout PARAM */) ;
                            tmp128._p_comm_error = (data->simulationInfo->realParameter[79]/* cc.p.p_comm_error PARAM */) ;
                            tmp128._arrival_timeout = (data->simulationInfo->realParameter[57]/* cc.p.arrival_timeout PARAM */) ;
                            tmp128._dDistance = (data->simulationInfo->realParameter[63]/* cc.p.dDistance PARAM */) ;
                            tmp128._arrivalThreshold = (data->simulationInfo->realParameter[56]/* cc.p.arrivalThreshold PARAM */) ;
                            tmp128._flyZone = tmp129;
                            tmp128._docking_bay = tmp130;
                            tmp128._m = (data->simulationInfo->realParameter[74]/* cc.p.m PARAM */) ;
                            tmp128._maxSpeed = (data->simulationInfo->realParameter[76]/* cc.p.maxSpeed PARAM */) ;
                            tmp128._horizontalODD = (data->simulationInfo->realParameter[73]/* cc.p.horizontalODD PARAM */) ;
                            tmp128._verticalODD = (data->simulationInfo->realParameter[87]/* cc.p.verticalODD PARAM */) ;
                            tmp128._maxAngle = (data->simulationInfo->realParameter[75]/* cc.p.maxAngle PARAM */) ;
                            tmp128._minDistanceFromObs = (data->simulationInfo->realParameter[77]/* cc.p.minDistanceFromObs PARAM */) ;
                            tmp128._dangerRadius = (data->simulationInfo->realParameter[64]/* cc.p.dangerRadius PARAM */) ;
                            tmp128._unita = (data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) ;
                            tmp128._capacity = (data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ;
                            tmp128._batteryDischarge = (data->simulationInfo->realParameter[58]/* cc.p.batteryDischarge PARAM */) ;
                            tmp128._commDischarge = (data->simulationInfo->realParameter[61]/* cc.p.commDischarge PARAM */) ;
                            tmp128._rechargeRate = (data->simulationInfo->realParameter[82]/* cc.p.rechargeRate PARAM */) ;
                            tmp128._dangerousBatteryPercentage = (data->simulationInfo->realParameter[66]/* cc.p.dangerousBatteryPercentage PARAM */) ;
                            tmp128._dangerousBatteryLevel = (data->simulationInfo->realParameter[65]/* cc.p.dangerousBatteryLevel PARAM */) ;
                            tmp128._rechargedPercentage = (data->simulationInfo->realParameter[83]/* cc.p.rechargedPercentage PARAM */) ;
                            tmp128._rechargedThreshold = (data->simulationInfo->realParameter[84]/* cc.p.rechargedThreshold PARAM */) ;
                            tmp128._nAreas = ((modelica_integer) 8);
                            tmp128._areas = tmp131;
                            (data->localData[0]->realVars[43]/* cc.area_x DISCRETE */)  = omc_areaCenter(threadData, tmp128, area ,&(data->localData[0]->realVars[44]/* cc.area_y DISCRETE */)  ,&(data->localData[0]->realVars[45]/* cc.area_z DISCRETE */) );

                            tmp132 = (&(data->simulationInfo->realVarsPre[66]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 1)-1)] - (data->localData[0]->realVars[43]/* cc.area_x DISCRETE */) ;
                            tmp133 = (&(data->simulationInfo->realVarsPre[66]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 2)-1)] - (data->localData[0]->realVars[44]/* cc.area_y DISCRETE */) ;
                            tmp134 = (&(data->simulationInfo->realVarsPre[66]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 3)-1)] - (data->localData[0]->realVars[45]/* cc.area_z DISCRETE */) ;
                            (data->localData[0]->realVars[75]/* cc.tmp_distance DISCRETE */)  = sqrt((tmp132 * tmp132) + (tmp133 * tmp133) + (tmp134 * tmp134));

                            tmp135 = Less((data->localData[0]->realVars[75]/* cc.tmp_distance DISCRETE */) ,(data->localData[0]->realVars[60]/* cc.min_distance DISCRETE */) );
                            if(tmp135)
                            {
                              (data->localData[0]->realVars[60]/* cc.min_distance DISCRETE */)  = (data->localData[0]->realVars[75]/* cc.tmp_distance DISCRETE */) ;

                              (data->localData[0]->integerVars[12]/* cc.tmp_area_1 DISCRETE */)  = area;
                            }

                            (data->localData[0]->realVars[76]/* cc.tmp_time DISCRETE */)  = data->localData[0]->timeValue - (&(data->simulationInfo->realVarsPre[51]/* cc.lastVisited[1] DISCRETE */) )[area - 1];

                            tmp136 = Greater((data->localData[0]->realVars[76]/* cc.tmp_time DISCRETE */) ,(data->localData[0]->realVars[59]/* cc.max_time DISCRETE */) );
                            if(tmp136)
                            {
                              (data->localData[0]->realVars[59]/* cc.max_time DISCRETE */)  = (data->localData[0]->realVars[76]/* cc.tmp_time DISCRETE */) ;

                              (data->localData[0]->integerVars[13]/* cc.tmp_area_2 DISCRETE */)  = area;
                            }
                          }
                        }
                      }

                      if(((!((data->localData[0]->integerVars[12]/* cc.tmp_area_1 DISCRETE */)  == ((modelica_integer) 0))) && (!((data->localData[0]->integerVars[13]/* cc.tmp_area_2 DISCRETE */)  == ((modelica_integer) 0)))))
                      {
                        (data->localData[0]->realVars[47]/* cc.choice_value_1 DISCRETE */)  = ((data->localData[0]->realVars[60]/* cc.min_distance DISCRETE */) ) * ((data->simulationInfo->realParameter[650]/* p.cc_choice PARAM */) );

                        (data->localData[0]->realVars[48]/* cc.choice_value_2 DISCRETE */)  = ((data->localData[0]->realVars[59]/* cc.max_time DISCRETE */) ) * (1.0 - (data->simulationInfo->realParameter[650]/* p.cc_choice PARAM */) );

                        (&(data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                        (&(data->localData[0]->realVars[69]/* cc.setpointChangeTime[1] DISCRETE */) )[drone - 1] = data->localData[0]->timeValue;

                        (&(data->localData[0]->booleanVars[25]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                        tmp142 = Greater((data->localData[0]->realVars[47]/* cc.choice_value_1 DISCRETE */) ,(data->localData[0]->realVars[48]/* cc.choice_value_2 DISCRETE */) );
                        if(tmp142)
                        {
                          tmp143 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[671]/* p.p_worst PARAM */) );
                          if(tmp143)
                          {
                            real_array_create(&tmp145, ((modelica_real*)&((&data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp146, ((modelica_real*)&((&data->simulationInfo->realParameter[67]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp147, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
                            tmp144._stop_simulation = (data->simulationInfo->realParameter[85]/* cc.p.stop_simulation PARAM */) ;
                            tmp144._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
                            tmp144._msg_len = ((modelica_integer) 5);
                            tmp144._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
                            tmp144._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
                            tmp144._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
                            tmp144._monitor_start = (data->simulationInfo->realParameter[78]/* cc.p.monitor_start PARAM */) ;
                            tmp144._nDrones = ((modelica_integer) 1);
                            tmp144._cc_choice = (data->simulationInfo->realParameter[60]/* cc.p.cc_choice PARAM */) ;
                            tmp144._p_worst = (data->simulationInfo->realParameter[81]/* cc.p.p_worst PARAM */) ;
                            tmp144._p_recharge = (data->simulationInfo->realParameter[80]/* cc.p.p_recharge PARAM */) ;
                            tmp144._comm_timeout = (data->simulationInfo->realParameter[62]/* cc.p.comm_timeout PARAM */) ;
                            tmp144._p_comm_error = (data->simulationInfo->realParameter[79]/* cc.p.p_comm_error PARAM */) ;
                            tmp144._arrival_timeout = (data->simulationInfo->realParameter[57]/* cc.p.arrival_timeout PARAM */) ;
                            tmp144._dDistance = (data->simulationInfo->realParameter[63]/* cc.p.dDistance PARAM */) ;
                            tmp144._arrivalThreshold = (data->simulationInfo->realParameter[56]/* cc.p.arrivalThreshold PARAM */) ;
                            tmp144._flyZone = tmp145;
                            tmp144._docking_bay = tmp146;
                            tmp144._m = (data->simulationInfo->realParameter[74]/* cc.p.m PARAM */) ;
                            tmp144._maxSpeed = (data->simulationInfo->realParameter[76]/* cc.p.maxSpeed PARAM */) ;
                            tmp144._horizontalODD = (data->simulationInfo->realParameter[73]/* cc.p.horizontalODD PARAM */) ;
                            tmp144._verticalODD = (data->simulationInfo->realParameter[87]/* cc.p.verticalODD PARAM */) ;
                            tmp144._maxAngle = (data->simulationInfo->realParameter[75]/* cc.p.maxAngle PARAM */) ;
                            tmp144._minDistanceFromObs = (data->simulationInfo->realParameter[77]/* cc.p.minDistanceFromObs PARAM */) ;
                            tmp144._dangerRadius = (data->simulationInfo->realParameter[64]/* cc.p.dangerRadius PARAM */) ;
                            tmp144._unita = (data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) ;
                            tmp144._capacity = (data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ;
                            tmp144._batteryDischarge = (data->simulationInfo->realParameter[58]/* cc.p.batteryDischarge PARAM */) ;
                            tmp144._commDischarge = (data->simulationInfo->realParameter[61]/* cc.p.commDischarge PARAM */) ;
                            tmp144._rechargeRate = (data->simulationInfo->realParameter[82]/* cc.p.rechargeRate PARAM */) ;
                            tmp144._dangerousBatteryPercentage = (data->simulationInfo->realParameter[66]/* cc.p.dangerousBatteryPercentage PARAM */) ;
                            tmp144._dangerousBatteryLevel = (data->simulationInfo->realParameter[65]/* cc.p.dangerousBatteryLevel PARAM */) ;
                            tmp144._rechargedPercentage = (data->simulationInfo->realParameter[83]/* cc.p.rechargedPercentage PARAM */) ;
                            tmp144._rechargedThreshold = (data->simulationInfo->realParameter[84]/* cc.p.rechargedThreshold PARAM */) ;
                            tmp144._nAreas = ((modelica_integer) 8);
                            tmp144._areas = tmp147;
                            (&(data->localData[0]->realVars[70]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp144, (data->localData[0]->integerVars[12]/* cc.tmp_area_1 DISCRETE */)  ,&(&(data->localData[0]->realVars[71]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[72]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                            (&(data->localData[0]->integerVars[2]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[12]/* cc.tmp_area_1 DISCRETE */)  - 1] = drone;
                          }
                          else
                          {
                            real_array_create(&tmp149, ((modelica_real*)&((&data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp150, ((modelica_real*)&((&data->simulationInfo->realParameter[67]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp151, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
                            tmp148._stop_simulation = (data->simulationInfo->realParameter[85]/* cc.p.stop_simulation PARAM */) ;
                            tmp148._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
                            tmp148._msg_len = ((modelica_integer) 5);
                            tmp148._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
                            tmp148._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
                            tmp148._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
                            tmp148._monitor_start = (data->simulationInfo->realParameter[78]/* cc.p.monitor_start PARAM */) ;
                            tmp148._nDrones = ((modelica_integer) 1);
                            tmp148._cc_choice = (data->simulationInfo->realParameter[60]/* cc.p.cc_choice PARAM */) ;
                            tmp148._p_worst = (data->simulationInfo->realParameter[81]/* cc.p.p_worst PARAM */) ;
                            tmp148._p_recharge = (data->simulationInfo->realParameter[80]/* cc.p.p_recharge PARAM */) ;
                            tmp148._comm_timeout = (data->simulationInfo->realParameter[62]/* cc.p.comm_timeout PARAM */) ;
                            tmp148._p_comm_error = (data->simulationInfo->realParameter[79]/* cc.p.p_comm_error PARAM */) ;
                            tmp148._arrival_timeout = (data->simulationInfo->realParameter[57]/* cc.p.arrival_timeout PARAM */) ;
                            tmp148._dDistance = (data->simulationInfo->realParameter[63]/* cc.p.dDistance PARAM */) ;
                            tmp148._arrivalThreshold = (data->simulationInfo->realParameter[56]/* cc.p.arrivalThreshold PARAM */) ;
                            tmp148._flyZone = tmp149;
                            tmp148._docking_bay = tmp150;
                            tmp148._m = (data->simulationInfo->realParameter[74]/* cc.p.m PARAM */) ;
                            tmp148._maxSpeed = (data->simulationInfo->realParameter[76]/* cc.p.maxSpeed PARAM */) ;
                            tmp148._horizontalODD = (data->simulationInfo->realParameter[73]/* cc.p.horizontalODD PARAM */) ;
                            tmp148._verticalODD = (data->simulationInfo->realParameter[87]/* cc.p.verticalODD PARAM */) ;
                            tmp148._maxAngle = (data->simulationInfo->realParameter[75]/* cc.p.maxAngle PARAM */) ;
                            tmp148._minDistanceFromObs = (data->simulationInfo->realParameter[77]/* cc.p.minDistanceFromObs PARAM */) ;
                            tmp148._dangerRadius = (data->simulationInfo->realParameter[64]/* cc.p.dangerRadius PARAM */) ;
                            tmp148._unita = (data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) ;
                            tmp148._capacity = (data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ;
                            tmp148._batteryDischarge = (data->simulationInfo->realParameter[58]/* cc.p.batteryDischarge PARAM */) ;
                            tmp148._commDischarge = (data->simulationInfo->realParameter[61]/* cc.p.commDischarge PARAM */) ;
                            tmp148._rechargeRate = (data->simulationInfo->realParameter[82]/* cc.p.rechargeRate PARAM */) ;
                            tmp148._dangerousBatteryPercentage = (data->simulationInfo->realParameter[66]/* cc.p.dangerousBatteryPercentage PARAM */) ;
                            tmp148._dangerousBatteryLevel = (data->simulationInfo->realParameter[65]/* cc.p.dangerousBatteryLevel PARAM */) ;
                            tmp148._rechargedPercentage = (data->simulationInfo->realParameter[83]/* cc.p.rechargedPercentage PARAM */) ;
                            tmp148._rechargedThreshold = (data->simulationInfo->realParameter[84]/* cc.p.rechargedThreshold PARAM */) ;
                            tmp148._nAreas = ((modelica_integer) 8);
                            tmp148._areas = tmp151;
                            (&(data->localData[0]->realVars[70]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp148, (data->localData[0]->integerVars[13]/* cc.tmp_area_2 DISCRETE */)  ,&(&(data->localData[0]->realVars[71]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[72]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                            (&(data->localData[0]->integerVars[2]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[13]/* cc.tmp_area_2 DISCRETE */)  - 1] = drone;
                          }
                        }
                        else
                        {
                          tmp152 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[671]/* p.p_worst PARAM */) );
                          if(tmp152)
                          {
                            real_array_create(&tmp154, ((modelica_real*)&((&data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp155, ((modelica_real*)&((&data->simulationInfo->realParameter[67]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp156, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
                            tmp153._stop_simulation = (data->simulationInfo->realParameter[85]/* cc.p.stop_simulation PARAM */) ;
                            tmp153._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
                            tmp153._msg_len = ((modelica_integer) 5);
                            tmp153._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
                            tmp153._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
                            tmp153._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
                            tmp153._monitor_start = (data->simulationInfo->realParameter[78]/* cc.p.monitor_start PARAM */) ;
                            tmp153._nDrones = ((modelica_integer) 1);
                            tmp153._cc_choice = (data->simulationInfo->realParameter[60]/* cc.p.cc_choice PARAM */) ;
                            tmp153._p_worst = (data->simulationInfo->realParameter[81]/* cc.p.p_worst PARAM */) ;
                            tmp153._p_recharge = (data->simulationInfo->realParameter[80]/* cc.p.p_recharge PARAM */) ;
                            tmp153._comm_timeout = (data->simulationInfo->realParameter[62]/* cc.p.comm_timeout PARAM */) ;
                            tmp153._p_comm_error = (data->simulationInfo->realParameter[79]/* cc.p.p_comm_error PARAM */) ;
                            tmp153._arrival_timeout = (data->simulationInfo->realParameter[57]/* cc.p.arrival_timeout PARAM */) ;
                            tmp153._dDistance = (data->simulationInfo->realParameter[63]/* cc.p.dDistance PARAM */) ;
                            tmp153._arrivalThreshold = (data->simulationInfo->realParameter[56]/* cc.p.arrivalThreshold PARAM */) ;
                            tmp153._flyZone = tmp154;
                            tmp153._docking_bay = tmp155;
                            tmp153._m = (data->simulationInfo->realParameter[74]/* cc.p.m PARAM */) ;
                            tmp153._maxSpeed = (data->simulationInfo->realParameter[76]/* cc.p.maxSpeed PARAM */) ;
                            tmp153._horizontalODD = (data->simulationInfo->realParameter[73]/* cc.p.horizontalODD PARAM */) ;
                            tmp153._verticalODD = (data->simulationInfo->realParameter[87]/* cc.p.verticalODD PARAM */) ;
                            tmp153._maxAngle = (data->simulationInfo->realParameter[75]/* cc.p.maxAngle PARAM */) ;
                            tmp153._minDistanceFromObs = (data->simulationInfo->realParameter[77]/* cc.p.minDistanceFromObs PARAM */) ;
                            tmp153._dangerRadius = (data->simulationInfo->realParameter[64]/* cc.p.dangerRadius PARAM */) ;
                            tmp153._unita = (data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) ;
                            tmp153._capacity = (data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ;
                            tmp153._batteryDischarge = (data->simulationInfo->realParameter[58]/* cc.p.batteryDischarge PARAM */) ;
                            tmp153._commDischarge = (data->simulationInfo->realParameter[61]/* cc.p.commDischarge PARAM */) ;
                            tmp153._rechargeRate = (data->simulationInfo->realParameter[82]/* cc.p.rechargeRate PARAM */) ;
                            tmp153._dangerousBatteryPercentage = (data->simulationInfo->realParameter[66]/* cc.p.dangerousBatteryPercentage PARAM */) ;
                            tmp153._dangerousBatteryLevel = (data->simulationInfo->realParameter[65]/* cc.p.dangerousBatteryLevel PARAM */) ;
                            tmp153._rechargedPercentage = (data->simulationInfo->realParameter[83]/* cc.p.rechargedPercentage PARAM */) ;
                            tmp153._rechargedThreshold = (data->simulationInfo->realParameter[84]/* cc.p.rechargedThreshold PARAM */) ;
                            tmp153._nAreas = ((modelica_integer) 8);
                            tmp153._areas = tmp156;
                            (&(data->localData[0]->realVars[70]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp153, (data->localData[0]->integerVars[13]/* cc.tmp_area_2 DISCRETE */)  ,&(&(data->localData[0]->realVars[71]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[72]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                            (&(data->localData[0]->integerVars[2]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[13]/* cc.tmp_area_2 DISCRETE */)  - 1] = drone;
                          }
                          else
                          {
                            real_array_create(&tmp158, ((modelica_real*)&((&data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp159, ((modelica_real*)&((&data->simulationInfo->realParameter[67]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp160, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
                            tmp157._stop_simulation = (data->simulationInfo->realParameter[85]/* cc.p.stop_simulation PARAM */) ;
                            tmp157._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
                            tmp157._msg_len = ((modelica_integer) 5);
                            tmp157._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
                            tmp157._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
                            tmp157._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
                            tmp157._monitor_start = (data->simulationInfo->realParameter[78]/* cc.p.monitor_start PARAM */) ;
                            tmp157._nDrones = ((modelica_integer) 1);
                            tmp157._cc_choice = (data->simulationInfo->realParameter[60]/* cc.p.cc_choice PARAM */) ;
                            tmp157._p_worst = (data->simulationInfo->realParameter[81]/* cc.p.p_worst PARAM */) ;
                            tmp157._p_recharge = (data->simulationInfo->realParameter[80]/* cc.p.p_recharge PARAM */) ;
                            tmp157._comm_timeout = (data->simulationInfo->realParameter[62]/* cc.p.comm_timeout PARAM */) ;
                            tmp157._p_comm_error = (data->simulationInfo->realParameter[79]/* cc.p.p_comm_error PARAM */) ;
                            tmp157._arrival_timeout = (data->simulationInfo->realParameter[57]/* cc.p.arrival_timeout PARAM */) ;
                            tmp157._dDistance = (data->simulationInfo->realParameter[63]/* cc.p.dDistance PARAM */) ;
                            tmp157._arrivalThreshold = (data->simulationInfo->realParameter[56]/* cc.p.arrivalThreshold PARAM */) ;
                            tmp157._flyZone = tmp158;
                            tmp157._docking_bay = tmp159;
                            tmp157._m = (data->simulationInfo->realParameter[74]/* cc.p.m PARAM */) ;
                            tmp157._maxSpeed = (data->simulationInfo->realParameter[76]/* cc.p.maxSpeed PARAM */) ;
                            tmp157._horizontalODD = (data->simulationInfo->realParameter[73]/* cc.p.horizontalODD PARAM */) ;
                            tmp157._verticalODD = (data->simulationInfo->realParameter[87]/* cc.p.verticalODD PARAM */) ;
                            tmp157._maxAngle = (data->simulationInfo->realParameter[75]/* cc.p.maxAngle PARAM */) ;
                            tmp157._minDistanceFromObs = (data->simulationInfo->realParameter[77]/* cc.p.minDistanceFromObs PARAM */) ;
                            tmp157._dangerRadius = (data->simulationInfo->realParameter[64]/* cc.p.dangerRadius PARAM */) ;
                            tmp157._unita = (data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) ;
                            tmp157._capacity = (data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ;
                            tmp157._batteryDischarge = (data->simulationInfo->realParameter[58]/* cc.p.batteryDischarge PARAM */) ;
                            tmp157._commDischarge = (data->simulationInfo->realParameter[61]/* cc.p.commDischarge PARAM */) ;
                            tmp157._rechargeRate = (data->simulationInfo->realParameter[82]/* cc.p.rechargeRate PARAM */) ;
                            tmp157._dangerousBatteryPercentage = (data->simulationInfo->realParameter[66]/* cc.p.dangerousBatteryPercentage PARAM */) ;
                            tmp157._dangerousBatteryLevel = (data->simulationInfo->realParameter[65]/* cc.p.dangerousBatteryLevel PARAM */) ;
                            tmp157._rechargedPercentage = (data->simulationInfo->realParameter[83]/* cc.p.rechargedPercentage PARAM */) ;
                            tmp157._rechargedThreshold = (data->simulationInfo->realParameter[84]/* cc.p.rechargedThreshold PARAM */) ;
                            tmp157._nAreas = ((modelica_integer) 8);
                            tmp157._areas = tmp160;
                            (&(data->localData[0]->realVars[70]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp157, (data->localData[0]->integerVars[12]/* cc.tmp_area_1 DISCRETE */)  ,&(&(data->localData[0]->realVars[71]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[72]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                            (&(data->localData[0]->integerVars[2]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[12]/* cc.tmp_area_1 DISCRETE */)  - 1] = drone;
                          }
                        }
                      }
                      else
                      {
                        (&(data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                        (&(data->localData[0]->realVars[69]/* cc.setpointChangeTime[1] DISCRETE */) )[drone - 1] = data->localData[0]->timeValue;

                        (&(data->localData[0]->booleanVars[25]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                        (&(data->localData[0]->realVars[70]/* cc.setx[1] DISCRETE */) )[drone - 1] = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );

                        (&(data->localData[0]->realVars[71]/* cc.sety[1] DISCRETE */) )[drone - 1] = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );

                        (&(data->localData[0]->realVars[72]/* cc.setz[1] DISCRETE */) )[drone - 1] = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
                      }
                    }
                  }
                }

                tmp169 = ((modelica_integer) 1); tmp170 = 1; tmp171 = ((modelica_integer) 1);
                if(!(((tmp170 > 0) && (tmp169 > tmp171)) || ((tmp170 < 0) && (tmp169 < tmp171))))
                {
                  modelica_integer drone;
                  for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp169, tmp171); drone += tmp170)
                  {
                    if((!(&(data->simulationInfo->booleanVarsPre[26]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
                    {
                      if((&(data->simulationInfo->booleanVarsPre[27]/* cc.isRecharging[1] DISCRETE */) )[drone - 1])
                      {
                        tmp164 = Greater((&data->localData[0]->realVars[46]/* cc.battery[1] DISCRETE */)[drone - 1] ,(data->simulationInfo->realParameter[84]/* cc.p.rechargedThreshold PARAM */) );
                        if(tmp164)
                        {
                          (&(data->localData[0]->booleanVars[27]/* cc.isRecharging[1] DISCRETE */) )[drone - 1] = 0;

                          (data->localData[0]->integerVars[10]/* cc.rechargingDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[10]/* cc.rechargingDrones DISCRETE */)  - ((modelica_integer) 1);
                        }
                        else
                        {
                          tmp165 = Less((&data->localData[0]->realVars[46]/* cc.battery[1] DISCRETE */)[drone - 1] ,(data->simulationInfo->realParameter[84]/* cc.p.rechargedThreshold PARAM */) );
                          if(tmp165)
                          {
                            (&(data->localData[0]->booleanVars[27]/* cc.isRecharging[1] DISCRETE */) )[drone - 1] = 1;

                            (&(data->localData[0]->realVars[70]/* cc.setx[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[67]/* cc.p.docking_bay[1] PARAM */) ;

                            (&(data->localData[0]->realVars[71]/* cc.sety[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[68]/* cc.p.docking_bay[2] PARAM */) ;

                            (&(data->localData[0]->realVars[72]/* cc.setz[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[69]/* cc.p.docking_bay[3] PARAM */) ;
                          }
                        }
                      }
                      else
                      {
                        tmp166 = Less((&data->localData[0]->realVars[46]/* cc.battery[1] DISCRETE */)[drone - 1] ,(data->simulationInfo->realParameter[65]/* cc.p.dangerousBatteryLevel PARAM */) );
                        if(tmp166)
                        {
                          (data->localData[0]->integerVars[10]/* cc.rechargingDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[10]/* cc.rechargingDrones DISCRETE */)  + ((modelica_integer) 1);

                          (&(data->localData[0]->booleanVars[27]/* cc.isRecharging[1] DISCRETE */) )[drone - 1] = 1;

                          (&(data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                          (&(data->localData[0]->booleanVars[25]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                          (&(data->localData[0]->realVars[70]/* cc.setx[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[67]/* cc.p.docking_bay[1] PARAM */) ;

                          (&(data->localData[0]->realVars[71]/* cc.sety[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[68]/* cc.p.docking_bay[2] PARAM */) ;

                          (&(data->localData[0]->realVars[72]/* cc.setz[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[69]/* cc.p.docking_bay[3] PARAM */) ;
                        }
                        else
                        {
                          tmp167 = Less(((modelica_real)(data->simulationInfo->integerVarsPre[10]/* cc.rechargingDrones DISCRETE */) ),1.1);
                          if(tmp167)
                          {
                            tmp168 = Less(omc_myrandom(threadData),((data->simulationInfo->realParameter[670]/* p.p_recharge PARAM */) ) * (1.0 - (DIVISION_SIM((&data->localData[0]->realVars[46]/* cc.battery[1] DISCRETE */)[drone - 1] ,(data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ,"cc.p.capacity",equationIndexes))));
                            if(tmp168)
                            {
                              (&(data->localData[0]->booleanVars[27]/* cc.isRecharging[1] DISCRETE */) )[drone - 1] = 1;

                              (data->localData[0]->integerVars[10]/* cc.rechargingDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[10]/* cc.rechargingDrones DISCRETE */)  + ((modelica_integer) 1);

                              (&(data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                              (&(data->localData[0]->booleanVars[25]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                              (&(data->localData[0]->realVars[70]/* cc.setx[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[67]/* cc.p.docking_bay[1] PARAM */) ;

                              (&(data->localData[0]->realVars[71]/* cc.sety[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[68]/* cc.p.docking_bay[2] PARAM */) ;

                              (&(data->localData[0]->realVars[72]/* cc.setz[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[69]/* cc.p.docking_bay[3] PARAM */) ;
                            }
                          }
                        }
                      }
                    }
                  }
                }

                tmp172 = ((modelica_integer) 1); tmp173 = 1; tmp174 = ((modelica_integer) 1);
                if(!(((tmp173 > 0) && (tmp172 > tmp174)) || ((tmp173 < 0) && (tmp172 < tmp174))))
                {
                  modelica_integer drone;
                  for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp172, tmp174); drone += tmp173)
                  {
                    if((&(data->simulationInfo->booleanVarsPre[29]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1])
                    {
                      (data->localData[0]->integerVars[11]/* cc.state DISCRETE */)  = ((modelica_integer) 30);

                      break;
                    }
                    else
                    {
                      (data->localData[0]->integerVars[11]/* cc.state DISCRETE */)  = ((modelica_integer) 0);
                    }
                  }
                }
              }
              else
              {
                if(((data->simulationInfo->integerVarsPre[11]/* cc.state DISCRETE */)  == ((modelica_integer) 30)))
                {
                  tmp176 = ((modelica_integer) 1); tmp177 = 1; tmp178 = ((modelica_integer) 1);
                  if(!(((tmp177 > 0) && (tmp176 > tmp178)) || ((tmp177 < 0) && (tmp176 < tmp178))))
                  {
                    modelica_integer drone;
                    for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp176, tmp178); drone += tmp177)
                    {
                      if((!(&data->localData[0]->booleanVars[26]/* cc.isDead[1] DISCRETE */)[drone - 1] ))
                      {
                        (&(data->localData[0]->realVars[61]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 1)-1)] = 2.0;

                        (&(data->localData[0]->realVars[61]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 2)-1)] = (&data->localData[0]->realVars[70]/* cc.setx[1] DISCRETE */)[drone - 1] ;

                        (&(data->localData[0]->realVars[61]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 3)-1)] = (&data->localData[0]->realVars[71]/* cc.sety[1] DISCRETE */)[drone - 1] ;

                        (&(data->localData[0]->realVars[61]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 4)-1)] = (&data->localData[0]->realVars[72]/* cc.setz[1] DISCRETE */)[drone - 1] ;

                        (&(data->localData[0]->booleanVars[14]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 0;

                        (&(data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 0;
                      }
                      else
                      {
                        (&(data->localData[0]->booleanVars[14]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;
                      }
                    }
                  }

                  (data->localData[0]->integerVars[11]/* cc.state DISCRETE */)  = ((modelica_integer) 40);
                }
                else
                {
                  if(((data->simulationInfo->integerVarsPre[11]/* cc.state DISCRETE */)  == ((modelica_integer) 40)))
                  {
                    tmp180 = ((modelica_integer) 1); tmp181 = 1; tmp182 = ((modelica_integer) 1);
                    if(!(((tmp181 > 0) && (tmp180 > tmp182)) || ((tmp181 < 0) && (tmp180 < tmp182))))
                    {
                      modelica_integer drone;
                      for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp180, tmp182); drone += tmp181)
                      {
                        if((!(&(data->simulationInfo->booleanVarsPre[14]/* cc.comm_done[1] DISCRETE */) )[drone - 1]))
                        {
                          (&(data->localData[0]->booleanVars[31]/* cc.writesignal[1] DISCRETE */) )[drone - 1] = omc_WriteToFIFO(threadData, (&(data->simulationInfo->integerVarsPre[1]/* cc.fifox[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[31]/* cc.writesignal[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[30]/* cc.spaceavailable[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1]);

                          if(omc_FifoIODone(threadData, (&data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)[drone - 1] ))
                          {
                            (&(data->localData[0]->booleanVars[14]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;

                            (&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1] = ((modelica_integer) 0);
                          }
                        }
                      }
                    }

                    (data->localData[0]->integerVars[14]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

                    tmp183 = ((modelica_integer) 1); tmp184 = 1; tmp185 = ((modelica_integer) 1);
                    if(!(((tmp184 > 0) && (tmp183 > tmp185)) || ((tmp184 < 0) && (tmp183 < tmp185))))
                    {
                      modelica_integer drone;
                      for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp183, tmp185); drone += tmp184)
                      {
                        if((!(&(data->simulationInfo->booleanVarsPre[26]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
                        {
                          if((!(&(data->simulationInfo->booleanVarsPre[14]/* cc.comm_done[1] DISCRETE */) )[drone - 1]))
                          {
                            (data->localData[0]->integerVars[14]/* cc.z DISCRETE */)  = ((modelica_integer) 100);

                            break;
                          }
                        }
                      }
                    }

                    if(((data->localData[0]->integerVars[14]/* cc.z DISCRETE */)  == ((modelica_integer) 0)))
                    {
                      (data->localData[0]->integerVars[11]/* cc.state DISCRETE */)  = ((modelica_integer) 0);
                    }
                  }
                  else
                  {
                    (data->localData[0]->integerVars[11]/* cc.state DISCRETE */)  = (data->simulationInfo->integerVarsPre[11]/* cc.state DISCRETE */) ;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 96
type: SIMPLE_ASSIGN
drone_to_cc[1].readsignal = cc.readsignal[1]
*/
void System_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  (data->localData[0]->booleanVars[46]/* drone_to_cc[1].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[28]/* cc.readsignal[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 97
type: SIMPLE_ASSIGN
drone_to_cc[1].readsigint = not pre(drone_to_cc[1].readsignal) == drone_to_cc[1].readsignal
*/
void System_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  (data->localData[0]->booleanVars[45]/* drone_to_cc[1].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[46]/* drone_to_cc[1].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[46]/* drone_to_cc[1].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[46]/* drone_to_cc[1].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[46]/* drone_to_cc[1].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 98
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[5] = cc.msg_to_drone[1,5]
*/
void System_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  (data->localData[0]->realVars[25]/* cc_to_drone[1].inputdata[5] variable */)  = (data->localData[0]->realVars[65]/* cc.msg_to_drone[1,5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 99
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[3] = cc.msg_to_drone[1,3]
*/
void System_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  (data->localData[0]->realVars[23]/* cc_to_drone[1].inputdata[3] variable */)  = (data->localData[0]->realVars[63]/* cc.msg_to_drone[1,3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 100
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[4] = cc.msg_to_drone[1,4]
*/
void System_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  (data->localData[0]->realVars[24]/* cc_to_drone[1].inputdata[4] variable */)  = (data->localData[0]->realVars[64]/* cc.msg_to_drone[1,4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 101
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[1] = cc.msg_to_drone[1,1]
*/
void System_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  (data->localData[0]->realVars[21]/* cc_to_drone[1].inputdata[1] variable */)  = (data->localData[0]->realVars[61]/* cc.msg_to_drone[1,1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 102
type: SIMPLE_ASSIGN
cc_to_drone[1].writesignal = cc.writesignal[1]
*/
void System_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  (data->localData[0]->booleanVars[37]/* cc_to_drone[1].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[31]/* cc.writesignal[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 103
type: SIMPLE_ASSIGN
cc_to_drone[1].writesigint = not pre(cc_to_drone[1].writesignal) == cc_to_drone[1].writesignal
*/
void System_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  (data->localData[0]->booleanVars[36]/* cc_to_drone[1].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[37]/* cc_to_drone[1].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[37]/* cc_to_drone[1].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[37]/* cc_to_drone[1].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[37]/* cc_to_drone[1].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 104
type: ALGORITHM

  m.old_avg_drones_all_areas := pre(m.old_avg_drones_all_areas);
  m.std_dev_all_areas := pre(m.std_dev_all_areas);
  m.std_dev[8] := pre(m.std_dev[8]);
  m.std_dev[7] := pre(m.std_dev[7]);
  m.std_dev[6] := pre(m.std_dev[6]);
  m.std_dev[5] := pre(m.std_dev[5]);
  m.std_dev[4] := pre(m.std_dev[4]);
  m.std_dev[3] := pre(m.std_dev[3]);
  m.std_dev[2] := pre(m.std_dev[2]);
  m.std_dev[1] := pre(m.std_dev[1]);
  m.max_no_drone_time := pre(m.max_no_drone_time);
  m.avg_no_drone_time_all_areas := pre(m.avg_no_drone_time_all_areas);
  m.avg_no_drone_time[8] := pre(m.avg_no_drone_time[8]);
  m.avg_no_drone_time[7] := pre(m.avg_no_drone_time[7]);
  m.avg_no_drone_time[6] := pre(m.avg_no_drone_time[6]);
  m.avg_no_drone_time[5] := pre(m.avg_no_drone_time[5]);
  m.avg_no_drone_time[4] := pre(m.avg_no_drone_time[4]);
  m.avg_no_drone_time[3] := pre(m.avg_no_drone_time[3]);
  m.avg_no_drone_time[2] := pre(m.avg_no_drone_time[2]);
  m.avg_no_drone_time[1] := pre(m.avg_no_drone_time[1]);
  m.no_drone_time[8] := pre(m.no_drone_time[8]);
  m.no_drone_time[7] := pre(m.no_drone_time[7]);
  m.no_drone_time[6] := pre(m.no_drone_time[6]);
  m.no_drone_time[5] := pre(m.no_drone_time[5]);
  m.no_drone_time[4] := pre(m.no_drone_time[4]);
  m.no_drone_time[3] := pre(m.no_drone_time[3]);
  m.no_drone_time[2] := pre(m.no_drone_time[2]);
  m.no_drone_time[1] := pre(m.no_drone_time[1]);
  m.p_drones_all_areas := pre(m.p_drones_all_areas);
  m.p_drones[8] := pre(m.p_drones[8]);
  m.p_drones[7] := pre(m.p_drones[7]);
  m.p_drones[6] := pre(m.p_drones[6]);
  m.p_drones[5] := pre(m.p_drones[5]);
  m.p_drones[4] := pre(m.p_drones[4]);
  m.p_drones[3] := pre(m.p_drones[3]);
  m.p_drones[2] := pre(m.p_drones[2]);
  m.p_drones[1] := pre(m.p_drones[1]);
  m.beenVisited[8] := pre(m.beenVisited[8]);
  m.beenVisited[7] := pre(m.beenVisited[7]);
  m.beenVisited[6] := pre(m.beenVisited[6]);
  m.beenVisited[5] := pre(m.beenVisited[5]);
  m.beenVisited[4] := pre(m.beenVisited[4]);
  m.beenVisited[3] := pre(m.beenVisited[3]);
  m.beenVisited[2] := pre(m.beenVisited[2]);
  m.beenVisited[1] := pre(m.beenVisited[1]);
  m.avg_drones_all_areas := pre(m.avg_drones_all_areas);
  m.avg_drones[8] := pre(m.avg_drones[8]);
  m.avg_drones[7] := pre(m.avg_drones[7]);
  m.avg_drones[6] := pre(m.avg_drones[6]);
  m.avg_drones[5] := pre(m.avg_drones[5]);
  m.avg_drones[4] := pre(m.avg_drones[4]);
  m.avg_drones[3] := pre(m.avg_drones[3]);
  m.avg_drones[2] := pre(m.avg_drones[2]);
  m.avg_drones[1] := pre(m.avg_drones[1]);
  m.current_drones[8] := pre(m.current_drones[8]);
  m.current_drones[7] := pre(m.current_drones[7]);
  m.current_drones[6] := pre(m.current_drones[6]);
  m.current_drones[5] := pre(m.current_drones[5]);
  m.current_drones[4] := pre(m.current_drones[4]);
  m.current_drones[3] := pre(m.current_drones[3]);
  m.current_drones[2] := pre(m.current_drones[2]);
  m.current_drones[1] := pre(m.current_drones[1]);
  m.samples := pre(m.samples);
  m.z := pre(m.z);
  $whenCondition8 := pre($whenCondition8);
  $whenCondition7 := pre($whenCondition7);
  $whenCondition7 := sample(5, m.p.monitor_start, m.p.Tm);
  $whenCondition8 := time > m.p.stop_simulation or cc.endSimulation;
  when false then
    m.z := 0;
    m.samples := 0;
    m.current_drones := {0, 0, 0, 0, 0, 0, 0, 0};
    m.avg_drones := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    m.avg_drones_all_areas := 0.0;
    m.beenVisited := {0, 0, 0, 0, 0, 0, 0, 0};
    m.p_drones := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    m.p_drones_all_areas := 0.0;
    m.no_drone_time := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    m.avg_no_drone_time := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    m.avg_no_drone_time_all_areas := 0.0;
    m.max_no_drone_time := 0.0;
    m.std_dev := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    m.std_dev_all_areas := 0.0;
    m.old_avg_drones_all_areas := 0.0;
  elsewhen $whenCondition7 then
    m.samples := pre(m.samples) + 1;
    m.old_avg_drones_all_areas := pre(m.avg_drones_all_areas);
    for area in 1:8 loop
      m.z := how_many_drones_in_area(area, time - (m.p.Tm + 1.0));
      if m.z > 0 then
        m.current_drones[area] := m.z;
        m.beenVisited[area] := 1;
        m.no_drone_time[area] := 0.0;
      else
        m.no_drone_time[area] := cc.time_passed_since_last_loop;
        m.current_drones[area] := 0;
        m.beenVisited[area] := 0;
      end if;
      m.avg_drones[area] := pre(m.avg_drones[area]) * (*Real*)(pre(m.samples)) / (*Real*)(pre(m.samples) + 1) + (*Real*)(pre(m.current_drones[area])) / (*Real*)(pre(m.samples) + 1);
      m.p_drones[area] := pre(m.p_drones[area]) * (*Real*)(pre(m.samples)) / (*Real*)(pre(m.samples) + 1) + (*Real*)(pre(m.beenVisited[area])) / (*Real*)(pre(m.samples) + 1);
      m.avg_no_drone_time[area] := pre(m.avg_no_drone_time[area]) * (*Real*)(pre(m.samples)) / (*Real*)(pre(m.samples) + 1) + pre(m.no_drone_time[area]) / (*Real*)(pre(m.samples) + 1);
      m.std_dev[area] := sqrt((*Real*)(m.current_drones[area]) - m.avg_drones[area] ^ 2.0);
    end for;
    m.avg_drones_all_areas := 0.125 * (pre(m.avg_drones[1]) + pre(m.avg_drones[2]) + pre(m.avg_drones[3]) + pre(m.avg_drones[4]) + pre(m.avg_drones[5]) + pre(m.avg_drones[6]) + pre(m.avg_drones[7]) + pre(m.avg_drones[8]));
    m.p_drones_all_areas := 0.125 * (pre(m.p_drones[1]) + pre(m.p_drones[2]) + pre(m.p_drones[3]) + pre(m.p_drones[4]) + pre(m.p_drones[5]) + pre(m.p_drones[6]) + pre(m.p_drones[7]) + pre(m.p_drones[8]));
    m.avg_no_drone_time_all_areas := 0.125 * (pre(m.no_drone_time[1]) + pre(m.no_drone_time[2]) + pre(m.no_drone_time[3]) + pre(m.no_drone_time[4]) + pre(m.no_drone_time[5]) + pre(m.no_drone_time[6]) + pre(m.no_drone_time[7]) + pre(m.no_drone_time[8]));
    if pre(m.max_no_drone_time) < max(m.no_drone_time) then
      m.max_no_drone_time := max(m.no_drone_time);
    end if;
    m.std_dev_all_areas := sqrt(abs(pre(m.avg_drones_all_areas) - pre(m.old_avg_drones_all_areas) ^ 2.0));
  elsewhen $whenCondition8 then
    Modelica.Utilities.Files.remove("outputs.txt");
    Modelica.Utilities.Streams.print("AvgDrones AvgNoDrone MaxNoDrone PrDrones StdDev ( time = " + String(time, 6, 0, true) + "s = " + String(time / 3600.0, 6, 0, true) + "h )", "outputs.txt");
    Modelica.Utilities.Streams.print(String(m.avg_drones_all_areas, 6, 0, true) + "  " + String(m.avg_no_drone_time_all_areas, 6, 0, true) + "  " + String(m.max_no_drone_time, 6, 0, true) + "  " + String(m.p_drones_all_areas, 6, 0, true) + "  " + String(m.std_dev_all_areas, 6, 0, true), "outputs.txt");
    disconnect_from_db();
    terminate("Simulation limit reached. Go home now.");
  end when;
*/
void System_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  modelica_boolean tmp189;
  integer_array tmp190;
  integer_array tmp191;
  real_array tmp192;
  real_array tmp193;
  integer_array tmp194;
  integer_array tmp195;
  real_array tmp196;
  real_array tmp197;
  real_array tmp198;
  real_array tmp199;
  real_array tmp200;
  real_array tmp201;
  real_array tmp202;
  real_array tmp203;
  modelica_boolean tmp204;
  modelica_real tmp205;
  modelica_real tmp206;
  modelica_integer tmp207;
  modelica_integer tmp208;
  modelica_integer tmp209;
  real_array tmp210;
  modelica_real tmp211;
  modelica_boolean tmp212;
  real_array tmp213;
  modelica_real tmp214;
  modelica_real tmp215;
  static const MMC_DEFSTRINGLIT(tmp216,11,"outputs.txt");
  static const MMC_DEFSTRINGLIT(tmp217,57,"AvgDrones AvgNoDrone MaxNoDrone PrDrones StdDev ( time = ");
  modelica_string tmp218;
  modelica_metatype tmpMeta219;
  static const MMC_DEFSTRINGLIT(tmp220,4,"s = ");
  modelica_metatype tmpMeta221;
  modelica_string tmp222;
  modelica_metatype tmpMeta223;
  static const MMC_DEFSTRINGLIT(tmp224,3,"h )");
  modelica_metatype tmpMeta225;
  static const MMC_DEFSTRINGLIT(tmp226,11,"outputs.txt");
  modelica_string tmp227;
  static const MMC_DEFSTRINGLIT(tmp228,2,"  ");
  modelica_metatype tmpMeta229;
  modelica_string tmp230;
  modelica_metatype tmpMeta231;
  static const MMC_DEFSTRINGLIT(tmp232,2,"  ");
  modelica_metatype tmpMeta233;
  modelica_string tmp234;
  modelica_metatype tmpMeta235;
  static const MMC_DEFSTRINGLIT(tmp236,2,"  ");
  modelica_metatype tmpMeta237;
  modelica_string tmp238;
  modelica_metatype tmpMeta239;
  static const MMC_DEFSTRINGLIT(tmp240,2,"  ");
  modelica_metatype tmpMeta241;
  modelica_string tmp242;
  modelica_metatype tmpMeta243;
  static const MMC_DEFSTRINGLIT(tmp244,11,"outputs.txt");
  static const MMC_DEFSTRINGLIT(tmp245,38,"Simulation limit reached. Go home now.");
  (data->localData[0]->realVars[226]/* m.old_avg_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[226]/* m.old_avg_drones_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[244]/* m.std_dev_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[244]/* m.std_dev_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[243]/* m.std_dev[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[243]/* m.std_dev[8] DISCRETE */) ;

  (data->localData[0]->realVars[242]/* m.std_dev[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[242]/* m.std_dev[7] DISCRETE */) ;

  (data->localData[0]->realVars[241]/* m.std_dev[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[241]/* m.std_dev[6] DISCRETE */) ;

  (data->localData[0]->realVars[240]/* m.std_dev[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[240]/* m.std_dev[5] DISCRETE */) ;

  (data->localData[0]->realVars[239]/* m.std_dev[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[239]/* m.std_dev[4] DISCRETE */) ;

  (data->localData[0]->realVars[238]/* m.std_dev[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[238]/* m.std_dev[3] DISCRETE */) ;

  (data->localData[0]->realVars[237]/* m.std_dev[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[237]/* m.std_dev[2] DISCRETE */) ;

  (data->localData[0]->realVars[236]/* m.std_dev[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[236]/* m.std_dev[1] DISCRETE */) ;

  (data->localData[0]->realVars[217]/* m.max_no_drone_time DISCRETE */)  = (data->simulationInfo->realVarsPre[217]/* m.max_no_drone_time DISCRETE */) ;

  (data->localData[0]->realVars[216]/* m.avg_no_drone_time_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[216]/* m.avg_no_drone_time_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[215]/* m.avg_no_drone_time[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[215]/* m.avg_no_drone_time[8] DISCRETE */) ;

  (data->localData[0]->realVars[214]/* m.avg_no_drone_time[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[214]/* m.avg_no_drone_time[7] DISCRETE */) ;

  (data->localData[0]->realVars[213]/* m.avg_no_drone_time[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[213]/* m.avg_no_drone_time[6] DISCRETE */) ;

  (data->localData[0]->realVars[212]/* m.avg_no_drone_time[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[212]/* m.avg_no_drone_time[5] DISCRETE */) ;

  (data->localData[0]->realVars[211]/* m.avg_no_drone_time[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[211]/* m.avg_no_drone_time[4] DISCRETE */) ;

  (data->localData[0]->realVars[210]/* m.avg_no_drone_time[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[210]/* m.avg_no_drone_time[3] DISCRETE */) ;

  (data->localData[0]->realVars[209]/* m.avg_no_drone_time[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[209]/* m.avg_no_drone_time[2] DISCRETE */) ;

  (data->localData[0]->realVars[208]/* m.avg_no_drone_time[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[208]/* m.avg_no_drone_time[1] DISCRETE */) ;

  (data->localData[0]->realVars[225]/* m.no_drone_time[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[225]/* m.no_drone_time[8] DISCRETE */) ;

  (data->localData[0]->realVars[224]/* m.no_drone_time[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[224]/* m.no_drone_time[7] DISCRETE */) ;

  (data->localData[0]->realVars[223]/* m.no_drone_time[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[223]/* m.no_drone_time[6] DISCRETE */) ;

  (data->localData[0]->realVars[222]/* m.no_drone_time[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[222]/* m.no_drone_time[5] DISCRETE */) ;

  (data->localData[0]->realVars[221]/* m.no_drone_time[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[221]/* m.no_drone_time[4] DISCRETE */) ;

  (data->localData[0]->realVars[220]/* m.no_drone_time[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[220]/* m.no_drone_time[3] DISCRETE */) ;

  (data->localData[0]->realVars[219]/* m.no_drone_time[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[219]/* m.no_drone_time[2] DISCRETE */) ;

  (data->localData[0]->realVars[218]/* m.no_drone_time[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[218]/* m.no_drone_time[1] DISCRETE */) ;

  (data->localData[0]->realVars[235]/* m.p_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[235]/* m.p_drones_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[234]/* m.p_drones[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[234]/* m.p_drones[8] DISCRETE */) ;

  (data->localData[0]->realVars[233]/* m.p_drones[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[233]/* m.p_drones[7] DISCRETE */) ;

  (data->localData[0]->realVars[232]/* m.p_drones[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[232]/* m.p_drones[6] DISCRETE */) ;

  (data->localData[0]->realVars[231]/* m.p_drones[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[231]/* m.p_drones[5] DISCRETE */) ;

  (data->localData[0]->realVars[230]/* m.p_drones[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[230]/* m.p_drones[4] DISCRETE */) ;

  (data->localData[0]->realVars[229]/* m.p_drones[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[229]/* m.p_drones[3] DISCRETE */) ;

  (data->localData[0]->realVars[228]/* m.p_drones[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[228]/* m.p_drones[2] DISCRETE */) ;

  (data->localData[0]->realVars[227]/* m.p_drones[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[227]/* m.p_drones[1] DISCRETE */) ;

  (data->localData[0]->integerVars[32]/* m.beenVisited[8] DISCRETE */)  = (data->simulationInfo->integerVarsPre[32]/* m.beenVisited[8] DISCRETE */) ;

  (data->localData[0]->integerVars[31]/* m.beenVisited[7] DISCRETE */)  = (data->simulationInfo->integerVarsPre[31]/* m.beenVisited[7] DISCRETE */) ;

  (data->localData[0]->integerVars[30]/* m.beenVisited[6] DISCRETE */)  = (data->simulationInfo->integerVarsPre[30]/* m.beenVisited[6] DISCRETE */) ;

  (data->localData[0]->integerVars[29]/* m.beenVisited[5] DISCRETE */)  = (data->simulationInfo->integerVarsPre[29]/* m.beenVisited[5] DISCRETE */) ;

  (data->localData[0]->integerVars[28]/* m.beenVisited[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[28]/* m.beenVisited[4] DISCRETE */) ;

  (data->localData[0]->integerVars[27]/* m.beenVisited[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[27]/* m.beenVisited[3] DISCRETE */) ;

  (data->localData[0]->integerVars[26]/* m.beenVisited[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[26]/* m.beenVisited[2] DISCRETE */) ;

  (data->localData[0]->integerVars[25]/* m.beenVisited[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[25]/* m.beenVisited[1] DISCRETE */) ;

  (data->localData[0]->realVars[207]/* m.avg_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[207]/* m.avg_drones_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[206]/* m.avg_drones[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[206]/* m.avg_drones[8] DISCRETE */) ;

  (data->localData[0]->realVars[205]/* m.avg_drones[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[205]/* m.avg_drones[7] DISCRETE */) ;

  (data->localData[0]->realVars[204]/* m.avg_drones[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[204]/* m.avg_drones[6] DISCRETE */) ;

  (data->localData[0]->realVars[203]/* m.avg_drones[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[203]/* m.avg_drones[5] DISCRETE */) ;

  (data->localData[0]->realVars[202]/* m.avg_drones[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[202]/* m.avg_drones[4] DISCRETE */) ;

  (data->localData[0]->realVars[201]/* m.avg_drones[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[201]/* m.avg_drones[3] DISCRETE */) ;

  (data->localData[0]->realVars[200]/* m.avg_drones[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[200]/* m.avg_drones[2] DISCRETE */) ;

  (data->localData[0]->realVars[199]/* m.avg_drones[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[199]/* m.avg_drones[1] DISCRETE */) ;

  (data->localData[0]->integerVars[40]/* m.current_drones[8] DISCRETE */)  = (data->simulationInfo->integerVarsPre[40]/* m.current_drones[8] DISCRETE */) ;

  (data->localData[0]->integerVars[39]/* m.current_drones[7] DISCRETE */)  = (data->simulationInfo->integerVarsPre[39]/* m.current_drones[7] DISCRETE */) ;

  (data->localData[0]->integerVars[38]/* m.current_drones[6] DISCRETE */)  = (data->simulationInfo->integerVarsPre[38]/* m.current_drones[6] DISCRETE */) ;

  (data->localData[0]->integerVars[37]/* m.current_drones[5] DISCRETE */)  = (data->simulationInfo->integerVarsPre[37]/* m.current_drones[5] DISCRETE */) ;

  (data->localData[0]->integerVars[36]/* m.current_drones[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[36]/* m.current_drones[4] DISCRETE */) ;

  (data->localData[0]->integerVars[35]/* m.current_drones[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[35]/* m.current_drones[3] DISCRETE */) ;

  (data->localData[0]->integerVars[34]/* m.current_drones[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[34]/* m.current_drones[2] DISCRETE */) ;

  (data->localData[0]->integerVars[33]/* m.current_drones[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[33]/* m.current_drones[1] DISCRETE */) ;

  (data->localData[0]->integerVars[41]/* m.samples DISCRETE */)  = (data->simulationInfo->integerVarsPre[41]/* m.samples DISCRETE */) ;

  (data->localData[0]->integerVars[42]/* m.z DISCRETE */)  = (data->simulationInfo->integerVarsPre[42]/* m.z DISCRETE */) ;

  (data->localData[0]->booleanVars[12]/* $whenCondition8 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[12]/* $whenCondition8 DISCRETE */) ;

  (data->localData[0]->booleanVars[11]/* $whenCondition7 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[11]/* $whenCondition7 DISCRETE */) ;

  (data->localData[0]->booleanVars[11]/* $whenCondition7 DISCRETE */)  = data->simulationInfo->samples[4];

  relationhysteresis(data, &tmp189, data->localData[0]->timeValue, (data->simulationInfo->realParameter[592]/* m.p.stop_simulation PARAM */) , 0, Greater, GreaterZC);
  (data->localData[0]->booleanVars[12]/* $whenCondition8 DISCRETE */)  = (tmp189 || (data->localData[0]->booleanVars[16]/* cc.endSimulation DISCRETE */) );

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->integerVars[42]/* m.z DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[41]/* m.samples DISCRETE */)  = ((modelica_integer) 0);

      array_alloc_scalar_integer_array(&tmp190, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp191, ((modelica_integer*)&((&(data->localData[0]->integerVars[33]/* m.current_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      integer_array_copy_data(tmp190, tmp191);

      array_alloc_scalar_real_array(&tmp192, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp193, ((modelica_real*)&((&(data->localData[0]->realVars[199]/* m.avg_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp192, tmp193);

      (data->localData[0]->realVars[207]/* m.avg_drones_all_areas DISCRETE */)  = 0.0;

      array_alloc_scalar_integer_array(&tmp194, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp195, ((modelica_integer*)&((&(data->localData[0]->integerVars[25]/* m.beenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      integer_array_copy_data(tmp194, tmp195);

      array_alloc_scalar_real_array(&tmp196, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp197, ((modelica_real*)&((&(data->localData[0]->realVars[227]/* m.p_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp196, tmp197);

      (data->localData[0]->realVars[235]/* m.p_drones_all_areas DISCRETE */)  = 0.0;

      array_alloc_scalar_real_array(&tmp198, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp199, ((modelica_real*)&((&(data->localData[0]->realVars[218]/* m.no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp198, tmp199);

      array_alloc_scalar_real_array(&tmp200, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp201, ((modelica_real*)&((&(data->localData[0]->realVars[208]/* m.avg_no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp200, tmp201);

      (data->localData[0]->realVars[216]/* m.avg_no_drone_time_all_areas DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[217]/* m.max_no_drone_time DISCRETE */)  = 0.0;

      array_alloc_scalar_real_array(&tmp202, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp203, ((modelica_real*)&((&(data->localData[0]->realVars[236]/* m.std_dev[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp202, tmp203);

      (data->localData[0]->realVars[244]/* m.std_dev_all_areas DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[226]/* m.old_avg_drones_all_areas DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[11]/* $whenCondition7 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[11]/* $whenCondition7 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->integerVars[41]/* m.samples DISCRETE */)  = (data->simulationInfo->integerVarsPre[41]/* m.samples DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->realVars[226]/* m.old_avg_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[207]/* m.avg_drones_all_areas DISCRETE */) ;

      tmp207 = ((modelica_integer) 1); tmp208 = 1; tmp209 = ((modelica_integer) 8);
      if(!(((tmp208 > 0) && (tmp207 > tmp209)) || ((tmp208 < 0) && (tmp207 < tmp209))))
      {
        modelica_integer area;
        for(area = ((modelica_integer) 1); in_range_integer(area, tmp207, tmp209); area += tmp208)
        {
          (data->localData[0]->integerVars[42]/* m.z DISCRETE */)  = omc_how__many__drones__in__area(threadData, area, data->localData[0]->timeValue - ((data->simulationInfo->realParameter[514]/* m.p.Tm PARAM */)  + 1.0));

          tmp204 = Greater((data->localData[0]->integerVars[42]/* m.z DISCRETE */) ,((modelica_integer) 0));
          if(tmp204)
          {
            (&(data->localData[0]->integerVars[33]/* m.current_drones[1] DISCRETE */) )[area - 1] = (data->localData[0]->integerVars[42]/* m.z DISCRETE */) ;

            (&(data->localData[0]->integerVars[25]/* m.beenVisited[1] DISCRETE */) )[area - 1] = ((modelica_integer) 1);

            (&(data->localData[0]->realVars[218]/* m.no_drone_time[1] DISCRETE */) )[area - 1] = 0.0;
          }
          else
          {
            (&(data->localData[0]->realVars[218]/* m.no_drone_time[1] DISCRETE */) )[area - 1] = (data->localData[0]->realVars[73]/* cc.time_passed_since_last_loop DISCRETE */) ;

            (&(data->localData[0]->integerVars[33]/* m.current_drones[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);

            (&(data->localData[0]->integerVars[25]/* m.beenVisited[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);
          }

          (&(data->localData[0]->realVars[199]/* m.avg_drones[1] DISCRETE */) )[area - 1] = ((&(data->simulationInfo->realVarsPre[199]/* m.avg_drones[1] DISCRETE */) )[area - 1]) * (DIVISION_SIM(((modelica_real)(data->simulationInfo->integerVarsPre[41]/* m.samples DISCRETE */) ),((modelica_real)(data->simulationInfo->integerVarsPre[41]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes)) + DIVISION_SIM(((modelica_real)(&(data->simulationInfo->integerVarsPre[33]/* m.current_drones[1] DISCRETE */) )[area - 1]),((modelica_real)(data->simulationInfo->integerVarsPre[41]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes);

          (&(data->localData[0]->realVars[227]/* m.p_drones[1] DISCRETE */) )[area - 1] = ((&(data->simulationInfo->realVarsPre[227]/* m.p_drones[1] DISCRETE */) )[area - 1]) * (DIVISION_SIM(((modelica_real)(data->simulationInfo->integerVarsPre[41]/* m.samples DISCRETE */) ),((modelica_real)(data->simulationInfo->integerVarsPre[41]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes)) + DIVISION_SIM(((modelica_real)(&(data->simulationInfo->integerVarsPre[25]/* m.beenVisited[1] DISCRETE */) )[area - 1]),((modelica_real)(data->simulationInfo->integerVarsPre[41]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes);

          (&(data->localData[0]->realVars[208]/* m.avg_no_drone_time[1] DISCRETE */) )[area - 1] = ((&(data->simulationInfo->realVarsPre[208]/* m.avg_no_drone_time[1] DISCRETE */) )[area - 1]) * (DIVISION_SIM(((modelica_real)(data->simulationInfo->integerVarsPre[41]/* m.samples DISCRETE */) ),((modelica_real)(data->simulationInfo->integerVarsPre[41]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes)) + DIVISION_SIM((&(data->simulationInfo->realVarsPre[218]/* m.no_drone_time[1] DISCRETE */) )[area - 1],((modelica_real)(data->simulationInfo->integerVarsPre[41]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes);

          tmp205 = (&data->localData[0]->realVars[199]/* m.avg_drones[1] DISCRETE */)[area - 1] ;
          tmp206 = ((modelica_real)(&data->localData[0]->integerVars[33]/* m.current_drones[1] DISCRETE */)[area - 1] ) - ((tmp205 * tmp205));
          if(!(tmp206 >= 0.0))
          {
            if (data->simulationInfo->noThrowAsserts) {
              infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
              data->simulationInfo->needToReThrow = 1;
            } else {
              FILE_INFO info = {"",0,0,0,0,0};
              omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
              throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(/*Real*/(m.current_drones[area]) - m.avg_drones[area] ^ 2.0) was %g should be >= 0", tmp206);
            }
          }
          (&(data->localData[0]->realVars[236]/* m.std_dev[1] DISCRETE */) )[area - 1] = sqrt(tmp206);
        }
      }

      (data->localData[0]->realVars[207]/* m.avg_drones_all_areas DISCRETE */)  = (0.125) * ((data->simulationInfo->realVarsPre[199]/* m.avg_drones[1] DISCRETE */)  + (data->simulationInfo->realVarsPre[200]/* m.avg_drones[2] DISCRETE */)  + (data->simulationInfo->realVarsPre[201]/* m.avg_drones[3] DISCRETE */)  + (data->simulationInfo->realVarsPre[202]/* m.avg_drones[4] DISCRETE */)  + (data->simulationInfo->realVarsPre[203]/* m.avg_drones[5] DISCRETE */)  + (data->simulationInfo->realVarsPre[204]/* m.avg_drones[6] DISCRETE */)  + (data->simulationInfo->realVarsPre[205]/* m.avg_drones[7] DISCRETE */)  + (data->simulationInfo->realVarsPre[206]/* m.avg_drones[8] DISCRETE */) );

      (data->localData[0]->realVars[235]/* m.p_drones_all_areas DISCRETE */)  = (0.125) * ((data->simulationInfo->realVarsPre[227]/* m.p_drones[1] DISCRETE */)  + (data->simulationInfo->realVarsPre[228]/* m.p_drones[2] DISCRETE */)  + (data->simulationInfo->realVarsPre[229]/* m.p_drones[3] DISCRETE */)  + (data->simulationInfo->realVarsPre[230]/* m.p_drones[4] DISCRETE */)  + (data->simulationInfo->realVarsPre[231]/* m.p_drones[5] DISCRETE */)  + (data->simulationInfo->realVarsPre[232]/* m.p_drones[6] DISCRETE */)  + (data->simulationInfo->realVarsPre[233]/* m.p_drones[7] DISCRETE */)  + (data->simulationInfo->realVarsPre[234]/* m.p_drones[8] DISCRETE */) );

      (data->localData[0]->realVars[216]/* m.avg_no_drone_time_all_areas DISCRETE */)  = (0.125) * ((data->simulationInfo->realVarsPre[218]/* m.no_drone_time[1] DISCRETE */)  + (data->simulationInfo->realVarsPre[219]/* m.no_drone_time[2] DISCRETE */)  + (data->simulationInfo->realVarsPre[220]/* m.no_drone_time[3] DISCRETE */)  + (data->simulationInfo->realVarsPre[221]/* m.no_drone_time[4] DISCRETE */)  + (data->simulationInfo->realVarsPre[222]/* m.no_drone_time[5] DISCRETE */)  + (data->simulationInfo->realVarsPre[223]/* m.no_drone_time[6] DISCRETE */)  + (data->simulationInfo->realVarsPre[224]/* m.no_drone_time[7] DISCRETE */)  + (data->simulationInfo->realVarsPre[225]/* m.no_drone_time[8] DISCRETE */) );

      real_array_create(&tmp210, ((modelica_real*)&((&data->localData[0]->realVars[218]/* m.no_drone_time[1] DISCRETE */)[((modelica_integer) 1) - 1] )), 1, (_index_t)8);
      tmp211 = max_real_array(tmp210);
      tmp212 = Less((data->simulationInfo->realVarsPre[217]/* m.max_no_drone_time DISCRETE */) ,tmp211);
      if(tmp212)
      {
        real_array_create(&tmp213, ((modelica_real*)&((&data->localData[0]->realVars[218]/* m.no_drone_time[1] DISCRETE */)[((modelica_integer) 1) - 1] )), 1, (_index_t)8);
        tmp214 = max_real_array(tmp213);
        (data->localData[0]->realVars[217]/* m.max_no_drone_time DISCRETE */)  = tmp214;
      }

      tmp215 = (data->simulationInfo->realVarsPre[226]/* m.old_avg_drones_all_areas DISCRETE */) ;
      (data->localData[0]->realVars[244]/* m.std_dev_all_areas DISCRETE */)  = sqrt(fabs((data->simulationInfo->realVarsPre[207]/* m.avg_drones_all_areas DISCRETE */)  - ((tmp215 * tmp215))));
    }
    else if(((data->localData[0]->booleanVars[12]/* $whenCondition8 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[12]/* $whenCondition8 DISCRETE */)  /* edge */))
    {
      omc_Modelica_Utilities_Files_remove(threadData, MMC_REFSTRINGLIT(tmp216));

      tmp218 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta219 = stringAppend(MMC_REFSTRINGLIT(tmp217),tmp218);
      tmpMeta221 = stringAppend(tmpMeta219,MMC_REFSTRINGLIT(tmp220));
      tmp222 = modelica_real_to_modelica_string(DIVISION_SIM(data->localData[0]->timeValue,3600.0,"3600.0",equationIndexes), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta223 = stringAppend(tmpMeta221,tmp222);
      tmpMeta225 = stringAppend(tmpMeta223,MMC_REFSTRINGLIT(tmp224));
      omc_Modelica_Utilities_Streams_print(threadData, tmpMeta225, MMC_REFSTRINGLIT(tmp226));

      tmp227 = modelica_real_to_modelica_string((data->localData[0]->realVars[207]/* m.avg_drones_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta229 = stringAppend(tmp227,MMC_REFSTRINGLIT(tmp228));
      tmp230 = modelica_real_to_modelica_string((data->localData[0]->realVars[216]/* m.avg_no_drone_time_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta231 = stringAppend(tmpMeta229,tmp230);
      tmpMeta233 = stringAppend(tmpMeta231,MMC_REFSTRINGLIT(tmp232));
      tmp234 = modelica_real_to_modelica_string((data->localData[0]->realVars[217]/* m.max_no_drone_time DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta235 = stringAppend(tmpMeta233,tmp234);
      tmpMeta237 = stringAppend(tmpMeta235,MMC_REFSTRINGLIT(tmp236));
      tmp238 = modelica_real_to_modelica_string((data->localData[0]->realVars[235]/* m.p_drones_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta239 = stringAppend(tmpMeta237,tmp238);
      tmpMeta241 = stringAppend(tmpMeta239,MMC_REFSTRINGLIT(tmp240));
      tmp242 = modelica_real_to_modelica_string((data->localData[0]->realVars[244]/* m.std_dev_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta243 = stringAppend(tmpMeta241,tmp242);
      omc_Modelica_Utilities_Streams_print(threadData, tmpMeta243, MMC_REFSTRINGLIT(tmp244));

      omc_disconnect__from__db(threadData);

      {
        FILE_INFO info = {"/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code/monitor.mo",145,2,145,53,0};
        omc_terminate(info, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp245)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 105
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[2] = cc.msg_to_drone[1,2]
*/
void System_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  (data->localData[0]->realVars[22]/* cc_to_drone[1].inputdata[2] variable */)  = (data->localData[0]->realVars[62]/* cc.msg_to_drone[1,2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 106
type: ALGORITHM

  cc_to_drone[1].newest := pre(cc_to_drone[1].newest);
  cc_to_drone[1].oldest := pre(cc_to_drone[1].oldest);
  cc_to_drone[1].fifosize := pre(cc_to_drone[1].fifosize);
  cc_to_drone[1].fifo[10,5] := pre(cc_to_drone[1].fifo[10,5]);
  cc_to_drone[1].fifo[10,4] := pre(cc_to_drone[1].fifo[10,4]);
  cc_to_drone[1].fifo[10,3] := pre(cc_to_drone[1].fifo[10,3]);
  cc_to_drone[1].fifo[10,2] := pre(cc_to_drone[1].fifo[10,2]);
  cc_to_drone[1].fifo[10,1] := pre(cc_to_drone[1].fifo[10,1]);
  cc_to_drone[1].fifo[9,5] := pre(cc_to_drone[1].fifo[9,5]);
  cc_to_drone[1].fifo[9,4] := pre(cc_to_drone[1].fifo[9,4]);
  cc_to_drone[1].fifo[9,3] := pre(cc_to_drone[1].fifo[9,3]);
  cc_to_drone[1].fifo[9,2] := pre(cc_to_drone[1].fifo[9,2]);
  cc_to_drone[1].fifo[9,1] := pre(cc_to_drone[1].fifo[9,1]);
  cc_to_drone[1].fifo[8,5] := pre(cc_to_drone[1].fifo[8,5]);
  cc_to_drone[1].fifo[8,4] := pre(cc_to_drone[1].fifo[8,4]);
  cc_to_drone[1].fifo[8,3] := pre(cc_to_drone[1].fifo[8,3]);
  cc_to_drone[1].fifo[8,2] := pre(cc_to_drone[1].fifo[8,2]);
  cc_to_drone[1].fifo[8,1] := pre(cc_to_drone[1].fifo[8,1]);
  cc_to_drone[1].fifo[7,5] := pre(cc_to_drone[1].fifo[7,5]);
  cc_to_drone[1].fifo[7,4] := pre(cc_to_drone[1].fifo[7,4]);
  cc_to_drone[1].fifo[7,3] := pre(cc_to_drone[1].fifo[7,3]);
  cc_to_drone[1].fifo[7,2] := pre(cc_to_drone[1].fifo[7,2]);
  cc_to_drone[1].fifo[7,1] := pre(cc_to_drone[1].fifo[7,1]);
  cc_to_drone[1].fifo[6,5] := pre(cc_to_drone[1].fifo[6,5]);
  cc_to_drone[1].fifo[6,4] := pre(cc_to_drone[1].fifo[6,4]);
  cc_to_drone[1].fifo[6,3] := pre(cc_to_drone[1].fifo[6,3]);
  cc_to_drone[1].fifo[6,2] := pre(cc_to_drone[1].fifo[6,2]);
  cc_to_drone[1].fifo[6,1] := pre(cc_to_drone[1].fifo[6,1]);
  cc_to_drone[1].fifo[5,5] := pre(cc_to_drone[1].fifo[5,5]);
  cc_to_drone[1].fifo[5,4] := pre(cc_to_drone[1].fifo[5,4]);
  cc_to_drone[1].fifo[5,3] := pre(cc_to_drone[1].fifo[5,3]);
  cc_to_drone[1].fifo[5,2] := pre(cc_to_drone[1].fifo[5,2]);
  cc_to_drone[1].fifo[5,1] := pre(cc_to_drone[1].fifo[5,1]);
  cc_to_drone[1].fifo[4,5] := pre(cc_to_drone[1].fifo[4,5]);
  cc_to_drone[1].fifo[4,4] := pre(cc_to_drone[1].fifo[4,4]);
  cc_to_drone[1].fifo[4,3] := pre(cc_to_drone[1].fifo[4,3]);
  cc_to_drone[1].fifo[4,2] := pre(cc_to_drone[1].fifo[4,2]);
  cc_to_drone[1].fifo[4,1] := pre(cc_to_drone[1].fifo[4,1]);
  cc_to_drone[1].fifo[3,5] := pre(cc_to_drone[1].fifo[3,5]);
  cc_to_drone[1].fifo[3,4] := pre(cc_to_drone[1].fifo[3,4]);
  cc_to_drone[1].fifo[3,3] := pre(cc_to_drone[1].fifo[3,3]);
  cc_to_drone[1].fifo[3,2] := pre(cc_to_drone[1].fifo[3,2]);
  cc_to_drone[1].fifo[3,1] := pre(cc_to_drone[1].fifo[3,1]);
  cc_to_drone[1].fifo[2,5] := pre(cc_to_drone[1].fifo[2,5]);
  cc_to_drone[1].fifo[2,4] := pre(cc_to_drone[1].fifo[2,4]);
  cc_to_drone[1].fifo[2,3] := pre(cc_to_drone[1].fifo[2,3]);
  cc_to_drone[1].fifo[2,2] := pre(cc_to_drone[1].fifo[2,2]);
  cc_to_drone[1].fifo[2,1] := pre(cc_to_drone[1].fifo[2,1]);
  cc_to_drone[1].fifo[1,5] := pre(cc_to_drone[1].fifo[1,5]);
  cc_to_drone[1].fifo[1,4] := pre(cc_to_drone[1].fifo[1,4]);
  cc_to_drone[1].fifo[1,3] := pre(cc_to_drone[1].fifo[1,3]);
  cc_to_drone[1].fifo[1,2] := pre(cc_to_drone[1].fifo[1,2]);
  cc_to_drone[1].fifo[1,1] := pre(cc_to_drone[1].fifo[1,1]);
  cc_to_drone[1].spaceavailable := pre(cc_to_drone[1].spaceavailable);
  cc_to_drone[1].outputdata[5] := pre(cc_to_drone[1].outputdata[5]);
  cc_to_drone[1].outputdata[4] := pre(cc_to_drone[1].outputdata[4]);
  cc_to_drone[1].outputdata[3] := pre(cc_to_drone[1].outputdata[3]);
  cc_to_drone[1].outputdata[2] := pre(cc_to_drone[1].outputdata[2]);
  cc_to_drone[1].outputdata[1] := pre(cc_to_drone[1].outputdata[1]);
  cc_to_drone[1].datavailable := pre(cc_to_drone[1].datavailable);
  $whenCondition6 := pre($whenCondition6);
  $whenCondition5 := pre($whenCondition5);
  $whenCondition4 := pre($whenCondition4);
  $whenCondition4 := pre(cc_to_drone[1].readsigint) and pre(cc_to_drone[1].writesigint);
  $whenCondition5 := pre(cc_to_drone[1].readsigint) and not pre(cc_to_drone[1].writesigint) and pre(cc_to_drone[1].fifosize) >= 1;
  $whenCondition6 := not pre(cc_to_drone[1].readsigint) and pre(cc_to_drone[1].writesigint) and pre(cc_to_drone[1].fifosize) < 10;
  when false then
    cc_to_drone[1].datavailable := false;
    for j in 1:5 loop
      cc_to_drone[1].outputdata[j] := 0.0;
    end for;
    cc_to_drone[1].spaceavailable := true;
    for i in 1:10 loop
      for j in 1:5 loop
        cc_to_drone[1].fifo[i,j] := 0.0;
      end for;
    end for;
    cc_to_drone[1].fifosize := 0;
    cc_to_drone[1].oldest := 1;
    cc_to_drone[1].newest := 1;
  elsewhen $whenCondition4 then
    if pre(cc_to_drone[1].fifosize) < 10 then
      for j in 1:5 loop
        cc_to_drone[1].fifo[pre(cc_to_drone[1].newest),j] := cc_to_drone[1].inputdata[j];
      end for;
      cc_to_drone[1].newest := mod(pre(cc_to_drone[1].newest), 10) + 1;
      for j in 1:5 loop
        cc_to_drone[1].outputdata[j] := cc_to_drone[1].fifo[pre(cc_to_drone[1].oldest),j];
      end for;
      cc_to_drone[1].oldest := mod(pre(cc_to_drone[1].oldest), 10) + 1;
    else
      for j in 1:5 loop
        cc_to_drone[1].outputdata[j] := cc_to_drone[1].fifo[pre(cc_to_drone[1].oldest),j];
      end for;
      cc_to_drone[1].oldest := mod(pre(cc_to_drone[1].oldest), 10) + 1;
      for j in 1:5 loop
        cc_to_drone[1].fifo[pre(cc_to_drone[1].newest),j] := cc_to_drone[1].inputdata[j];
      end for;
      cc_to_drone[1].newest := mod(pre(cc_to_drone[1].newest), 10) + 1;
    end if;
  elsewhen $whenCondition5 then
    for j in 1:5 loop
      cc_to_drone[1].outputdata[j] := cc_to_drone[1].fifo[pre(cc_to_drone[1].oldest),j];
    end for;
    cc_to_drone[1].oldest := mod(pre(cc_to_drone[1].oldest), 10) + 1;
    cc_to_drone[1].fifosize := pre(cc_to_drone[1].fifosize) - 1;
    cc_to_drone[1].datavailable := cc_to_drone[1].fifosize >= 1;
    cc_to_drone[1].spaceavailable := true;
  elsewhen $whenCondition6 then
    for j in 1:5 loop
      cc_to_drone[1].fifo[pre(cc_to_drone[1].newest),j] := cc_to_drone[1].inputdata[j];
    end for;
    cc_to_drone[1].newest := mod(pre(cc_to_drone[1].newest), 10) + 1;
    cc_to_drone[1].fifosize := pre(cc_to_drone[1].fifosize) + 1;
    cc_to_drone[1].datavailable := true;
    cc_to_drone[1].spaceavailable := pre(cc_to_drone[1].fifosize) < 10;
    for j in 1:5 loop
      cc_to_drone[1].outputdata[j] := cc_to_drone[1].fifo[pre(cc_to_drone[1].oldest),j];
    end for;
  end when;
*/
void System_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  modelica_boolean tmp246;
  modelica_boolean tmp247;
  modelica_integer tmp248;
  modelica_integer tmp249;
  modelica_integer tmp250;
  modelica_integer tmp251;
  modelica_integer tmp252;
  modelica_integer tmp253;
  modelica_integer tmp254;
  modelica_integer tmp255;
  modelica_integer tmp256;
  modelica_boolean tmp257;
  modelica_integer tmp258;
  modelica_integer tmp259;
  modelica_integer tmp260;
  modelica_integer tmp261;
  modelica_integer tmp262;
  modelica_integer tmp263;
  modelica_integer tmp264;
  modelica_integer tmp265;
  modelica_integer tmp266;
  modelica_integer tmp267;
  modelica_integer tmp268;
  modelica_integer tmp269;
  modelica_integer tmp270;
  modelica_integer tmp271;
  modelica_integer tmp272;
  modelica_integer tmp273;
  modelica_integer tmp274;
  modelica_integer tmp275;
  modelica_integer tmp276;
  modelica_integer tmp277;
  modelica_boolean tmp278;
  modelica_integer tmp279;
  modelica_integer tmp280;
  modelica_integer tmp281;
  modelica_integer tmp282;
  modelica_boolean tmp283;
  modelica_integer tmp284;
  modelica_integer tmp285;
  modelica_integer tmp286;
  (data->localData[0]->integerVars[16]/* cc_to_drone[1].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[16]/* cc_to_drone[1].newest DISCRETE */) ;

  (data->localData[0]->integerVars[17]/* cc_to_drone[1].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[17]/* cc_to_drone[1].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[15]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[15]/* cc_to_drone[1].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[126]/* cc_to_drone[1].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[126]/* cc_to_drone[1].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[125]/* cc_to_drone[1].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[125]/* cc_to_drone[1].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[124]/* cc_to_drone[1].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[124]/* cc_to_drone[1].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[123]/* cc_to_drone[1].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[123]/* cc_to_drone[1].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[122]/* cc_to_drone[1].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[122]/* cc_to_drone[1].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[121]/* cc_to_drone[1].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[121]/* cc_to_drone[1].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[120]/* cc_to_drone[1].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[120]/* cc_to_drone[1].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[119]/* cc_to_drone[1].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[119]/* cc_to_drone[1].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[118]/* cc_to_drone[1].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[118]/* cc_to_drone[1].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[117]/* cc_to_drone[1].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[117]/* cc_to_drone[1].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[116]/* cc_to_drone[1].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[116]/* cc_to_drone[1].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[115]/* cc_to_drone[1].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[115]/* cc_to_drone[1].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[114]/* cc_to_drone[1].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[114]/* cc_to_drone[1].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[113]/* cc_to_drone[1].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[113]/* cc_to_drone[1].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[112]/* cc_to_drone[1].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[112]/* cc_to_drone[1].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[111]/* cc_to_drone[1].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[111]/* cc_to_drone[1].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[110]/* cc_to_drone[1].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[110]/* cc_to_drone[1].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[109]/* cc_to_drone[1].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[109]/* cc_to_drone[1].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[108]/* cc_to_drone[1].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[108]/* cc_to_drone[1].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[107]/* cc_to_drone[1].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[107]/* cc_to_drone[1].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[106]/* cc_to_drone[1].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[106]/* cc_to_drone[1].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[105]/* cc_to_drone[1].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[105]/* cc_to_drone[1].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[104]/* cc_to_drone[1].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[104]/* cc_to_drone[1].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[103]/* cc_to_drone[1].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[103]/* cc_to_drone[1].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[102]/* cc_to_drone[1].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[102]/* cc_to_drone[1].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[101]/* cc_to_drone[1].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[101]/* cc_to_drone[1].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[100]/* cc_to_drone[1].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[100]/* cc_to_drone[1].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[99]/* cc_to_drone[1].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[99]/* cc_to_drone[1].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[98]/* cc_to_drone[1].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[98]/* cc_to_drone[1].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[97]/* cc_to_drone[1].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[97]/* cc_to_drone[1].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[96]/* cc_to_drone[1].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[96]/* cc_to_drone[1].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[95]/* cc_to_drone[1].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[95]/* cc_to_drone[1].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[94]/* cc_to_drone[1].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[94]/* cc_to_drone[1].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[93]/* cc_to_drone[1].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[93]/* cc_to_drone[1].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[92]/* cc_to_drone[1].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[92]/* cc_to_drone[1].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[91]/* cc_to_drone[1].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[91]/* cc_to_drone[1].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[90]/* cc_to_drone[1].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[90]/* cc_to_drone[1].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[89]/* cc_to_drone[1].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[89]/* cc_to_drone[1].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[88]/* cc_to_drone[1].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[88]/* cc_to_drone[1].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[87]/* cc_to_drone[1].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[87]/* cc_to_drone[1].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[86]/* cc_to_drone[1].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[86]/* cc_to_drone[1].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[85]/* cc_to_drone[1].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[85]/* cc_to_drone[1].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[84]/* cc_to_drone[1].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[84]/* cc_to_drone[1].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[83]/* cc_to_drone[1].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[83]/* cc_to_drone[1].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[82]/* cc_to_drone[1].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[82]/* cc_to_drone[1].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[81]/* cc_to_drone[1].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[81]/* cc_to_drone[1].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[80]/* cc_to_drone[1].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[80]/* cc_to_drone[1].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[79]/* cc_to_drone[1].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[79]/* cc_to_drone[1].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[78]/* cc_to_drone[1].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[78]/* cc_to_drone[1].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[77]/* cc_to_drone[1].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[77]/* cc_to_drone[1].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[35]/* cc_to_drone[1].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[35]/* cc_to_drone[1].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[131]/* cc_to_drone[1].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[131]/* cc_to_drone[1].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[130]/* cc_to_drone[1].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[130]/* cc_to_drone[1].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[129]/* cc_to_drone[1].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[129]/* cc_to_drone[1].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[128]/* cc_to_drone[1].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[128]/* cc_to_drone[1].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[127]/* cc_to_drone[1].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[127]/* cc_to_drone[1].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[32]/* cc_to_drone[1].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[32]/* cc_to_drone[1].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[10]/* $whenCondition6 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[10]/* $whenCondition6 DISCRETE */) ;

  (data->localData[0]->booleanVars[9]/* $whenCondition5 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[9]/* $whenCondition5 DISCRETE */) ;

  (data->localData[0]->booleanVars[8]/* $whenCondition4 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[8]/* $whenCondition4 DISCRETE */) ;

  (data->localData[0]->booleanVars[8]/* $whenCondition4 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[33]/* cc_to_drone[1].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[36]/* cc_to_drone[1].writesigint DISCRETE */) );

  tmp246 = GreaterEq((data->simulationInfo->integerVarsPre[15]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[9]/* $whenCondition5 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[33]/* cc_to_drone[1].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[36]/* cc_to_drone[1].writesigint DISCRETE */) )) && tmp246);

  tmp247 = Less((data->simulationInfo->integerVarsPre[15]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[10]/* $whenCondition6 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[33]/* cc_to_drone[1].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[36]/* cc_to_drone[1].writesigint DISCRETE */) ) && tmp247);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[32]/* cc_to_drone[1].datavailable DISCRETE */)  = 0;

      tmp248 = ((modelica_integer) 1); tmp249 = 1; tmp250 = ((modelica_integer) 5);
      if(!(((tmp249 > 0) && (tmp248 > tmp250)) || ((tmp249 < 0) && (tmp248 < tmp250))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp248, tmp250); j += tmp249)
        {
          (&(data->localData[0]->realVars[127]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[35]/* cc_to_drone[1].spaceavailable DISCRETE */)  = 1;

      tmp254 = ((modelica_integer) 1); tmp255 = 1; tmp256 = ((modelica_integer) 10);
      if(!(((tmp255 > 0) && (tmp254 > tmp256)) || ((tmp255 < 0) && (tmp254 < tmp256))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp254, tmp256); i += tmp255)
        {
          tmp251 = ((modelica_integer) 1); tmp252 = 1; tmp253 = ((modelica_integer) 5);
          if(!(((tmp252 > 0) && (tmp251 > tmp253)) || ((tmp252 < 0) && (tmp251 < tmp253))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp251, tmp253); j += tmp252)
            {
              (&(data->localData[0]->realVars[77]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[15]/* cc_to_drone[1].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[17]/* cc_to_drone[1].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[16]/* cc_to_drone[1].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[8]/* $whenCondition4 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[8]/* $whenCondition4 DISCRETE */)  /* edge */))
    {
      tmp257 = Less((data->simulationInfo->integerVarsPre[15]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp257)
      {
        tmp258 = ((modelica_integer) 1); tmp259 = 1; tmp260 = ((modelica_integer) 5);
        if(!(((tmp259 > 0) && (tmp258 > tmp260)) || ((tmp259 < 0) && (tmp258 < tmp260))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp258, tmp260); j += tmp259)
          {
            (&(data->localData[0]->realVars[77]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[16]/* cc_to_drone[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[21]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
          }
        }

        tmp261 = ((modelica_integer) 10);
        if (tmp261 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].newest), 10)");}
        (data->localData[0]->integerVars[16]/* cc_to_drone[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[16]/* cc_to_drone[1].newest DISCRETE */) , tmp261) + ((modelica_integer) 1);

        tmp262 = ((modelica_integer) 1); tmp263 = 1; tmp264 = ((modelica_integer) 5);
        if(!(((tmp263 > 0) && (tmp262 > tmp264)) || ((tmp263 < 0) && (tmp262 < tmp264))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp262, tmp264); j += tmp263)
          {
            (&(data->localData[0]->realVars[127]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[77]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[17]/* cc_to_drone[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp265 = ((modelica_integer) 10);
        if (tmp265 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].oldest), 10)");}
        (data->localData[0]->integerVars[17]/* cc_to_drone[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[17]/* cc_to_drone[1].oldest DISCRETE */) , tmp265) + ((modelica_integer) 1);
      }
      else
      {
        tmp266 = ((modelica_integer) 1); tmp267 = 1; tmp268 = ((modelica_integer) 5);
        if(!(((tmp267 > 0) && (tmp266 > tmp268)) || ((tmp267 < 0) && (tmp266 < tmp268))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp266, tmp268); j += tmp267)
          {
            (&(data->localData[0]->realVars[127]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[77]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[17]/* cc_to_drone[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp269 = ((modelica_integer) 10);
        if (tmp269 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].oldest), 10)");}
        (data->localData[0]->integerVars[17]/* cc_to_drone[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[17]/* cc_to_drone[1].oldest DISCRETE */) , tmp269) + ((modelica_integer) 1);

        tmp270 = ((modelica_integer) 1); tmp271 = 1; tmp272 = ((modelica_integer) 5);
        if(!(((tmp271 > 0) && (tmp270 > tmp272)) || ((tmp271 < 0) && (tmp270 < tmp272))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp270, tmp272); j += tmp271)
          {
            (&(data->localData[0]->realVars[77]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[16]/* cc_to_drone[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[21]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
          }
        }

        tmp273 = ((modelica_integer) 10);
        if (tmp273 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].newest), 10)");}
        (data->localData[0]->integerVars[16]/* cc_to_drone[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[16]/* cc_to_drone[1].newest DISCRETE */) , tmp273) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[9]/* $whenCondition5 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[9]/* $whenCondition5 DISCRETE */)  /* edge */))
    {
      tmp274 = ((modelica_integer) 1); tmp275 = 1; tmp276 = ((modelica_integer) 5);
      if(!(((tmp275 > 0) && (tmp274 > tmp276)) || ((tmp275 < 0) && (tmp274 < tmp276))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp274, tmp276); j += tmp275)
        {
          (&(data->localData[0]->realVars[127]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[77]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[17]/* cc_to_drone[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp277 = ((modelica_integer) 10);
      if (tmp277 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].oldest), 10)");}
      (data->localData[0]->integerVars[17]/* cc_to_drone[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[17]/* cc_to_drone[1].oldest DISCRETE */) , tmp277) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[15]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[15]/* cc_to_drone[1].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp278 = GreaterEq((data->localData[0]->integerVars[15]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[32]/* cc_to_drone[1].datavailable DISCRETE */)  = tmp278;

      (data->localData[0]->booleanVars[35]/* cc_to_drone[1].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[10]/* $whenCondition6 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[10]/* $whenCondition6 DISCRETE */)  /* edge */))
    {
      tmp279 = ((modelica_integer) 1); tmp280 = 1; tmp281 = ((modelica_integer) 5);
      if(!(((tmp280 > 0) && (tmp279 > tmp281)) || ((tmp280 < 0) && (tmp279 < tmp281))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp279, tmp281); j += tmp280)
        {
          (&(data->localData[0]->realVars[77]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[16]/* cc_to_drone[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[21]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
        }
      }

      tmp282 = ((modelica_integer) 10);
      if (tmp282 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].newest), 10)");}
      (data->localData[0]->integerVars[16]/* cc_to_drone[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[16]/* cc_to_drone[1].newest DISCRETE */) , tmp282) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[15]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[15]/* cc_to_drone[1].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[32]/* cc_to_drone[1].datavailable DISCRETE */)  = 1;

      tmp283 = Less((data->simulationInfo->integerVarsPre[15]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[35]/* cc_to_drone[1].spaceavailable DISCRETE */)  = tmp283;

      tmp284 = ((modelica_integer) 1); tmp285 = 1; tmp286 = ((modelica_integer) 5);
      if(!(((tmp285 > 0) && (tmp284 > tmp286)) || ((tmp285 < 0) && (tmp284 < tmp286))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp284, tmp286); j += tmp285)
        {
          (&(data->localData[0]->realVars[127]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[77]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[17]/* cc_to_drone[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 107
type: SIMPLE_ASSIGN
d[1].datavailable = cc_to_drone[1].datavailable
*/
void System_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  (data->localData[0]->booleanVars[40]/* d[1].datavailable DISCRETE */)  = (data->localData[0]->booleanVars[32]/* cc_to_drone[1].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 108
type: SIMPLE_ASSIGN
cc.spaceavailable[1] = cc_to_drone[1].spaceavailable
*/
void System_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  (data->localData[0]->booleanVars[30]/* cc.spaceavailable[1] DISCRETE */)  = (data->localData[0]->booleanVars[35]/* cc_to_drone[1].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 109
type: ALGORITHM

  d[1].ctrl.destZ := pre(d[1].ctrl.destZ);
  d[1].ctrl.destY := pre(d[1].ctrl.destY);
  d[1].ctrl.destX := pre(d[1].ctrl.destX);
  $whenCondition12 := pre($whenCondition12);
  $whenCondition11 := pre($whenCondition11);
  $whenCondition11 := sample(2, 0.0, d[1].ctrl.prm.Tdrone) and pre(d[1].ctrl.droneDead);
  $whenCondition12 := sample(2, 0.0, d[1].ctrl.prm.Tdrone);
  when $whenCondition11 then
    d[1].ctrl.destX := pre(d[1].ctrl.x);
    d[1].ctrl.destY := pre(d[1].ctrl.y);
    d[1].ctrl.destZ := 0.0;
  elsewhen $whenCondition12 then
    d[1].ctrl.destX := pre(d[1].ctrl.setx);
    d[1].ctrl.destY := pre(d[1].ctrl.sety);
    d[1].ctrl.destZ := pre(d[1].ctrl.setz);
  end when;
*/
void System_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  (data->localData[0]->realVars[134]/* d[1].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[134]/* d[1].ctrl.destZ DISCRETE */) ;

  (data->localData[0]->realVars[133]/* d[1].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[133]/* d[1].ctrl.destY DISCRETE */) ;

  (data->localData[0]->realVars[132]/* d[1].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[132]/* d[1].ctrl.destX DISCRETE */) ;

  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[3]/* $whenCondition12 DISCRETE */) ;

  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[2]/* $whenCondition11 DISCRETE */) ;

  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (data->simulationInfo->samples[1] && (data->simulationInfo->booleanVarsPre[38]/* d[1].ctrl.droneDead DISCRETE */) );

  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = data->simulationInfo->samples[1];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[2]/* $whenCondition11 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[132]/* d[1].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[34]/* d[1].ctrl.x variable */) ;

      (data->localData[0]->realVars[133]/* d[1].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[35]/* d[1].ctrl.y variable */) ;

      (data->localData[0]->realVars[134]/* d[1].ctrl.destZ DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[3]/* $whenCondition12 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[132]/* d[1].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[31]/* d[1].ctrl.setx variable */) ;

      (data->localData[0]->realVars[133]/* d[1].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[32]/* d[1].ctrl.sety variable */) ;

      (data->localData[0]->realVars[134]/* d[1].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[33]/* d[1].ctrl.setz variable */) ;
    }
  }
  TRACE_POP
}
/*
equation index: 110
type: ALGORITHM

  d[1].d.droneDead := pre(d[1].d.droneDead);
  d[1].d.droneState := pre(d[1].d.droneState);
  d[1].d.battery := pre(d[1].d.battery);
  $whenCondition14 := pre($whenCondition14);
  $whenCondition13 := pre($whenCondition13);
  $whenCondition13 := abs(pre(d[1].d.battery)) < 0.01;
  $whenCondition14 := sample(1, 0.0, d[1].d.p.Tdrone) and pre(d[1].d.droneState) == 1;
  when false then
    d[1].d.battery := d[1].d.p.capacity;
    d[1].d.droneState := 1;
    d[1].d.droneDead := false;
  elsewhen $whenCondition13 then
    d[1].d.droneDead := true;
  elsewhen $whenCondition14 then
    if returnedHome(d[1].d.p, pre(d[1].d.x), pre(d[1].d.y), pre(d[1].d.z)) then
      d[1].d.battery := charging(d[1].d.p, pre(d[1].d.battery));
    else
      d[1].d.battery := batteryMonitor(pre(d[1].d.battery), d[1].d.p.batteryDischarge);
    end if;
  end when;
*/
void System_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  modelica_boolean tmp287;
  real_array tmp289;
  real_array tmp290;
  real_array tmp291;
  real_array tmp292;
  real_array tmp293;
  real_array tmp294;
  (data->localData[0]->booleanVars[39]/* d[1].d.droneDead DISCRETE */)  = (data->simulationInfo->booleanVarsPre[39]/* d[1].d.droneDead DISCRETE */) ;

  (data->localData[0]->integerVars[19]/* d[1].d.droneState DISCRETE */)  = (data->simulationInfo->integerVarsPre[19]/* d[1].d.droneState DISCRETE */) ;

  (data->localData[0]->realVars[135]/* d[1].d.battery DISCRETE */)  = (data->simulationInfo->realVarsPre[135]/* d[1].d.battery DISCRETE */) ;

  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[5]/* $whenCondition14 DISCRETE */) ;

  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[4]/* $whenCondition13 DISCRETE */) ;

  tmp287 = Less(fabs((data->simulationInfo->realVarsPre[135]/* d[1].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = tmp287;

  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (data->simulationInfo->samples[0] && ((data->simulationInfo->integerVarsPre[19]/* d[1].d.droneState DISCRETE */)  == ((modelica_integer) 1)));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[135]/* d[1].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[317]/* d[1].d.p.capacity PARAM */) ;

      (data->localData[0]->integerVars[19]/* d[1].d.droneState DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->booleanVars[39]/* d[1].d.droneDead DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[4]/* $whenCondition13 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->booleanVars[39]/* d[1].d.droneDead DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[5]/* $whenCondition14 DISCRETE */)  /* edge */))
    {
      real_array_create(&tmp289, ((modelica_real*)&((&data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp290, ((modelica_real*)&((&data->simulationInfo->realParameter[325]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp291, ((modelica_real*)&((&data->simulationInfo->realParameter[266]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 1) - 1) * 8 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
      if(omc_returnedHome(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[343]/* d[1].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[13]/* d[1].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[14]/* d[1].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[264]/* d[1].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[263]/* d[1].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[265]/* d[1].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[336]/* d[1].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[16]/* d[1].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[318]/* d[1].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[339]/* d[1].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[338]/* d[1].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[320]/* d[1].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[337]/* d[1].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[315]/* d[1].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[321]/* d[1].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[314]/* d[1].d.p.arrivalThreshold PARAM */) , tmp289, tmp290, (data->simulationInfo->realParameter[332]/* d[1].d.p.m PARAM */) , (data->simulationInfo->realParameter[334]/* d[1].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[331]/* d[1].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[345]/* d[1].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[333]/* d[1].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[335]/* d[1].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[322]/* d[1].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[344]/* d[1].d.p.unita PARAM */) , (data->simulationInfo->realParameter[317]/* d[1].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[316]/* d[1].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[319]/* d[1].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[340]/* d[1].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[324]/* d[1].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[323]/* d[1].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[341]/* d[1].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[342]/* d[1].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[15]/* d[1].d.p.nAreas PARAM */) , tmp291), (data->simulationInfo->realVarsPre[3]/* d[1].d.x STATE(1,d[1].d.Vx) */) , (data->simulationInfo->realVarsPre[4]/* d[1].d.y STATE(1,d[1].d.Vy) */) , (data->simulationInfo->realVarsPre[5]/* d[1].d.z STATE(1,d[1].d.Vz) */) ))
      {
        real_array_create(&tmp292, ((modelica_real*)&((&data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp293, ((modelica_real*)&((&data->simulationInfo->realParameter[325]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp294, ((modelica_real*)&((&data->simulationInfo->realParameter[266]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 1) - 1) * 8 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
        (data->localData[0]->realVars[135]/* d[1].d.battery DISCRETE */)  = omc_charging(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[343]/* d[1].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[13]/* d[1].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[14]/* d[1].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[264]/* d[1].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[263]/* d[1].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[265]/* d[1].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[336]/* d[1].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[16]/* d[1].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[318]/* d[1].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[339]/* d[1].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[338]/* d[1].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[320]/* d[1].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[337]/* d[1].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[315]/* d[1].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[321]/* d[1].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[314]/* d[1].d.p.arrivalThreshold PARAM */) , tmp292, tmp293, (data->simulationInfo->realParameter[332]/* d[1].d.p.m PARAM */) , (data->simulationInfo->realParameter[334]/* d[1].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[331]/* d[1].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[345]/* d[1].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[333]/* d[1].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[335]/* d[1].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[322]/* d[1].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[344]/* d[1].d.p.unita PARAM */) , (data->simulationInfo->realParameter[317]/* d[1].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[316]/* d[1].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[319]/* d[1].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[340]/* d[1].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[324]/* d[1].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[323]/* d[1].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[341]/* d[1].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[342]/* d[1].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[15]/* d[1].d.p.nAreas PARAM */) , tmp294), (data->simulationInfo->realVarsPre[135]/* d[1].d.battery DISCRETE */) );
      }
      else
      {
        (data->localData[0]->realVars[135]/* d[1].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[135]/* d[1].d.battery DISCRETE */) , (data->simulationInfo->realParameter[316]/* d[1].d.p.batteryDischarge PARAM */) );
      }
    }
  }
  TRACE_POP
}
/*
equation index: 111
type: SIMPLE_ASSIGN
d[1].ctrl.droneDead = d[1].d.droneDead
*/
void System_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  (data->localData[0]->booleanVars[38]/* d[1].ctrl.droneDead DISCRETE */)  = (data->localData[0]->booleanVars[39]/* d[1].d.droneDead DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 112
type: ALGORITHM

  d[1].comm_state := pre(d[1].comm_state);
  d[1].fifox := pre(d[1].fifox);
  d[1].writesignal := pre(d[1].writesignal);
  d[1].readsignal := pre(d[1].readsignal);
  d[1].flag := pre(d[1].flag);
  d[1].setz := pre(d[1].setz);
  d[1].sety := pre(d[1].sety);
  d[1].setx := pre(d[1].setx);
  d[1].msg_to_cc[5] := pre(d[1].msg_to_cc[5]);
  d[1].msg_to_cc[4] := pre(d[1].msg_to_cc[4]);
  d[1].msg_to_cc[3] := pre(d[1].msg_to_cc[3]);
  d[1].msg_to_cc[2] := pre(d[1].msg_to_cc[2]);
  d[1].msg_to_cc[1] := pre(d[1].msg_to_cc[1]);
  $whenCondition10 := pre($whenCondition10);
  $whenCondition10 := sample(3, 0.0, d[1].p.Tdrone);
  when false then
    d[1].msg_to_cc := {0.0, 0.0, 0.0, 0.0, 0.0};
    d[1].setx := myrandom() * d[1].p.flyZone[1];
    d[1].sety := myrandom() * d[1].p.flyZone[2];
    d[1].setz := myrandom() * d[1].p.flyZone[3];
    d[1].flag := 0;
    d[1].readsignal := false;
    d[1].writesignal := false;
    d[1].fifox := 0;
    d[1].comm_state := 10;
  elsewhen $whenCondition10 then
    if pre(d[1].d.droneDead) then
      d[1].comm_state := 0;
    elseif pre(d[1].comm_state) == 10 then
      (d[1].readsignal, d[1].fifox) := ReadFromFIFO(pre(d[1].fifox), pre(d[1].datavailable), pre(d[1].readsignal));
      if FifoIODone(d[1].fifox) then
        d[1].flag := integer(cc_to_drone[1].outputdata[1]);
        if d[1].flag == 1 then
          d[1].msg_to_cc[1] := 2.0;
          d[1].msg_to_cc[2] := d[1].d.x;
          d[1].msg_to_cc[3] := d[1].d.y;
          d[1].msg_to_cc[4] := d[1].d.z;
          d[1].msg_to_cc[5] := d[1].d.battery;
          d[1].comm_state := 20;
        elseif d[1].flag == 2 then
          d[1].setx := cc_to_drone[1].outputdata[2];
          d[1].sety := cc_to_drone[1].outputdata[3];
          d[1].setz := cc_to_drone[1].outputdata[4];
          d[1].comm_state := pre(d[1].comm_state);
        end if;
        d[1].fifox := 0;
      end if;
    elseif pre(d[1].comm_state) == 20 then
      (d[1].writesignal, d[1].fifox) := WriteToFIFO(pre(d[1].fifox), pre(d[1].writesignal), pre(d[1].spaceavailable));
      if FifoIODone(d[1].fifox) then
        d[1].comm_state := 10;
        d[1].fifox := 0;
      end if;
    else
      d[1].comm_state := pre(d[1].comm_state);
    end if;
  end when;
*/
void System_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  real_array tmp295;
  real_array tmp296;
  (data->localData[0]->integerVars[18]/* d[1].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[18]/* d[1].comm_state DISCRETE */) ;

  (data->localData[0]->integerVars[20]/* d[1].fifox DISCRETE */)  = (data->simulationInfo->integerVarsPre[20]/* d[1].fifox DISCRETE */) ;

  (data->localData[0]->booleanVars[43]/* d[1].writesignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[43]/* d[1].writesignal DISCRETE */) ;

  (data->localData[0]->booleanVars[41]/* d[1].readsignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[41]/* d[1].readsignal DISCRETE */) ;

  (data->localData[0]->integerVars[21]/* d[1].flag DISCRETE */)  = (data->simulationInfo->integerVarsPre[21]/* d[1].flag DISCRETE */) ;

  (data->localData[0]->realVars[143]/* d[1].setz DISCRETE */)  = (data->simulationInfo->realVarsPre[143]/* d[1].setz DISCRETE */) ;

  (data->localData[0]->realVars[142]/* d[1].sety DISCRETE */)  = (data->simulationInfo->realVarsPre[142]/* d[1].sety DISCRETE */) ;

  (data->localData[0]->realVars[141]/* d[1].setx DISCRETE */)  = (data->simulationInfo->realVarsPre[141]/* d[1].setx DISCRETE */) ;

  (data->localData[0]->realVars[140]/* d[1].msg_to_cc[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[140]/* d[1].msg_to_cc[5] DISCRETE */) ;

  (data->localData[0]->realVars[139]/* d[1].msg_to_cc[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[139]/* d[1].msg_to_cc[4] DISCRETE */) ;

  (data->localData[0]->realVars[138]/* d[1].msg_to_cc[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[138]/* d[1].msg_to_cc[3] DISCRETE */) ;

  (data->localData[0]->realVars[137]/* d[1].msg_to_cc[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[137]/* d[1].msg_to_cc[2] DISCRETE */) ;

  (data->localData[0]->realVars[136]/* d[1].msg_to_cc[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[136]/* d[1].msg_to_cc[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[1]/* $whenCondition10 DISCRETE */) ;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = data->simulationInfo->samples[2];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      array_alloc_scalar_real_array(&tmp295, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp296, ((modelica_real*)&((&(data->localData[0]->realVars[136]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
      real_array_copy_data(tmp295, tmp296);

      (data->localData[0]->realVars[141]/* d[1].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) );

      (data->localData[0]->realVars[142]/* d[1].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[412]/* d[1].p.flyZone[2] PARAM */) );

      (data->localData[0]->realVars[143]/* d[1].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[413]/* d[1].p.flyZone[3] PARAM */) );

      (data->localData[0]->integerVars[21]/* d[1].flag DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->booleanVars[41]/* d[1].readsignal DISCRETE */)  = 0;

      (data->localData[0]->booleanVars[43]/* d[1].writesignal DISCRETE */)  = 0;

      (data->localData[0]->integerVars[20]/* d[1].fifox DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[18]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 10);
    }
    else if(((data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[1]/* $whenCondition10 DISCRETE */)  /* edge */))
    {
      if((data->simulationInfo->booleanVarsPre[39]/* d[1].d.droneDead DISCRETE */) )
      {
        (data->localData[0]->integerVars[18]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 0);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[18]/* d[1].comm_state DISCRETE */)  == ((modelica_integer) 10)))
        {
          (data->localData[0]->booleanVars[41]/* d[1].readsignal DISCRETE */)  = omc_ReadFromFIFO(threadData, (data->simulationInfo->integerVarsPre[20]/* d[1].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[40]/* d[1].datavailable DISCRETE */) , (data->simulationInfo->booleanVarsPre[41]/* d[1].readsignal DISCRETE */)  ,&(data->localData[0]->integerVars[20]/* d[1].fifox DISCRETE */) );

          if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[20]/* d[1].fifox DISCRETE */) ))
          {
            (data->localData[0]->integerVars[21]/* d[1].flag DISCRETE */)  = ((modelica_integer)floor((data->localData[0]->realVars[127]/* cc_to_drone[1].outputdata[1] DISCRETE */) ));

            if(((data->localData[0]->integerVars[21]/* d[1].flag DISCRETE */)  == ((modelica_integer) 1)))
            {
              (data->localData[0]->realVars[136]/* d[1].msg_to_cc[1] DISCRETE */)  = 2.0;

              (data->localData[0]->realVars[137]/* d[1].msg_to_cc[2] DISCRETE */)  = (data->localData[0]->realVars[3]/* d[1].d.x STATE(1,d[1].d.Vx) */) ;

              (data->localData[0]->realVars[138]/* d[1].msg_to_cc[3] DISCRETE */)  = (data->localData[0]->realVars[4]/* d[1].d.y STATE(1,d[1].d.Vy) */) ;

              (data->localData[0]->realVars[139]/* d[1].msg_to_cc[4] DISCRETE */)  = (data->localData[0]->realVars[5]/* d[1].d.z STATE(1,d[1].d.Vz) */) ;

              (data->localData[0]->realVars[140]/* d[1].msg_to_cc[5] DISCRETE */)  = (data->localData[0]->realVars[135]/* d[1].d.battery DISCRETE */) ;

              (data->localData[0]->integerVars[18]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 20);
            }
            else
            {
              if(((data->localData[0]->integerVars[21]/* d[1].flag DISCRETE */)  == ((modelica_integer) 2)))
              {
                (data->localData[0]->realVars[141]/* d[1].setx DISCRETE */)  = (data->localData[0]->realVars[128]/* cc_to_drone[1].outputdata[2] DISCRETE */) ;

                (data->localData[0]->realVars[142]/* d[1].sety DISCRETE */)  = (data->localData[0]->realVars[129]/* cc_to_drone[1].outputdata[3] DISCRETE */) ;

                (data->localData[0]->realVars[143]/* d[1].setz DISCRETE */)  = (data->localData[0]->realVars[130]/* cc_to_drone[1].outputdata[4] DISCRETE */) ;

                (data->localData[0]->integerVars[18]/* d[1].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[18]/* d[1].comm_state DISCRETE */) ;
              }
            }

            (data->localData[0]->integerVars[20]/* d[1].fifox DISCRETE */)  = ((modelica_integer) 0);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[18]/* d[1].comm_state DISCRETE */)  == ((modelica_integer) 20)))
          {
            (data->localData[0]->booleanVars[43]/* d[1].writesignal DISCRETE */)  = omc_WriteToFIFO(threadData, (data->simulationInfo->integerVarsPre[20]/* d[1].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[43]/* d[1].writesignal DISCRETE */) , (data->simulationInfo->booleanVarsPre[42]/* d[1].spaceavailable DISCRETE */)  ,&(data->localData[0]->integerVars[20]/* d[1].fifox DISCRETE */) );

            if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[20]/* d[1].fifox DISCRETE */) ))
            {
              (data->localData[0]->integerVars[18]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 10);

              (data->localData[0]->integerVars[20]/* d[1].fifox DISCRETE */)  = ((modelica_integer) 0);
            }
          }
          else
          {
            (data->localData[0]->integerVars[18]/* d[1].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[18]/* d[1].comm_state DISCRETE */) ;
          }
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 113
type: SIMPLE_ASSIGN
cc_to_drone[1].readsignal = d[1].readsignal
*/
void System_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  (data->localData[0]->booleanVars[34]/* cc_to_drone[1].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[41]/* d[1].readsignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 114
type: SIMPLE_ASSIGN
cc_to_drone[1].readsigint = not pre(cc_to_drone[1].readsignal) == cc_to_drone[1].readsignal
*/
void System_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  (data->localData[0]->booleanVars[33]/* cc_to_drone[1].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[34]/* cc_to_drone[1].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[34]/* cc_to_drone[1].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[34]/* cc_to_drone[1].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[34]/* cc_to_drone[1].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 115
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[3] = d[1].msg_to_cc[3]
*/
void System_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  (data->localData[0]->realVars[38]/* drone_to_cc[1].inputdata[3] variable */)  = (data->localData[0]->realVars[138]/* d[1].msg_to_cc[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 116
type: SIMPLE_ASSIGN
d[1].ctrl.setz = d[1].setz
*/
void System_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  (data->localData[0]->realVars[33]/* d[1].ctrl.setz variable */)  = (data->localData[0]->realVars[143]/* d[1].setz DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 117
type: SIMPLE_ASSIGN
d[1].ctrl.sety = d[1].sety
*/
void System_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  (data->localData[0]->realVars[32]/* d[1].ctrl.sety variable */)  = (data->localData[0]->realVars[142]/* d[1].sety DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 118
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[2] = d[1].msg_to_cc[2]
*/
void System_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  (data->localData[0]->realVars[37]/* drone_to_cc[1].inputdata[2] variable */)  = (data->localData[0]->realVars[137]/* d[1].msg_to_cc[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 119
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[1] = d[1].msg_to_cc[1]
*/
void System_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  (data->localData[0]->realVars[36]/* drone_to_cc[1].inputdata[1] variable */)  = (data->localData[0]->realVars[136]/* d[1].msg_to_cc[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 120
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[5] = d[1].msg_to_cc[5]
*/
void System_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  (data->localData[0]->realVars[40]/* drone_to_cc[1].inputdata[5] variable */)  = (data->localData[0]->realVars[140]/* d[1].msg_to_cc[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 121
type: SIMPLE_ASSIGN
d[1].ctrl.setx = d[1].setx
*/
void System_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  (data->localData[0]->realVars[31]/* d[1].ctrl.setx variable */)  = (data->localData[0]->realVars[141]/* d[1].setx DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 122
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[4] = d[1].msg_to_cc[4]
*/
void System_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  (data->localData[0]->realVars[39]/* drone_to_cc[1].inputdata[4] variable */)  = (data->localData[0]->realVars[139]/* d[1].msg_to_cc[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 123
type: ALGORITHM

  drone_to_cc[1].newest := pre(drone_to_cc[1].newest);
  drone_to_cc[1].oldest := pre(drone_to_cc[1].oldest);
  drone_to_cc[1].fifosize := pre(drone_to_cc[1].fifosize);
  drone_to_cc[1].fifo[10,5] := pre(drone_to_cc[1].fifo[10,5]);
  drone_to_cc[1].fifo[10,4] := pre(drone_to_cc[1].fifo[10,4]);
  drone_to_cc[1].fifo[10,3] := pre(drone_to_cc[1].fifo[10,3]);
  drone_to_cc[1].fifo[10,2] := pre(drone_to_cc[1].fifo[10,2]);
  drone_to_cc[1].fifo[10,1] := pre(drone_to_cc[1].fifo[10,1]);
  drone_to_cc[1].fifo[9,5] := pre(drone_to_cc[1].fifo[9,5]);
  drone_to_cc[1].fifo[9,4] := pre(drone_to_cc[1].fifo[9,4]);
  drone_to_cc[1].fifo[9,3] := pre(drone_to_cc[1].fifo[9,3]);
  drone_to_cc[1].fifo[9,2] := pre(drone_to_cc[1].fifo[9,2]);
  drone_to_cc[1].fifo[9,1] := pre(drone_to_cc[1].fifo[9,1]);
  drone_to_cc[1].fifo[8,5] := pre(drone_to_cc[1].fifo[8,5]);
  drone_to_cc[1].fifo[8,4] := pre(drone_to_cc[1].fifo[8,4]);
  drone_to_cc[1].fifo[8,3] := pre(drone_to_cc[1].fifo[8,3]);
  drone_to_cc[1].fifo[8,2] := pre(drone_to_cc[1].fifo[8,2]);
  drone_to_cc[1].fifo[8,1] := pre(drone_to_cc[1].fifo[8,1]);
  drone_to_cc[1].fifo[7,5] := pre(drone_to_cc[1].fifo[7,5]);
  drone_to_cc[1].fifo[7,4] := pre(drone_to_cc[1].fifo[7,4]);
  drone_to_cc[1].fifo[7,3] := pre(drone_to_cc[1].fifo[7,3]);
  drone_to_cc[1].fifo[7,2] := pre(drone_to_cc[1].fifo[7,2]);
  drone_to_cc[1].fifo[7,1] := pre(drone_to_cc[1].fifo[7,1]);
  drone_to_cc[1].fifo[6,5] := pre(drone_to_cc[1].fifo[6,5]);
  drone_to_cc[1].fifo[6,4] := pre(drone_to_cc[1].fifo[6,4]);
  drone_to_cc[1].fifo[6,3] := pre(drone_to_cc[1].fifo[6,3]);
  drone_to_cc[1].fifo[6,2] := pre(drone_to_cc[1].fifo[6,2]);
  drone_to_cc[1].fifo[6,1] := pre(drone_to_cc[1].fifo[6,1]);
  drone_to_cc[1].fifo[5,5] := pre(drone_to_cc[1].fifo[5,5]);
  drone_to_cc[1].fifo[5,4] := pre(drone_to_cc[1].fifo[5,4]);
  drone_to_cc[1].fifo[5,3] := pre(drone_to_cc[1].fifo[5,3]);
  drone_to_cc[1].fifo[5,2] := pre(drone_to_cc[1].fifo[5,2]);
  drone_to_cc[1].fifo[5,1] := pre(drone_to_cc[1].fifo[5,1]);
  drone_to_cc[1].fifo[4,5] := pre(drone_to_cc[1].fifo[4,5]);
  drone_to_cc[1].fifo[4,4] := pre(drone_to_cc[1].fifo[4,4]);
  drone_to_cc[1].fifo[4,3] := pre(drone_to_cc[1].fifo[4,3]);
  drone_to_cc[1].fifo[4,2] := pre(drone_to_cc[1].fifo[4,2]);
  drone_to_cc[1].fifo[4,1] := pre(drone_to_cc[1].fifo[4,1]);
  drone_to_cc[1].fifo[3,5] := pre(drone_to_cc[1].fifo[3,5]);
  drone_to_cc[1].fifo[3,4] := pre(drone_to_cc[1].fifo[3,4]);
  drone_to_cc[1].fifo[3,3] := pre(drone_to_cc[1].fifo[3,3]);
  drone_to_cc[1].fifo[3,2] := pre(drone_to_cc[1].fifo[3,2]);
  drone_to_cc[1].fifo[3,1] := pre(drone_to_cc[1].fifo[3,1]);
  drone_to_cc[1].fifo[2,5] := pre(drone_to_cc[1].fifo[2,5]);
  drone_to_cc[1].fifo[2,4] := pre(drone_to_cc[1].fifo[2,4]);
  drone_to_cc[1].fifo[2,3] := pre(drone_to_cc[1].fifo[2,3]);
  drone_to_cc[1].fifo[2,2] := pre(drone_to_cc[1].fifo[2,2]);
  drone_to_cc[1].fifo[2,1] := pre(drone_to_cc[1].fifo[2,1]);
  drone_to_cc[1].fifo[1,5] := pre(drone_to_cc[1].fifo[1,5]);
  drone_to_cc[1].fifo[1,4] := pre(drone_to_cc[1].fifo[1,4]);
  drone_to_cc[1].fifo[1,3] := pre(drone_to_cc[1].fifo[1,3]);
  drone_to_cc[1].fifo[1,2] := pre(drone_to_cc[1].fifo[1,2]);
  drone_to_cc[1].fifo[1,1] := pre(drone_to_cc[1].fifo[1,1]);
  drone_to_cc[1].spaceavailable := pre(drone_to_cc[1].spaceavailable);
  drone_to_cc[1].outputdata[5] := pre(drone_to_cc[1].outputdata[5]);
  drone_to_cc[1].outputdata[4] := pre(drone_to_cc[1].outputdata[4]);
  drone_to_cc[1].outputdata[3] := pre(drone_to_cc[1].outputdata[3]);
  drone_to_cc[1].outputdata[2] := pre(drone_to_cc[1].outputdata[2]);
  drone_to_cc[1].outputdata[1] := pre(drone_to_cc[1].outputdata[1]);
  drone_to_cc[1].datavailable := pre(drone_to_cc[1].datavailable);
  $whenCondition3 := pre($whenCondition3);
  $whenCondition2 := pre($whenCondition2);
  $whenCondition1 := pre($whenCondition1);
  $whenCondition1 := pre(drone_to_cc[1].readsigint) and pre(drone_to_cc[1].writesigint);
  $whenCondition2 := pre(drone_to_cc[1].readsigint) and not pre(drone_to_cc[1].writesigint) and pre(drone_to_cc[1].fifosize) >= 1;
  $whenCondition3 := not pre(drone_to_cc[1].readsigint) and pre(drone_to_cc[1].writesigint) and pre(drone_to_cc[1].fifosize) < 10;
  when false then
    drone_to_cc[1].datavailable := false;
    for j in 1:5 loop
      drone_to_cc[1].outputdata[j] := 0.0;
    end for;
    drone_to_cc[1].spaceavailable := true;
    for i in 1:10 loop
      for j in 1:5 loop
        drone_to_cc[1].fifo[i,j] := 0.0;
      end for;
    end for;
    drone_to_cc[1].fifosize := 0;
    drone_to_cc[1].oldest := 1;
    drone_to_cc[1].newest := 1;
  elsewhen $whenCondition1 then
    if pre(drone_to_cc[1].fifosize) < 10 then
      for j in 1:5 loop
        drone_to_cc[1].fifo[pre(drone_to_cc[1].newest),j] := drone_to_cc[1].inputdata[j];
      end for;
      drone_to_cc[1].newest := mod(pre(drone_to_cc[1].newest), 10) + 1;
      for j in 1:5 loop
        drone_to_cc[1].outputdata[j] := drone_to_cc[1].fifo[pre(drone_to_cc[1].oldest),j];
      end for;
      drone_to_cc[1].oldest := mod(pre(drone_to_cc[1].oldest), 10) + 1;
    else
      for j in 1:5 loop
        drone_to_cc[1].outputdata[j] := drone_to_cc[1].fifo[pre(drone_to_cc[1].oldest),j];
      end for;
      drone_to_cc[1].oldest := mod(pre(drone_to_cc[1].oldest), 10) + 1;
      for j in 1:5 loop
        drone_to_cc[1].fifo[pre(drone_to_cc[1].newest),j] := drone_to_cc[1].inputdata[j];
      end for;
      drone_to_cc[1].newest := mod(pre(drone_to_cc[1].newest), 10) + 1;
    end if;
  elsewhen $whenCondition2 then
    for j in 1:5 loop
      drone_to_cc[1].outputdata[j] := drone_to_cc[1].fifo[pre(drone_to_cc[1].oldest),j];
    end for;
    drone_to_cc[1].oldest := mod(pre(drone_to_cc[1].oldest), 10) + 1;
    drone_to_cc[1].fifosize := pre(drone_to_cc[1].fifosize) - 1;
    drone_to_cc[1].datavailable := drone_to_cc[1].fifosize >= 1;
    drone_to_cc[1].spaceavailable := true;
  elsewhen $whenCondition3 then
    for j in 1:5 loop
      drone_to_cc[1].fifo[pre(drone_to_cc[1].newest),j] := drone_to_cc[1].inputdata[j];
    end for;
    drone_to_cc[1].newest := mod(pre(drone_to_cc[1].newest), 10) + 1;
    drone_to_cc[1].fifosize := pre(drone_to_cc[1].fifosize) + 1;
    drone_to_cc[1].datavailable := true;
    drone_to_cc[1].spaceavailable := pre(drone_to_cc[1].fifosize) < 10;
    for j in 1:5 loop
      drone_to_cc[1].outputdata[j] := drone_to_cc[1].fifo[pre(drone_to_cc[1].oldest),j];
    end for;
  end when;
*/
void System_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  modelica_boolean tmp302;
  modelica_boolean tmp303;
  modelica_integer tmp304;
  modelica_integer tmp305;
  modelica_integer tmp306;
  modelica_integer tmp307;
  modelica_integer tmp308;
  modelica_integer tmp309;
  modelica_integer tmp310;
  modelica_integer tmp311;
  modelica_integer tmp312;
  modelica_boolean tmp313;
  modelica_integer tmp314;
  modelica_integer tmp315;
  modelica_integer tmp316;
  modelica_integer tmp317;
  modelica_integer tmp318;
  modelica_integer tmp319;
  modelica_integer tmp320;
  modelica_integer tmp321;
  modelica_integer tmp322;
  modelica_integer tmp323;
  modelica_integer tmp324;
  modelica_integer tmp325;
  modelica_integer tmp326;
  modelica_integer tmp327;
  modelica_integer tmp328;
  modelica_integer tmp329;
  modelica_integer tmp330;
  modelica_integer tmp331;
  modelica_integer tmp332;
  modelica_integer tmp333;
  modelica_boolean tmp334;
  modelica_integer tmp335;
  modelica_integer tmp336;
  modelica_integer tmp337;
  modelica_integer tmp338;
  modelica_boolean tmp339;
  modelica_integer tmp340;
  modelica_integer tmp341;
  modelica_integer tmp342;
  (data->localData[0]->integerVars[23]/* drone_to_cc[1].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[23]/* drone_to_cc[1].newest DISCRETE */) ;

  (data->localData[0]->integerVars[24]/* drone_to_cc[1].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[24]/* drone_to_cc[1].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[22]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[22]/* drone_to_cc[1].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[193]/* drone_to_cc[1].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[193]/* drone_to_cc[1].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[192]/* drone_to_cc[1].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[192]/* drone_to_cc[1].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[191]/* drone_to_cc[1].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[191]/* drone_to_cc[1].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[190]/* drone_to_cc[1].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[190]/* drone_to_cc[1].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[189]/* drone_to_cc[1].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[189]/* drone_to_cc[1].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[188]/* drone_to_cc[1].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[188]/* drone_to_cc[1].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[187]/* drone_to_cc[1].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[187]/* drone_to_cc[1].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[186]/* drone_to_cc[1].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[186]/* drone_to_cc[1].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[185]/* drone_to_cc[1].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[185]/* drone_to_cc[1].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[184]/* drone_to_cc[1].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[184]/* drone_to_cc[1].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[183]/* drone_to_cc[1].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[183]/* drone_to_cc[1].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[182]/* drone_to_cc[1].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[182]/* drone_to_cc[1].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[181]/* drone_to_cc[1].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[181]/* drone_to_cc[1].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[180]/* drone_to_cc[1].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[180]/* drone_to_cc[1].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[179]/* drone_to_cc[1].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[179]/* drone_to_cc[1].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[178]/* drone_to_cc[1].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[178]/* drone_to_cc[1].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[177]/* drone_to_cc[1].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[177]/* drone_to_cc[1].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[176]/* drone_to_cc[1].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[176]/* drone_to_cc[1].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[175]/* drone_to_cc[1].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[175]/* drone_to_cc[1].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[174]/* drone_to_cc[1].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[174]/* drone_to_cc[1].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[173]/* drone_to_cc[1].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[173]/* drone_to_cc[1].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[172]/* drone_to_cc[1].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[172]/* drone_to_cc[1].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[171]/* drone_to_cc[1].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[171]/* drone_to_cc[1].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[170]/* drone_to_cc[1].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[170]/* drone_to_cc[1].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[169]/* drone_to_cc[1].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[169]/* drone_to_cc[1].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[168]/* drone_to_cc[1].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[168]/* drone_to_cc[1].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[167]/* drone_to_cc[1].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[167]/* drone_to_cc[1].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[166]/* drone_to_cc[1].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[166]/* drone_to_cc[1].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[165]/* drone_to_cc[1].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[165]/* drone_to_cc[1].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[164]/* drone_to_cc[1].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[164]/* drone_to_cc[1].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[163]/* drone_to_cc[1].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[163]/* drone_to_cc[1].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[162]/* drone_to_cc[1].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[162]/* drone_to_cc[1].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[161]/* drone_to_cc[1].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[161]/* drone_to_cc[1].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[160]/* drone_to_cc[1].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[160]/* drone_to_cc[1].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[159]/* drone_to_cc[1].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[159]/* drone_to_cc[1].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[158]/* drone_to_cc[1].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[158]/* drone_to_cc[1].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[157]/* drone_to_cc[1].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[157]/* drone_to_cc[1].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[156]/* drone_to_cc[1].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[156]/* drone_to_cc[1].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[155]/* drone_to_cc[1].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[155]/* drone_to_cc[1].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[154]/* drone_to_cc[1].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[154]/* drone_to_cc[1].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[153]/* drone_to_cc[1].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[153]/* drone_to_cc[1].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[152]/* drone_to_cc[1].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[152]/* drone_to_cc[1].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[151]/* drone_to_cc[1].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[151]/* drone_to_cc[1].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[150]/* drone_to_cc[1].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[150]/* drone_to_cc[1].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[149]/* drone_to_cc[1].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[149]/* drone_to_cc[1].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[148]/* drone_to_cc[1].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[148]/* drone_to_cc[1].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[147]/* drone_to_cc[1].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[147]/* drone_to_cc[1].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[146]/* drone_to_cc[1].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[146]/* drone_to_cc[1].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[145]/* drone_to_cc[1].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[145]/* drone_to_cc[1].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[144]/* drone_to_cc[1].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[144]/* drone_to_cc[1].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[47]/* drone_to_cc[1].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[47]/* drone_to_cc[1].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[198]/* drone_to_cc[1].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[198]/* drone_to_cc[1].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[197]/* drone_to_cc[1].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[197]/* drone_to_cc[1].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[196]/* drone_to_cc[1].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[196]/* drone_to_cc[1].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[195]/* drone_to_cc[1].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[195]/* drone_to_cc[1].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[194]/* drone_to_cc[1].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[194]/* drone_to_cc[1].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[44]/* drone_to_cc[1].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[44]/* drone_to_cc[1].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[7]/* $whenCondition3 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[7]/* $whenCondition3 DISCRETE */) ;

  (data->localData[0]->booleanVars[6]/* $whenCondition2 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[6]/* $whenCondition2 DISCRETE */) ;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[0]/* $whenCondition1 DISCRETE */) ;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[45]/* drone_to_cc[1].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[48]/* drone_to_cc[1].writesigint DISCRETE */) );

  tmp302 = GreaterEq((data->simulationInfo->integerVarsPre[22]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[6]/* $whenCondition2 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[45]/* drone_to_cc[1].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[48]/* drone_to_cc[1].writesigint DISCRETE */) )) && tmp302);

  tmp303 = Less((data->simulationInfo->integerVarsPre[22]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[7]/* $whenCondition3 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[45]/* drone_to_cc[1].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[48]/* drone_to_cc[1].writesigint DISCRETE */) ) && tmp303);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[44]/* drone_to_cc[1].datavailable DISCRETE */)  = 0;

      tmp304 = ((modelica_integer) 1); tmp305 = 1; tmp306 = ((modelica_integer) 5);
      if(!(((tmp305 > 0) && (tmp304 > tmp306)) || ((tmp305 < 0) && (tmp304 < tmp306))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp304, tmp306); j += tmp305)
        {
          (&(data->localData[0]->realVars[194]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[47]/* drone_to_cc[1].spaceavailable DISCRETE */)  = 1;

      tmp310 = ((modelica_integer) 1); tmp311 = 1; tmp312 = ((modelica_integer) 10);
      if(!(((tmp311 > 0) && (tmp310 > tmp312)) || ((tmp311 < 0) && (tmp310 < tmp312))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp310, tmp312); i += tmp311)
        {
          tmp307 = ((modelica_integer) 1); tmp308 = 1; tmp309 = ((modelica_integer) 5);
          if(!(((tmp308 > 0) && (tmp307 > tmp309)) || ((tmp308 < 0) && (tmp307 < tmp309))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp307, tmp309); j += tmp308)
            {
              (&(data->localData[0]->realVars[144]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[22]/* drone_to_cc[1].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[24]/* drone_to_cc[1].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[23]/* drone_to_cc[1].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[0]/* $whenCondition1 DISCRETE */)  /* edge */))
    {
      tmp313 = Less((data->simulationInfo->integerVarsPre[22]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp313)
      {
        tmp314 = ((modelica_integer) 1); tmp315 = 1; tmp316 = ((modelica_integer) 5);
        if(!(((tmp315 > 0) && (tmp314 > tmp316)) || ((tmp315 < 0) && (tmp314 < tmp316))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp314, tmp316); j += tmp315)
          {
            (&(data->localData[0]->realVars[144]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[23]/* drone_to_cc[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[36]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
          }
        }

        tmp317 = ((modelica_integer) 10);
        if (tmp317 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].newest), 10)");}
        (data->localData[0]->integerVars[23]/* drone_to_cc[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[23]/* drone_to_cc[1].newest DISCRETE */) , tmp317) + ((modelica_integer) 1);

        tmp318 = ((modelica_integer) 1); tmp319 = 1; tmp320 = ((modelica_integer) 5);
        if(!(((tmp319 > 0) && (tmp318 > tmp320)) || ((tmp319 < 0) && (tmp318 < tmp320))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp318, tmp320); j += tmp319)
          {
            (&(data->localData[0]->realVars[194]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[144]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[24]/* drone_to_cc[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp321 = ((modelica_integer) 10);
        if (tmp321 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].oldest), 10)");}
        (data->localData[0]->integerVars[24]/* drone_to_cc[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[24]/* drone_to_cc[1].oldest DISCRETE */) , tmp321) + ((modelica_integer) 1);
      }
      else
      {
        tmp322 = ((modelica_integer) 1); tmp323 = 1; tmp324 = ((modelica_integer) 5);
        if(!(((tmp323 > 0) && (tmp322 > tmp324)) || ((tmp323 < 0) && (tmp322 < tmp324))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp322, tmp324); j += tmp323)
          {
            (&(data->localData[0]->realVars[194]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[144]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[24]/* drone_to_cc[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp325 = ((modelica_integer) 10);
        if (tmp325 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].oldest), 10)");}
        (data->localData[0]->integerVars[24]/* drone_to_cc[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[24]/* drone_to_cc[1].oldest DISCRETE */) , tmp325) + ((modelica_integer) 1);

        tmp326 = ((modelica_integer) 1); tmp327 = 1; tmp328 = ((modelica_integer) 5);
        if(!(((tmp327 > 0) && (tmp326 > tmp328)) || ((tmp327 < 0) && (tmp326 < tmp328))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp326, tmp328); j += tmp327)
          {
            (&(data->localData[0]->realVars[144]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[23]/* drone_to_cc[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[36]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
          }
        }

        tmp329 = ((modelica_integer) 10);
        if (tmp329 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].newest), 10)");}
        (data->localData[0]->integerVars[23]/* drone_to_cc[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[23]/* drone_to_cc[1].newest DISCRETE */) , tmp329) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[6]/* $whenCondition2 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[6]/* $whenCondition2 DISCRETE */)  /* edge */))
    {
      tmp330 = ((modelica_integer) 1); tmp331 = 1; tmp332 = ((modelica_integer) 5);
      if(!(((tmp331 > 0) && (tmp330 > tmp332)) || ((tmp331 < 0) && (tmp330 < tmp332))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp330, tmp332); j += tmp331)
        {
          (&(data->localData[0]->realVars[194]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[144]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[24]/* drone_to_cc[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp333 = ((modelica_integer) 10);
      if (tmp333 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].oldest), 10)");}
      (data->localData[0]->integerVars[24]/* drone_to_cc[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[24]/* drone_to_cc[1].oldest DISCRETE */) , tmp333) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[22]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[22]/* drone_to_cc[1].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp334 = GreaterEq((data->localData[0]->integerVars[22]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[44]/* drone_to_cc[1].datavailable DISCRETE */)  = tmp334;

      (data->localData[0]->booleanVars[47]/* drone_to_cc[1].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[7]/* $whenCondition3 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[7]/* $whenCondition3 DISCRETE */)  /* edge */))
    {
      tmp335 = ((modelica_integer) 1); tmp336 = 1; tmp337 = ((modelica_integer) 5);
      if(!(((tmp336 > 0) && (tmp335 > tmp337)) || ((tmp336 < 0) && (tmp335 < tmp337))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp335, tmp337); j += tmp336)
        {
          (&(data->localData[0]->realVars[144]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[23]/* drone_to_cc[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[36]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
        }
      }

      tmp338 = ((modelica_integer) 10);
      if (tmp338 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].newest), 10)");}
      (data->localData[0]->integerVars[23]/* drone_to_cc[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[23]/* drone_to_cc[1].newest DISCRETE */) , tmp338) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[22]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[22]/* drone_to_cc[1].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[44]/* drone_to_cc[1].datavailable DISCRETE */)  = 1;

      tmp339 = Less((data->simulationInfo->integerVarsPre[22]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[47]/* drone_to_cc[1].spaceavailable DISCRETE */)  = tmp339;

      tmp340 = ((modelica_integer) 1); tmp341 = 1; tmp342 = ((modelica_integer) 5);
      if(!(((tmp341 > 0) && (tmp340 > tmp342)) || ((tmp341 < 0) && (tmp340 < tmp342))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp340, tmp342); j += tmp341)
        {
          (&(data->localData[0]->realVars[194]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[144]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[24]/* drone_to_cc[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 124
type: SIMPLE_ASSIGN
cc.datavailable[1] = drone_to_cc[1].datavailable
*/
void System_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  (data->localData[0]->booleanVars[15]/* cc.datavailable[1] DISCRETE */)  = (data->localData[0]->booleanVars[44]/* drone_to_cc[1].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 125
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,1] = drone_to_cc[1].outputdata[1]
*/
void System_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  (data->localData[0]->realVars[15]/* cc.msg_from_drone[1,1] variable */)  = (data->localData[0]->realVars[194]/* drone_to_cc[1].outputdata[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 126
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,3] = drone_to_cc[1].outputdata[3]
*/
void System_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  (data->localData[0]->realVars[17]/* cc.msg_from_drone[1,3] variable */)  = (data->localData[0]->realVars[196]/* drone_to_cc[1].outputdata[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 127
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,5] = drone_to_cc[1].outputdata[5]
*/
void System_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  (data->localData[0]->realVars[19]/* cc.msg_from_drone[1,5] variable */)  = (data->localData[0]->realVars[198]/* drone_to_cc[1].outputdata[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 128
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,2] = drone_to_cc[1].outputdata[2]
*/
void System_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  (data->localData[0]->realVars[16]/* cc.msg_from_drone[1,2] variable */)  = (data->localData[0]->realVars[195]/* drone_to_cc[1].outputdata[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 129
type: SIMPLE_ASSIGN
d[1].spaceavailable = drone_to_cc[1].spaceavailable
*/
void System_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  (data->localData[0]->booleanVars[42]/* d[1].spaceavailable DISCRETE */)  = (data->localData[0]->booleanVars[47]/* drone_to_cc[1].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 130
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,4] = drone_to_cc[1].outputdata[4]
*/
void System_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  (data->localData[0]->realVars[18]/* cc.msg_from_drone[1,4] variable */)  = (data->localData[0]->realVars[197]/* drone_to_cc[1].outputdata[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 131
type: SIMPLE_ASSIGN
drone_to_cc[1].writesignal = d[1].writesignal
*/
void System_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  (data->localData[0]->booleanVars[49]/* drone_to_cc[1].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[43]/* d[1].writesignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 132
type: SIMPLE_ASSIGN
drone_to_cc[1].writesigint = not pre(drone_to_cc[1].writesignal) == drone_to_cc[1].writesignal
*/
void System_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  (data->localData[0]->booleanVars[48]/* drone_to_cc[1].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[49]/* drone_to_cc[1].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[49]/* drone_to_cc[1].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[49]/* drone_to_cc[1].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[49]/* drone_to_cc[1].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 133
type: SIMPLE_ASSIGN
d[1].batteryPercentage = 100.0 * d[1].d.battery / d[1].p.capacity
*/
void System_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  (data->localData[0]->realVars[27]/* d[1].batteryPercentage variable */)  = (100.0) * (DIVISION_SIM((data->localData[0]->realVars[135]/* d[1].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[400]/* d[1].p.capacity PARAM */) ,"d[1].p.capacity",equationIndexes));
  TRACE_POP
}
/*
equation index: 134
type: SIMPLE_ASSIGN
d[1].ctrl.y = d[1].d.y
*/
void System_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  (data->localData[0]->realVars[35]/* d[1].ctrl.y variable */)  = (data->localData[0]->realVars[4]/* d[1].d.y STATE(1,d[1].d.Vy) */) ;
  TRACE_POP
}
/*
equation index: 135
type: SIMPLE_ASSIGN
d[1].ctrl.Trusty = d[1].ctrl.prm.m * (d[1].ctrl.ky1 * (d[1].ctrl.y - pre(d[1].ctrl.destY)) + d[1].ctrl.ky2 * d[1].d.Vy)
*/
void System_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  (data->localData[0]->realVars[29]/* d[1].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[249]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[175]/* d[1].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[35]/* d[1].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[133]/* d[1].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[176]/* d[1].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[1]/* d[1].d.Vy STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 136
type: SIMPLE_ASSIGN
$DER.d[1].d.Vy = d[1].ctrl.Trusty / d[1].d.p.m
*/
void System_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  (data->localData[0]->realVars[7]/* der(d[1].d.Vy) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[29]/* d[1].ctrl.Trusty variable */) ,(data->simulationInfo->realParameter[332]/* d[1].d.p.m PARAM */) ,"d[1].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 137
type: SIMPLE_ASSIGN
d[1].ctrl.x = d[1].d.x
*/
void System_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  (data->localData[0]->realVars[34]/* d[1].ctrl.x variable */)  = (data->localData[0]->realVars[3]/* d[1].d.x STATE(1,d[1].d.Vx) */) ;
  TRACE_POP
}
/*
equation index: 138
type: SIMPLE_ASSIGN
d[1].ctrl.Trustx = d[1].ctrl.prm.m * (d[1].ctrl.kx1 * (d[1].ctrl.x - pre(d[1].ctrl.destX)) + d[1].ctrl.kx2 * d[1].d.Vx)
*/
void System_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  (data->localData[0]->realVars[28]/* d[1].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[249]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[173]/* d[1].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[34]/* d[1].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[132]/* d[1].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[174]/* d[1].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 139
type: SIMPLE_ASSIGN
$DER.d[1].d.Vx = d[1].ctrl.Trustx / d[1].d.p.m
*/
void System_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  (data->localData[0]->realVars[6]/* der(d[1].d.Vx) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[28]/* d[1].ctrl.Trustx variable */) ,(data->simulationInfo->realParameter[332]/* d[1].d.p.m PARAM */) ,"d[1].d.p.m",equationIndexes);
  TRACE_POP
}

OMC_DISABLE_OPT
int System_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  System_functionLocalKnownVars(data, threadData);
  System_eqFunction_83(data, threadData);

  System_eqFunction_84(data, threadData);

  System_eqFunction_85(data, threadData);

  System_eqFunction_86(data, threadData);

  System_eqFunction_87(data, threadData);

  System_eqFunction_88(data, threadData);

  System_eqFunction_89(data, threadData);

  System_eqFunction_90(data, threadData);

  System_eqFunction_91(data, threadData);

  System_eqFunction_92(data, threadData);

  System_eqFunction_93(data, threadData);

  System_eqFunction_94(data, threadData);

  System_eqFunction_95(data, threadData);

  System_eqFunction_96(data, threadData);

  System_eqFunction_97(data, threadData);

  System_eqFunction_98(data, threadData);

  System_eqFunction_99(data, threadData);

  System_eqFunction_100(data, threadData);

  System_eqFunction_101(data, threadData);

  System_eqFunction_102(data, threadData);

  System_eqFunction_103(data, threadData);

  System_eqFunction_104(data, threadData);

  System_eqFunction_105(data, threadData);

  System_eqFunction_106(data, threadData);

  System_eqFunction_107(data, threadData);

  System_eqFunction_108(data, threadData);

  System_eqFunction_109(data, threadData);

  System_eqFunction_110(data, threadData);

  System_eqFunction_111(data, threadData);

  System_eqFunction_112(data, threadData);

  System_eqFunction_113(data, threadData);

  System_eqFunction_114(data, threadData);

  System_eqFunction_115(data, threadData);

  System_eqFunction_116(data, threadData);

  System_eqFunction_117(data, threadData);

  System_eqFunction_118(data, threadData);

  System_eqFunction_119(data, threadData);

  System_eqFunction_120(data, threadData);

  System_eqFunction_121(data, threadData);

  System_eqFunction_122(data, threadData);

  System_eqFunction_123(data, threadData);

  System_eqFunction_124(data, threadData);

  System_eqFunction_125(data, threadData);

  System_eqFunction_126(data, threadData);

  System_eqFunction_127(data, threadData);

  System_eqFunction_128(data, threadData);

  System_eqFunction_129(data, threadData);

  System_eqFunction_130(data, threadData);

  System_eqFunction_131(data, threadData);

  System_eqFunction_132(data, threadData);

  System_eqFunction_133(data, threadData);

  System_eqFunction_134(data, threadData);

  System_eqFunction_135(data, threadData);

  System_eqFunction_136(data, threadData);

  System_eqFunction_137(data, threadData);

  System_eqFunction_138(data, threadData);

  System_eqFunction_139(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int System_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void System_eqFunction_90(DATA* data, threadData_t *threadData);
extern void System_eqFunction_91(DATA* data, threadData_t *threadData);
extern void System_eqFunction_92(DATA* data, threadData_t *threadData);
extern void System_eqFunction_93(DATA* data, threadData_t *threadData);
extern void System_eqFunction_94(DATA* data, threadData_t *threadData);
extern void System_eqFunction_134(DATA* data, threadData_t *threadData);
extern void System_eqFunction_135(DATA* data, threadData_t *threadData);
extern void System_eqFunction_136(DATA* data, threadData_t *threadData);
extern void System_eqFunction_137(DATA* data, threadData_t *threadData);
extern void System_eqFunction_138(DATA* data, threadData_t *threadData);
extern void System_eqFunction_139(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  {
    System_eqFunction_90(data, threadData);
    threadData->lastEquationSolved = 90;
  }
  {
    System_eqFunction_91(data, threadData);
    threadData->lastEquationSolved = 91;
  }
  {
    System_eqFunction_92(data, threadData);
    threadData->lastEquationSolved = 92;
  }
  {
    System_eqFunction_93(data, threadData);
    threadData->lastEquationSolved = 93;
  }
  {
    System_eqFunction_94(data, threadData);
    threadData->lastEquationSolved = 94;
  }
  {
    System_eqFunction_134(data, threadData);
    threadData->lastEquationSolved = 134;
  }
  {
    System_eqFunction_135(data, threadData);
    threadData->lastEquationSolved = 135;
  }
  {
    System_eqFunction_136(data, threadData);
    threadData->lastEquationSolved = 136;
  }
  {
    System_eqFunction_137(data, threadData);
    threadData->lastEquationSolved = 137;
  }
  {
    System_eqFunction_138(data, threadData);
    threadData->lastEquationSolved = 138;
  }
  {
    System_eqFunction_139(data, threadData);
    threadData->lastEquationSolved = 139;
  }
}

int System_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  System_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "System_12jac.h"
#include "System_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks System_callback = {
   (int (*)(DATA *, threadData_t *, void *)) System_performSimulation,    /* performSimulation */
   (int (*)(DATA *, threadData_t *, void *)) System_performQSSSimulation,    /* performQSSSimulation */
   System_updateContinuousSystem,    /* updateContinuousSystem */
   System_callExternalObjectDestructors,    /* callExternalObjectDestructors */
   NULL,    /* initialNonLinearSystem */
   NULL,    /* initialLinearSystem */
   NULL,    /* initialMixedSystem */
   #if !defined(OMC_NO_STATESELECTION)
   System_initializeStateSets,
   #else
   NULL,
   #endif    /* initializeStateSets */
   System_initializeDAEmodeData,
   System_functionODE,
   System_functionAlgebraics,
   System_functionDAE,
   System_functionLocalKnownVars,
   System_input_function,
   System_input_function_init,
   System_input_function_updateStartValues,
   System_data_function,
   System_output_function,
   System_setc_function,
   System_function_storeDelayed,
   System_function_storeSpatialDistribution,
   System_function_initSpatialDistribution,
   System_updateBoundVariableAttributes,
   System_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   NULL,
   System_functionRemovedInitialEquations,
   System_updateBoundParameters,
   System_checkForAsserts,
   System_function_ZeroCrossingsEquations,
   System_function_ZeroCrossings,
   System_function_updateRelations,
   System_zeroCrossingDescription,
   System_relationDescription,
   System_function_initSample,
   System_INDEX_JAC_A,
   System_INDEX_JAC_B,
   System_INDEX_JAC_C,
   System_INDEX_JAC_D,
   System_INDEX_JAC_F,
   System_initialAnalyticJacobianA,
   System_initialAnalyticJacobianB,
   System_initialAnalyticJacobianC,
   System_initialAnalyticJacobianD,
   System_initialAnalyticJacobianF,
   System_functionJacA_column,
   System_functionJacB_column,
   System_functionJacC_column,
   System_functionJacD_column,
   System_functionJacF_column,
   System_linear_model_frame,
   System_linear_model_datarecovery_frame,
   System_mayer,
   System_lagrange,
   System_pickUpBoundsForInputsInOptimization,
   System_setInputData,
   System_getTimeGrid,
   System_symbolicInlineSystem,
   System_function_initSynchronous,
   System_function_updateSynchronous,
   System_function_equationsSynchronous,
   System_inputNames,
   System_dataReconciliationInputNames,
   NULL,
   NULL,
   NULL,
   -1,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "/usr/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,18,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "ControlCenter"
#define _OMC_LIT_RESOURCE_1_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,13,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,65,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Controller"
#define _OMC_LIT_RESOURCE_2_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,10,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,65,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "Drone"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,5,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,65,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "DroneFS"
#define _OMC_LIT_RESOURCE_4_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,7,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,65,_OMC_LIT_RESOURCE_4_dir_data);

#define _OMC_LIT_RESOURCE_5_name_data "FIFO"
#define _OMC_LIT_RESOURCE_5_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_name,4,_OMC_LIT_RESOURCE_5_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir,65,_OMC_LIT_RESOURCE_5_dir_data);

#define _OMC_LIT_RESOURCE_6_name_data "FifoIODone"
#define _OMC_LIT_RESOURCE_6_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_name,10,_OMC_LIT_RESOURCE_6_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir,65,_OMC_LIT_RESOURCE_6_dir_data);

#define _OMC_LIT_RESOURCE_7_name_data "InitFifoIOState"
#define _OMC_LIT_RESOURCE_7_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_name,15,_OMC_LIT_RESOURCE_7_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_dir,65,_OMC_LIT_RESOURCE_7_dir_data);

#define _OMC_LIT_RESOURCE_8_name_data "InputBoolean"
#define _OMC_LIT_RESOURCE_8_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_8_name,12,_OMC_LIT_RESOURCE_8_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_8_dir,65,_OMC_LIT_RESOURCE_8_dir_data);

#define _OMC_LIT_RESOURCE_9_name_data "InputInteger"
#define _OMC_LIT_RESOURCE_9_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_9_name,12,_OMC_LIT_RESOURCE_9_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_9_dir,65,_OMC_LIT_RESOURCE_9_dir_data);

#define _OMC_LIT_RESOURCE_10_name_data "InputReal"
#define _OMC_LIT_RESOURCE_10_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_10_name,9,_OMC_LIT_RESOURCE_10_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_10_dir,65,_OMC_LIT_RESOURCE_10_dir_data);

#define _OMC_LIT_RESOURCE_11_name_data "K"
#define _OMC_LIT_RESOURCE_11_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_11_name,1,_OMC_LIT_RESOURCE_11_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_11_dir,65,_OMC_LIT_RESOURCE_11_dir_data);

#define _OMC_LIT_RESOURCE_12_name_data "Modelica"
#define _OMC_LIT_RESOURCE_12_dir_data "/usr/lib/omlibrary/Modelica 4.0.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_12_name,8,_OMC_LIT_RESOURCE_12_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_12_dir,33,_OMC_LIT_RESOURCE_12_dir_data);

#define _OMC_LIT_RESOURCE_13_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_13_dir_data "/usr/lib/omlibrary/ModelicaServices 4.0.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_13_name,16,_OMC_LIT_RESOURCE_13_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_13_dir,41,_OMC_LIT_RESOURCE_13_dir_data);

#define _OMC_LIT_RESOURCE_14_name_data "Monitor"
#define _OMC_LIT_RESOURCE_14_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_14_name,7,_OMC_LIT_RESOURCE_14_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_14_dir,65,_OMC_LIT_RESOURCE_14_dir_data);

#define _OMC_LIT_RESOURCE_15_name_data "OutputBoolean"
#define _OMC_LIT_RESOURCE_15_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_15_name,13,_OMC_LIT_RESOURCE_15_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_15_dir,65,_OMC_LIT_RESOURCE_15_dir_data);

#define _OMC_LIT_RESOURCE_16_name_data "OutputInteger"
#define _OMC_LIT_RESOURCE_16_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_16_name,13,_OMC_LIT_RESOURCE_16_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_16_dir,65,_OMC_LIT_RESOURCE_16_dir_data);

#define _OMC_LIT_RESOURCE_17_name_data "OutputReal"
#define _OMC_LIT_RESOURCE_17_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_17_name,10,_OMC_LIT_RESOURCE_17_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_17_dir,65,_OMC_LIT_RESOURCE_17_dir_data);

#define _OMC_LIT_RESOURCE_18_name_data "Prm"
#define _OMC_LIT_RESOURCE_18_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_18_name,3,_OMC_LIT_RESOURCE_18_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_18_dir,65,_OMC_LIT_RESOURCE_18_dir_data);

#define _OMC_LIT_RESOURCE_19_name_data "ReadFromFIFO"
#define _OMC_LIT_RESOURCE_19_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_19_name,12,_OMC_LIT_RESOURCE_19_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_19_dir,65,_OMC_LIT_RESOURCE_19_dir_data);

#define _OMC_LIT_RESOURCE_20_name_data "System"
#define _OMC_LIT_RESOURCE_20_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_20_name,6,_OMC_LIT_RESOURCE_20_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_20_dir,65,_OMC_LIT_RESOURCE_20_dir_data);

#define _OMC_LIT_RESOURCE_21_name_data "WriteToFIFO"
#define _OMC_LIT_RESOURCE_21_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_21_name,11,_OMC_LIT_RESOURCE_21_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_21_dir,65,_OMC_LIT_RESOURCE_21_dir_data);

#define _OMC_LIT_RESOURCE_22_name_data "areaCenter"
#define _OMC_LIT_RESOURCE_22_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_22_name,10,_OMC_LIT_RESOURCE_22_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_22_dir,65,_OMC_LIT_RESOURCE_22_dir_data);

#define _OMC_LIT_RESOURCE_23_name_data "batteryMonitor"
#define _OMC_LIT_RESOURCE_23_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_23_name,14,_OMC_LIT_RESOURCE_23_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_23_dir,65,_OMC_LIT_RESOURCE_23_dir_data);

#define _OMC_LIT_RESOURCE_24_name_data "charging"
#define _OMC_LIT_RESOURCE_24_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_24_name,8,_OMC_LIT_RESOURCE_24_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_24_dir,65,_OMC_LIT_RESOURCE_24_dir_data);

#define _OMC_LIT_RESOURCE_25_name_data "check_pos"
#define _OMC_LIT_RESOURCE_25_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_25_name,9,_OMC_LIT_RESOURCE_25_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_25_dir,65,_OMC_LIT_RESOURCE_25_dir_data);

#define _OMC_LIT_RESOURCE_26_name_data "check_pos_x"
#define _OMC_LIT_RESOURCE_26_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_26_name,11,_OMC_LIT_RESOURCE_26_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_26_dir,65,_OMC_LIT_RESOURCE_26_dir_data);

#define _OMC_LIT_RESOURCE_27_name_data "check_pos_y"
#define _OMC_LIT_RESOURCE_27_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_27_name,11,_OMC_LIT_RESOURCE_27_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_27_dir,65,_OMC_LIT_RESOURCE_27_dir_data);

#define _OMC_LIT_RESOURCE_28_name_data "check_pos_z"
#define _OMC_LIT_RESOURCE_28_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_28_name,11,_OMC_LIT_RESOURCE_28_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_28_dir,65,_OMC_LIT_RESOURCE_28_dir_data);

#define _OMC_LIT_RESOURCE_29_name_data "create_area"
#define _OMC_LIT_RESOURCE_29_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_29_name,11,_OMC_LIT_RESOURCE_29_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_29_dir,65,_OMC_LIT_RESOURCE_29_dir_data);

#define _OMC_LIT_RESOURCE_30_name_data "create_drone"
#define _OMC_LIT_RESOURCE_30_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_30_name,12,_OMC_LIT_RESOURCE_30_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_30_dir,65,_OMC_LIT_RESOURCE_30_dir_data);

#define _OMC_LIT_RESOURCE_31_name_data "disconnect_from_db"
#define _OMC_LIT_RESOURCE_31_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_31_name,18,_OMC_LIT_RESOURCE_31_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_31_dir,65,_OMC_LIT_RESOURCE_31_dir_data);

#define _OMC_LIT_RESOURCE_32_name_data "flush_history"
#define _OMC_LIT_RESOURCE_32_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_32_name,13,_OMC_LIT_RESOURCE_32_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_32_dir,65,_OMC_LIT_RESOURCE_32_dir_data);

#define _OMC_LIT_RESOURCE_33_name_data "generate_areas"
#define _OMC_LIT_RESOURCE_33_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_33_name,14,_OMC_LIT_RESOURCE_33_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_33_dir,65,_OMC_LIT_RESOURCE_33_dir_data);

#define _OMC_LIT_RESOURCE_34_name_data "get_drone_pos"
#define _OMC_LIT_RESOURCE_34_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_34_name,13,_OMC_LIT_RESOURCE_34_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_34_dir,65,_OMC_LIT_RESOURCE_34_dir_data);

#define _OMC_LIT_RESOURCE_35_name_data "get_drone_pos_1"
#define _OMC_LIT_RESOURCE_35_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_35_name,15,_OMC_LIT_RESOURCE_35_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_35_dir,65,_OMC_LIT_RESOURCE_35_dir_data);

#define _OMC_LIT_RESOURCE_36_name_data "get_drone_pos_2"
#define _OMC_LIT_RESOURCE_36_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_36_name,15,_OMC_LIT_RESOURCE_36_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_36_dir,65,_OMC_LIT_RESOURCE_36_dir_data);

#define _OMC_LIT_RESOURCE_37_name_data "get_drone_pos_3"
#define _OMC_LIT_RESOURCE_37_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_37_name,15,_OMC_LIT_RESOURCE_37_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_37_dir,65,_OMC_LIT_RESOURCE_37_dir_data);

#define _OMC_LIT_RESOURCE_38_name_data "has_area_been_visited"
#define _OMC_LIT_RESOURCE_38_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_38_name,21,_OMC_LIT_RESOURCE_38_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_38_dir,65,_OMC_LIT_RESOURCE_38_dir_data);

#define _OMC_LIT_RESOURCE_39_name_data "has_drone_been_in_area"
#define _OMC_LIT_RESOURCE_39_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_39_name,22,_OMC_LIT_RESOURCE_39_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_39_dir,65,_OMC_LIT_RESOURCE_39_dir_data);

#define _OMC_LIT_RESOURCE_40_name_data "how_many_drones_in_area"
#define _OMC_LIT_RESOURCE_40_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_40_name,23,_OMC_LIT_RESOURCE_40_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_40_dir,65,_OMC_LIT_RESOURCE_40_dir_data);

#define _OMC_LIT_RESOURCE_41_name_data "myrandom"
#define _OMC_LIT_RESOURCE_41_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_41_name,8,_OMC_LIT_RESOURCE_41_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_41_dir,65,_OMC_LIT_RESOURCE_41_dir_data);

#define _OMC_LIT_RESOURCE_42_name_data "returnedHome"
#define _OMC_LIT_RESOURCE_42_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_42_name,12,_OMC_LIT_RESOURCE_42_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_42_dir,65,_OMC_LIT_RESOURCE_42_dir_data);

#define _OMC_LIT_RESOURCE_43_name_data "setup_areas"
#define _OMC_LIT_RESOURCE_43_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_43_name,11,_OMC_LIT_RESOURCE_43_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_43_dir,65,_OMC_LIT_RESOURCE_43_dir_data);

#define _OMC_LIT_RESOURCE_44_name_data "setup_db"
#define _OMC_LIT_RESOURCE_44_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_44_name,8,_OMC_LIT_RESOURCE_44_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_44_dir,65,_OMC_LIT_RESOURCE_44_dir_data);

#define _OMC_LIT_RESOURCE_45_name_data "setup_drones"
#define _OMC_LIT_RESOURCE_45_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_45_name,12,_OMC_LIT_RESOURCE_45_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_45_dir,65,_OMC_LIT_RESOURCE_45_dir_data);

#define _OMC_LIT_RESOURCE_46_name_data "turn_off"
#define _OMC_LIT_RESOURCE_46_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_46_name,8,_OMC_LIT_RESOURCE_46_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_46_dir,65,_OMC_LIT_RESOURCE_46_dir_data);

#define _OMC_LIT_RESOURCE_47_name_data "update_drone_pos"
#define _OMC_LIT_RESOURCE_47_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_47_name,16,_OMC_LIT_RESOURCE_47_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_47_dir,65,_OMC_LIT_RESOURCE_47_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,96,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_7_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_7_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_8_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_8_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_9_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_9_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_10_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_10_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_11_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_11_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_12_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_12_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_13_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_13_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_14_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_14_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_15_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_15_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_16_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_16_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_17_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_17_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_18_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_18_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_19_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_19_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_20_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_20_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_21_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_21_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_22_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_22_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_23_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_23_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_24_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_24_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_25_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_25_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_26_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_26_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_27_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_27_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_28_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_28_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_29_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_29_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_30_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_30_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_31_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_31_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_32_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_32_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_33_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_33_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_34_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_34_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_35_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_35_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_36_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_36_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_37_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_37_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_38_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_38_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_39_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_39_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_40_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_40_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_41_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_41_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_42_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_42_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_43_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_43_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_44_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_44_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_45_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_45_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_46_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_46_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_47_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_47_dir)}};
void System_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &System_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "System";
  data->modelData->modelFilePrefix = "System";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code";
  data->modelData->modelGUID = "{d5212c0c-c514-4b55-8bd8-50ba88db6dff}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "System_init.c"
    ;
  static const char contents_info[] =
    #include "System_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "System_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "System_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 6;
  data->modelData->nVariablesReal = 245;
  data->modelData->nDiscreteReal = 202;
  data->modelData->nVariablesInteger = 43;
  data->modelData->nVariablesBoolean = 50;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 678;
  data->modelData->nParametersInteger = 33;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 7;
  
  data->modelData->nAliasReal = 17;
  data->modelData->nAliasInteger = 1;
  data->modelData->nAliasBoolean = 1;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 1;
  data->modelData->nSamples = 5;
  data->modelData->nRelations = 1;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "System_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 29;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 507;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 0;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 5;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nBaseClocks = 0;
  
  data->modelData->nSpatialDistributions = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->linearizationDumpLanguage =
  OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
int main(int argc, char**argv)
{
  /*
    Set the error functions to be used for simulation.
    The default value for them is 'functions' version. Change it here to 'simulation' versions
  */
  omc_assert = omc_assert_simulation;
  omc_assert_withEquationIndexes = omc_assert_simulation_withEquationIndexes;

  omc_assert_warning_withEquationIndexes = omc_assert_warning_simulation_withEquationIndexes;
  omc_assert_warning = omc_assert_warning_simulation;
  omc_terminate = omc_terminate_simulation;
  omc_throw = omc_throw_simulation;

  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    System_setupDataStruc(&data, threadData);
    res = _main_SimulationRuntime(argc, argv, &data, threadData);
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  EXIT(res);
  return res;
}

#ifdef __cplusplus
}
#endif


