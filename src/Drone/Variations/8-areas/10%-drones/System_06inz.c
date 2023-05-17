/* Initialization */
#include "System_model.h"
#include "System_11mix.h"
#include "System_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void System_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: ALGORITHM

  d[1].comm_state := $START.d[1].comm_state;
  d[1].fifox := $START.d[1].fifox;
  d[1].writesignal := $START.d[1].writesignal;
  d[1].readsignal := $START.d[1].readsignal;
  d[1].flag := $START.d[1].flag;
  d[1].setz := $START.d[1].setz;
  d[1].sety := $START.d[1].sety;
  d[1].setx := $START.d[1].setx;
  d[1].msg_to_cc[5] := $START.d[1].msg_to_cc[5];
  d[1].msg_to_cc[4] := $START.d[1].msg_to_cc[4];
  d[1].msg_to_cc[3] := $START.d[1].msg_to_cc[3];
  d[1].msg_to_cc[2] := $START.d[1].msg_to_cc[2];
  d[1].msg_to_cc[1] := $START.d[1].msg_to_cc[1];
  $whenCondition10 := $START.$whenCondition10;
  $whenCondition10 := false;
  d[1].msg_to_cc := {0.0, 0.0, 0.0, 0.0, 0.0};
  d[1].setx := myrandom() * d[1].p.flyZone[1];
  d[1].sety := myrandom() * d[1].p.flyZone[2];
  d[1].setz := myrandom() * d[1].p.flyZone[3];
  d[1].flag := 0;
  d[1].readsignal := false;
  d[1].writesignal := false;
  d[1].fifox := 0;
  d[1].comm_state := 10;
