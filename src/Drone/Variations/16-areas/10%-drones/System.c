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

  data->simulationInfo->outputVars[0] = (data->localData[0]->realVars[24]/* Tcc variable */) ;
  data->simulationInfo->outputVars[1] = (data->localData[0]->realVars[25]/* arrivalThreshold variable */) ;
  data->simulationInfo->outputVars[2] = (data->localData[0]->realVars[26]/* arrival_timeout variable */) ;
  data->simulationInfo->outputVars[3] = (data->localData[0]->realVars[37]/* cc_choice variable */) ;
  data->simulationInfo->outputVars[4] = (data->localData[0]->realVars[48]/* comm_timeout variable */) ;
  data->simulationInfo->outputVars[5] = (data->localData[0]->realVars[77]/* p_recharge variable */) ;
  data->simulationInfo->outputVars[6] = (data->localData[0]->realVars[78]/* p_worst variable */) ;
  
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
equation index: 156
type: SIMPLE_ASSIGN
p_recharge = p.p_recharge
*/
void System_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  (data->localData[0]->realVars[77]/* p_recharge variable */)  = (data->simulationInfo->realParameter[1716]/* p.p_recharge PARAM */) ;
  TRACE_POP
}
/*
equation index: 157
type: SIMPLE_ASSIGN
arrivalThreshold = p.arrivalThreshold
*/
void System_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  (data->localData[0]->realVars[25]/* arrivalThreshold variable */)  = (data->simulationInfo->realParameter[1692]/* p.arrivalThreshold PARAM */) ;
  TRACE_POP
}
/*
equation index: 158
type: SIMPLE_ASSIGN
arrival_timeout = p.arrival_timeout
*/
void System_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  (data->localData[0]->realVars[26]/* arrival_timeout variable */)  = (data->simulationInfo->realParameter[1693]/* p.arrival_timeout PARAM */) ;
  TRACE_POP
}
/*
equation index: 159
type: SIMPLE_ASSIGN
p_worst = p.p_worst
*/
void System_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  (data->localData[0]->realVars[78]/* p_worst variable */)  = (data->simulationInfo->realParameter[1717]/* p.p_worst PARAM */) ;
  TRACE_POP
}
/*
equation index: 160
type: SIMPLE_ASSIGN
comm_timeout = p.comm_timeout
*/
void System_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  (data->localData[0]->realVars[48]/* comm_timeout variable */)  = (data->simulationInfo->realParameter[1698]/* p.comm_timeout PARAM */) ;
  TRACE_POP
}
/*
equation index: 161
type: SIMPLE_ASSIGN
Tcc = p.Tcc
*/
void System_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  (data->localData[0]->realVars[24]/* Tcc variable */)  = (data->simulationInfo->realParameter[1593]/* p.Tcc PARAM */) ;
  TRACE_POP
}
/*
equation index: 162
type: SIMPLE_ASSIGN
cc_choice = p.cc_choice
*/
void System_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  (data->localData[0]->realVars[37]/* cc_choice variable */)  = (data->simulationInfo->realParameter[1696]/* p.cc_choice PARAM */) ;
  TRACE_POP
}
/*
equation index: 163
type: SIMPLE_ASSIGN
d[2].ctrl.Trustz = d[2].ctrl.prm.m * (9.81 + d[2].ctrl.kz1 * (d[2].d.z - pre(d[2].ctrl.destZ)) + d[2].ctrl.kz2 * d[2].d.Vz)
*/
void System_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  (data->localData[0]->realVars[56]/* d[2].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[649]/* d[2].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[409]/* d[2].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[11]/* d[2].d.z STATE(1,d[2].d.Vz) */)  - (data->simulationInfo->realVarsPre[250]/* d[2].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[411]/* d[2].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[5]/* d[2].d.Vz STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 164
type: SIMPLE_ASSIGN
$DER.d[2].d.Vz = -9.81 + d[2].ctrl.Trustz / d[2].d.p.m
*/
void System_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  (data->localData[0]->realVars[17]/* der(d[2].d.Vz) STATE_DER */)  = -9.81 + DIVISION_SIM((data->localData[0]->realVars[56]/* d[2].ctrl.Trustz variable */) ,(data->simulationInfo->realParameter[911]/* d[2].d.p.m PARAM */) ,"d[2].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 165
type: SIMPLE_ASSIGN
$DER.d[2].d.z = d[2].d.Vz
*/
void System_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  (data->localData[0]->realVars[23]/* der(d[2].d.z) STATE_DER */)  = (data->localData[0]->realVars[5]/* d[2].d.Vz STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 166
type: SIMPLE_ASSIGN
$DER.d[2].d.y = d[2].d.Vy
*/
void System_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  (data->localData[0]->realVars[21]/* der(d[2].d.y) STATE_DER */)  = (data->localData[0]->realVars[3]/* d[2].d.Vy STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 167
type: SIMPLE_ASSIGN
$DER.d[2].d.x = d[2].d.Vx
*/
void System_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  (data->localData[0]->realVars[19]/* der(d[2].d.x) STATE_DER */)  = (data->localData[0]->realVars[1]/* d[2].d.Vx STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 168
type: SIMPLE_ASSIGN
d[1].ctrl.Trustz = d[1].ctrl.prm.m * (9.81 + d[1].ctrl.kz1 * (d[1].d.z - pre(d[1].ctrl.destZ)) + d[1].ctrl.kz2 * d[1].d.Vz)
*/
void System_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  (data->localData[0]->realVars[55]/* d[1].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[648]/* d[1].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[408]/* d[1].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[10]/* d[1].d.z STATE(1,d[1].d.Vz) */)  - (data->simulationInfo->realVarsPre[249]/* d[1].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[410]/* d[1].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[4]/* d[1].d.Vz STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 169
type: SIMPLE_ASSIGN
$DER.d[1].d.Vz = -9.81 + d[1].ctrl.Trustz / d[1].d.p.m
*/
void System_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  (data->localData[0]->realVars[16]/* der(d[1].d.Vz) STATE_DER */)  = -9.81 + DIVISION_SIM((data->localData[0]->realVars[55]/* d[1].ctrl.Trustz variable */) ,(data->simulationInfo->realParameter[910]/* d[1].d.p.m PARAM */) ,"d[1].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 170
type: SIMPLE_ASSIGN
$DER.d[1].d.z = d[1].d.Vz
*/
void System_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  (data->localData[0]->realVars[22]/* der(d[1].d.z) STATE_DER */)  = (data->localData[0]->realVars[4]/* d[1].d.Vz STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 171
type: SIMPLE_ASSIGN
$DER.d[1].d.y = d[1].d.Vy
*/
void System_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  (data->localData[0]->realVars[20]/* der(d[1].d.y) STATE_DER */)  = (data->localData[0]->realVars[2]/* d[1].d.Vy STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 172
type: SIMPLE_ASSIGN
$DER.d[1].d.x = d[1].d.Vx
*/
void System_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  (data->localData[0]->realVars[18]/* der(d[1].d.x) STATE_DER */)  = (data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 173
type: ALGORITHM

  cc.endSimulation := pre(cc.endSimulation);
  cc.setpointChanged[2] := pre(cc.setpointChanged[2]);
  cc.setpointChanged[1] := pre(cc.setpointChanged[1]);
  cc.comm_done[2] := pre(cc.comm_done[2]);
  cc.comm_done[1] := pre(cc.comm_done[1]);
  cc.state := pre(cc.state);
  cc.fifox[2] := pre(cc.fifox[2]);
  cc.fifox[1] := pre(cc.fifox[1]);
  cc.pos[2,3] := pre(cc.pos[2,3]);
  cc.pos[2,2] := pre(cc.pos[2,2]);
  cc.pos[2,1] := pre(cc.pos[2,1]);
  cc.pos[1,3] := pre(cc.pos[1,3]);
  cc.pos[1,2] := pre(cc.pos[1,2]);
  cc.pos[1,1] := pre(cc.pos[1,1]);
  cc.msg_to_drone[2,5] := pre(cc.msg_to_drone[2,5]);
  cc.msg_to_drone[2,4] := pre(cc.msg_to_drone[2,4]);
  cc.msg_to_drone[2,3] := pre(cc.msg_to_drone[2,3]);
  cc.msg_to_drone[2,2] := pre(cc.msg_to_drone[2,2]);
  cc.msg_to_drone[2,1] := pre(cc.msg_to_drone[2,1]);
  cc.msg_to_drone[1,5] := pre(cc.msg_to_drone[1,5]);
  cc.msg_to_drone[1,4] := pre(cc.msg_to_drone[1,4]);
  cc.msg_to_drone[1,3] := pre(cc.msg_to_drone[1,3]);
  cc.msg_to_drone[1,2] := pre(cc.msg_to_drone[1,2]);
  cc.msg_to_drone[1,1] := pre(cc.msg_to_drone[1,1]);
  cc.writesignal[2] := pre(cc.writesignal[2]);
  cc.writesignal[1] := pre(cc.writesignal[1]);
  cc.readsignal[2] := pre(cc.readsignal[2]);
  cc.readsignal[1] := pre(cc.readsignal[1]);
  cc.setpointChangeTime[2] := pre(cc.setpointChangeTime[2]);
  cc.setpointChangeTime[1] := pre(cc.setpointChangeTime[1]);
  cc.lastAnswered[2] := pre(cc.lastAnswered[2]);
  cc.lastAnswered[1] := pre(cc.lastAnswered[1]);
  cc.isDead[2] := pre(cc.isDead[2]);
  cc.isDead[1] := pre(cc.isDead[1]);
  cc.rechargingDrones := pre(cc.rechargingDrones);
  cc.isRecharging[2] := pre(cc.isRecharging[2]);
  cc.isRecharging[1] := pre(cc.isRecharging[1]);
  cc.battery[2] := pre(cc.battery[2]);
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
  cc.hasBeenSelected[16] := pre(cc.hasBeenSelected[16]);
  cc.hasBeenSelected[15] := pre(cc.hasBeenSelected[15]);
  cc.hasBeenSelected[14] := pre(cc.hasBeenSelected[14]);
  cc.hasBeenSelected[13] := pre(cc.hasBeenSelected[13]);
  cc.hasBeenSelected[12] := pre(cc.hasBeenSelected[12]);
  cc.hasBeenSelected[11] := pre(cc.hasBeenSelected[11]);
  cc.hasBeenSelected[10] := pre(cc.hasBeenSelected[10]);
  cc.hasBeenSelected[9] := pre(cc.hasBeenSelected[9]);
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
  cc.isBusy[2] := pre(cc.isBusy[2]);
  cc.isBusy[1] := pre(cc.isBusy[1]);
  cc.lastVisited[16] := pre(cc.lastVisited[16]);
  cc.lastVisited[15] := pre(cc.lastVisited[15]);
  cc.lastVisited[14] := pre(cc.lastVisited[14]);
  cc.lastVisited[13] := pre(cc.lastVisited[13]);
  cc.lastVisited[12] := pre(cc.lastVisited[12]);
  cc.lastVisited[11] := pre(cc.lastVisited[11]);
  cc.lastVisited[10] := pre(cc.lastVisited[10]);
  cc.lastVisited[9] := pre(cc.lastVisited[9]);
  cc.lastVisited[8] := pre(cc.lastVisited[8]);
  cc.lastVisited[7] := pre(cc.lastVisited[7]);
  cc.lastVisited[6] := pre(cc.lastVisited[6]);
  cc.lastVisited[5] := pre(cc.lastVisited[5]);
  cc.lastVisited[4] := pre(cc.lastVisited[4]);
  cc.lastVisited[3] := pre(cc.lastVisited[3]);
  cc.lastVisited[2] := pre(cc.lastVisited[2]);
  cc.lastVisited[1] := pre(cc.lastVisited[1]);
  cc.hasBeenVisited[16] := pre(cc.hasBeenVisited[16]);
  cc.hasBeenVisited[15] := pre(cc.hasBeenVisited[15]);
  cc.hasBeenVisited[14] := pre(cc.hasBeenVisited[14]);
  cc.hasBeenVisited[13] := pre(cc.hasBeenVisited[13]);
  cc.hasBeenVisited[12] := pre(cc.hasBeenVisited[12]);
  cc.hasBeenVisited[11] := pre(cc.hasBeenVisited[11]);
  cc.hasBeenVisited[10] := pre(cc.hasBeenVisited[10]);
  cc.hasBeenVisited[9] := pre(cc.hasBeenVisited[9]);
  cc.hasBeenVisited[8] := pre(cc.hasBeenVisited[8]);
  cc.hasBeenVisited[7] := pre(cc.hasBeenVisited[7]);
  cc.hasBeenVisited[6] := pre(cc.hasBeenVisited[6]);
  cc.hasBeenVisited[5] := pre(cc.hasBeenVisited[5]);
  cc.hasBeenVisited[4] := pre(cc.hasBeenVisited[4]);
  cc.hasBeenVisited[3] := pre(cc.hasBeenVisited[3]);
  cc.hasBeenVisited[2] := pre(cc.hasBeenVisited[2]);
  cc.hasBeenVisited[1] := pre(cc.hasBeenVisited[1]);
  cc.setz[2] := pre(cc.setz[2]);
  cc.setz[1] := pre(cc.setz[1]);
  cc.sety[2] := pre(cc.sety[2]);
  cc.sety[1] := pre(cc.sety[1]);
  cc.setx[2] := pre(cc.setx[2]);
  cc.setx[1] := pre(cc.setx[1]);
  cc.aliveDrones := pre(cc.aliveDrones);
  cc.z := pre(cc.z);
  cc.err := pre(cc.err);
  $whenCondition15 := pre($whenCondition15);
  $whenCondition15 := sample(7, 0.0, p.Tcc);
  when false then
    cc.err := 0.0;
    cc.z := 0;
    cc.aliveDrones := 2;
    cc.setx := {cc.p.flyZone[1], cc.p.flyZone[1]};
    cc.sety := {cc.p.flyZone[2], cc.p.flyZone[2]};
    cc.setz := {cc.p.flyZone[3], cc.p.flyZone[3]};
    cc.hasBeenVisited := {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false};
    cc.lastVisited := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    cc.isBusy := {false, false};
    cc.time_span := 0.0;
    cc.time_passed_since_last_loop := 0.0;
    cc.hasBeenSelected := {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
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
    cc.battery := {0.0, 0.0};
    cc.isRecharging := {false, false};
    cc.rechargingDrones := 0;
    cc.isDead := {false, false};
    cc.lastAnswered := {0.0, 0.0};
    cc.setpointChangeTime := {0.0, 0.0};
    cc.readsignal := {false, false};
    cc.writesignal := {false, false};
    for i in 1:2 loop
      for j in 1:5 loop
        cc.msg_to_drone[i,j] := 0.0;
      end for;
    end for;
    for i in 1:2 loop
      for j in 1:3 loop
        cc.pos[i,j] := 0.0;
      end for;
    end for;
    cc.fifox := {0, 0};
    cc.state := 0;
    cc.comm_done := {true, true};
    cc.setpointChanged := {false, false};
    cc.endSimulation := false;
    setup_db();
    setup_areas(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 2, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 16, cc.p.areas));
    setup_drones(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 2, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 16, cc.p.areas));
  elsewhen $whenCondition15 then
    if pre(cc.state) == 0 then
      for drone in 1:2 loop
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
      for drone in 1:2 loop
        if not pre(cc.isDead[drone]) and not pre(cc.comm_done[drone]) then
          (cc.writesignal[drone], cc.fifox[drone]) := WriteToFIFO(pre(cc.fifox[drone]), pre(cc.writesignal[drone]), pre(cc.spaceavailable[drone]));
          if FifoIODone(cc.fifox[drone]) then
            cc.comm_done[drone] := true;
            cc.fifox[drone] := 0;
          end if;
        end if;
      end for;
      cc.z := 0;
      for drone in 1:2 loop
        if not pre(cc.isDead[drone]) then
          if not pre(cc.comm_done[drone]) then
            cc.z := 100;
            break;
          end if;
        end if;
      end for;
      if cc.z == 0 then
        cc.state := 15;
        cc.comm_done := {false, false};
      end if;
    elseif pre(cc.state) == 15 then
      for drone in 1:2 loop
        if not pre(cc.isDead[drone]) and not pre(cc.comm_done[drone]) then
          if time - pre(cc.lastAnswered[drone]) > p.comm_timeout then
            cc.comm_done[drone] := true;
            cc.isDead[drone] := true;
            cc.aliveDrones := pre(cc.aliveDrones) - 1;
            for area in 1:16 loop
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
      for drone in 1:2 loop
        if not pre(cc.isDead[drone]) then
          if not pre(cc.comm_done[drone]) then
            cc.z := 100;
            break;
          end if;
        end if;
      end for;
      if cc.z == 0 then
        cc.state := 20;
        cc.comm_done := {false, false};
      end if;
    elseif pre(cc.state) == 20 then
      for drone in 1:2 loop
        if pre(cc.isBusy[drone]) and sqrt((pre(cc.pos[drone,1]) - pre(cc.setx[drone])) ^ 2.0 + (pre(cc.pos[drone,2]) - pre(cc.sety[drone])) ^ 2.0 + (pre(cc.pos[drone,3]) - pre(cc.setz[drone])) ^ 2.0) < p.arrivalThreshold then
          cc.isBusy[drone] := false;
          for area in 1:16 loop
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
            for area in 1:16 loop
              if pre(cc.hasBeenSelected[area]) == drone then
                cc.hasBeenSelected[area] := 0;
              end if;
            end for;
          end if;
        end if;
      end for;
      for drone in 1:2 loop
        if not pre(cc.isDead[drone]) then
          update_drone_pos(drone, time, pre(cc.pos[drone]));
        end if;
      end for;
      for area in 1:16 loop
        if how_many_drones_in_area(area, pre(cc.time_span)) > 0 then
          cc.hasBeenVisited[area] := true;
          cc.lastVisited[area] := time;
        end if;
      end for;
      cc.err := 0.0;
      for area in 1:16 loop
        if not pre(cc.hasBeenVisited[area]) then
          cc.err := 100.0;
          break;
        end if;
      end for;
      if pre(cc.err) < 1.0 then
        cc.time_passed_since_last_loop := time - pre(cc.time_span);
        cc.time_span := time;
        cc.hasBeenVisited := {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false};
        cc.hasBeenSelected := {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
      end if;
      if cc.aliveDrones <= 0 then
        disconnect_from_db();
        cc.endSimulation := true;
      end if;
      cc.state := 25;
    elseif pre(cc.state) == 25 then
      for drone in 1:2 loop
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
          for area in 1:16 loop
            if not pre(cc.hasBeenVisited[area]) and pre(cc.hasBeenSelected[area]) == 0 then
              (cc.area_x, cc.area_y, cc.area_z) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 2, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 16, cc.p.areas), area);
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
                (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 2, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 16, cc.p.areas), cc.tmp_area_1);
                cc.hasBeenSelected[cc.tmp_area_1] := drone;
              else
                (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 2, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 16, cc.p.areas), cc.tmp_area_2);
                cc.hasBeenSelected[cc.tmp_area_2] := drone;
              end if;
            else
              if myrandom() > p.p_worst then
                (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 2, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 16, cc.p.areas), cc.tmp_area_2);
                cc.hasBeenSelected[cc.tmp_area_2] := drone;
              else
                (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 2, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 16, cc.p.areas), cc.tmp_area_1);
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
      for drone in 1:2 loop
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
            elseif (*Real*)(pre(cc.rechargingDrones)) < 1.2 then
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
      for drone in 1:2 loop
        if pre(cc.setpointChanged[drone]) then
          cc.state := 30;
          break;
        else
          cc.state := 0;
        end if;
      end for;
    elseif pre(cc.state) == 30 then
      for drone in 1:2 loop
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
      for drone in 1:2 loop
        if not pre(cc.comm_done[drone]) then
          (cc.writesignal[drone], cc.fifox[drone]) := WriteToFIFO(pre(cc.fifox[drone]), pre(cc.writesignal[drone]), pre(cc.spaceavailable[drone]));
          if FifoIODone(cc.fifox[drone]) then
            cc.comm_done[drone] := true;
            cc.fifox[drone] := 0;
          end if;
        end if;
      end for;
      cc.z := 0;
      for drone in 1:2 loop
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
void System_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
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
  (data->localData[0]->booleanVars[29]/* cc.endSimulation DISCRETE */)  = (data->simulationInfo->booleanVarsPre[29]/* cc.endSimulation DISCRETE */) ;

  (data->localData[0]->booleanVars[55]/* cc.setpointChanged[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[55]/* cc.setpointChanged[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[54]/* cc.setpointChanged[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[54]/* cc.setpointChanged[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[26]/* cc.comm_done[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[26]/* cc.comm_done[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[25]/* cc.comm_done[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[25]/* cc.comm_done[1] DISCRETE */) ;

  (data->localData[0]->integerVars[20]/* cc.state DISCRETE */)  = (data->simulationInfo->integerVarsPre[20]/* cc.state DISCRETE */) ;

  (data->localData[0]->integerVars[2]/* cc.fifox[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[2]/* cc.fifox[2] DISCRETE */) ;

  (data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[1]/* cc.fifox[1] DISCRETE */) ;

  (data->localData[0]->realVars[122]/* cc.pos[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[122]/* cc.pos[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[121]/* cc.pos[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[121]/* cc.pos[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[120]/* cc.pos[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[120]/* cc.pos[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[119]/* cc.pos[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[119]/* cc.pos[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[118]/* cc.pos[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[118]/* cc.pos[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[117]/* cc.pos[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[117]/* cc.pos[1,1] DISCRETE */) ;

  (data->localData[0]->realVars[116]/* cc.msg_to_drone[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[116]/* cc.msg_to_drone[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[115]/* cc.msg_to_drone[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[115]/* cc.msg_to_drone[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[114]/* cc.msg_to_drone[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[114]/* cc.msg_to_drone[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[113]/* cc.msg_to_drone[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[113]/* cc.msg_to_drone[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[112]/* cc.msg_to_drone[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[112]/* cc.msg_to_drone[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[111]/* cc.msg_to_drone[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[111]/* cc.msg_to_drone[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[110]/* cc.msg_to_drone[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[110]/* cc.msg_to_drone[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[109]/* cc.msg_to_drone[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[109]/* cc.msg_to_drone[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[108]/* cc.msg_to_drone[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[108]/* cc.msg_to_drone[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[107]/* cc.msg_to_drone[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[107]/* cc.msg_to_drone[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[59]/* cc.writesignal[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[59]/* cc.writesignal[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[58]/* cc.writesignal[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[58]/* cc.writesignal[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[53]/* cc.readsignal[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[53]/* cc.readsignal[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[52]/* cc.readsignal[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[52]/* cc.readsignal[1] DISCRETE */) ;

  (data->localData[0]->realVars[124]/* cc.setpointChangeTime[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[124]/* cc.setpointChangeTime[2] DISCRETE */) ;

  (data->localData[0]->realVars[123]/* cc.setpointChangeTime[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[123]/* cc.setpointChangeTime[1] DISCRETE */) ;

  (data->localData[0]->realVars[88]/* cc.lastAnswered[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[88]/* cc.lastAnswered[2] DISCRETE */) ;

  (data->localData[0]->realVars[87]/* cc.lastAnswered[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[87]/* cc.lastAnswered[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[49]/* cc.isDead[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[49]/* cc.isDead[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[48]/* cc.isDead[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[48]/* cc.isDead[1] DISCRETE */) ;

  (data->localData[0]->integerVars[19]/* cc.rechargingDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[19]/* cc.rechargingDrones DISCRETE */) ;

  (data->localData[0]->booleanVars[51]/* cc.isRecharging[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[51]/* cc.isRecharging[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[50]/* cc.isRecharging[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[50]/* cc.isRecharging[1] DISCRETE */) ;

  (data->localData[0]->realVars[83]/* cc.battery[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[83]/* cc.battery[2] DISCRETE */) ;

  (data->localData[0]->realVars[82]/* cc.battery[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[82]/* cc.battery[1] DISCRETE */) ;

  (data->localData[0]->realVars[134]/* cc.tmp_time DISCRETE */)  = (data->simulationInfo->realVarsPre[134]/* cc.tmp_time DISCRETE */) ;

  (data->localData[0]->realVars[105]/* cc.max_time DISCRETE */)  = (data->simulationInfo->realVarsPre[105]/* cc.max_time DISCRETE */) ;

  (data->localData[0]->realVars[81]/* cc.area_z DISCRETE */)  = (data->simulationInfo->realVarsPre[81]/* cc.area_z DISCRETE */) ;

  (data->localData[0]->realVars[80]/* cc.area_y DISCRETE */)  = (data->simulationInfo->realVarsPre[80]/* cc.area_y DISCRETE */) ;

  (data->localData[0]->realVars[79]/* cc.area_x DISCRETE */)  = (data->simulationInfo->realVarsPre[79]/* cc.area_x DISCRETE */) ;

  (data->localData[0]->realVars[85]/* cc.choice_value_2 DISCRETE */)  = (data->simulationInfo->realVarsPre[85]/* cc.choice_value_2 DISCRETE */) ;

  (data->localData[0]->realVars[84]/* cc.choice_value_1 DISCRETE */)  = (data->simulationInfo->realVarsPre[84]/* cc.choice_value_1 DISCRETE */) ;

  (data->localData[0]->integerVars[22]/* cc.tmp_area_2 DISCRETE */)  = (data->simulationInfo->integerVarsPre[22]/* cc.tmp_area_2 DISCRETE */) ;

  (data->localData[0]->integerVars[21]/* cc.tmp_area_1 DISCRETE */)  = (data->simulationInfo->integerVarsPre[21]/* cc.tmp_area_1 DISCRETE */) ;

  (data->localData[0]->realVars[133]/* cc.tmp_distance DISCRETE */)  = (data->simulationInfo->realVarsPre[133]/* cc.tmp_distance DISCRETE */) ;

  (data->localData[0]->realVars[106]/* cc.min_distance DISCRETE */)  = (data->simulationInfo->realVarsPre[106]/* cc.min_distance DISCRETE */) ;

  (data->localData[0]->integerVars[18]/* cc.hasBeenSelected[16] DISCRETE */)  = (data->simulationInfo->integerVarsPre[18]/* cc.hasBeenSelected[16] DISCRETE */) ;

  (data->localData[0]->integerVars[17]/* cc.hasBeenSelected[15] DISCRETE */)  = (data->simulationInfo->integerVarsPre[17]/* cc.hasBeenSelected[15] DISCRETE */) ;

  (data->localData[0]->integerVars[16]/* cc.hasBeenSelected[14] DISCRETE */)  = (data->simulationInfo->integerVarsPre[16]/* cc.hasBeenSelected[14] DISCRETE */) ;

  (data->localData[0]->integerVars[15]/* cc.hasBeenSelected[13] DISCRETE */)  = (data->simulationInfo->integerVarsPre[15]/* cc.hasBeenSelected[13] DISCRETE */) ;

  (data->localData[0]->integerVars[14]/* cc.hasBeenSelected[12] DISCRETE */)  = (data->simulationInfo->integerVarsPre[14]/* cc.hasBeenSelected[12] DISCRETE */) ;

  (data->localData[0]->integerVars[13]/* cc.hasBeenSelected[11] DISCRETE */)  = (data->simulationInfo->integerVarsPre[13]/* cc.hasBeenSelected[11] DISCRETE */) ;

  (data->localData[0]->integerVars[12]/* cc.hasBeenSelected[10] DISCRETE */)  = (data->simulationInfo->integerVarsPre[12]/* cc.hasBeenSelected[10] DISCRETE */) ;

  (data->localData[0]->integerVars[11]/* cc.hasBeenSelected[9] DISCRETE */)  = (data->simulationInfo->integerVarsPre[11]/* cc.hasBeenSelected[9] DISCRETE */) ;

  (data->localData[0]->integerVars[10]/* cc.hasBeenSelected[8] DISCRETE */)  = (data->simulationInfo->integerVarsPre[10]/* cc.hasBeenSelected[8] DISCRETE */) ;

  (data->localData[0]->integerVars[9]/* cc.hasBeenSelected[7] DISCRETE */)  = (data->simulationInfo->integerVarsPre[9]/* cc.hasBeenSelected[7] DISCRETE */) ;

  (data->localData[0]->integerVars[8]/* cc.hasBeenSelected[6] DISCRETE */)  = (data->simulationInfo->integerVarsPre[8]/* cc.hasBeenSelected[6] DISCRETE */) ;

  (data->localData[0]->integerVars[7]/* cc.hasBeenSelected[5] DISCRETE */)  = (data->simulationInfo->integerVarsPre[7]/* cc.hasBeenSelected[5] DISCRETE */) ;

  (data->localData[0]->integerVars[6]/* cc.hasBeenSelected[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[6]/* cc.hasBeenSelected[4] DISCRETE */) ;

  (data->localData[0]->integerVars[5]/* cc.hasBeenSelected[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[5]/* cc.hasBeenSelected[3] DISCRETE */) ;

  (data->localData[0]->integerVars[4]/* cc.hasBeenSelected[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[4]/* cc.hasBeenSelected[2] DISCRETE */) ;

  (data->localData[0]->integerVars[3]/* cc.hasBeenSelected[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[3]/* cc.hasBeenSelected[1] DISCRETE */) ;

  (data->localData[0]->realVars[131]/* cc.time_passed_since_last_loop DISCRETE */)  = (data->simulationInfo->realVarsPre[131]/* cc.time_passed_since_last_loop DISCRETE */) ;

  (data->localData[0]->realVars[132]/* cc.time_span DISCRETE */)  = (data->simulationInfo->realVarsPre[132]/* cc.time_span DISCRETE */) ;

  (data->localData[0]->booleanVars[47]/* cc.isBusy[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[47]/* cc.isBusy[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[46]/* cc.isBusy[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[46]/* cc.isBusy[1] DISCRETE */) ;

  (data->localData[0]->realVars[104]/* cc.lastVisited[16] DISCRETE */)  = (data->simulationInfo->realVarsPre[104]/* cc.lastVisited[16] DISCRETE */) ;

  (data->localData[0]->realVars[103]/* cc.lastVisited[15] DISCRETE */)  = (data->simulationInfo->realVarsPre[103]/* cc.lastVisited[15] DISCRETE */) ;

  (data->localData[0]->realVars[102]/* cc.lastVisited[14] DISCRETE */)  = (data->simulationInfo->realVarsPre[102]/* cc.lastVisited[14] DISCRETE */) ;

  (data->localData[0]->realVars[101]/* cc.lastVisited[13] DISCRETE */)  = (data->simulationInfo->realVarsPre[101]/* cc.lastVisited[13] DISCRETE */) ;

  (data->localData[0]->realVars[100]/* cc.lastVisited[12] DISCRETE */)  = (data->simulationInfo->realVarsPre[100]/* cc.lastVisited[12] DISCRETE */) ;

  (data->localData[0]->realVars[99]/* cc.lastVisited[11] DISCRETE */)  = (data->simulationInfo->realVarsPre[99]/* cc.lastVisited[11] DISCRETE */) ;

  (data->localData[0]->realVars[98]/* cc.lastVisited[10] DISCRETE */)  = (data->simulationInfo->realVarsPre[98]/* cc.lastVisited[10] DISCRETE */) ;

  (data->localData[0]->realVars[97]/* cc.lastVisited[9] DISCRETE */)  = (data->simulationInfo->realVarsPre[97]/* cc.lastVisited[9] DISCRETE */) ;

  (data->localData[0]->realVars[96]/* cc.lastVisited[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[96]/* cc.lastVisited[8] DISCRETE */) ;

  (data->localData[0]->realVars[95]/* cc.lastVisited[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[95]/* cc.lastVisited[7] DISCRETE */) ;

  (data->localData[0]->realVars[94]/* cc.lastVisited[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[94]/* cc.lastVisited[6] DISCRETE */) ;

  (data->localData[0]->realVars[93]/* cc.lastVisited[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[93]/* cc.lastVisited[5] DISCRETE */) ;

  (data->localData[0]->realVars[92]/* cc.lastVisited[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[92]/* cc.lastVisited[4] DISCRETE */) ;

  (data->localData[0]->realVars[91]/* cc.lastVisited[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[91]/* cc.lastVisited[3] DISCRETE */) ;

  (data->localData[0]->realVars[90]/* cc.lastVisited[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[90]/* cc.lastVisited[2] DISCRETE */) ;

  (data->localData[0]->realVars[89]/* cc.lastVisited[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[89]/* cc.lastVisited[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[45]/* cc.hasBeenVisited[16] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[45]/* cc.hasBeenVisited[16] DISCRETE */) ;

  (data->localData[0]->booleanVars[44]/* cc.hasBeenVisited[15] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[44]/* cc.hasBeenVisited[15] DISCRETE */) ;

  (data->localData[0]->booleanVars[43]/* cc.hasBeenVisited[14] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[43]/* cc.hasBeenVisited[14] DISCRETE */) ;

  (data->localData[0]->booleanVars[42]/* cc.hasBeenVisited[13] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[42]/* cc.hasBeenVisited[13] DISCRETE */) ;

  (data->localData[0]->booleanVars[41]/* cc.hasBeenVisited[12] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[41]/* cc.hasBeenVisited[12] DISCRETE */) ;

  (data->localData[0]->booleanVars[40]/* cc.hasBeenVisited[11] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[40]/* cc.hasBeenVisited[11] DISCRETE */) ;

  (data->localData[0]->booleanVars[39]/* cc.hasBeenVisited[10] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[39]/* cc.hasBeenVisited[10] DISCRETE */) ;

  (data->localData[0]->booleanVars[38]/* cc.hasBeenVisited[9] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[38]/* cc.hasBeenVisited[9] DISCRETE */) ;

  (data->localData[0]->booleanVars[37]/* cc.hasBeenVisited[8] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[37]/* cc.hasBeenVisited[8] DISCRETE */) ;

  (data->localData[0]->booleanVars[36]/* cc.hasBeenVisited[7] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[36]/* cc.hasBeenVisited[7] DISCRETE */) ;

  (data->localData[0]->booleanVars[35]/* cc.hasBeenVisited[6] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[35]/* cc.hasBeenVisited[6] DISCRETE */) ;

  (data->localData[0]->booleanVars[34]/* cc.hasBeenVisited[5] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[34]/* cc.hasBeenVisited[5] DISCRETE */) ;

  (data->localData[0]->booleanVars[33]/* cc.hasBeenVisited[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[33]/* cc.hasBeenVisited[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[32]/* cc.hasBeenVisited[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[32]/* cc.hasBeenVisited[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[31]/* cc.hasBeenVisited[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[31]/* cc.hasBeenVisited[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[30]/* cc.hasBeenVisited[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[30]/* cc.hasBeenVisited[1] DISCRETE */) ;

  (data->localData[0]->realVars[130]/* cc.setz[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[130]/* cc.setz[2] DISCRETE */) ;

  (data->localData[0]->realVars[129]/* cc.setz[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[129]/* cc.setz[1] DISCRETE */) ;

  (data->localData[0]->realVars[128]/* cc.sety[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[128]/* cc.sety[2] DISCRETE */) ;

  (data->localData[0]->realVars[127]/* cc.sety[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[127]/* cc.sety[1] DISCRETE */) ;

  (data->localData[0]->realVars[126]/* cc.setx[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[126]/* cc.setx[2] DISCRETE */) ;

  (data->localData[0]->realVars[125]/* cc.setx[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[125]/* cc.setx[1] DISCRETE */) ;

  (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[0]/* cc.aliveDrones DISCRETE */) ;

  (data->localData[0]->integerVars[23]/* cc.z DISCRETE */)  = (data->simulationInfo->integerVarsPre[23]/* cc.z DISCRETE */) ;

  (data->localData[0]->realVars[86]/* cc.err DISCRETE */)  = (data->simulationInfo->realVarsPre[86]/* cc.err DISCRETE */) ;

  (data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[6]/* $whenCondition15 DISCRETE */) ;

  (data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  = data->simulationInfo->samples[6];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[86]/* cc.err DISCRETE */)  = 0.0;

      (data->localData[0]->integerVars[23]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = ((modelica_integer) 2);

      array_alloc_scalar_real_array(&tmp3, 2, (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) );
      real_array_create(&tmp4, ((modelica_real*)&((&(data->localData[0]->realVars[125]/* cc.setx[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
      real_array_copy_data(tmp3, tmp4);

      array_alloc_scalar_real_array(&tmp5, 2, (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) );
      real_array_create(&tmp6, ((modelica_real*)&((&(data->localData[0]->realVars[127]/* cc.sety[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
      real_array_copy_data(tmp5, tmp6);

      array_alloc_scalar_real_array(&tmp7, 2, (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) );
      real_array_create(&tmp8, ((modelica_real*)&((&(data->localData[0]->realVars[129]/* cc.setz[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
      real_array_copy_data(tmp7, tmp8);

      array_alloc_scalar_boolean_array(&tmp9, 16, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp10, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[30]/* cc.hasBeenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      boolean_array_copy_data(tmp9, tmp10);

      array_alloc_scalar_real_array(&tmp11, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp12, ((modelica_real*)&((&(data->localData[0]->realVars[89]/* cc.lastVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      real_array_copy_data(tmp11, tmp12);

      array_alloc_scalar_boolean_array(&tmp13, 2, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp14, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[46]/* cc.isBusy[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
      boolean_array_copy_data(tmp13, tmp14);

      (data->localData[0]->realVars[132]/* cc.time_span DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[131]/* cc.time_passed_since_last_loop DISCRETE */)  = 0.0;

      array_alloc_scalar_integer_array(&tmp15, 16, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp16, ((modelica_integer*)&((&(data->localData[0]->integerVars[3]/* cc.hasBeenSelected[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      integer_array_copy_data(tmp15, tmp16);

      real_array_create(&tmp17, ((modelica_real*)&((&data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
      tmp18 = max_real_array(tmp17);
      (data->localData[0]->realVars[106]/* cc.min_distance DISCRETE */)  = tmp18;

      (data->localData[0]->realVars[133]/* cc.tmp_distance DISCRETE */)  = 0.0;

      (data->localData[0]->integerVars[21]/* cc.tmp_area_1 DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[22]/* cc.tmp_area_2 DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->realVars[84]/* cc.choice_value_1 DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[85]/* cc.choice_value_2 DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[79]/* cc.area_x DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[80]/* cc.area_y DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[81]/* cc.area_z DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[105]/* cc.max_time DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[134]/* cc.tmp_time DISCRETE */)  = 0.0;

      array_alloc_scalar_real_array(&tmp19, 2, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp20, ((modelica_real*)&((&(data->localData[0]->realVars[82]/* cc.battery[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
      real_array_copy_data(tmp19, tmp20);

      array_alloc_scalar_boolean_array(&tmp21, 2, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp22, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[50]/* cc.isRecharging[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
      boolean_array_copy_data(tmp21, tmp22);

      (data->localData[0]->integerVars[19]/* cc.rechargingDrones DISCRETE */)  = ((modelica_integer) 0);

      array_alloc_scalar_boolean_array(&tmp23, 2, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp24, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[48]/* cc.isDead[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
      boolean_array_copy_data(tmp23, tmp24);

      array_alloc_scalar_real_array(&tmp25, 2, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp26, ((modelica_real*)&((&(data->localData[0]->realVars[87]/* cc.lastAnswered[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
      real_array_copy_data(tmp25, tmp26);

      array_alloc_scalar_real_array(&tmp27, 2, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp28, ((modelica_real*)&((&(data->localData[0]->realVars[123]/* cc.setpointChangeTime[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
      real_array_copy_data(tmp27, tmp28);

      array_alloc_scalar_boolean_array(&tmp29, 2, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp30, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[52]/* cc.readsignal[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
      boolean_array_copy_data(tmp29, tmp30);

      array_alloc_scalar_boolean_array(&tmp31, 2, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp32, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[58]/* cc.writesignal[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
      boolean_array_copy_data(tmp31, tmp32);

      tmp36 = ((modelica_integer) 1); tmp37 = 1; tmp38 = ((modelica_integer) 2);
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
              (&(data->localData[0]->realVars[107]/* cc.msg_to_drone[1,1] DISCRETE */) )[(i - 1) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      tmp42 = ((modelica_integer) 1); tmp43 = 1; tmp44 = ((modelica_integer) 2);
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
              (&(data->localData[0]->realVars[117]/* cc.pos[1,1] DISCRETE */) )[(i - 1) * 3 + (j-1)] = 0.0;
            }
          }
        }
      }

      array_alloc_scalar_integer_array(&tmp45, 2, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp46, ((modelica_integer*)&((&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
      integer_array_copy_data(tmp45, tmp46);

      (data->localData[0]->integerVars[20]/* cc.state DISCRETE */)  = ((modelica_integer) 0);

      array_alloc_scalar_boolean_array(&tmp47, 2, (modelica_boolean)1, (modelica_boolean)1);
      boolean_array_create(&tmp48, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[25]/* cc.comm_done[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
      boolean_array_copy_data(tmp47, tmp48);

      array_alloc_scalar_boolean_array(&tmp49, 2, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp50, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[54]/* cc.setpointChanged[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
      boolean_array_copy_data(tmp49, tmp50);

      (data->localData[0]->booleanVars[29]/* cc.endSimulation DISCRETE */)  = 0;

      omc_setup__db(threadData);

      real_array_create(&tmp52, ((modelica_real*)&((&data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
      real_array_create(&tmp53, ((modelica_real*)&((&data->simulationInfo->realParameter[115]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
      real_array_create(&tmp54, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
      tmp51._stop_simulation = (data->simulationInfo->realParameter[133]/* cc.p.stop_simulation PARAM */) ;
      tmp51._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
      tmp51._msg_len = ((modelica_integer) 5);
      tmp51._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
      tmp51._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
      tmp51._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
      tmp51._monitor_start = (data->simulationInfo->realParameter[126]/* cc.p.monitor_start PARAM */) ;
      tmp51._nDrones = ((modelica_integer) 2);
      tmp51._cc_choice = (data->simulationInfo->realParameter[108]/* cc.p.cc_choice PARAM */) ;
      tmp51._p_worst = (data->simulationInfo->realParameter[129]/* cc.p.p_worst PARAM */) ;
      tmp51._p_recharge = (data->simulationInfo->realParameter[128]/* cc.p.p_recharge PARAM */) ;
      tmp51._comm_timeout = (data->simulationInfo->realParameter[110]/* cc.p.comm_timeout PARAM */) ;
      tmp51._p_comm_error = (data->simulationInfo->realParameter[127]/* cc.p.p_comm_error PARAM */) ;
      tmp51._arrival_timeout = (data->simulationInfo->realParameter[105]/* cc.p.arrival_timeout PARAM */) ;
      tmp51._dDistance = (data->simulationInfo->realParameter[111]/* cc.p.dDistance PARAM */) ;
      tmp51._arrivalThreshold = (data->simulationInfo->realParameter[104]/* cc.p.arrivalThreshold PARAM */) ;
      tmp51._flyZone = tmp52;
      tmp51._docking_bay = tmp53;
      tmp51._m = (data->simulationInfo->realParameter[122]/* cc.p.m PARAM */) ;
      tmp51._maxSpeed = (data->simulationInfo->realParameter[124]/* cc.p.maxSpeed PARAM */) ;
      tmp51._horizontalODD = (data->simulationInfo->realParameter[121]/* cc.p.horizontalODD PARAM */) ;
      tmp51._verticalODD = (data->simulationInfo->realParameter[135]/* cc.p.verticalODD PARAM */) ;
      tmp51._maxAngle = (data->simulationInfo->realParameter[123]/* cc.p.maxAngle PARAM */) ;
      tmp51._minDistanceFromObs = (data->simulationInfo->realParameter[125]/* cc.p.minDistanceFromObs PARAM */) ;
      tmp51._dangerRadius = (data->simulationInfo->realParameter[112]/* cc.p.dangerRadius PARAM */) ;
      tmp51._unita = (data->simulationInfo->realParameter[134]/* cc.p.unita PARAM */) ;
      tmp51._capacity = (data->simulationInfo->realParameter[107]/* cc.p.capacity PARAM */) ;
      tmp51._batteryDischarge = (data->simulationInfo->realParameter[106]/* cc.p.batteryDischarge PARAM */) ;
      tmp51._commDischarge = (data->simulationInfo->realParameter[109]/* cc.p.commDischarge PARAM */) ;
      tmp51._rechargeRate = (data->simulationInfo->realParameter[130]/* cc.p.rechargeRate PARAM */) ;
      tmp51._dangerousBatteryPercentage = (data->simulationInfo->realParameter[114]/* cc.p.dangerousBatteryPercentage PARAM */) ;
      tmp51._dangerousBatteryLevel = (data->simulationInfo->realParameter[113]/* cc.p.dangerousBatteryLevel PARAM */) ;
      tmp51._rechargedPercentage = (data->simulationInfo->realParameter[131]/* cc.p.rechargedPercentage PARAM */) ;
      tmp51._rechargedThreshold = (data->simulationInfo->realParameter[132]/* cc.p.rechargedThreshold PARAM */) ;
      tmp51._nAreas = ((modelica_integer) 16);
      tmp51._areas = tmp54;
      omc_setup__areas(threadData, tmp51);

      real_array_create(&tmp56, ((modelica_real*)&((&data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
      real_array_create(&tmp57, ((modelica_real*)&((&data->simulationInfo->realParameter[115]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
      real_array_create(&tmp58, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
      tmp55._stop_simulation = (data->simulationInfo->realParameter[133]/* cc.p.stop_simulation PARAM */) ;
      tmp55._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
      tmp55._msg_len = ((modelica_integer) 5);
      tmp55._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
      tmp55._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
      tmp55._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
      tmp55._monitor_start = (data->simulationInfo->realParameter[126]/* cc.p.monitor_start PARAM */) ;
      tmp55._nDrones = ((modelica_integer) 2);
      tmp55._cc_choice = (data->simulationInfo->realParameter[108]/* cc.p.cc_choice PARAM */) ;
      tmp55._p_worst = (data->simulationInfo->realParameter[129]/* cc.p.p_worst PARAM */) ;
      tmp55._p_recharge = (data->simulationInfo->realParameter[128]/* cc.p.p_recharge PARAM */) ;
      tmp55._comm_timeout = (data->simulationInfo->realParameter[110]/* cc.p.comm_timeout PARAM */) ;
      tmp55._p_comm_error = (data->simulationInfo->realParameter[127]/* cc.p.p_comm_error PARAM */) ;
      tmp55._arrival_timeout = (data->simulationInfo->realParameter[105]/* cc.p.arrival_timeout PARAM */) ;
      tmp55._dDistance = (data->simulationInfo->realParameter[111]/* cc.p.dDistance PARAM */) ;
      tmp55._arrivalThreshold = (data->simulationInfo->realParameter[104]/* cc.p.arrivalThreshold PARAM */) ;
      tmp55._flyZone = tmp56;
      tmp55._docking_bay = tmp57;
      tmp55._m = (data->simulationInfo->realParameter[122]/* cc.p.m PARAM */) ;
      tmp55._maxSpeed = (data->simulationInfo->realParameter[124]/* cc.p.maxSpeed PARAM */) ;
      tmp55._horizontalODD = (data->simulationInfo->realParameter[121]/* cc.p.horizontalODD PARAM */) ;
      tmp55._verticalODD = (data->simulationInfo->realParameter[135]/* cc.p.verticalODD PARAM */) ;
      tmp55._maxAngle = (data->simulationInfo->realParameter[123]/* cc.p.maxAngle PARAM */) ;
      tmp55._minDistanceFromObs = (data->simulationInfo->realParameter[125]/* cc.p.minDistanceFromObs PARAM */) ;
      tmp55._dangerRadius = (data->simulationInfo->realParameter[112]/* cc.p.dangerRadius PARAM */) ;
      tmp55._unita = (data->simulationInfo->realParameter[134]/* cc.p.unita PARAM */) ;
      tmp55._capacity = (data->simulationInfo->realParameter[107]/* cc.p.capacity PARAM */) ;
      tmp55._batteryDischarge = (data->simulationInfo->realParameter[106]/* cc.p.batteryDischarge PARAM */) ;
      tmp55._commDischarge = (data->simulationInfo->realParameter[109]/* cc.p.commDischarge PARAM */) ;
      tmp55._rechargeRate = (data->simulationInfo->realParameter[130]/* cc.p.rechargeRate PARAM */) ;
      tmp55._dangerousBatteryPercentage = (data->simulationInfo->realParameter[114]/* cc.p.dangerousBatteryPercentage PARAM */) ;
      tmp55._dangerousBatteryLevel = (data->simulationInfo->realParameter[113]/* cc.p.dangerousBatteryLevel PARAM */) ;
      tmp55._rechargedPercentage = (data->simulationInfo->realParameter[131]/* cc.p.rechargedPercentage PARAM */) ;
      tmp55._rechargedThreshold = (data->simulationInfo->realParameter[132]/* cc.p.rechargedThreshold PARAM */) ;
      tmp55._nAreas = ((modelica_integer) 16);
      tmp55._areas = tmp58;
      omc_setup__drones(threadData, tmp55);
    }
    else if(((data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[6]/* $whenCondition15 DISCRETE */)  /* edge */))
    {
      if(((data->simulationInfo->integerVarsPre[20]/* cc.state DISCRETE */)  == ((modelica_integer) 0)))
      {
        tmp60 = ((modelica_integer) 1); tmp61 = 1; tmp62 = ((modelica_integer) 2);
        if(!(((tmp61 > 0) && (tmp60 > tmp62)) || ((tmp61 < 0) && (tmp60 < tmp62))))
        {
          modelica_integer drone;
          for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp60, tmp62); drone += tmp61)
          {
            if((!(&(data->simulationInfo->booleanVarsPre[48]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
            {
              (&(data->localData[0]->realVars[107]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 1)-1)] = 1.0;

              (&(data->localData[0]->realVars[107]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 2)-1)] = 0.0;

              (&(data->localData[0]->realVars[107]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 3)-1)] = 0.0;

              (&(data->localData[0]->realVars[107]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 4)-1)] = 0.0;

              (&(data->localData[0]->booleanVars[25]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 0;
            }
            else
            {
              (&(data->localData[0]->booleanVars[25]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;
            }
          }
        }

        (data->localData[0]->integerVars[20]/* cc.state DISCRETE */)  = ((modelica_integer) 10);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[20]/* cc.state DISCRETE */)  == ((modelica_integer) 10)))
        {
          tmp64 = ((modelica_integer) 1); tmp65 = 1; tmp66 = ((modelica_integer) 2);
          if(!(((tmp65 > 0) && (tmp64 > tmp66)) || ((tmp65 < 0) && (tmp64 < tmp66))))
          {
            modelica_integer drone;
            for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp64, tmp66); drone += tmp65)
            {
              if(((!(&(data->simulationInfo->booleanVarsPre[48]/* cc.isDead[1] DISCRETE */) )[drone - 1]) && (!(&(data->simulationInfo->booleanVarsPre[25]/* cc.comm_done[1] DISCRETE */) )[drone - 1])))
              {
                (&(data->localData[0]->booleanVars[58]/* cc.writesignal[1] DISCRETE */) )[drone - 1] = omc_WriteToFIFO(threadData, (&(data->simulationInfo->integerVarsPre[1]/* cc.fifox[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[58]/* cc.writesignal[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[56]/* cc.spaceavailable[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1]);

                if(omc_FifoIODone(threadData, (&data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)[drone - 1] ))
                {
                  (&(data->localData[0]->booleanVars[25]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;

                  (&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1] = ((modelica_integer) 0);
                }
              }
            }
          }

          (data->localData[0]->integerVars[23]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

          tmp67 = ((modelica_integer) 1); tmp68 = 1; tmp69 = ((modelica_integer) 2);
          if(!(((tmp68 > 0) && (tmp67 > tmp69)) || ((tmp68 < 0) && (tmp67 < tmp69))))
          {
            modelica_integer drone;
            for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp67, tmp69); drone += tmp68)
            {
              if((!(&(data->simulationInfo->booleanVarsPre[48]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
              {
                if((!(&(data->simulationInfo->booleanVarsPre[25]/* cc.comm_done[1] DISCRETE */) )[drone - 1]))
                {
                  (data->localData[0]->integerVars[23]/* cc.z DISCRETE */)  = ((modelica_integer) 100);

                  break;
                }
              }
            }
          }

          if(((data->localData[0]->integerVars[23]/* cc.z DISCRETE */)  == ((modelica_integer) 0)))
          {
            (data->localData[0]->integerVars[20]/* cc.state DISCRETE */)  = ((modelica_integer) 15);

            array_alloc_scalar_boolean_array(&tmp71, 2, (modelica_boolean)0, (modelica_boolean)0);
            boolean_array_create(&tmp72, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[25]/* cc.comm_done[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
            boolean_array_copy_data(tmp71, tmp72);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[20]/* cc.state DISCRETE */)  == ((modelica_integer) 15)))
          {
            tmp81 = ((modelica_integer) 1); tmp82 = 1; tmp83 = ((modelica_integer) 2);
            if(!(((tmp82 > 0) && (tmp81 > tmp83)) || ((tmp82 < 0) && (tmp81 < tmp83))))
            {
              modelica_integer drone;
              for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp81, tmp83); drone += tmp82)
              {
                if(((!(&(data->simulationInfo->booleanVarsPre[48]/* cc.isDead[1] DISCRETE */) )[drone - 1]) && (!(&(data->simulationInfo->booleanVarsPre[25]/* cc.comm_done[1] DISCRETE */) )[drone - 1])))
                {
                  tmp74 = Greater(data->localData[0]->timeValue - (&(data->simulationInfo->realVarsPre[87]/* cc.lastAnswered[1] DISCRETE */) )[drone - 1],(data->simulationInfo->realParameter[1698]/* p.comm_timeout PARAM */) );
                  if(tmp74)
                  {
                    (&(data->localData[0]->booleanVars[25]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;

                    (&(data->localData[0]->booleanVars[48]/* cc.isDead[1] DISCRETE */) )[drone - 1] = 1;

                    (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[0]/* cc.aliveDrones DISCRETE */)  - ((modelica_integer) 1);

                    tmp76 = ((modelica_integer) 1); tmp77 = 1; tmp78 = ((modelica_integer) 16);
                    if(!(((tmp77 > 0) && (tmp76 > tmp78)) || ((tmp77 < 0) && (tmp76 < tmp78))))
                    {
                      modelica_integer area;
                      for(area = ((modelica_integer) 1); in_range_integer(area, tmp76, tmp78); area += tmp77)
                      {
                        if(((&(data->simulationInfo->integerVarsPre[3]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] == drone))
                        {
                          (&(data->localData[0]->integerVars[3]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);
                        }
                      }
                    }
                  }
                  else
                  {
                    tmp79 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[127]/* cc.p.p_comm_error PARAM */) );
                    if(tmp79)
                    {
                      (&(data->localData[0]->booleanVars[52]/* cc.readsignal[1] DISCRETE */) )[drone - 1] = omc_ReadFromFIFO(threadData, (&(data->simulationInfo->integerVarsPre[1]/* cc.fifox[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[27]/* cc.datavailable[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[52]/* cc.readsignal[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1]);

                      if(omc_FifoIODone(threadData, (&data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)[drone - 1] ))
                      {
                        (&(data->localData[0]->realVars[117]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 1)-1)] = (&(data->simulationInfo->realVarsPre[27]/* cc.msg_from_drone[1,1] variable */) )[(drone - 1) * 5 + (((modelica_integer) 2)-1)];

                        (&(data->localData[0]->realVars[117]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 2)-1)] = (&(data->simulationInfo->realVarsPre[27]/* cc.msg_from_drone[1,1] variable */) )[(drone - 1) * 5 + (((modelica_integer) 3)-1)];

                        (&(data->localData[0]->realVars[117]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 3)-1)] = (&(data->simulationInfo->realVarsPre[27]/* cc.msg_from_drone[1,1] variable */) )[(drone - 1) * 5 + (((modelica_integer) 4)-1)];

                        (&(data->localData[0]->realVars[82]/* cc.battery[1] DISCRETE */) )[drone - 1] = (&(data->simulationInfo->realVarsPre[27]/* cc.msg_from_drone[1,1] variable */) )[(drone - 1) * 5 + (((modelica_integer) 5)-1)];

                        tmp80 = Less(fabs((&data->localData[0]->realVars[82]/* cc.battery[1] DISCRETE */)[drone - 1]  - (data->simulationInfo->realParameter[107]/* cc.p.capacity PARAM */) ),0.1);
                        if(tmp80)
                        {
                          (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[0]/* cc.aliveDrones DISCRETE */)  - ((modelica_integer) 1);
                        }

                        (&(data->localData[0]->realVars[87]/* cc.lastAnswered[1] DISCRETE */) )[drone - 1] = data->localData[0]->timeValue;

                        (&(data->localData[0]->booleanVars[25]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;

                        (&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1] = ((modelica_integer) 0);
                      }
                    }
                  }
                }
              }
            }

            (data->localData[0]->integerVars[23]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

            tmp84 = ((modelica_integer) 1); tmp85 = 1; tmp86 = ((modelica_integer) 2);
            if(!(((tmp85 > 0) && (tmp84 > tmp86)) || ((tmp85 < 0) && (tmp84 < tmp86))))
            {
              modelica_integer drone;
              for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp84, tmp86); drone += tmp85)
              {
                if((!(&(data->simulationInfo->booleanVarsPre[48]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
                {
                  if((!(&(data->simulationInfo->booleanVarsPre[25]/* cc.comm_done[1] DISCRETE */) )[drone - 1]))
                  {
                    (data->localData[0]->integerVars[23]/* cc.z DISCRETE */)  = ((modelica_integer) 100);

                    break;
                  }
                }
              }
            }

            if(((data->localData[0]->integerVars[23]/* cc.z DISCRETE */)  == ((modelica_integer) 0)))
            {
              (data->localData[0]->integerVars[20]/* cc.state DISCRETE */)  = ((modelica_integer) 20);

              array_alloc_scalar_boolean_array(&tmp88, 2, (modelica_boolean)0, (modelica_boolean)0);
              boolean_array_create(&tmp89, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[25]/* cc.comm_done[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
              boolean_array_copy_data(tmp88, tmp89);
            }
          }
          else
          {
            if(((data->simulationInfo->integerVarsPre[20]/* cc.state DISCRETE */)  == ((modelica_integer) 20)))
            {
              tmp104 = ((modelica_integer) 1); tmp105 = 1; tmp106 = ((modelica_integer) 2);
              if(!(((tmp105 > 0) && (tmp104 > tmp106)) || ((tmp105 < 0) && (tmp104 < tmp106))))
              {
                modelica_integer drone;
                for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp104, tmp106); drone += tmp105)
                {
                  tmp91 = (&(data->simulationInfo->realVarsPre[117]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 1)-1)] - (&(data->simulationInfo->realVarsPre[125]/* cc.setx[1] DISCRETE */) )[drone - 1];
                  tmp92 = (&(data->simulationInfo->realVarsPre[117]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 2)-1)] - (&(data->simulationInfo->realVarsPre[127]/* cc.sety[1] DISCRETE */) )[drone - 1];
                  tmp93 = (&(data->simulationInfo->realVarsPre[117]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 3)-1)] - (&(data->simulationInfo->realVarsPre[129]/* cc.setz[1] DISCRETE */) )[drone - 1];
                  tmp94 = Less(sqrt((tmp91 * tmp91) + (tmp92 * tmp92) + (tmp93 * tmp93)),(data->simulationInfo->realParameter[1692]/* p.arrivalThreshold PARAM */) );
                  if(((&(data->simulationInfo->booleanVarsPre[46]/* cc.isBusy[1] DISCRETE */) )[drone - 1] && tmp94))
                  {
                    (&(data->localData[0]->booleanVars[46]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 0;

                    tmp96 = ((modelica_integer) 1); tmp97 = 1; tmp98 = ((modelica_integer) 16);
                    if(!(((tmp97 > 0) && (tmp96 > tmp98)) || ((tmp97 < 0) && (tmp96 < tmp98))))
                    {
                      modelica_integer area;
                      for(area = ((modelica_integer) 1); in_range_integer(area, tmp96, tmp98); area += tmp97)
                      {
                        if(((&(data->simulationInfo->integerVarsPre[3]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] == drone))
                        {
                          (&(data->localData[0]->integerVars[3]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);

                          (&(data->localData[0]->booleanVars[30]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1] = 1;

                          (&(data->localData[0]->realVars[89]/* cc.lastVisited[1] DISCRETE */) )[area - 1] = data->localData[0]->timeValue;

                          break;
                        }
                      }
                    }
                  }
                  else
                  {
                    if((&(data->simulationInfo->booleanVarsPre[46]/* cc.isBusy[1] DISCRETE */) )[drone - 1])
                    {
                      tmp99 = Greater(fabs(data->localData[0]->timeValue - (&(data->simulationInfo->realVarsPre[123]/* cc.setpointChangeTime[1] DISCRETE */) )[drone - 1]),(data->simulationInfo->realParameter[1693]/* p.arrival_timeout PARAM */) );
                      if(tmp99)
                      {
                        (&(data->localData[0]->booleanVars[46]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 0;

                        tmp101 = ((modelica_integer) 1); tmp102 = 1; tmp103 = ((modelica_integer) 16);
                        if(!(((tmp102 > 0) && (tmp101 > tmp103)) || ((tmp102 < 0) && (tmp101 < tmp103))))
                        {
                          modelica_integer area;
                          for(area = ((modelica_integer) 1); in_range_integer(area, tmp101, tmp103); area += tmp102)
                          {
                            if(((&(data->simulationInfo->integerVarsPre[3]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] == drone))
                            {
                              (&(data->localData[0]->integerVars[3]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }

              tmp108 = ((modelica_integer) 1); tmp109 = 1; tmp110 = ((modelica_integer) 2);
              if(!(((tmp109 > 0) && (tmp108 > tmp110)) || ((tmp109 < 0) && (tmp108 < tmp110))))
              {
                modelica_integer drone;
                for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp108, tmp110); drone += tmp109)
                {
                  if((!(&(data->simulationInfo->booleanVarsPre[48]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
                  {
                    real_array_create(&tmp107, ((modelica_real*)&((&(data->simulationInfo->realVarsPre[117]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 1)-1)])), 1, (_index_t)3);
                    omc_update__drone__pos(threadData, drone, data->localData[0]->timeValue, tmp107);
                  }
                }
              }

              tmp112 = ((modelica_integer) 1); tmp113 = 1; tmp114 = ((modelica_integer) 16);
              if(!(((tmp113 > 0) && (tmp112 > tmp114)) || ((tmp113 < 0) && (tmp112 < tmp114))))
              {
                modelica_integer area;
                for(area = ((modelica_integer) 1); in_range_integer(area, tmp112, tmp114); area += tmp113)
                {
                  tmp111 = Greater(omc_how__many__drones__in__area(threadData, area, (data->simulationInfo->realVarsPre[132]/* cc.time_span DISCRETE */) ),((modelica_integer) 0));
                  if(tmp111)
                  {
                    (&(data->localData[0]->booleanVars[30]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1] = 1;

                    (&(data->localData[0]->realVars[89]/* cc.lastVisited[1] DISCRETE */) )[area - 1] = data->localData[0]->timeValue;
                  }
                }
              }

              (data->localData[0]->realVars[86]/* cc.err DISCRETE */)  = 0.0;

              tmp115 = ((modelica_integer) 1); tmp116 = 1; tmp117 = ((modelica_integer) 16);
              if(!(((tmp116 > 0) && (tmp115 > tmp117)) || ((tmp116 < 0) && (tmp115 < tmp117))))
              {
                modelica_integer area;
                for(area = ((modelica_integer) 1); in_range_integer(area, tmp115, tmp117); area += tmp116)
                {
                  if((!(&(data->simulationInfo->booleanVarsPre[30]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1]))
                  {
                    (data->localData[0]->realVars[86]/* cc.err DISCRETE */)  = 100.0;

                    break;
                  }
                }
              }

              tmp118 = Less((data->simulationInfo->realVarsPre[86]/* cc.err DISCRETE */) ,1.0);
              if(tmp118)
              {
                (data->localData[0]->realVars[131]/* cc.time_passed_since_last_loop DISCRETE */)  = data->localData[0]->timeValue - (data->simulationInfo->realVarsPre[132]/* cc.time_span DISCRETE */) ;

                (data->localData[0]->realVars[132]/* cc.time_span DISCRETE */)  = data->localData[0]->timeValue;

                array_alloc_scalar_boolean_array(&tmp119, 16, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
                boolean_array_create(&tmp120, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[30]/* cc.hasBeenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
                boolean_array_copy_data(tmp119, tmp120);

                array_alloc_scalar_integer_array(&tmp121, 16, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
                integer_array_create(&tmp122, ((modelica_integer*)&((&(data->localData[0]->integerVars[3]/* cc.hasBeenSelected[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
                integer_array_copy_data(tmp121, tmp122);
              }

              tmp123 = LessEq((data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */) ,((modelica_integer) 0));
              if(tmp123)
              {
                omc_disconnect__from__db(threadData);

                (data->localData[0]->booleanVars[29]/* cc.endSimulation DISCRETE */)  = 1;
              }

              (data->localData[0]->integerVars[20]/* cc.state DISCRETE */)  = ((modelica_integer) 25);
            }
            else
            {
              if(((data->simulationInfo->integerVarsPre[20]/* cc.state DISCRETE */)  == ((modelica_integer) 25)))
              {
                tmp161 = ((modelica_integer) 1); tmp162 = 1; tmp163 = ((modelica_integer) 2);
                if(!(((tmp162 > 0) && (tmp161 > tmp163)) || ((tmp162 < 0) && (tmp161 < tmp163))))
                {
                  modelica_integer drone;
                  for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp161, tmp163); drone += tmp162)
                  {
                    (&(data->localData[0]->booleanVars[54]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 0;

                    real_array_create(&tmp125, ((modelica_real*)&((&data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                    tmp126 = max_real_array(tmp125);
                    (data->localData[0]->realVars[106]/* cc.min_distance DISCRETE */)  = tmp126;

                    (data->localData[0]->realVars[133]/* cc.tmp_distance DISCRETE */)  = 0.0;

                    (data->localData[0]->integerVars[21]/* cc.tmp_area_1 DISCRETE */)  = ((modelica_integer) 0);

                    (data->localData[0]->integerVars[22]/* cc.tmp_area_2 DISCRETE */)  = ((modelica_integer) 0);

                    (data->localData[0]->realVars[84]/* cc.choice_value_1 DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[85]/* cc.choice_value_2 DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[79]/* cc.area_x DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[80]/* cc.area_y DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[81]/* cc.area_z DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[105]/* cc.max_time DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[134]/* cc.tmp_time DISCRETE */)  = 0.0;

                    if(((!(&(data->simulationInfo->booleanVarsPre[46]/* cc.isBusy[1] DISCRETE */) )[drone - 1]) && (!(&(data->simulationInfo->booleanVarsPre[48]/* cc.isDead[1] DISCRETE */) )[drone - 1])))
                    {
                      tmp137 = ((modelica_integer) 1); tmp138 = 1; tmp139 = ((modelica_integer) 16);
                      if(!(((tmp138 > 0) && (tmp137 > tmp139)) || ((tmp138 < 0) && (tmp137 < tmp139))))
                      {
                        modelica_integer area;
                        for(area = ((modelica_integer) 1); in_range_integer(area, tmp137, tmp139); area += tmp138)
                        {
                          if(((!(&(data->simulationInfo->booleanVarsPre[30]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1]) && ((&(data->simulationInfo->integerVarsPre[3]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] == ((modelica_integer) 0))))
                          {
                            real_array_create(&tmp129, ((modelica_real*)&((&data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp130, ((modelica_real*)&((&data->simulationInfo->realParameter[115]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp131, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
                            tmp128._stop_simulation = (data->simulationInfo->realParameter[133]/* cc.p.stop_simulation PARAM */) ;
                            tmp128._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
                            tmp128._msg_len = ((modelica_integer) 5);
                            tmp128._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
                            tmp128._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
                            tmp128._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
                            tmp128._monitor_start = (data->simulationInfo->realParameter[126]/* cc.p.monitor_start PARAM */) ;
                            tmp128._nDrones = ((modelica_integer) 2);
                            tmp128._cc_choice = (data->simulationInfo->realParameter[108]/* cc.p.cc_choice PARAM */) ;
                            tmp128._p_worst = (data->simulationInfo->realParameter[129]/* cc.p.p_worst PARAM */) ;
                            tmp128._p_recharge = (data->simulationInfo->realParameter[128]/* cc.p.p_recharge PARAM */) ;
                            tmp128._comm_timeout = (data->simulationInfo->realParameter[110]/* cc.p.comm_timeout PARAM */) ;
                            tmp128._p_comm_error = (data->simulationInfo->realParameter[127]/* cc.p.p_comm_error PARAM */) ;
                            tmp128._arrival_timeout = (data->simulationInfo->realParameter[105]/* cc.p.arrival_timeout PARAM */) ;
                            tmp128._dDistance = (data->simulationInfo->realParameter[111]/* cc.p.dDistance PARAM */) ;
                            tmp128._arrivalThreshold = (data->simulationInfo->realParameter[104]/* cc.p.arrivalThreshold PARAM */) ;
                            tmp128._flyZone = tmp129;
                            tmp128._docking_bay = tmp130;
                            tmp128._m = (data->simulationInfo->realParameter[122]/* cc.p.m PARAM */) ;
                            tmp128._maxSpeed = (data->simulationInfo->realParameter[124]/* cc.p.maxSpeed PARAM */) ;
                            tmp128._horizontalODD = (data->simulationInfo->realParameter[121]/* cc.p.horizontalODD PARAM */) ;
                            tmp128._verticalODD = (data->simulationInfo->realParameter[135]/* cc.p.verticalODD PARAM */) ;
                            tmp128._maxAngle = (data->simulationInfo->realParameter[123]/* cc.p.maxAngle PARAM */) ;
                            tmp128._minDistanceFromObs = (data->simulationInfo->realParameter[125]/* cc.p.minDistanceFromObs PARAM */) ;
                            tmp128._dangerRadius = (data->simulationInfo->realParameter[112]/* cc.p.dangerRadius PARAM */) ;
                            tmp128._unita = (data->simulationInfo->realParameter[134]/* cc.p.unita PARAM */) ;
                            tmp128._capacity = (data->simulationInfo->realParameter[107]/* cc.p.capacity PARAM */) ;
                            tmp128._batteryDischarge = (data->simulationInfo->realParameter[106]/* cc.p.batteryDischarge PARAM */) ;
                            tmp128._commDischarge = (data->simulationInfo->realParameter[109]/* cc.p.commDischarge PARAM */) ;
                            tmp128._rechargeRate = (data->simulationInfo->realParameter[130]/* cc.p.rechargeRate PARAM */) ;
                            tmp128._dangerousBatteryPercentage = (data->simulationInfo->realParameter[114]/* cc.p.dangerousBatteryPercentage PARAM */) ;
                            tmp128._dangerousBatteryLevel = (data->simulationInfo->realParameter[113]/* cc.p.dangerousBatteryLevel PARAM */) ;
                            tmp128._rechargedPercentage = (data->simulationInfo->realParameter[131]/* cc.p.rechargedPercentage PARAM */) ;
                            tmp128._rechargedThreshold = (data->simulationInfo->realParameter[132]/* cc.p.rechargedThreshold PARAM */) ;
                            tmp128._nAreas = ((modelica_integer) 16);
                            tmp128._areas = tmp131;
                            (data->localData[0]->realVars[79]/* cc.area_x DISCRETE */)  = omc_areaCenter(threadData, tmp128, area ,&(data->localData[0]->realVars[80]/* cc.area_y DISCRETE */)  ,&(data->localData[0]->realVars[81]/* cc.area_z DISCRETE */) );

                            tmp132 = (&(data->simulationInfo->realVarsPre[117]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 1)-1)] - (data->localData[0]->realVars[79]/* cc.area_x DISCRETE */) ;
                            tmp133 = (&(data->simulationInfo->realVarsPre[117]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 2)-1)] - (data->localData[0]->realVars[80]/* cc.area_y DISCRETE */) ;
                            tmp134 = (&(data->simulationInfo->realVarsPre[117]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 3)-1)] - (data->localData[0]->realVars[81]/* cc.area_z DISCRETE */) ;
                            (data->localData[0]->realVars[133]/* cc.tmp_distance DISCRETE */)  = sqrt((tmp132 * tmp132) + (tmp133 * tmp133) + (tmp134 * tmp134));

                            tmp135 = Less((data->localData[0]->realVars[133]/* cc.tmp_distance DISCRETE */) ,(data->localData[0]->realVars[106]/* cc.min_distance DISCRETE */) );
                            if(tmp135)
                            {
                              (data->localData[0]->realVars[106]/* cc.min_distance DISCRETE */)  = (data->localData[0]->realVars[133]/* cc.tmp_distance DISCRETE */) ;

                              (data->localData[0]->integerVars[21]/* cc.tmp_area_1 DISCRETE */)  = area;
                            }

                            (data->localData[0]->realVars[134]/* cc.tmp_time DISCRETE */)  = data->localData[0]->timeValue - (&(data->simulationInfo->realVarsPre[89]/* cc.lastVisited[1] DISCRETE */) )[area - 1];

                            tmp136 = Greater((data->localData[0]->realVars[134]/* cc.tmp_time DISCRETE */) ,(data->localData[0]->realVars[105]/* cc.max_time DISCRETE */) );
                            if(tmp136)
                            {
                              (data->localData[0]->realVars[105]/* cc.max_time DISCRETE */)  = (data->localData[0]->realVars[134]/* cc.tmp_time DISCRETE */) ;

                              (data->localData[0]->integerVars[22]/* cc.tmp_area_2 DISCRETE */)  = area;
                            }
                          }
                        }
                      }

                      if(((!((data->localData[0]->integerVars[21]/* cc.tmp_area_1 DISCRETE */)  == ((modelica_integer) 0))) && (!((data->localData[0]->integerVars[22]/* cc.tmp_area_2 DISCRETE */)  == ((modelica_integer) 0)))))
                      {
                        (data->localData[0]->realVars[84]/* cc.choice_value_1 DISCRETE */)  = ((data->localData[0]->realVars[106]/* cc.min_distance DISCRETE */) ) * ((data->simulationInfo->realParameter[1696]/* p.cc_choice PARAM */) );

                        (data->localData[0]->realVars[85]/* cc.choice_value_2 DISCRETE */)  = ((data->localData[0]->realVars[105]/* cc.max_time DISCRETE */) ) * (1.0 - (data->simulationInfo->realParameter[1696]/* p.cc_choice PARAM */) );

                        (&(data->localData[0]->booleanVars[54]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                        (&(data->localData[0]->realVars[123]/* cc.setpointChangeTime[1] DISCRETE */) )[drone - 1] = data->localData[0]->timeValue;

                        (&(data->localData[0]->booleanVars[46]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                        tmp142 = Greater((data->localData[0]->realVars[84]/* cc.choice_value_1 DISCRETE */) ,(data->localData[0]->realVars[85]/* cc.choice_value_2 DISCRETE */) );
                        if(tmp142)
                        {
                          tmp143 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[1717]/* p.p_worst PARAM */) );
                          if(tmp143)
                          {
                            real_array_create(&tmp145, ((modelica_real*)&((&data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp146, ((modelica_real*)&((&data->simulationInfo->realParameter[115]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp147, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
                            tmp144._stop_simulation = (data->simulationInfo->realParameter[133]/* cc.p.stop_simulation PARAM */) ;
                            tmp144._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
                            tmp144._msg_len = ((modelica_integer) 5);
                            tmp144._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
                            tmp144._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
                            tmp144._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
                            tmp144._monitor_start = (data->simulationInfo->realParameter[126]/* cc.p.monitor_start PARAM */) ;
                            tmp144._nDrones = ((modelica_integer) 2);
                            tmp144._cc_choice = (data->simulationInfo->realParameter[108]/* cc.p.cc_choice PARAM */) ;
                            tmp144._p_worst = (data->simulationInfo->realParameter[129]/* cc.p.p_worst PARAM */) ;
                            tmp144._p_recharge = (data->simulationInfo->realParameter[128]/* cc.p.p_recharge PARAM */) ;
                            tmp144._comm_timeout = (data->simulationInfo->realParameter[110]/* cc.p.comm_timeout PARAM */) ;
                            tmp144._p_comm_error = (data->simulationInfo->realParameter[127]/* cc.p.p_comm_error PARAM */) ;
                            tmp144._arrival_timeout = (data->simulationInfo->realParameter[105]/* cc.p.arrival_timeout PARAM */) ;
                            tmp144._dDistance = (data->simulationInfo->realParameter[111]/* cc.p.dDistance PARAM */) ;
                            tmp144._arrivalThreshold = (data->simulationInfo->realParameter[104]/* cc.p.arrivalThreshold PARAM */) ;
                            tmp144._flyZone = tmp145;
                            tmp144._docking_bay = tmp146;
                            tmp144._m = (data->simulationInfo->realParameter[122]/* cc.p.m PARAM */) ;
                            tmp144._maxSpeed = (data->simulationInfo->realParameter[124]/* cc.p.maxSpeed PARAM */) ;
                            tmp144._horizontalODD = (data->simulationInfo->realParameter[121]/* cc.p.horizontalODD PARAM */) ;
                            tmp144._verticalODD = (data->simulationInfo->realParameter[135]/* cc.p.verticalODD PARAM */) ;
                            tmp144._maxAngle = (data->simulationInfo->realParameter[123]/* cc.p.maxAngle PARAM */) ;
                            tmp144._minDistanceFromObs = (data->simulationInfo->realParameter[125]/* cc.p.minDistanceFromObs PARAM */) ;
                            tmp144._dangerRadius = (data->simulationInfo->realParameter[112]/* cc.p.dangerRadius PARAM */) ;
                            tmp144._unita = (data->simulationInfo->realParameter[134]/* cc.p.unita PARAM */) ;
                            tmp144._capacity = (data->simulationInfo->realParameter[107]/* cc.p.capacity PARAM */) ;
                            tmp144._batteryDischarge = (data->simulationInfo->realParameter[106]/* cc.p.batteryDischarge PARAM */) ;
                            tmp144._commDischarge = (data->simulationInfo->realParameter[109]/* cc.p.commDischarge PARAM */) ;
                            tmp144._rechargeRate = (data->simulationInfo->realParameter[130]/* cc.p.rechargeRate PARAM */) ;
                            tmp144._dangerousBatteryPercentage = (data->simulationInfo->realParameter[114]/* cc.p.dangerousBatteryPercentage PARAM */) ;
                            tmp144._dangerousBatteryLevel = (data->simulationInfo->realParameter[113]/* cc.p.dangerousBatteryLevel PARAM */) ;
                            tmp144._rechargedPercentage = (data->simulationInfo->realParameter[131]/* cc.p.rechargedPercentage PARAM */) ;
                            tmp144._rechargedThreshold = (data->simulationInfo->realParameter[132]/* cc.p.rechargedThreshold PARAM */) ;
                            tmp144._nAreas = ((modelica_integer) 16);
                            tmp144._areas = tmp147;
                            (&(data->localData[0]->realVars[125]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp144, (data->localData[0]->integerVars[21]/* cc.tmp_area_1 DISCRETE */)  ,&(&(data->localData[0]->realVars[127]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[129]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                            (&(data->localData[0]->integerVars[3]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[21]/* cc.tmp_area_1 DISCRETE */)  - 1] = drone;
                          }
                          else
                          {
                            real_array_create(&tmp149, ((modelica_real*)&((&data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp150, ((modelica_real*)&((&data->simulationInfo->realParameter[115]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp151, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
                            tmp148._stop_simulation = (data->simulationInfo->realParameter[133]/* cc.p.stop_simulation PARAM */) ;
                            tmp148._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
                            tmp148._msg_len = ((modelica_integer) 5);
                            tmp148._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
                            tmp148._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
                            tmp148._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
                            tmp148._monitor_start = (data->simulationInfo->realParameter[126]/* cc.p.monitor_start PARAM */) ;
                            tmp148._nDrones = ((modelica_integer) 2);
                            tmp148._cc_choice = (data->simulationInfo->realParameter[108]/* cc.p.cc_choice PARAM */) ;
                            tmp148._p_worst = (data->simulationInfo->realParameter[129]/* cc.p.p_worst PARAM */) ;
                            tmp148._p_recharge = (data->simulationInfo->realParameter[128]/* cc.p.p_recharge PARAM */) ;
                            tmp148._comm_timeout = (data->simulationInfo->realParameter[110]/* cc.p.comm_timeout PARAM */) ;
                            tmp148._p_comm_error = (data->simulationInfo->realParameter[127]/* cc.p.p_comm_error PARAM */) ;
                            tmp148._arrival_timeout = (data->simulationInfo->realParameter[105]/* cc.p.arrival_timeout PARAM */) ;
                            tmp148._dDistance = (data->simulationInfo->realParameter[111]/* cc.p.dDistance PARAM */) ;
                            tmp148._arrivalThreshold = (data->simulationInfo->realParameter[104]/* cc.p.arrivalThreshold PARAM */) ;
                            tmp148._flyZone = tmp149;
                            tmp148._docking_bay = tmp150;
                            tmp148._m = (data->simulationInfo->realParameter[122]/* cc.p.m PARAM */) ;
                            tmp148._maxSpeed = (data->simulationInfo->realParameter[124]/* cc.p.maxSpeed PARAM */) ;
                            tmp148._horizontalODD = (data->simulationInfo->realParameter[121]/* cc.p.horizontalODD PARAM */) ;
                            tmp148._verticalODD = (data->simulationInfo->realParameter[135]/* cc.p.verticalODD PARAM */) ;
                            tmp148._maxAngle = (data->simulationInfo->realParameter[123]/* cc.p.maxAngle PARAM */) ;
                            tmp148._minDistanceFromObs = (data->simulationInfo->realParameter[125]/* cc.p.minDistanceFromObs PARAM */) ;
                            tmp148._dangerRadius = (data->simulationInfo->realParameter[112]/* cc.p.dangerRadius PARAM */) ;
                            tmp148._unita = (data->simulationInfo->realParameter[134]/* cc.p.unita PARAM */) ;
                            tmp148._capacity = (data->simulationInfo->realParameter[107]/* cc.p.capacity PARAM */) ;
                            tmp148._batteryDischarge = (data->simulationInfo->realParameter[106]/* cc.p.batteryDischarge PARAM */) ;
                            tmp148._commDischarge = (data->simulationInfo->realParameter[109]/* cc.p.commDischarge PARAM */) ;
                            tmp148._rechargeRate = (data->simulationInfo->realParameter[130]/* cc.p.rechargeRate PARAM */) ;
                            tmp148._dangerousBatteryPercentage = (data->simulationInfo->realParameter[114]/* cc.p.dangerousBatteryPercentage PARAM */) ;
                            tmp148._dangerousBatteryLevel = (data->simulationInfo->realParameter[113]/* cc.p.dangerousBatteryLevel PARAM */) ;
                            tmp148._rechargedPercentage = (data->simulationInfo->realParameter[131]/* cc.p.rechargedPercentage PARAM */) ;
                            tmp148._rechargedThreshold = (data->simulationInfo->realParameter[132]/* cc.p.rechargedThreshold PARAM */) ;
                            tmp148._nAreas = ((modelica_integer) 16);
                            tmp148._areas = tmp151;
                            (&(data->localData[0]->realVars[125]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp148, (data->localData[0]->integerVars[22]/* cc.tmp_area_2 DISCRETE */)  ,&(&(data->localData[0]->realVars[127]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[129]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                            (&(data->localData[0]->integerVars[3]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[22]/* cc.tmp_area_2 DISCRETE */)  - 1] = drone;
                          }
                        }
                        else
                        {
                          tmp152 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[1717]/* p.p_worst PARAM */) );
                          if(tmp152)
                          {
                            real_array_create(&tmp154, ((modelica_real*)&((&data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp155, ((modelica_real*)&((&data->simulationInfo->realParameter[115]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp156, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
                            tmp153._stop_simulation = (data->simulationInfo->realParameter[133]/* cc.p.stop_simulation PARAM */) ;
                            tmp153._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
                            tmp153._msg_len = ((modelica_integer) 5);
                            tmp153._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
                            tmp153._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
                            tmp153._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
                            tmp153._monitor_start = (data->simulationInfo->realParameter[126]/* cc.p.monitor_start PARAM */) ;
                            tmp153._nDrones = ((modelica_integer) 2);
                            tmp153._cc_choice = (data->simulationInfo->realParameter[108]/* cc.p.cc_choice PARAM */) ;
                            tmp153._p_worst = (data->simulationInfo->realParameter[129]/* cc.p.p_worst PARAM */) ;
                            tmp153._p_recharge = (data->simulationInfo->realParameter[128]/* cc.p.p_recharge PARAM */) ;
                            tmp153._comm_timeout = (data->simulationInfo->realParameter[110]/* cc.p.comm_timeout PARAM */) ;
                            tmp153._p_comm_error = (data->simulationInfo->realParameter[127]/* cc.p.p_comm_error PARAM */) ;
                            tmp153._arrival_timeout = (data->simulationInfo->realParameter[105]/* cc.p.arrival_timeout PARAM */) ;
                            tmp153._dDistance = (data->simulationInfo->realParameter[111]/* cc.p.dDistance PARAM */) ;
                            tmp153._arrivalThreshold = (data->simulationInfo->realParameter[104]/* cc.p.arrivalThreshold PARAM */) ;
                            tmp153._flyZone = tmp154;
                            tmp153._docking_bay = tmp155;
                            tmp153._m = (data->simulationInfo->realParameter[122]/* cc.p.m PARAM */) ;
                            tmp153._maxSpeed = (data->simulationInfo->realParameter[124]/* cc.p.maxSpeed PARAM */) ;
                            tmp153._horizontalODD = (data->simulationInfo->realParameter[121]/* cc.p.horizontalODD PARAM */) ;
                            tmp153._verticalODD = (data->simulationInfo->realParameter[135]/* cc.p.verticalODD PARAM */) ;
                            tmp153._maxAngle = (data->simulationInfo->realParameter[123]/* cc.p.maxAngle PARAM */) ;
                            tmp153._minDistanceFromObs = (data->simulationInfo->realParameter[125]/* cc.p.minDistanceFromObs PARAM */) ;
                            tmp153._dangerRadius = (data->simulationInfo->realParameter[112]/* cc.p.dangerRadius PARAM */) ;
                            tmp153._unita = (data->simulationInfo->realParameter[134]/* cc.p.unita PARAM */) ;
                            tmp153._capacity = (data->simulationInfo->realParameter[107]/* cc.p.capacity PARAM */) ;
                            tmp153._batteryDischarge = (data->simulationInfo->realParameter[106]/* cc.p.batteryDischarge PARAM */) ;
                            tmp153._commDischarge = (data->simulationInfo->realParameter[109]/* cc.p.commDischarge PARAM */) ;
                            tmp153._rechargeRate = (data->simulationInfo->realParameter[130]/* cc.p.rechargeRate PARAM */) ;
                            tmp153._dangerousBatteryPercentage = (data->simulationInfo->realParameter[114]/* cc.p.dangerousBatteryPercentage PARAM */) ;
                            tmp153._dangerousBatteryLevel = (data->simulationInfo->realParameter[113]/* cc.p.dangerousBatteryLevel PARAM */) ;
                            tmp153._rechargedPercentage = (data->simulationInfo->realParameter[131]/* cc.p.rechargedPercentage PARAM */) ;
                            tmp153._rechargedThreshold = (data->simulationInfo->realParameter[132]/* cc.p.rechargedThreshold PARAM */) ;
                            tmp153._nAreas = ((modelica_integer) 16);
                            tmp153._areas = tmp156;
                            (&(data->localData[0]->realVars[125]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp153, (data->localData[0]->integerVars[22]/* cc.tmp_area_2 DISCRETE */)  ,&(&(data->localData[0]->realVars[127]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[129]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                            (&(data->localData[0]->integerVars[3]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[22]/* cc.tmp_area_2 DISCRETE */)  - 1] = drone;
                          }
                          else
                          {
                            real_array_create(&tmp158, ((modelica_real*)&((&data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp159, ((modelica_real*)&((&data->simulationInfo->realParameter[115]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                            real_array_create(&tmp160, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
                            tmp157._stop_simulation = (data->simulationInfo->realParameter[133]/* cc.p.stop_simulation PARAM */) ;
                            tmp157._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
                            tmp157._msg_len = ((modelica_integer) 5);
                            tmp157._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
                            tmp157._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
                            tmp157._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
                            tmp157._monitor_start = (data->simulationInfo->realParameter[126]/* cc.p.monitor_start PARAM */) ;
                            tmp157._nDrones = ((modelica_integer) 2);
                            tmp157._cc_choice = (data->simulationInfo->realParameter[108]/* cc.p.cc_choice PARAM */) ;
                            tmp157._p_worst = (data->simulationInfo->realParameter[129]/* cc.p.p_worst PARAM */) ;
                            tmp157._p_recharge = (data->simulationInfo->realParameter[128]/* cc.p.p_recharge PARAM */) ;
                            tmp157._comm_timeout = (data->simulationInfo->realParameter[110]/* cc.p.comm_timeout PARAM */) ;
                            tmp157._p_comm_error = (data->simulationInfo->realParameter[127]/* cc.p.p_comm_error PARAM */) ;
                            tmp157._arrival_timeout = (data->simulationInfo->realParameter[105]/* cc.p.arrival_timeout PARAM */) ;
                            tmp157._dDistance = (data->simulationInfo->realParameter[111]/* cc.p.dDistance PARAM */) ;
                            tmp157._arrivalThreshold = (data->simulationInfo->realParameter[104]/* cc.p.arrivalThreshold PARAM */) ;
                            tmp157._flyZone = tmp158;
                            tmp157._docking_bay = tmp159;
                            tmp157._m = (data->simulationInfo->realParameter[122]/* cc.p.m PARAM */) ;
                            tmp157._maxSpeed = (data->simulationInfo->realParameter[124]/* cc.p.maxSpeed PARAM */) ;
                            tmp157._horizontalODD = (data->simulationInfo->realParameter[121]/* cc.p.horizontalODD PARAM */) ;
                            tmp157._verticalODD = (data->simulationInfo->realParameter[135]/* cc.p.verticalODD PARAM */) ;
                            tmp157._maxAngle = (data->simulationInfo->realParameter[123]/* cc.p.maxAngle PARAM */) ;
                            tmp157._minDistanceFromObs = (data->simulationInfo->realParameter[125]/* cc.p.minDistanceFromObs PARAM */) ;
                            tmp157._dangerRadius = (data->simulationInfo->realParameter[112]/* cc.p.dangerRadius PARAM */) ;
                            tmp157._unita = (data->simulationInfo->realParameter[134]/* cc.p.unita PARAM */) ;
                            tmp157._capacity = (data->simulationInfo->realParameter[107]/* cc.p.capacity PARAM */) ;
                            tmp157._batteryDischarge = (data->simulationInfo->realParameter[106]/* cc.p.batteryDischarge PARAM */) ;
                            tmp157._commDischarge = (data->simulationInfo->realParameter[109]/* cc.p.commDischarge PARAM */) ;
                            tmp157._rechargeRate = (data->simulationInfo->realParameter[130]/* cc.p.rechargeRate PARAM */) ;
                            tmp157._dangerousBatteryPercentage = (data->simulationInfo->realParameter[114]/* cc.p.dangerousBatteryPercentage PARAM */) ;
                            tmp157._dangerousBatteryLevel = (data->simulationInfo->realParameter[113]/* cc.p.dangerousBatteryLevel PARAM */) ;
                            tmp157._rechargedPercentage = (data->simulationInfo->realParameter[131]/* cc.p.rechargedPercentage PARAM */) ;
                            tmp157._rechargedThreshold = (data->simulationInfo->realParameter[132]/* cc.p.rechargedThreshold PARAM */) ;
                            tmp157._nAreas = ((modelica_integer) 16);
                            tmp157._areas = tmp160;
                            (&(data->localData[0]->realVars[125]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp157, (data->localData[0]->integerVars[21]/* cc.tmp_area_1 DISCRETE */)  ,&(&(data->localData[0]->realVars[127]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[129]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                            (&(data->localData[0]->integerVars[3]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[21]/* cc.tmp_area_1 DISCRETE */)  - 1] = drone;
                          }
                        }
                      }
                      else
                      {
                        (&(data->localData[0]->booleanVars[54]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                        (&(data->localData[0]->realVars[123]/* cc.setpointChangeTime[1] DISCRETE */) )[drone - 1] = data->localData[0]->timeValue;

                        (&(data->localData[0]->booleanVars[46]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                        (&(data->localData[0]->realVars[125]/* cc.setx[1] DISCRETE */) )[drone - 1] = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) );

                        (&(data->localData[0]->realVars[127]/* cc.sety[1] DISCRETE */) )[drone - 1] = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) );

                        (&(data->localData[0]->realVars[129]/* cc.setz[1] DISCRETE */) )[drone - 1] = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) );
                      }
                    }
                  }
                }

                tmp169 = ((modelica_integer) 1); tmp170 = 1; tmp171 = ((modelica_integer) 2);
                if(!(((tmp170 > 0) && (tmp169 > tmp171)) || ((tmp170 < 0) && (tmp169 < tmp171))))
                {
                  modelica_integer drone;
                  for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp169, tmp171); drone += tmp170)
                  {
                    if((!(&(data->simulationInfo->booleanVarsPre[48]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
                    {
                      if((&(data->simulationInfo->booleanVarsPre[50]/* cc.isRecharging[1] DISCRETE */) )[drone - 1])
                      {
                        tmp164 = Greater((&data->localData[0]->realVars[82]/* cc.battery[1] DISCRETE */)[drone - 1] ,(data->simulationInfo->realParameter[132]/* cc.p.rechargedThreshold PARAM */) );
                        if(tmp164)
                        {
                          (&(data->localData[0]->booleanVars[50]/* cc.isRecharging[1] DISCRETE */) )[drone - 1] = 0;

                          (data->localData[0]->integerVars[19]/* cc.rechargingDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[19]/* cc.rechargingDrones DISCRETE */)  - ((modelica_integer) 1);
                        }
                        else
                        {
                          tmp165 = Less((&data->localData[0]->realVars[82]/* cc.battery[1] DISCRETE */)[drone - 1] ,(data->simulationInfo->realParameter[132]/* cc.p.rechargedThreshold PARAM */) );
                          if(tmp165)
                          {
                            (&(data->localData[0]->booleanVars[50]/* cc.isRecharging[1] DISCRETE */) )[drone - 1] = 1;

                            (&(data->localData[0]->realVars[125]/* cc.setx[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[115]/* cc.p.docking_bay[1] PARAM */) ;

                            (&(data->localData[0]->realVars[127]/* cc.sety[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[116]/* cc.p.docking_bay[2] PARAM */) ;

                            (&(data->localData[0]->realVars[129]/* cc.setz[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[117]/* cc.p.docking_bay[3] PARAM */) ;
                          }
                        }
                      }
                      else
                      {
                        tmp166 = Less((&data->localData[0]->realVars[82]/* cc.battery[1] DISCRETE */)[drone - 1] ,(data->simulationInfo->realParameter[113]/* cc.p.dangerousBatteryLevel PARAM */) );
                        if(tmp166)
                        {
                          (data->localData[0]->integerVars[19]/* cc.rechargingDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[19]/* cc.rechargingDrones DISCRETE */)  + ((modelica_integer) 1);

                          (&(data->localData[0]->booleanVars[50]/* cc.isRecharging[1] DISCRETE */) )[drone - 1] = 1;

                          (&(data->localData[0]->booleanVars[54]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                          (&(data->localData[0]->booleanVars[46]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                          (&(data->localData[0]->realVars[125]/* cc.setx[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[115]/* cc.p.docking_bay[1] PARAM */) ;

                          (&(data->localData[0]->realVars[127]/* cc.sety[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[116]/* cc.p.docking_bay[2] PARAM */) ;

                          (&(data->localData[0]->realVars[129]/* cc.setz[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[117]/* cc.p.docking_bay[3] PARAM */) ;
                        }
                        else
                        {
                          tmp167 = Less(((modelica_real)(data->simulationInfo->integerVarsPre[19]/* cc.rechargingDrones DISCRETE */) ),1.2);
                          if(tmp167)
                          {
                            tmp168 = Less(omc_myrandom(threadData),((data->simulationInfo->realParameter[1716]/* p.p_recharge PARAM */) ) * (1.0 - (DIVISION_SIM((&data->localData[0]->realVars[82]/* cc.battery[1] DISCRETE */)[drone - 1] ,(data->simulationInfo->realParameter[107]/* cc.p.capacity PARAM */) ,"cc.p.capacity",equationIndexes))));
                            if(tmp168)
                            {
                              (&(data->localData[0]->booleanVars[50]/* cc.isRecharging[1] DISCRETE */) )[drone - 1] = 1;

                              (data->localData[0]->integerVars[19]/* cc.rechargingDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[19]/* cc.rechargingDrones DISCRETE */)  + ((modelica_integer) 1);

                              (&(data->localData[0]->booleanVars[54]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                              (&(data->localData[0]->booleanVars[46]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                              (&(data->localData[0]->realVars[125]/* cc.setx[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[115]/* cc.p.docking_bay[1] PARAM */) ;

                              (&(data->localData[0]->realVars[127]/* cc.sety[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[116]/* cc.p.docking_bay[2] PARAM */) ;

                              (&(data->localData[0]->realVars[129]/* cc.setz[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[117]/* cc.p.docking_bay[3] PARAM */) ;
                            }
                          }
                        }
                      }
                    }
                  }
                }

                tmp172 = ((modelica_integer) 1); tmp173 = 1; tmp174 = ((modelica_integer) 2);
                if(!(((tmp173 > 0) && (tmp172 > tmp174)) || ((tmp173 < 0) && (tmp172 < tmp174))))
                {
                  modelica_integer drone;
                  for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp172, tmp174); drone += tmp173)
                  {
                    if((&(data->simulationInfo->booleanVarsPre[54]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1])
                    {
                      (data->localData[0]->integerVars[20]/* cc.state DISCRETE */)  = ((modelica_integer) 30);

                      break;
                    }
                    else
                    {
                      (data->localData[0]->integerVars[20]/* cc.state DISCRETE */)  = ((modelica_integer) 0);
                    }
                  }
                }
              }
              else
              {
                if(((data->simulationInfo->integerVarsPre[20]/* cc.state DISCRETE */)  == ((modelica_integer) 30)))
                {
                  tmp176 = ((modelica_integer) 1); tmp177 = 1; tmp178 = ((modelica_integer) 2);
                  if(!(((tmp177 > 0) && (tmp176 > tmp178)) || ((tmp177 < 0) && (tmp176 < tmp178))))
                  {
                    modelica_integer drone;
                    for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp176, tmp178); drone += tmp177)
                    {
                      if((!(&data->localData[0]->booleanVars[48]/* cc.isDead[1] DISCRETE */)[drone - 1] ))
                      {
                        (&(data->localData[0]->realVars[107]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 1)-1)] = 2.0;

                        (&(data->localData[0]->realVars[107]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 2)-1)] = (&data->localData[0]->realVars[125]/* cc.setx[1] DISCRETE */)[drone - 1] ;

                        (&(data->localData[0]->realVars[107]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 3)-1)] = (&data->localData[0]->realVars[127]/* cc.sety[1] DISCRETE */)[drone - 1] ;

                        (&(data->localData[0]->realVars[107]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 4)-1)] = (&data->localData[0]->realVars[129]/* cc.setz[1] DISCRETE */)[drone - 1] ;

                        (&(data->localData[0]->booleanVars[25]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 0;

                        (&(data->localData[0]->booleanVars[54]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 0;
                      }
                      else
                      {
                        (&(data->localData[0]->booleanVars[25]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;
                      }
                    }
                  }

                  (data->localData[0]->integerVars[20]/* cc.state DISCRETE */)  = ((modelica_integer) 40);
                }
                else
                {
                  if(((data->simulationInfo->integerVarsPre[20]/* cc.state DISCRETE */)  == ((modelica_integer) 40)))
                  {
                    tmp180 = ((modelica_integer) 1); tmp181 = 1; tmp182 = ((modelica_integer) 2);
                    if(!(((tmp181 > 0) && (tmp180 > tmp182)) || ((tmp181 < 0) && (tmp180 < tmp182))))
                    {
                      modelica_integer drone;
                      for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp180, tmp182); drone += tmp181)
                      {
                        if((!(&(data->simulationInfo->booleanVarsPre[25]/* cc.comm_done[1] DISCRETE */) )[drone - 1]))
                        {
                          (&(data->localData[0]->booleanVars[58]/* cc.writesignal[1] DISCRETE */) )[drone - 1] = omc_WriteToFIFO(threadData, (&(data->simulationInfo->integerVarsPre[1]/* cc.fifox[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[58]/* cc.writesignal[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[56]/* cc.spaceavailable[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1]);

                          if(omc_FifoIODone(threadData, (&data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)[drone - 1] ))
                          {
                            (&(data->localData[0]->booleanVars[25]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;

                            (&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1] = ((modelica_integer) 0);
                          }
                        }
                      }
                    }

                    (data->localData[0]->integerVars[23]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

                    tmp183 = ((modelica_integer) 1); tmp184 = 1; tmp185 = ((modelica_integer) 2);
                    if(!(((tmp184 > 0) && (tmp183 > tmp185)) || ((tmp184 < 0) && (tmp183 < tmp185))))
                    {
                      modelica_integer drone;
                      for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp183, tmp185); drone += tmp184)
                      {
                        if((!(&(data->simulationInfo->booleanVarsPre[48]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
                        {
                          if((!(&(data->simulationInfo->booleanVarsPre[25]/* cc.comm_done[1] DISCRETE */) )[drone - 1]))
                          {
                            (data->localData[0]->integerVars[23]/* cc.z DISCRETE */)  = ((modelica_integer) 100);

                            break;
                          }
                        }
                      }
                    }

                    if(((data->localData[0]->integerVars[23]/* cc.z DISCRETE */)  == ((modelica_integer) 0)))
                    {
                      (data->localData[0]->integerVars[20]/* cc.state DISCRETE */)  = ((modelica_integer) 0);
                    }
                  }
                  else
                  {
                    (data->localData[0]->integerVars[20]/* cc.state DISCRETE */)  = (data->simulationInfo->integerVarsPre[20]/* cc.state DISCRETE */) ;
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
equation index: 174
type: SIMPLE_ASSIGN
cc_to_drone[2].inputdata[5] = cc.msg_to_drone[2,5]
*/
void System_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  (data->localData[0]->realVars[47]/* cc_to_drone[2].inputdata[5] variable */)  = (data->localData[0]->realVars[116]/* cc.msg_to_drone[2,5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 175
type: SIMPLE_ASSIGN
cc_to_drone[2].inputdata[1] = cc.msg_to_drone[2,1]
*/
void System_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  (data->localData[0]->realVars[43]/* cc_to_drone[2].inputdata[1] variable */)  = (data->localData[0]->realVars[112]/* cc.msg_to_drone[2,1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 176
type: SIMPLE_ASSIGN
cc_to_drone[2].inputdata[2] = cc.msg_to_drone[2,2]
*/
void System_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  (data->localData[0]->realVars[44]/* cc_to_drone[2].inputdata[2] variable */)  = (data->localData[0]->realVars[113]/* cc.msg_to_drone[2,2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 177
type: SIMPLE_ASSIGN
cc_to_drone[1].writesignal = cc.writesignal[1]
*/
void System_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  (data->localData[0]->booleanVars[70]/* cc_to_drone[1].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[58]/* cc.writesignal[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 178
type: SIMPLE_ASSIGN
cc_to_drone[1].writesigint = not pre(cc_to_drone[1].writesignal) == cc_to_drone[1].writesignal
*/
void System_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  (data->localData[0]->booleanVars[68]/* cc_to_drone[1].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[70]/* cc_to_drone[1].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[70]/* cc_to_drone[1].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[70]/* cc_to_drone[1].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[70]/* cc_to_drone[1].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 179
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[4] = cc.msg_to_drone[1,4]
*/
void System_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  (data->localData[0]->realVars[41]/* cc_to_drone[1].inputdata[4] variable */)  = (data->localData[0]->realVars[110]/* cc.msg_to_drone[1,4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 180
type: ALGORITHM

  m.old_avg_drones_all_areas := pre(m.old_avg_drones_all_areas);
  m.std_dev_all_areas := pre(m.std_dev_all_areas);
  m.std_dev[16] := pre(m.std_dev[16]);
  m.std_dev[15] := pre(m.std_dev[15]);
  m.std_dev[14] := pre(m.std_dev[14]);
  m.std_dev[13] := pre(m.std_dev[13]);
  m.std_dev[12] := pre(m.std_dev[12]);
  m.std_dev[11] := pre(m.std_dev[11]);
  m.std_dev[10] := pre(m.std_dev[10]);
  m.std_dev[9] := pre(m.std_dev[9]);
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
  m.avg_no_drone_time[16] := pre(m.avg_no_drone_time[16]);
  m.avg_no_drone_time[15] := pre(m.avg_no_drone_time[15]);
  m.avg_no_drone_time[14] := pre(m.avg_no_drone_time[14]);
  m.avg_no_drone_time[13] := pre(m.avg_no_drone_time[13]);
  m.avg_no_drone_time[12] := pre(m.avg_no_drone_time[12]);
  m.avg_no_drone_time[11] := pre(m.avg_no_drone_time[11]);
  m.avg_no_drone_time[10] := pre(m.avg_no_drone_time[10]);
  m.avg_no_drone_time[9] := pre(m.avg_no_drone_time[9]);
  m.avg_no_drone_time[8] := pre(m.avg_no_drone_time[8]);
  m.avg_no_drone_time[7] := pre(m.avg_no_drone_time[7]);
  m.avg_no_drone_time[6] := pre(m.avg_no_drone_time[6]);
  m.avg_no_drone_time[5] := pre(m.avg_no_drone_time[5]);
  m.avg_no_drone_time[4] := pre(m.avg_no_drone_time[4]);
  m.avg_no_drone_time[3] := pre(m.avg_no_drone_time[3]);
  m.avg_no_drone_time[2] := pre(m.avg_no_drone_time[2]);
  m.avg_no_drone_time[1] := pre(m.avg_no_drone_time[1]);
  m.no_drone_time[16] := pre(m.no_drone_time[16]);
  m.no_drone_time[15] := pre(m.no_drone_time[15]);
  m.no_drone_time[14] := pre(m.no_drone_time[14]);
  m.no_drone_time[13] := pre(m.no_drone_time[13]);
  m.no_drone_time[12] := pre(m.no_drone_time[12]);
  m.no_drone_time[11] := pre(m.no_drone_time[11]);
  m.no_drone_time[10] := pre(m.no_drone_time[10]);
  m.no_drone_time[9] := pre(m.no_drone_time[9]);
  m.no_drone_time[8] := pre(m.no_drone_time[8]);
  m.no_drone_time[7] := pre(m.no_drone_time[7]);
  m.no_drone_time[6] := pre(m.no_drone_time[6]);
  m.no_drone_time[5] := pre(m.no_drone_time[5]);
  m.no_drone_time[4] := pre(m.no_drone_time[4]);
  m.no_drone_time[3] := pre(m.no_drone_time[3]);
  m.no_drone_time[2] := pre(m.no_drone_time[2]);
  m.no_drone_time[1] := pre(m.no_drone_time[1]);
  m.p_drones_all_areas := pre(m.p_drones_all_areas);
  m.p_drones[16] := pre(m.p_drones[16]);
  m.p_drones[15] := pre(m.p_drones[15]);
  m.p_drones[14] := pre(m.p_drones[14]);
  m.p_drones[13] := pre(m.p_drones[13]);
  m.p_drones[12] := pre(m.p_drones[12]);
  m.p_drones[11] := pre(m.p_drones[11]);
  m.p_drones[10] := pre(m.p_drones[10]);
  m.p_drones[9] := pre(m.p_drones[9]);
  m.p_drones[8] := pre(m.p_drones[8]);
  m.p_drones[7] := pre(m.p_drones[7]);
  m.p_drones[6] := pre(m.p_drones[6]);
  m.p_drones[5] := pre(m.p_drones[5]);
  m.p_drones[4] := pre(m.p_drones[4]);
  m.p_drones[3] := pre(m.p_drones[3]);
  m.p_drones[2] := pre(m.p_drones[2]);
  m.p_drones[1] := pre(m.p_drones[1]);
  m.beenVisited[16] := pre(m.beenVisited[16]);
  m.beenVisited[15] := pre(m.beenVisited[15]);
  m.beenVisited[14] := pre(m.beenVisited[14]);
  m.beenVisited[13] := pre(m.beenVisited[13]);
  m.beenVisited[12] := pre(m.beenVisited[12]);
  m.beenVisited[11] := pre(m.beenVisited[11]);
  m.beenVisited[10] := pre(m.beenVisited[10]);
  m.beenVisited[9] := pre(m.beenVisited[9]);
  m.beenVisited[8] := pre(m.beenVisited[8]);
  m.beenVisited[7] := pre(m.beenVisited[7]);
  m.beenVisited[6] := pre(m.beenVisited[6]);
  m.beenVisited[5] := pre(m.beenVisited[5]);
  m.beenVisited[4] := pre(m.beenVisited[4]);
  m.beenVisited[3] := pre(m.beenVisited[3]);
  m.beenVisited[2] := pre(m.beenVisited[2]);
  m.beenVisited[1] := pre(m.beenVisited[1]);
  m.avg_drones_all_areas := pre(m.avg_drones_all_areas);
  m.avg_drones[16] := pre(m.avg_drones[16]);
  m.avg_drones[15] := pre(m.avg_drones[15]);
  m.avg_drones[14] := pre(m.avg_drones[14]);
  m.avg_drones[13] := pre(m.avg_drones[13]);
  m.avg_drones[12] := pre(m.avg_drones[12]);
  m.avg_drones[11] := pre(m.avg_drones[11]);
  m.avg_drones[10] := pre(m.avg_drones[10]);
  m.avg_drones[9] := pre(m.avg_drones[9]);
  m.avg_drones[8] := pre(m.avg_drones[8]);
  m.avg_drones[7] := pre(m.avg_drones[7]);
  m.avg_drones[6] := pre(m.avg_drones[6]);
  m.avg_drones[5] := pre(m.avg_drones[5]);
  m.avg_drones[4] := pre(m.avg_drones[4]);
  m.avg_drones[3] := pre(m.avg_drones[3]);
  m.avg_drones[2] := pre(m.avg_drones[2]);
  m.avg_drones[1] := pre(m.avg_drones[1]);
  m.current_drones[16] := pre(m.current_drones[16]);
  m.current_drones[15] := pre(m.current_drones[15]);
  m.current_drones[14] := pre(m.current_drones[14]);
  m.current_drones[13] := pre(m.current_drones[13]);
  m.current_drones[12] := pre(m.current_drones[12]);
  m.current_drones[11] := pre(m.current_drones[11]);
  m.current_drones[10] := pre(m.current_drones[10]);
  m.current_drones[9] := pre(m.current_drones[9]);
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
  $whenCondition14 := pre($whenCondition14);
  $whenCondition13 := pre($whenCondition13);
  $whenCondition13 := sample(8, m.p.monitor_start, m.p.Tm);
  $whenCondition14 := time > m.p.stop_simulation or cc.endSimulation;
  when false then
    m.z := 0;
    m.samples := 0;
    m.current_drones := {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    m.avg_drones := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    m.avg_drones_all_areas := 0.0;
    m.beenVisited := {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    m.p_drones := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    m.p_drones_all_areas := 0.0;
    m.no_drone_time := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    m.avg_no_drone_time := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    m.avg_no_drone_time_all_areas := 0.0;
    m.max_no_drone_time := 0.0;
    m.std_dev := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    m.std_dev_all_areas := 0.0;
    m.old_avg_drones_all_areas := 0.0;
  elsewhen $whenCondition13 then
    m.samples := pre(m.samples) + 1;
    m.old_avg_drones_all_areas := pre(m.avg_drones_all_areas);
    for area in 1:16 loop
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
    m.avg_drones_all_areas := 0.0625 * (pre(m.avg_drones[1]) + pre(m.avg_drones[2]) + pre(m.avg_drones[3]) + pre(m.avg_drones[4]) + pre(m.avg_drones[5]) + pre(m.avg_drones[6]) + pre(m.avg_drones[7]) + pre(m.avg_drones[8]) + pre(m.avg_drones[9]) + pre(m.avg_drones[10]) + pre(m.avg_drones[11]) + pre(m.avg_drones[12]) + pre(m.avg_drones[13]) + pre(m.avg_drones[14]) + pre(m.avg_drones[15]) + pre(m.avg_drones[16]));
    m.p_drones_all_areas := 0.0625 * (pre(m.p_drones[1]) + pre(m.p_drones[2]) + pre(m.p_drones[3]) + pre(m.p_drones[4]) + pre(m.p_drones[5]) + pre(m.p_drones[6]) + pre(m.p_drones[7]) + pre(m.p_drones[8]) + pre(m.p_drones[9]) + pre(m.p_drones[10]) + pre(m.p_drones[11]) + pre(m.p_drones[12]) + pre(m.p_drones[13]) + pre(m.p_drones[14]) + pre(m.p_drones[15]) + pre(m.p_drones[16]));
    m.avg_no_drone_time_all_areas := 0.0625 * (pre(m.no_drone_time[1]) + pre(m.no_drone_time[2]) + pre(m.no_drone_time[3]) + pre(m.no_drone_time[4]) + pre(m.no_drone_time[5]) + pre(m.no_drone_time[6]) + pre(m.no_drone_time[7]) + pre(m.no_drone_time[8]) + pre(m.no_drone_time[9]) + pre(m.no_drone_time[10]) + pre(m.no_drone_time[11]) + pre(m.no_drone_time[12]) + pre(m.no_drone_time[13]) + pre(m.no_drone_time[14]) + pre(m.no_drone_time[15]) + pre(m.no_drone_time[16]));
    if pre(m.max_no_drone_time) < max(m.no_drone_time) then
      m.max_no_drone_time := max(m.no_drone_time);
    end if;
    m.std_dev_all_areas := sqrt(abs(pre(m.avg_drones_all_areas) - pre(m.old_avg_drones_all_areas) ^ 2.0));
  elsewhen $whenCondition14 then
    Modelica.Utilities.Files.remove("outputs.txt");
    Modelica.Utilities.Streams.print("AvgDrones AvgNoDrone MaxNoDrone PrDrones StdDev ( time = " + String(time, 6, 0, true) + "s = " + String(time / 3600.0, 6, 0, true) + "h )", "outputs.txt");
    Modelica.Utilities.Streams.print(String(m.avg_drones_all_areas, 6, 0, true) + "  " + String(m.avg_no_drone_time_all_areas, 6, 0, true) + "  " + String(m.max_no_drone_time, 6, 0, true) + "  " + String(m.p_drones_all_areas, 6, 0, true) + "  " + String(m.std_dev_all_areas, 6, 0, true), "outputs.txt");
    disconnect_from_db();
    terminate("Simulation limit reached. Go home now.");
  end when;
*/
void System_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  modelica_boolean tmp188;
  integer_array tmp189;
  integer_array tmp190;
  real_array tmp191;
  real_array tmp192;
  integer_array tmp193;
  integer_array tmp194;
  real_array tmp195;
  real_array tmp196;
  real_array tmp197;
  real_array tmp198;
  real_array tmp199;
  real_array tmp200;
  real_array tmp201;
  real_array tmp202;
  modelica_boolean tmp203;
  modelica_real tmp204;
  modelica_real tmp205;
  modelica_integer tmp206;
  modelica_integer tmp207;
  modelica_integer tmp208;
  real_array tmp209;
  modelica_real tmp210;
  modelica_boolean tmp211;
  real_array tmp212;
  modelica_real tmp213;
  modelica_real tmp214;
  static const MMC_DEFSTRINGLIT(tmp215,11,"outputs.txt");
  static const MMC_DEFSTRINGLIT(tmp216,57,"AvgDrones AvgNoDrone MaxNoDrone PrDrones StdDev ( time = ");
  modelica_string tmp217;
  modelica_metatype tmpMeta218;
  static const MMC_DEFSTRINGLIT(tmp219,4,"s = ");
  modelica_metatype tmpMeta220;
  modelica_string tmp221;
  modelica_metatype tmpMeta222;
  static const MMC_DEFSTRINGLIT(tmp223,3,"h )");
  modelica_metatype tmpMeta224;
  static const MMC_DEFSTRINGLIT(tmp225,11,"outputs.txt");
  modelica_string tmp226;
  static const MMC_DEFSTRINGLIT(tmp227,2,"  ");
  modelica_metatype tmpMeta228;
  modelica_string tmp229;
  modelica_metatype tmpMeta230;
  static const MMC_DEFSTRINGLIT(tmp231,2,"  ");
  modelica_metatype tmpMeta232;
  modelica_string tmp233;
  modelica_metatype tmpMeta234;
  static const MMC_DEFSTRINGLIT(tmp235,2,"  ");
  modelica_metatype tmpMeta236;
  modelica_string tmp237;
  modelica_metatype tmpMeta238;
  static const MMC_DEFSTRINGLIT(tmp239,2,"  ");
  modelica_metatype tmpMeta240;
  modelica_string tmp241;
  modelica_metatype tmpMeta242;
  static const MMC_DEFSTRINGLIT(tmp243,11,"outputs.txt");
  static const MMC_DEFSTRINGLIT(tmp244,38,"Simulation limit reached. Go home now.");
  (data->localData[0]->realVars[430]/* m.old_avg_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[430]/* m.old_avg_drones_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[464]/* m.std_dev_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[464]/* m.std_dev_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[463]/* m.std_dev[16] DISCRETE */)  = (data->simulationInfo->realVarsPre[463]/* m.std_dev[16] DISCRETE */) ;

  (data->localData[0]->realVars[462]/* m.std_dev[15] DISCRETE */)  = (data->simulationInfo->realVarsPre[462]/* m.std_dev[15] DISCRETE */) ;

  (data->localData[0]->realVars[461]/* m.std_dev[14] DISCRETE */)  = (data->simulationInfo->realVarsPre[461]/* m.std_dev[14] DISCRETE */) ;

  (data->localData[0]->realVars[460]/* m.std_dev[13] DISCRETE */)  = (data->simulationInfo->realVarsPre[460]/* m.std_dev[13] DISCRETE */) ;

  (data->localData[0]->realVars[459]/* m.std_dev[12] DISCRETE */)  = (data->simulationInfo->realVarsPre[459]/* m.std_dev[12] DISCRETE */) ;

  (data->localData[0]->realVars[458]/* m.std_dev[11] DISCRETE */)  = (data->simulationInfo->realVarsPre[458]/* m.std_dev[11] DISCRETE */) ;

  (data->localData[0]->realVars[457]/* m.std_dev[10] DISCRETE */)  = (data->simulationInfo->realVarsPre[457]/* m.std_dev[10] DISCRETE */) ;

  (data->localData[0]->realVars[456]/* m.std_dev[9] DISCRETE */)  = (data->simulationInfo->realVarsPre[456]/* m.std_dev[9] DISCRETE */) ;

  (data->localData[0]->realVars[455]/* m.std_dev[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[455]/* m.std_dev[8] DISCRETE */) ;

  (data->localData[0]->realVars[454]/* m.std_dev[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[454]/* m.std_dev[7] DISCRETE */) ;

  (data->localData[0]->realVars[453]/* m.std_dev[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[453]/* m.std_dev[6] DISCRETE */) ;

  (data->localData[0]->realVars[452]/* m.std_dev[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[452]/* m.std_dev[5] DISCRETE */) ;

  (data->localData[0]->realVars[451]/* m.std_dev[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[451]/* m.std_dev[4] DISCRETE */) ;

  (data->localData[0]->realVars[450]/* m.std_dev[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[450]/* m.std_dev[3] DISCRETE */) ;

  (data->localData[0]->realVars[449]/* m.std_dev[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[449]/* m.std_dev[2] DISCRETE */) ;

  (data->localData[0]->realVars[448]/* m.std_dev[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[448]/* m.std_dev[1] DISCRETE */) ;

  (data->localData[0]->realVars[413]/* m.max_no_drone_time DISCRETE */)  = (data->simulationInfo->realVarsPre[413]/* m.max_no_drone_time DISCRETE */) ;

  (data->localData[0]->realVars[412]/* m.avg_no_drone_time_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[412]/* m.avg_no_drone_time_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[411]/* m.avg_no_drone_time[16] DISCRETE */)  = (data->simulationInfo->realVarsPre[411]/* m.avg_no_drone_time[16] DISCRETE */) ;

  (data->localData[0]->realVars[410]/* m.avg_no_drone_time[15] DISCRETE */)  = (data->simulationInfo->realVarsPre[410]/* m.avg_no_drone_time[15] DISCRETE */) ;

  (data->localData[0]->realVars[409]/* m.avg_no_drone_time[14] DISCRETE */)  = (data->simulationInfo->realVarsPre[409]/* m.avg_no_drone_time[14] DISCRETE */) ;

  (data->localData[0]->realVars[408]/* m.avg_no_drone_time[13] DISCRETE */)  = (data->simulationInfo->realVarsPre[408]/* m.avg_no_drone_time[13] DISCRETE */) ;

  (data->localData[0]->realVars[407]/* m.avg_no_drone_time[12] DISCRETE */)  = (data->simulationInfo->realVarsPre[407]/* m.avg_no_drone_time[12] DISCRETE */) ;

  (data->localData[0]->realVars[406]/* m.avg_no_drone_time[11] DISCRETE */)  = (data->simulationInfo->realVarsPre[406]/* m.avg_no_drone_time[11] DISCRETE */) ;

  (data->localData[0]->realVars[405]/* m.avg_no_drone_time[10] DISCRETE */)  = (data->simulationInfo->realVarsPre[405]/* m.avg_no_drone_time[10] DISCRETE */) ;

  (data->localData[0]->realVars[404]/* m.avg_no_drone_time[9] DISCRETE */)  = (data->simulationInfo->realVarsPre[404]/* m.avg_no_drone_time[9] DISCRETE */) ;

  (data->localData[0]->realVars[403]/* m.avg_no_drone_time[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[403]/* m.avg_no_drone_time[8] DISCRETE */) ;

  (data->localData[0]->realVars[402]/* m.avg_no_drone_time[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[402]/* m.avg_no_drone_time[7] DISCRETE */) ;

  (data->localData[0]->realVars[401]/* m.avg_no_drone_time[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[401]/* m.avg_no_drone_time[6] DISCRETE */) ;

  (data->localData[0]->realVars[400]/* m.avg_no_drone_time[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[400]/* m.avg_no_drone_time[5] DISCRETE */) ;

  (data->localData[0]->realVars[399]/* m.avg_no_drone_time[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[399]/* m.avg_no_drone_time[4] DISCRETE */) ;

  (data->localData[0]->realVars[398]/* m.avg_no_drone_time[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[398]/* m.avg_no_drone_time[3] DISCRETE */) ;

  (data->localData[0]->realVars[397]/* m.avg_no_drone_time[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[397]/* m.avg_no_drone_time[2] DISCRETE */) ;

  (data->localData[0]->realVars[396]/* m.avg_no_drone_time[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[396]/* m.avg_no_drone_time[1] DISCRETE */) ;

  (data->localData[0]->realVars[429]/* m.no_drone_time[16] DISCRETE */)  = (data->simulationInfo->realVarsPre[429]/* m.no_drone_time[16] DISCRETE */) ;

  (data->localData[0]->realVars[428]/* m.no_drone_time[15] DISCRETE */)  = (data->simulationInfo->realVarsPre[428]/* m.no_drone_time[15] DISCRETE */) ;

  (data->localData[0]->realVars[427]/* m.no_drone_time[14] DISCRETE */)  = (data->simulationInfo->realVarsPre[427]/* m.no_drone_time[14] DISCRETE */) ;

  (data->localData[0]->realVars[426]/* m.no_drone_time[13] DISCRETE */)  = (data->simulationInfo->realVarsPre[426]/* m.no_drone_time[13] DISCRETE */) ;

  (data->localData[0]->realVars[425]/* m.no_drone_time[12] DISCRETE */)  = (data->simulationInfo->realVarsPre[425]/* m.no_drone_time[12] DISCRETE */) ;

  (data->localData[0]->realVars[424]/* m.no_drone_time[11] DISCRETE */)  = (data->simulationInfo->realVarsPre[424]/* m.no_drone_time[11] DISCRETE */) ;

  (data->localData[0]->realVars[423]/* m.no_drone_time[10] DISCRETE */)  = (data->simulationInfo->realVarsPre[423]/* m.no_drone_time[10] DISCRETE */) ;

  (data->localData[0]->realVars[422]/* m.no_drone_time[9] DISCRETE */)  = (data->simulationInfo->realVarsPre[422]/* m.no_drone_time[9] DISCRETE */) ;

  (data->localData[0]->realVars[421]/* m.no_drone_time[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[421]/* m.no_drone_time[8] DISCRETE */) ;

  (data->localData[0]->realVars[420]/* m.no_drone_time[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[420]/* m.no_drone_time[7] DISCRETE */) ;

  (data->localData[0]->realVars[419]/* m.no_drone_time[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[419]/* m.no_drone_time[6] DISCRETE */) ;

  (data->localData[0]->realVars[418]/* m.no_drone_time[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[418]/* m.no_drone_time[5] DISCRETE */) ;

  (data->localData[0]->realVars[417]/* m.no_drone_time[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[417]/* m.no_drone_time[4] DISCRETE */) ;

  (data->localData[0]->realVars[416]/* m.no_drone_time[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[416]/* m.no_drone_time[3] DISCRETE */) ;

  (data->localData[0]->realVars[415]/* m.no_drone_time[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[415]/* m.no_drone_time[2] DISCRETE */) ;

  (data->localData[0]->realVars[414]/* m.no_drone_time[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[414]/* m.no_drone_time[1] DISCRETE */) ;

  (data->localData[0]->realVars[447]/* m.p_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[447]/* m.p_drones_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[446]/* m.p_drones[16] DISCRETE */)  = (data->simulationInfo->realVarsPre[446]/* m.p_drones[16] DISCRETE */) ;

  (data->localData[0]->realVars[445]/* m.p_drones[15] DISCRETE */)  = (data->simulationInfo->realVarsPre[445]/* m.p_drones[15] DISCRETE */) ;

  (data->localData[0]->realVars[444]/* m.p_drones[14] DISCRETE */)  = (data->simulationInfo->realVarsPre[444]/* m.p_drones[14] DISCRETE */) ;

  (data->localData[0]->realVars[443]/* m.p_drones[13] DISCRETE */)  = (data->simulationInfo->realVarsPre[443]/* m.p_drones[13] DISCRETE */) ;

  (data->localData[0]->realVars[442]/* m.p_drones[12] DISCRETE */)  = (data->simulationInfo->realVarsPre[442]/* m.p_drones[12] DISCRETE */) ;

  (data->localData[0]->realVars[441]/* m.p_drones[11] DISCRETE */)  = (data->simulationInfo->realVarsPre[441]/* m.p_drones[11] DISCRETE */) ;

  (data->localData[0]->realVars[440]/* m.p_drones[10] DISCRETE */)  = (data->simulationInfo->realVarsPre[440]/* m.p_drones[10] DISCRETE */) ;

  (data->localData[0]->realVars[439]/* m.p_drones[9] DISCRETE */)  = (data->simulationInfo->realVarsPre[439]/* m.p_drones[9] DISCRETE */) ;

  (data->localData[0]->realVars[438]/* m.p_drones[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[438]/* m.p_drones[8] DISCRETE */) ;

  (data->localData[0]->realVars[437]/* m.p_drones[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[437]/* m.p_drones[7] DISCRETE */) ;

  (data->localData[0]->realVars[436]/* m.p_drones[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[436]/* m.p_drones[6] DISCRETE */) ;

  (data->localData[0]->realVars[435]/* m.p_drones[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[435]/* m.p_drones[5] DISCRETE */) ;

  (data->localData[0]->realVars[434]/* m.p_drones[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[434]/* m.p_drones[4] DISCRETE */) ;

  (data->localData[0]->realVars[433]/* m.p_drones[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[433]/* m.p_drones[3] DISCRETE */) ;

  (data->localData[0]->realVars[432]/* m.p_drones[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[432]/* m.p_drones[2] DISCRETE */) ;

  (data->localData[0]->realVars[431]/* m.p_drones[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[431]/* m.p_drones[1] DISCRETE */) ;

  (data->localData[0]->integerVars[59]/* m.beenVisited[16] DISCRETE */)  = (data->simulationInfo->integerVarsPre[59]/* m.beenVisited[16] DISCRETE */) ;

  (data->localData[0]->integerVars[58]/* m.beenVisited[15] DISCRETE */)  = (data->simulationInfo->integerVarsPre[58]/* m.beenVisited[15] DISCRETE */) ;

  (data->localData[0]->integerVars[57]/* m.beenVisited[14] DISCRETE */)  = (data->simulationInfo->integerVarsPre[57]/* m.beenVisited[14] DISCRETE */) ;

  (data->localData[0]->integerVars[56]/* m.beenVisited[13] DISCRETE */)  = (data->simulationInfo->integerVarsPre[56]/* m.beenVisited[13] DISCRETE */) ;

  (data->localData[0]->integerVars[55]/* m.beenVisited[12] DISCRETE */)  = (data->simulationInfo->integerVarsPre[55]/* m.beenVisited[12] DISCRETE */) ;

  (data->localData[0]->integerVars[54]/* m.beenVisited[11] DISCRETE */)  = (data->simulationInfo->integerVarsPre[54]/* m.beenVisited[11] DISCRETE */) ;

  (data->localData[0]->integerVars[53]/* m.beenVisited[10] DISCRETE */)  = (data->simulationInfo->integerVarsPre[53]/* m.beenVisited[10] DISCRETE */) ;

  (data->localData[0]->integerVars[52]/* m.beenVisited[9] DISCRETE */)  = (data->simulationInfo->integerVarsPre[52]/* m.beenVisited[9] DISCRETE */) ;

  (data->localData[0]->integerVars[51]/* m.beenVisited[8] DISCRETE */)  = (data->simulationInfo->integerVarsPre[51]/* m.beenVisited[8] DISCRETE */) ;

  (data->localData[0]->integerVars[50]/* m.beenVisited[7] DISCRETE */)  = (data->simulationInfo->integerVarsPre[50]/* m.beenVisited[7] DISCRETE */) ;

  (data->localData[0]->integerVars[49]/* m.beenVisited[6] DISCRETE */)  = (data->simulationInfo->integerVarsPre[49]/* m.beenVisited[6] DISCRETE */) ;

  (data->localData[0]->integerVars[48]/* m.beenVisited[5] DISCRETE */)  = (data->simulationInfo->integerVarsPre[48]/* m.beenVisited[5] DISCRETE */) ;

  (data->localData[0]->integerVars[47]/* m.beenVisited[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[47]/* m.beenVisited[4] DISCRETE */) ;

  (data->localData[0]->integerVars[46]/* m.beenVisited[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[46]/* m.beenVisited[3] DISCRETE */) ;

  (data->localData[0]->integerVars[45]/* m.beenVisited[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[45]/* m.beenVisited[2] DISCRETE */) ;

  (data->localData[0]->integerVars[44]/* m.beenVisited[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[44]/* m.beenVisited[1] DISCRETE */) ;

  (data->localData[0]->realVars[395]/* m.avg_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[395]/* m.avg_drones_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[394]/* m.avg_drones[16] DISCRETE */)  = (data->simulationInfo->realVarsPre[394]/* m.avg_drones[16] DISCRETE */) ;

  (data->localData[0]->realVars[393]/* m.avg_drones[15] DISCRETE */)  = (data->simulationInfo->realVarsPre[393]/* m.avg_drones[15] DISCRETE */) ;

  (data->localData[0]->realVars[392]/* m.avg_drones[14] DISCRETE */)  = (data->simulationInfo->realVarsPre[392]/* m.avg_drones[14] DISCRETE */) ;

  (data->localData[0]->realVars[391]/* m.avg_drones[13] DISCRETE */)  = (data->simulationInfo->realVarsPre[391]/* m.avg_drones[13] DISCRETE */) ;

  (data->localData[0]->realVars[390]/* m.avg_drones[12] DISCRETE */)  = (data->simulationInfo->realVarsPre[390]/* m.avg_drones[12] DISCRETE */) ;

  (data->localData[0]->realVars[389]/* m.avg_drones[11] DISCRETE */)  = (data->simulationInfo->realVarsPre[389]/* m.avg_drones[11] DISCRETE */) ;

  (data->localData[0]->realVars[388]/* m.avg_drones[10] DISCRETE */)  = (data->simulationInfo->realVarsPre[388]/* m.avg_drones[10] DISCRETE */) ;

  (data->localData[0]->realVars[387]/* m.avg_drones[9] DISCRETE */)  = (data->simulationInfo->realVarsPre[387]/* m.avg_drones[9] DISCRETE */) ;

  (data->localData[0]->realVars[386]/* m.avg_drones[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[386]/* m.avg_drones[8] DISCRETE */) ;

  (data->localData[0]->realVars[385]/* m.avg_drones[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[385]/* m.avg_drones[7] DISCRETE */) ;

  (data->localData[0]->realVars[384]/* m.avg_drones[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[384]/* m.avg_drones[6] DISCRETE */) ;

  (data->localData[0]->realVars[383]/* m.avg_drones[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[383]/* m.avg_drones[5] DISCRETE */) ;

  (data->localData[0]->realVars[382]/* m.avg_drones[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[382]/* m.avg_drones[4] DISCRETE */) ;

  (data->localData[0]->realVars[381]/* m.avg_drones[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[381]/* m.avg_drones[3] DISCRETE */) ;

  (data->localData[0]->realVars[380]/* m.avg_drones[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[380]/* m.avg_drones[2] DISCRETE */) ;

  (data->localData[0]->realVars[379]/* m.avg_drones[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[379]/* m.avg_drones[1] DISCRETE */) ;

  (data->localData[0]->integerVars[75]/* m.current_drones[16] DISCRETE */)  = (data->simulationInfo->integerVarsPre[75]/* m.current_drones[16] DISCRETE */) ;

  (data->localData[0]->integerVars[74]/* m.current_drones[15] DISCRETE */)  = (data->simulationInfo->integerVarsPre[74]/* m.current_drones[15] DISCRETE */) ;

  (data->localData[0]->integerVars[73]/* m.current_drones[14] DISCRETE */)  = (data->simulationInfo->integerVarsPre[73]/* m.current_drones[14] DISCRETE */) ;

  (data->localData[0]->integerVars[72]/* m.current_drones[13] DISCRETE */)  = (data->simulationInfo->integerVarsPre[72]/* m.current_drones[13] DISCRETE */) ;

  (data->localData[0]->integerVars[71]/* m.current_drones[12] DISCRETE */)  = (data->simulationInfo->integerVarsPre[71]/* m.current_drones[12] DISCRETE */) ;

  (data->localData[0]->integerVars[70]/* m.current_drones[11] DISCRETE */)  = (data->simulationInfo->integerVarsPre[70]/* m.current_drones[11] DISCRETE */) ;

  (data->localData[0]->integerVars[69]/* m.current_drones[10] DISCRETE */)  = (data->simulationInfo->integerVarsPre[69]/* m.current_drones[10] DISCRETE */) ;

  (data->localData[0]->integerVars[68]/* m.current_drones[9] DISCRETE */)  = (data->simulationInfo->integerVarsPre[68]/* m.current_drones[9] DISCRETE */) ;

  (data->localData[0]->integerVars[67]/* m.current_drones[8] DISCRETE */)  = (data->simulationInfo->integerVarsPre[67]/* m.current_drones[8] DISCRETE */) ;

  (data->localData[0]->integerVars[66]/* m.current_drones[7] DISCRETE */)  = (data->simulationInfo->integerVarsPre[66]/* m.current_drones[7] DISCRETE */) ;

  (data->localData[0]->integerVars[65]/* m.current_drones[6] DISCRETE */)  = (data->simulationInfo->integerVarsPre[65]/* m.current_drones[6] DISCRETE */) ;

  (data->localData[0]->integerVars[64]/* m.current_drones[5] DISCRETE */)  = (data->simulationInfo->integerVarsPre[64]/* m.current_drones[5] DISCRETE */) ;

  (data->localData[0]->integerVars[63]/* m.current_drones[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[63]/* m.current_drones[4] DISCRETE */) ;

  (data->localData[0]->integerVars[62]/* m.current_drones[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[62]/* m.current_drones[3] DISCRETE */) ;

  (data->localData[0]->integerVars[61]/* m.current_drones[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[61]/* m.current_drones[2] DISCRETE */) ;

  (data->localData[0]->integerVars[60]/* m.current_drones[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[60]/* m.current_drones[1] DISCRETE */) ;

  (data->localData[0]->integerVars[76]/* m.samples DISCRETE */)  = (data->simulationInfo->integerVarsPre[76]/* m.samples DISCRETE */) ;

  (data->localData[0]->integerVars[77]/* m.z DISCRETE */)  = (data->simulationInfo->integerVarsPre[77]/* m.z DISCRETE */) ;

  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[5]/* $whenCondition14 DISCRETE */) ;

  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[4]/* $whenCondition13 DISCRETE */) ;

  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = data->simulationInfo->samples[7];

  relationhysteresis(data, &tmp188, data->localData[0]->timeValue, (data->simulationInfo->realParameter[1590]/* m.p.stop_simulation PARAM */) , 0, Greater, GreaterZC);
  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (tmp188 || (data->localData[0]->booleanVars[29]/* cc.endSimulation DISCRETE */) );

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->integerVars[77]/* m.z DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[76]/* m.samples DISCRETE */)  = ((modelica_integer) 0);

      array_alloc_scalar_integer_array(&tmp189, 16, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp190, ((modelica_integer*)&((&(data->localData[0]->integerVars[60]/* m.current_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      integer_array_copy_data(tmp189, tmp190);

      array_alloc_scalar_real_array(&tmp191, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp192, ((modelica_real*)&((&(data->localData[0]->realVars[379]/* m.avg_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      real_array_copy_data(tmp191, tmp192);

      (data->localData[0]->realVars[395]/* m.avg_drones_all_areas DISCRETE */)  = 0.0;

      array_alloc_scalar_integer_array(&tmp193, 16, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp194, ((modelica_integer*)&((&(data->localData[0]->integerVars[44]/* m.beenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      integer_array_copy_data(tmp193, tmp194);

      array_alloc_scalar_real_array(&tmp195, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp196, ((modelica_real*)&((&(data->localData[0]->realVars[431]/* m.p_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      real_array_copy_data(tmp195, tmp196);

      (data->localData[0]->realVars[447]/* m.p_drones_all_areas DISCRETE */)  = 0.0;

      array_alloc_scalar_real_array(&tmp197, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp198, ((modelica_real*)&((&(data->localData[0]->realVars[414]/* m.no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      real_array_copy_data(tmp197, tmp198);

      array_alloc_scalar_real_array(&tmp199, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp200, ((modelica_real*)&((&(data->localData[0]->realVars[396]/* m.avg_no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      real_array_copy_data(tmp199, tmp200);

      (data->localData[0]->realVars[412]/* m.avg_no_drone_time_all_areas DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[413]/* m.max_no_drone_time DISCRETE */)  = 0.0;

      array_alloc_scalar_real_array(&tmp201, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp202, ((modelica_real*)&((&(data->localData[0]->realVars[448]/* m.std_dev[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      real_array_copy_data(tmp201, tmp202);

      (data->localData[0]->realVars[464]/* m.std_dev_all_areas DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[430]/* m.old_avg_drones_all_areas DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[4]/* $whenCondition13 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->integerVars[76]/* m.samples DISCRETE */)  = (data->simulationInfo->integerVarsPre[76]/* m.samples DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->realVars[430]/* m.old_avg_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[395]/* m.avg_drones_all_areas DISCRETE */) ;

      tmp206 = ((modelica_integer) 1); tmp207 = 1; tmp208 = ((modelica_integer) 16);
      if(!(((tmp207 > 0) && (tmp206 > tmp208)) || ((tmp207 < 0) && (tmp206 < tmp208))))
      {
        modelica_integer area;
        for(area = ((modelica_integer) 1); in_range_integer(area, tmp206, tmp208); area += tmp207)
        {
          (data->localData[0]->integerVars[77]/* m.z DISCRETE */)  = omc_how__many__drones__in__area(threadData, area, data->localData[0]->timeValue - ((data->simulationInfo->realParameter[1464]/* m.p.Tm PARAM */)  + 1.0));

          tmp203 = Greater((data->localData[0]->integerVars[77]/* m.z DISCRETE */) ,((modelica_integer) 0));
          if(tmp203)
          {
            (&(data->localData[0]->integerVars[60]/* m.current_drones[1] DISCRETE */) )[area - 1] = (data->localData[0]->integerVars[77]/* m.z DISCRETE */) ;

            (&(data->localData[0]->integerVars[44]/* m.beenVisited[1] DISCRETE */) )[area - 1] = ((modelica_integer) 1);

            (&(data->localData[0]->realVars[414]/* m.no_drone_time[1] DISCRETE */) )[area - 1] = 0.0;
          }
          else
          {
            (&(data->localData[0]->realVars[414]/* m.no_drone_time[1] DISCRETE */) )[area - 1] = (data->localData[0]->realVars[131]/* cc.time_passed_since_last_loop DISCRETE */) ;

            (&(data->localData[0]->integerVars[60]/* m.current_drones[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);

            (&(data->localData[0]->integerVars[44]/* m.beenVisited[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);
          }

          (&(data->localData[0]->realVars[379]/* m.avg_drones[1] DISCRETE */) )[area - 1] = ((&(data->simulationInfo->realVarsPre[379]/* m.avg_drones[1] DISCRETE */) )[area - 1]) * (DIVISION_SIM(((modelica_real)(data->simulationInfo->integerVarsPre[76]/* m.samples DISCRETE */) ),((modelica_real)(data->simulationInfo->integerVarsPre[76]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes)) + DIVISION_SIM(((modelica_real)(&(data->simulationInfo->integerVarsPre[60]/* m.current_drones[1] DISCRETE */) )[area - 1]),((modelica_real)(data->simulationInfo->integerVarsPre[76]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes);

          (&(data->localData[0]->realVars[431]/* m.p_drones[1] DISCRETE */) )[area - 1] = ((&(data->simulationInfo->realVarsPre[431]/* m.p_drones[1] DISCRETE */) )[area - 1]) * (DIVISION_SIM(((modelica_real)(data->simulationInfo->integerVarsPre[76]/* m.samples DISCRETE */) ),((modelica_real)(data->simulationInfo->integerVarsPre[76]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes)) + DIVISION_SIM(((modelica_real)(&(data->simulationInfo->integerVarsPre[44]/* m.beenVisited[1] DISCRETE */) )[area - 1]),((modelica_real)(data->simulationInfo->integerVarsPre[76]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes);

          (&(data->localData[0]->realVars[396]/* m.avg_no_drone_time[1] DISCRETE */) )[area - 1] = ((&(data->simulationInfo->realVarsPre[396]/* m.avg_no_drone_time[1] DISCRETE */) )[area - 1]) * (DIVISION_SIM(((modelica_real)(data->simulationInfo->integerVarsPre[76]/* m.samples DISCRETE */) ),((modelica_real)(data->simulationInfo->integerVarsPre[76]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes)) + DIVISION_SIM((&(data->simulationInfo->realVarsPre[414]/* m.no_drone_time[1] DISCRETE */) )[area - 1],((modelica_real)(data->simulationInfo->integerVarsPre[76]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes);

          tmp204 = (&data->localData[0]->realVars[379]/* m.avg_drones[1] DISCRETE */)[area - 1] ;
          tmp205 = ((modelica_real)(&data->localData[0]->integerVars[60]/* m.current_drones[1] DISCRETE */)[area - 1] ) - ((tmp204 * tmp204));
          if(!(tmp205 >= 0.0))
          {
            if (data->simulationInfo->noThrowAsserts) {
              infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
              data->simulationInfo->needToReThrow = 1;
            } else {
              FILE_INFO info = {"",0,0,0,0,0};
              omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
              throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(/*Real*/(m.current_drones[area]) - m.avg_drones[area] ^ 2.0) was %g should be >= 0", tmp205);
            }
          }
          (&(data->localData[0]->realVars[448]/* m.std_dev[1] DISCRETE */) )[area - 1] = sqrt(tmp205);
        }
      }

      (data->localData[0]->realVars[395]/* m.avg_drones_all_areas DISCRETE */)  = (0.0625) * ((data->simulationInfo->realVarsPre[379]/* m.avg_drones[1] DISCRETE */)  + (data->simulationInfo->realVarsPre[380]/* m.avg_drones[2] DISCRETE */)  + (data->simulationInfo->realVarsPre[381]/* m.avg_drones[3] DISCRETE */)  + (data->simulationInfo->realVarsPre[382]/* m.avg_drones[4] DISCRETE */)  + (data->simulationInfo->realVarsPre[383]/* m.avg_drones[5] DISCRETE */)  + (data->simulationInfo->realVarsPre[384]/* m.avg_drones[6] DISCRETE */)  + (data->simulationInfo->realVarsPre[385]/* m.avg_drones[7] DISCRETE */)  + (data->simulationInfo->realVarsPre[386]/* m.avg_drones[8] DISCRETE */)  + (data->simulationInfo->realVarsPre[387]/* m.avg_drones[9] DISCRETE */)  + (data->simulationInfo->realVarsPre[388]/* m.avg_drones[10] DISCRETE */)  + (data->simulationInfo->realVarsPre[389]/* m.avg_drones[11] DISCRETE */)  + (data->simulationInfo->realVarsPre[390]/* m.avg_drones[12] DISCRETE */)  + (data->simulationInfo->realVarsPre[391]/* m.avg_drones[13] DISCRETE */)  + (data->simulationInfo->realVarsPre[392]/* m.avg_drones[14] DISCRETE */)  + (data->simulationInfo->realVarsPre[393]/* m.avg_drones[15] DISCRETE */)  + (data->simulationInfo->realVarsPre[394]/* m.avg_drones[16] DISCRETE */) );

      (data->localData[0]->realVars[447]/* m.p_drones_all_areas DISCRETE */)  = (0.0625) * ((data->simulationInfo->realVarsPre[431]/* m.p_drones[1] DISCRETE */)  + (data->simulationInfo->realVarsPre[432]/* m.p_drones[2] DISCRETE */)  + (data->simulationInfo->realVarsPre[433]/* m.p_drones[3] DISCRETE */)  + (data->simulationInfo->realVarsPre[434]/* m.p_drones[4] DISCRETE */)  + (data->simulationInfo->realVarsPre[435]/* m.p_drones[5] DISCRETE */)  + (data->simulationInfo->realVarsPre[436]/* m.p_drones[6] DISCRETE */)  + (data->simulationInfo->realVarsPre[437]/* m.p_drones[7] DISCRETE */)  + (data->simulationInfo->realVarsPre[438]/* m.p_drones[8] DISCRETE */)  + (data->simulationInfo->realVarsPre[439]/* m.p_drones[9] DISCRETE */)  + (data->simulationInfo->realVarsPre[440]/* m.p_drones[10] DISCRETE */)  + (data->simulationInfo->realVarsPre[441]/* m.p_drones[11] DISCRETE */)  + (data->simulationInfo->realVarsPre[442]/* m.p_drones[12] DISCRETE */)  + (data->simulationInfo->realVarsPre[443]/* m.p_drones[13] DISCRETE */)  + (data->simulationInfo->realVarsPre[444]/* m.p_drones[14] DISCRETE */)  + (data->simulationInfo->realVarsPre[445]/* m.p_drones[15] DISCRETE */)  + (data->simulationInfo->realVarsPre[446]/* m.p_drones[16] DISCRETE */) );

      (data->localData[0]->realVars[412]/* m.avg_no_drone_time_all_areas DISCRETE */)  = (0.0625) * ((data->simulationInfo->realVarsPre[414]/* m.no_drone_time[1] DISCRETE */)  + (data->simulationInfo->realVarsPre[415]/* m.no_drone_time[2] DISCRETE */)  + (data->simulationInfo->realVarsPre[416]/* m.no_drone_time[3] DISCRETE */)  + (data->simulationInfo->realVarsPre[417]/* m.no_drone_time[4] DISCRETE */)  + (data->simulationInfo->realVarsPre[418]/* m.no_drone_time[5] DISCRETE */)  + (data->simulationInfo->realVarsPre[419]/* m.no_drone_time[6] DISCRETE */)  + (data->simulationInfo->realVarsPre[420]/* m.no_drone_time[7] DISCRETE */)  + (data->simulationInfo->realVarsPre[421]/* m.no_drone_time[8] DISCRETE */)  + (data->simulationInfo->realVarsPre[422]/* m.no_drone_time[9] DISCRETE */)  + (data->simulationInfo->realVarsPre[423]/* m.no_drone_time[10] DISCRETE */)  + (data->simulationInfo->realVarsPre[424]/* m.no_drone_time[11] DISCRETE */)  + (data->simulationInfo->realVarsPre[425]/* m.no_drone_time[12] DISCRETE */)  + (data->simulationInfo->realVarsPre[426]/* m.no_drone_time[13] DISCRETE */)  + (data->simulationInfo->realVarsPre[427]/* m.no_drone_time[14] DISCRETE */)  + (data->simulationInfo->realVarsPre[428]/* m.no_drone_time[15] DISCRETE */)  + (data->simulationInfo->realVarsPre[429]/* m.no_drone_time[16] DISCRETE */) );

      real_array_create(&tmp209, ((modelica_real*)&((&data->localData[0]->realVars[414]/* m.no_drone_time[1] DISCRETE */)[((modelica_integer) 1) - 1] )), 1, (_index_t)16);
      tmp210 = max_real_array(tmp209);
      tmp211 = Less((data->simulationInfo->realVarsPre[413]/* m.max_no_drone_time DISCRETE */) ,tmp210);
      if(tmp211)
      {
        real_array_create(&tmp212, ((modelica_real*)&((&data->localData[0]->realVars[414]/* m.no_drone_time[1] DISCRETE */)[((modelica_integer) 1) - 1] )), 1, (_index_t)16);
        tmp213 = max_real_array(tmp212);
        (data->localData[0]->realVars[413]/* m.max_no_drone_time DISCRETE */)  = tmp213;
      }

      tmp214 = (data->simulationInfo->realVarsPre[430]/* m.old_avg_drones_all_areas DISCRETE */) ;
      (data->localData[0]->realVars[464]/* m.std_dev_all_areas DISCRETE */)  = sqrt(fabs((data->simulationInfo->realVarsPre[395]/* m.avg_drones_all_areas DISCRETE */)  - ((tmp214 * tmp214))));
    }
    else if(((data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[5]/* $whenCondition14 DISCRETE */)  /* edge */))
    {
      omc_Modelica_Utilities_Files_remove(threadData, MMC_REFSTRINGLIT(tmp215));

      tmp217 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta218 = stringAppend(MMC_REFSTRINGLIT(tmp216),tmp217);
      tmpMeta220 = stringAppend(tmpMeta218,MMC_REFSTRINGLIT(tmp219));
      tmp221 = modelica_real_to_modelica_string(DIVISION_SIM(data->localData[0]->timeValue,3600.0,"3600.0",equationIndexes), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta222 = stringAppend(tmpMeta220,tmp221);
      tmpMeta224 = stringAppend(tmpMeta222,MMC_REFSTRINGLIT(tmp223));
      omc_Modelica_Utilities_Streams_print(threadData, tmpMeta224, MMC_REFSTRINGLIT(tmp225));

      tmp226 = modelica_real_to_modelica_string((data->localData[0]->realVars[395]/* m.avg_drones_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta228 = stringAppend(tmp226,MMC_REFSTRINGLIT(tmp227));
      tmp229 = modelica_real_to_modelica_string((data->localData[0]->realVars[412]/* m.avg_no_drone_time_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta230 = stringAppend(tmpMeta228,tmp229);
      tmpMeta232 = stringAppend(tmpMeta230,MMC_REFSTRINGLIT(tmp231));
      tmp233 = modelica_real_to_modelica_string((data->localData[0]->realVars[413]/* m.max_no_drone_time DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta234 = stringAppend(tmpMeta232,tmp233);
      tmpMeta236 = stringAppend(tmpMeta234,MMC_REFSTRINGLIT(tmp235));
      tmp237 = modelica_real_to_modelica_string((data->localData[0]->realVars[447]/* m.p_drones_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta238 = stringAppend(tmpMeta236,tmp237);
      tmpMeta240 = stringAppend(tmpMeta238,MMC_REFSTRINGLIT(tmp239));
      tmp241 = modelica_real_to_modelica_string((data->localData[0]->realVars[464]/* m.std_dev_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta242 = stringAppend(tmpMeta240,tmp241);
      omc_Modelica_Utilities_Streams_print(threadData, tmpMeta242, MMC_REFSTRINGLIT(tmp243));

      omc_disconnect__from__db(threadData);

      {
        FILE_INFO info = {"/home/parallels/Desktop/Tesi/Drone/Variations/16-aree/monitor.mo",145,2,145,53,0};
        omc_terminate(info, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp244)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 181
type: SIMPLE_ASSIGN
cc_to_drone[2].inputdata[3] = cc.msg_to_drone[2,3]
*/
void System_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  (data->localData[0]->realVars[45]/* cc_to_drone[2].inputdata[3] variable */)  = (data->localData[0]->realVars[114]/* cc.msg_to_drone[2,3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 182
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[1] = cc.msg_to_drone[1,1]
*/
void System_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  (data->localData[0]->realVars[38]/* cc_to_drone[1].inputdata[1] variable */)  = (data->localData[0]->realVars[107]/* cc.msg_to_drone[1,1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 183
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[5] = cc.msg_to_drone[1,5]
*/
void System_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  (data->localData[0]->realVars[42]/* cc_to_drone[1].inputdata[5] variable */)  = (data->localData[0]->realVars[111]/* cc.msg_to_drone[1,5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 184
type: SIMPLE_ASSIGN
cc_to_drone[2].writesignal = cc.writesignal[2]
*/
void System_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  (data->localData[0]->booleanVars[71]/* cc_to_drone[2].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[59]/* cc.writesignal[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 185
type: SIMPLE_ASSIGN
cc_to_drone[2].writesigint = not pre(cc_to_drone[2].writesignal) == cc_to_drone[2].writesignal
*/
void System_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  (data->localData[0]->booleanVars[69]/* cc_to_drone[2].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[71]/* cc_to_drone[2].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[71]/* cc_to_drone[2].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[71]/* cc_to_drone[2].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[71]/* cc_to_drone[2].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 186
type: SIMPLE_ASSIGN
drone_to_cc[2].readsignal = cc.readsignal[2]
*/
void System_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  (data->localData[0]->booleanVars[89]/* drone_to_cc[2].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[53]/* cc.readsignal[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 187
type: SIMPLE_ASSIGN
drone_to_cc[2].readsigint = not pre(drone_to_cc[2].readsignal) == drone_to_cc[2].readsignal
*/
void System_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  (data->localData[0]->booleanVars[87]/* drone_to_cc[2].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[89]/* drone_to_cc[2].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[89]/* drone_to_cc[2].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[89]/* drone_to_cc[2].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[89]/* drone_to_cc[2].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 188
type: SIMPLE_ASSIGN
cc_to_drone[2].inputdata[4] = cc.msg_to_drone[2,4]
*/
void System_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  (data->localData[0]->realVars[46]/* cc_to_drone[2].inputdata[4] variable */)  = (data->localData[0]->realVars[115]/* cc.msg_to_drone[2,4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 189
type: ALGORITHM

  cc_to_drone[2].newest := pre(cc_to_drone[2].newest);
  cc_to_drone[2].oldest := pre(cc_to_drone[2].oldest);
  cc_to_drone[2].fifosize := pre(cc_to_drone[2].fifosize);
  cc_to_drone[2].fifo[10,5] := pre(cc_to_drone[2].fifo[10,5]);
  cc_to_drone[2].fifo[10,4] := pre(cc_to_drone[2].fifo[10,4]);
  cc_to_drone[2].fifo[10,3] := pre(cc_to_drone[2].fifo[10,3]);
  cc_to_drone[2].fifo[10,2] := pre(cc_to_drone[2].fifo[10,2]);
  cc_to_drone[2].fifo[10,1] := pre(cc_to_drone[2].fifo[10,1]);
  cc_to_drone[2].fifo[9,5] := pre(cc_to_drone[2].fifo[9,5]);
  cc_to_drone[2].fifo[9,4] := pre(cc_to_drone[2].fifo[9,4]);
  cc_to_drone[2].fifo[9,3] := pre(cc_to_drone[2].fifo[9,3]);
  cc_to_drone[2].fifo[9,2] := pre(cc_to_drone[2].fifo[9,2]);
  cc_to_drone[2].fifo[9,1] := pre(cc_to_drone[2].fifo[9,1]);
  cc_to_drone[2].fifo[8,5] := pre(cc_to_drone[2].fifo[8,5]);
  cc_to_drone[2].fifo[8,4] := pre(cc_to_drone[2].fifo[8,4]);
  cc_to_drone[2].fifo[8,3] := pre(cc_to_drone[2].fifo[8,3]);
  cc_to_drone[2].fifo[8,2] := pre(cc_to_drone[2].fifo[8,2]);
  cc_to_drone[2].fifo[8,1] := pre(cc_to_drone[2].fifo[8,1]);
  cc_to_drone[2].fifo[7,5] := pre(cc_to_drone[2].fifo[7,5]);
  cc_to_drone[2].fifo[7,4] := pre(cc_to_drone[2].fifo[7,4]);
  cc_to_drone[2].fifo[7,3] := pre(cc_to_drone[2].fifo[7,3]);
  cc_to_drone[2].fifo[7,2] := pre(cc_to_drone[2].fifo[7,2]);
  cc_to_drone[2].fifo[7,1] := pre(cc_to_drone[2].fifo[7,1]);
  cc_to_drone[2].fifo[6,5] := pre(cc_to_drone[2].fifo[6,5]);
  cc_to_drone[2].fifo[6,4] := pre(cc_to_drone[2].fifo[6,4]);
  cc_to_drone[2].fifo[6,3] := pre(cc_to_drone[2].fifo[6,3]);
  cc_to_drone[2].fifo[6,2] := pre(cc_to_drone[2].fifo[6,2]);
  cc_to_drone[2].fifo[6,1] := pre(cc_to_drone[2].fifo[6,1]);
  cc_to_drone[2].fifo[5,5] := pre(cc_to_drone[2].fifo[5,5]);
  cc_to_drone[2].fifo[5,4] := pre(cc_to_drone[2].fifo[5,4]);
  cc_to_drone[2].fifo[5,3] := pre(cc_to_drone[2].fifo[5,3]);
  cc_to_drone[2].fifo[5,2] := pre(cc_to_drone[2].fifo[5,2]);
  cc_to_drone[2].fifo[5,1] := pre(cc_to_drone[2].fifo[5,1]);
  cc_to_drone[2].fifo[4,5] := pre(cc_to_drone[2].fifo[4,5]);
  cc_to_drone[2].fifo[4,4] := pre(cc_to_drone[2].fifo[4,4]);
  cc_to_drone[2].fifo[4,3] := pre(cc_to_drone[2].fifo[4,3]);
  cc_to_drone[2].fifo[4,2] := pre(cc_to_drone[2].fifo[4,2]);
  cc_to_drone[2].fifo[4,1] := pre(cc_to_drone[2].fifo[4,1]);
  cc_to_drone[2].fifo[3,5] := pre(cc_to_drone[2].fifo[3,5]);
  cc_to_drone[2].fifo[3,4] := pre(cc_to_drone[2].fifo[3,4]);
  cc_to_drone[2].fifo[3,3] := pre(cc_to_drone[2].fifo[3,3]);
  cc_to_drone[2].fifo[3,2] := pre(cc_to_drone[2].fifo[3,2]);
  cc_to_drone[2].fifo[3,1] := pre(cc_to_drone[2].fifo[3,1]);
  cc_to_drone[2].fifo[2,5] := pre(cc_to_drone[2].fifo[2,5]);
  cc_to_drone[2].fifo[2,4] := pre(cc_to_drone[2].fifo[2,4]);
  cc_to_drone[2].fifo[2,3] := pre(cc_to_drone[2].fifo[2,3]);
  cc_to_drone[2].fifo[2,2] := pre(cc_to_drone[2].fifo[2,2]);
  cc_to_drone[2].fifo[2,1] := pre(cc_to_drone[2].fifo[2,1]);
  cc_to_drone[2].fifo[1,5] := pre(cc_to_drone[2].fifo[1,5]);
  cc_to_drone[2].fifo[1,4] := pre(cc_to_drone[2].fifo[1,4]);
  cc_to_drone[2].fifo[1,3] := pre(cc_to_drone[2].fifo[1,3]);
  cc_to_drone[2].fifo[1,2] := pre(cc_to_drone[2].fifo[1,2]);
  cc_to_drone[2].fifo[1,1] := pre(cc_to_drone[2].fifo[1,1]);
  cc_to_drone[2].spaceavailable := pre(cc_to_drone[2].spaceavailable);
  cc_to_drone[2].outputdata[5] := pre(cc_to_drone[2].outputdata[5]);
  cc_to_drone[2].outputdata[4] := pre(cc_to_drone[2].outputdata[4]);
  cc_to_drone[2].outputdata[3] := pre(cc_to_drone[2].outputdata[3]);
  cc_to_drone[2].outputdata[2] := pre(cc_to_drone[2].outputdata[2]);
  cc_to_drone[2].outputdata[1] := pre(cc_to_drone[2].outputdata[1]);
  cc_to_drone[2].datavailable := pre(cc_to_drone[2].datavailable);
  $whenCondition9 := pre($whenCondition9);
  $whenCondition8 := pre($whenCondition8);
  $whenCondition7 := pre($whenCondition7);
  $whenCondition7 := pre(cc_to_drone[2].readsigint) and pre(cc_to_drone[2].writesigint);
  $whenCondition8 := pre(cc_to_drone[2].readsigint) and not pre(cc_to_drone[2].writesigint) and pre(cc_to_drone[2].fifosize) >= 1;
  $whenCondition9 := not pre(cc_to_drone[2].readsigint) and pre(cc_to_drone[2].writesigint) and pre(cc_to_drone[2].fifosize) < 10;
  when false then
    cc_to_drone[2].datavailable := false;
    for j in 1:5 loop
      cc_to_drone[2].outputdata[j] := 0.0;
    end for;
    cc_to_drone[2].spaceavailable := true;
    for i in 1:10 loop
      for j in 1:5 loop
        cc_to_drone[2].fifo[i,j] := 0.0;
      end for;
    end for;
    cc_to_drone[2].fifosize := 0;
    cc_to_drone[2].oldest := 1;
    cc_to_drone[2].newest := 1;
  elsewhen $whenCondition7 then
    if pre(cc_to_drone[2].fifosize) < 10 then
      for j in 1:5 loop
        cc_to_drone[2].fifo[pre(cc_to_drone[2].newest),j] := cc_to_drone[2].inputdata[j];
      end for;
      cc_to_drone[2].newest := mod(pre(cc_to_drone[2].newest), 10) + 1;
      for j in 1:5 loop
        cc_to_drone[2].outputdata[j] := cc_to_drone[2].fifo[pre(cc_to_drone[2].oldest),j];
      end for;
      cc_to_drone[2].oldest := mod(pre(cc_to_drone[2].oldest), 10) + 1;
    else
      for j in 1:5 loop
        cc_to_drone[2].outputdata[j] := cc_to_drone[2].fifo[pre(cc_to_drone[2].oldest),j];
      end for;
      cc_to_drone[2].oldest := mod(pre(cc_to_drone[2].oldest), 10) + 1;
      for j in 1:5 loop
        cc_to_drone[2].fifo[pre(cc_to_drone[2].newest),j] := cc_to_drone[2].inputdata[j];
      end for;
      cc_to_drone[2].newest := mod(pre(cc_to_drone[2].newest), 10) + 1;
    end if;
  elsewhen $whenCondition8 then
    for j in 1:5 loop
      cc_to_drone[2].outputdata[j] := cc_to_drone[2].fifo[pre(cc_to_drone[2].oldest),j];
    end for;
    cc_to_drone[2].oldest := mod(pre(cc_to_drone[2].oldest), 10) + 1;
    cc_to_drone[2].fifosize := pre(cc_to_drone[2].fifosize) - 1;
    cc_to_drone[2].datavailable := cc_to_drone[2].fifosize >= 1;
    cc_to_drone[2].spaceavailable := true;
  elsewhen $whenCondition9 then
    for j in 1:5 loop
      cc_to_drone[2].fifo[pre(cc_to_drone[2].newest),j] := cc_to_drone[2].inputdata[j];
    end for;
    cc_to_drone[2].newest := mod(pre(cc_to_drone[2].newest), 10) + 1;
    cc_to_drone[2].fifosize := pre(cc_to_drone[2].fifosize) + 1;
    cc_to_drone[2].datavailable := true;
    cc_to_drone[2].spaceavailable := pre(cc_to_drone[2].fifosize) < 10;
    for j in 1:5 loop
      cc_to_drone[2].outputdata[j] := cc_to_drone[2].fifo[pre(cc_to_drone[2].oldest),j];
    end for;
  end when;
*/
void System_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  modelica_boolean tmp247;
  modelica_boolean tmp248;
  modelica_integer tmp249;
  modelica_integer tmp250;
  modelica_integer tmp251;
  modelica_integer tmp252;
  modelica_integer tmp253;
  modelica_integer tmp254;
  modelica_integer tmp255;
  modelica_integer tmp256;
  modelica_integer tmp257;
  modelica_boolean tmp258;
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
  modelica_integer tmp278;
  modelica_boolean tmp279;
  modelica_integer tmp280;
  modelica_integer tmp281;
  modelica_integer tmp282;
  modelica_integer tmp283;
  modelica_boolean tmp284;
  modelica_integer tmp285;
  modelica_integer tmp286;
  modelica_integer tmp287;
  (data->localData[0]->integerVars[27]/* cc_to_drone[2].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].newest DISCRETE */) ;

  (data->localData[0]->integerVars[29]/* cc_to_drone[2].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[29]/* cc_to_drone[2].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[25]/* cc_to_drone[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[25]/* cc_to_drone[2].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[234]/* cc_to_drone[2].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[234]/* cc_to_drone[2].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[233]/* cc_to_drone[2].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[233]/* cc_to_drone[2].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[232]/* cc_to_drone[2].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[232]/* cc_to_drone[2].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[231]/* cc_to_drone[2].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[231]/* cc_to_drone[2].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[230]/* cc_to_drone[2].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[230]/* cc_to_drone[2].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[229]/* cc_to_drone[2].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[229]/* cc_to_drone[2].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[228]/* cc_to_drone[2].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[228]/* cc_to_drone[2].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[227]/* cc_to_drone[2].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[227]/* cc_to_drone[2].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[226]/* cc_to_drone[2].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[226]/* cc_to_drone[2].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[225]/* cc_to_drone[2].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[225]/* cc_to_drone[2].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[224]/* cc_to_drone[2].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[224]/* cc_to_drone[2].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[223]/* cc_to_drone[2].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[223]/* cc_to_drone[2].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[222]/* cc_to_drone[2].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[222]/* cc_to_drone[2].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[221]/* cc_to_drone[2].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[221]/* cc_to_drone[2].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[220]/* cc_to_drone[2].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[220]/* cc_to_drone[2].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[219]/* cc_to_drone[2].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[219]/* cc_to_drone[2].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[218]/* cc_to_drone[2].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[218]/* cc_to_drone[2].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[217]/* cc_to_drone[2].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[217]/* cc_to_drone[2].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[216]/* cc_to_drone[2].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[216]/* cc_to_drone[2].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[215]/* cc_to_drone[2].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[215]/* cc_to_drone[2].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[214]/* cc_to_drone[2].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[214]/* cc_to_drone[2].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[213]/* cc_to_drone[2].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[213]/* cc_to_drone[2].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[212]/* cc_to_drone[2].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[212]/* cc_to_drone[2].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[211]/* cc_to_drone[2].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[211]/* cc_to_drone[2].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[210]/* cc_to_drone[2].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[210]/* cc_to_drone[2].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[209]/* cc_to_drone[2].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[209]/* cc_to_drone[2].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[208]/* cc_to_drone[2].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[208]/* cc_to_drone[2].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[207]/* cc_to_drone[2].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[207]/* cc_to_drone[2].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[206]/* cc_to_drone[2].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[206]/* cc_to_drone[2].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[205]/* cc_to_drone[2].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[205]/* cc_to_drone[2].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[204]/* cc_to_drone[2].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[204]/* cc_to_drone[2].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[203]/* cc_to_drone[2].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[203]/* cc_to_drone[2].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[202]/* cc_to_drone[2].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[202]/* cc_to_drone[2].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[201]/* cc_to_drone[2].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[201]/* cc_to_drone[2].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[200]/* cc_to_drone[2].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[200]/* cc_to_drone[2].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[199]/* cc_to_drone[2].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[199]/* cc_to_drone[2].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[198]/* cc_to_drone[2].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[198]/* cc_to_drone[2].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[197]/* cc_to_drone[2].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[197]/* cc_to_drone[2].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[196]/* cc_to_drone[2].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[196]/* cc_to_drone[2].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[195]/* cc_to_drone[2].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[195]/* cc_to_drone[2].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[194]/* cc_to_drone[2].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[194]/* cc_to_drone[2].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[193]/* cc_to_drone[2].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[193]/* cc_to_drone[2].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[192]/* cc_to_drone[2].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[192]/* cc_to_drone[2].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[191]/* cc_to_drone[2].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[191]/* cc_to_drone[2].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[190]/* cc_to_drone[2].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[190]/* cc_to_drone[2].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[189]/* cc_to_drone[2].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[189]/* cc_to_drone[2].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[188]/* cc_to_drone[2].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[188]/* cc_to_drone[2].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[187]/* cc_to_drone[2].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[187]/* cc_to_drone[2].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[186]/* cc_to_drone[2].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[186]/* cc_to_drone[2].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[185]/* cc_to_drone[2].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[185]/* cc_to_drone[2].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[67]/* cc_to_drone[2].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[67]/* cc_to_drone[2].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[244]/* cc_to_drone[2].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[244]/* cc_to_drone[2].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[243]/* cc_to_drone[2].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[243]/* cc_to_drone[2].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[242]/* cc_to_drone[2].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[242]/* cc_to_drone[2].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[241]/* cc_to_drone[2].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[241]/* cc_to_drone[2].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[240]/* cc_to_drone[2].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[240]/* cc_to_drone[2].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[61]/* cc_to_drone[2].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[61]/* cc_to_drone[2].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[24]/* $whenCondition9 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[24]/* $whenCondition9 DISCRETE */) ;

  (data->localData[0]->booleanVars[23]/* $whenCondition8 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[23]/* $whenCondition8 DISCRETE */) ;

  (data->localData[0]->booleanVars[22]/* $whenCondition7 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[22]/* $whenCondition7 DISCRETE */) ;

  (data->localData[0]->booleanVars[22]/* $whenCondition7 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[63]/* cc_to_drone[2].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[69]/* cc_to_drone[2].writesigint DISCRETE */) );

  tmp247 = GreaterEq((data->simulationInfo->integerVarsPre[25]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[23]/* $whenCondition8 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[63]/* cc_to_drone[2].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[69]/* cc_to_drone[2].writesigint DISCRETE */) )) && tmp247);

  tmp248 = Less((data->simulationInfo->integerVarsPre[25]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[24]/* $whenCondition9 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[63]/* cc_to_drone[2].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[69]/* cc_to_drone[2].writesigint DISCRETE */) ) && tmp248);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[61]/* cc_to_drone[2].datavailable DISCRETE */)  = 0;

      tmp249 = ((modelica_integer) 1); tmp250 = 1; tmp251 = ((modelica_integer) 5);
      if(!(((tmp250 > 0) && (tmp249 > tmp251)) || ((tmp250 < 0) && (tmp249 < tmp251))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp249, tmp251); j += tmp250)
        {
          (&(data->localData[0]->realVars[235]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[67]/* cc_to_drone[2].spaceavailable DISCRETE */)  = 1;

      tmp255 = ((modelica_integer) 1); tmp256 = 1; tmp257 = ((modelica_integer) 10);
      if(!(((tmp256 > 0) && (tmp255 > tmp257)) || ((tmp256 < 0) && (tmp255 < tmp257))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp255, tmp257); i += tmp256)
        {
          tmp252 = ((modelica_integer) 1); tmp253 = 1; tmp254 = ((modelica_integer) 5);
          if(!(((tmp253 > 0) && (tmp252 > tmp254)) || ((tmp253 < 0) && (tmp252 < tmp254))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp252, tmp254); j += tmp253)
            {
              (&(data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[25]/* cc_to_drone[2].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[29]/* cc_to_drone[2].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[27]/* cc_to_drone[2].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[22]/* $whenCondition7 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[22]/* $whenCondition7 DISCRETE */)  /* edge */))
    {
      tmp258 = Less((data->simulationInfo->integerVarsPre[25]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp258)
      {
        tmp259 = ((modelica_integer) 1); tmp260 = 1; tmp261 = ((modelica_integer) 5);
        if(!(((tmp260 > 0) && (tmp259 > tmp261)) || ((tmp260 < 0) && (tmp259 < tmp261))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp259, tmp261); j += tmp260)
          {
            (&(data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[38]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
          }
        }

        tmp262 = ((modelica_integer) 10);
        if (tmp262 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].newest), 10)");}
        (data->localData[0]->integerVars[27]/* cc_to_drone[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].newest DISCRETE */) , tmp262) + ((modelica_integer) 1);

        tmp263 = ((modelica_integer) 1); tmp264 = 1; tmp265 = ((modelica_integer) 5);
        if(!(((tmp264 > 0) && (tmp263 > tmp265)) || ((tmp264 < 0) && (tmp263 < tmp265))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp263, tmp265); j += tmp264)
          {
            (&(data->localData[0]->realVars[235]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp266 = ((modelica_integer) 10);
        if (tmp266 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].oldest), 10)");}
        (data->localData[0]->integerVars[29]/* cc_to_drone[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[2].oldest DISCRETE */) , tmp266) + ((modelica_integer) 1);
      }
      else
      {
        tmp267 = ((modelica_integer) 1); tmp268 = 1; tmp269 = ((modelica_integer) 5);
        if(!(((tmp268 > 0) && (tmp267 > tmp269)) || ((tmp268 < 0) && (tmp267 < tmp269))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp267, tmp269); j += tmp268)
          {
            (&(data->localData[0]->realVars[235]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp270 = ((modelica_integer) 10);
        if (tmp270 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].oldest), 10)");}
        (data->localData[0]->integerVars[29]/* cc_to_drone[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[2].oldest DISCRETE */) , tmp270) + ((modelica_integer) 1);

        tmp271 = ((modelica_integer) 1); tmp272 = 1; tmp273 = ((modelica_integer) 5);
        if(!(((tmp272 > 0) && (tmp271 > tmp273)) || ((tmp272 < 0) && (tmp271 < tmp273))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp271, tmp273); j += tmp272)
          {
            (&(data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[38]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
          }
        }

        tmp274 = ((modelica_integer) 10);
        if (tmp274 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].newest), 10)");}
        (data->localData[0]->integerVars[27]/* cc_to_drone[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].newest DISCRETE */) , tmp274) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[23]/* $whenCondition8 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[23]/* $whenCondition8 DISCRETE */)  /* edge */))
    {
      tmp275 = ((modelica_integer) 1); tmp276 = 1; tmp277 = ((modelica_integer) 5);
      if(!(((tmp276 > 0) && (tmp275 > tmp277)) || ((tmp276 < 0) && (tmp275 < tmp277))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp275, tmp277); j += tmp276)
        {
          (&(data->localData[0]->realVars[235]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp278 = ((modelica_integer) 10);
      if (tmp278 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].oldest), 10)");}
      (data->localData[0]->integerVars[29]/* cc_to_drone[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[2].oldest DISCRETE */) , tmp278) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[25]/* cc_to_drone[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[25]/* cc_to_drone[2].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp279 = GreaterEq((data->localData[0]->integerVars[25]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[61]/* cc_to_drone[2].datavailable DISCRETE */)  = tmp279;

      (data->localData[0]->booleanVars[67]/* cc_to_drone[2].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[24]/* $whenCondition9 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[24]/* $whenCondition9 DISCRETE */)  /* edge */))
    {
      tmp280 = ((modelica_integer) 1); tmp281 = 1; tmp282 = ((modelica_integer) 5);
      if(!(((tmp281 > 0) && (tmp280 > tmp282)) || ((tmp281 < 0) && (tmp280 < tmp282))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp280, tmp282); j += tmp281)
        {
          (&(data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[38]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
        }
      }

      tmp283 = ((modelica_integer) 10);
      if (tmp283 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].newest), 10)");}
      (data->localData[0]->integerVars[27]/* cc_to_drone[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].newest DISCRETE */) , tmp283) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[25]/* cc_to_drone[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[25]/* cc_to_drone[2].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[61]/* cc_to_drone[2].datavailable DISCRETE */)  = 1;

      tmp284 = Less((data->simulationInfo->integerVarsPre[25]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[67]/* cc_to_drone[2].spaceavailable DISCRETE */)  = tmp284;

      tmp285 = ((modelica_integer) 1); tmp286 = 1; tmp287 = ((modelica_integer) 5);
      if(!(((tmp286 > 0) && (tmp285 > tmp287)) || ((tmp286 < 0) && (tmp285 < tmp287))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp285, tmp287); j += tmp286)
        {
          (&(data->localData[0]->realVars[235]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 190
type: SIMPLE_ASSIGN
d[2].datavailable = cc_to_drone[2].datavailable
*/
void System_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  (data->localData[0]->booleanVars[77]/* d[2].datavailable DISCRETE */)  = (data->localData[0]->booleanVars[61]/* cc_to_drone[2].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 191
type: SIMPLE_ASSIGN
cc.spaceavailable[2] = cc_to_drone[2].spaceavailable
*/
void System_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  (data->localData[0]->booleanVars[57]/* cc.spaceavailable[2] DISCRETE */)  = (data->localData[0]->booleanVars[67]/* cc_to_drone[2].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 192
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[3] = cc.msg_to_drone[1,3]
*/
void System_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  (data->localData[0]->realVars[40]/* cc_to_drone[1].inputdata[3] variable */)  = (data->localData[0]->realVars[109]/* cc.msg_to_drone[1,3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 193
type: SIMPLE_ASSIGN
drone_to_cc[1].readsignal = cc.readsignal[1]
*/
void System_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  (data->localData[0]->booleanVars[88]/* drone_to_cc[1].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[52]/* cc.readsignal[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 194
type: SIMPLE_ASSIGN
drone_to_cc[1].readsigint = not pre(drone_to_cc[1].readsignal) == drone_to_cc[1].readsignal
*/
void System_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  (data->localData[0]->booleanVars[86]/* drone_to_cc[1].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[88]/* drone_to_cc[1].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[88]/* drone_to_cc[1].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[88]/* drone_to_cc[1].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[88]/* drone_to_cc[1].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 195
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[2] = cc.msg_to_drone[1,2]
*/
void System_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  (data->localData[0]->realVars[39]/* cc_to_drone[1].inputdata[2] variable */)  = (data->localData[0]->realVars[108]/* cc.msg_to_drone[1,2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 196
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
  $whenCondition12 := pre($whenCondition12);
  $whenCondition11 := pre($whenCondition11);
  $whenCondition10 := pre($whenCondition10);
  $whenCondition10 := pre(cc_to_drone[1].readsigint) and pre(cc_to_drone[1].writesigint);
  $whenCondition11 := pre(cc_to_drone[1].readsigint) and not pre(cc_to_drone[1].writesigint) and pre(cc_to_drone[1].fifosize) >= 1;
  $whenCondition12 := not pre(cc_to_drone[1].readsigint) and pre(cc_to_drone[1].writesigint) and pre(cc_to_drone[1].fifosize) < 10;
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
  elsewhen $whenCondition10 then
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
  elsewhen $whenCondition11 then
    for j in 1:5 loop
      cc_to_drone[1].outputdata[j] := cc_to_drone[1].fifo[pre(cc_to_drone[1].oldest),j];
    end for;
    cc_to_drone[1].oldest := mod(pre(cc_to_drone[1].oldest), 10) + 1;
    cc_to_drone[1].fifosize := pre(cc_to_drone[1].fifosize) - 1;
    cc_to_drone[1].datavailable := cc_to_drone[1].fifosize >= 1;
    cc_to_drone[1].spaceavailable := true;
  elsewhen $whenCondition12 then
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
void System_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  modelica_boolean tmp289;
  modelica_boolean tmp290;
  modelica_integer tmp291;
  modelica_integer tmp292;
  modelica_integer tmp293;
  modelica_integer tmp294;
  modelica_integer tmp295;
  modelica_integer tmp296;
  modelica_integer tmp297;
  modelica_integer tmp298;
  modelica_integer tmp299;
  modelica_boolean tmp300;
  modelica_integer tmp301;
  modelica_integer tmp302;
  modelica_integer tmp303;
  modelica_integer tmp304;
  modelica_integer tmp305;
  modelica_integer tmp306;
  modelica_integer tmp307;
  modelica_integer tmp308;
  modelica_integer tmp309;
  modelica_integer tmp310;
  modelica_integer tmp311;
  modelica_integer tmp312;
  modelica_integer tmp313;
  modelica_integer tmp314;
  modelica_integer tmp315;
  modelica_integer tmp316;
  modelica_integer tmp317;
  modelica_integer tmp318;
  modelica_integer tmp319;
  modelica_integer tmp320;
  modelica_boolean tmp321;
  modelica_integer tmp322;
  modelica_integer tmp323;
  modelica_integer tmp324;
  modelica_integer tmp325;
  modelica_boolean tmp326;
  modelica_integer tmp327;
  modelica_integer tmp328;
  modelica_integer tmp329;
  (data->localData[0]->integerVars[26]/* cc_to_drone[1].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].newest DISCRETE */) ;

  (data->localData[0]->integerVars[28]/* cc_to_drone[1].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[28]/* cc_to_drone[1].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[24]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[24]/* cc_to_drone[1].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[184]/* cc_to_drone[1].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[184]/* cc_to_drone[1].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[183]/* cc_to_drone[1].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[183]/* cc_to_drone[1].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[182]/* cc_to_drone[1].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[182]/* cc_to_drone[1].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[181]/* cc_to_drone[1].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[181]/* cc_to_drone[1].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[180]/* cc_to_drone[1].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[180]/* cc_to_drone[1].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[179]/* cc_to_drone[1].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[179]/* cc_to_drone[1].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[178]/* cc_to_drone[1].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[178]/* cc_to_drone[1].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[177]/* cc_to_drone[1].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[177]/* cc_to_drone[1].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[176]/* cc_to_drone[1].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[176]/* cc_to_drone[1].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[175]/* cc_to_drone[1].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[175]/* cc_to_drone[1].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[174]/* cc_to_drone[1].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[174]/* cc_to_drone[1].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[173]/* cc_to_drone[1].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[173]/* cc_to_drone[1].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[172]/* cc_to_drone[1].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[172]/* cc_to_drone[1].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[171]/* cc_to_drone[1].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[171]/* cc_to_drone[1].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[170]/* cc_to_drone[1].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[170]/* cc_to_drone[1].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[169]/* cc_to_drone[1].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[169]/* cc_to_drone[1].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[168]/* cc_to_drone[1].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[168]/* cc_to_drone[1].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[167]/* cc_to_drone[1].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[167]/* cc_to_drone[1].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[166]/* cc_to_drone[1].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[166]/* cc_to_drone[1].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[165]/* cc_to_drone[1].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[165]/* cc_to_drone[1].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[164]/* cc_to_drone[1].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[164]/* cc_to_drone[1].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[163]/* cc_to_drone[1].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[163]/* cc_to_drone[1].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[162]/* cc_to_drone[1].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[162]/* cc_to_drone[1].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[161]/* cc_to_drone[1].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[161]/* cc_to_drone[1].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[160]/* cc_to_drone[1].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[160]/* cc_to_drone[1].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[159]/* cc_to_drone[1].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[159]/* cc_to_drone[1].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[158]/* cc_to_drone[1].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[158]/* cc_to_drone[1].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[157]/* cc_to_drone[1].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[157]/* cc_to_drone[1].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[156]/* cc_to_drone[1].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[156]/* cc_to_drone[1].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[155]/* cc_to_drone[1].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[155]/* cc_to_drone[1].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[154]/* cc_to_drone[1].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[154]/* cc_to_drone[1].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[153]/* cc_to_drone[1].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[153]/* cc_to_drone[1].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[152]/* cc_to_drone[1].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[152]/* cc_to_drone[1].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[151]/* cc_to_drone[1].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[151]/* cc_to_drone[1].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[150]/* cc_to_drone[1].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[150]/* cc_to_drone[1].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[149]/* cc_to_drone[1].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[149]/* cc_to_drone[1].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[148]/* cc_to_drone[1].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[148]/* cc_to_drone[1].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[147]/* cc_to_drone[1].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[147]/* cc_to_drone[1].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[146]/* cc_to_drone[1].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[146]/* cc_to_drone[1].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[145]/* cc_to_drone[1].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[145]/* cc_to_drone[1].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[144]/* cc_to_drone[1].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[144]/* cc_to_drone[1].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[143]/* cc_to_drone[1].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[143]/* cc_to_drone[1].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[142]/* cc_to_drone[1].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[142]/* cc_to_drone[1].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[141]/* cc_to_drone[1].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[141]/* cc_to_drone[1].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[140]/* cc_to_drone[1].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[140]/* cc_to_drone[1].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[139]/* cc_to_drone[1].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[139]/* cc_to_drone[1].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[138]/* cc_to_drone[1].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[138]/* cc_to_drone[1].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[137]/* cc_to_drone[1].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[137]/* cc_to_drone[1].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[136]/* cc_to_drone[1].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[136]/* cc_to_drone[1].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[66]/* cc_to_drone[1].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[66]/* cc_to_drone[1].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[239]/* cc_to_drone[1].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[239]/* cc_to_drone[1].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[238]/* cc_to_drone[1].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[238]/* cc_to_drone[1].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[237]/* cc_to_drone[1].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[237]/* cc_to_drone[1].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[236]/* cc_to_drone[1].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[236]/* cc_to_drone[1].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[235]/* cc_to_drone[1].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[235]/* cc_to_drone[1].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[60]/* cc_to_drone[1].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[60]/* cc_to_drone[1].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[3]/* $whenCondition12 DISCRETE */) ;

  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[2]/* $whenCondition11 DISCRETE */) ;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[1]/* $whenCondition10 DISCRETE */) ;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[62]/* cc_to_drone[1].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[68]/* cc_to_drone[1].writesigint DISCRETE */) );

  tmp289 = GreaterEq((data->simulationInfo->integerVarsPre[24]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[62]/* cc_to_drone[1].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[68]/* cc_to_drone[1].writesigint DISCRETE */) )) && tmp289);

  tmp290 = Less((data->simulationInfo->integerVarsPre[24]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[62]/* cc_to_drone[1].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[68]/* cc_to_drone[1].writesigint DISCRETE */) ) && tmp290);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[60]/* cc_to_drone[1].datavailable DISCRETE */)  = 0;

      tmp291 = ((modelica_integer) 1); tmp292 = 1; tmp293 = ((modelica_integer) 5);
      if(!(((tmp292 > 0) && (tmp291 > tmp293)) || ((tmp292 < 0) && (tmp291 < tmp293))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp291, tmp293); j += tmp292)
        {
          (&(data->localData[0]->realVars[235]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[66]/* cc_to_drone[1].spaceavailable DISCRETE */)  = 1;

      tmp297 = ((modelica_integer) 1); tmp298 = 1; tmp299 = ((modelica_integer) 10);
      if(!(((tmp298 > 0) && (tmp297 > tmp299)) || ((tmp298 < 0) && (tmp297 < tmp299))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp297, tmp299); i += tmp298)
        {
          tmp294 = ((modelica_integer) 1); tmp295 = 1; tmp296 = ((modelica_integer) 5);
          if(!(((tmp295 > 0) && (tmp294 > tmp296)) || ((tmp295 < 0) && (tmp294 < tmp296))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp294, tmp296); j += tmp295)
            {
              (&(data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[24]/* cc_to_drone[1].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[28]/* cc_to_drone[1].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[26]/* cc_to_drone[1].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[1]/* $whenCondition10 DISCRETE */)  /* edge */))
    {
      tmp300 = Less((data->simulationInfo->integerVarsPre[24]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp300)
      {
        tmp301 = ((modelica_integer) 1); tmp302 = 1; tmp303 = ((modelica_integer) 5);
        if(!(((tmp302 > 0) && (tmp301 > tmp303)) || ((tmp302 < 0) && (tmp301 < tmp303))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp301, tmp303); j += tmp302)
          {
            (&(data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[38]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
          }
        }

        tmp304 = ((modelica_integer) 10);
        if (tmp304 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].newest), 10)");}
        (data->localData[0]->integerVars[26]/* cc_to_drone[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].newest DISCRETE */) , tmp304) + ((modelica_integer) 1);

        tmp305 = ((modelica_integer) 1); tmp306 = 1; tmp307 = ((modelica_integer) 5);
        if(!(((tmp306 > 0) && (tmp305 > tmp307)) || ((tmp306 < 0) && (tmp305 < tmp307))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp305, tmp307); j += tmp306)
          {
            (&(data->localData[0]->realVars[235]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[28]/* cc_to_drone[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp308 = ((modelica_integer) 10);
        if (tmp308 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].oldest), 10)");}
        (data->localData[0]->integerVars[28]/* cc_to_drone[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[28]/* cc_to_drone[1].oldest DISCRETE */) , tmp308) + ((modelica_integer) 1);
      }
      else
      {
        tmp309 = ((modelica_integer) 1); tmp310 = 1; tmp311 = ((modelica_integer) 5);
        if(!(((tmp310 > 0) && (tmp309 > tmp311)) || ((tmp310 < 0) && (tmp309 < tmp311))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp309, tmp311); j += tmp310)
          {
            (&(data->localData[0]->realVars[235]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[28]/* cc_to_drone[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp312 = ((modelica_integer) 10);
        if (tmp312 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].oldest), 10)");}
        (data->localData[0]->integerVars[28]/* cc_to_drone[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[28]/* cc_to_drone[1].oldest DISCRETE */) , tmp312) + ((modelica_integer) 1);

        tmp313 = ((modelica_integer) 1); tmp314 = 1; tmp315 = ((modelica_integer) 5);
        if(!(((tmp314 > 0) && (tmp313 > tmp315)) || ((tmp314 < 0) && (tmp313 < tmp315))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp313, tmp315); j += tmp314)
          {
            (&(data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[38]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
          }
        }

        tmp316 = ((modelica_integer) 10);
        if (tmp316 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].newest), 10)");}
        (data->localData[0]->integerVars[26]/* cc_to_drone[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].newest DISCRETE */) , tmp316) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[2]/* $whenCondition11 DISCRETE */)  /* edge */))
    {
      tmp317 = ((modelica_integer) 1); tmp318 = 1; tmp319 = ((modelica_integer) 5);
      if(!(((tmp318 > 0) && (tmp317 > tmp319)) || ((tmp318 < 0) && (tmp317 < tmp319))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp317, tmp319); j += tmp318)
        {
          (&(data->localData[0]->realVars[235]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[28]/* cc_to_drone[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp320 = ((modelica_integer) 10);
      if (tmp320 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].oldest), 10)");}
      (data->localData[0]->integerVars[28]/* cc_to_drone[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[28]/* cc_to_drone[1].oldest DISCRETE */) , tmp320) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[24]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[24]/* cc_to_drone[1].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp321 = GreaterEq((data->localData[0]->integerVars[24]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[60]/* cc_to_drone[1].datavailable DISCRETE */)  = tmp321;

      (data->localData[0]->booleanVars[66]/* cc_to_drone[1].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[3]/* $whenCondition12 DISCRETE */)  /* edge */))
    {
      tmp322 = ((modelica_integer) 1); tmp323 = 1; tmp324 = ((modelica_integer) 5);
      if(!(((tmp323 > 0) && (tmp322 > tmp324)) || ((tmp323 < 0) && (tmp322 < tmp324))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp322, tmp324); j += tmp323)
        {
          (&(data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[38]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
        }
      }

      tmp325 = ((modelica_integer) 10);
      if (tmp325 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].newest), 10)");}
      (data->localData[0]->integerVars[26]/* cc_to_drone[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].newest DISCRETE */) , tmp325) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[24]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[24]/* cc_to_drone[1].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[60]/* cc_to_drone[1].datavailable DISCRETE */)  = 1;

      tmp326 = Less((data->simulationInfo->integerVarsPre[24]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[66]/* cc_to_drone[1].spaceavailable DISCRETE */)  = tmp326;

      tmp327 = ((modelica_integer) 1); tmp328 = 1; tmp329 = ((modelica_integer) 5);
      if(!(((tmp328 > 0) && (tmp327 > tmp329)) || ((tmp328 < 0) && (tmp327 < tmp329))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp327, tmp329); j += tmp328)
        {
          (&(data->localData[0]->realVars[235]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[28]/* cc_to_drone[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 197
type: SIMPLE_ASSIGN
d[1].datavailable = cc_to_drone[1].datavailable
*/
void System_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  (data->localData[0]->booleanVars[76]/* d[1].datavailable DISCRETE */)  = (data->localData[0]->booleanVars[60]/* cc_to_drone[1].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 198
type: SIMPLE_ASSIGN
cc.spaceavailable[1] = cc_to_drone[1].spaceavailable
*/
void System_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  (data->localData[0]->booleanVars[56]/* cc.spaceavailable[1] DISCRETE */)  = (data->localData[0]->booleanVars[66]/* cc_to_drone[1].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 199
type: ALGORITHM

  d[2].ctrl.destZ := pre(d[2].ctrl.destZ);
  d[2].ctrl.destY := pre(d[2].ctrl.destY);
  d[2].ctrl.destX := pre(d[2].ctrl.destX);
  $whenCondition18 := pre($whenCondition18);
  $whenCondition17 := pre($whenCondition17);
  $whenCondition17 := sample(5, 0.0, d[2].ctrl.prm.Tdrone) and pre(d[2].ctrl.droneDead);
  $whenCondition18 := sample(5, 0.0, d[2].ctrl.prm.Tdrone);
  when $whenCondition17 then
    d[2].ctrl.destX := pre(d[2].ctrl.x);
    d[2].ctrl.destY := pre(d[2].ctrl.y);
    d[2].ctrl.destZ := 0.0;
  elsewhen $whenCondition18 then
    d[2].ctrl.destX := pre(d[2].ctrl.setx);
    d[2].ctrl.destY := pre(d[2].ctrl.sety);
    d[2].ctrl.destZ := pre(d[2].ctrl.setz);
  end when;
*/
void System_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  (data->localData[0]->realVars[250]/* d[2].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[250]/* d[2].ctrl.destZ DISCRETE */) ;

  (data->localData[0]->realVars[248]/* d[2].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[248]/* d[2].ctrl.destY DISCRETE */) ;

  (data->localData[0]->realVars[246]/* d[2].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[246]/* d[2].ctrl.destX DISCRETE */) ;

  (data->localData[0]->booleanVars[9]/* $whenCondition18 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[9]/* $whenCondition18 DISCRETE */) ;

  (data->localData[0]->booleanVars[8]/* $whenCondition17 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[8]/* $whenCondition17 DISCRETE */) ;

  (data->localData[0]->booleanVars[8]/* $whenCondition17 DISCRETE */)  = (data->simulationInfo->samples[4] && (data->simulationInfo->booleanVarsPre[73]/* d[2].ctrl.droneDead DISCRETE */) );

  (data->localData[0]->booleanVars[9]/* $whenCondition18 DISCRETE */)  = data->simulationInfo->samples[4];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[8]/* $whenCondition17 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[8]/* $whenCondition17 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[246]/* d[2].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[64]/* d[2].ctrl.x variable */) ;

      (data->localData[0]->realVars[248]/* d[2].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[66]/* d[2].ctrl.y variable */) ;

      (data->localData[0]->realVars[250]/* d[2].ctrl.destZ DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[9]/* $whenCondition18 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[9]/* $whenCondition18 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[246]/* d[2].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[58]/* d[2].ctrl.setx variable */) ;

      (data->localData[0]->realVars[248]/* d[2].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[60]/* d[2].ctrl.sety variable */) ;

      (data->localData[0]->realVars[250]/* d[2].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[62]/* d[2].ctrl.setz variable */) ;
    }
  }
  TRACE_POP
}
/*
equation index: 200
type: ALGORITHM

  d[2].d.droneDead := pre(d[2].d.droneDead);
  d[2].d.droneState := pre(d[2].d.droneState);
  d[2].d.battery := pre(d[2].d.battery);
  $whenCondition20 := pre($whenCondition20);
  $whenCondition19 := pre($whenCondition19);
  $whenCondition19 := abs(pre(d[2].d.battery)) < 0.01;
  $whenCondition20 := sample(4, 0.0, d[2].d.p.Tdrone) and pre(d[2].d.droneState) == 1;
  when false then
    d[2].d.battery := d[2].d.p.capacity;
    d[2].d.droneState := 1;
    d[2].d.droneDead := false;
  elsewhen $whenCondition19 then
    d[2].d.droneDead := true;
  elsewhen $whenCondition20 then
    if returnedHome(d[2].d.p, pre(d[2].d.x), pre(d[2].d.y), pre(d[2].d.z)) then
      d[2].d.battery := charging(d[2].d.p, pre(d[2].d.battery));
    else
      d[2].d.battery := batteryMonitor(pre(d[2].d.battery), d[2].d.p.batteryDischarge);
    end if;
  end when;
*/
void System_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  modelica_boolean tmp330;
  real_array tmp332;
  real_array tmp333;
  real_array tmp334;
  real_array tmp335;
  real_array tmp336;
  real_array tmp337;
  (data->localData[0]->booleanVars[75]/* d[2].d.droneDead DISCRETE */)  = (data->simulationInfo->booleanVarsPre[75]/* d[2].d.droneDead DISCRETE */) ;

  (data->localData[0]->integerVars[33]/* d[2].d.droneState DISCRETE */)  = (data->simulationInfo->integerVarsPre[33]/* d[2].d.droneState DISCRETE */) ;

  (data->localData[0]->realVars[252]/* d[2].d.battery DISCRETE */)  = (data->simulationInfo->realVarsPre[252]/* d[2].d.battery DISCRETE */) ;

  (data->localData[0]->booleanVars[12]/* $whenCondition20 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[12]/* $whenCondition20 DISCRETE */) ;

  (data->localData[0]->booleanVars[10]/* $whenCondition19 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[10]/* $whenCondition19 DISCRETE */) ;

  tmp330 = Less(fabs((data->simulationInfo->realVarsPre[252]/* d[2].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[10]/* $whenCondition19 DISCRETE */)  = tmp330;

  (data->localData[0]->booleanVars[12]/* $whenCondition20 DISCRETE */)  = (data->simulationInfo->samples[3] && ((data->simulationInfo->integerVarsPre[33]/* d[2].d.droneState DISCRETE */)  == ((modelica_integer) 1)));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[252]/* d[2].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[881]/* d[2].d.p.capacity PARAM */) ;

      (data->localData[0]->integerVars[33]/* d[2].d.droneState DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->booleanVars[75]/* d[2].d.droneDead DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[10]/* $whenCondition19 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[10]/* $whenCondition19 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->booleanVars[75]/* d[2].d.droneDead DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[12]/* $whenCondition20 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[12]/* $whenCondition20 DISCRETE */)  /* edge */))
    {
      real_array_create(&tmp332, ((modelica_real*)&((&data->simulationInfo->realParameter[902]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 2) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp333, ((modelica_real*)&((&data->simulationInfo->realParameter[896]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 2) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp334, ((modelica_real*)&((&data->simulationInfo->realParameter[682]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 2) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
      if(omc_returnedHome(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[933]/* d[2].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[23]/* d[2].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[25]/* d[2].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[679]/* d[2].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[677]/* d[2].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[681]/* d[2].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[919]/* d[2].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[29]/* d[2].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[883]/* d[2].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[925]/* d[2].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[923]/* d[2].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[887]/* d[2].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[921]/* d[2].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[877]/* d[2].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[889]/* d[2].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[875]/* d[2].d.p.arrivalThreshold PARAM */) , tmp332, tmp333, (data->simulationInfo->realParameter[911]/* d[2].d.p.m PARAM */) , (data->simulationInfo->realParameter[915]/* d[2].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[909]/* d[2].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[937]/* d[2].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[913]/* d[2].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[917]/* d[2].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[891]/* d[2].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[935]/* d[2].d.p.unita PARAM */) , (data->simulationInfo->realParameter[881]/* d[2].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[879]/* d[2].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[885]/* d[2].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[927]/* d[2].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[895]/* d[2].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[893]/* d[2].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[929]/* d[2].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[931]/* d[2].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[27]/* d[2].d.p.nAreas PARAM */) , tmp334), (data->simulationInfo->realVarsPre[7]/* d[2].d.x STATE(1,d[2].d.Vx) */) , (data->simulationInfo->realVarsPre[9]/* d[2].d.y STATE(1,d[2].d.Vy) */) , (data->simulationInfo->realVarsPre[11]/* d[2].d.z STATE(1,d[2].d.Vz) */) ))
      {
        real_array_create(&tmp335, ((modelica_real*)&((&data->simulationInfo->realParameter[902]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 2) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp336, ((modelica_real*)&((&data->simulationInfo->realParameter[896]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 2) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp337, ((modelica_real*)&((&data->simulationInfo->realParameter[682]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 2) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
        (data->localData[0]->realVars[252]/* d[2].d.battery DISCRETE */)  = omc_charging(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[933]/* d[2].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[23]/* d[2].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[25]/* d[2].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[679]/* d[2].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[677]/* d[2].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[681]/* d[2].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[919]/* d[2].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[29]/* d[2].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[883]/* d[2].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[925]/* d[2].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[923]/* d[2].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[887]/* d[2].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[921]/* d[2].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[877]/* d[2].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[889]/* d[2].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[875]/* d[2].d.p.arrivalThreshold PARAM */) , tmp335, tmp336, (data->simulationInfo->realParameter[911]/* d[2].d.p.m PARAM */) , (data->simulationInfo->realParameter[915]/* d[2].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[909]/* d[2].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[937]/* d[2].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[913]/* d[2].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[917]/* d[2].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[891]/* d[2].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[935]/* d[2].d.p.unita PARAM */) , (data->simulationInfo->realParameter[881]/* d[2].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[879]/* d[2].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[885]/* d[2].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[927]/* d[2].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[895]/* d[2].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[893]/* d[2].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[929]/* d[2].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[931]/* d[2].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[27]/* d[2].d.p.nAreas PARAM */) , tmp337), (data->simulationInfo->realVarsPre[252]/* d[2].d.battery DISCRETE */) );
      }
      else
      {
        (data->localData[0]->realVars[252]/* d[2].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[252]/* d[2].d.battery DISCRETE */) , (data->simulationInfo->realParameter[879]/* d[2].d.p.batteryDischarge PARAM */) );
      }
    }
  }
  TRACE_POP
}
/*
equation index: 201
type: SIMPLE_ASSIGN
d[2].ctrl.droneDead = d[2].d.droneDead
*/
void System_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  (data->localData[0]->booleanVars[73]/* d[2].ctrl.droneDead DISCRETE */)  = (data->localData[0]->booleanVars[75]/* d[2].d.droneDead DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 202
type: ALGORITHM

  d[2].comm_state := pre(d[2].comm_state);
  d[2].fifox := pre(d[2].fifox);
  d[2].writesignal := pre(d[2].writesignal);
  d[2].readsignal := pre(d[2].readsignal);
  d[2].flag := pre(d[2].flag);
  d[2].setz := pre(d[2].setz);
  d[2].sety := pre(d[2].sety);
  d[2].setx := pre(d[2].setx);
  d[2].msg_to_cc[5] := pre(d[2].msg_to_cc[5]);
  d[2].msg_to_cc[4] := pre(d[2].msg_to_cc[4]);
  d[2].msg_to_cc[3] := pre(d[2].msg_to_cc[3]);
  d[2].msg_to_cc[2] := pre(d[2].msg_to_cc[2]);
  d[2].msg_to_cc[1] := pre(d[2].msg_to_cc[1]);
  $whenCondition16 := pre($whenCondition16);
  $whenCondition16 := sample(6, 0.0, d[2].p.Tdrone);
  when false then
    d[2].msg_to_cc := {0.0, 0.0, 0.0, 0.0, 0.0};
    d[2].setx := myrandom() * d[2].p.flyZone[1];
    d[2].sety := myrandom() * d[2].p.flyZone[2];
    d[2].setz := myrandom() * d[2].p.flyZone[3];
    d[2].flag := 0;
    d[2].readsignal := false;
    d[2].writesignal := false;
    d[2].fifox := 0;
    d[2].comm_state := 10;
  elsewhen $whenCondition16 then
    if pre(d[2].d.droneDead) then
      d[2].comm_state := 0;
    elseif pre(d[2].comm_state) == 10 then
      (d[2].readsignal, d[2].fifox) := ReadFromFIFO(pre(d[2].fifox), pre(d[2].datavailable), pre(d[2].readsignal));
      if FifoIODone(d[2].fifox) then
        d[2].flag := integer(cc_to_drone[2].outputdata[1]);
        if d[2].flag == 1 then
          d[2].msg_to_cc[1] := 2.0;
          d[2].msg_to_cc[2] := d[2].d.x;
          d[2].msg_to_cc[3] := d[2].d.y;
          d[2].msg_to_cc[4] := d[2].d.z;
          d[2].msg_to_cc[5] := d[2].d.battery;
          d[2].comm_state := 20;
        elseif d[2].flag == 2 then
          d[2].setx := cc_to_drone[2].outputdata[2];
          d[2].sety := cc_to_drone[2].outputdata[3];
          d[2].setz := cc_to_drone[2].outputdata[4];
          d[2].comm_state := pre(d[2].comm_state);
        end if;
        d[2].fifox := 0;
      end if;
    elseif pre(d[2].comm_state) == 20 then
      (d[2].writesignal, d[2].fifox) := WriteToFIFO(pre(d[2].fifox), pre(d[2].writesignal), pre(d[2].spaceavailable));
      if FifoIODone(d[2].fifox) then
        d[2].comm_state := 10;
        d[2].fifox := 0;
      end if;
    else
      d[2].comm_state := pre(d[2].comm_state);
    end if;
  end when;
*/
void System_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  real_array tmp338;
  real_array tmp339;
  (data->localData[0]->integerVars[31]/* d[2].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[31]/* d[2].comm_state DISCRETE */) ;

  (data->localData[0]->integerVars[35]/* d[2].fifox DISCRETE */)  = (data->simulationInfo->integerVarsPre[35]/* d[2].fifox DISCRETE */) ;

  (data->localData[0]->booleanVars[83]/* d[2].writesignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[83]/* d[2].writesignal DISCRETE */) ;

  (data->localData[0]->booleanVars[79]/* d[2].readsignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[79]/* d[2].readsignal DISCRETE */) ;

  (data->localData[0]->integerVars[37]/* d[2].flag DISCRETE */)  = (data->simulationInfo->integerVarsPre[37]/* d[2].flag DISCRETE */) ;

  (data->localData[0]->realVars[268]/* d[2].setz DISCRETE */)  = (data->simulationInfo->realVarsPre[268]/* d[2].setz DISCRETE */) ;

  (data->localData[0]->realVars[266]/* d[2].sety DISCRETE */)  = (data->simulationInfo->realVarsPre[266]/* d[2].sety DISCRETE */) ;

  (data->localData[0]->realVars[264]/* d[2].setx DISCRETE */)  = (data->simulationInfo->realVarsPre[264]/* d[2].setx DISCRETE */) ;

  (data->localData[0]->realVars[262]/* d[2].msg_to_cc[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[262]/* d[2].msg_to_cc[5] DISCRETE */) ;

  (data->localData[0]->realVars[261]/* d[2].msg_to_cc[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[261]/* d[2].msg_to_cc[4] DISCRETE */) ;

  (data->localData[0]->realVars[260]/* d[2].msg_to_cc[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[260]/* d[2].msg_to_cc[3] DISCRETE */) ;

  (data->localData[0]->realVars[259]/* d[2].msg_to_cc[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[259]/* d[2].msg_to_cc[2] DISCRETE */) ;

  (data->localData[0]->realVars[258]/* d[2].msg_to_cc[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[258]/* d[2].msg_to_cc[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[7]/* $whenCondition16 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[7]/* $whenCondition16 DISCRETE */) ;

  (data->localData[0]->booleanVars[7]/* $whenCondition16 DISCRETE */)  = data->simulationInfo->samples[5];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      array_alloc_scalar_real_array(&tmp338, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp339, ((modelica_real*)&((&(data->localData[0]->realVars[253]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
      real_array_copy_data(tmp338, tmp339);

      (data->localData[0]->realVars[264]/* d[2].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1167]/* d[2].p.flyZone[1] PARAM */) );

      (data->localData[0]->realVars[266]/* d[2].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1168]/* d[2].p.flyZone[2] PARAM */) );

      (data->localData[0]->realVars[268]/* d[2].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1169]/* d[2].p.flyZone[3] PARAM */) );

      (data->localData[0]->integerVars[37]/* d[2].flag DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->booleanVars[79]/* d[2].readsignal DISCRETE */)  = 0;

      (data->localData[0]->booleanVars[83]/* d[2].writesignal DISCRETE */)  = 0;

      (data->localData[0]->integerVars[35]/* d[2].fifox DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[31]/* d[2].comm_state DISCRETE */)  = ((modelica_integer) 10);
    }
    else if(((data->localData[0]->booleanVars[7]/* $whenCondition16 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[7]/* $whenCondition16 DISCRETE */)  /* edge */))
    {
      if((data->simulationInfo->booleanVarsPre[75]/* d[2].d.droneDead DISCRETE */) )
      {
        (data->localData[0]->integerVars[31]/* d[2].comm_state DISCRETE */)  = ((modelica_integer) 0);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[31]/* d[2].comm_state DISCRETE */)  == ((modelica_integer) 10)))
        {
          (data->localData[0]->booleanVars[79]/* d[2].readsignal DISCRETE */)  = omc_ReadFromFIFO(threadData, (data->simulationInfo->integerVarsPre[35]/* d[2].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[77]/* d[2].datavailable DISCRETE */) , (data->simulationInfo->booleanVarsPre[79]/* d[2].readsignal DISCRETE */)  ,&(data->localData[0]->integerVars[35]/* d[2].fifox DISCRETE */) );

          if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[35]/* d[2].fifox DISCRETE */) ))
          {
            (data->localData[0]->integerVars[37]/* d[2].flag DISCRETE */)  = ((modelica_integer)floor((data->localData[0]->realVars[240]/* cc_to_drone[2].outputdata[1] DISCRETE */) ));

            if(((data->localData[0]->integerVars[37]/* d[2].flag DISCRETE */)  == ((modelica_integer) 1)))
            {
              (data->localData[0]->realVars[258]/* d[2].msg_to_cc[1] DISCRETE */)  = 2.0;

              (data->localData[0]->realVars[259]/* d[2].msg_to_cc[2] DISCRETE */)  = (data->localData[0]->realVars[7]/* d[2].d.x STATE(1,d[2].d.Vx) */) ;

              (data->localData[0]->realVars[260]/* d[2].msg_to_cc[3] DISCRETE */)  = (data->localData[0]->realVars[9]/* d[2].d.y STATE(1,d[2].d.Vy) */) ;

              (data->localData[0]->realVars[261]/* d[2].msg_to_cc[4] DISCRETE */)  = (data->localData[0]->realVars[11]/* d[2].d.z STATE(1,d[2].d.Vz) */) ;

              (data->localData[0]->realVars[262]/* d[2].msg_to_cc[5] DISCRETE */)  = (data->localData[0]->realVars[252]/* d[2].d.battery DISCRETE */) ;

              (data->localData[0]->integerVars[31]/* d[2].comm_state DISCRETE */)  = ((modelica_integer) 20);
            }
            else
            {
              if(((data->localData[0]->integerVars[37]/* d[2].flag DISCRETE */)  == ((modelica_integer) 2)))
              {
                (data->localData[0]->realVars[264]/* d[2].setx DISCRETE */)  = (data->localData[0]->realVars[241]/* cc_to_drone[2].outputdata[2] DISCRETE */) ;

                (data->localData[0]->realVars[266]/* d[2].sety DISCRETE */)  = (data->localData[0]->realVars[242]/* cc_to_drone[2].outputdata[3] DISCRETE */) ;

                (data->localData[0]->realVars[268]/* d[2].setz DISCRETE */)  = (data->localData[0]->realVars[243]/* cc_to_drone[2].outputdata[4] DISCRETE */) ;

                (data->localData[0]->integerVars[31]/* d[2].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[31]/* d[2].comm_state DISCRETE */) ;
              }
            }

            (data->localData[0]->integerVars[35]/* d[2].fifox DISCRETE */)  = ((modelica_integer) 0);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[31]/* d[2].comm_state DISCRETE */)  == ((modelica_integer) 20)))
          {
            (data->localData[0]->booleanVars[83]/* d[2].writesignal DISCRETE */)  = omc_WriteToFIFO(threadData, (data->simulationInfo->integerVarsPre[35]/* d[2].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[83]/* d[2].writesignal DISCRETE */) , (data->simulationInfo->booleanVarsPre[81]/* d[2].spaceavailable DISCRETE */)  ,&(data->localData[0]->integerVars[35]/* d[2].fifox DISCRETE */) );

            if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[35]/* d[2].fifox DISCRETE */) ))
            {
              (data->localData[0]->integerVars[31]/* d[2].comm_state DISCRETE */)  = ((modelica_integer) 10);

              (data->localData[0]->integerVars[35]/* d[2].fifox DISCRETE */)  = ((modelica_integer) 0);
            }
          }
          else
          {
            (data->localData[0]->integerVars[31]/* d[2].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[31]/* d[2].comm_state DISCRETE */) ;
          }
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 203
type: SIMPLE_ASSIGN
drone_to_cc[2].inputdata[5] = d[2].msg_to_cc[5]
*/
void System_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  (data->localData[0]->realVars[76]/* drone_to_cc[2].inputdata[5] variable */)  = (data->localData[0]->realVars[262]/* d[2].msg_to_cc[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 204
type: SIMPLE_ASSIGN
drone_to_cc[2].inputdata[2] = d[2].msg_to_cc[2]
*/
void System_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  (data->localData[0]->realVars[73]/* drone_to_cc[2].inputdata[2] variable */)  = (data->localData[0]->realVars[259]/* d[2].msg_to_cc[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 205
type: SIMPLE_ASSIGN
drone_to_cc[2].inputdata[4] = d[2].msg_to_cc[4]
*/
void System_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  (data->localData[0]->realVars[75]/* drone_to_cc[2].inputdata[4] variable */)  = (data->localData[0]->realVars[261]/* d[2].msg_to_cc[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 206
type: SIMPLE_ASSIGN
d[2].ctrl.setz = d[2].setz
*/
void System_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  (data->localData[0]->realVars[62]/* d[2].ctrl.setz variable */)  = (data->localData[0]->realVars[268]/* d[2].setz DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 207
type: SIMPLE_ASSIGN
drone_to_cc[2].inputdata[1] = d[2].msg_to_cc[1]
*/
void System_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  (data->localData[0]->realVars[72]/* drone_to_cc[2].inputdata[1] variable */)  = (data->localData[0]->realVars[258]/* d[2].msg_to_cc[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 208
type: SIMPLE_ASSIGN
cc_to_drone[2].readsignal = d[2].readsignal
*/
void System_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  (data->localData[0]->booleanVars[65]/* cc_to_drone[2].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[79]/* d[2].readsignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 209
type: SIMPLE_ASSIGN
cc_to_drone[2].readsigint = not pre(cc_to_drone[2].readsignal) == cc_to_drone[2].readsignal
*/
void System_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  (data->localData[0]->booleanVars[63]/* cc_to_drone[2].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[65]/* cc_to_drone[2].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[65]/* cc_to_drone[2].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[65]/* cc_to_drone[2].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[65]/* cc_to_drone[2].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 210
type: SIMPLE_ASSIGN
d[2].ctrl.sety = d[2].sety
*/
void System_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  (data->localData[0]->realVars[60]/* d[2].ctrl.sety variable */)  = (data->localData[0]->realVars[266]/* d[2].sety DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 211
type: SIMPLE_ASSIGN
drone_to_cc[2].inputdata[3] = d[2].msg_to_cc[3]
*/
void System_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  (data->localData[0]->realVars[74]/* drone_to_cc[2].inputdata[3] variable */)  = (data->localData[0]->realVars[260]/* d[2].msg_to_cc[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 212
type: ALGORITHM

  drone_to_cc[2].newest := pre(drone_to_cc[2].newest);
  drone_to_cc[2].oldest := pre(drone_to_cc[2].oldest);
  drone_to_cc[2].fifosize := pre(drone_to_cc[2].fifosize);
  drone_to_cc[2].fifo[10,5] := pre(drone_to_cc[2].fifo[10,5]);
  drone_to_cc[2].fifo[10,4] := pre(drone_to_cc[2].fifo[10,4]);
  drone_to_cc[2].fifo[10,3] := pre(drone_to_cc[2].fifo[10,3]);
  drone_to_cc[2].fifo[10,2] := pre(drone_to_cc[2].fifo[10,2]);
  drone_to_cc[2].fifo[10,1] := pre(drone_to_cc[2].fifo[10,1]);
  drone_to_cc[2].fifo[9,5] := pre(drone_to_cc[2].fifo[9,5]);
  drone_to_cc[2].fifo[9,4] := pre(drone_to_cc[2].fifo[9,4]);
  drone_to_cc[2].fifo[9,3] := pre(drone_to_cc[2].fifo[9,3]);
  drone_to_cc[2].fifo[9,2] := pre(drone_to_cc[2].fifo[9,2]);
  drone_to_cc[2].fifo[9,1] := pre(drone_to_cc[2].fifo[9,1]);
  drone_to_cc[2].fifo[8,5] := pre(drone_to_cc[2].fifo[8,5]);
  drone_to_cc[2].fifo[8,4] := pre(drone_to_cc[2].fifo[8,4]);
  drone_to_cc[2].fifo[8,3] := pre(drone_to_cc[2].fifo[8,3]);
  drone_to_cc[2].fifo[8,2] := pre(drone_to_cc[2].fifo[8,2]);
  drone_to_cc[2].fifo[8,1] := pre(drone_to_cc[2].fifo[8,1]);
  drone_to_cc[2].fifo[7,5] := pre(drone_to_cc[2].fifo[7,5]);
  drone_to_cc[2].fifo[7,4] := pre(drone_to_cc[2].fifo[7,4]);
  drone_to_cc[2].fifo[7,3] := pre(drone_to_cc[2].fifo[7,3]);
  drone_to_cc[2].fifo[7,2] := pre(drone_to_cc[2].fifo[7,2]);
  drone_to_cc[2].fifo[7,1] := pre(drone_to_cc[2].fifo[7,1]);
  drone_to_cc[2].fifo[6,5] := pre(drone_to_cc[2].fifo[6,5]);
  drone_to_cc[2].fifo[6,4] := pre(drone_to_cc[2].fifo[6,4]);
  drone_to_cc[2].fifo[6,3] := pre(drone_to_cc[2].fifo[6,3]);
  drone_to_cc[2].fifo[6,2] := pre(drone_to_cc[2].fifo[6,2]);
  drone_to_cc[2].fifo[6,1] := pre(drone_to_cc[2].fifo[6,1]);
  drone_to_cc[2].fifo[5,5] := pre(drone_to_cc[2].fifo[5,5]);
  drone_to_cc[2].fifo[5,4] := pre(drone_to_cc[2].fifo[5,4]);
  drone_to_cc[2].fifo[5,3] := pre(drone_to_cc[2].fifo[5,3]);
  drone_to_cc[2].fifo[5,2] := pre(drone_to_cc[2].fifo[5,2]);
  drone_to_cc[2].fifo[5,1] := pre(drone_to_cc[2].fifo[5,1]);
  drone_to_cc[2].fifo[4,5] := pre(drone_to_cc[2].fifo[4,5]);
  drone_to_cc[2].fifo[4,4] := pre(drone_to_cc[2].fifo[4,4]);
  drone_to_cc[2].fifo[4,3] := pre(drone_to_cc[2].fifo[4,3]);
  drone_to_cc[2].fifo[4,2] := pre(drone_to_cc[2].fifo[4,2]);
  drone_to_cc[2].fifo[4,1] := pre(drone_to_cc[2].fifo[4,1]);
  drone_to_cc[2].fifo[3,5] := pre(drone_to_cc[2].fifo[3,5]);
  drone_to_cc[2].fifo[3,4] := pre(drone_to_cc[2].fifo[3,4]);
  drone_to_cc[2].fifo[3,3] := pre(drone_to_cc[2].fifo[3,3]);
  drone_to_cc[2].fifo[3,2] := pre(drone_to_cc[2].fifo[3,2]);
  drone_to_cc[2].fifo[3,1] := pre(drone_to_cc[2].fifo[3,1]);
  drone_to_cc[2].fifo[2,5] := pre(drone_to_cc[2].fifo[2,5]);
  drone_to_cc[2].fifo[2,4] := pre(drone_to_cc[2].fifo[2,4]);
  drone_to_cc[2].fifo[2,3] := pre(drone_to_cc[2].fifo[2,3]);
  drone_to_cc[2].fifo[2,2] := pre(drone_to_cc[2].fifo[2,2]);
  drone_to_cc[2].fifo[2,1] := pre(drone_to_cc[2].fifo[2,1]);
  drone_to_cc[2].fifo[1,5] := pre(drone_to_cc[2].fifo[1,5]);
  drone_to_cc[2].fifo[1,4] := pre(drone_to_cc[2].fifo[1,4]);
  drone_to_cc[2].fifo[1,3] := pre(drone_to_cc[2].fifo[1,3]);
  drone_to_cc[2].fifo[1,2] := pre(drone_to_cc[2].fifo[1,2]);
  drone_to_cc[2].fifo[1,1] := pre(drone_to_cc[2].fifo[1,1]);
  drone_to_cc[2].spaceavailable := pre(drone_to_cc[2].spaceavailable);
  drone_to_cc[2].outputdata[5] := pre(drone_to_cc[2].outputdata[5]);
  drone_to_cc[2].outputdata[4] := pre(drone_to_cc[2].outputdata[4]);
  drone_to_cc[2].outputdata[3] := pre(drone_to_cc[2].outputdata[3]);
  drone_to_cc[2].outputdata[2] := pre(drone_to_cc[2].outputdata[2]);
  drone_to_cc[2].outputdata[1] := pre(drone_to_cc[2].outputdata[1]);
  drone_to_cc[2].datavailable := pre(drone_to_cc[2].datavailable);
  $whenCondition3 := pre($whenCondition3);
  $whenCondition2 := pre($whenCondition2);
  $whenCondition1 := pre($whenCondition1);
  $whenCondition1 := pre(drone_to_cc[2].readsigint) and pre(drone_to_cc[2].writesigint);
  $whenCondition2 := pre(drone_to_cc[2].readsigint) and not pre(drone_to_cc[2].writesigint) and pre(drone_to_cc[2].fifosize) >= 1;
  $whenCondition3 := not pre(drone_to_cc[2].readsigint) and pre(drone_to_cc[2].writesigint) and pre(drone_to_cc[2].fifosize) < 10;
  when false then
    drone_to_cc[2].datavailable := false;
    for j in 1:5 loop
      drone_to_cc[2].outputdata[j] := 0.0;
    end for;
    drone_to_cc[2].spaceavailable := true;
    for i in 1:10 loop
      for j in 1:5 loop
        drone_to_cc[2].fifo[i,j] := 0.0;
      end for;
    end for;
    drone_to_cc[2].fifosize := 0;
    drone_to_cc[2].oldest := 1;
    drone_to_cc[2].newest := 1;
  elsewhen $whenCondition1 then
    if pre(drone_to_cc[2].fifosize) < 10 then
      for j in 1:5 loop
        drone_to_cc[2].fifo[pre(drone_to_cc[2].newest),j] := drone_to_cc[2].inputdata[j];
      end for;
      drone_to_cc[2].newest := mod(pre(drone_to_cc[2].newest), 10) + 1;
      for j in 1:5 loop
        drone_to_cc[2].outputdata[j] := drone_to_cc[2].fifo[pre(drone_to_cc[2].oldest),j];
      end for;
      drone_to_cc[2].oldest := mod(pre(drone_to_cc[2].oldest), 10) + 1;
    else
      for j in 1:5 loop
        drone_to_cc[2].outputdata[j] := drone_to_cc[2].fifo[pre(drone_to_cc[2].oldest),j];
      end for;
      drone_to_cc[2].oldest := mod(pre(drone_to_cc[2].oldest), 10) + 1;
      for j in 1:5 loop
        drone_to_cc[2].fifo[pre(drone_to_cc[2].newest),j] := drone_to_cc[2].inputdata[j];
      end for;
      drone_to_cc[2].newest := mod(pre(drone_to_cc[2].newest), 10) + 1;
    end if;
  elsewhen $whenCondition2 then
    for j in 1:5 loop
      drone_to_cc[2].outputdata[j] := drone_to_cc[2].fifo[pre(drone_to_cc[2].oldest),j];
    end for;
    drone_to_cc[2].oldest := mod(pre(drone_to_cc[2].oldest), 10) + 1;
    drone_to_cc[2].fifosize := pre(drone_to_cc[2].fifosize) - 1;
    drone_to_cc[2].datavailable := drone_to_cc[2].fifosize >= 1;
    drone_to_cc[2].spaceavailable := true;
  elsewhen $whenCondition3 then
    for j in 1:5 loop
      drone_to_cc[2].fifo[pre(drone_to_cc[2].newest),j] := drone_to_cc[2].inputdata[j];
    end for;
    drone_to_cc[2].newest := mod(pre(drone_to_cc[2].newest), 10) + 1;
    drone_to_cc[2].fifosize := pre(drone_to_cc[2].fifosize) + 1;
    drone_to_cc[2].datavailable := true;
    drone_to_cc[2].spaceavailable := pre(drone_to_cc[2].fifosize) < 10;
    for j in 1:5 loop
      drone_to_cc[2].outputdata[j] := drone_to_cc[2].fifo[pre(drone_to_cc[2].oldest),j];
    end for;
  end when;
*/
void System_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  modelica_boolean tmp345;
  modelica_boolean tmp346;
  modelica_integer tmp347;
  modelica_integer tmp348;
  modelica_integer tmp349;
  modelica_integer tmp350;
  modelica_integer tmp351;
  modelica_integer tmp352;
  modelica_integer tmp353;
  modelica_integer tmp354;
  modelica_integer tmp355;
  modelica_boolean tmp356;
  modelica_integer tmp357;
  modelica_integer tmp358;
  modelica_integer tmp359;
  modelica_integer tmp360;
  modelica_integer tmp361;
  modelica_integer tmp362;
  modelica_integer tmp363;
  modelica_integer tmp364;
  modelica_integer tmp365;
  modelica_integer tmp366;
  modelica_integer tmp367;
  modelica_integer tmp368;
  modelica_integer tmp369;
  modelica_integer tmp370;
  modelica_integer tmp371;
  modelica_integer tmp372;
  modelica_integer tmp373;
  modelica_integer tmp374;
  modelica_integer tmp375;
  modelica_integer tmp376;
  modelica_boolean tmp377;
  modelica_integer tmp378;
  modelica_integer tmp379;
  modelica_integer tmp380;
  modelica_integer tmp381;
  modelica_boolean tmp382;
  modelica_integer tmp383;
  modelica_integer tmp384;
  modelica_integer tmp385;
  (data->localData[0]->integerVars[41]/* drone_to_cc[2].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[41]/* drone_to_cc[2].newest DISCRETE */) ;

  (data->localData[0]->integerVars[43]/* drone_to_cc[2].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[43]/* drone_to_cc[2].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[39]/* drone_to_cc[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[39]/* drone_to_cc[2].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[368]/* drone_to_cc[2].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[368]/* drone_to_cc[2].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[367]/* drone_to_cc[2].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[367]/* drone_to_cc[2].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[366]/* drone_to_cc[2].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[366]/* drone_to_cc[2].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[365]/* drone_to_cc[2].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[365]/* drone_to_cc[2].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[364]/* drone_to_cc[2].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[364]/* drone_to_cc[2].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[363]/* drone_to_cc[2].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[363]/* drone_to_cc[2].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[362]/* drone_to_cc[2].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[362]/* drone_to_cc[2].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[361]/* drone_to_cc[2].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[361]/* drone_to_cc[2].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[360]/* drone_to_cc[2].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[360]/* drone_to_cc[2].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[359]/* drone_to_cc[2].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[359]/* drone_to_cc[2].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[358]/* drone_to_cc[2].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[358]/* drone_to_cc[2].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[357]/* drone_to_cc[2].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[357]/* drone_to_cc[2].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[356]/* drone_to_cc[2].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[356]/* drone_to_cc[2].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[355]/* drone_to_cc[2].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[355]/* drone_to_cc[2].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[354]/* drone_to_cc[2].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[354]/* drone_to_cc[2].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[353]/* drone_to_cc[2].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[353]/* drone_to_cc[2].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[352]/* drone_to_cc[2].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[352]/* drone_to_cc[2].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[351]/* drone_to_cc[2].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[351]/* drone_to_cc[2].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[350]/* drone_to_cc[2].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[350]/* drone_to_cc[2].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[349]/* drone_to_cc[2].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[349]/* drone_to_cc[2].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[348]/* drone_to_cc[2].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[348]/* drone_to_cc[2].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[347]/* drone_to_cc[2].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[347]/* drone_to_cc[2].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[346]/* drone_to_cc[2].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[346]/* drone_to_cc[2].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[345]/* drone_to_cc[2].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[345]/* drone_to_cc[2].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[344]/* drone_to_cc[2].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[344]/* drone_to_cc[2].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[343]/* drone_to_cc[2].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[343]/* drone_to_cc[2].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[342]/* drone_to_cc[2].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[342]/* drone_to_cc[2].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[341]/* drone_to_cc[2].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[341]/* drone_to_cc[2].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[340]/* drone_to_cc[2].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[340]/* drone_to_cc[2].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[339]/* drone_to_cc[2].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[339]/* drone_to_cc[2].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[338]/* drone_to_cc[2].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[338]/* drone_to_cc[2].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[337]/* drone_to_cc[2].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[337]/* drone_to_cc[2].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[336]/* drone_to_cc[2].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[336]/* drone_to_cc[2].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[335]/* drone_to_cc[2].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[335]/* drone_to_cc[2].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[334]/* drone_to_cc[2].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[334]/* drone_to_cc[2].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[333]/* drone_to_cc[2].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[333]/* drone_to_cc[2].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[332]/* drone_to_cc[2].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[332]/* drone_to_cc[2].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[331]/* drone_to_cc[2].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[331]/* drone_to_cc[2].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[330]/* drone_to_cc[2].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[330]/* drone_to_cc[2].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[329]/* drone_to_cc[2].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[329]/* drone_to_cc[2].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[328]/* drone_to_cc[2].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[328]/* drone_to_cc[2].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[327]/* drone_to_cc[2].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[327]/* drone_to_cc[2].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[326]/* drone_to_cc[2].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[326]/* drone_to_cc[2].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[325]/* drone_to_cc[2].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[325]/* drone_to_cc[2].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[324]/* drone_to_cc[2].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[324]/* drone_to_cc[2].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[323]/* drone_to_cc[2].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[323]/* drone_to_cc[2].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[322]/* drone_to_cc[2].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[322]/* drone_to_cc[2].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[321]/* drone_to_cc[2].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[321]/* drone_to_cc[2].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[320]/* drone_to_cc[2].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[320]/* drone_to_cc[2].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[319]/* drone_to_cc[2].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[319]/* drone_to_cc[2].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[91]/* drone_to_cc[2].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[91]/* drone_to_cc[2].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[378]/* drone_to_cc[2].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[378]/* drone_to_cc[2].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[377]/* drone_to_cc[2].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[377]/* drone_to_cc[2].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[376]/* drone_to_cc[2].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[376]/* drone_to_cc[2].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[375]/* drone_to_cc[2].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[375]/* drone_to_cc[2].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[374]/* drone_to_cc[2].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[374]/* drone_to_cc[2].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[85]/* drone_to_cc[2].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[85]/* drone_to_cc[2].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[18]/* $whenCondition3 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[18]/* $whenCondition3 DISCRETE */) ;

  (data->localData[0]->booleanVars[11]/* $whenCondition2 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[11]/* $whenCondition2 DISCRETE */) ;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[0]/* $whenCondition1 DISCRETE */) ;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[87]/* drone_to_cc[2].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[93]/* drone_to_cc[2].writesigint DISCRETE */) );

  tmp345 = GreaterEq((data->simulationInfo->integerVarsPre[39]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[11]/* $whenCondition2 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[87]/* drone_to_cc[2].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[93]/* drone_to_cc[2].writesigint DISCRETE */) )) && tmp345);

  tmp346 = Less((data->simulationInfo->integerVarsPre[39]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[18]/* $whenCondition3 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[87]/* drone_to_cc[2].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[93]/* drone_to_cc[2].writesigint DISCRETE */) ) && tmp346);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[85]/* drone_to_cc[2].datavailable DISCRETE */)  = 0;

      tmp347 = ((modelica_integer) 1); tmp348 = 1; tmp349 = ((modelica_integer) 5);
      if(!(((tmp348 > 0) && (tmp347 > tmp349)) || ((tmp348 < 0) && (tmp347 < tmp349))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp347, tmp349); j += tmp348)
        {
          (&(data->localData[0]->realVars[369]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[91]/* drone_to_cc[2].spaceavailable DISCRETE */)  = 1;

      tmp353 = ((modelica_integer) 1); tmp354 = 1; tmp355 = ((modelica_integer) 10);
      if(!(((tmp354 > 0) && (tmp353 > tmp355)) || ((tmp354 < 0) && (tmp353 < tmp355))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp353, tmp355); i += tmp354)
        {
          tmp350 = ((modelica_integer) 1); tmp351 = 1; tmp352 = ((modelica_integer) 5);
          if(!(((tmp351 > 0) && (tmp350 > tmp352)) || ((tmp351 < 0) && (tmp350 < tmp352))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp350, tmp352); j += tmp351)
            {
              (&(data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[39]/* drone_to_cc[2].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[43]/* drone_to_cc[2].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[41]/* drone_to_cc[2].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[0]/* $whenCondition1 DISCRETE */)  /* edge */))
    {
      tmp356 = Less((data->simulationInfo->integerVarsPre[39]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp356)
      {
        tmp357 = ((modelica_integer) 1); tmp358 = 1; tmp359 = ((modelica_integer) 5);
        if(!(((tmp358 > 0) && (tmp357 > tmp359)) || ((tmp358 < 0) && (tmp357 < tmp359))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp357, tmp359); j += tmp358)
          {
            (&(data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[41]/* drone_to_cc[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[67]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
          }
        }

        tmp360 = ((modelica_integer) 10);
        if (tmp360 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].newest), 10)");}
        (data->localData[0]->integerVars[41]/* drone_to_cc[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[41]/* drone_to_cc[2].newest DISCRETE */) , tmp360) + ((modelica_integer) 1);

        tmp361 = ((modelica_integer) 1); tmp362 = 1; tmp363 = ((modelica_integer) 5);
        if(!(((tmp362 > 0) && (tmp361 > tmp363)) || ((tmp362 < 0) && (tmp361 < tmp363))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp361, tmp363); j += tmp362)
          {
            (&(data->localData[0]->realVars[369]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[43]/* drone_to_cc[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp364 = ((modelica_integer) 10);
        if (tmp364 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].oldest), 10)");}
        (data->localData[0]->integerVars[43]/* drone_to_cc[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[43]/* drone_to_cc[2].oldest DISCRETE */) , tmp364) + ((modelica_integer) 1);
      }
      else
      {
        tmp365 = ((modelica_integer) 1); tmp366 = 1; tmp367 = ((modelica_integer) 5);
        if(!(((tmp366 > 0) && (tmp365 > tmp367)) || ((tmp366 < 0) && (tmp365 < tmp367))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp365, tmp367); j += tmp366)
          {
            (&(data->localData[0]->realVars[369]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[43]/* drone_to_cc[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp368 = ((modelica_integer) 10);
        if (tmp368 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].oldest), 10)");}
        (data->localData[0]->integerVars[43]/* drone_to_cc[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[43]/* drone_to_cc[2].oldest DISCRETE */) , tmp368) + ((modelica_integer) 1);

        tmp369 = ((modelica_integer) 1); tmp370 = 1; tmp371 = ((modelica_integer) 5);
        if(!(((tmp370 > 0) && (tmp369 > tmp371)) || ((tmp370 < 0) && (tmp369 < tmp371))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp369, tmp371); j += tmp370)
          {
            (&(data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[41]/* drone_to_cc[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[67]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
          }
        }

        tmp372 = ((modelica_integer) 10);
        if (tmp372 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].newest), 10)");}
        (data->localData[0]->integerVars[41]/* drone_to_cc[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[41]/* drone_to_cc[2].newest DISCRETE */) , tmp372) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[11]/* $whenCondition2 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[11]/* $whenCondition2 DISCRETE */)  /* edge */))
    {
      tmp373 = ((modelica_integer) 1); tmp374 = 1; tmp375 = ((modelica_integer) 5);
      if(!(((tmp374 > 0) && (tmp373 > tmp375)) || ((tmp374 < 0) && (tmp373 < tmp375))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp373, tmp375); j += tmp374)
        {
          (&(data->localData[0]->realVars[369]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[43]/* drone_to_cc[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp376 = ((modelica_integer) 10);
      if (tmp376 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].oldest), 10)");}
      (data->localData[0]->integerVars[43]/* drone_to_cc[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[43]/* drone_to_cc[2].oldest DISCRETE */) , tmp376) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[39]/* drone_to_cc[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[39]/* drone_to_cc[2].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp377 = GreaterEq((data->localData[0]->integerVars[39]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[85]/* drone_to_cc[2].datavailable DISCRETE */)  = tmp377;

      (data->localData[0]->booleanVars[91]/* drone_to_cc[2].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[18]/* $whenCondition3 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[18]/* $whenCondition3 DISCRETE */)  /* edge */))
    {
      tmp378 = ((modelica_integer) 1); tmp379 = 1; tmp380 = ((modelica_integer) 5);
      if(!(((tmp379 > 0) && (tmp378 > tmp380)) || ((tmp379 < 0) && (tmp378 < tmp380))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp378, tmp380); j += tmp379)
        {
          (&(data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[41]/* drone_to_cc[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[67]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
        }
      }

      tmp381 = ((modelica_integer) 10);
      if (tmp381 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].newest), 10)");}
      (data->localData[0]->integerVars[41]/* drone_to_cc[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[41]/* drone_to_cc[2].newest DISCRETE */) , tmp381) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[39]/* drone_to_cc[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[39]/* drone_to_cc[2].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[85]/* drone_to_cc[2].datavailable DISCRETE */)  = 1;

      tmp382 = Less((data->simulationInfo->integerVarsPre[39]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[91]/* drone_to_cc[2].spaceavailable DISCRETE */)  = tmp382;

      tmp383 = ((modelica_integer) 1); tmp384 = 1; tmp385 = ((modelica_integer) 5);
      if(!(((tmp384 > 0) && (tmp383 > tmp385)) || ((tmp384 < 0) && (tmp383 < tmp385))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp383, tmp385); j += tmp384)
        {
          (&(data->localData[0]->realVars[369]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[43]/* drone_to_cc[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 213
type: SIMPLE_ASSIGN
cc.msg_from_drone[2,3] = drone_to_cc[2].outputdata[3]
*/
void System_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  (data->localData[0]->realVars[34]/* cc.msg_from_drone[2,3] variable */)  = (data->localData[0]->realVars[376]/* drone_to_cc[2].outputdata[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 214
type: SIMPLE_ASSIGN
cc.msg_from_drone[2,2] = drone_to_cc[2].outputdata[2]
*/
void System_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  (data->localData[0]->realVars[33]/* cc.msg_from_drone[2,2] variable */)  = (data->localData[0]->realVars[375]/* drone_to_cc[2].outputdata[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 215
type: SIMPLE_ASSIGN
cc.msg_from_drone[2,5] = drone_to_cc[2].outputdata[5]
*/
void System_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  (data->localData[0]->realVars[36]/* cc.msg_from_drone[2,5] variable */)  = (data->localData[0]->realVars[378]/* drone_to_cc[2].outputdata[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 216
type: SIMPLE_ASSIGN
cc.msg_from_drone[2,4] = drone_to_cc[2].outputdata[4]
*/
void System_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  (data->localData[0]->realVars[35]/* cc.msg_from_drone[2,4] variable */)  = (data->localData[0]->realVars[377]/* drone_to_cc[2].outputdata[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 217
type: SIMPLE_ASSIGN
cc.datavailable[2] = drone_to_cc[2].datavailable
*/
void System_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  (data->localData[0]->booleanVars[28]/* cc.datavailable[2] DISCRETE */)  = (data->localData[0]->booleanVars[85]/* drone_to_cc[2].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 218
type: SIMPLE_ASSIGN
d[2].spaceavailable = drone_to_cc[2].spaceavailable
*/
void System_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  (data->localData[0]->booleanVars[81]/* d[2].spaceavailable DISCRETE */)  = (data->localData[0]->booleanVars[91]/* drone_to_cc[2].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 219
type: SIMPLE_ASSIGN
cc.msg_from_drone[2,1] = drone_to_cc[2].outputdata[1]
*/
void System_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  (data->localData[0]->realVars[32]/* cc.msg_from_drone[2,1] variable */)  = (data->localData[0]->realVars[374]/* drone_to_cc[2].outputdata[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 220
type: SIMPLE_ASSIGN
d[2].ctrl.setx = d[2].setx
*/
void System_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  (data->localData[0]->realVars[58]/* d[2].ctrl.setx variable */)  = (data->localData[0]->realVars[264]/* d[2].setx DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 221
type: SIMPLE_ASSIGN
drone_to_cc[2].writesignal = d[2].writesignal
*/
void System_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  (data->localData[0]->booleanVars[95]/* drone_to_cc[2].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[83]/* d[2].writesignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 222
type: SIMPLE_ASSIGN
drone_to_cc[2].writesigint = not pre(drone_to_cc[2].writesignal) == drone_to_cc[2].writesignal
*/
void System_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  (data->localData[0]->booleanVars[93]/* drone_to_cc[2].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[95]/* drone_to_cc[2].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[95]/* drone_to_cc[2].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[95]/* drone_to_cc[2].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[95]/* drone_to_cc[2].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 223
type: SIMPLE_ASSIGN
d[2].batteryPercentage = 100.0 * d[2].d.battery / d[2].p.capacity
*/
void System_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  (data->localData[0]->realVars[50]/* d[2].batteryPercentage variable */)  = (100.0) * (DIVISION_SIM((data->localData[0]->realVars[252]/* d[2].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[1143]/* d[2].p.capacity PARAM */) ,"d[2].p.capacity",equationIndexes));
  TRACE_POP
}
/*
equation index: 224
type: ALGORITHM

  d[1].ctrl.destZ := pre(d[1].ctrl.destZ);
  d[1].ctrl.destY := pre(d[1].ctrl.destY);
  d[1].ctrl.destX := pre(d[1].ctrl.destX);
  $whenCondition23 := pre($whenCondition23);
  $whenCondition22 := pre($whenCondition22);
  $whenCondition22 := sample(2, 0.0, d[1].ctrl.prm.Tdrone) and pre(d[1].ctrl.droneDead);
  $whenCondition23 := sample(2, 0.0, d[1].ctrl.prm.Tdrone);
  when $whenCondition22 then
    d[1].ctrl.destX := pre(d[1].ctrl.x);
    d[1].ctrl.destY := pre(d[1].ctrl.y);
    d[1].ctrl.destZ := 0.0;
  elsewhen $whenCondition23 then
    d[1].ctrl.destX := pre(d[1].ctrl.setx);
    d[1].ctrl.destY := pre(d[1].ctrl.sety);
    d[1].ctrl.destZ := pre(d[1].ctrl.setz);
  end when;
*/
void System_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  (data->localData[0]->realVars[249]/* d[1].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[249]/* d[1].ctrl.destZ DISCRETE */) ;

  (data->localData[0]->realVars[247]/* d[1].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[247]/* d[1].ctrl.destY DISCRETE */) ;

  (data->localData[0]->realVars[245]/* d[1].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[245]/* d[1].ctrl.destX DISCRETE */) ;

  (data->localData[0]->booleanVars[15]/* $whenCondition23 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[15]/* $whenCondition23 DISCRETE */) ;

  (data->localData[0]->booleanVars[14]/* $whenCondition22 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[14]/* $whenCondition22 DISCRETE */) ;

  (data->localData[0]->booleanVars[14]/* $whenCondition22 DISCRETE */)  = (data->simulationInfo->samples[1] && (data->simulationInfo->booleanVarsPre[72]/* d[1].ctrl.droneDead DISCRETE */) );

  (data->localData[0]->booleanVars[15]/* $whenCondition23 DISCRETE */)  = data->simulationInfo->samples[1];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[14]/* $whenCondition22 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[14]/* $whenCondition22 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[245]/* d[1].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[63]/* d[1].ctrl.x variable */) ;

      (data->localData[0]->realVars[247]/* d[1].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[65]/* d[1].ctrl.y variable */) ;

      (data->localData[0]->realVars[249]/* d[1].ctrl.destZ DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[15]/* $whenCondition23 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[15]/* $whenCondition23 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[245]/* d[1].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[57]/* d[1].ctrl.setx variable */) ;

      (data->localData[0]->realVars[247]/* d[1].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[59]/* d[1].ctrl.sety variable */) ;

      (data->localData[0]->realVars[249]/* d[1].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[61]/* d[1].ctrl.setz variable */) ;
    }
  }
  TRACE_POP
}
/*
equation index: 225
type: ALGORITHM

  d[1].d.droneDead := pre(d[1].d.droneDead);
  d[1].d.droneState := pre(d[1].d.droneState);
  d[1].d.battery := pre(d[1].d.battery);
  $whenCondition25 := pre($whenCondition25);
  $whenCondition24 := pre($whenCondition24);
  $whenCondition24 := abs(pre(d[1].d.battery)) < 0.01;
  $whenCondition25 := sample(1, 0.0, d[1].d.p.Tdrone) and pre(d[1].d.droneState) == 1;
  when false then
    d[1].d.battery := d[1].d.p.capacity;
    d[1].d.droneState := 1;
    d[1].d.droneDead := false;
  elsewhen $whenCondition24 then
    d[1].d.droneDead := true;
  elsewhen $whenCondition25 then
    if returnedHome(d[1].d.p, pre(d[1].d.x), pre(d[1].d.y), pre(d[1].d.z)) then
      d[1].d.battery := charging(d[1].d.p, pre(d[1].d.battery));
    else
      d[1].d.battery := batteryMonitor(pre(d[1].d.battery), d[1].d.p.batteryDischarge);
    end if;
  end when;
*/
void System_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  modelica_boolean tmp387;
  real_array tmp389;
  real_array tmp390;
  real_array tmp391;
  real_array tmp392;
  real_array tmp393;
  real_array tmp394;
  (data->localData[0]->booleanVars[74]/* d[1].d.droneDead DISCRETE */)  = (data->simulationInfo->booleanVarsPre[74]/* d[1].d.droneDead DISCRETE */) ;

  (data->localData[0]->integerVars[32]/* d[1].d.droneState DISCRETE */)  = (data->simulationInfo->integerVarsPre[32]/* d[1].d.droneState DISCRETE */) ;

  (data->localData[0]->realVars[251]/* d[1].d.battery DISCRETE */)  = (data->simulationInfo->realVarsPre[251]/* d[1].d.battery DISCRETE */) ;

  (data->localData[0]->booleanVars[17]/* $whenCondition25 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[17]/* $whenCondition25 DISCRETE */) ;

  (data->localData[0]->booleanVars[16]/* $whenCondition24 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[16]/* $whenCondition24 DISCRETE */) ;

  tmp387 = Less(fabs((data->simulationInfo->realVarsPre[251]/* d[1].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[16]/* $whenCondition24 DISCRETE */)  = tmp387;

  (data->localData[0]->booleanVars[17]/* $whenCondition25 DISCRETE */)  = (data->simulationInfo->samples[0] && ((data->simulationInfo->integerVarsPre[32]/* d[1].d.droneState DISCRETE */)  == ((modelica_integer) 1)));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[251]/* d[1].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[880]/* d[1].d.p.capacity PARAM */) ;

      (data->localData[0]->integerVars[32]/* d[1].d.droneState DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->booleanVars[74]/* d[1].d.droneDead DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[16]/* $whenCondition24 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[16]/* $whenCondition24 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->booleanVars[74]/* d[1].d.droneDead DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[17]/* $whenCondition25 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[17]/* $whenCondition25 DISCRETE */)  /* edge */))
    {
      real_array_create(&tmp389, ((modelica_real*)&((&data->simulationInfo->realParameter[902]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp390, ((modelica_real*)&((&data->simulationInfo->realParameter[896]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp391, ((modelica_real*)&((&data->simulationInfo->realParameter[682]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 1) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
      if(omc_returnedHome(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[932]/* d[1].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[22]/* d[1].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[24]/* d[1].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[678]/* d[1].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[676]/* d[1].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[680]/* d[1].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[918]/* d[1].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[28]/* d[1].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[882]/* d[1].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[924]/* d[1].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[922]/* d[1].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[886]/* d[1].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[920]/* d[1].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[876]/* d[1].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[888]/* d[1].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[874]/* d[1].d.p.arrivalThreshold PARAM */) , tmp389, tmp390, (data->simulationInfo->realParameter[910]/* d[1].d.p.m PARAM */) , (data->simulationInfo->realParameter[914]/* d[1].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[908]/* d[1].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[936]/* d[1].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[912]/* d[1].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[916]/* d[1].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[890]/* d[1].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[934]/* d[1].d.p.unita PARAM */) , (data->simulationInfo->realParameter[880]/* d[1].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[878]/* d[1].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[884]/* d[1].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[926]/* d[1].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[894]/* d[1].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[892]/* d[1].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[928]/* d[1].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[930]/* d[1].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[26]/* d[1].d.p.nAreas PARAM */) , tmp391), (data->simulationInfo->realVarsPre[6]/* d[1].d.x STATE(1,d[1].d.Vx) */) , (data->simulationInfo->realVarsPre[8]/* d[1].d.y STATE(1,d[1].d.Vy) */) , (data->simulationInfo->realVarsPre[10]/* d[1].d.z STATE(1,d[1].d.Vz) */) ))
      {
        real_array_create(&tmp392, ((modelica_real*)&((&data->simulationInfo->realParameter[902]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp393, ((modelica_real*)&((&data->simulationInfo->realParameter[896]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp394, ((modelica_real*)&((&data->simulationInfo->realParameter[682]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 1) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
        (data->localData[0]->realVars[251]/* d[1].d.battery DISCRETE */)  = omc_charging(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[932]/* d[1].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[22]/* d[1].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[24]/* d[1].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[678]/* d[1].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[676]/* d[1].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[680]/* d[1].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[918]/* d[1].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[28]/* d[1].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[882]/* d[1].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[924]/* d[1].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[922]/* d[1].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[886]/* d[1].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[920]/* d[1].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[876]/* d[1].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[888]/* d[1].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[874]/* d[1].d.p.arrivalThreshold PARAM */) , tmp392, tmp393, (data->simulationInfo->realParameter[910]/* d[1].d.p.m PARAM */) , (data->simulationInfo->realParameter[914]/* d[1].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[908]/* d[1].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[936]/* d[1].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[912]/* d[1].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[916]/* d[1].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[890]/* d[1].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[934]/* d[1].d.p.unita PARAM */) , (data->simulationInfo->realParameter[880]/* d[1].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[878]/* d[1].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[884]/* d[1].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[926]/* d[1].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[894]/* d[1].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[892]/* d[1].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[928]/* d[1].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[930]/* d[1].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[26]/* d[1].d.p.nAreas PARAM */) , tmp394), (data->simulationInfo->realVarsPre[251]/* d[1].d.battery DISCRETE */) );
      }
      else
      {
        (data->localData[0]->realVars[251]/* d[1].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[251]/* d[1].d.battery DISCRETE */) , (data->simulationInfo->realParameter[878]/* d[1].d.p.batteryDischarge PARAM */) );
      }
    }
  }
  TRACE_POP
}
/*
equation index: 226
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
  $whenCondition21 := pre($whenCondition21);
  $whenCondition21 := sample(3, 0.0, d[1].p.Tdrone);
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
  elsewhen $whenCondition21 then
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
void System_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  real_array tmp395;
  real_array tmp396;
  (data->localData[0]->integerVars[30]/* d[1].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[30]/* d[1].comm_state DISCRETE */) ;

  (data->localData[0]->integerVars[34]/* d[1].fifox DISCRETE */)  = (data->simulationInfo->integerVarsPre[34]/* d[1].fifox DISCRETE */) ;

  (data->localData[0]->booleanVars[82]/* d[1].writesignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[82]/* d[1].writesignal DISCRETE */) ;

  (data->localData[0]->booleanVars[78]/* d[1].readsignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[78]/* d[1].readsignal DISCRETE */) ;

  (data->localData[0]->integerVars[36]/* d[1].flag DISCRETE */)  = (data->simulationInfo->integerVarsPre[36]/* d[1].flag DISCRETE */) ;

  (data->localData[0]->realVars[267]/* d[1].setz DISCRETE */)  = (data->simulationInfo->realVarsPre[267]/* d[1].setz DISCRETE */) ;

  (data->localData[0]->realVars[265]/* d[1].sety DISCRETE */)  = (data->simulationInfo->realVarsPre[265]/* d[1].sety DISCRETE */) ;

  (data->localData[0]->realVars[263]/* d[1].setx DISCRETE */)  = (data->simulationInfo->realVarsPre[263]/* d[1].setx DISCRETE */) ;

  (data->localData[0]->realVars[257]/* d[1].msg_to_cc[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[257]/* d[1].msg_to_cc[5] DISCRETE */) ;

  (data->localData[0]->realVars[256]/* d[1].msg_to_cc[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[256]/* d[1].msg_to_cc[4] DISCRETE */) ;

  (data->localData[0]->realVars[255]/* d[1].msg_to_cc[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[255]/* d[1].msg_to_cc[3] DISCRETE */) ;

  (data->localData[0]->realVars[254]/* d[1].msg_to_cc[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[254]/* d[1].msg_to_cc[2] DISCRETE */) ;

  (data->localData[0]->realVars[253]/* d[1].msg_to_cc[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[253]/* d[1].msg_to_cc[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[13]/* $whenCondition21 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[13]/* $whenCondition21 DISCRETE */) ;

  (data->localData[0]->booleanVars[13]/* $whenCondition21 DISCRETE */)  = data->simulationInfo->samples[2];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      array_alloc_scalar_real_array(&tmp395, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp396, ((modelica_real*)&((&(data->localData[0]->realVars[253]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
      real_array_copy_data(tmp395, tmp396);

      (data->localData[0]->realVars[263]/* d[1].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1164]/* d[1].p.flyZone[1] PARAM */) );

      (data->localData[0]->realVars[265]/* d[1].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1165]/* d[1].p.flyZone[2] PARAM */) );

      (data->localData[0]->realVars[267]/* d[1].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1166]/* d[1].p.flyZone[3] PARAM */) );

      (data->localData[0]->integerVars[36]/* d[1].flag DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->booleanVars[78]/* d[1].readsignal DISCRETE */)  = 0;

      (data->localData[0]->booleanVars[82]/* d[1].writesignal DISCRETE */)  = 0;

      (data->localData[0]->integerVars[34]/* d[1].fifox DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[30]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 10);
    }
    else if(((data->localData[0]->booleanVars[13]/* $whenCondition21 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[13]/* $whenCondition21 DISCRETE */)  /* edge */))
    {
      if((data->simulationInfo->booleanVarsPre[74]/* d[1].d.droneDead DISCRETE */) )
      {
        (data->localData[0]->integerVars[30]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 0);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[30]/* d[1].comm_state DISCRETE */)  == ((modelica_integer) 10)))
        {
          (data->localData[0]->booleanVars[78]/* d[1].readsignal DISCRETE */)  = omc_ReadFromFIFO(threadData, (data->simulationInfo->integerVarsPre[34]/* d[1].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[76]/* d[1].datavailable DISCRETE */) , (data->simulationInfo->booleanVarsPre[78]/* d[1].readsignal DISCRETE */)  ,&(data->localData[0]->integerVars[34]/* d[1].fifox DISCRETE */) );

          if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[34]/* d[1].fifox DISCRETE */) ))
          {
            (data->localData[0]->integerVars[36]/* d[1].flag DISCRETE */)  = ((modelica_integer)floor((data->localData[0]->realVars[235]/* cc_to_drone[1].outputdata[1] DISCRETE */) ));

            if(((data->localData[0]->integerVars[36]/* d[1].flag DISCRETE */)  == ((modelica_integer) 1)))
            {
              (data->localData[0]->realVars[253]/* d[1].msg_to_cc[1] DISCRETE */)  = 2.0;

              (data->localData[0]->realVars[254]/* d[1].msg_to_cc[2] DISCRETE */)  = (data->localData[0]->realVars[6]/* d[1].d.x STATE(1,d[1].d.Vx) */) ;

              (data->localData[0]->realVars[255]/* d[1].msg_to_cc[3] DISCRETE */)  = (data->localData[0]->realVars[8]/* d[1].d.y STATE(1,d[1].d.Vy) */) ;

              (data->localData[0]->realVars[256]/* d[1].msg_to_cc[4] DISCRETE */)  = (data->localData[0]->realVars[10]/* d[1].d.z STATE(1,d[1].d.Vz) */) ;

              (data->localData[0]->realVars[257]/* d[1].msg_to_cc[5] DISCRETE */)  = (data->localData[0]->realVars[251]/* d[1].d.battery DISCRETE */) ;

              (data->localData[0]->integerVars[30]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 20);
            }
            else
            {
              if(((data->localData[0]->integerVars[36]/* d[1].flag DISCRETE */)  == ((modelica_integer) 2)))
              {
                (data->localData[0]->realVars[263]/* d[1].setx DISCRETE */)  = (data->localData[0]->realVars[236]/* cc_to_drone[1].outputdata[2] DISCRETE */) ;

                (data->localData[0]->realVars[265]/* d[1].sety DISCRETE */)  = (data->localData[0]->realVars[237]/* cc_to_drone[1].outputdata[3] DISCRETE */) ;

                (data->localData[0]->realVars[267]/* d[1].setz DISCRETE */)  = (data->localData[0]->realVars[238]/* cc_to_drone[1].outputdata[4] DISCRETE */) ;

                (data->localData[0]->integerVars[30]/* d[1].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[30]/* d[1].comm_state DISCRETE */) ;
              }
            }

            (data->localData[0]->integerVars[34]/* d[1].fifox DISCRETE */)  = ((modelica_integer) 0);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[30]/* d[1].comm_state DISCRETE */)  == ((modelica_integer) 20)))
          {
            (data->localData[0]->booleanVars[82]/* d[1].writesignal DISCRETE */)  = omc_WriteToFIFO(threadData, (data->simulationInfo->integerVarsPre[34]/* d[1].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[82]/* d[1].writesignal DISCRETE */) , (data->simulationInfo->booleanVarsPre[80]/* d[1].spaceavailable DISCRETE */)  ,&(data->localData[0]->integerVars[34]/* d[1].fifox DISCRETE */) );

            if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[34]/* d[1].fifox DISCRETE */) ))
            {
              (data->localData[0]->integerVars[30]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 10);

              (data->localData[0]->integerVars[34]/* d[1].fifox DISCRETE */)  = ((modelica_integer) 0);
            }
          }
          else
          {
            (data->localData[0]->integerVars[30]/* d[1].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[30]/* d[1].comm_state DISCRETE */) ;
          }
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 227
type: SIMPLE_ASSIGN
d[1].ctrl.setx = d[1].setx
*/
void System_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  (data->localData[0]->realVars[57]/* d[1].ctrl.setx variable */)  = (data->localData[0]->realVars[263]/* d[1].setx DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 228
type: SIMPLE_ASSIGN
d[1].ctrl.sety = d[1].sety
*/
void System_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  (data->localData[0]->realVars[59]/* d[1].ctrl.sety variable */)  = (data->localData[0]->realVars[265]/* d[1].sety DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 229
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[5] = d[1].msg_to_cc[5]
*/
void System_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  (data->localData[0]->realVars[71]/* drone_to_cc[1].inputdata[5] variable */)  = (data->localData[0]->realVars[257]/* d[1].msg_to_cc[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 230
type: SIMPLE_ASSIGN
drone_to_cc[1].writesignal = d[1].writesignal
*/
void System_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  (data->localData[0]->booleanVars[94]/* drone_to_cc[1].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[82]/* d[1].writesignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 231
type: SIMPLE_ASSIGN
drone_to_cc[1].writesigint = not pre(drone_to_cc[1].writesignal) == drone_to_cc[1].writesignal
*/
void System_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  (data->localData[0]->booleanVars[92]/* drone_to_cc[1].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[94]/* drone_to_cc[1].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[94]/* drone_to_cc[1].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[94]/* drone_to_cc[1].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[94]/* drone_to_cc[1].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 232
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[2] = d[1].msg_to_cc[2]
*/
void System_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  (data->localData[0]->realVars[68]/* drone_to_cc[1].inputdata[2] variable */)  = (data->localData[0]->realVars[254]/* d[1].msg_to_cc[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 233
type: SIMPLE_ASSIGN
cc_to_drone[1].readsignal = d[1].readsignal
*/
void System_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  (data->localData[0]->booleanVars[64]/* cc_to_drone[1].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[78]/* d[1].readsignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 234
type: SIMPLE_ASSIGN
cc_to_drone[1].readsigint = not pre(cc_to_drone[1].readsignal) == cc_to_drone[1].readsignal
*/
void System_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  (data->localData[0]->booleanVars[62]/* cc_to_drone[1].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[64]/* cc_to_drone[1].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[64]/* cc_to_drone[1].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[64]/* cc_to_drone[1].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[64]/* cc_to_drone[1].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 235
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[4] = d[1].msg_to_cc[4]
*/
void System_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  (data->localData[0]->realVars[70]/* drone_to_cc[1].inputdata[4] variable */)  = (data->localData[0]->realVars[256]/* d[1].msg_to_cc[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 236
type: SIMPLE_ASSIGN
d[1].ctrl.setz = d[1].setz
*/
void System_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  (data->localData[0]->realVars[61]/* d[1].ctrl.setz variable */)  = (data->localData[0]->realVars[267]/* d[1].setz DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 237
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[3] = d[1].msg_to_cc[3]
*/
void System_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  (data->localData[0]->realVars[69]/* drone_to_cc[1].inputdata[3] variable */)  = (data->localData[0]->realVars[255]/* d[1].msg_to_cc[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 238
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[1] = d[1].msg_to_cc[1]
*/
void System_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  (data->localData[0]->realVars[67]/* drone_to_cc[1].inputdata[1] variable */)  = (data->localData[0]->realVars[253]/* d[1].msg_to_cc[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 239
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
  $whenCondition6 := pre($whenCondition6);
  $whenCondition5 := pre($whenCondition5);
  $whenCondition4 := pre($whenCondition4);
  $whenCondition4 := pre(drone_to_cc[1].readsigint) and pre(drone_to_cc[1].writesigint);
  $whenCondition5 := pre(drone_to_cc[1].readsigint) and not pre(drone_to_cc[1].writesigint) and pre(drone_to_cc[1].fifosize) >= 1;
  $whenCondition6 := not pre(drone_to_cc[1].readsigint) and pre(drone_to_cc[1].writesigint) and pre(drone_to_cc[1].fifosize) < 10;
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
  elsewhen $whenCondition4 then
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
  elsewhen $whenCondition5 then
    for j in 1:5 loop
      drone_to_cc[1].outputdata[j] := drone_to_cc[1].fifo[pre(drone_to_cc[1].oldest),j];
    end for;
    drone_to_cc[1].oldest := mod(pre(drone_to_cc[1].oldest), 10) + 1;
    drone_to_cc[1].fifosize := pre(drone_to_cc[1].fifosize) - 1;
    drone_to_cc[1].datavailable := drone_to_cc[1].fifosize >= 1;
    drone_to_cc[1].spaceavailable := true;
  elsewhen $whenCondition6 then
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
void System_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  modelica_boolean tmp403;
  modelica_boolean tmp404;
  modelica_integer tmp405;
  modelica_integer tmp406;
  modelica_integer tmp407;
  modelica_integer tmp408;
  modelica_integer tmp409;
  modelica_integer tmp410;
  modelica_integer tmp411;
  modelica_integer tmp412;
  modelica_integer tmp413;
  modelica_boolean tmp414;
  modelica_integer tmp415;
  modelica_integer tmp416;
  modelica_integer tmp417;
  modelica_integer tmp418;
  modelica_integer tmp419;
  modelica_integer tmp420;
  modelica_integer tmp421;
  modelica_integer tmp422;
  modelica_integer tmp423;
  modelica_integer tmp424;
  modelica_integer tmp425;
  modelica_integer tmp426;
  modelica_integer tmp427;
  modelica_integer tmp428;
  modelica_integer tmp429;
  modelica_integer tmp430;
  modelica_integer tmp431;
  modelica_integer tmp432;
  modelica_integer tmp433;
  modelica_integer tmp434;
  modelica_boolean tmp435;
  modelica_integer tmp436;
  modelica_integer tmp437;
  modelica_integer tmp438;
  modelica_integer tmp439;
  modelica_boolean tmp440;
  modelica_integer tmp441;
  modelica_integer tmp442;
  modelica_integer tmp443;
  (data->localData[0]->integerVars[40]/* drone_to_cc[1].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[40]/* drone_to_cc[1].newest DISCRETE */) ;

  (data->localData[0]->integerVars[42]/* drone_to_cc[1].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[42]/* drone_to_cc[1].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[38]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[38]/* drone_to_cc[1].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[318]/* drone_to_cc[1].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[318]/* drone_to_cc[1].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[317]/* drone_to_cc[1].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[317]/* drone_to_cc[1].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[316]/* drone_to_cc[1].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[316]/* drone_to_cc[1].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[315]/* drone_to_cc[1].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[315]/* drone_to_cc[1].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[314]/* drone_to_cc[1].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[314]/* drone_to_cc[1].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[313]/* drone_to_cc[1].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[313]/* drone_to_cc[1].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[312]/* drone_to_cc[1].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[312]/* drone_to_cc[1].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[311]/* drone_to_cc[1].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[311]/* drone_to_cc[1].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[310]/* drone_to_cc[1].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[310]/* drone_to_cc[1].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[309]/* drone_to_cc[1].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[309]/* drone_to_cc[1].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[308]/* drone_to_cc[1].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[308]/* drone_to_cc[1].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[307]/* drone_to_cc[1].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[307]/* drone_to_cc[1].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[306]/* drone_to_cc[1].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[306]/* drone_to_cc[1].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[305]/* drone_to_cc[1].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[305]/* drone_to_cc[1].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[304]/* drone_to_cc[1].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[304]/* drone_to_cc[1].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[303]/* drone_to_cc[1].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[303]/* drone_to_cc[1].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[302]/* drone_to_cc[1].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[302]/* drone_to_cc[1].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[301]/* drone_to_cc[1].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[301]/* drone_to_cc[1].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[300]/* drone_to_cc[1].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[300]/* drone_to_cc[1].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[299]/* drone_to_cc[1].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[299]/* drone_to_cc[1].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[298]/* drone_to_cc[1].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[298]/* drone_to_cc[1].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[297]/* drone_to_cc[1].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[297]/* drone_to_cc[1].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[296]/* drone_to_cc[1].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[296]/* drone_to_cc[1].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[295]/* drone_to_cc[1].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[295]/* drone_to_cc[1].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[294]/* drone_to_cc[1].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[294]/* drone_to_cc[1].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[293]/* drone_to_cc[1].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[293]/* drone_to_cc[1].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[292]/* drone_to_cc[1].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[292]/* drone_to_cc[1].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[291]/* drone_to_cc[1].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[291]/* drone_to_cc[1].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[290]/* drone_to_cc[1].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[290]/* drone_to_cc[1].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[289]/* drone_to_cc[1].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[289]/* drone_to_cc[1].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[288]/* drone_to_cc[1].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[288]/* drone_to_cc[1].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[287]/* drone_to_cc[1].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[287]/* drone_to_cc[1].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[286]/* drone_to_cc[1].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[286]/* drone_to_cc[1].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[285]/* drone_to_cc[1].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[285]/* drone_to_cc[1].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[284]/* drone_to_cc[1].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[284]/* drone_to_cc[1].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[283]/* drone_to_cc[1].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[283]/* drone_to_cc[1].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[282]/* drone_to_cc[1].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[282]/* drone_to_cc[1].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[281]/* drone_to_cc[1].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[281]/* drone_to_cc[1].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[280]/* drone_to_cc[1].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[280]/* drone_to_cc[1].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[279]/* drone_to_cc[1].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[279]/* drone_to_cc[1].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[278]/* drone_to_cc[1].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[278]/* drone_to_cc[1].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[277]/* drone_to_cc[1].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[277]/* drone_to_cc[1].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[276]/* drone_to_cc[1].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[276]/* drone_to_cc[1].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[275]/* drone_to_cc[1].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[275]/* drone_to_cc[1].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[274]/* drone_to_cc[1].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[274]/* drone_to_cc[1].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[273]/* drone_to_cc[1].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[273]/* drone_to_cc[1].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[272]/* drone_to_cc[1].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[272]/* drone_to_cc[1].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[271]/* drone_to_cc[1].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[271]/* drone_to_cc[1].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[270]/* drone_to_cc[1].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[270]/* drone_to_cc[1].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[90]/* drone_to_cc[1].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[90]/* drone_to_cc[1].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[373]/* drone_to_cc[1].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[373]/* drone_to_cc[1].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[372]/* drone_to_cc[1].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[372]/* drone_to_cc[1].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[371]/* drone_to_cc[1].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[371]/* drone_to_cc[1].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[370]/* drone_to_cc[1].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[370]/* drone_to_cc[1].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[369]/* drone_to_cc[1].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[369]/* drone_to_cc[1].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[84]/* drone_to_cc[1].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[84]/* drone_to_cc[1].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[21]/* $whenCondition6 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[21]/* $whenCondition6 DISCRETE */) ;

  (data->localData[0]->booleanVars[20]/* $whenCondition5 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[20]/* $whenCondition5 DISCRETE */) ;

  (data->localData[0]->booleanVars[19]/* $whenCondition4 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[19]/* $whenCondition4 DISCRETE */) ;

  (data->localData[0]->booleanVars[19]/* $whenCondition4 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[86]/* drone_to_cc[1].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[92]/* drone_to_cc[1].writesigint DISCRETE */) );

  tmp403 = GreaterEq((data->simulationInfo->integerVarsPre[38]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[20]/* $whenCondition5 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[86]/* drone_to_cc[1].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[92]/* drone_to_cc[1].writesigint DISCRETE */) )) && tmp403);

  tmp404 = Less((data->simulationInfo->integerVarsPre[38]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[21]/* $whenCondition6 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[86]/* drone_to_cc[1].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[92]/* drone_to_cc[1].writesigint DISCRETE */) ) && tmp404);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[84]/* drone_to_cc[1].datavailable DISCRETE */)  = 0;

      tmp405 = ((modelica_integer) 1); tmp406 = 1; tmp407 = ((modelica_integer) 5);
      if(!(((tmp406 > 0) && (tmp405 > tmp407)) || ((tmp406 < 0) && (tmp405 < tmp407))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp405, tmp407); j += tmp406)
        {
          (&(data->localData[0]->realVars[369]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[90]/* drone_to_cc[1].spaceavailable DISCRETE */)  = 1;

      tmp411 = ((modelica_integer) 1); tmp412 = 1; tmp413 = ((modelica_integer) 10);
      if(!(((tmp412 > 0) && (tmp411 > tmp413)) || ((tmp412 < 0) && (tmp411 < tmp413))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp411, tmp413); i += tmp412)
        {
          tmp408 = ((modelica_integer) 1); tmp409 = 1; tmp410 = ((modelica_integer) 5);
          if(!(((tmp409 > 0) && (tmp408 > tmp410)) || ((tmp409 < 0) && (tmp408 < tmp410))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp408, tmp410); j += tmp409)
            {
              (&(data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[38]/* drone_to_cc[1].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[42]/* drone_to_cc[1].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[40]/* drone_to_cc[1].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[19]/* $whenCondition4 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[19]/* $whenCondition4 DISCRETE */)  /* edge */))
    {
      tmp414 = Less((data->simulationInfo->integerVarsPre[38]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp414)
      {
        tmp415 = ((modelica_integer) 1); tmp416 = 1; tmp417 = ((modelica_integer) 5);
        if(!(((tmp416 > 0) && (tmp415 > tmp417)) || ((tmp416 < 0) && (tmp415 < tmp417))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp415, tmp417); j += tmp416)
          {
            (&(data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[40]/* drone_to_cc[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[67]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
          }
        }

        tmp418 = ((modelica_integer) 10);
        if (tmp418 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].newest), 10)");}
        (data->localData[0]->integerVars[40]/* drone_to_cc[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[40]/* drone_to_cc[1].newest DISCRETE */) , tmp418) + ((modelica_integer) 1);

        tmp419 = ((modelica_integer) 1); tmp420 = 1; tmp421 = ((modelica_integer) 5);
        if(!(((tmp420 > 0) && (tmp419 > tmp421)) || ((tmp420 < 0) && (tmp419 < tmp421))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp419, tmp421); j += tmp420)
          {
            (&(data->localData[0]->realVars[369]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[42]/* drone_to_cc[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp422 = ((modelica_integer) 10);
        if (tmp422 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].oldest), 10)");}
        (data->localData[0]->integerVars[42]/* drone_to_cc[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[42]/* drone_to_cc[1].oldest DISCRETE */) , tmp422) + ((modelica_integer) 1);
      }
      else
      {
        tmp423 = ((modelica_integer) 1); tmp424 = 1; tmp425 = ((modelica_integer) 5);
        if(!(((tmp424 > 0) && (tmp423 > tmp425)) || ((tmp424 < 0) && (tmp423 < tmp425))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp423, tmp425); j += tmp424)
          {
            (&(data->localData[0]->realVars[369]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[42]/* drone_to_cc[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp426 = ((modelica_integer) 10);
        if (tmp426 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].oldest), 10)");}
        (data->localData[0]->integerVars[42]/* drone_to_cc[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[42]/* drone_to_cc[1].oldest DISCRETE */) , tmp426) + ((modelica_integer) 1);

        tmp427 = ((modelica_integer) 1); tmp428 = 1; tmp429 = ((modelica_integer) 5);
        if(!(((tmp428 > 0) && (tmp427 > tmp429)) || ((tmp428 < 0) && (tmp427 < tmp429))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp427, tmp429); j += tmp428)
          {
            (&(data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[40]/* drone_to_cc[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[67]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
          }
        }

        tmp430 = ((modelica_integer) 10);
        if (tmp430 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].newest), 10)");}
        (data->localData[0]->integerVars[40]/* drone_to_cc[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[40]/* drone_to_cc[1].newest DISCRETE */) , tmp430) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[20]/* $whenCondition5 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[20]/* $whenCondition5 DISCRETE */)  /* edge */))
    {
      tmp431 = ((modelica_integer) 1); tmp432 = 1; tmp433 = ((modelica_integer) 5);
      if(!(((tmp432 > 0) && (tmp431 > tmp433)) || ((tmp432 < 0) && (tmp431 < tmp433))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp431, tmp433); j += tmp432)
        {
          (&(data->localData[0]->realVars[369]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[42]/* drone_to_cc[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp434 = ((modelica_integer) 10);
      if (tmp434 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].oldest), 10)");}
      (data->localData[0]->integerVars[42]/* drone_to_cc[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[42]/* drone_to_cc[1].oldest DISCRETE */) , tmp434) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[38]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[38]/* drone_to_cc[1].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp435 = GreaterEq((data->localData[0]->integerVars[38]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[84]/* drone_to_cc[1].datavailable DISCRETE */)  = tmp435;

      (data->localData[0]->booleanVars[90]/* drone_to_cc[1].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[21]/* $whenCondition6 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[21]/* $whenCondition6 DISCRETE */)  /* edge */))
    {
      tmp436 = ((modelica_integer) 1); tmp437 = 1; tmp438 = ((modelica_integer) 5);
      if(!(((tmp437 > 0) && (tmp436 > tmp438)) || ((tmp437 < 0) && (tmp436 < tmp438))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp436, tmp438); j += tmp437)
        {
          (&(data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[40]/* drone_to_cc[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[67]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
        }
      }

      tmp439 = ((modelica_integer) 10);
      if (tmp439 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].newest), 10)");}
      (data->localData[0]->integerVars[40]/* drone_to_cc[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[40]/* drone_to_cc[1].newest DISCRETE */) , tmp439) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[38]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[38]/* drone_to_cc[1].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[84]/* drone_to_cc[1].datavailable DISCRETE */)  = 1;

      tmp440 = Less((data->simulationInfo->integerVarsPre[38]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[90]/* drone_to_cc[1].spaceavailable DISCRETE */)  = tmp440;

      tmp441 = ((modelica_integer) 1); tmp442 = 1; tmp443 = ((modelica_integer) 5);
      if(!(((tmp442 > 0) && (tmp441 > tmp443)) || ((tmp442 < 0) && (tmp441 < tmp443))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp441, tmp443); j += tmp442)
        {
          (&(data->localData[0]->realVars[369]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[42]/* drone_to_cc[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 240
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,1] = drone_to_cc[1].outputdata[1]
*/
void System_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  (data->localData[0]->realVars[27]/* cc.msg_from_drone[1,1] variable */)  = (data->localData[0]->realVars[369]/* drone_to_cc[1].outputdata[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 241
type: SIMPLE_ASSIGN
d[1].spaceavailable = drone_to_cc[1].spaceavailable
*/
void System_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  (data->localData[0]->booleanVars[80]/* d[1].spaceavailable DISCRETE */)  = (data->localData[0]->booleanVars[90]/* drone_to_cc[1].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 242
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,4] = drone_to_cc[1].outputdata[4]
*/
void System_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  (data->localData[0]->realVars[30]/* cc.msg_from_drone[1,4] variable */)  = (data->localData[0]->realVars[372]/* drone_to_cc[1].outputdata[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 243
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,3] = drone_to_cc[1].outputdata[3]
*/
void System_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  (data->localData[0]->realVars[29]/* cc.msg_from_drone[1,3] variable */)  = (data->localData[0]->realVars[371]/* drone_to_cc[1].outputdata[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 244
type: SIMPLE_ASSIGN
cc.datavailable[1] = drone_to_cc[1].datavailable
*/
void System_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  (data->localData[0]->booleanVars[27]/* cc.datavailable[1] DISCRETE */)  = (data->localData[0]->booleanVars[84]/* drone_to_cc[1].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 245
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,2] = drone_to_cc[1].outputdata[2]
*/
void System_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  (data->localData[0]->realVars[28]/* cc.msg_from_drone[1,2] variable */)  = (data->localData[0]->realVars[370]/* drone_to_cc[1].outputdata[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 246
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,5] = drone_to_cc[1].outputdata[5]
*/
void System_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  (data->localData[0]->realVars[31]/* cc.msg_from_drone[1,5] variable */)  = (data->localData[0]->realVars[373]/* drone_to_cc[1].outputdata[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 247
type: SIMPLE_ASSIGN
d[1].batteryPercentage = 100.0 * d[1].d.battery / d[1].p.capacity
*/
void System_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  (data->localData[0]->realVars[49]/* d[1].batteryPercentage variable */)  = (100.0) * (DIVISION_SIM((data->localData[0]->realVars[251]/* d[1].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[1142]/* d[1].p.capacity PARAM */) ,"d[1].p.capacity",equationIndexes));
  TRACE_POP
}
/*
equation index: 248
type: SIMPLE_ASSIGN
d[1].ctrl.droneDead = d[1].d.droneDead
*/
void System_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  (data->localData[0]->booleanVars[72]/* d[1].ctrl.droneDead DISCRETE */)  = (data->localData[0]->booleanVars[74]/* d[1].d.droneDead DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 249
type: SIMPLE_ASSIGN
d[2].ctrl.y = d[2].d.y
*/
void System_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  (data->localData[0]->realVars[66]/* d[2].ctrl.y variable */)  = (data->localData[0]->realVars[9]/* d[2].d.y STATE(1,d[2].d.Vy) */) ;
  TRACE_POP
}
/*
equation index: 250
type: SIMPLE_ASSIGN
d[2].ctrl.Trusty = d[2].ctrl.prm.m * (d[2].ctrl.ky1 * (d[2].ctrl.y - pre(d[2].ctrl.destY)) + d[2].ctrl.ky2 * d[2].d.Vy)
*/
void System_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  (data->localData[0]->realVars[54]/* d[2].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[649]/* d[2].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[405]/* d[2].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[66]/* d[2].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[248]/* d[2].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[407]/* d[2].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[3]/* d[2].d.Vy STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 251
type: SIMPLE_ASSIGN
$DER.d[2].d.Vy = d[2].ctrl.Trusty / d[2].d.p.m
*/
void System_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  (data->localData[0]->realVars[15]/* der(d[2].d.Vy) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[54]/* d[2].ctrl.Trusty variable */) ,(data->simulationInfo->realParameter[911]/* d[2].d.p.m PARAM */) ,"d[2].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 252
type: SIMPLE_ASSIGN
d[2].ctrl.x = d[2].d.x
*/
void System_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  (data->localData[0]->realVars[64]/* d[2].ctrl.x variable */)  = (data->localData[0]->realVars[7]/* d[2].d.x STATE(1,d[2].d.Vx) */) ;
  TRACE_POP
}
/*
equation index: 253
type: SIMPLE_ASSIGN
d[2].ctrl.Trustx = d[2].ctrl.prm.m * (d[2].ctrl.kx1 * (d[2].ctrl.x - pre(d[2].ctrl.destX)) + d[2].ctrl.kx2 * d[2].d.Vx)
*/
void System_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  (data->localData[0]->realVars[52]/* d[2].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[649]/* d[2].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[401]/* d[2].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[64]/* d[2].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[246]/* d[2].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[403]/* d[2].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[1]/* d[2].d.Vx STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 254
type: SIMPLE_ASSIGN
$DER.d[2].d.Vx = d[2].ctrl.Trustx / d[2].d.p.m
*/
void System_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  (data->localData[0]->realVars[13]/* der(d[2].d.Vx) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[52]/* d[2].ctrl.Trustx variable */) ,(data->simulationInfo->realParameter[911]/* d[2].d.p.m PARAM */) ,"d[2].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 255
type: SIMPLE_ASSIGN
d[1].ctrl.y = d[1].d.y
*/
void System_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  (data->localData[0]->realVars[65]/* d[1].ctrl.y variable */)  = (data->localData[0]->realVars[8]/* d[1].d.y STATE(1,d[1].d.Vy) */) ;
  TRACE_POP
}
/*
equation index: 256
type: SIMPLE_ASSIGN
d[1].ctrl.Trusty = d[1].ctrl.prm.m * (d[1].ctrl.ky1 * (d[1].ctrl.y - pre(d[1].ctrl.destY)) + d[1].ctrl.ky2 * d[1].d.Vy)
*/
void System_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  (data->localData[0]->realVars[53]/* d[1].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[648]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[404]/* d[1].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[65]/* d[1].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[247]/* d[1].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[406]/* d[1].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[2]/* d[1].d.Vy STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 257
type: SIMPLE_ASSIGN
$DER.d[1].d.Vy = d[1].ctrl.Trusty / d[1].d.p.m
*/
void System_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  (data->localData[0]->realVars[14]/* der(d[1].d.Vy) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[53]/* d[1].ctrl.Trusty variable */) ,(data->simulationInfo->realParameter[910]/* d[1].d.p.m PARAM */) ,"d[1].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 258
type: SIMPLE_ASSIGN
d[1].ctrl.x = d[1].d.x
*/
void System_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  (data->localData[0]->realVars[63]/* d[1].ctrl.x variable */)  = (data->localData[0]->realVars[6]/* d[1].d.x STATE(1,d[1].d.Vx) */) ;
  TRACE_POP
}
/*
equation index: 259
type: SIMPLE_ASSIGN
d[1].ctrl.Trustx = d[1].ctrl.prm.m * (d[1].ctrl.kx1 * (d[1].ctrl.x - pre(d[1].ctrl.destX)) + d[1].ctrl.kx2 * d[1].d.Vx)
*/
void System_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  (data->localData[0]->realVars[51]/* d[1].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[648]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[400]/* d[1].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[63]/* d[1].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[245]/* d[1].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[402]/* d[1].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 260
type: SIMPLE_ASSIGN
$DER.d[1].d.Vx = d[1].ctrl.Trustx / d[1].d.p.m
*/
void System_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  (data->localData[0]->realVars[12]/* der(d[1].d.Vx) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[51]/* d[1].ctrl.Trustx variable */) ,(data->simulationInfo->realParameter[910]/* d[1].d.p.m PARAM */) ,"d[1].d.p.m",equationIndexes);
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
  System_eqFunction_156(data, threadData);

  System_eqFunction_157(data, threadData);

  System_eqFunction_158(data, threadData);

  System_eqFunction_159(data, threadData);

  System_eqFunction_160(data, threadData);

  System_eqFunction_161(data, threadData);

  System_eqFunction_162(data, threadData);

  System_eqFunction_163(data, threadData);

  System_eqFunction_164(data, threadData);

  System_eqFunction_165(data, threadData);

  System_eqFunction_166(data, threadData);

  System_eqFunction_167(data, threadData);

  System_eqFunction_168(data, threadData);

  System_eqFunction_169(data, threadData);

  System_eqFunction_170(data, threadData);

  System_eqFunction_171(data, threadData);

  System_eqFunction_172(data, threadData);

  System_eqFunction_173(data, threadData);

  System_eqFunction_174(data, threadData);

  System_eqFunction_175(data, threadData);

  System_eqFunction_176(data, threadData);

  System_eqFunction_177(data, threadData);

  System_eqFunction_178(data, threadData);

  System_eqFunction_179(data, threadData);

  System_eqFunction_180(data, threadData);

  System_eqFunction_181(data, threadData);

  System_eqFunction_182(data, threadData);

  System_eqFunction_183(data, threadData);

  System_eqFunction_184(data, threadData);

  System_eqFunction_185(data, threadData);

  System_eqFunction_186(data, threadData);

  System_eqFunction_187(data, threadData);

  System_eqFunction_188(data, threadData);

  System_eqFunction_189(data, threadData);

  System_eqFunction_190(data, threadData);

  System_eqFunction_191(data, threadData);

  System_eqFunction_192(data, threadData);

  System_eqFunction_193(data, threadData);

  System_eqFunction_194(data, threadData);

  System_eqFunction_195(data, threadData);

  System_eqFunction_196(data, threadData);

  System_eqFunction_197(data, threadData);

  System_eqFunction_198(data, threadData);

  System_eqFunction_199(data, threadData);

  System_eqFunction_200(data, threadData);

  System_eqFunction_201(data, threadData);

  System_eqFunction_202(data, threadData);

  System_eqFunction_203(data, threadData);

  System_eqFunction_204(data, threadData);

  System_eqFunction_205(data, threadData);

  System_eqFunction_206(data, threadData);

  System_eqFunction_207(data, threadData);

  System_eqFunction_208(data, threadData);

  System_eqFunction_209(data, threadData);

  System_eqFunction_210(data, threadData);

  System_eqFunction_211(data, threadData);

  System_eqFunction_212(data, threadData);

  System_eqFunction_213(data, threadData);

  System_eqFunction_214(data, threadData);

  System_eqFunction_215(data, threadData);

  System_eqFunction_216(data, threadData);

  System_eqFunction_217(data, threadData);

  System_eqFunction_218(data, threadData);

  System_eqFunction_219(data, threadData);

  System_eqFunction_220(data, threadData);

  System_eqFunction_221(data, threadData);

  System_eqFunction_222(data, threadData);

  System_eqFunction_223(data, threadData);

  System_eqFunction_224(data, threadData);

  System_eqFunction_225(data, threadData);

  System_eqFunction_226(data, threadData);

  System_eqFunction_227(data, threadData);

  System_eqFunction_228(data, threadData);

  System_eqFunction_229(data, threadData);

  System_eqFunction_230(data, threadData);

  System_eqFunction_231(data, threadData);

  System_eqFunction_232(data, threadData);

  System_eqFunction_233(data, threadData);

  System_eqFunction_234(data, threadData);

  System_eqFunction_235(data, threadData);

  System_eqFunction_236(data, threadData);

  System_eqFunction_237(data, threadData);

  System_eqFunction_238(data, threadData);

  System_eqFunction_239(data, threadData);

  System_eqFunction_240(data, threadData);

  System_eqFunction_241(data, threadData);

  System_eqFunction_242(data, threadData);

  System_eqFunction_243(data, threadData);

  System_eqFunction_244(data, threadData);

  System_eqFunction_245(data, threadData);

  System_eqFunction_246(data, threadData);

  System_eqFunction_247(data, threadData);

  System_eqFunction_248(data, threadData);

  System_eqFunction_249(data, threadData);

  System_eqFunction_250(data, threadData);

  System_eqFunction_251(data, threadData);

  System_eqFunction_252(data, threadData);

  System_eqFunction_253(data, threadData);

  System_eqFunction_254(data, threadData);

  System_eqFunction_255(data, threadData);

  System_eqFunction_256(data, threadData);

  System_eqFunction_257(data, threadData);

  System_eqFunction_258(data, threadData);

  System_eqFunction_259(data, threadData);

  System_eqFunction_260(data, threadData);
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
extern void System_eqFunction_163(DATA* data, threadData_t *threadData);
extern void System_eqFunction_164(DATA* data, threadData_t *threadData);
extern void System_eqFunction_165(DATA* data, threadData_t *threadData);
extern void System_eqFunction_166(DATA* data, threadData_t *threadData);
extern void System_eqFunction_167(DATA* data, threadData_t *threadData);
extern void System_eqFunction_168(DATA* data, threadData_t *threadData);
extern void System_eqFunction_169(DATA* data, threadData_t *threadData);
extern void System_eqFunction_170(DATA* data, threadData_t *threadData);
extern void System_eqFunction_171(DATA* data, threadData_t *threadData);
extern void System_eqFunction_172(DATA* data, threadData_t *threadData);
extern void System_eqFunction_249(DATA* data, threadData_t *threadData);
extern void System_eqFunction_250(DATA* data, threadData_t *threadData);
extern void System_eqFunction_251(DATA* data, threadData_t *threadData);
extern void System_eqFunction_252(DATA* data, threadData_t *threadData);
extern void System_eqFunction_253(DATA* data, threadData_t *threadData);
extern void System_eqFunction_254(DATA* data, threadData_t *threadData);
extern void System_eqFunction_255(DATA* data, threadData_t *threadData);
extern void System_eqFunction_256(DATA* data, threadData_t *threadData);
extern void System_eqFunction_257(DATA* data, threadData_t *threadData);
extern void System_eqFunction_258(DATA* data, threadData_t *threadData);
extern void System_eqFunction_259(DATA* data, threadData_t *threadData);
extern void System_eqFunction_260(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  {
    System_eqFunction_163(data, threadData);
    threadData->lastEquationSolved = 163;
  }
  {
    System_eqFunction_164(data, threadData);
    threadData->lastEquationSolved = 164;
  }
  {
    System_eqFunction_165(data, threadData);
    threadData->lastEquationSolved = 165;
  }
  {
    System_eqFunction_166(data, threadData);
    threadData->lastEquationSolved = 166;
  }
  {
    System_eqFunction_167(data, threadData);
    threadData->lastEquationSolved = 167;
  }
  {
    System_eqFunction_168(data, threadData);
    threadData->lastEquationSolved = 168;
  }
  {
    System_eqFunction_169(data, threadData);
    threadData->lastEquationSolved = 169;
  }
  {
    System_eqFunction_170(data, threadData);
    threadData->lastEquationSolved = 170;
  }
  {
    System_eqFunction_171(data, threadData);
    threadData->lastEquationSolved = 171;
  }
  {
    System_eqFunction_172(data, threadData);
    threadData->lastEquationSolved = 172;
  }
  {
    System_eqFunction_249(data, threadData);
    threadData->lastEquationSolved = 249;
  }
  {
    System_eqFunction_250(data, threadData);
    threadData->lastEquationSolved = 250;
  }
  {
    System_eqFunction_251(data, threadData);
    threadData->lastEquationSolved = 251;
  }
  {
    System_eqFunction_252(data, threadData);
    threadData->lastEquationSolved = 252;
  }
  {
    System_eqFunction_253(data, threadData);
    threadData->lastEquationSolved = 253;
  }
  {
    System_eqFunction_254(data, threadData);
    threadData->lastEquationSolved = 254;
  }
  {
    System_eqFunction_255(data, threadData);
    threadData->lastEquationSolved = 255;
  }
  {
    System_eqFunction_256(data, threadData);
    threadData->lastEquationSolved = 256;
  }
  {
    System_eqFunction_257(data, threadData);
    threadData->lastEquationSolved = 257;
  }
  {
    System_eqFunction_258(data, threadData);
    threadData->lastEquationSolved = 258;
  }
  {
    System_eqFunction_259(data, threadData);
    threadData->lastEquationSolved = 259;
  }
  {
    System_eqFunction_260(data, threadData);
    threadData->lastEquationSolved = 260;
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
#define _OMC_LIT_RESOURCE_1_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,13,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,53,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Controller"
#define _OMC_LIT_RESOURCE_2_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,10,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,53,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "Drone"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,5,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,53,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "DroneFS"
#define _OMC_LIT_RESOURCE_4_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,7,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,53,_OMC_LIT_RESOURCE_4_dir_data);

#define _OMC_LIT_RESOURCE_5_name_data "FIFO"
#define _OMC_LIT_RESOURCE_5_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_name,4,_OMC_LIT_RESOURCE_5_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir,53,_OMC_LIT_RESOURCE_5_dir_data);

#define _OMC_LIT_RESOURCE_6_name_data "FifoIODone"
#define _OMC_LIT_RESOURCE_6_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_name,10,_OMC_LIT_RESOURCE_6_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir,53,_OMC_LIT_RESOURCE_6_dir_data);

#define _OMC_LIT_RESOURCE_7_name_data "InitFifoIOState"
#define _OMC_LIT_RESOURCE_7_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_name,15,_OMC_LIT_RESOURCE_7_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_dir,53,_OMC_LIT_RESOURCE_7_dir_data);

#define _OMC_LIT_RESOURCE_8_name_data "InputBoolean"
#define _OMC_LIT_RESOURCE_8_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_8_name,12,_OMC_LIT_RESOURCE_8_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_8_dir,53,_OMC_LIT_RESOURCE_8_dir_data);

#define _OMC_LIT_RESOURCE_9_name_data "InputInteger"
#define _OMC_LIT_RESOURCE_9_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_9_name,12,_OMC_LIT_RESOURCE_9_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_9_dir,53,_OMC_LIT_RESOURCE_9_dir_data);

#define _OMC_LIT_RESOURCE_10_name_data "InputReal"
#define _OMC_LIT_RESOURCE_10_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_10_name,9,_OMC_LIT_RESOURCE_10_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_10_dir,53,_OMC_LIT_RESOURCE_10_dir_data);

#define _OMC_LIT_RESOURCE_11_name_data "K"
#define _OMC_LIT_RESOURCE_11_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_11_name,1,_OMC_LIT_RESOURCE_11_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_11_dir,53,_OMC_LIT_RESOURCE_11_dir_data);

#define _OMC_LIT_RESOURCE_12_name_data "Modelica"
#define _OMC_LIT_RESOURCE_12_dir_data "/usr/lib/omlibrary/Modelica 4.0.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_12_name,8,_OMC_LIT_RESOURCE_12_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_12_dir,33,_OMC_LIT_RESOURCE_12_dir_data);

#define _OMC_LIT_RESOURCE_13_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_13_dir_data "/usr/lib/omlibrary/ModelicaServices 4.0.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_13_name,16,_OMC_LIT_RESOURCE_13_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_13_dir,41,_OMC_LIT_RESOURCE_13_dir_data);

#define _OMC_LIT_RESOURCE_14_name_data "Monitor"
#define _OMC_LIT_RESOURCE_14_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_14_name,7,_OMC_LIT_RESOURCE_14_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_14_dir,53,_OMC_LIT_RESOURCE_14_dir_data);

#define _OMC_LIT_RESOURCE_15_name_data "OutputBoolean"
#define _OMC_LIT_RESOURCE_15_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_15_name,13,_OMC_LIT_RESOURCE_15_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_15_dir,53,_OMC_LIT_RESOURCE_15_dir_data);

#define _OMC_LIT_RESOURCE_16_name_data "OutputInteger"
#define _OMC_LIT_RESOURCE_16_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_16_name,13,_OMC_LIT_RESOURCE_16_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_16_dir,53,_OMC_LIT_RESOURCE_16_dir_data);

#define _OMC_LIT_RESOURCE_17_name_data "OutputReal"
#define _OMC_LIT_RESOURCE_17_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_17_name,10,_OMC_LIT_RESOURCE_17_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_17_dir,53,_OMC_LIT_RESOURCE_17_dir_data);

#define _OMC_LIT_RESOURCE_18_name_data "Prm"
#define _OMC_LIT_RESOURCE_18_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_18_name,3,_OMC_LIT_RESOURCE_18_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_18_dir,53,_OMC_LIT_RESOURCE_18_dir_data);

#define _OMC_LIT_RESOURCE_19_name_data "ReadFromFIFO"
#define _OMC_LIT_RESOURCE_19_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_19_name,12,_OMC_LIT_RESOURCE_19_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_19_dir,53,_OMC_LIT_RESOURCE_19_dir_data);

#define _OMC_LIT_RESOURCE_20_name_data "System"
#define _OMC_LIT_RESOURCE_20_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_20_name,6,_OMC_LIT_RESOURCE_20_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_20_dir,53,_OMC_LIT_RESOURCE_20_dir_data);

#define _OMC_LIT_RESOURCE_21_name_data "WriteToFIFO"
#define _OMC_LIT_RESOURCE_21_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_21_name,11,_OMC_LIT_RESOURCE_21_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_21_dir,53,_OMC_LIT_RESOURCE_21_dir_data);

#define _OMC_LIT_RESOURCE_22_name_data "areaCenter"
#define _OMC_LIT_RESOURCE_22_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_22_name,10,_OMC_LIT_RESOURCE_22_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_22_dir,53,_OMC_LIT_RESOURCE_22_dir_data);

#define _OMC_LIT_RESOURCE_23_name_data "batteryMonitor"
#define _OMC_LIT_RESOURCE_23_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_23_name,14,_OMC_LIT_RESOURCE_23_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_23_dir,53,_OMC_LIT_RESOURCE_23_dir_data);

#define _OMC_LIT_RESOURCE_24_name_data "charging"
#define _OMC_LIT_RESOURCE_24_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_24_name,8,_OMC_LIT_RESOURCE_24_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_24_dir,53,_OMC_LIT_RESOURCE_24_dir_data);

#define _OMC_LIT_RESOURCE_25_name_data "check_pos"
#define _OMC_LIT_RESOURCE_25_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_25_name,9,_OMC_LIT_RESOURCE_25_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_25_dir,53,_OMC_LIT_RESOURCE_25_dir_data);

#define _OMC_LIT_RESOURCE_26_name_data "check_pos_x"
#define _OMC_LIT_RESOURCE_26_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_26_name,11,_OMC_LIT_RESOURCE_26_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_26_dir,53,_OMC_LIT_RESOURCE_26_dir_data);

#define _OMC_LIT_RESOURCE_27_name_data "check_pos_y"
#define _OMC_LIT_RESOURCE_27_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_27_name,11,_OMC_LIT_RESOURCE_27_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_27_dir,53,_OMC_LIT_RESOURCE_27_dir_data);

#define _OMC_LIT_RESOURCE_28_name_data "check_pos_z"
#define _OMC_LIT_RESOURCE_28_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_28_name,11,_OMC_LIT_RESOURCE_28_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_28_dir,53,_OMC_LIT_RESOURCE_28_dir_data);

#define _OMC_LIT_RESOURCE_29_name_data "create_area"
#define _OMC_LIT_RESOURCE_29_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_29_name,11,_OMC_LIT_RESOURCE_29_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_29_dir,53,_OMC_LIT_RESOURCE_29_dir_data);

#define _OMC_LIT_RESOURCE_30_name_data "create_drone"
#define _OMC_LIT_RESOURCE_30_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_30_name,12,_OMC_LIT_RESOURCE_30_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_30_dir,53,_OMC_LIT_RESOURCE_30_dir_data);

#define _OMC_LIT_RESOURCE_31_name_data "disconnect_from_db"
#define _OMC_LIT_RESOURCE_31_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_31_name,18,_OMC_LIT_RESOURCE_31_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_31_dir,53,_OMC_LIT_RESOURCE_31_dir_data);

#define _OMC_LIT_RESOURCE_32_name_data "flush_history"
#define _OMC_LIT_RESOURCE_32_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_32_name,13,_OMC_LIT_RESOURCE_32_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_32_dir,53,_OMC_LIT_RESOURCE_32_dir_data);

#define _OMC_LIT_RESOURCE_33_name_data "get_drone_pos"
#define _OMC_LIT_RESOURCE_33_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_33_name,13,_OMC_LIT_RESOURCE_33_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_33_dir,53,_OMC_LIT_RESOURCE_33_dir_data);

#define _OMC_LIT_RESOURCE_34_name_data "get_drone_pos_1"
#define _OMC_LIT_RESOURCE_34_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_34_name,15,_OMC_LIT_RESOURCE_34_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_34_dir,53,_OMC_LIT_RESOURCE_34_dir_data);

#define _OMC_LIT_RESOURCE_35_name_data "get_drone_pos_2"
#define _OMC_LIT_RESOURCE_35_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_35_name,15,_OMC_LIT_RESOURCE_35_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_35_dir,53,_OMC_LIT_RESOURCE_35_dir_data);

#define _OMC_LIT_RESOURCE_36_name_data "get_drone_pos_3"
#define _OMC_LIT_RESOURCE_36_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_36_name,15,_OMC_LIT_RESOURCE_36_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_36_dir,53,_OMC_LIT_RESOURCE_36_dir_data);

#define _OMC_LIT_RESOURCE_37_name_data "has_area_been_visited"
#define _OMC_LIT_RESOURCE_37_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_37_name,21,_OMC_LIT_RESOURCE_37_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_37_dir,53,_OMC_LIT_RESOURCE_37_dir_data);

#define _OMC_LIT_RESOURCE_38_name_data "has_drone_been_in_area"
#define _OMC_LIT_RESOURCE_38_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_38_name,22,_OMC_LIT_RESOURCE_38_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_38_dir,53,_OMC_LIT_RESOURCE_38_dir_data);

#define _OMC_LIT_RESOURCE_39_name_data "how_many_drones_in_area"
#define _OMC_LIT_RESOURCE_39_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_39_name,23,_OMC_LIT_RESOURCE_39_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_39_dir,53,_OMC_LIT_RESOURCE_39_dir_data);

#define _OMC_LIT_RESOURCE_40_name_data "myrandom"
#define _OMC_LIT_RESOURCE_40_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_40_name,8,_OMC_LIT_RESOURCE_40_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_40_dir,53,_OMC_LIT_RESOURCE_40_dir_data);

#define _OMC_LIT_RESOURCE_41_name_data "returnedHome"
#define _OMC_LIT_RESOURCE_41_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_41_name,12,_OMC_LIT_RESOURCE_41_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_41_dir,53,_OMC_LIT_RESOURCE_41_dir_data);

#define _OMC_LIT_RESOURCE_42_name_data "setup_areas"
#define _OMC_LIT_RESOURCE_42_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_42_name,11,_OMC_LIT_RESOURCE_42_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_42_dir,53,_OMC_LIT_RESOURCE_42_dir_data);

#define _OMC_LIT_RESOURCE_43_name_data "setup_db"
#define _OMC_LIT_RESOURCE_43_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_43_name,8,_OMC_LIT_RESOURCE_43_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_43_dir,53,_OMC_LIT_RESOURCE_43_dir_data);

#define _OMC_LIT_RESOURCE_44_name_data "setup_drones"
#define _OMC_LIT_RESOURCE_44_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_44_name,12,_OMC_LIT_RESOURCE_44_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_44_dir,53,_OMC_LIT_RESOURCE_44_dir_data);

#define _OMC_LIT_RESOURCE_45_name_data "turn_off"
#define _OMC_LIT_RESOURCE_45_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_45_name,8,_OMC_LIT_RESOURCE_45_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_45_dir,53,_OMC_LIT_RESOURCE_45_dir_data);

#define _OMC_LIT_RESOURCE_46_name_data "update_drone_pos"
#define _OMC_LIT_RESOURCE_46_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_46_name,16,_OMC_LIT_RESOURCE_46_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_46_dir,53,_OMC_LIT_RESOURCE_46_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,94,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_7_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_7_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_8_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_8_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_9_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_9_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_10_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_10_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_11_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_11_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_12_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_12_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_13_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_13_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_14_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_14_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_15_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_15_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_16_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_16_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_17_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_17_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_18_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_18_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_19_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_19_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_20_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_20_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_21_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_21_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_22_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_22_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_23_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_23_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_24_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_24_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_25_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_25_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_26_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_26_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_27_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_27_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_28_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_28_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_29_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_29_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_30_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_30_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_31_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_31_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_32_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_32_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_33_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_33_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_34_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_34_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_35_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_35_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_36_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_36_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_37_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_37_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_38_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_38_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_39_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_39_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_40_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_40_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_41_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_41_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_42_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_42_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_43_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_43_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_44_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_44_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_45_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_45_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_46_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_46_dir)}};
void System_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &System_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "System";
  data->modelData->modelFilePrefix = "System";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/parallels/Desktop/Tesi/Drone/Variations/16-aree";
  data->modelData->modelGUID = "{80709a5b-a851-4a98-ae01-a4f6ba137de5}";
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
  
  data->modelData->nStates = 12;
  data->modelData->nVariablesReal = 465;
  data->modelData->nDiscreteReal = 386;
  data->modelData->nVariablesInteger = 78;
  data->modelData->nVariablesBoolean = 96;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 1724;
  data->modelData->nParametersInteger = 54;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 7;
  
  data->modelData->nAliasReal = 33;
  data->modelData->nAliasInteger = 2;
  data->modelData->nAliasBoolean = 1;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 1;
  data->modelData->nSamples = 8;
  data->modelData->nRelations = 1;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "System_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 29;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1322;
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