*/
void System_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  real_array tmp0;
  real_array tmp1;
  (data->localData[0]->integerVars[18]/* d[1].comm_state DISCRETE */)  = (data->modelData->integerVarsData[18]/* d[1].comm_state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[20]/* d[1].fifox DISCRETE */)  = (data->modelData->integerVarsData[20]/* d[1].fifox DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[43]/* d[1].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[43]/* d[1].writesignal DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[41]/* d[1].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[41]/* d[1].readsignal DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[21]/* d[1].flag DISCRETE */)  = (data->modelData->integerVarsData[21]/* d[1].flag DISCRETE */).attribute .start;

  (data->localData[0]->realVars[143]/* d[1].setz DISCRETE */)  = (data->modelData->realVarsData[143]/* d[1].setz DISCRETE */).attribute .start;

  (data->localData[0]->realVars[142]/* d[1].sety DISCRETE */)  = (data->modelData->realVarsData[142]/* d[1].sety DISCRETE */).attribute .start;

  (data->localData[0]->realVars[141]/* d[1].setx DISCRETE */)  = (data->modelData->realVarsData[141]/* d[1].setx DISCRETE */).attribute .start;

  (data->localData[0]->realVars[140]/* d[1].msg_to_cc[5] DISCRETE */)  = (data->modelData->realVarsData[140]/* d[1].msg_to_cc[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[139]/* d[1].msg_to_cc[4] DISCRETE */)  = (data->modelData->realVarsData[139]/* d[1].msg_to_cc[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[138]/* d[1].msg_to_cc[3] DISCRETE */)  = (data->modelData->realVarsData[138]/* d[1].msg_to_cc[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[137]/* d[1].msg_to_cc[2] DISCRETE */)  = (data->modelData->realVarsData[137]/* d[1].msg_to_cc[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[136]/* d[1].msg_to_cc[1] DISCRETE */)  = (data->modelData->realVarsData[136]/* d[1].msg_to_cc[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = (data->modelData->booleanVarsData[1]/* $whenCondition10 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = 0;

  array_alloc_scalar_real_array(&tmp0, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp1, ((modelica_real*)&((&(data->localData[0]->realVars[136]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
  real_array_copy_data(tmp0, tmp1);

  (data->localData[0]->realVars[141]/* d[1].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) );

  (data->localData[0]->realVars[142]/* d[1].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[412]/* d[1].p.flyZone[2] PARAM */) );

  (data->localData[0]->realVars[143]/* d[1].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[413]/* d[1].p.flyZone[3] PARAM */) );

  (data->localData[0]->integerVars[21]/* d[1].flag DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->booleanVars[41]/* d[1].readsignal DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[43]/* d[1].writesignal DISCRETE */)  = 0;

  (data->localData[0]->integerVars[20]/* d[1].fifox DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[18]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 10);
  TRACE_POP
}
extern void System_eqFunction_120(DATA *data, threadData_t *threadData);

extern void System_eqFunction_122(DATA *data, threadData_t *threadData);

extern void System_eqFunction_115(DATA *data, threadData_t *threadData);

extern void System_eqFunction_118(DATA *data, threadData_t *threadData);

extern void System_eqFunction_119(DATA *data, threadData_t *threadData);

extern void System_eqFunction_131(DATA *data, threadData_t *threadData);

extern void System_eqFunction_113(DATA *data, threadData_t *threadData);

extern void System_eqFunction_116(DATA *data, threadData_t *threadData);

extern void System_eqFunction_117(DATA *data, threadData_t *threadData);

extern void System_eqFunction_121(DATA *data, threadData_t *threadData);


/*
equation index: 12
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].writesignal = $START.drone_to_cc[1].writesignal
*/
void System_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  (data->simulationInfo->booleanVarsPre[49]/* drone_to_cc[1].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[49]/* drone_to_cc[1].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
drone_to_cc[1].writesigint = not $PRE.drone_to_cc[1].writesignal == drone_to_cc[1].writesignal
*/
void System_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->booleanVars[48]/* drone_to_cc[1].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[49]/* drone_to_cc[1].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[49]/* drone_to_cc[1].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[49]/* drone_to_cc[1].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[49]/* drone_to_cc[1].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].readsignal = $START.cc_to_drone[1].readsignal
*/
void System_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  (data->simulationInfo->booleanVarsPre[34]/* cc_to_drone[1].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[34]/* cc_to_drone[1].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
cc_to_drone[1].readsigint = not $PRE.cc_to_drone[1].readsignal == cc_to_drone[1].readsignal
*/
void System_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->booleanVars[33]/* cc_to_drone[1].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[34]/* cc_to_drone[1].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[34]/* cc_to_drone[1].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[34]/* cc_to_drone[1].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[34]/* cc_to_drone[1].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 16
type: ALGORITHM

  cc.endSimulation := $START.cc.endSimulation;
  cc.setpointChanged[1] := $START.cc.setpointChanged[1];
  cc.comm_done[1] := $START.cc.comm_done[1];
  cc.state := $START.cc.state;
  cc.fifox[1] := $START.cc.fifox[1];
  cc.pos[1,3] := $START.cc.pos[1,3];
  cc.pos[1,2] := $START.cc.pos[1,2];
  cc.pos[1,1] := $START.cc.pos[1,1];
  cc.msg_to_drone[1,5] := $START.cc.msg_to_drone[1,5];
  cc.msg_to_drone[1,4] := $START.cc.msg_to_drone[1,4];
  cc.msg_to_drone[1,3] := $START.cc.msg_to_drone[1,3];
  cc.msg_to_drone[1,2] := $START.cc.msg_to_drone[1,2];
  cc.msg_to_drone[1,1] := $START.cc.msg_to_drone[1,1];
  cc.writesignal[1] := $START.cc.writesignal[1];
  cc.readsignal[1] := $START.cc.readsignal[1];
  cc.setpointChangeTime[1] := $START.cc.setpointChangeTime[1];
  cc.lastAnswered[1] := $START.cc.lastAnswered[1];
  cc.isDead[1] := $START.cc.isDead[1];
  cc.rechargingDrones := $START.cc.rechargingDrones;
  cc.isRecharging[1] := $START.cc.isRecharging[1];
  cc.battery[1] := $START.cc.battery[1];
  cc.tmp_time := $START.cc.tmp_time;
  cc.max_time := $START.cc.max_time;
  cc.area_z := $START.cc.area_z;
  cc.area_y := $START.cc.area_y;
  cc.area_x := $START.cc.area_x;
  cc.choice_value_2 := $START.cc.choice_value_2;
  cc.choice_value_1 := $START.cc.choice_value_1;
  cc.tmp_area_2 := $START.cc.tmp_area_2;
  cc.tmp_area_1 := $START.cc.tmp_area_1;
  cc.tmp_distance := $START.cc.tmp_distance;
  cc.min_distance := $START.cc.min_distance;
  cc.hasBeenSelected[8] := $START.cc.hasBeenSelected[8];
  cc.hasBeenSelected[7] := $START.cc.hasBeenSelected[7];
  cc.hasBeenSelected[6] := $START.cc.hasBeenSelected[6];
  cc.hasBeenSelected[5] := $START.cc.hasBeenSelected[5];
  cc.hasBeenSelected[4] := $START.cc.hasBeenSelected[4];
  cc.hasBeenSelected[3] := $START.cc.hasBeenSelected[3];
  cc.hasBeenSelected[2] := $START.cc.hasBeenSelected[2];
  cc.hasBeenSelected[1] := $START.cc.hasBeenSelected[1];
  cc.time_passed_since_last_loop := $START.cc.time_passed_since_last_loop;
  cc.time_span := $START.cc.time_span;
  cc.isBusy[1] := $START.cc.isBusy[1];
  cc.lastVisited[8] := $START.cc.lastVisited[8];
  cc.lastVisited[7] := $START.cc.lastVisited[7];
  cc.lastVisited[6] := $START.cc.lastVisited[6];
  cc.lastVisited[5] := $START.cc.lastVisited[5];
  cc.lastVisited[4] := $START.cc.lastVisited[4];
  cc.lastVisited[3] := $START.cc.lastVisited[3];
  cc.lastVisited[2] := $START.cc.lastVisited[2];
  cc.lastVisited[1] := $START.cc.lastVisited[1];
  cc.hasBeenVisited[8] := $START.cc.hasBeenVisited[8];
  cc.hasBeenVisited[7] := $START.cc.hasBeenVisited[7];
  cc.hasBeenVisited[6] := $START.cc.hasBeenVisited[6];
  cc.hasBeenVisited[5] := $START.cc.hasBeenVisited[5];
  cc.hasBeenVisited[4] := $START.cc.hasBeenVisited[4];
  cc.hasBeenVisited[3] := $START.cc.hasBeenVisited[3];
  cc.hasBeenVisited[2] := $START.cc.hasBeenVisited[2];
  cc.hasBeenVisited[1] := $START.cc.hasBeenVisited[1];
  cc.setz[1] := $START.cc.setz[1];
  cc.sety[1] := $START.cc.sety[1];
  cc.setx[1] := $START.cc.setx[1];
  cc.aliveDrones := $START.cc.aliveDrones;
  cc.z := $START.cc.z;
  cc.err := $START.cc.err;
  $whenCondition9 := $START.$whenCondition9;
  $whenCondition9 := false;
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
*/
void System_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  real_array tmp4;
  real_array tmp5;
  real_array tmp6;
  real_array tmp7;
  real_array tmp8;
  real_array tmp9;
  boolean_array tmp10;
  boolean_array tmp11;
  real_array tmp12;
  real_array tmp13;
  boolean_array tmp14;
  boolean_array tmp15;
  integer_array tmp16;
  integer_array tmp17;
  real_array tmp18;
  modelica_real tmp19;
  real_array tmp20;
  real_array tmp21;
  boolean_array tmp22;
  boolean_array tmp23;
  boolean_array tmp24;
  boolean_array tmp25;
  real_array tmp26;
  real_array tmp27;
  real_array tmp28;
  real_array tmp29;
  boolean_array tmp30;
  boolean_array tmp31;
  boolean_array tmp32;
  boolean_array tmp33;
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
  modelica_integer tmp45;
  integer_array tmp46;
  integer_array tmp47;
  boolean_array tmp48;
  boolean_array tmp49;
  boolean_array tmp50;
  boolean_array tmp51;
  Prm tmp52;
  real_array tmp53;
  real_array tmp54;
  real_array tmp55;
  Prm tmp56;
  real_array tmp57;
  real_array tmp58;
  real_array tmp59;
  (data->localData[0]->booleanVars[16]/* cc.endSimulation DISCRETE */)  = (data->modelData->booleanVarsData[16]/* cc.endSimulation DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */)  = (data->modelData->booleanVarsData[29]/* cc.setpointChanged[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[14]/* cc.comm_done[1] DISCRETE */)  = (data->modelData->booleanVarsData[14]/* cc.comm_done[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[11]/* cc.state DISCRETE */)  = (data->modelData->integerVarsData[11]/* cc.state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)  = (data->modelData->integerVarsData[1]/* cc.fifox[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[68]/* cc.pos[1,3] DISCRETE */)  = (data->modelData->realVarsData[68]/* cc.pos[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[67]/* cc.pos[1,2] DISCRETE */)  = (data->modelData->realVarsData[67]/* cc.pos[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[66]/* cc.pos[1,1] DISCRETE */)  = (data->modelData->realVarsData[66]/* cc.pos[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[65]/* cc.msg_to_drone[1,5] DISCRETE */)  = (data->modelData->realVarsData[65]/* cc.msg_to_drone[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[64]/* cc.msg_to_drone[1,4] DISCRETE */)  = (data->modelData->realVarsData[64]/* cc.msg_to_drone[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[63]/* cc.msg_to_drone[1,3] DISCRETE */)  = (data->modelData->realVarsData[63]/* cc.msg_to_drone[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[62]/* cc.msg_to_drone[1,2] DISCRETE */)  = (data->modelData->realVarsData[62]/* cc.msg_to_drone[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[61]/* cc.msg_to_drone[1,1] DISCRETE */)  = (data->modelData->realVarsData[61]/* cc.msg_to_drone[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[31]/* cc.writesignal[1] DISCRETE */)  = (data->modelData->booleanVarsData[31]/* cc.writesignal[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[28]/* cc.readsignal[1] DISCRETE */)  = (data->modelData->booleanVarsData[28]/* cc.readsignal[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[69]/* cc.setpointChangeTime[1] DISCRETE */)  = (data->modelData->realVarsData[69]/* cc.setpointChangeTime[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[50]/* cc.lastAnswered[1] DISCRETE */)  = (data->modelData->realVarsData[50]/* cc.lastAnswered[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[26]/* cc.isDead[1] DISCRETE */)  = (data->modelData->booleanVarsData[26]/* cc.isDead[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[10]/* cc.rechargingDrones DISCRETE */)  = (data->modelData->integerVarsData[10]/* cc.rechargingDrones DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[27]/* cc.isRecharging[1] DISCRETE */)  = (data->modelData->booleanVarsData[27]/* cc.isRecharging[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[46]/* cc.battery[1] DISCRETE */)  = (data->modelData->realVarsData[46]/* cc.battery[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[76]/* cc.tmp_time DISCRETE */)  = (data->modelData->realVarsData[76]/* cc.tmp_time DISCRETE */).attribute .start;

  (data->localData[0]->realVars[59]/* cc.max_time DISCRETE */)  = (data->modelData->realVarsData[59]/* cc.max_time DISCRETE */).attribute .start;

  (data->localData[0]->realVars[45]/* cc.area_z DISCRETE */)  = (data->modelData->realVarsData[45]/* cc.area_z DISCRETE */).attribute .start;

  (data->localData[0]->realVars[44]/* cc.area_y DISCRETE */)  = (data->modelData->realVarsData[44]/* cc.area_y DISCRETE */).attribute .start;

  (data->localData[0]->realVars[43]/* cc.area_x DISCRETE */)  = (data->modelData->realVarsData[43]/* cc.area_x DISCRETE */).attribute .start;

  (data->localData[0]->realVars[48]/* cc.choice_value_2 DISCRETE */)  = (data->modelData->realVarsData[48]/* cc.choice_value_2 DISCRETE */).attribute .start;

  (data->localData[0]->realVars[47]/* cc.choice_value_1 DISCRETE */)  = (data->modelData->realVarsData[47]/* cc.choice_value_1 DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[13]/* cc.tmp_area_2 DISCRETE */)  = (data->modelData->integerVarsData[13]/* cc.tmp_area_2 DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[12]/* cc.tmp_area_1 DISCRETE */)  = (data->modelData->integerVarsData[12]/* cc.tmp_area_1 DISCRETE */).attribute .start;

  (data->localData[0]->realVars[75]/* cc.tmp_distance DISCRETE */)  = (data->modelData->realVarsData[75]/* cc.tmp_distance DISCRETE */).attribute .start;

  (data->localData[0]->realVars[60]/* cc.min_distance DISCRETE */)  = (data->modelData->realVarsData[60]/* cc.min_distance DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[9]/* cc.hasBeenSelected[8] DISCRETE */)  = (data->modelData->integerVarsData[9]/* cc.hasBeenSelected[8] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[8]/* cc.hasBeenSelected[7] DISCRETE */)  = (data->modelData->integerVarsData[8]/* cc.hasBeenSelected[7] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[7]/* cc.hasBeenSelected[6] DISCRETE */)  = (data->modelData->integerVarsData[7]/* cc.hasBeenSelected[6] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[6]/* cc.hasBeenSelected[5] DISCRETE */)  = (data->modelData->integerVarsData[6]/* cc.hasBeenSelected[5] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[5]/* cc.hasBeenSelected[4] DISCRETE */)  = (data->modelData->integerVarsData[5]/* cc.hasBeenSelected[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[4]/* cc.hasBeenSelected[3] DISCRETE */)  = (data->modelData->integerVarsData[4]/* cc.hasBeenSelected[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[3]/* cc.hasBeenSelected[2] DISCRETE */)  = (data->modelData->integerVarsData[3]/* cc.hasBeenSelected[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[2]/* cc.hasBeenSelected[1] DISCRETE */)  = (data->modelData->integerVarsData[2]/* cc.hasBeenSelected[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[73]/* cc.time_passed_since_last_loop DISCRETE */)  = (data->modelData->realVarsData[73]/* cc.time_passed_since_last_loop DISCRETE */).attribute .start;

  (data->localData[0]->realVars[74]/* cc.time_span DISCRETE */)  = (data->modelData->realVarsData[74]/* cc.time_span DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[25]/* cc.isBusy[1] DISCRETE */)  = (data->modelData->booleanVarsData[25]/* cc.isBusy[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[58]/* cc.lastVisited[8] DISCRETE */)  = (data->modelData->realVarsData[58]/* cc.lastVisited[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[57]/* cc.lastVisited[7] DISCRETE */)  = (data->modelData->realVarsData[57]/* cc.lastVisited[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[56]/* cc.lastVisited[6] DISCRETE */)  = (data->modelData->realVarsData[56]/* cc.lastVisited[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[55]/* cc.lastVisited[5] DISCRETE */)  = (data->modelData->realVarsData[55]/* cc.lastVisited[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[54]/* cc.lastVisited[4] DISCRETE */)  = (data->modelData->realVarsData[54]/* cc.lastVisited[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[53]/* cc.lastVisited[3] DISCRETE */)  = (data->modelData->realVarsData[53]/* cc.lastVisited[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[52]/* cc.lastVisited[2] DISCRETE */)  = (data->modelData->realVarsData[52]/* cc.lastVisited[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[51]/* cc.lastVisited[1] DISCRETE */)  = (data->modelData->realVarsData[51]/* cc.lastVisited[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[24]/* cc.hasBeenVisited[8] DISCRETE */)  = (data->modelData->booleanVarsData[24]/* cc.hasBeenVisited[8] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[23]/* cc.hasBeenVisited[7] DISCRETE */)  = (data->modelData->booleanVarsData[23]/* cc.hasBeenVisited[7] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[22]/* cc.hasBeenVisited[6] DISCRETE */)  = (data->modelData->booleanVarsData[22]/* cc.hasBeenVisited[6] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[21]/* cc.hasBeenVisited[5] DISCRETE */)  = (data->modelData->booleanVarsData[21]/* cc.hasBeenVisited[5] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[20]/* cc.hasBeenVisited[4] DISCRETE */)  = (data->modelData->booleanVarsData[20]/* cc.hasBeenVisited[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[19]/* cc.hasBeenVisited[3] DISCRETE */)  = (data->modelData->booleanVarsData[19]/* cc.hasBeenVisited[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[18]/* cc.hasBeenVisited[2] DISCRETE */)  = (data->modelData->booleanVarsData[18]/* cc.hasBeenVisited[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[17]/* cc.hasBeenVisited[1] DISCRETE */)  = (data->modelData->booleanVarsData[17]/* cc.hasBeenVisited[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[72]/* cc.setz[1] DISCRETE */)  = (data->modelData->realVarsData[72]/* cc.setz[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[71]/* cc.sety[1] DISCRETE */)  = (data->modelData->realVarsData[71]/* cc.sety[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[70]/* cc.setx[1] DISCRETE */)  = (data->modelData->realVarsData[70]/* cc.setx[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = (data->modelData->integerVarsData[0]/* cc.aliveDrones DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[14]/* cc.z DISCRETE */)  = (data->modelData->integerVarsData[14]/* cc.z DISCRETE */).attribute .start;

  (data->localData[0]->realVars[49]/* cc.err DISCRETE */)  = (data->modelData->realVarsData[49]/* cc.err DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[13]/* $whenCondition9 DISCRETE */)  = (data->modelData->booleanVarsData[13]/* $whenCondition9 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[13]/* $whenCondition9 DISCRETE */)  = 0;

  (data->localData[0]->realVars[49]/* cc.err DISCRETE */)  = 0.0;

  (data->localData[0]->integerVars[14]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = ((modelica_integer) 1);

  array_alloc_scalar_real_array(&tmp4, 1, (modelica_real)(data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  real_array_create(&tmp5, ((modelica_real*)&((&(data->localData[0]->realVars[70]/* cc.setx[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  real_array_copy_data(tmp4, tmp5);

  array_alloc_scalar_real_array(&tmp6, 1, (modelica_real)(data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  real_array_create(&tmp7, ((modelica_real*)&((&(data->localData[0]->realVars[71]/* cc.sety[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  real_array_copy_data(tmp6, tmp7);

  array_alloc_scalar_real_array(&tmp8, 1, (modelica_real)(data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
  real_array_create(&tmp9, ((modelica_real*)&((&(data->localData[0]->realVars[72]/* cc.setz[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  real_array_copy_data(tmp8, tmp9);

  array_alloc_scalar_boolean_array(&tmp10, 8, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp11, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[17]/* cc.hasBeenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  boolean_array_copy_data(tmp10, tmp11);

  array_alloc_scalar_real_array(&tmp12, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp13, ((modelica_real*)&((&(data->localData[0]->realVars[51]/* cc.lastVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp12, tmp13);

  array_alloc_scalar_boolean_array(&tmp14, 1, (modelica_boolean)0);
  boolean_array_create(&tmp15, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[25]/* cc.isBusy[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  boolean_array_copy_data(tmp14, tmp15);

  (data->localData[0]->realVars[74]/* cc.time_span DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[73]/* cc.time_passed_since_last_loop DISCRETE */)  = 0.0;

  array_alloc_scalar_integer_array(&tmp16, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp17, ((modelica_integer*)&((&(data->localData[0]->integerVars[2]/* cc.hasBeenSelected[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  integer_array_copy_data(tmp16, tmp17);

  real_array_create(&tmp18, ((modelica_real*)&((&data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
  tmp19 = max_real_array(tmp18);
  (data->localData[0]->realVars[60]/* cc.min_distance DISCRETE */)  = tmp19;

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

  array_alloc_scalar_real_array(&tmp20, 1, (modelica_real)0.0);
  real_array_create(&tmp21, ((modelica_real*)&((&(data->localData[0]->realVars[46]/* cc.battery[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  real_array_copy_data(tmp20, tmp21);

  array_alloc_scalar_boolean_array(&tmp22, 1, (modelica_boolean)0);
  boolean_array_create(&tmp23, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[27]/* cc.isRecharging[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  boolean_array_copy_data(tmp22, tmp23);

  (data->localData[0]->integerVars[10]/* cc.rechargingDrones DISCRETE */)  = ((modelica_integer) 0);

  array_alloc_scalar_boolean_array(&tmp24, 1, (modelica_boolean)0);
  boolean_array_create(&tmp25, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[26]/* cc.isDead[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  boolean_array_copy_data(tmp24, tmp25);

  array_alloc_scalar_real_array(&tmp26, 1, (modelica_real)0.0);
  real_array_create(&tmp27, ((modelica_real*)&((&(data->localData[0]->realVars[50]/* cc.lastAnswered[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  real_array_copy_data(tmp26, tmp27);

  array_alloc_scalar_real_array(&tmp28, 1, (modelica_real)0.0);
  real_array_create(&tmp29, ((modelica_real*)&((&(data->localData[0]->realVars[69]/* cc.setpointChangeTime[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  real_array_copy_data(tmp28, tmp29);

  array_alloc_scalar_boolean_array(&tmp30, 1, (modelica_boolean)0);
  boolean_array_create(&tmp31, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[28]/* cc.readsignal[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  boolean_array_copy_data(tmp30, tmp31);

  array_alloc_scalar_boolean_array(&tmp32, 1, (modelica_boolean)0);
  boolean_array_create(&tmp33, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[31]/* cc.writesignal[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  boolean_array_copy_data(tmp32, tmp33);

  tmp37 = ((modelica_integer) 1); tmp38 = 1; tmp39 = ((modelica_integer) 1);
  if(!(((tmp38 > 0) && (tmp37 > tmp39)) || ((tmp38 < 0) && (tmp37 < tmp39))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp37, tmp39); i += tmp38)
    {
      tmp34 = ((modelica_integer) 1); tmp35 = 1; tmp36 = ((modelica_integer) 5);
      if(!(((tmp35 > 0) && (tmp34 > tmp36)) || ((tmp35 < 0) && (tmp34 < tmp36))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp34, tmp36); j += tmp35)
        {
          (&(data->localData[0]->realVars[61]/* cc.msg_to_drone[1,1] DISCRETE */) )[(i - 1) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  tmp43 = ((modelica_integer) 1); tmp44 = 1; tmp45 = ((modelica_integer) 1);
  if(!(((tmp44 > 0) && (tmp43 > tmp45)) || ((tmp44 < 0) && (tmp43 < tmp45))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp43, tmp45); i += tmp44)
    {
      tmp40 = ((modelica_integer) 1); tmp41 = 1; tmp42 = ((modelica_integer) 3);
      if(!(((tmp41 > 0) && (tmp40 > tmp42)) || ((tmp41 < 0) && (tmp40 < tmp42))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp40, tmp42); j += tmp41)
        {
          (&(data->localData[0]->realVars[66]/* cc.pos[1,1] DISCRETE */) )[(i - 1) * 3 + (j-1)] = 0.0;
        }
      }
    }
  }

  array_alloc_scalar_integer_array(&tmp46, 1, (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp47, ((modelica_integer*)&((&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  integer_array_copy_data(tmp46, tmp47);

  (data->localData[0]->integerVars[11]/* cc.state DISCRETE */)  = ((modelica_integer) 0);

  array_alloc_scalar_boolean_array(&tmp48, 1, (modelica_boolean)1);
  boolean_array_create(&tmp49, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[14]/* cc.comm_done[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  boolean_array_copy_data(tmp48, tmp49);

  array_alloc_scalar_boolean_array(&tmp50, 1, (modelica_boolean)0);
  boolean_array_create(&tmp51, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  boolean_array_copy_data(tmp50, tmp51);

  (data->localData[0]->booleanVars[16]/* cc.endSimulation DISCRETE */)  = 0;

  omc_setup__db(threadData);

  real_array_create(&tmp53, ((modelica_real*)&((&data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
  real_array_create(&tmp54, ((modelica_real*)&((&data->simulationInfo->realParameter[67]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
  real_array_create(&tmp55, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
  tmp52._stop_simulation = (data->simulationInfo->realParameter[85]/* cc.p.stop_simulation PARAM */) ;
  tmp52._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
  tmp52._msg_len = ((modelica_integer) 5);
  tmp52._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
  tmp52._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
  tmp52._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
  tmp52._monitor_start = (data->simulationInfo->realParameter[78]/* cc.p.monitor_start PARAM */) ;
  tmp52._nDrones = ((modelica_integer) 1);
  tmp52._cc_choice = (data->simulationInfo->realParameter[60]/* cc.p.cc_choice PARAM */) ;
  tmp52._p_worst = (data->simulationInfo->realParameter[81]/* cc.p.p_worst PARAM */) ;
  tmp52._p_recharge = (data->simulationInfo->realParameter[80]/* cc.p.p_recharge PARAM */) ;
  tmp52._comm_timeout = (data->simulationInfo->realParameter[62]/* cc.p.comm_timeout PARAM */) ;
  tmp52._p_comm_error = (data->simulationInfo->realParameter[79]/* cc.p.p_comm_error PARAM */) ;
  tmp52._arrival_timeout = (data->simulationInfo->realParameter[57]/* cc.p.arrival_timeout PARAM */) ;
  tmp52._dDistance = (data->simulationInfo->realParameter[63]/* cc.p.dDistance PARAM */) ;
  tmp52._arrivalThreshold = (data->simulationInfo->realParameter[56]/* cc.p.arrivalThreshold PARAM */) ;
  tmp52._flyZone = tmp53;
  tmp52._docking_bay = tmp54;
  tmp52._m = (data->simulationInfo->realParameter[74]/* cc.p.m PARAM */) ;
  tmp52._maxSpeed = (data->simulationInfo->realParameter[76]/* cc.p.maxSpeed PARAM */) ;
  tmp52._horizontalODD = (data->simulationInfo->realParameter[73]/* cc.p.horizontalODD PARAM */) ;
  tmp52._verticalODD = (data->simulationInfo->realParameter[87]/* cc.p.verticalODD PARAM */) ;
  tmp52._maxAngle = (data->simulationInfo->realParameter[75]/* cc.p.maxAngle PARAM */) ;
  tmp52._minDistanceFromObs = (data->simulationInfo->realParameter[77]/* cc.p.minDistanceFromObs PARAM */) ;
  tmp52._dangerRadius = (data->simulationInfo->realParameter[64]/* cc.p.dangerRadius PARAM */) ;
  tmp52._unita = (data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) ;
  tmp52._capacity = (data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ;
  tmp52._batteryDischarge = (data->simulationInfo->realParameter[58]/* cc.p.batteryDischarge PARAM */) ;
  tmp52._commDischarge = (data->simulationInfo->realParameter[61]/* cc.p.commDischarge PARAM */) ;
  tmp52._rechargeRate = (data->simulationInfo->realParameter[82]/* cc.p.rechargeRate PARAM */) ;
  tmp52._dangerousBatteryPercentage = (data->simulationInfo->realParameter[66]/* cc.p.dangerousBatteryPercentage PARAM */) ;
  tmp52._dangerousBatteryLevel = (data->simulationInfo->realParameter[65]/* cc.p.dangerousBatteryLevel PARAM */) ;
  tmp52._rechargedPercentage = (data->simulationInfo->realParameter[83]/* cc.p.rechargedPercentage PARAM */) ;
  tmp52._rechargedThreshold = (data->simulationInfo->realParameter[84]/* cc.p.rechargedThreshold PARAM */) ;
  tmp52._nAreas = ((modelica_integer) 8);
  tmp52._areas = tmp55;
  omc_setup__areas(threadData, tmp52);

  real_array_create(&tmp57, ((modelica_real*)&((&data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
  real_array_create(&tmp58, ((modelica_real*)&((&data->simulationInfo->realParameter[67]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
  real_array_create(&tmp59, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
  tmp56._stop_simulation = (data->simulationInfo->realParameter[85]/* cc.p.stop_simulation PARAM */) ;
  tmp56._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
  tmp56._msg_len = ((modelica_integer) 5);
  tmp56._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
  tmp56._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
  tmp56._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
  tmp56._monitor_start = (data->simulationInfo->realParameter[78]/* cc.p.monitor_start PARAM */) ;
  tmp56._nDrones = ((modelica_integer) 1);
  tmp56._cc_choice = (data->simulationInfo->realParameter[60]/* cc.p.cc_choice PARAM */) ;
  tmp56._p_worst = (data->simulationInfo->realParameter[81]/* cc.p.p_worst PARAM */) ;
  tmp56._p_recharge = (data->simulationInfo->realParameter[80]/* cc.p.p_recharge PARAM */) ;
  tmp56._comm_timeout = (data->simulationInfo->realParameter[62]/* cc.p.comm_timeout PARAM */) ;
  tmp56._p_comm_error = (data->simulationInfo->realParameter[79]/* cc.p.p_comm_error PARAM */) ;
  tmp56._arrival_timeout = (data->simulationInfo->realParameter[57]/* cc.p.arrival_timeout PARAM */) ;
  tmp56._dDistance = (data->simulationInfo->realParameter[63]/* cc.p.dDistance PARAM */) ;
  tmp56._arrivalThreshold = (data->simulationInfo->realParameter[56]/* cc.p.arrivalThreshold PARAM */) ;
  tmp56._flyZone = tmp57;
  tmp56._docking_bay = tmp58;
  tmp56._m = (data->simulationInfo->realParameter[74]/* cc.p.m PARAM */) ;
  tmp56._maxSpeed = (data->simulationInfo->realParameter[76]/* cc.p.maxSpeed PARAM */) ;
  tmp56._horizontalODD = (data->simulationInfo->realParameter[73]/* cc.p.horizontalODD PARAM */) ;
  tmp56._verticalODD = (data->simulationInfo->realParameter[87]/* cc.p.verticalODD PARAM */) ;
  tmp56._maxAngle = (data->simulationInfo->realParameter[75]/* cc.p.maxAngle PARAM */) ;
  tmp56._minDistanceFromObs = (data->simulationInfo->realParameter[77]/* cc.p.minDistanceFromObs PARAM */) ;
  tmp56._dangerRadius = (data->simulationInfo->realParameter[64]/* cc.p.dangerRadius PARAM */) ;
  tmp56._unita = (data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) ;
  tmp56._capacity = (data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ;
  tmp56._batteryDischarge = (data->simulationInfo->realParameter[58]/* cc.p.batteryDischarge PARAM */) ;
  tmp56._commDischarge = (data->simulationInfo->realParameter[61]/* cc.p.commDischarge PARAM */) ;
  tmp56._rechargeRate = (data->simulationInfo->realParameter[82]/* cc.p.rechargeRate PARAM */) ;
  tmp56._dangerousBatteryPercentage = (data->simulationInfo->realParameter[66]/* cc.p.dangerousBatteryPercentage PARAM */) ;
  tmp56._dangerousBatteryLevel = (data->simulationInfo->realParameter[65]/* cc.p.dangerousBatteryLevel PARAM */) ;
  tmp56._rechargedPercentage = (data->simulationInfo->realParameter[83]/* cc.p.rechargedPercentage PARAM */) ;
  tmp56._rechargedThreshold = (data->simulationInfo->realParameter[84]/* cc.p.rechargedThreshold PARAM */) ;
  tmp56._nAreas = ((modelica_integer) 8);
  tmp56._areas = tmp59;
  omc_setup__drones(threadData, tmp56);
  TRACE_POP
}

/*
equation index: 17
type: ALGORITHM

  m.old_avg_drones_all_areas := $START.m.old_avg_drones_all_areas;
  m.std_dev_all_areas := $START.m.std_dev_all_areas;
  m.std_dev[8] := $START.m.std_dev[8];
  m.std_dev[7] := $START.m.std_dev[7];
  m.std_dev[6] := $START.m.std_dev[6];
  m.std_dev[5] := $START.m.std_dev[5];
  m.std_dev[4] := $START.m.std_dev[4];
  m.std_dev[3] := $START.m.std_dev[3];
  m.std_dev[2] := $START.m.std_dev[2];
  m.std_dev[1] := $START.m.std_dev[1];
  m.max_no_drone_time := $START.m.max_no_drone_time;
  m.avg_no_drone_time_all_areas := $START.m.avg_no_drone_time_all_areas;
  m.avg_no_drone_time[8] := $START.m.avg_no_drone_time[8];
  m.avg_no_drone_time[7] := $START.m.avg_no_drone_time[7];
  m.avg_no_drone_time[6] := $START.m.avg_no_drone_time[6];
  m.avg_no_drone_time[5] := $START.m.avg_no_drone_time[5];
  m.avg_no_drone_time[4] := $START.m.avg_no_drone_time[4];
  m.avg_no_drone_time[3] := $START.m.avg_no_drone_time[3];
  m.avg_no_drone_time[2] := $START.m.avg_no_drone_time[2];
  m.avg_no_drone_time[1] := $START.m.avg_no_drone_time[1];
  m.no_drone_time[8] := $START.m.no_drone_time[8];
  m.no_drone_time[7] := $START.m.no_drone_time[7];
  m.no_drone_time[6] := $START.m.no_drone_time[6];
  m.no_drone_time[5] := $START.m.no_drone_time[5];
  m.no_drone_time[4] := $START.m.no_drone_time[4];
  m.no_drone_time[3] := $START.m.no_drone_time[3];
  m.no_drone_time[2] := $START.m.no_drone_time[2];
  m.no_drone_time[1] := $START.m.no_drone_time[1];
  m.p_drones_all_areas := $START.m.p_drones_all_areas;
  m.p_drones[8] := $START.m.p_drones[8];
  m.p_drones[7] := $START.m.p_drones[7];
  m.p_drones[6] := $START.m.p_drones[6];
  m.p_drones[5] := $START.m.p_drones[5];
  m.p_drones[4] := $START.m.p_drones[4];
  m.p_drones[3] := $START.m.p_drones[3];
  m.p_drones[2] := $START.m.p_drones[2];
  m.p_drones[1] := $START.m.p_drones[1];
  m.beenVisited[8] := $START.m.beenVisited[8];
  m.beenVisited[7] := $START.m.beenVisited[7];
  m.beenVisited[6] := $START.m.beenVisited[6];
  m.beenVisited[5] := $START.m.beenVisited[5];
  m.beenVisited[4] := $START.m.beenVisited[4];
  m.beenVisited[3] := $START.m.beenVisited[3];
  m.beenVisited[2] := $START.m.beenVisited[2];
  m.beenVisited[1] := $START.m.beenVisited[1];
  m.avg_drones_all_areas := $START.m.avg_drones_all_areas;
  m.avg_drones[8] := $START.m.avg_drones[8];
  m.avg_drones[7] := $START.m.avg_drones[7];
  m.avg_drones[6] := $START.m.avg_drones[6];
  m.avg_drones[5] := $START.m.avg_drones[5];
  m.avg_drones[4] := $START.m.avg_drones[4];
  m.avg_drones[3] := $START.m.avg_drones[3];
  m.avg_drones[2] := $START.m.avg_drones[2];
  m.avg_drones[1] := $START.m.avg_drones[1];
  m.current_drones[8] := $START.m.current_drones[8];
  m.current_drones[7] := $START.m.current_drones[7];
  m.current_drones[6] := $START.m.current_drones[6];
  m.current_drones[5] := $START.m.current_drones[5];
  m.current_drones[4] := $START.m.current_drones[4];
  m.current_drones[3] := $START.m.current_drones[3];
  m.current_drones[2] := $START.m.current_drones[2];
  m.current_drones[1] := $START.m.current_drones[1];
  m.samples := $START.m.samples;
  m.z := $START.m.z;
  $whenCondition8 := $START.$whenCondition8;
  $whenCondition7 := $START.$whenCondition7;
  $whenCondition7 := false;
  $whenCondition8 := time > m.p.stop_simulation or cc.endSimulation;
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
*/
void System_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  modelica_boolean tmp60;
  integer_array tmp61;
  integer_array tmp62;
  real_array tmp63;
  real_array tmp64;
  integer_array tmp65;
  integer_array tmp66;
  real_array tmp67;
  real_array tmp68;
  real_array tmp69;
  real_array tmp70;
  real_array tmp71;
  real_array tmp72;
  real_array tmp73;
  real_array tmp74;
  (data->localData[0]->realVars[226]/* m.old_avg_drones_all_areas DISCRETE */)  = (data->modelData->realVarsData[226]/* m.old_avg_drones_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[244]/* m.std_dev_all_areas DISCRETE */)  = (data->modelData->realVarsData[244]/* m.std_dev_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[243]/* m.std_dev[8] DISCRETE */)  = (data->modelData->realVarsData[243]/* m.std_dev[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[242]/* m.std_dev[7] DISCRETE */)  = (data->modelData->realVarsData[242]/* m.std_dev[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[241]/* m.std_dev[6] DISCRETE */)  = (data->modelData->realVarsData[241]/* m.std_dev[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[240]/* m.std_dev[5] DISCRETE */)  = (data->modelData->realVarsData[240]/* m.std_dev[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[239]/* m.std_dev[4] DISCRETE */)  = (data->modelData->realVarsData[239]/* m.std_dev[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[238]/* m.std_dev[3] DISCRETE */)  = (data->modelData->realVarsData[238]/* m.std_dev[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[237]/* m.std_dev[2] DISCRETE */)  = (data->modelData->realVarsData[237]/* m.std_dev[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[236]/* m.std_dev[1] DISCRETE */)  = (data->modelData->realVarsData[236]/* m.std_dev[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[217]/* m.max_no_drone_time DISCRETE */)  = (data->modelData->realVarsData[217]/* m.max_no_drone_time DISCRETE */).attribute .start;

  (data->localData[0]->realVars[216]/* m.avg_no_drone_time_all_areas DISCRETE */)  = (data->modelData->realVarsData[216]/* m.avg_no_drone_time_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[215]/* m.avg_no_drone_time[8] DISCRETE */)  = (data->modelData->realVarsData[215]/* m.avg_no_drone_time[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[214]/* m.avg_no_drone_time[7] DISCRETE */)  = (data->modelData->realVarsData[214]/* m.avg_no_drone_time[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[213]/* m.avg_no_drone_time[6] DISCRETE */)  = (data->modelData->realVarsData[213]/* m.avg_no_drone_time[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[212]/* m.avg_no_drone_time[5] DISCRETE */)  = (data->modelData->realVarsData[212]/* m.avg_no_drone_time[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[211]/* m.avg_no_drone_time[4] DISCRETE */)  = (data->modelData->realVarsData[211]/* m.avg_no_drone_time[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[210]/* m.avg_no_drone_time[3] DISCRETE */)  = (data->modelData->realVarsData[210]/* m.avg_no_drone_time[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[209]/* m.avg_no_drone_time[2] DISCRETE */)  = (data->modelData->realVarsData[209]/* m.avg_no_drone_time[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[208]/* m.avg_no_drone_time[1] DISCRETE */)  = (data->modelData->realVarsData[208]/* m.avg_no_drone_time[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[225]/* m.no_drone_time[8] DISCRETE */)  = (data->modelData->realVarsData[225]/* m.no_drone_time[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[224]/* m.no_drone_time[7] DISCRETE */)  = (data->modelData->realVarsData[224]/* m.no_drone_time[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[223]/* m.no_drone_time[6] DISCRETE */)  = (data->modelData->realVarsData[223]/* m.no_drone_time[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[222]/* m.no_drone_time[5] DISCRETE */)  = (data->modelData->realVarsData[222]/* m.no_drone_time[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[221]/* m.no_drone_time[4] DISCRETE */)  = (data->modelData->realVarsData[221]/* m.no_drone_time[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[220]/* m.no_drone_time[3] DISCRETE */)  = (data->modelData->realVarsData[220]/* m.no_drone_time[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[219]/* m.no_drone_time[2] DISCRETE */)  = (data->modelData->realVarsData[219]/* m.no_drone_time[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[218]/* m.no_drone_time[1] DISCRETE */)  = (data->modelData->realVarsData[218]/* m.no_drone_time[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[235]/* m.p_drones_all_areas DISCRETE */)  = (data->modelData->realVarsData[235]/* m.p_drones_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[234]/* m.p_drones[8] DISCRETE */)  = (data->modelData->realVarsData[234]/* m.p_drones[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[233]/* m.p_drones[7] DISCRETE */)  = (data->modelData->realVarsData[233]/* m.p_drones[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[232]/* m.p_drones[6] DISCRETE */)  = (data->modelData->realVarsData[232]/* m.p_drones[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[231]/* m.p_drones[5] DISCRETE */)  = (data->modelData->realVarsData[231]/* m.p_drones[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[230]/* m.p_drones[4] DISCRETE */)  = (data->modelData->realVarsData[230]/* m.p_drones[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[229]/* m.p_drones[3] DISCRETE */)  = (data->modelData->realVarsData[229]/* m.p_drones[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[228]/* m.p_drones[2] DISCRETE */)  = (data->modelData->realVarsData[228]/* m.p_drones[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[227]/* m.p_drones[1] DISCRETE */)  = (data->modelData->realVarsData[227]/* m.p_drones[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[32]/* m.beenVisited[8] DISCRETE */)  = (data->modelData->integerVarsData[32]/* m.beenVisited[8] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[31]/* m.beenVisited[7] DISCRETE */)  = (data->modelData->integerVarsData[31]/* m.beenVisited[7] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[30]/* m.beenVisited[6] DISCRETE */)  = (data->modelData->integerVarsData[30]/* m.beenVisited[6] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[29]/* m.beenVisited[5] DISCRETE */)  = (data->modelData->integerVarsData[29]/* m.beenVisited[5] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[28]/* m.beenVisited[4] DISCRETE */)  = (data->modelData->integerVarsData[28]/* m.beenVisited[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[27]/* m.beenVisited[3] DISCRETE */)  = (data->modelData->integerVarsData[27]/* m.beenVisited[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[26]/* m.beenVisited[2] DISCRETE */)  = (data->modelData->integerVarsData[26]/* m.beenVisited[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[25]/* m.beenVisited[1] DISCRETE */)  = (data->modelData->integerVarsData[25]/* m.beenVisited[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[207]/* m.avg_drones_all_areas DISCRETE */)  = (data->modelData->realVarsData[207]/* m.avg_drones_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[206]/* m.avg_drones[8] DISCRETE */)  = (data->modelData->realVarsData[206]/* m.avg_drones[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[205]/* m.avg_drones[7] DISCRETE */)  = (data->modelData->realVarsData[205]/* m.avg_drones[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[204]/* m.avg_drones[6] DISCRETE */)  = (data->modelData->realVarsData[204]/* m.avg_drones[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[203]/* m.avg_drones[5] DISCRETE */)  = (data->modelData->realVarsData[203]/* m.avg_drones[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[202]/* m.avg_drones[4] DISCRETE */)  = (data->modelData->realVarsData[202]/* m.avg_drones[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[201]/* m.avg_drones[3] DISCRETE */)  = (data->modelData->realVarsData[201]/* m.avg_drones[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[200]/* m.avg_drones[2] DISCRETE */)  = (data->modelData->realVarsData[200]/* m.avg_drones[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[199]/* m.avg_drones[1] DISCRETE */)  = (data->modelData->realVarsData[199]/* m.avg_drones[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[40]/* m.current_drones[8] DISCRETE */)  = (data->modelData->integerVarsData[40]/* m.current_drones[8] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[39]/* m.current_drones[7] DISCRETE */)  = (data->modelData->integerVarsData[39]/* m.current_drones[7] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[38]/* m.current_drones[6] DISCRETE */)  = (data->modelData->integerVarsData[38]/* m.current_drones[6] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[37]/* m.current_drones[5] DISCRETE */)  = (data->modelData->integerVarsData[37]/* m.current_drones[5] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[36]/* m.current_drones[4] DISCRETE */)  = (data->modelData->integerVarsData[36]/* m.current_drones[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[35]/* m.current_drones[3] DISCRETE */)  = (data->modelData->integerVarsData[35]/* m.current_drones[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[34]/* m.current_drones[2] DISCRETE */)  = (data->modelData->integerVarsData[34]/* m.current_drones[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[33]/* m.current_drones[1] DISCRETE */)  = (data->modelData->integerVarsData[33]/* m.current_drones[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[41]/* m.samples DISCRETE */)  = (data->modelData->integerVarsData[41]/* m.samples DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[42]/* m.z DISCRETE */)  = (data->modelData->integerVarsData[42]/* m.z DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[12]/* $whenCondition8 DISCRETE */)  = (data->modelData->booleanVarsData[12]/* $whenCondition8 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[11]/* $whenCondition7 DISCRETE */)  = (data->modelData->booleanVarsData[11]/* $whenCondition7 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[11]/* $whenCondition7 DISCRETE */)  = 0;

  tmp60 = Greater(data->localData[0]->timeValue,(data->simulationInfo->realParameter[592]/* m.p.stop_simulation PARAM */) );
  (data->localData[0]->booleanVars[12]/* $whenCondition8 DISCRETE */)  = (tmp60 || (data->localData[0]->booleanVars[16]/* cc.endSimulation DISCRETE */) );

  (data->localData[0]->integerVars[42]/* m.z DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[41]/* m.samples DISCRETE */)  = ((modelica_integer) 0);

  array_alloc_scalar_integer_array(&tmp61, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp62, ((modelica_integer*)&((&(data->localData[0]->integerVars[33]/* m.current_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  integer_array_copy_data(tmp61, tmp62);

  array_alloc_scalar_real_array(&tmp63, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp64, ((modelica_real*)&((&(data->localData[0]->realVars[199]/* m.avg_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp63, tmp64);

  (data->localData[0]->realVars[207]/* m.avg_drones_all_areas DISCRETE */)  = 0.0;

  array_alloc_scalar_integer_array(&tmp65, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp66, ((modelica_integer*)&((&(data->localData[0]->integerVars[25]/* m.beenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  integer_array_copy_data(tmp65, tmp66);

  array_alloc_scalar_real_array(&tmp67, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp68, ((modelica_real*)&((&(data->localData[0]->realVars[227]/* m.p_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp67, tmp68);

  (data->localData[0]->realVars[235]/* m.p_drones_all_areas DISCRETE */)  = 0.0;

  array_alloc_scalar_real_array(&tmp69, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp70, ((modelica_real*)&((&(data->localData[0]->realVars[218]/* m.no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp69, tmp70);

  array_alloc_scalar_real_array(&tmp71, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp72, ((modelica_real*)&((&(data->localData[0]->realVars[208]/* m.avg_no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp71, tmp72);

  (data->localData[0]->realVars[216]/* m.avg_no_drone_time_all_areas DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[217]/* m.max_no_drone_time DISCRETE */)  = 0.0;

  array_alloc_scalar_real_array(&tmp73, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp74, ((modelica_real*)&((&(data->localData[0]->realVars[236]/* m.std_dev[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp73, tmp74);

  (data->localData[0]->realVars[244]/* m.std_dev_all_areas DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[226]/* m.old_avg_drones_all_areas DISCRETE */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_96(DATA *data, threadData_t *threadData);

extern void System_eqFunction_98(DATA *data, threadData_t *threadData);

extern void System_eqFunction_100(DATA *data, threadData_t *threadData);

extern void System_eqFunction_99(DATA *data, threadData_t *threadData);

extern void System_eqFunction_105(DATA *data, threadData_t *threadData);

extern void System_eqFunction_101(DATA *data, threadData_t *threadData);

extern void System_eqFunction_102(DATA *data, threadData_t *threadData);


/*
equation index: 25
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].readsignal = $START.drone_to_cc[1].readsignal
*/
void System_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  (data->simulationInfo->booleanVarsPre[46]/* drone_to_cc[1].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[46]/* drone_to_cc[1].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
drone_to_cc[1].readsigint = not $PRE.drone_to_cc[1].readsignal == drone_to_cc[1].readsignal
*/
void System_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  (data->localData[0]->booleanVars[45]/* drone_to_cc[1].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[46]/* drone_to_cc[1].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[46]/* drone_to_cc[1].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[46]/* drone_to_cc[1].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[46]/* drone_to_cc[1].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].writesignal = $START.cc_to_drone[1].writesignal
*/
void System_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  (data->simulationInfo->booleanVarsPre[37]/* cc_to_drone[1].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[37]/* cc_to_drone[1].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
cc_to_drone[1].writesigint = not $PRE.cc_to_drone[1].writesignal == cc_to_drone[1].writesignal
*/
void System_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  (data->localData[0]->booleanVars[36]/* cc_to_drone[1].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[37]/* cc_to_drone[1].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[37]/* cc_to_drone[1].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[37]/* cc_to_drone[1].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[37]/* cc_to_drone[1].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
$PRE.d[1].d.battery = $START.d[1].d.battery
*/
void System_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  (data->simulationInfo->realVarsPre[135]/* d[1].d.battery DISCRETE */)  = (data->modelData->realVarsData[135]/* d[1].d.battery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
$PRE.d[1].d.droneState = $START.d[1].d.droneState
*/
void System_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  (data->simulationInfo->integerVarsPre[19]/* d[1].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[19]/* d[1].d.droneState DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 31
type: ALGORITHM

  d[1].d.droneDead := $START.d[1].d.droneDead;
  d[1].d.droneState := $START.d[1].d.droneState;
  d[1].d.battery := $START.d[1].d.battery;
  $whenCondition14 := $START.$whenCondition14;
  $whenCondition13 := $START.$whenCondition13;
  $whenCondition13 := abs($PRE.d[1].d.battery) < 0.01;
  $whenCondition14 := false;
  d[1].d.battery := d[1].d.p.capacity;
  d[1].d.droneState := 1;
  d[1].d.droneDead := false;
*/
void System_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  modelica_boolean tmp77;
  (data->localData[0]->booleanVars[39]/* d[1].d.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[39]/* d[1].d.droneDead DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[19]/* d[1].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[19]/* d[1].d.droneState DISCRETE */).attribute .start;

  (data->localData[0]->realVars[135]/* d[1].d.battery DISCRETE */)  = (data->modelData->realVarsData[135]/* d[1].d.battery DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (data->modelData->booleanVarsData[5]/* $whenCondition14 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = (data->modelData->booleanVarsData[4]/* $whenCondition13 DISCRETE */).attribute .start;

  tmp77 = Less(fabs((data->simulationInfo->realVarsPre[135]/* d[1].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = tmp77;

  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = 0;

  (data->localData[0]->realVars[135]/* d[1].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[317]/* d[1].d.p.capacity PARAM */) ;

  (data->localData[0]->integerVars[19]/* d[1].d.droneState DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->booleanVars[39]/* d[1].d.droneDead DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_111(DATA *data, threadData_t *threadData);

extern void System_eqFunction_133(DATA *data, threadData_t *threadData);


/*
equation index: 34
type: SIMPLE_ASSIGN
d[1].ctrl.destZ = 0.0
*/
void System_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  (data->localData[0]->realVars[134]/* d[1].ctrl.destZ DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.destZ = d[1].ctrl.destZ
*/
void System_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  (data->simulationInfo->realVarsPre[134]/* d[1].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[134]/* d[1].ctrl.destZ DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
d[1].d.Vz = 0.0
*/
void System_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  (data->localData[0]->realVars[2]/* d[1].d.Vz STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_92(DATA *data, threadData_t *threadData);


/*
equation index: 38
type: SIMPLE_ASSIGN
d[1].d.z = d[1].d.p.docking_bay[3] + d[1].d.p.dDistance * (*Real*)(d[1].d.drone_id)
*/
void System_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  (data->localData[0]->realVars[5]/* d[1].d.z STATE(1,d[1].d.Vz) */)  = (data->simulationInfo->realParameter[327]/* d[1].d.p.docking_bay[3] PARAM */)  + ((data->simulationInfo->realParameter[321]/* d[1].d.p.dDistance PARAM */) ) * (((modelica_real)(data->simulationInfo->integerParameter[12]/* d[1].d.drone_id PARAM */) ));
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
d[1].ctrl.Trustz = d[1].ctrl.prm.m * (9.81 + d[1].ctrl.kz1 * (d[1].d.z - $PRE.d[1].ctrl.destZ) + d[1].ctrl.kz2 * d[1].d.Vz)
*/
void System_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  (data->localData[0]->realVars[30]/* d[1].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[249]/* d[1].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[177]/* d[1].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[5]/* d[1].d.z STATE(1,d[1].d.Vz) */)  - (data->simulationInfo->realVarsPre[134]/* d[1].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[178]/* d[1].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[2]/* d[1].d.Vz STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_91(DATA *data, threadData_t *threadData);


/*
equation index: 41
type: SIMPLE_ASSIGN
d[1].ctrl.destY = 0.0
*/
void System_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  (data->localData[0]->realVars[133]/* d[1].ctrl.destY DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.destY = d[1].ctrl.destY
*/
void System_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  (data->simulationInfo->realVarsPre[133]/* d[1].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[133]/* d[1].ctrl.destY DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
d[1].d.Vy = 0.0
*/
void System_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  (data->localData[0]->realVars[1]/* d[1].d.Vy STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_93(DATA *data, threadData_t *threadData);


/*
equation index: 45
type: SIMPLE_ASSIGN
d[1].d.y = d[1].d.p.docking_bay[2]
*/
void System_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  (data->localData[0]->realVars[4]/* d[1].d.y STATE(1,d[1].d.Vy) */)  = (data->simulationInfo->realParameter[326]/* d[1].d.p.docking_bay[2] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_134(DATA *data, threadData_t *threadData);


/*
equation index: 47
type: SIMPLE_ASSIGN
d[1].ctrl.Trusty = d[1].ctrl.prm.m * (d[1].ctrl.ky1 * (d[1].ctrl.y - $PRE.d[1].ctrl.destY) + d[1].ctrl.ky2 * d[1].d.Vy)
*/
void System_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  (data->localData[0]->realVars[29]/* d[1].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[249]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[175]/* d[1].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[35]/* d[1].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[133]/* d[1].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[176]/* d[1].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[1]/* d[1].d.Vy STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_136(DATA *data, threadData_t *threadData);


/*
equation index: 49
type: SIMPLE_ASSIGN
d[1].ctrl.destX = 0.0
*/
void System_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  (data->localData[0]->realVars[132]/* d[1].ctrl.destX DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.destX = d[1].ctrl.destX
*/
void System_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  (data->simulationInfo->realVarsPre[132]/* d[1].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[132]/* d[1].ctrl.destX DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
d[1].d.Vx = 0.0
*/
void System_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  (data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_94(DATA *data, threadData_t *threadData);


/*
equation index: 53
type: SIMPLE_ASSIGN
d[1].d.x = d[1].d.p.docking_bay[1]
*/
void System_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  (data->localData[0]->realVars[3]/* d[1].d.x STATE(1,d[1].d.Vx) */)  = (data->simulationInfo->realParameter[325]/* d[1].d.p.docking_bay[1] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_137(DATA *data, threadData_t *threadData);


/*
equation index: 55
type: SIMPLE_ASSIGN
d[1].ctrl.Trustx = d[1].ctrl.prm.m * (d[1].ctrl.kx1 * (d[1].ctrl.x - $PRE.d[1].ctrl.destX) + d[1].ctrl.kx2 * d[1].d.Vx)
*/
void System_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  (data->localData[0]->realVars[28]/* d[1].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[249]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[173]/* d[1].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[34]/* d[1].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[132]/* d[1].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[174]/* d[1].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_139(DATA *data, threadData_t *threadData);


/*
equation index: 57
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].writesigint = $START.drone_to_cc[1].writesigint
*/
void System_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  (data->simulationInfo->booleanVarsPre[48]/* drone_to_cc[1].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[48]/* drone_to_cc[1].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].readsigint = $START.drone_to_cc[1].readsigint
*/
void System_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  (data->simulationInfo->booleanVarsPre[45]/* drone_to_cc[1].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[45]/* drone_to_cc[1].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].fifosize = $START.drone_to_cc[1].fifosize
*/
void System_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  (data->simulationInfo->integerVarsPre[22]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->modelData->integerVarsData[22]/* drone_to_cc[1].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 60
type: ALGORITHM

  drone_to_cc[1].newest := $START.drone_to_cc[1].newest;
  drone_to_cc[1].oldest := $START.drone_to_cc[1].oldest;
  drone_to_cc[1].fifosize := $START.drone_to_cc[1].fifosize;
  drone_to_cc[1].fifo[10,5] := $START.drone_to_cc[1].fifo[10,5];
  drone_to_cc[1].fifo[10,4] := $START.drone_to_cc[1].fifo[10,4];
  drone_to_cc[1].fifo[10,3] := $START.drone_to_cc[1].fifo[10,3];
  drone_to_cc[1].fifo[10,2] := $START.drone_to_cc[1].fifo[10,2];
  drone_to_cc[1].fifo[10,1] := $START.drone_to_cc[1].fifo[10,1];
  drone_to_cc[1].fifo[9,5] := $START.drone_to_cc[1].fifo[9,5];
  drone_to_cc[1].fifo[9,4] := $START.drone_to_cc[1].fifo[9,4];
  drone_to_cc[1].fifo[9,3] := $START.drone_to_cc[1].fifo[9,3];
  drone_to_cc[1].fifo[9,2] := $START.drone_to_cc[1].fifo[9,2];
  drone_to_cc[1].fifo[9,1] := $START.drone_to_cc[1].fifo[9,1];
  drone_to_cc[1].fifo[8,5] := $START.drone_to_cc[1].fifo[8,5];
  drone_to_cc[1].fifo[8,4] := $START.drone_to_cc[1].fifo[8,4];
  drone_to_cc[1].fifo[8,3] := $START.drone_to_cc[1].fifo[8,3];
  drone_to_cc[1].fifo[8,2] := $START.drone_to_cc[1].fifo[8,2];
  drone_to_cc[1].fifo[8,1] := $START.drone_to_cc[1].fifo[8,1];
  drone_to_cc[1].fifo[7,5] := $START.drone_to_cc[1].fifo[7,5];
  drone_to_cc[1].fifo[7,4] := $START.drone_to_cc[1].fifo[7,4];
  drone_to_cc[1].fifo[7,3] := $START.drone_to_cc[1].fifo[7,3];
  drone_to_cc[1].fifo[7,2] := $START.drone_to_cc[1].fifo[7,2];
  drone_to_cc[1].fifo[7,1] := $START.drone_to_cc[1].fifo[7,1];
  drone_to_cc[1].fifo[6,5] := $START.drone_to_cc[1].fifo[6,5];
  drone_to_cc[1].fifo[6,4] := $START.drone_to_cc[1].fifo[6,4];
  drone_to_cc[1].fifo[6,3] := $START.drone_to_cc[1].fifo[6,3];
  drone_to_cc[1].fifo[6,2] := $START.drone_to_cc[1].fifo[6,2];
  drone_to_cc[1].fifo[6,1] := $START.drone_to_cc[1].fifo[6,1];
  drone_to_cc[1].fifo[5,5] := $START.drone_to_cc[1].fifo[5,5];
  drone_to_cc[1].fifo[5,4] := $START.drone_to_cc[1].fifo[5,4];
  drone_to_cc[1].fifo[5,3] := $START.drone_to_cc[1].fifo[5,3];
  drone_to_cc[1].fifo[5,2] := $START.drone_to_cc[1].fifo[5,2];
  drone_to_cc[1].fifo[5,1] := $START.drone_to_cc[1].fifo[5,1];
  drone_to_cc[1].fifo[4,5] := $START.drone_to_cc[1].fifo[4,5];
  drone_to_cc[1].fifo[4,4] := $START.drone_to_cc[1].fifo[4,4];
  drone_to_cc[1].fifo[4,3] := $START.drone_to_cc[1].fifo[4,3];
  drone_to_cc[1].fifo[4,2] := $START.drone_to_cc[1].fifo[4,2];
  drone_to_cc[1].fifo[4,1] := $START.drone_to_cc[1].fifo[4,1];
  drone_to_cc[1].fifo[3,5] := $START.drone_to_cc[1].fifo[3,5];
  drone_to_cc[1].fifo[3,4] := $START.drone_to_cc[1].fifo[3,4];
  drone_to_cc[1].fifo[3,3] := $START.drone_to_cc[1].fifo[3,3];
  drone_to_cc[1].fifo[3,2] := $START.drone_to_cc[1].fifo[3,2];
  drone_to_cc[1].fifo[3,1] := $START.drone_to_cc[1].fifo[3,1];
  drone_to_cc[1].fifo[2,5] := $START.drone_to_cc[1].fifo[2,5];
  drone_to_cc[1].fifo[2,4] := $START.drone_to_cc[1].fifo[2,4];
  drone_to_cc[1].fifo[2,3] := $START.drone_to_cc[1].fifo[2,3];
  drone_to_cc[1].fifo[2,2] := $START.drone_to_cc[1].fifo[2,2];
  drone_to_cc[1].fifo[2,1] := $START.drone_to_cc[1].fifo[2,1];
  drone_to_cc[1].fifo[1,5] := $START.drone_to_cc[1].fifo[1,5];
  drone_to_cc[1].fifo[1,4] := $START.drone_to_cc[1].fifo[1,4];
  drone_to_cc[1].fifo[1,3] := $START.drone_to_cc[1].fifo[1,3];
  drone_to_cc[1].fifo[1,2] := $START.drone_to_cc[1].fifo[1,2];
  drone_to_cc[1].fifo[1,1] := $START.drone_to_cc[1].fifo[1,1];
  drone_to_cc[1].spaceavailable := $START.drone_to_cc[1].spaceavailable;
  drone_to_cc[1].outputdata[5] := $START.drone_to_cc[1].outputdata[5];
  drone_to_cc[1].outputdata[4] := $START.drone_to_cc[1].outputdata[4];
  drone_to_cc[1].outputdata[3] := $START.drone_to_cc[1].outputdata[3];
  drone_to_cc[1].outputdata[2] := $START.drone_to_cc[1].outputdata[2];
  drone_to_cc[1].outputdata[1] := $START.drone_to_cc[1].outputdata[1];
  drone_to_cc[1].datavailable := $START.drone_to_cc[1].datavailable;
  $whenCondition3 := $START.$whenCondition3;
  $whenCondition2 := $START.$whenCondition2;
  $whenCondition1 := $START.$whenCondition1;
  $whenCondition1 := $PRE.drone_to_cc[1].readsigint and $PRE.drone_to_cc[1].writesigint;
  $whenCondition2 := $PRE.drone_to_cc[1].readsigint and not $PRE.drone_to_cc[1].writesigint and $PRE.drone_to_cc[1].fifosize >= 1;
  $whenCondition3 := not $PRE.drone_to_cc[1].readsigint and $PRE.drone_to_cc[1].writesigint and $PRE.drone_to_cc[1].fifosize < 10;
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
*/
void System_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  modelica_integer tmp80;
  modelica_integer tmp81;
  modelica_integer tmp82;
  modelica_integer tmp83;
  modelica_integer tmp84;
  modelica_integer tmp85;
  modelica_integer tmp86;
  modelica_integer tmp87;
  modelica_integer tmp88;
  (data->localData[0]->integerVars[23]/* drone_to_cc[1].newest DISCRETE */)  = (data->modelData->integerVarsData[23]/* drone_to_cc[1].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[24]/* drone_to_cc[1].oldest DISCRETE */)  = (data->modelData->integerVarsData[24]/* drone_to_cc[1].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[22]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->modelData->integerVarsData[22]/* drone_to_cc[1].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[193]/* drone_to_cc[1].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[193]/* drone_to_cc[1].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[192]/* drone_to_cc[1].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[192]/* drone_to_cc[1].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[191]/* drone_to_cc[1].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[191]/* drone_to_cc[1].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[190]/* drone_to_cc[1].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[190]/* drone_to_cc[1].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[189]/* drone_to_cc[1].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[189]/* drone_to_cc[1].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[188]/* drone_to_cc[1].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[188]/* drone_to_cc[1].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[187]/* drone_to_cc[1].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[187]/* drone_to_cc[1].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[186]/* drone_to_cc[1].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[186]/* drone_to_cc[1].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[185]/* drone_to_cc[1].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[185]/* drone_to_cc[1].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[184]/* drone_to_cc[1].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[184]/* drone_to_cc[1].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[183]/* drone_to_cc[1].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[183]/* drone_to_cc[1].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[182]/* drone_to_cc[1].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[182]/* drone_to_cc[1].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[181]/* drone_to_cc[1].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[181]/* drone_to_cc[1].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[180]/* drone_to_cc[1].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[180]/* drone_to_cc[1].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[179]/* drone_to_cc[1].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[179]/* drone_to_cc[1].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[178]/* drone_to_cc[1].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[178]/* drone_to_cc[1].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[177]/* drone_to_cc[1].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[177]/* drone_to_cc[1].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[176]/* drone_to_cc[1].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[176]/* drone_to_cc[1].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[175]/* drone_to_cc[1].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[175]/* drone_to_cc[1].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[174]/* drone_to_cc[1].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[174]/* drone_to_cc[1].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[173]/* drone_to_cc[1].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[173]/* drone_to_cc[1].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[172]/* drone_to_cc[1].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[172]/* drone_to_cc[1].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[171]/* drone_to_cc[1].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[171]/* drone_to_cc[1].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[170]/* drone_to_cc[1].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[170]/* drone_to_cc[1].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[169]/* drone_to_cc[1].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[169]/* drone_to_cc[1].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[168]/* drone_to_cc[1].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[168]/* drone_to_cc[1].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[167]/* drone_to_cc[1].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[167]/* drone_to_cc[1].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[166]/* drone_to_cc[1].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[166]/* drone_to_cc[1].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[165]/* drone_to_cc[1].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[165]/* drone_to_cc[1].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[164]/* drone_to_cc[1].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[164]/* drone_to_cc[1].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[163]/* drone_to_cc[1].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[163]/* drone_to_cc[1].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[162]/* drone_to_cc[1].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[162]/* drone_to_cc[1].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[161]/* drone_to_cc[1].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[161]/* drone_to_cc[1].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[160]/* drone_to_cc[1].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[160]/* drone_to_cc[1].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[159]/* drone_to_cc[1].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[159]/* drone_to_cc[1].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[158]/* drone_to_cc[1].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[158]/* drone_to_cc[1].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[157]/* drone_to_cc[1].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[157]/* drone_to_cc[1].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[156]/* drone_to_cc[1].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[156]/* drone_to_cc[1].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[155]/* drone_to_cc[1].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[155]/* drone_to_cc[1].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[154]/* drone_to_cc[1].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[154]/* drone_to_cc[1].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[153]/* drone_to_cc[1].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[153]/* drone_to_cc[1].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[152]/* drone_to_cc[1].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[152]/* drone_to_cc[1].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[151]/* drone_to_cc[1].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[151]/* drone_to_cc[1].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[150]/* drone_to_cc[1].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[150]/* drone_to_cc[1].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[149]/* drone_to_cc[1].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[149]/* drone_to_cc[1].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[148]/* drone_to_cc[1].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[148]/* drone_to_cc[1].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[147]/* drone_to_cc[1].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[147]/* drone_to_cc[1].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[146]/* drone_to_cc[1].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[146]/* drone_to_cc[1].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[145]/* drone_to_cc[1].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[145]/* drone_to_cc[1].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[144]/* drone_to_cc[1].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[144]/* drone_to_cc[1].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[47]/* drone_to_cc[1].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[47]/* drone_to_cc[1].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[198]/* drone_to_cc[1].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[198]/* drone_to_cc[1].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[197]/* drone_to_cc[1].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[197]/* drone_to_cc[1].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[196]/* drone_to_cc[1].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[196]/* drone_to_cc[1].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[195]/* drone_to_cc[1].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[195]/* drone_to_cc[1].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[194]/* drone_to_cc[1].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[194]/* drone_to_cc[1].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[44]/* drone_to_cc[1].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[44]/* drone_to_cc[1].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[7]/* $whenCondition3 DISCRETE */)  = (data->modelData->booleanVarsData[7]/* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[6]/* $whenCondition2 DISCRETE */)  = (data->modelData->booleanVarsData[6]/* $whenCondition2 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = (data->modelData->booleanVarsData[0]/* $whenCondition1 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[45]/* drone_to_cc[1].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[48]/* drone_to_cc[1].writesigint DISCRETE */) );

  tmp78 = GreaterEq((data->simulationInfo->integerVarsPre[22]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[6]/* $whenCondition2 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[45]/* drone_to_cc[1].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[48]/* drone_to_cc[1].writesigint DISCRETE */) )) && tmp78);

  tmp79 = Less((data->simulationInfo->integerVarsPre[22]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[7]/* $whenCondition3 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[45]/* drone_to_cc[1].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[48]/* drone_to_cc[1].writesigint DISCRETE */) ) && tmp79);

  (data->localData[0]->booleanVars[44]/* drone_to_cc[1].datavailable DISCRETE */)  = 0;

  tmp80 = ((modelica_integer) 1); tmp81 = 1; tmp82 = ((modelica_integer) 5);
  if(!(((tmp81 > 0) && (tmp80 > tmp82)) || ((tmp81 < 0) && (tmp80 < tmp82))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp80, tmp82); j += tmp81)
    {
      (&(data->localData[0]->realVars[194]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[47]/* drone_to_cc[1].spaceavailable DISCRETE */)  = 1;

  tmp86 = ((modelica_integer) 1); tmp87 = 1; tmp88 = ((modelica_integer) 10);
  if(!(((tmp87 > 0) && (tmp86 > tmp88)) || ((tmp87 < 0) && (tmp86 < tmp88))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp86, tmp88); i += tmp87)
    {
      tmp83 = ((modelica_integer) 1); tmp84 = 1; tmp85 = ((modelica_integer) 5);
      if(!(((tmp84 > 0) && (tmp83 > tmp85)) || ((tmp84 < 0) && (tmp83 < tmp85))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp83, tmp85); j += tmp84)
        {
          (&(data->localData[0]->realVars[144]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[22]/* drone_to_cc[1].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[24]/* drone_to_cc[1].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[23]/* drone_to_cc[1].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_126(DATA *data, threadData_t *threadData);

extern void System_eqFunction_130(DATA *data, threadData_t *threadData);

extern void System_eqFunction_125(DATA *data, threadData_t *threadData);

extern void System_eqFunction_128(DATA *data, threadData_t *threadData);

extern void System_eqFunction_127(DATA *data, threadData_t *threadData);

extern void System_eqFunction_129(DATA *data, threadData_t *threadData);

extern void System_eqFunction_124(DATA *data, threadData_t *threadData);


/*
equation index: 68
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].writesigint = $START.cc_to_drone[1].writesigint
*/
void System_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  (data->simulationInfo->booleanVarsPre[36]/* cc_to_drone[1].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[36]/* cc_to_drone[1].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].readsigint = $START.cc_to_drone[1].readsigint
*/
void System_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  (data->simulationInfo->booleanVarsPre[33]/* cc_to_drone[1].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[33]/* cc_to_drone[1].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].fifosize = $START.cc_to_drone[1].fifosize
*/
void System_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  (data->simulationInfo->integerVarsPre[15]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->modelData->integerVarsData[15]/* cc_to_drone[1].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 71
type: ALGORITHM

  cc_to_drone[1].newest := $START.cc_to_drone[1].newest;
  cc_to_drone[1].oldest := $START.cc_to_drone[1].oldest;
  cc_to_drone[1].fifosize := $START.cc_to_drone[1].fifosize;
  cc_to_drone[1].fifo[10,5] := $START.cc_to_drone[1].fifo[10,5];
  cc_to_drone[1].fifo[10,4] := $START.cc_to_drone[1].fifo[10,4];
  cc_to_drone[1].fifo[10,3] := $START.cc_to_drone[1].fifo[10,3];
  cc_to_drone[1].fifo[10,2] := $START.cc_to_drone[1].fifo[10,2];
  cc_to_drone[1].fifo[10,1] := $START.cc_to_drone[1].fifo[10,1];
  cc_to_drone[1].fifo[9,5] := $START.cc_to_drone[1].fifo[9,5];
  cc_to_drone[1].fifo[9,4] := $START.cc_to_drone[1].fifo[9,4];
  cc_to_drone[1].fifo[9,3] := $START.cc_to_drone[1].fifo[9,3];
  cc_to_drone[1].fifo[9,2] := $START.cc_to_drone[1].fifo[9,2];
  cc_to_drone[1].fifo[9,1] := $START.cc_to_drone[1].fifo[9,1];
  cc_to_drone[1].fifo[8,5] := $START.cc_to_drone[1].fifo[8,5];
  cc_to_drone[1].fifo[8,4] := $START.cc_to_drone[1].fifo[8,4];
  cc_to_drone[1].fifo[8,3] := $START.cc_to_drone[1].fifo[8,3];
  cc_to_drone[1].fifo[8,2] := $START.cc_to_drone[1].fifo[8,2];
  cc_to_drone[1].fifo[8,1] := $START.cc_to_drone[1].fifo[8,1];
  cc_to_drone[1].fifo[7,5] := $START.cc_to_drone[1].fifo[7,5];
  cc_to_drone[1].fifo[7,4] := $START.cc_to_drone[1].fifo[7,4];
  cc_to_drone[1].fifo[7,3] := $START.cc_to_drone[1].fifo[7,3];
  cc_to_drone[1].fifo[7,2] := $START.cc_to_drone[1].fifo[7,2];
  cc_to_drone[1].fifo[7,1] := $START.cc_to_drone[1].fifo[7,1];
  cc_to_drone[1].fifo[6,5] := $START.cc_to_drone[1].fifo[6,5];
  cc_to_drone[1].fifo[6,4] := $START.cc_to_drone[1].fifo[6,4];
  cc_to_drone[1].fifo[6,3] := $START.cc_to_drone[1].fifo[6,3];
  cc_to_drone[1].fifo[6,2] := $START.cc_to_drone[1].fifo[6,2];
  cc_to_drone[1].fifo[6,1] := $START.cc_to_drone[1].fifo[6,1];
  cc_to_drone[1].fifo[5,5] := $START.cc_to_drone[1].fifo[5,5];
  cc_to_drone[1].fifo[5,4] := $START.cc_to_drone[1].fifo[5,4];
  cc_to_drone[1].fifo[5,3] := $START.cc_to_drone[1].fifo[5,3];
  cc_to_drone[1].fifo[5,2] := $START.cc_to_drone[1].fifo[5,2];
  cc_to_drone[1].fifo[5,1] := $START.cc_to_drone[1].fifo[5,1];
  cc_to_drone[1].fifo[4,5] := $START.cc_to_drone[1].fifo[4,5];
  cc_to_drone[1].fifo[4,4] := $START.cc_to_drone[1].fifo[4,4];
  cc_to_drone[1].fifo[4,3] := $START.cc_to_drone[1].fifo[4,3];
  cc_to_drone[1].fifo[4,2] := $START.cc_to_drone[1].fifo[4,2];
  cc_to_drone[1].fifo[4,1] := $START.cc_to_drone[1].fifo[4,1];
  cc_to_drone[1].fifo[3,5] := $START.cc_to_drone[1].fifo[3,5];
  cc_to_drone[1].fifo[3,4] := $START.cc_to_drone[1].fifo[3,4];
  cc_to_drone[1].fifo[3,3] := $START.cc_to_drone[1].fifo[3,3];
  cc_to_drone[1].fifo[3,2] := $START.cc_to_drone[1].fifo[3,2];
  cc_to_drone[1].fifo[3,1] := $START.cc_to_drone[1].fifo[3,1];
  cc_to_drone[1].fifo[2,5] := $START.cc_to_drone[1].fifo[2,5];
  cc_to_drone[1].fifo[2,4] := $START.cc_to_drone[1].fifo[2,4];
  cc_to_drone[1].fifo[2,3] := $START.cc_to_drone[1].fifo[2,3];
  cc_to_drone[1].fifo[2,2] := $START.cc_to_drone[1].fifo[2,2];
  cc_to_drone[1].fifo[2,1] := $START.cc_to_drone[1].fifo[2,1];
  cc_to_drone[1].fifo[1,5] := $START.cc_to_drone[1].fifo[1,5];
  cc_to_drone[1].fifo[1,4] := $START.cc_to_drone[1].fifo[1,4];
  cc_to_drone[1].fifo[1,3] := $START.cc_to_drone[1].fifo[1,3];
  cc_to_drone[1].fifo[1,2] := $START.cc_to_drone[1].fifo[1,2];
  cc_to_drone[1].fifo[1,1] := $START.cc_to_drone[1].fifo[1,1];
  cc_to_drone[1].spaceavailable := $START.cc_to_drone[1].spaceavailable;
  cc_to_drone[1].outputdata[5] := $START.cc_to_drone[1].outputdata[5];
  cc_to_drone[1].outputdata[4] := $START.cc_to_drone[1].outputdata[4];
  cc_to_drone[1].outputdata[3] := $START.cc_to_drone[1].outputdata[3];
  cc_to_drone[1].outputdata[2] := $START.cc_to_drone[1].outputdata[2];
  cc_to_drone[1].outputdata[1] := $START.cc_to_drone[1].outputdata[1];
  cc_to_drone[1].datavailable := $START.cc_to_drone[1].datavailable;
  $whenCondition6 := $START.$whenCondition6;
  $whenCondition5 := $START.$whenCondition5;
  $whenCondition4 := $START.$whenCondition4;
  $whenCondition4 := $PRE.cc_to_drone[1].readsigint and $PRE.cc_to_drone[1].writesigint;
  $whenCondition5 := $PRE.cc_to_drone[1].readsigint and not $PRE.cc_to_drone[1].writesigint and $PRE.cc_to_drone[1].fifosize >= 1;
  $whenCondition6 := not $PRE.cc_to_drone[1].readsigint and $PRE.cc_to_drone[1].writesigint and $PRE.cc_to_drone[1].fifosize < 10;
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
*/
void System_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  modelica_integer tmp91;
  modelica_integer tmp92;
  modelica_integer tmp93;
  modelica_integer tmp94;
  modelica_integer tmp95;
  modelica_integer tmp96;
  modelica_integer tmp97;
  modelica_integer tmp98;
  modelica_integer tmp99;
  (data->localData[0]->integerVars[16]/* cc_to_drone[1].newest DISCRETE */)  = (data->modelData->integerVarsData[16]/* cc_to_drone[1].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[17]/* cc_to_drone[1].oldest DISCRETE */)  = (data->modelData->integerVarsData[17]/* cc_to_drone[1].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[15]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->modelData->integerVarsData[15]/* cc_to_drone[1].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[126]/* cc_to_drone[1].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[126]/* cc_to_drone[1].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[125]/* cc_to_drone[1].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[125]/* cc_to_drone[1].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[124]/* cc_to_drone[1].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[124]/* cc_to_drone[1].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[123]/* cc_to_drone[1].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[123]/* cc_to_drone[1].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[122]/* cc_to_drone[1].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[122]/* cc_to_drone[1].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[121]/* cc_to_drone[1].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[121]/* cc_to_drone[1].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[120]/* cc_to_drone[1].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[120]/* cc_to_drone[1].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[119]/* cc_to_drone[1].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[119]/* cc_to_drone[1].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[118]/* cc_to_drone[1].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[118]/* cc_to_drone[1].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[117]/* cc_to_drone[1].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[117]/* cc_to_drone[1].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[116]/* cc_to_drone[1].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[116]/* cc_to_drone[1].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[115]/* cc_to_drone[1].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[115]/* cc_to_drone[1].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[114]/* cc_to_drone[1].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[114]/* cc_to_drone[1].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[113]/* cc_to_drone[1].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[113]/* cc_to_drone[1].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[112]/* cc_to_drone[1].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[112]/* cc_to_drone[1].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[111]/* cc_to_drone[1].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[111]/* cc_to_drone[1].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[110]/* cc_to_drone[1].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[110]/* cc_to_drone[1].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[109]/* cc_to_drone[1].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[109]/* cc_to_drone[1].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[108]/* cc_to_drone[1].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[108]/* cc_to_drone[1].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[107]/* cc_to_drone[1].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[107]/* cc_to_drone[1].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[106]/* cc_to_drone[1].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[106]/* cc_to_drone[1].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[105]/* cc_to_drone[1].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[105]/* cc_to_drone[1].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[104]/* cc_to_drone[1].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[104]/* cc_to_drone[1].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[103]/* cc_to_drone[1].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[103]/* cc_to_drone[1].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[102]/* cc_to_drone[1].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[102]/* cc_to_drone[1].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[101]/* cc_to_drone[1].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[101]/* cc_to_drone[1].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[100]/* cc_to_drone[1].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[100]/* cc_to_drone[1].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[99]/* cc_to_drone[1].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[99]/* cc_to_drone[1].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[98]/* cc_to_drone[1].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[98]/* cc_to_drone[1].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[97]/* cc_to_drone[1].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[97]/* cc_to_drone[1].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[96]/* cc_to_drone[1].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[96]/* cc_to_drone[1].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[95]/* cc_to_drone[1].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[95]/* cc_to_drone[1].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[94]/* cc_to_drone[1].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[94]/* cc_to_drone[1].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[93]/* cc_to_drone[1].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[93]/* cc_to_drone[1].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[92]/* cc_to_drone[1].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[92]/* cc_to_drone[1].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[91]/* cc_to_drone[1].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[91]/* cc_to_drone[1].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[90]/* cc_to_drone[1].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[90]/* cc_to_drone[1].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[89]/* cc_to_drone[1].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[89]/* cc_to_drone[1].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[88]/* cc_to_drone[1].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[88]/* cc_to_drone[1].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[87]/* cc_to_drone[1].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[87]/* cc_to_drone[1].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[86]/* cc_to_drone[1].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[86]/* cc_to_drone[1].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[85]/* cc_to_drone[1].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[85]/* cc_to_drone[1].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[84]/* cc_to_drone[1].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[84]/* cc_to_drone[1].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[83]/* cc_to_drone[1].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[83]/* cc_to_drone[1].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[82]/* cc_to_drone[1].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[82]/* cc_to_drone[1].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[81]/* cc_to_drone[1].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[81]/* cc_to_drone[1].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[80]/* cc_to_drone[1].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[80]/* cc_to_drone[1].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[79]/* cc_to_drone[1].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[79]/* cc_to_drone[1].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[78]/* cc_to_drone[1].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[78]/* cc_to_drone[1].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[77]/* cc_to_drone[1].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[77]/* cc_to_drone[1].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[35]/* cc_to_drone[1].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[35]/* cc_to_drone[1].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[131]/* cc_to_drone[1].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[131]/* cc_to_drone[1].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[130]/* cc_to_drone[1].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[130]/* cc_to_drone[1].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[129]/* cc_to_drone[1].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[129]/* cc_to_drone[1].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[128]/* cc_to_drone[1].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[128]/* cc_to_drone[1].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[127]/* cc_to_drone[1].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[127]/* cc_to_drone[1].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[32]/* cc_to_drone[1].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[32]/* cc_to_drone[1].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[10]/* $whenCondition6 DISCRETE */)  = (data->modelData->booleanVarsData[10]/* $whenCondition6 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[9]/* $whenCondition5 DISCRETE */)  = (data->modelData->booleanVarsData[9]/* $whenCondition5 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[8]/* $whenCondition4 DISCRETE */)  = (data->modelData->booleanVarsData[8]/* $whenCondition4 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[8]/* $whenCondition4 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[33]/* cc_to_drone[1].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[36]/* cc_to_drone[1].writesigint DISCRETE */) );

  tmp89 = GreaterEq((data->simulationInfo->integerVarsPre[15]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[9]/* $whenCondition5 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[33]/* cc_to_drone[1].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[36]/* cc_to_drone[1].writesigint DISCRETE */) )) && tmp89);

  tmp90 = Less((data->simulationInfo->integerVarsPre[15]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[10]/* $whenCondition6 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[33]/* cc_to_drone[1].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[36]/* cc_to_drone[1].writesigint DISCRETE */) ) && tmp90);

  (data->localData[0]->booleanVars[32]/* cc_to_drone[1].datavailable DISCRETE */)  = 0;

  tmp91 = ((modelica_integer) 1); tmp92 = 1; tmp93 = ((modelica_integer) 5);
  if(!(((tmp92 > 0) && (tmp91 > tmp93)) || ((tmp92 < 0) && (tmp91 < tmp93))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp91, tmp93); j += tmp92)
    {
      (&(data->localData[0]->realVars[127]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[35]/* cc_to_drone[1].spaceavailable DISCRETE */)  = 1;

  tmp97 = ((modelica_integer) 1); tmp98 = 1; tmp99 = ((modelica_integer) 10);
  if(!(((tmp98 > 0) && (tmp97 > tmp99)) || ((tmp98 < 0) && (tmp97 < tmp99))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp97, tmp99); i += tmp98)
    {
      tmp94 = ((modelica_integer) 1); tmp95 = 1; tmp96 = ((modelica_integer) 5);
      if(!(((tmp95 > 0) && (tmp94 > tmp96)) || ((tmp95 < 0) && (tmp94 < tmp96))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp94, tmp96); j += tmp95)
        {
          (&(data->localData[0]->realVars[77]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[15]/* cc_to_drone[1].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[17]/* cc_to_drone[1].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[16]/* cc_to_drone[1].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_107(DATA *data, threadData_t *threadData);

extern void System_eqFunction_108(DATA *data, threadData_t *threadData);


/*
equation index: 74
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.droneDead = $START.d[1].ctrl.droneDead
*/
void System_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  (data->simulationInfo->booleanVarsPre[38]/* d[1].ctrl.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[38]/* d[1].ctrl.droneDead DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 75
type: ALGORITHM

  $whenCondition12 := $START.$whenCondition12;
  $whenCondition11 := $START.$whenCondition11;
  $whenCondition11 := false;
  $whenCondition12 := false;
*/
void System_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = (data->modelData->booleanVarsData[3]/* $whenCondition12 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (data->modelData->booleanVarsData[2]/* $whenCondition11 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_89(DATA *data, threadData_t *threadData);

extern void System_eqFunction_88(DATA *data, threadData_t *threadData);

extern void System_eqFunction_87(DATA *data, threadData_t *threadData);

extern void System_eqFunction_86(DATA *data, threadData_t *threadData);

extern void System_eqFunction_85(DATA *data, threadData_t *threadData);

extern void System_eqFunction_84(DATA *data, threadData_t *threadData);

extern void System_eqFunction_83(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void System_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  System_eqFunction_1(data, threadData);
  System_eqFunction_120(data, threadData);
  System_eqFunction_122(data, threadData);
  System_eqFunction_115(data, threadData);
  System_eqFunction_118(data, threadData);
  System_eqFunction_119(data, threadData);
  System_eqFunction_131(data, threadData);
  System_eqFunction_113(data, threadData);
  System_eqFunction_116(data, threadData);
  System_eqFunction_117(data, threadData);
  System_eqFunction_121(data, threadData);
  System_eqFunction_12(data, threadData);
  System_eqFunction_13(data, threadData);
  System_eqFunction_14(data, threadData);
  System_eqFunction_15(data, threadData);
  System_eqFunction_16(data, threadData);
  System_eqFunction_17(data, threadData);
  System_eqFunction_96(data, threadData);
  System_eqFunction_98(data, threadData);
  System_eqFunction_100(data, threadData);
  System_eqFunction_99(data, threadData);
  System_eqFunction_105(data, threadData);
  System_eqFunction_101(data, threadData);
  System_eqFunction_102(data, threadData);
  System_eqFunction_25(data, threadData);
  System_eqFunction_26(data, threadData);
  System_eqFunction_27(data, threadData);
  System_eqFunction_28(data, threadData);
  System_eqFunction_29(data, threadData);
  System_eqFunction_30(data, threadData);
  System_eqFunction_31(data, threadData);
  System_eqFunction_111(data, threadData);
  System_eqFunction_133(data, threadData);
  System_eqFunction_34(data, threadData);
  System_eqFunction_35(data, threadData);
  System_eqFunction_36(data, threadData);
  System_eqFunction_92(data, threadData);
  System_eqFunction_38(data, threadData);
  System_eqFunction_39(data, threadData);
  System_eqFunction_91(data, threadData);
  System_eqFunction_41(data, threadData);
  System_eqFunction_42(data, threadData);
  System_eqFunction_43(data, threadData);
  System_eqFunction_93(data, threadData);
  System_eqFunction_45(data, threadData);
  System_eqFunction_134(data, threadData);
  System_eqFunction_47(data, threadData);
  System_eqFunction_136(data, threadData);
  System_eqFunction_49(data, threadData);
  System_eqFunction_50(data, threadData);
  System_eqFunction_51(data, threadData);
  System_eqFunction_94(data, threadData);
  System_eqFunction_53(data, threadData);
  System_eqFunction_137(data, threadData);
  System_eqFunction_55(data, threadData);
  System_eqFunction_139(data, threadData);
  System_eqFunction_57(data, threadData);
  System_eqFunction_58(data, threadData);
  System_eqFunction_59(data, threadData);
  System_eqFunction_60(data, threadData);
  System_eqFunction_126(data, threadData);
  System_eqFunction_130(data, threadData);
  System_eqFunction_125(data, threadData);
  System_eqFunction_128(data, threadData);
  System_eqFunction_127(data, threadData);
  System_eqFunction_129(data, threadData);
  System_eqFunction_124(data, threadData);
  System_eqFunction_68(data, threadData);
  System_eqFunction_69(data, threadData);
  System_eqFunction_70(data, threadData);
  System_eqFunction_71(data, threadData);
  System_eqFunction_107(data, threadData);
  System_eqFunction_108(data, threadData);
  System_eqFunction_74(data, threadData);
  System_eqFunction_75(data, threadData);
  System_eqFunction_89(data, threadData);
  System_eqFunction_88(data, threadData);
  System_eqFunction_87(data, threadData);
  System_eqFunction_86(data, threadData);
  System_eqFunction_85(data, threadData);
  System_eqFunction_84(data, threadData);
  System_eqFunction_83(data, threadData);
  TRACE_POP
}

int System_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  System_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/* No System_functionInitialEquations_lambda0 function */

int System_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

