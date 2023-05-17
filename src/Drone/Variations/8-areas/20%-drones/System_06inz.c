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

  d[2].comm_state := $START.d[2].comm_state;
  d[2].fifox := $START.d[2].fifox;
  d[2].writesignal := $START.d[2].writesignal;
  d[2].readsignal := $START.d[2].readsignal;
  d[2].flag := $START.d[2].flag;
  d[2].setz := $START.d[2].setz;
  d[2].sety := $START.d[2].sety;
  d[2].setx := $START.d[2].setx;
  d[2].msg_to_cc[5] := $START.d[2].msg_to_cc[5];
  d[2].msg_to_cc[4] := $START.d[2].msg_to_cc[4];
  d[2].msg_to_cc[3] := $START.d[2].msg_to_cc[3];
  d[2].msg_to_cc[2] := $START.d[2].msg_to_cc[2];
  d[2].msg_to_cc[1] := $START.d[2].msg_to_cc[1];
  $whenCondition16 := $START.$whenCondition16;
  $whenCondition16 := false;
  d[2].msg_to_cc := {0.0, 0.0, 0.0, 0.0, 0.0};
  d[2].setx := myrandom() * d[2].p.flyZone[1];
  d[2].sety := myrandom() * d[2].p.flyZone[2];
  d[2].setz := myrandom() * d[2].p.flyZone[3];
  d[2].flag := 0;
  d[2].readsignal := false;
  d[2].writesignal := false;
  d[2].fifox := 0;
  d[2].comm_state := 10;
*/
void System_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  real_array tmp0;
  real_array tmp1;
  (data->localData[0]->integerVars[23]/* d[2].comm_state DISCRETE */)  = (data->modelData->integerVarsData[23]/* d[2].comm_state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[27]/* d[2].fifox DISCRETE */)  = (data->modelData->integerVarsData[27]/* d[2].fifox DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[75]/* d[2].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[75]/* d[2].writesignal DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[71]/* d[2].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[71]/* d[2].readsignal DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[29]/* d[2].flag DISCRETE */)  = (data->modelData->integerVarsData[29]/* d[2].flag DISCRETE */).attribute .start;

  (data->localData[0]->realVars[260]/* d[2].setz DISCRETE */)  = (data->modelData->realVarsData[260]/* d[2].setz DISCRETE */).attribute .start;

  (data->localData[0]->realVars[258]/* d[2].sety DISCRETE */)  = (data->modelData->realVarsData[258]/* d[2].sety DISCRETE */).attribute .start;

  (data->localData[0]->realVars[256]/* d[2].setx DISCRETE */)  = (data->modelData->realVarsData[256]/* d[2].setx DISCRETE */).attribute .start;

  (data->localData[0]->realVars[254]/* d[2].msg_to_cc[5] DISCRETE */)  = (data->modelData->realVarsData[254]/* d[2].msg_to_cc[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[253]/* d[2].msg_to_cc[4] DISCRETE */)  = (data->modelData->realVarsData[253]/* d[2].msg_to_cc[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[252]/* d[2].msg_to_cc[3] DISCRETE */)  = (data->modelData->realVarsData[252]/* d[2].msg_to_cc[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[251]/* d[2].msg_to_cc[2] DISCRETE */)  = (data->modelData->realVarsData[251]/* d[2].msg_to_cc[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[250]/* d[2].msg_to_cc[1] DISCRETE */)  = (data->modelData->realVarsData[250]/* d[2].msg_to_cc[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[7]/* $whenCondition16 DISCRETE */)  = (data->modelData->booleanVarsData[7]/* $whenCondition16 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[7]/* $whenCondition16 DISCRETE */)  = 0;

  array_alloc_scalar_real_array(&tmp0, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp1, ((modelica_real*)&((&(data->localData[0]->realVars[245]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
  real_array_copy_data(tmp0, tmp1);

  (data->localData[0]->realVars[256]/* d[2].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[735]/* d[2].p.flyZone[1] PARAM */) );

  (data->localData[0]->realVars[258]/* d[2].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[736]/* d[2].p.flyZone[2] PARAM */) );

  (data->localData[0]->realVars[260]/* d[2].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[737]/* d[2].p.flyZone[3] PARAM */) );

  (data->localData[0]->integerVars[29]/* d[2].flag DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->booleanVars[71]/* d[2].readsignal DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[75]/* d[2].writesignal DISCRETE */)  = 0;

  (data->localData[0]->integerVars[27]/* d[2].fifox DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[23]/* d[2].comm_state DISCRETE */)  = ((modelica_integer) 10);
  TRACE_POP
}
extern void System_eqFunction_210(DATA *data, threadData_t *threadData);

extern void System_eqFunction_206(DATA *data, threadData_t *threadData);

extern void System_eqFunction_205(DATA *data, threadData_t *threadData);

extern void System_eqFunction_213(DATA *data, threadData_t *threadData);

extern void System_eqFunction_207(DATA *data, threadData_t *threadData);

extern void System_eqFunction_203(DATA *data, threadData_t *threadData);

extern void System_eqFunction_208(DATA *data, threadData_t *threadData);

extern void System_eqFunction_211(DATA *data, threadData_t *threadData);

extern void System_eqFunction_212(DATA *data, threadData_t *threadData);

extern void System_eqFunction_222(DATA *data, threadData_t *threadData);


/*
equation index: 12
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[2].writesignal = $START.drone_to_cc[2].writesignal
*/
void System_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  (data->simulationInfo->booleanVarsPre[87]/* drone_to_cc[2].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[87]/* drone_to_cc[2].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
drone_to_cc[2].writesigint = not $PRE.drone_to_cc[2].writesignal == drone_to_cc[2].writesignal
*/
void System_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->booleanVars[85]/* drone_to_cc[2].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[87]/* drone_to_cc[2].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[87]/* drone_to_cc[2].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[87]/* drone_to_cc[2].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[87]/* drone_to_cc[2].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[2].readsignal = $START.cc_to_drone[2].readsignal
*/
void System_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  (data->simulationInfo->booleanVarsPre[57]/* cc_to_drone[2].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[57]/* cc_to_drone[2].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
cc_to_drone[2].readsigint = not $PRE.cc_to_drone[2].readsignal == cc_to_drone[2].readsignal
*/
void System_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->booleanVars[55]/* cc_to_drone[2].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[57]/* cc_to_drone[2].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[57]/* cc_to_drone[2].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[57]/* cc_to_drone[2].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[57]/* cc_to_drone[2].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 16
type: ALGORITHM

  cc.endSimulation := $START.cc.endSimulation;
  cc.setpointChanged[2] := $START.cc.setpointChanged[2];
  cc.setpointChanged[1] := $START.cc.setpointChanged[1];
  cc.comm_done[2] := $START.cc.comm_done[2];
  cc.comm_done[1] := $START.cc.comm_done[1];
  cc.state := $START.cc.state;
  cc.fifox[2] := $START.cc.fifox[2];
  cc.fifox[1] := $START.cc.fifox[1];
  cc.pos[2,3] := $START.cc.pos[2,3];
  cc.pos[2,2] := $START.cc.pos[2,2];
  cc.pos[2,1] := $START.cc.pos[2,1];
  cc.pos[1,3] := $START.cc.pos[1,3];
  cc.pos[1,2] := $START.cc.pos[1,2];
  cc.pos[1,1] := $START.cc.pos[1,1];
  cc.msg_to_drone[2,5] := $START.cc.msg_to_drone[2,5];
  cc.msg_to_drone[2,4] := $START.cc.msg_to_drone[2,4];
  cc.msg_to_drone[2,3] := $START.cc.msg_to_drone[2,3];
  cc.msg_to_drone[2,2] := $START.cc.msg_to_drone[2,2];
  cc.msg_to_drone[2,1] := $START.cc.msg_to_drone[2,1];
  cc.msg_to_drone[1,5] := $START.cc.msg_to_drone[1,5];
  cc.msg_to_drone[1,4] := $START.cc.msg_to_drone[1,4];
  cc.msg_to_drone[1,3] := $START.cc.msg_to_drone[1,3];
  cc.msg_to_drone[1,2] := $START.cc.msg_to_drone[1,2];
  cc.msg_to_drone[1,1] := $START.cc.msg_to_drone[1,1];
  cc.writesignal[2] := $START.cc.writesignal[2];
  cc.writesignal[1] := $START.cc.writesignal[1];
  cc.readsignal[2] := $START.cc.readsignal[2];
  cc.readsignal[1] := $START.cc.readsignal[1];
  cc.setpointChangeTime[2] := $START.cc.setpointChangeTime[2];
  cc.setpointChangeTime[1] := $START.cc.setpointChangeTime[1];
  cc.lastAnswered[2] := $START.cc.lastAnswered[2];
  cc.lastAnswered[1] := $START.cc.lastAnswered[1];
  cc.isDead[2] := $START.cc.isDead[2];
  cc.isDead[1] := $START.cc.isDead[1];
  cc.rechargingDrones := $START.cc.rechargingDrones;
  cc.isRecharging[2] := $START.cc.isRecharging[2];
  cc.isRecharging[1] := $START.cc.isRecharging[1];
  cc.battery[2] := $START.cc.battery[2];
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
  cc.isBusy[2] := $START.cc.isBusy[2];
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
  cc.setz[2] := $START.cc.setz[2];
  cc.setz[1] := $START.cc.setz[1];
  cc.sety[2] := $START.cc.sety[2];
  cc.sety[1] := $START.cc.sety[1];
  cc.setx[2] := $START.cc.setx[2];
  cc.setx[1] := $START.cc.setx[1];
  cc.aliveDrones := $START.cc.aliveDrones;
  cc.z := $START.cc.z;
  cc.err := $START.cc.err;
  $whenCondition15 := $START.$whenCondition15;
  $whenCondition15 := false;
  cc.err := 0.0;
  cc.z := 0;
  cc.aliveDrones := 2;
  cc.setx := {cc.p.flyZone[1], cc.p.flyZone[1]};
  cc.sety := {cc.p.flyZone[2], cc.p.flyZone[2]};
  cc.setz := {cc.p.flyZone[3], cc.p.flyZone[3]};
  cc.hasBeenVisited := {false, false, false, false, false, false, false, false};
  cc.lastVisited := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
  cc.isBusy := {false, false};
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
  setup_areas(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 2, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 8, cc.p.areas));
  setup_drones(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 2, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 8, cc.p.areas));
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
  (data->localData[0]->booleanVars[29]/* cc.endSimulation DISCRETE */)  = (data->modelData->booleanVarsData[29]/* cc.endSimulation DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[47]/* cc.setpointChanged[2] DISCRETE */)  = (data->modelData->booleanVarsData[47]/* cc.setpointChanged[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[46]/* cc.setpointChanged[1] DISCRETE */)  = (data->modelData->booleanVarsData[46]/* cc.setpointChanged[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[26]/* cc.comm_done[2] DISCRETE */)  = (data->modelData->booleanVarsData[26]/* cc.comm_done[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[25]/* cc.comm_done[1] DISCRETE */)  = (data->modelData->booleanVarsData[25]/* cc.comm_done[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[12]/* cc.state DISCRETE */)  = (data->modelData->integerVarsData[12]/* cc.state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[2]/* cc.fifox[2] DISCRETE */)  = (data->modelData->integerVarsData[2]/* cc.fifox[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)  = (data->modelData->integerVarsData[1]/* cc.fifox[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[114]/* cc.pos[2,3] DISCRETE */)  = (data->modelData->realVarsData[114]/* cc.pos[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[113]/* cc.pos[2,2] DISCRETE */)  = (data->modelData->realVarsData[113]/* cc.pos[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[112]/* cc.pos[2,1] DISCRETE */)  = (data->modelData->realVarsData[112]/* cc.pos[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[111]/* cc.pos[1,3] DISCRETE */)  = (data->modelData->realVarsData[111]/* cc.pos[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[110]/* cc.pos[1,2] DISCRETE */)  = (data->modelData->realVarsData[110]/* cc.pos[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[109]/* cc.pos[1,1] DISCRETE */)  = (data->modelData->realVarsData[109]/* cc.pos[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[108]/* cc.msg_to_drone[2,5] DISCRETE */)  = (data->modelData->realVarsData[108]/* cc.msg_to_drone[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[107]/* cc.msg_to_drone[2,4] DISCRETE */)  = (data->modelData->realVarsData[107]/* cc.msg_to_drone[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[106]/* cc.msg_to_drone[2,3] DISCRETE */)  = (data->modelData->realVarsData[106]/* cc.msg_to_drone[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[105]/* cc.msg_to_drone[2,2] DISCRETE */)  = (data->modelData->realVarsData[105]/* cc.msg_to_drone[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[104]/* cc.msg_to_drone[2,1] DISCRETE */)  = (data->modelData->realVarsData[104]/* cc.msg_to_drone[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[103]/* cc.msg_to_drone[1,5] DISCRETE */)  = (data->modelData->realVarsData[103]/* cc.msg_to_drone[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[102]/* cc.msg_to_drone[1,4] DISCRETE */)  = (data->modelData->realVarsData[102]/* cc.msg_to_drone[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[101]/* cc.msg_to_drone[1,3] DISCRETE */)  = (data->modelData->realVarsData[101]/* cc.msg_to_drone[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[100]/* cc.msg_to_drone[1,2] DISCRETE */)  = (data->modelData->realVarsData[100]/* cc.msg_to_drone[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[99]/* cc.msg_to_drone[1,1] DISCRETE */)  = (data->modelData->realVarsData[99]/* cc.msg_to_drone[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[51]/* cc.writesignal[2] DISCRETE */)  = (data->modelData->booleanVarsData[51]/* cc.writesignal[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[50]/* cc.writesignal[1] DISCRETE */)  = (data->modelData->booleanVarsData[50]/* cc.writesignal[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[45]/* cc.readsignal[2] DISCRETE */)  = (data->modelData->booleanVarsData[45]/* cc.readsignal[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[44]/* cc.readsignal[1] DISCRETE */)  = (data->modelData->booleanVarsData[44]/* cc.readsignal[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[116]/* cc.setpointChangeTime[2] DISCRETE */)  = (data->modelData->realVarsData[116]/* cc.setpointChangeTime[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[115]/* cc.setpointChangeTime[1] DISCRETE */)  = (data->modelData->realVarsData[115]/* cc.setpointChangeTime[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[88]/* cc.lastAnswered[2] DISCRETE */)  = (data->modelData->realVarsData[88]/* cc.lastAnswered[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[87]/* cc.lastAnswered[1] DISCRETE */)  = (data->modelData->realVarsData[87]/* cc.lastAnswered[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[41]/* cc.isDead[2] DISCRETE */)  = (data->modelData->booleanVarsData[41]/* cc.isDead[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[40]/* cc.isDead[1] DISCRETE */)  = (data->modelData->booleanVarsData[40]/* cc.isDead[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[11]/* cc.rechargingDrones DISCRETE */)  = (data->modelData->integerVarsData[11]/* cc.rechargingDrones DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[43]/* cc.isRecharging[2] DISCRETE */)  = (data->modelData->booleanVarsData[43]/* cc.isRecharging[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[42]/* cc.isRecharging[1] DISCRETE */)  = (data->modelData->booleanVarsData[42]/* cc.isRecharging[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[83]/* cc.battery[2] DISCRETE */)  = (data->modelData->realVarsData[83]/* cc.battery[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[82]/* cc.battery[1] DISCRETE */)  = (data->modelData->realVarsData[82]/* cc.battery[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[126]/* cc.tmp_time DISCRETE */)  = (data->modelData->realVarsData[126]/* cc.tmp_time DISCRETE */).attribute .start;

  (data->localData[0]->realVars[97]/* cc.max_time DISCRETE */)  = (data->modelData->realVarsData[97]/* cc.max_time DISCRETE */).attribute .start;

  (data->localData[0]->realVars[81]/* cc.area_z DISCRETE */)  = (data->modelData->realVarsData[81]/* cc.area_z DISCRETE */).attribute .start;

  (data->localData[0]->realVars[80]/* cc.area_y DISCRETE */)  = (data->modelData->realVarsData[80]/* cc.area_y DISCRETE */).attribute .start;

  (data->localData[0]->realVars[79]/* cc.area_x DISCRETE */)  = (data->modelData->realVarsData[79]/* cc.area_x DISCRETE */).attribute .start;

  (data->localData[0]->realVars[85]/* cc.choice_value_2 DISCRETE */)  = (data->modelData->realVarsData[85]/* cc.choice_value_2 DISCRETE */).attribute .start;

  (data->localData[0]->realVars[84]/* cc.choice_value_1 DISCRETE */)  = (data->modelData->realVarsData[84]/* cc.choice_value_1 DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[14]/* cc.tmp_area_2 DISCRETE */)  = (data->modelData->integerVarsData[14]/* cc.tmp_area_2 DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[13]/* cc.tmp_area_1 DISCRETE */)  = (data->modelData->integerVarsData[13]/* cc.tmp_area_1 DISCRETE */).attribute .start;

  (data->localData[0]->realVars[125]/* cc.tmp_distance DISCRETE */)  = (data->modelData->realVarsData[125]/* cc.tmp_distance DISCRETE */).attribute .start;

  (data->localData[0]->realVars[98]/* cc.min_distance DISCRETE */)  = (data->modelData->realVarsData[98]/* cc.min_distance DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[10]/* cc.hasBeenSelected[8] DISCRETE */)  = (data->modelData->integerVarsData[10]/* cc.hasBeenSelected[8] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[9]/* cc.hasBeenSelected[7] DISCRETE */)  = (data->modelData->integerVarsData[9]/* cc.hasBeenSelected[7] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[8]/* cc.hasBeenSelected[6] DISCRETE */)  = (data->modelData->integerVarsData[8]/* cc.hasBeenSelected[6] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[7]/* cc.hasBeenSelected[5] DISCRETE */)  = (data->modelData->integerVarsData[7]/* cc.hasBeenSelected[5] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[6]/* cc.hasBeenSelected[4] DISCRETE */)  = (data->modelData->integerVarsData[6]/* cc.hasBeenSelected[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[5]/* cc.hasBeenSelected[3] DISCRETE */)  = (data->modelData->integerVarsData[5]/* cc.hasBeenSelected[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[4]/* cc.hasBeenSelected[2] DISCRETE */)  = (data->modelData->integerVarsData[4]/* cc.hasBeenSelected[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[3]/* cc.hasBeenSelected[1] DISCRETE */)  = (data->modelData->integerVarsData[3]/* cc.hasBeenSelected[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[123]/* cc.time_passed_since_last_loop DISCRETE */)  = (data->modelData->realVarsData[123]/* cc.time_passed_since_last_loop DISCRETE */).attribute .start;

  (data->localData[0]->realVars[124]/* cc.time_span DISCRETE */)  = (data->modelData->realVarsData[124]/* cc.time_span DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[39]/* cc.isBusy[2] DISCRETE */)  = (data->modelData->booleanVarsData[39]/* cc.isBusy[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[38]/* cc.isBusy[1] DISCRETE */)  = (data->modelData->booleanVarsData[38]/* cc.isBusy[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[96]/* cc.lastVisited[8] DISCRETE */)  = (data->modelData->realVarsData[96]/* cc.lastVisited[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[95]/* cc.lastVisited[7] DISCRETE */)  = (data->modelData->realVarsData[95]/* cc.lastVisited[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[94]/* cc.lastVisited[6] DISCRETE */)  = (data->modelData->realVarsData[94]/* cc.lastVisited[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[93]/* cc.lastVisited[5] DISCRETE */)  = (data->modelData->realVarsData[93]/* cc.lastVisited[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[92]/* cc.lastVisited[4] DISCRETE */)  = (data->modelData->realVarsData[92]/* cc.lastVisited[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[91]/* cc.lastVisited[3] DISCRETE */)  = (data->modelData->realVarsData[91]/* cc.lastVisited[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[90]/* cc.lastVisited[2] DISCRETE */)  = (data->modelData->realVarsData[90]/* cc.lastVisited[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[89]/* cc.lastVisited[1] DISCRETE */)  = (data->modelData->realVarsData[89]/* cc.lastVisited[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[37]/* cc.hasBeenVisited[8] DISCRETE */)  = (data->modelData->booleanVarsData[37]/* cc.hasBeenVisited[8] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[36]/* cc.hasBeenVisited[7] DISCRETE */)  = (data->modelData->booleanVarsData[36]/* cc.hasBeenVisited[7] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[35]/* cc.hasBeenVisited[6] DISCRETE */)  = (data->modelData->booleanVarsData[35]/* cc.hasBeenVisited[6] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[34]/* cc.hasBeenVisited[5] DISCRETE */)  = (data->modelData->booleanVarsData[34]/* cc.hasBeenVisited[5] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[33]/* cc.hasBeenVisited[4] DISCRETE */)  = (data->modelData->booleanVarsData[33]/* cc.hasBeenVisited[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[32]/* cc.hasBeenVisited[3] DISCRETE */)  = (data->modelData->booleanVarsData[32]/* cc.hasBeenVisited[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[31]/* cc.hasBeenVisited[2] DISCRETE */)  = (data->modelData->booleanVarsData[31]/* cc.hasBeenVisited[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[30]/* cc.hasBeenVisited[1] DISCRETE */)  = (data->modelData->booleanVarsData[30]/* cc.hasBeenVisited[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[122]/* cc.setz[2] DISCRETE */)  = (data->modelData->realVarsData[122]/* cc.setz[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[121]/* cc.setz[1] DISCRETE */)  = (data->modelData->realVarsData[121]/* cc.setz[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[120]/* cc.sety[2] DISCRETE */)  = (data->modelData->realVarsData[120]/* cc.sety[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[119]/* cc.sety[1] DISCRETE */)  = (data->modelData->realVarsData[119]/* cc.sety[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[118]/* cc.setx[2] DISCRETE */)  = (data->modelData->realVarsData[118]/* cc.setx[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[117]/* cc.setx[1] DISCRETE */)  = (data->modelData->realVarsData[117]/* cc.setx[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = (data->modelData->integerVarsData[0]/* cc.aliveDrones DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[15]/* cc.z DISCRETE */)  = (data->modelData->integerVarsData[15]/* cc.z DISCRETE */).attribute .start;

  (data->localData[0]->realVars[86]/* cc.err DISCRETE */)  = (data->modelData->realVarsData[86]/* cc.err DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  = (data->modelData->booleanVarsData[6]/* $whenCondition15 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  = 0;

  (data->localData[0]->realVars[86]/* cc.err DISCRETE */)  = 0.0;

  (data->localData[0]->integerVars[15]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = ((modelica_integer) 2);

  array_alloc_scalar_real_array(&tmp4, 2, (modelica_real)(data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  real_array_create(&tmp5, ((modelica_real*)&((&(data->localData[0]->realVars[117]/* cc.setx[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(tmp4, tmp5);

  array_alloc_scalar_real_array(&tmp6, 2, (modelica_real)(data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  real_array_create(&tmp7, ((modelica_real*)&((&(data->localData[0]->realVars[119]/* cc.sety[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(tmp6, tmp7);

  array_alloc_scalar_real_array(&tmp8, 2, (modelica_real)(data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
  real_array_create(&tmp9, ((modelica_real*)&((&(data->localData[0]->realVars[121]/* cc.setz[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(tmp8, tmp9);

  array_alloc_scalar_boolean_array(&tmp10, 8, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp11, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[30]/* cc.hasBeenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  boolean_array_copy_data(tmp10, tmp11);

  array_alloc_scalar_real_array(&tmp12, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp13, ((modelica_real*)&((&(data->localData[0]->realVars[89]/* cc.lastVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp12, tmp13);

  array_alloc_scalar_boolean_array(&tmp14, 2, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp15, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[38]/* cc.isBusy[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  boolean_array_copy_data(tmp14, tmp15);

  (data->localData[0]->realVars[124]/* cc.time_span DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[123]/* cc.time_passed_since_last_loop DISCRETE */)  = 0.0;

  array_alloc_scalar_integer_array(&tmp16, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp17, ((modelica_integer*)&((&(data->localData[0]->integerVars[3]/* cc.hasBeenSelected[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  integer_array_copy_data(tmp16, tmp17);

  real_array_create(&tmp18, ((modelica_real*)&((&data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
  tmp19 = max_real_array(tmp18);
  (data->localData[0]->realVars[98]/* cc.min_distance DISCRETE */)  = tmp19;

  (data->localData[0]->realVars[125]/* cc.tmp_distance DISCRETE */)  = 0.0;

  (data->localData[0]->integerVars[13]/* cc.tmp_area_1 DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[14]/* cc.tmp_area_2 DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->realVars[84]/* cc.choice_value_1 DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[85]/* cc.choice_value_2 DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[79]/* cc.area_x DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[80]/* cc.area_y DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[81]/* cc.area_z DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[97]/* cc.max_time DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[126]/* cc.tmp_time DISCRETE */)  = 0.0;

  array_alloc_scalar_real_array(&tmp20, 2, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp21, ((modelica_real*)&((&(data->localData[0]->realVars[82]/* cc.battery[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(tmp20, tmp21);

  array_alloc_scalar_boolean_array(&tmp22, 2, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp23, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[42]/* cc.isRecharging[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  boolean_array_copy_data(tmp22, tmp23);

  (data->localData[0]->integerVars[11]/* cc.rechargingDrones DISCRETE */)  = ((modelica_integer) 0);

  array_alloc_scalar_boolean_array(&tmp24, 2, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp25, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[40]/* cc.isDead[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  boolean_array_copy_data(tmp24, tmp25);

  array_alloc_scalar_real_array(&tmp26, 2, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp27, ((modelica_real*)&((&(data->localData[0]->realVars[87]/* cc.lastAnswered[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(tmp26, tmp27);

  array_alloc_scalar_real_array(&tmp28, 2, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp29, ((modelica_real*)&((&(data->localData[0]->realVars[115]/* cc.setpointChangeTime[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(tmp28, tmp29);

  array_alloc_scalar_boolean_array(&tmp30, 2, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp31, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[44]/* cc.readsignal[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  boolean_array_copy_data(tmp30, tmp31);

  array_alloc_scalar_boolean_array(&tmp32, 2, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp33, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[50]/* cc.writesignal[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  boolean_array_copy_data(tmp32, tmp33);

  tmp37 = ((modelica_integer) 1); tmp38 = 1; tmp39 = ((modelica_integer) 2);
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
          (&(data->localData[0]->realVars[99]/* cc.msg_to_drone[1,1] DISCRETE */) )[(i - 1) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  tmp43 = ((modelica_integer) 1); tmp44 = 1; tmp45 = ((modelica_integer) 2);
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
          (&(data->localData[0]->realVars[109]/* cc.pos[1,1] DISCRETE */) )[(i - 1) * 3 + (j-1)] = 0.0;
        }
      }
    }
  }

  array_alloc_scalar_integer_array(&tmp46, 2, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp47, ((modelica_integer*)&((&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  integer_array_copy_data(tmp46, tmp47);

  (data->localData[0]->integerVars[12]/* cc.state DISCRETE */)  = ((modelica_integer) 0);

  array_alloc_scalar_boolean_array(&tmp48, 2, (modelica_boolean)1, (modelica_boolean)1);
  boolean_array_create(&tmp49, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[25]/* cc.comm_done[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  boolean_array_copy_data(tmp48, tmp49);

  array_alloc_scalar_boolean_array(&tmp50, 2, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp51, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[46]/* cc.setpointChanged[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  boolean_array_copy_data(tmp50, tmp51);

  (data->localData[0]->booleanVars[29]/* cc.endSimulation DISCRETE */)  = 0;

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
  tmp52._nDrones = ((modelica_integer) 2);
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
  tmp56._nDrones = ((modelica_integer) 2);
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
  $whenCondition14 := $START.$whenCondition14;
  $whenCondition13 := $START.$whenCondition13;
  $whenCondition13 := false;
  $whenCondition14 := time > m.p.stop_simulation or cc.endSimulation;
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
  (data->localData[0]->realVars[398]/* m.old_avg_drones_all_areas DISCRETE */)  = (data->modelData->realVarsData[398]/* m.old_avg_drones_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[416]/* m.std_dev_all_areas DISCRETE */)  = (data->modelData->realVarsData[416]/* m.std_dev_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[415]/* m.std_dev[8] DISCRETE */)  = (data->modelData->realVarsData[415]/* m.std_dev[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[414]/* m.std_dev[7] DISCRETE */)  = (data->modelData->realVarsData[414]/* m.std_dev[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[413]/* m.std_dev[6] DISCRETE */)  = (data->modelData->realVarsData[413]/* m.std_dev[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[412]/* m.std_dev[5] DISCRETE */)  = (data->modelData->realVarsData[412]/* m.std_dev[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[411]/* m.std_dev[4] DISCRETE */)  = (data->modelData->realVarsData[411]/* m.std_dev[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[410]/* m.std_dev[3] DISCRETE */)  = (data->modelData->realVarsData[410]/* m.std_dev[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[409]/* m.std_dev[2] DISCRETE */)  = (data->modelData->realVarsData[409]/* m.std_dev[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[408]/* m.std_dev[1] DISCRETE */)  = (data->modelData->realVarsData[408]/* m.std_dev[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[389]/* m.max_no_drone_time DISCRETE */)  = (data->modelData->realVarsData[389]/* m.max_no_drone_time DISCRETE */).attribute .start;

  (data->localData[0]->realVars[388]/* m.avg_no_drone_time_all_areas DISCRETE */)  = (data->modelData->realVarsData[388]/* m.avg_no_drone_time_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[387]/* m.avg_no_drone_time[8] DISCRETE */)  = (data->modelData->realVarsData[387]/* m.avg_no_drone_time[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[386]/* m.avg_no_drone_time[7] DISCRETE */)  = (data->modelData->realVarsData[386]/* m.avg_no_drone_time[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[385]/* m.avg_no_drone_time[6] DISCRETE */)  = (data->modelData->realVarsData[385]/* m.avg_no_drone_time[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[384]/* m.avg_no_drone_time[5] DISCRETE */)  = (data->modelData->realVarsData[384]/* m.avg_no_drone_time[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[383]/* m.avg_no_drone_time[4] DISCRETE */)  = (data->modelData->realVarsData[383]/* m.avg_no_drone_time[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[382]/* m.avg_no_drone_time[3] DISCRETE */)  = (data->modelData->realVarsData[382]/* m.avg_no_drone_time[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[381]/* m.avg_no_drone_time[2] DISCRETE */)  = (data->modelData->realVarsData[381]/* m.avg_no_drone_time[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[380]/* m.avg_no_drone_time[1] DISCRETE */)  = (data->modelData->realVarsData[380]/* m.avg_no_drone_time[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[397]/* m.no_drone_time[8] DISCRETE */)  = (data->modelData->realVarsData[397]/* m.no_drone_time[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[396]/* m.no_drone_time[7] DISCRETE */)  = (data->modelData->realVarsData[396]/* m.no_drone_time[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[395]/* m.no_drone_time[6] DISCRETE */)  = (data->modelData->realVarsData[395]/* m.no_drone_time[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[394]/* m.no_drone_time[5] DISCRETE */)  = (data->modelData->realVarsData[394]/* m.no_drone_time[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[393]/* m.no_drone_time[4] DISCRETE */)  = (data->modelData->realVarsData[393]/* m.no_drone_time[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[392]/* m.no_drone_time[3] DISCRETE */)  = (data->modelData->realVarsData[392]/* m.no_drone_time[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[391]/* m.no_drone_time[2] DISCRETE */)  = (data->modelData->realVarsData[391]/* m.no_drone_time[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[390]/* m.no_drone_time[1] DISCRETE */)  = (data->modelData->realVarsData[390]/* m.no_drone_time[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[407]/* m.p_drones_all_areas DISCRETE */)  = (data->modelData->realVarsData[407]/* m.p_drones_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[406]/* m.p_drones[8] DISCRETE */)  = (data->modelData->realVarsData[406]/* m.p_drones[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[405]/* m.p_drones[7] DISCRETE */)  = (data->modelData->realVarsData[405]/* m.p_drones[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[404]/* m.p_drones[6] DISCRETE */)  = (data->modelData->realVarsData[404]/* m.p_drones[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[403]/* m.p_drones[5] DISCRETE */)  = (data->modelData->realVarsData[403]/* m.p_drones[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[402]/* m.p_drones[4] DISCRETE */)  = (data->modelData->realVarsData[402]/* m.p_drones[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[401]/* m.p_drones[3] DISCRETE */)  = (data->modelData->realVarsData[401]/* m.p_drones[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[400]/* m.p_drones[2] DISCRETE */)  = (data->modelData->realVarsData[400]/* m.p_drones[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[399]/* m.p_drones[1] DISCRETE */)  = (data->modelData->realVarsData[399]/* m.p_drones[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[43]/* m.beenVisited[8] DISCRETE */)  = (data->modelData->integerVarsData[43]/* m.beenVisited[8] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[42]/* m.beenVisited[7] DISCRETE */)  = (data->modelData->integerVarsData[42]/* m.beenVisited[7] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[41]/* m.beenVisited[6] DISCRETE */)  = (data->modelData->integerVarsData[41]/* m.beenVisited[6] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[40]/* m.beenVisited[5] DISCRETE */)  = (data->modelData->integerVarsData[40]/* m.beenVisited[5] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[39]/* m.beenVisited[4] DISCRETE */)  = (data->modelData->integerVarsData[39]/* m.beenVisited[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[38]/* m.beenVisited[3] DISCRETE */)  = (data->modelData->integerVarsData[38]/* m.beenVisited[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[37]/* m.beenVisited[2] DISCRETE */)  = (data->modelData->integerVarsData[37]/* m.beenVisited[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[36]/* m.beenVisited[1] DISCRETE */)  = (data->modelData->integerVarsData[36]/* m.beenVisited[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[379]/* m.avg_drones_all_areas DISCRETE */)  = (data->modelData->realVarsData[379]/* m.avg_drones_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[378]/* m.avg_drones[8] DISCRETE */)  = (data->modelData->realVarsData[378]/* m.avg_drones[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[377]/* m.avg_drones[7] DISCRETE */)  = (data->modelData->realVarsData[377]/* m.avg_drones[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[376]/* m.avg_drones[6] DISCRETE */)  = (data->modelData->realVarsData[376]/* m.avg_drones[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[375]/* m.avg_drones[5] DISCRETE */)  = (data->modelData->realVarsData[375]/* m.avg_drones[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[374]/* m.avg_drones[4] DISCRETE */)  = (data->modelData->realVarsData[374]/* m.avg_drones[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[373]/* m.avg_drones[3] DISCRETE */)  = (data->modelData->realVarsData[373]/* m.avg_drones[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[372]/* m.avg_drones[2] DISCRETE */)  = (data->modelData->realVarsData[372]/* m.avg_drones[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[371]/* m.avg_drones[1] DISCRETE */)  = (data->modelData->realVarsData[371]/* m.avg_drones[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[51]/* m.current_drones[8] DISCRETE */)  = (data->modelData->integerVarsData[51]/* m.current_drones[8] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[50]/* m.current_drones[7] DISCRETE */)  = (data->modelData->integerVarsData[50]/* m.current_drones[7] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[49]/* m.current_drones[6] DISCRETE */)  = (data->modelData->integerVarsData[49]/* m.current_drones[6] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[48]/* m.current_drones[5] DISCRETE */)  = (data->modelData->integerVarsData[48]/* m.current_drones[5] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[47]/* m.current_drones[4] DISCRETE */)  = (data->modelData->integerVarsData[47]/* m.current_drones[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[46]/* m.current_drones[3] DISCRETE */)  = (data->modelData->integerVarsData[46]/* m.current_drones[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[45]/* m.current_drones[2] DISCRETE */)  = (data->modelData->integerVarsData[45]/* m.current_drones[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[44]/* m.current_drones[1] DISCRETE */)  = (data->modelData->integerVarsData[44]/* m.current_drones[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[52]/* m.samples DISCRETE */)  = (data->modelData->integerVarsData[52]/* m.samples DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[53]/* m.z DISCRETE */)  = (data->modelData->integerVarsData[53]/* m.z DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (data->modelData->booleanVarsData[5]/* $whenCondition14 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = (data->modelData->booleanVarsData[4]/* $whenCondition13 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = 0;

  tmp60 = Greater(data->localData[0]->timeValue,(data->simulationInfo->realParameter[1014]/* m.p.stop_simulation PARAM */) );
  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (tmp60 || (data->localData[0]->booleanVars[29]/* cc.endSimulation DISCRETE */) );

  (data->localData[0]->integerVars[53]/* m.z DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[52]/* m.samples DISCRETE */)  = ((modelica_integer) 0);

  array_alloc_scalar_integer_array(&tmp61, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp62, ((modelica_integer*)&((&(data->localData[0]->integerVars[44]/* m.current_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  integer_array_copy_data(tmp61, tmp62);

  array_alloc_scalar_real_array(&tmp63, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp64, ((modelica_real*)&((&(data->localData[0]->realVars[371]/* m.avg_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp63, tmp64);

  (data->localData[0]->realVars[379]/* m.avg_drones_all_areas DISCRETE */)  = 0.0;

  array_alloc_scalar_integer_array(&tmp65, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp66, ((modelica_integer*)&((&(data->localData[0]->integerVars[36]/* m.beenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  integer_array_copy_data(tmp65, tmp66);

  array_alloc_scalar_real_array(&tmp67, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp68, ((modelica_real*)&((&(data->localData[0]->realVars[399]/* m.p_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp67, tmp68);

  (data->localData[0]->realVars[407]/* m.p_drones_all_areas DISCRETE */)  = 0.0;

  array_alloc_scalar_real_array(&tmp69, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp70, ((modelica_real*)&((&(data->localData[0]->realVars[390]/* m.no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp69, tmp70);

  array_alloc_scalar_real_array(&tmp71, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp72, ((modelica_real*)&((&(data->localData[0]->realVars[380]/* m.avg_no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp71, tmp72);

  (data->localData[0]->realVars[388]/* m.avg_no_drone_time_all_areas DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[389]/* m.max_no_drone_time DISCRETE */)  = 0.0;

  array_alloc_scalar_real_array(&tmp73, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp74, ((modelica_real*)&((&(data->localData[0]->realVars[408]/* m.std_dev[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp73, tmp74);

  (data->localData[0]->realVars[416]/* m.std_dev_all_areas DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[398]/* m.old_avg_drones_all_areas DISCRETE */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_176(DATA *data, threadData_t *threadData);

extern void System_eqFunction_184(DATA *data, threadData_t *threadData);

extern void System_eqFunction_180(DATA *data, threadData_t *threadData);

extern void System_eqFunction_175(DATA *data, threadData_t *threadData);

extern void System_eqFunction_174(DATA *data, threadData_t *threadData);

extern void System_eqFunction_181(DATA *data, threadData_t *threadData);

extern void System_eqFunction_178(DATA *data, threadData_t *threadData);

extern void System_eqFunction_188(DATA *data, threadData_t *threadData);

extern void System_eqFunction_182(DATA *data, threadData_t *threadData);

extern void System_eqFunction_183(DATA *data, threadData_t *threadData);

extern void System_eqFunction_191(DATA *data, threadData_t *threadData);

extern void System_eqFunction_195(DATA *data, threadData_t *threadData);

extern void System_eqFunction_194(DATA *data, threadData_t *threadData);

extern void System_eqFunction_192(DATA *data, threadData_t *threadData);


/*
equation index: 32
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[2].readsignal = $START.drone_to_cc[2].readsignal
*/
void System_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  (data->simulationInfo->booleanVarsPre[81]/* drone_to_cc[2].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[81]/* drone_to_cc[2].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
drone_to_cc[2].readsigint = not $PRE.drone_to_cc[2].readsignal == drone_to_cc[2].readsignal
*/
void System_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  (data->localData[0]->booleanVars[79]/* drone_to_cc[2].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[81]/* drone_to_cc[2].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[81]/* drone_to_cc[2].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[81]/* drone_to_cc[2].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[81]/* drone_to_cc[2].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].readsignal = $START.drone_to_cc[1].readsignal
*/
void System_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  (data->simulationInfo->booleanVarsPre[80]/* drone_to_cc[1].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[80]/* drone_to_cc[1].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
drone_to_cc[1].readsigint = not $PRE.drone_to_cc[1].readsignal == drone_to_cc[1].readsignal
*/
void System_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  (data->localData[0]->booleanVars[78]/* drone_to_cc[1].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[80]/* drone_to_cc[1].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[80]/* drone_to_cc[1].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[80]/* drone_to_cc[1].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[80]/* drone_to_cc[1].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[2].writesignal = $START.cc_to_drone[2].writesignal
*/
void System_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  (data->simulationInfo->booleanVarsPre[63]/* cc_to_drone[2].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[63]/* cc_to_drone[2].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
cc_to_drone[2].writesigint = not $PRE.cc_to_drone[2].writesignal == cc_to_drone[2].writesignal
*/
void System_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  (data->localData[0]->booleanVars[61]/* cc_to_drone[2].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[63]/* cc_to_drone[2].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[63]/* cc_to_drone[2].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[63]/* cc_to_drone[2].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[63]/* cc_to_drone[2].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].writesignal = $START.cc_to_drone[1].writesignal
*/
void System_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  (data->simulationInfo->booleanVarsPre[62]/* cc_to_drone[1].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[62]/* cc_to_drone[1].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
cc_to_drone[1].writesigint = not $PRE.cc_to_drone[1].writesignal == cc_to_drone[1].writesignal
*/
void System_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  (data->localData[0]->booleanVars[60]/* cc_to_drone[1].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[62]/* cc_to_drone[1].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[62]/* cc_to_drone[1].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[62]/* cc_to_drone[1].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[62]/* cc_to_drone[1].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 40
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
  $whenCondition21 := $START.$whenCondition21;
  $whenCondition21 := false;
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
void System_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  real_array tmp79;
  real_array tmp80;
  (data->localData[0]->integerVars[22]/* d[1].comm_state DISCRETE */)  = (data->modelData->integerVarsData[22]/* d[1].comm_state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[26]/* d[1].fifox DISCRETE */)  = (data->modelData->integerVarsData[26]/* d[1].fifox DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[74]/* d[1].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[74]/* d[1].writesignal DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[70]/* d[1].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[70]/* d[1].readsignal DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[28]/* d[1].flag DISCRETE */)  = (data->modelData->integerVarsData[28]/* d[1].flag DISCRETE */).attribute .start;

  (data->localData[0]->realVars[259]/* d[1].setz DISCRETE */)  = (data->modelData->realVarsData[259]/* d[1].setz DISCRETE */).attribute .start;

  (data->localData[0]->realVars[257]/* d[1].sety DISCRETE */)  = (data->modelData->realVarsData[257]/* d[1].sety DISCRETE */).attribute .start;

  (data->localData[0]->realVars[255]/* d[1].setx DISCRETE */)  = (data->modelData->realVarsData[255]/* d[1].setx DISCRETE */).attribute .start;

  (data->localData[0]->realVars[249]/* d[1].msg_to_cc[5] DISCRETE */)  = (data->modelData->realVarsData[249]/* d[1].msg_to_cc[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[248]/* d[1].msg_to_cc[4] DISCRETE */)  = (data->modelData->realVarsData[248]/* d[1].msg_to_cc[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[247]/* d[1].msg_to_cc[3] DISCRETE */)  = (data->modelData->realVarsData[247]/* d[1].msg_to_cc[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[246]/* d[1].msg_to_cc[2] DISCRETE */)  = (data->modelData->realVarsData[246]/* d[1].msg_to_cc[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[245]/* d[1].msg_to_cc[1] DISCRETE */)  = (data->modelData->realVarsData[245]/* d[1].msg_to_cc[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[13]/* $whenCondition21 DISCRETE */)  = (data->modelData->booleanVarsData[13]/* $whenCondition21 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[13]/* $whenCondition21 DISCRETE */)  = 0;

  array_alloc_scalar_real_array(&tmp79, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp80, ((modelica_real*)&((&(data->localData[0]->realVars[245]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
  real_array_copy_data(tmp79, tmp80);

  (data->localData[0]->realVars[255]/* d[1].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[732]/* d[1].p.flyZone[1] PARAM */) );

  (data->localData[0]->realVars[257]/* d[1].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[733]/* d[1].p.flyZone[2] PARAM */) );

  (data->localData[0]->realVars[259]/* d[1].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[734]/* d[1].p.flyZone[3] PARAM */) );

  (data->localData[0]->integerVars[28]/* d[1].flag DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->booleanVars[70]/* d[1].readsignal DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[74]/* d[1].writesignal DISCRETE */)  = 0;

  (data->localData[0]->integerVars[26]/* d[1].fifox DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[22]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 10);
  TRACE_POP
}
extern void System_eqFunction_233(DATA *data, threadData_t *threadData);

extern void System_eqFunction_238(DATA *data, threadData_t *threadData);

extern void System_eqFunction_232(DATA *data, threadData_t *threadData);

extern void System_eqFunction_229(DATA *data, threadData_t *threadData);

extern void System_eqFunction_237(DATA *data, threadData_t *threadData);

extern void System_eqFunction_227(DATA *data, threadData_t *threadData);

extern void System_eqFunction_235(DATA *data, threadData_t *threadData);

extern void System_eqFunction_234(DATA *data, threadData_t *threadData);

extern void System_eqFunction_231(DATA *data, threadData_t *threadData);

extern void System_eqFunction_230(DATA *data, threadData_t *threadData);


/*
equation index: 51
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].writesignal = $START.drone_to_cc[1].writesignal
*/
void System_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  (data->simulationInfo->booleanVarsPre[86]/* drone_to_cc[1].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[86]/* drone_to_cc[1].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
drone_to_cc[1].writesigint = not $PRE.drone_to_cc[1].writesignal == drone_to_cc[1].writesignal
*/
void System_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  (data->localData[0]->booleanVars[84]/* drone_to_cc[1].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[86]/* drone_to_cc[1].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[86]/* drone_to_cc[1].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[86]/* drone_to_cc[1].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[86]/* drone_to_cc[1].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].readsignal = $START.cc_to_drone[1].readsignal
*/
void System_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  (data->simulationInfo->booleanVarsPre[56]/* cc_to_drone[1].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[56]/* cc_to_drone[1].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
cc_to_drone[1].readsigint = not $PRE.cc_to_drone[1].readsignal == cc_to_drone[1].readsignal
*/
void System_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  (data->localData[0]->booleanVars[54]/* cc_to_drone[1].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[56]/* cc_to_drone[1].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[56]/* cc_to_drone[1].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[56]/* cc_to_drone[1].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[56]/* cc_to_drone[1].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
$PRE.d[2].d.battery = $START.d[2].d.battery
*/
void System_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  (data->simulationInfo->realVarsPre[244]/* d[2].d.battery DISCRETE */)  = (data->modelData->realVarsData[244]/* d[2].d.battery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
$PRE.d[2].d.droneState = $START.d[2].d.droneState
*/
void System_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  (data->simulationInfo->integerVarsPre[25]/* d[2].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[25]/* d[2].d.droneState DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 57
type: ALGORITHM

  d[2].d.droneDead := $START.d[2].d.droneDead;
  d[2].d.droneState := $START.d[2].d.droneState;
  d[2].d.battery := $START.d[2].d.battery;
  $whenCondition20 := $START.$whenCondition20;
  $whenCondition19 := $START.$whenCondition19;
  $whenCondition19 := abs($PRE.d[2].d.battery) < 0.01;
  $whenCondition20 := false;
  d[2].d.battery := d[2].d.p.capacity;
  d[2].d.droneState := 1;
  d[2].d.droneDead := false;
*/
void System_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  modelica_boolean tmp83;
  (data->localData[0]->booleanVars[67]/* d[2].d.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[67]/* d[2].d.droneDead DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[25]/* d[2].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[25]/* d[2].d.droneState DISCRETE */).attribute .start;

  (data->localData[0]->realVars[244]/* d[2].d.battery DISCRETE */)  = (data->modelData->realVarsData[244]/* d[2].d.battery DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[12]/* $whenCondition20 DISCRETE */)  = (data->modelData->booleanVarsData[12]/* $whenCondition20 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[10]/* $whenCondition19 DISCRETE */)  = (data->modelData->booleanVarsData[10]/* $whenCondition19 DISCRETE */).attribute .start;

  tmp83 = Less(fabs((data->simulationInfo->realVarsPre[244]/* d[2].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[10]/* $whenCondition19 DISCRETE */)  = tmp83;

  (data->localData[0]->booleanVars[12]/* $whenCondition20 DISCRETE */)  = 0;

  (data->localData[0]->realVars[244]/* d[2].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[545]/* d[2].d.p.capacity PARAM */) ;

  (data->localData[0]->integerVars[25]/* d[2].d.droneState DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->booleanVars[67]/* d[2].d.droneDead DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_201(DATA *data, threadData_t *threadData);

extern void System_eqFunction_223(DATA *data, threadData_t *threadData);


/*
equation index: 60
type: SIMPLE_ASSIGN
d[2].ctrl.destZ = 0.0
*/
void System_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  (data->localData[0]->realVars[242]/* d[2].ctrl.destZ DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
$PRE.d[2].ctrl.destZ = d[2].ctrl.destZ
*/
void System_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  (data->simulationInfo->realVarsPre[242]/* d[2].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[242]/* d[2].ctrl.destZ DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
d[2].d.Vz = 0.0
*/
void System_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  (data->localData[0]->realVars[5]/* d[2].d.Vz STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_165(DATA *data, threadData_t *threadData);


/*
equation index: 64
type: SIMPLE_ASSIGN
d[2].d.z = d[2].d.p.docking_bay[3] + d[2].d.p.dDistance * (*Real*)(d[2].d.drone_id)
*/
void System_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  (data->localData[0]->realVars[11]/* d[2].d.z STATE(1,d[2].d.Vz) */)  = (data->simulationInfo->realParameter[565]/* d[2].d.p.docking_bay[3] PARAM */)  + ((data->simulationInfo->realParameter[553]/* d[2].d.p.dDistance PARAM */) ) * (((modelica_real)(data->simulationInfo->integerParameter[21]/* d[2].d.drone_id PARAM */) ));
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
d[2].ctrl.Trustz = d[2].ctrl.prm.m * (9.81 + d[2].ctrl.kz1 * (d[2].d.z - $PRE.d[2].ctrl.destZ) + d[2].ctrl.kz2 * d[2].d.Vz)
*/
void System_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  (data->localData[0]->realVars[56]/* d[2].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[409]/* d[2].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[265]/* d[2].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[11]/* d[2].d.z STATE(1,d[2].d.Vz) */)  - (data->simulationInfo->realVarsPre[242]/* d[2].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[267]/* d[2].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[5]/* d[2].d.Vz STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_164(DATA *data, threadData_t *threadData);


/*
equation index: 67
type: SIMPLE_ASSIGN
d[2].ctrl.destY = 0.0
*/
void System_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  (data->localData[0]->realVars[240]/* d[2].ctrl.destY DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
$PRE.d[2].ctrl.destY = d[2].ctrl.destY
*/
void System_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  (data->simulationInfo->realVarsPre[240]/* d[2].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[240]/* d[2].ctrl.destY DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
d[2].d.Vy = 0.0
*/
void System_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  (data->localData[0]->realVars[3]/* d[2].d.Vy STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_166(DATA *data, threadData_t *threadData);


/*
equation index: 71
type: SIMPLE_ASSIGN
d[2].d.y = d[2].d.p.docking_bay[2]
*/
void System_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  (data->localData[0]->realVars[9]/* d[2].d.y STATE(1,d[2].d.Vy) */)  = (data->simulationInfo->realParameter[564]/* d[2].d.p.docking_bay[2] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_249(DATA *data, threadData_t *threadData);


/*
equation index: 73
type: SIMPLE_ASSIGN
d[2].ctrl.Trusty = d[2].ctrl.prm.m * (d[2].ctrl.ky1 * (d[2].ctrl.y - $PRE.d[2].ctrl.destY) + d[2].ctrl.ky2 * d[2].d.Vy)
*/
void System_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  (data->localData[0]->realVars[54]/* d[2].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[409]/* d[2].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[261]/* d[2].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[66]/* d[2].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[240]/* d[2].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[263]/* d[2].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[3]/* d[2].d.Vy STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_251(DATA *data, threadData_t *threadData);


/*
equation index: 75
type: SIMPLE_ASSIGN
d[2].ctrl.destX = 0.0
*/
void System_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  (data->localData[0]->realVars[238]/* d[2].ctrl.destX DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
$PRE.d[2].ctrl.destX = d[2].ctrl.destX
*/
void System_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  (data->simulationInfo->realVarsPre[238]/* d[2].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[238]/* d[2].ctrl.destX DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
d[2].d.Vx = 0.0
*/
void System_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  (data->localData[0]->realVars[1]/* d[2].d.Vx STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_167(DATA *data, threadData_t *threadData);


/*
equation index: 79
type: SIMPLE_ASSIGN
d[2].d.x = d[2].d.p.docking_bay[1]
*/
void System_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  (data->localData[0]->realVars[7]/* d[2].d.x STATE(1,d[2].d.Vx) */)  = (data->simulationInfo->realParameter[563]/* d[2].d.p.docking_bay[1] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_252(DATA *data, threadData_t *threadData);


/*
equation index: 81
type: SIMPLE_ASSIGN
d[2].ctrl.Trustx = d[2].ctrl.prm.m * (d[2].ctrl.kx1 * (d[2].ctrl.x - $PRE.d[2].ctrl.destX) + d[2].ctrl.kx2 * d[2].d.Vx)
*/
void System_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  (data->localData[0]->realVars[52]/* d[2].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[409]/* d[2].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[257]/* d[2].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[64]/* d[2].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[238]/* d[2].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[259]/* d[2].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[1]/* d[2].d.Vx STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_254(DATA *data, threadData_t *threadData);


/*
equation index: 83
type: SIMPLE_ASSIGN
$PRE.d[1].d.battery = $START.d[1].d.battery
*/
void System_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  (data->simulationInfo->realVarsPre[243]/* d[1].d.battery DISCRETE */)  = (data->modelData->realVarsData[243]/* d[1].d.battery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
$PRE.d[1].d.droneState = $START.d[1].d.droneState
*/
void System_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  (data->simulationInfo->integerVarsPre[24]/* d[1].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[24]/* d[1].d.droneState DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 85
type: ALGORITHM

  d[1].d.droneDead := $START.d[1].d.droneDead;
  d[1].d.droneState := $START.d[1].d.droneState;
  d[1].d.battery := $START.d[1].d.battery;
  $whenCondition25 := $START.$whenCondition25;
  $whenCondition24 := $START.$whenCondition24;
  $whenCondition24 := abs($PRE.d[1].d.battery) < 0.01;
  $whenCondition25 := false;
  d[1].d.battery := d[1].d.p.capacity;
  d[1].d.droneState := 1;
  d[1].d.droneDead := false;
*/
void System_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  modelica_boolean tmp84;
  (data->localData[0]->booleanVars[66]/* d[1].d.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[66]/* d[1].d.droneDead DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[24]/* d[1].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[24]/* d[1].d.droneState DISCRETE */).attribute .start;

  (data->localData[0]->realVars[243]/* d[1].d.battery DISCRETE */)  = (data->modelData->realVarsData[243]/* d[1].d.battery DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[17]/* $whenCondition25 DISCRETE */)  = (data->modelData->booleanVarsData[17]/* $whenCondition25 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[16]/* $whenCondition24 DISCRETE */)  = (data->modelData->booleanVarsData[16]/* $whenCondition24 DISCRETE */).attribute .start;

  tmp84 = Less(fabs((data->simulationInfo->realVarsPre[243]/* d[1].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[16]/* $whenCondition24 DISCRETE */)  = tmp84;

  (data->localData[0]->booleanVars[17]/* $whenCondition25 DISCRETE */)  = 0;

  (data->localData[0]->realVars[243]/* d[1].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[544]/* d[1].d.p.capacity PARAM */) ;

  (data->localData[0]->integerVars[24]/* d[1].d.droneState DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->booleanVars[66]/* d[1].d.droneDead DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_248(DATA *data, threadData_t *threadData);

extern void System_eqFunction_247(DATA *data, threadData_t *threadData);


/*
equation index: 88
type: SIMPLE_ASSIGN
d[1].ctrl.destZ = 0.0
*/
void System_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  (data->localData[0]->realVars[241]/* d[1].ctrl.destZ DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.destZ = d[1].ctrl.destZ
*/
void System_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  (data->simulationInfo->realVarsPre[241]/* d[1].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[241]/* d[1].ctrl.destZ DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
d[1].d.Vz = 0.0
*/
void System_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  (data->localData[0]->realVars[4]/* d[1].d.Vz STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_170(DATA *data, threadData_t *threadData);


/*
equation index: 92
type: SIMPLE_ASSIGN
d[1].d.z = d[1].d.p.docking_bay[3] + d[1].d.p.dDistance * (*Real*)(d[1].d.drone_id)
*/
void System_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  (data->localData[0]->realVars[10]/* d[1].d.z STATE(1,d[1].d.Vz) */)  = (data->simulationInfo->realParameter[562]/* d[1].d.p.docking_bay[3] PARAM */)  + ((data->simulationInfo->realParameter[552]/* d[1].d.p.dDistance PARAM */) ) * (((modelica_real)(data->simulationInfo->integerParameter[20]/* d[1].d.drone_id PARAM */) ));
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
d[1].ctrl.Trustz = d[1].ctrl.prm.m * (9.81 + d[1].ctrl.kz1 * (d[1].d.z - $PRE.d[1].ctrl.destZ) + d[1].ctrl.kz2 * d[1].d.Vz)
*/
void System_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  (data->localData[0]->realVars[55]/* d[1].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[408]/* d[1].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[264]/* d[1].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[10]/* d[1].d.z STATE(1,d[1].d.Vz) */)  - (data->simulationInfo->realVarsPre[241]/* d[1].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[266]/* d[1].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[4]/* d[1].d.Vz STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_169(DATA *data, threadData_t *threadData);


/*
equation index: 95
type: SIMPLE_ASSIGN
d[1].ctrl.destY = 0.0
*/
void System_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  (data->localData[0]->realVars[239]/* d[1].ctrl.destY DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 96
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.destY = d[1].ctrl.destY
*/
void System_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  (data->simulationInfo->realVarsPre[239]/* d[1].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[239]/* d[1].ctrl.destY DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 97
type: SIMPLE_ASSIGN
d[1].d.Vy = 0.0
*/
void System_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  (data->localData[0]->realVars[2]/* d[1].d.Vy STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_171(DATA *data, threadData_t *threadData);


/*
equation index: 99
type: SIMPLE_ASSIGN
d[1].d.y = d[1].d.p.docking_bay[2]
*/
void System_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  (data->localData[0]->realVars[8]/* d[1].d.y STATE(1,d[1].d.Vy) */)  = (data->simulationInfo->realParameter[561]/* d[1].d.p.docking_bay[2] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_255(DATA *data, threadData_t *threadData);


/*
equation index: 101
type: SIMPLE_ASSIGN
d[1].ctrl.Trusty = d[1].ctrl.prm.m * (d[1].ctrl.ky1 * (d[1].ctrl.y - $PRE.d[1].ctrl.destY) + d[1].ctrl.ky2 * d[1].d.Vy)
*/
void System_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  (data->localData[0]->realVars[53]/* d[1].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[408]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[260]/* d[1].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[65]/* d[1].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[239]/* d[1].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[262]/* d[1].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[2]/* d[1].d.Vy STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_257(DATA *data, threadData_t *threadData);


/*
equation index: 103
type: SIMPLE_ASSIGN
d[1].ctrl.destX = 0.0
*/
void System_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  (data->localData[0]->realVars[237]/* d[1].ctrl.destX DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.destX = d[1].ctrl.destX
*/
void System_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  (data->simulationInfo->realVarsPre[237]/* d[1].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[237]/* d[1].ctrl.destX DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
d[1].d.Vx = 0.0
*/
void System_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  (data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_172(DATA *data, threadData_t *threadData);


/*
equation index: 107
type: SIMPLE_ASSIGN
d[1].d.x = d[1].d.p.docking_bay[1]
*/
void System_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  (data->localData[0]->realVars[6]/* d[1].d.x STATE(1,d[1].d.Vx) */)  = (data->simulationInfo->realParameter[560]/* d[1].d.p.docking_bay[1] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_258(DATA *data, threadData_t *threadData);


/*
equation index: 109
type: SIMPLE_ASSIGN
d[1].ctrl.Trustx = d[1].ctrl.prm.m * (d[1].ctrl.kx1 * (d[1].ctrl.x - $PRE.d[1].ctrl.destX) + d[1].ctrl.kx2 * d[1].d.Vx)
*/
void System_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  (data->localData[0]->realVars[51]/* d[1].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[408]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[256]/* d[1].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[63]/* d[1].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[237]/* d[1].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[258]/* d[1].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_260(DATA *data, threadData_t *threadData);


/*
equation index: 111
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[2].writesigint = $START.drone_to_cc[2].writesigint
*/
void System_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  (data->simulationInfo->booleanVarsPre[85]/* drone_to_cc[2].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[85]/* drone_to_cc[2].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 112
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[2].readsigint = $START.drone_to_cc[2].readsigint
*/
void System_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  (data->simulationInfo->booleanVarsPre[79]/* drone_to_cc[2].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[79]/* drone_to_cc[2].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[2].fifosize = $START.drone_to_cc[2].fifosize
*/
void System_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  (data->simulationInfo->integerVarsPre[31]/* drone_to_cc[2].fifosize DISCRETE */)  = (data->modelData->integerVarsData[31]/* drone_to_cc[2].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 114
type: ALGORITHM

  drone_to_cc[2].newest := $START.drone_to_cc[2].newest;
  drone_to_cc[2].oldest := $START.drone_to_cc[2].oldest;
  drone_to_cc[2].fifosize := $START.drone_to_cc[2].fifosize;
  drone_to_cc[2].fifo[10,5] := $START.drone_to_cc[2].fifo[10,5];
  drone_to_cc[2].fifo[10,4] := $START.drone_to_cc[2].fifo[10,4];
  drone_to_cc[2].fifo[10,3] := $START.drone_to_cc[2].fifo[10,3];
  drone_to_cc[2].fifo[10,2] := $START.drone_to_cc[2].fifo[10,2];
  drone_to_cc[2].fifo[10,1] := $START.drone_to_cc[2].fifo[10,1];
  drone_to_cc[2].fifo[9,5] := $START.drone_to_cc[2].fifo[9,5];
  drone_to_cc[2].fifo[9,4] := $START.drone_to_cc[2].fifo[9,4];
  drone_to_cc[2].fifo[9,3] := $START.drone_to_cc[2].fifo[9,3];
  drone_to_cc[2].fifo[9,2] := $START.drone_to_cc[2].fifo[9,2];
  drone_to_cc[2].fifo[9,1] := $START.drone_to_cc[2].fifo[9,1];
  drone_to_cc[2].fifo[8,5] := $START.drone_to_cc[2].fifo[8,5];
  drone_to_cc[2].fifo[8,4] := $START.drone_to_cc[2].fifo[8,4];
  drone_to_cc[2].fifo[8,3] := $START.drone_to_cc[2].fifo[8,3];
  drone_to_cc[2].fifo[8,2] := $START.drone_to_cc[2].fifo[8,2];
  drone_to_cc[2].fifo[8,1] := $START.drone_to_cc[2].fifo[8,1];
  drone_to_cc[2].fifo[7,5] := $START.drone_to_cc[2].fifo[7,5];
  drone_to_cc[2].fifo[7,4] := $START.drone_to_cc[2].fifo[7,4];
  drone_to_cc[2].fifo[7,3] := $START.drone_to_cc[2].fifo[7,3];
  drone_to_cc[2].fifo[7,2] := $START.drone_to_cc[2].fifo[7,2];
  drone_to_cc[2].fifo[7,1] := $START.drone_to_cc[2].fifo[7,1];
  drone_to_cc[2].fifo[6,5] := $START.drone_to_cc[2].fifo[6,5];
  drone_to_cc[2].fifo[6,4] := $START.drone_to_cc[2].fifo[6,4];
  drone_to_cc[2].fifo[6,3] := $START.drone_to_cc[2].fifo[6,3];
  drone_to_cc[2].fifo[6,2] := $START.drone_to_cc[2].fifo[6,2];
  drone_to_cc[2].fifo[6,1] := $START.drone_to_cc[2].fifo[6,1];
  drone_to_cc[2].fifo[5,5] := $START.drone_to_cc[2].fifo[5,5];
  drone_to_cc[2].fifo[5,4] := $START.drone_to_cc[2].fifo[5,4];
  drone_to_cc[2].fifo[5,3] := $START.drone_to_cc[2].fifo[5,3];
  drone_to_cc[2].fifo[5,2] := $START.drone_to_cc[2].fifo[5,2];
  drone_to_cc[2].fifo[5,1] := $START.drone_to_cc[2].fifo[5,1];
  drone_to_cc[2].fifo[4,5] := $START.drone_to_cc[2].fifo[4,5];
  drone_to_cc[2].fifo[4,4] := $START.drone_to_cc[2].fifo[4,4];
  drone_to_cc[2].fifo[4,3] := $START.drone_to_cc[2].fifo[4,3];
  drone_to_cc[2].fifo[4,2] := $START.drone_to_cc[2].fifo[4,2];
  drone_to_cc[2].fifo[4,1] := $START.drone_to_cc[2].fifo[4,1];
  drone_to_cc[2].fifo[3,5] := $START.drone_to_cc[2].fifo[3,5];
  drone_to_cc[2].fifo[3,4] := $START.drone_to_cc[2].fifo[3,4];
  drone_to_cc[2].fifo[3,3] := $START.drone_to_cc[2].fifo[3,3];
  drone_to_cc[2].fifo[3,2] := $START.drone_to_cc[2].fifo[3,2];
  drone_to_cc[2].fifo[3,1] := $START.drone_to_cc[2].fifo[3,1];
  drone_to_cc[2].fifo[2,5] := $START.drone_to_cc[2].fifo[2,5];
  drone_to_cc[2].fifo[2,4] := $START.drone_to_cc[2].fifo[2,4];
  drone_to_cc[2].fifo[2,3] := $START.drone_to_cc[2].fifo[2,3];
  drone_to_cc[2].fifo[2,2] := $START.drone_to_cc[2].fifo[2,2];
  drone_to_cc[2].fifo[2,1] := $START.drone_to_cc[2].fifo[2,1];
  drone_to_cc[2].fifo[1,5] := $START.drone_to_cc[2].fifo[1,5];
  drone_to_cc[2].fifo[1,4] := $START.drone_to_cc[2].fifo[1,4];
  drone_to_cc[2].fifo[1,3] := $START.drone_to_cc[2].fifo[1,3];
  drone_to_cc[2].fifo[1,2] := $START.drone_to_cc[2].fifo[1,2];
  drone_to_cc[2].fifo[1,1] := $START.drone_to_cc[2].fifo[1,1];
  drone_to_cc[2].spaceavailable := $START.drone_to_cc[2].spaceavailable;
  drone_to_cc[2].outputdata[5] := $START.drone_to_cc[2].outputdata[5];
  drone_to_cc[2].outputdata[4] := $START.drone_to_cc[2].outputdata[4];
  drone_to_cc[2].outputdata[3] := $START.drone_to_cc[2].outputdata[3];
  drone_to_cc[2].outputdata[2] := $START.drone_to_cc[2].outputdata[2];
  drone_to_cc[2].outputdata[1] := $START.drone_to_cc[2].outputdata[1];
  drone_to_cc[2].datavailable := $START.drone_to_cc[2].datavailable;
  $whenCondition3 := $START.$whenCondition3;
  $whenCondition2 := $START.$whenCondition2;
  $whenCondition1 := $START.$whenCondition1;
  $whenCondition1 := $PRE.drone_to_cc[2].readsigint and $PRE.drone_to_cc[2].writesigint;
  $whenCondition2 := $PRE.drone_to_cc[2].readsigint and not $PRE.drone_to_cc[2].writesigint and $PRE.drone_to_cc[2].fifosize >= 1;
  $whenCondition3 := not $PRE.drone_to_cc[2].readsigint and $PRE.drone_to_cc[2].writesigint and $PRE.drone_to_cc[2].fifosize < 10;
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
*/
void System_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  modelica_integer tmp87;
  modelica_integer tmp88;
  modelica_integer tmp89;
  modelica_integer tmp90;
  modelica_integer tmp91;
  modelica_integer tmp92;
  modelica_integer tmp93;
  modelica_integer tmp94;
  modelica_integer tmp95;
  (data->localData[0]->integerVars[33]/* drone_to_cc[2].newest DISCRETE */)  = (data->modelData->integerVarsData[33]/* drone_to_cc[2].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[35]/* drone_to_cc[2].oldest DISCRETE */)  = (data->modelData->integerVarsData[35]/* drone_to_cc[2].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[31]/* drone_to_cc[2].fifosize DISCRETE */)  = (data->modelData->integerVarsData[31]/* drone_to_cc[2].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[360]/* drone_to_cc[2].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[360]/* drone_to_cc[2].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[359]/* drone_to_cc[2].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[359]/* drone_to_cc[2].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[358]/* drone_to_cc[2].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[358]/* drone_to_cc[2].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[357]/* drone_to_cc[2].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[357]/* drone_to_cc[2].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[356]/* drone_to_cc[2].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[356]/* drone_to_cc[2].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[355]/* drone_to_cc[2].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[355]/* drone_to_cc[2].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[354]/* drone_to_cc[2].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[354]/* drone_to_cc[2].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[353]/* drone_to_cc[2].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[353]/* drone_to_cc[2].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[352]/* drone_to_cc[2].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[352]/* drone_to_cc[2].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[351]/* drone_to_cc[2].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[351]/* drone_to_cc[2].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[350]/* drone_to_cc[2].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[350]/* drone_to_cc[2].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[349]/* drone_to_cc[2].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[349]/* drone_to_cc[2].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[348]/* drone_to_cc[2].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[348]/* drone_to_cc[2].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[347]/* drone_to_cc[2].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[347]/* drone_to_cc[2].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[346]/* drone_to_cc[2].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[346]/* drone_to_cc[2].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[345]/* drone_to_cc[2].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[345]/* drone_to_cc[2].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[344]/* drone_to_cc[2].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[344]/* drone_to_cc[2].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[343]/* drone_to_cc[2].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[343]/* drone_to_cc[2].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[342]/* drone_to_cc[2].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[342]/* drone_to_cc[2].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[341]/* drone_to_cc[2].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[341]/* drone_to_cc[2].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[340]/* drone_to_cc[2].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[340]/* drone_to_cc[2].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[339]/* drone_to_cc[2].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[339]/* drone_to_cc[2].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[338]/* drone_to_cc[2].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[338]/* drone_to_cc[2].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[337]/* drone_to_cc[2].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[337]/* drone_to_cc[2].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[336]/* drone_to_cc[2].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[336]/* drone_to_cc[2].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[335]/* drone_to_cc[2].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[335]/* drone_to_cc[2].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[334]/* drone_to_cc[2].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[334]/* drone_to_cc[2].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[333]/* drone_to_cc[2].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[333]/* drone_to_cc[2].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[332]/* drone_to_cc[2].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[332]/* drone_to_cc[2].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[331]/* drone_to_cc[2].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[331]/* drone_to_cc[2].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[330]/* drone_to_cc[2].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[330]/* drone_to_cc[2].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[329]/* drone_to_cc[2].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[329]/* drone_to_cc[2].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[328]/* drone_to_cc[2].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[328]/* drone_to_cc[2].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[327]/* drone_to_cc[2].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[327]/* drone_to_cc[2].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[326]/* drone_to_cc[2].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[326]/* drone_to_cc[2].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[325]/* drone_to_cc[2].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[325]/* drone_to_cc[2].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[324]/* drone_to_cc[2].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[324]/* drone_to_cc[2].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[323]/* drone_to_cc[2].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[323]/* drone_to_cc[2].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[322]/* drone_to_cc[2].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[322]/* drone_to_cc[2].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[321]/* drone_to_cc[2].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[321]/* drone_to_cc[2].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[320]/* drone_to_cc[2].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[320]/* drone_to_cc[2].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[319]/* drone_to_cc[2].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[319]/* drone_to_cc[2].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[318]/* drone_to_cc[2].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[318]/* drone_to_cc[2].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[317]/* drone_to_cc[2].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[317]/* drone_to_cc[2].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[316]/* drone_to_cc[2].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[316]/* drone_to_cc[2].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[315]/* drone_to_cc[2].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[315]/* drone_to_cc[2].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[314]/* drone_to_cc[2].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[314]/* drone_to_cc[2].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[313]/* drone_to_cc[2].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[313]/* drone_to_cc[2].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[312]/* drone_to_cc[2].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[312]/* drone_to_cc[2].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[311]/* drone_to_cc[2].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[311]/* drone_to_cc[2].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[83]/* drone_to_cc[2].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[83]/* drone_to_cc[2].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[370]/* drone_to_cc[2].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[370]/* drone_to_cc[2].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[369]/* drone_to_cc[2].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[369]/* drone_to_cc[2].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[368]/* drone_to_cc[2].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[368]/* drone_to_cc[2].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[367]/* drone_to_cc[2].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[367]/* drone_to_cc[2].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[366]/* drone_to_cc[2].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[366]/* drone_to_cc[2].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[77]/* drone_to_cc[2].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[77]/* drone_to_cc[2].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[18]/* $whenCondition3 DISCRETE */)  = (data->modelData->booleanVarsData[18]/* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[11]/* $whenCondition2 DISCRETE */)  = (data->modelData->booleanVarsData[11]/* $whenCondition2 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = (data->modelData->booleanVarsData[0]/* $whenCondition1 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[79]/* drone_to_cc[2].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[85]/* drone_to_cc[2].writesigint DISCRETE */) );

  tmp85 = GreaterEq((data->simulationInfo->integerVarsPre[31]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[11]/* $whenCondition2 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[79]/* drone_to_cc[2].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[85]/* drone_to_cc[2].writesigint DISCRETE */) )) && tmp85);

  tmp86 = Less((data->simulationInfo->integerVarsPre[31]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[18]/* $whenCondition3 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[79]/* drone_to_cc[2].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[85]/* drone_to_cc[2].writesigint DISCRETE */) ) && tmp86);

  (data->localData[0]->booleanVars[77]/* drone_to_cc[2].datavailable DISCRETE */)  = 0;

  tmp87 = ((modelica_integer) 1); tmp88 = 1; tmp89 = ((modelica_integer) 5);
  if(!(((tmp88 > 0) && (tmp87 > tmp89)) || ((tmp88 < 0) && (tmp87 < tmp89))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp87, tmp89); j += tmp88)
    {
      (&(data->localData[0]->realVars[361]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[83]/* drone_to_cc[2].spaceavailable DISCRETE */)  = 1;

  tmp93 = ((modelica_integer) 1); tmp94 = 1; tmp95 = ((modelica_integer) 10);
  if(!(((tmp94 > 0) && (tmp93 > tmp95)) || ((tmp94 < 0) && (tmp93 < tmp95))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp93, tmp95); i += tmp94)
    {
      tmp90 = ((modelica_integer) 1); tmp91 = 1; tmp92 = ((modelica_integer) 5);
      if(!(((tmp91 > 0) && (tmp90 > tmp92)) || ((tmp91 < 0) && (tmp90 < tmp92))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp90, tmp92); j += tmp91)
        {
          (&(data->localData[0]->realVars[261]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[31]/* drone_to_cc[2].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[35]/* drone_to_cc[2].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[33]/* drone_to_cc[2].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_218(DATA *data, threadData_t *threadData);

extern void System_eqFunction_216(DATA *data, threadData_t *threadData);

extern void System_eqFunction_220(DATA *data, threadData_t *threadData);

extern void System_eqFunction_215(DATA *data, threadData_t *threadData);

extern void System_eqFunction_219(DATA *data, threadData_t *threadData);

extern void System_eqFunction_221(DATA *data, threadData_t *threadData);

extern void System_eqFunction_217(DATA *data, threadData_t *threadData);


/*
equation index: 122
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].writesigint = $START.drone_to_cc[1].writesigint
*/
void System_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  (data->simulationInfo->booleanVarsPre[84]/* drone_to_cc[1].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[84]/* drone_to_cc[1].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].readsigint = $START.drone_to_cc[1].readsigint
*/
void System_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  (data->simulationInfo->booleanVarsPre[78]/* drone_to_cc[1].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[78]/* drone_to_cc[1].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].fifosize = $START.drone_to_cc[1].fifosize
*/
void System_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  (data->simulationInfo->integerVarsPre[30]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->modelData->integerVarsData[30]/* drone_to_cc[1].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 125
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
  $whenCondition6 := $START.$whenCondition6;
  $whenCondition5 := $START.$whenCondition5;
  $whenCondition4 := $START.$whenCondition4;
  $whenCondition4 := $PRE.drone_to_cc[1].readsigint and $PRE.drone_to_cc[1].writesigint;
  $whenCondition5 := $PRE.drone_to_cc[1].readsigint and not $PRE.drone_to_cc[1].writesigint and $PRE.drone_to_cc[1].fifosize >= 1;
  $whenCondition6 := not $PRE.drone_to_cc[1].readsigint and $PRE.drone_to_cc[1].writesigint and $PRE.drone_to_cc[1].fifosize < 10;
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
void System_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  modelica_integer tmp98;
  modelica_integer tmp99;
  modelica_integer tmp100;
  modelica_integer tmp101;
  modelica_integer tmp102;
  modelica_integer tmp103;
  modelica_integer tmp104;
  modelica_integer tmp105;
  modelica_integer tmp106;
  (data->localData[0]->integerVars[32]/* drone_to_cc[1].newest DISCRETE */)  = (data->modelData->integerVarsData[32]/* drone_to_cc[1].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[34]/* drone_to_cc[1].oldest DISCRETE */)  = (data->modelData->integerVarsData[34]/* drone_to_cc[1].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[30]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->modelData->integerVarsData[30]/* drone_to_cc[1].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[310]/* drone_to_cc[1].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[310]/* drone_to_cc[1].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[309]/* drone_to_cc[1].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[309]/* drone_to_cc[1].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[308]/* drone_to_cc[1].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[308]/* drone_to_cc[1].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[307]/* drone_to_cc[1].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[307]/* drone_to_cc[1].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[306]/* drone_to_cc[1].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[306]/* drone_to_cc[1].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[305]/* drone_to_cc[1].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[305]/* drone_to_cc[1].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[304]/* drone_to_cc[1].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[304]/* drone_to_cc[1].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[303]/* drone_to_cc[1].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[303]/* drone_to_cc[1].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[302]/* drone_to_cc[1].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[302]/* drone_to_cc[1].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[301]/* drone_to_cc[1].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[301]/* drone_to_cc[1].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[300]/* drone_to_cc[1].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[300]/* drone_to_cc[1].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[299]/* drone_to_cc[1].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[299]/* drone_to_cc[1].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[298]/* drone_to_cc[1].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[298]/* drone_to_cc[1].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[297]/* drone_to_cc[1].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[297]/* drone_to_cc[1].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[296]/* drone_to_cc[1].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[296]/* drone_to_cc[1].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[295]/* drone_to_cc[1].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[295]/* drone_to_cc[1].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[294]/* drone_to_cc[1].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[294]/* drone_to_cc[1].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[293]/* drone_to_cc[1].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[293]/* drone_to_cc[1].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[292]/* drone_to_cc[1].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[292]/* drone_to_cc[1].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[291]/* drone_to_cc[1].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[291]/* drone_to_cc[1].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[290]/* drone_to_cc[1].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[290]/* drone_to_cc[1].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[289]/* drone_to_cc[1].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[289]/* drone_to_cc[1].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[288]/* drone_to_cc[1].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[288]/* drone_to_cc[1].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[287]/* drone_to_cc[1].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[287]/* drone_to_cc[1].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[286]/* drone_to_cc[1].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[286]/* drone_to_cc[1].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[285]/* drone_to_cc[1].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[285]/* drone_to_cc[1].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[284]/* drone_to_cc[1].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[284]/* drone_to_cc[1].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[283]/* drone_to_cc[1].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[283]/* drone_to_cc[1].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[282]/* drone_to_cc[1].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[282]/* drone_to_cc[1].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[281]/* drone_to_cc[1].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[281]/* drone_to_cc[1].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[280]/* drone_to_cc[1].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[280]/* drone_to_cc[1].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[279]/* drone_to_cc[1].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[279]/* drone_to_cc[1].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[278]/* drone_to_cc[1].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[278]/* drone_to_cc[1].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[277]/* drone_to_cc[1].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[277]/* drone_to_cc[1].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[276]/* drone_to_cc[1].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[276]/* drone_to_cc[1].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[275]/* drone_to_cc[1].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[275]/* drone_to_cc[1].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[274]/* drone_to_cc[1].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[274]/* drone_to_cc[1].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[273]/* drone_to_cc[1].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[273]/* drone_to_cc[1].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[272]/* drone_to_cc[1].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[272]/* drone_to_cc[1].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[271]/* drone_to_cc[1].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[271]/* drone_to_cc[1].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[270]/* drone_to_cc[1].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[270]/* drone_to_cc[1].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[269]/* drone_to_cc[1].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[269]/* drone_to_cc[1].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[268]/* drone_to_cc[1].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[268]/* drone_to_cc[1].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[267]/* drone_to_cc[1].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[267]/* drone_to_cc[1].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[266]/* drone_to_cc[1].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[266]/* drone_to_cc[1].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[265]/* drone_to_cc[1].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[265]/* drone_to_cc[1].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[264]/* drone_to_cc[1].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[264]/* drone_to_cc[1].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[263]/* drone_to_cc[1].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[263]/* drone_to_cc[1].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[262]/* drone_to_cc[1].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[262]/* drone_to_cc[1].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[261]/* drone_to_cc[1].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[261]/* drone_to_cc[1].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[82]/* drone_to_cc[1].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[82]/* drone_to_cc[1].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[365]/* drone_to_cc[1].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[365]/* drone_to_cc[1].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[364]/* drone_to_cc[1].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[364]/* drone_to_cc[1].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[363]/* drone_to_cc[1].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[363]/* drone_to_cc[1].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[362]/* drone_to_cc[1].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[362]/* drone_to_cc[1].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[361]/* drone_to_cc[1].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[361]/* drone_to_cc[1].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[76]/* drone_to_cc[1].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[76]/* drone_to_cc[1].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[21]/* $whenCondition6 DISCRETE */)  = (data->modelData->booleanVarsData[21]/* $whenCondition6 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[20]/* $whenCondition5 DISCRETE */)  = (data->modelData->booleanVarsData[20]/* $whenCondition5 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[19]/* $whenCondition4 DISCRETE */)  = (data->modelData->booleanVarsData[19]/* $whenCondition4 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[19]/* $whenCondition4 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[78]/* drone_to_cc[1].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[84]/* drone_to_cc[1].writesigint DISCRETE */) );

  tmp96 = GreaterEq((data->simulationInfo->integerVarsPre[30]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[20]/* $whenCondition5 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[78]/* drone_to_cc[1].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[84]/* drone_to_cc[1].writesigint DISCRETE */) )) && tmp96);

  tmp97 = Less((data->simulationInfo->integerVarsPre[30]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[21]/* $whenCondition6 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[78]/* drone_to_cc[1].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[84]/* drone_to_cc[1].writesigint DISCRETE */) ) && tmp97);

  (data->localData[0]->booleanVars[76]/* drone_to_cc[1].datavailable DISCRETE */)  = 0;

  tmp98 = ((modelica_integer) 1); tmp99 = 1; tmp100 = ((modelica_integer) 5);
  if(!(((tmp99 > 0) && (tmp98 > tmp100)) || ((tmp99 < 0) && (tmp98 < tmp100))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp98, tmp100); j += tmp99)
    {
      (&(data->localData[0]->realVars[361]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[82]/* drone_to_cc[1].spaceavailable DISCRETE */)  = 1;

  tmp104 = ((modelica_integer) 1); tmp105 = 1; tmp106 = ((modelica_integer) 10);
  if(!(((tmp105 > 0) && (tmp104 > tmp106)) || ((tmp105 < 0) && (tmp104 < tmp106))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp104, tmp106); i += tmp105)
    {
      tmp101 = ((modelica_integer) 1); tmp102 = 1; tmp103 = ((modelica_integer) 5);
      if(!(((tmp102 > 0) && (tmp101 > tmp103)) || ((tmp102 < 0) && (tmp101 < tmp103))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp101, tmp103); j += tmp102)
        {
          (&(data->localData[0]->realVars[261]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[30]/* drone_to_cc[1].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[34]/* drone_to_cc[1].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[32]/* drone_to_cc[1].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_244(DATA *data, threadData_t *threadData);

extern void System_eqFunction_242(DATA *data, threadData_t *threadData);

extern void System_eqFunction_243(DATA *data, threadData_t *threadData);

extern void System_eqFunction_240(DATA *data, threadData_t *threadData);

extern void System_eqFunction_246(DATA *data, threadData_t *threadData);

extern void System_eqFunction_241(DATA *data, threadData_t *threadData);

extern void System_eqFunction_245(DATA *data, threadData_t *threadData);


/*
equation index: 133
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[2].writesigint = $START.cc_to_drone[2].writesigint
*/
void System_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  (data->simulationInfo->booleanVarsPre[61]/* cc_to_drone[2].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[61]/* cc_to_drone[2].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[2].readsigint = $START.cc_to_drone[2].readsigint
*/
void System_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  (data->simulationInfo->booleanVarsPre[55]/* cc_to_drone[2].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[55]/* cc_to_drone[2].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[2].fifosize = $START.cc_to_drone[2].fifosize
*/
void System_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  (data->simulationInfo->integerVarsPre[17]/* cc_to_drone[2].fifosize DISCRETE */)  = (data->modelData->integerVarsData[17]/* cc_to_drone[2].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 136
type: ALGORITHM

  cc_to_drone[2].newest := $START.cc_to_drone[2].newest;
  cc_to_drone[2].oldest := $START.cc_to_drone[2].oldest;
  cc_to_drone[2].fifosize := $START.cc_to_drone[2].fifosize;
  cc_to_drone[2].fifo[10,5] := $START.cc_to_drone[2].fifo[10,5];
  cc_to_drone[2].fifo[10,4] := $START.cc_to_drone[2].fifo[10,4];
  cc_to_drone[2].fifo[10,3] := $START.cc_to_drone[2].fifo[10,3];
  cc_to_drone[2].fifo[10,2] := $START.cc_to_drone[2].fifo[10,2];
  cc_to_drone[2].fifo[10,1] := $START.cc_to_drone[2].fifo[10,1];
  cc_to_drone[2].fifo[9,5] := $START.cc_to_drone[2].fifo[9,5];
  cc_to_drone[2].fifo[9,4] := $START.cc_to_drone[2].fifo[9,4];
  cc_to_drone[2].fifo[9,3] := $START.cc_to_drone[2].fifo[9,3];
  cc_to_drone[2].fifo[9,2] := $START.cc_to_drone[2].fifo[9,2];
  cc_to_drone[2].fifo[9,1] := $START.cc_to_drone[2].fifo[9,1];
  cc_to_drone[2].fifo[8,5] := $START.cc_to_drone[2].fifo[8,5];
  cc_to_drone[2].fifo[8,4] := $START.cc_to_drone[2].fifo[8,4];
  cc_to_drone[2].fifo[8,3] := $START.cc_to_drone[2].fifo[8,3];
  cc_to_drone[2].fifo[8,2] := $START.cc_to_drone[2].fifo[8,2];
  cc_to_drone[2].fifo[8,1] := $START.cc_to_drone[2].fifo[8,1];
  cc_to_drone[2].fifo[7,5] := $START.cc_to_drone[2].fifo[7,5];
  cc_to_drone[2].fifo[7,4] := $START.cc_to_drone[2].fifo[7,4];
  cc_to_drone[2].fifo[7,3] := $START.cc_to_drone[2].fifo[7,3];
  cc_to_drone[2].fifo[7,2] := $START.cc_to_drone[2].fifo[7,2];
  cc_to_drone[2].fifo[7,1] := $START.cc_to_drone[2].fifo[7,1];
  cc_to_drone[2].fifo[6,5] := $START.cc_to_drone[2].fifo[6,5];
  cc_to_drone[2].fifo[6,4] := $START.cc_to_drone[2].fifo[6,4];
  cc_to_drone[2].fifo[6,3] := $START.cc_to_drone[2].fifo[6,3];
  cc_to_drone[2].fifo[6,2] := $START.cc_to_drone[2].fifo[6,2];
  cc_to_drone[2].fifo[6,1] := $START.cc_to_drone[2].fifo[6,1];
  cc_to_drone[2].fifo[5,5] := $START.cc_to_drone[2].fifo[5,5];
  cc_to_drone[2].fifo[5,4] := $START.cc_to_drone[2].fifo[5,4];
  cc_to_drone[2].fifo[5,3] := $START.cc_to_drone[2].fifo[5,3];
  cc_to_drone[2].fifo[5,2] := $START.cc_to_drone[2].fifo[5,2];
  cc_to_drone[2].fifo[5,1] := $START.cc_to_drone[2].fifo[5,1];
  cc_to_drone[2].fifo[4,5] := $START.cc_to_drone[2].fifo[4,5];
  cc_to_drone[2].fifo[4,4] := $START.cc_to_drone[2].fifo[4,4];
  cc_to_drone[2].fifo[4,3] := $START.cc_to_drone[2].fifo[4,3];
  cc_to_drone[2].fifo[4,2] := $START.cc_to_drone[2].fifo[4,2];
  cc_to_drone[2].fifo[4,1] := $START.cc_to_drone[2].fifo[4,1];
  cc_to_drone[2].fifo[3,5] := $START.cc_to_drone[2].fifo[3,5];
  cc_to_drone[2].fifo[3,4] := $START.cc_to_drone[2].fifo[3,4];
  cc_to_drone[2].fifo[3,3] := $START.cc_to_drone[2].fifo[3,3];
  cc_to_drone[2].fifo[3,2] := $START.cc_to_drone[2].fifo[3,2];
  cc_to_drone[2].fifo[3,1] := $START.cc_to_drone[2].fifo[3,1];
  cc_to_drone[2].fifo[2,5] := $START.cc_to_drone[2].fifo[2,5];
  cc_to_drone[2].fifo[2,4] := $START.cc_to_drone[2].fifo[2,4];
  cc_to_drone[2].fifo[2,3] := $START.cc_to_drone[2].fifo[2,3];
  cc_to_drone[2].fifo[2,2] := $START.cc_to_drone[2].fifo[2,2];
  cc_to_drone[2].fifo[2,1] := $START.cc_to_drone[2].fifo[2,1];
  cc_to_drone[2].fifo[1,5] := $START.cc_to_drone[2].fifo[1,5];
  cc_to_drone[2].fifo[1,4] := $START.cc_to_drone[2].fifo[1,4];
  cc_to_drone[2].fifo[1,3] := $START.cc_to_drone[2].fifo[1,3];
  cc_to_drone[2].fifo[1,2] := $START.cc_to_drone[2].fifo[1,2];
  cc_to_drone[2].fifo[1,1] := $START.cc_to_drone[2].fifo[1,1];
  cc_to_drone[2].spaceavailable := $START.cc_to_drone[2].spaceavailable;
  cc_to_drone[2].outputdata[5] := $START.cc_to_drone[2].outputdata[5];
  cc_to_drone[2].outputdata[4] := $START.cc_to_drone[2].outputdata[4];
  cc_to_drone[2].outputdata[3] := $START.cc_to_drone[2].outputdata[3];
  cc_to_drone[2].outputdata[2] := $START.cc_to_drone[2].outputdata[2];
  cc_to_drone[2].outputdata[1] := $START.cc_to_drone[2].outputdata[1];
  cc_to_drone[2].datavailable := $START.cc_to_drone[2].datavailable;
  $whenCondition9 := $START.$whenCondition9;
  $whenCondition8 := $START.$whenCondition8;
  $whenCondition7 := $START.$whenCondition7;
  $whenCondition7 := $PRE.cc_to_drone[2].readsigint and $PRE.cc_to_drone[2].writesigint;
  $whenCondition8 := $PRE.cc_to_drone[2].readsigint and not $PRE.cc_to_drone[2].writesigint and $PRE.cc_to_drone[2].fifosize >= 1;
  $whenCondition9 := not $PRE.cc_to_drone[2].readsigint and $PRE.cc_to_drone[2].writesigint and $PRE.cc_to_drone[2].fifosize < 10;
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
*/
void System_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  modelica_integer tmp109;
  modelica_integer tmp110;
  modelica_integer tmp111;
  modelica_integer tmp112;
  modelica_integer tmp113;
  modelica_integer tmp114;
  modelica_integer tmp115;
  modelica_integer tmp116;
  modelica_integer tmp117;
  (data->localData[0]->integerVars[19]/* cc_to_drone[2].newest DISCRETE */)  = (data->modelData->integerVarsData[19]/* cc_to_drone[2].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[21]/* cc_to_drone[2].oldest DISCRETE */)  = (data->modelData->integerVarsData[21]/* cc_to_drone[2].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[17]/* cc_to_drone[2].fifosize DISCRETE */)  = (data->modelData->integerVarsData[17]/* cc_to_drone[2].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[226]/* cc_to_drone[2].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[226]/* cc_to_drone[2].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[225]/* cc_to_drone[2].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[225]/* cc_to_drone[2].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[224]/* cc_to_drone[2].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[224]/* cc_to_drone[2].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[223]/* cc_to_drone[2].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[223]/* cc_to_drone[2].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[222]/* cc_to_drone[2].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[222]/* cc_to_drone[2].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[221]/* cc_to_drone[2].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[221]/* cc_to_drone[2].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[220]/* cc_to_drone[2].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[220]/* cc_to_drone[2].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[219]/* cc_to_drone[2].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[219]/* cc_to_drone[2].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[218]/* cc_to_drone[2].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[218]/* cc_to_drone[2].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[217]/* cc_to_drone[2].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[217]/* cc_to_drone[2].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[216]/* cc_to_drone[2].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[216]/* cc_to_drone[2].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[215]/* cc_to_drone[2].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[215]/* cc_to_drone[2].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[214]/* cc_to_drone[2].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[214]/* cc_to_drone[2].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[213]/* cc_to_drone[2].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[213]/* cc_to_drone[2].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[212]/* cc_to_drone[2].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[212]/* cc_to_drone[2].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[211]/* cc_to_drone[2].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[211]/* cc_to_drone[2].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[210]/* cc_to_drone[2].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[210]/* cc_to_drone[2].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[209]/* cc_to_drone[2].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[209]/* cc_to_drone[2].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[208]/* cc_to_drone[2].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[208]/* cc_to_drone[2].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[207]/* cc_to_drone[2].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[207]/* cc_to_drone[2].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[206]/* cc_to_drone[2].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[206]/* cc_to_drone[2].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[205]/* cc_to_drone[2].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[205]/* cc_to_drone[2].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[204]/* cc_to_drone[2].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[204]/* cc_to_drone[2].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[203]/* cc_to_drone[2].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[203]/* cc_to_drone[2].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[202]/* cc_to_drone[2].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[202]/* cc_to_drone[2].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[201]/* cc_to_drone[2].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[201]/* cc_to_drone[2].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[200]/* cc_to_drone[2].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[200]/* cc_to_drone[2].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[199]/* cc_to_drone[2].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[199]/* cc_to_drone[2].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[198]/* cc_to_drone[2].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[198]/* cc_to_drone[2].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[197]/* cc_to_drone[2].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[197]/* cc_to_drone[2].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[196]/* cc_to_drone[2].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[196]/* cc_to_drone[2].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[195]/* cc_to_drone[2].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[195]/* cc_to_drone[2].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[194]/* cc_to_drone[2].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[194]/* cc_to_drone[2].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[193]/* cc_to_drone[2].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[193]/* cc_to_drone[2].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[192]/* cc_to_drone[2].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[192]/* cc_to_drone[2].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[191]/* cc_to_drone[2].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[191]/* cc_to_drone[2].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[190]/* cc_to_drone[2].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[190]/* cc_to_drone[2].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[189]/* cc_to_drone[2].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[189]/* cc_to_drone[2].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[188]/* cc_to_drone[2].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[188]/* cc_to_drone[2].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[187]/* cc_to_drone[2].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[187]/* cc_to_drone[2].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[186]/* cc_to_drone[2].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[186]/* cc_to_drone[2].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[185]/* cc_to_drone[2].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[185]/* cc_to_drone[2].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[184]/* cc_to_drone[2].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[184]/* cc_to_drone[2].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[183]/* cc_to_drone[2].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[183]/* cc_to_drone[2].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[182]/* cc_to_drone[2].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[182]/* cc_to_drone[2].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[181]/* cc_to_drone[2].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[181]/* cc_to_drone[2].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[180]/* cc_to_drone[2].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[180]/* cc_to_drone[2].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[179]/* cc_to_drone[2].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[179]/* cc_to_drone[2].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[178]/* cc_to_drone[2].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[178]/* cc_to_drone[2].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[177]/* cc_to_drone[2].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[177]/* cc_to_drone[2].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[59]/* cc_to_drone[2].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[59]/* cc_to_drone[2].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[236]/* cc_to_drone[2].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[236]/* cc_to_drone[2].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[235]/* cc_to_drone[2].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[235]/* cc_to_drone[2].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[234]/* cc_to_drone[2].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[234]/* cc_to_drone[2].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[233]/* cc_to_drone[2].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[233]/* cc_to_drone[2].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[232]/* cc_to_drone[2].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[232]/* cc_to_drone[2].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[53]/* cc_to_drone[2].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[53]/* cc_to_drone[2].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[24]/* $whenCondition9 DISCRETE */)  = (data->modelData->booleanVarsData[24]/* $whenCondition9 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[23]/* $whenCondition8 DISCRETE */)  = (data->modelData->booleanVarsData[23]/* $whenCondition8 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[22]/* $whenCondition7 DISCRETE */)  = (data->modelData->booleanVarsData[22]/* $whenCondition7 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[22]/* $whenCondition7 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[55]/* cc_to_drone[2].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[61]/* cc_to_drone[2].writesigint DISCRETE */) );

  tmp107 = GreaterEq((data->simulationInfo->integerVarsPre[17]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[23]/* $whenCondition8 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[55]/* cc_to_drone[2].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[61]/* cc_to_drone[2].writesigint DISCRETE */) )) && tmp107);

  tmp108 = Less((data->simulationInfo->integerVarsPre[17]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[24]/* $whenCondition9 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[55]/* cc_to_drone[2].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[61]/* cc_to_drone[2].writesigint DISCRETE */) ) && tmp108);

  (data->localData[0]->booleanVars[53]/* cc_to_drone[2].datavailable DISCRETE */)  = 0;

  tmp109 = ((modelica_integer) 1); tmp110 = 1; tmp111 = ((modelica_integer) 5);
  if(!(((tmp110 > 0) && (tmp109 > tmp111)) || ((tmp110 < 0) && (tmp109 < tmp111))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp109, tmp111); j += tmp110)
    {
      (&(data->localData[0]->realVars[227]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[59]/* cc_to_drone[2].spaceavailable DISCRETE */)  = 1;

  tmp115 = ((modelica_integer) 1); tmp116 = 1; tmp117 = ((modelica_integer) 10);
  if(!(((tmp116 > 0) && (tmp115 > tmp117)) || ((tmp116 < 0) && (tmp115 < tmp117))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp115, tmp117); i += tmp116)
    {
      tmp112 = ((modelica_integer) 1); tmp113 = 1; tmp114 = ((modelica_integer) 5);
      if(!(((tmp113 > 0) && (tmp112 > tmp114)) || ((tmp113 < 0) && (tmp112 < tmp114))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp112, tmp114); j += tmp113)
        {
          (&(data->localData[0]->realVars[127]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[17]/* cc_to_drone[2].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[21]/* cc_to_drone[2].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[19]/* cc_to_drone[2].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_187(DATA *data, threadData_t *threadData);

extern void System_eqFunction_186(DATA *data, threadData_t *threadData);


/*
equation index: 139
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].writesigint = $START.cc_to_drone[1].writesigint
*/
void System_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  (data->simulationInfo->booleanVarsPre[60]/* cc_to_drone[1].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[60]/* cc_to_drone[1].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].readsigint = $START.cc_to_drone[1].readsigint
*/
void System_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  (data->simulationInfo->booleanVarsPre[54]/* cc_to_drone[1].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[54]/* cc_to_drone[1].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].fifosize = $START.cc_to_drone[1].fifosize
*/
void System_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  (data->simulationInfo->integerVarsPre[16]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->modelData->integerVarsData[16]/* cc_to_drone[1].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 142
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
  $whenCondition12 := $START.$whenCondition12;
  $whenCondition11 := $START.$whenCondition11;
  $whenCondition10 := $START.$whenCondition10;
  $whenCondition10 := $PRE.cc_to_drone[1].readsigint and $PRE.cc_to_drone[1].writesigint;
  $whenCondition11 := $PRE.cc_to_drone[1].readsigint and not $PRE.cc_to_drone[1].writesigint and $PRE.cc_to_drone[1].fifosize >= 1;
  $whenCondition12 := not $PRE.cc_to_drone[1].readsigint and $PRE.cc_to_drone[1].writesigint and $PRE.cc_to_drone[1].fifosize < 10;
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
void System_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  modelica_boolean tmp118;
  modelica_boolean tmp119;
  modelica_integer tmp120;
  modelica_integer tmp121;
  modelica_integer tmp122;
  modelica_integer tmp123;
  modelica_integer tmp124;
  modelica_integer tmp125;
  modelica_integer tmp126;
  modelica_integer tmp127;
  modelica_integer tmp128;
  (data->localData[0]->integerVars[18]/* cc_to_drone[1].newest DISCRETE */)  = (data->modelData->integerVarsData[18]/* cc_to_drone[1].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[20]/* cc_to_drone[1].oldest DISCRETE */)  = (data->modelData->integerVarsData[20]/* cc_to_drone[1].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[16]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->modelData->integerVarsData[16]/* cc_to_drone[1].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[176]/* cc_to_drone[1].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[176]/* cc_to_drone[1].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[175]/* cc_to_drone[1].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[175]/* cc_to_drone[1].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[174]/* cc_to_drone[1].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[174]/* cc_to_drone[1].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[173]/* cc_to_drone[1].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[173]/* cc_to_drone[1].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[172]/* cc_to_drone[1].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[172]/* cc_to_drone[1].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[171]/* cc_to_drone[1].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[171]/* cc_to_drone[1].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[170]/* cc_to_drone[1].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[170]/* cc_to_drone[1].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[169]/* cc_to_drone[1].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[169]/* cc_to_drone[1].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[168]/* cc_to_drone[1].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[168]/* cc_to_drone[1].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[167]/* cc_to_drone[1].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[167]/* cc_to_drone[1].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[166]/* cc_to_drone[1].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[166]/* cc_to_drone[1].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[165]/* cc_to_drone[1].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[165]/* cc_to_drone[1].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[164]/* cc_to_drone[1].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[164]/* cc_to_drone[1].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[163]/* cc_to_drone[1].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[163]/* cc_to_drone[1].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[162]/* cc_to_drone[1].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[162]/* cc_to_drone[1].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[161]/* cc_to_drone[1].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[161]/* cc_to_drone[1].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[160]/* cc_to_drone[1].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[160]/* cc_to_drone[1].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[159]/* cc_to_drone[1].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[159]/* cc_to_drone[1].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[158]/* cc_to_drone[1].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[158]/* cc_to_drone[1].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[157]/* cc_to_drone[1].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[157]/* cc_to_drone[1].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[156]/* cc_to_drone[1].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[156]/* cc_to_drone[1].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[155]/* cc_to_drone[1].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[155]/* cc_to_drone[1].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[154]/* cc_to_drone[1].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[154]/* cc_to_drone[1].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[153]/* cc_to_drone[1].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[153]/* cc_to_drone[1].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[152]/* cc_to_drone[1].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[152]/* cc_to_drone[1].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[151]/* cc_to_drone[1].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[151]/* cc_to_drone[1].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[150]/* cc_to_drone[1].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[150]/* cc_to_drone[1].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[149]/* cc_to_drone[1].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[149]/* cc_to_drone[1].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[148]/* cc_to_drone[1].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[148]/* cc_to_drone[1].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[147]/* cc_to_drone[1].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[147]/* cc_to_drone[1].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[146]/* cc_to_drone[1].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[146]/* cc_to_drone[1].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[145]/* cc_to_drone[1].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[145]/* cc_to_drone[1].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[144]/* cc_to_drone[1].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[144]/* cc_to_drone[1].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[143]/* cc_to_drone[1].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[143]/* cc_to_drone[1].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[142]/* cc_to_drone[1].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[142]/* cc_to_drone[1].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[141]/* cc_to_drone[1].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[141]/* cc_to_drone[1].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[140]/* cc_to_drone[1].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[140]/* cc_to_drone[1].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[139]/* cc_to_drone[1].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[139]/* cc_to_drone[1].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[138]/* cc_to_drone[1].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[138]/* cc_to_drone[1].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[137]/* cc_to_drone[1].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[137]/* cc_to_drone[1].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[136]/* cc_to_drone[1].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[136]/* cc_to_drone[1].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[135]/* cc_to_drone[1].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[135]/* cc_to_drone[1].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[134]/* cc_to_drone[1].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[134]/* cc_to_drone[1].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[133]/* cc_to_drone[1].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[133]/* cc_to_drone[1].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[132]/* cc_to_drone[1].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[132]/* cc_to_drone[1].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[131]/* cc_to_drone[1].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[131]/* cc_to_drone[1].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[130]/* cc_to_drone[1].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[130]/* cc_to_drone[1].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[129]/* cc_to_drone[1].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[129]/* cc_to_drone[1].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[128]/* cc_to_drone[1].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[128]/* cc_to_drone[1].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[127]/* cc_to_drone[1].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[127]/* cc_to_drone[1].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[58]/* cc_to_drone[1].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[58]/* cc_to_drone[1].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[231]/* cc_to_drone[1].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[231]/* cc_to_drone[1].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[230]/* cc_to_drone[1].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[230]/* cc_to_drone[1].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[229]/* cc_to_drone[1].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[229]/* cc_to_drone[1].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[228]/* cc_to_drone[1].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[228]/* cc_to_drone[1].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[227]/* cc_to_drone[1].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[227]/* cc_to_drone[1].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[52]/* cc_to_drone[1].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[52]/* cc_to_drone[1].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = (data->modelData->booleanVarsData[3]/* $whenCondition12 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (data->modelData->booleanVarsData[2]/* $whenCondition11 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = (data->modelData->booleanVarsData[1]/* $whenCondition10 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[54]/* cc_to_drone[1].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[60]/* cc_to_drone[1].writesigint DISCRETE */) );

  tmp118 = GreaterEq((data->simulationInfo->integerVarsPre[16]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[54]/* cc_to_drone[1].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[60]/* cc_to_drone[1].writesigint DISCRETE */) )) && tmp118);

  tmp119 = Less((data->simulationInfo->integerVarsPre[16]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[54]/* cc_to_drone[1].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[60]/* cc_to_drone[1].writesigint DISCRETE */) ) && tmp119);

  (data->localData[0]->booleanVars[52]/* cc_to_drone[1].datavailable DISCRETE */)  = 0;

  tmp120 = ((modelica_integer) 1); tmp121 = 1; tmp122 = ((modelica_integer) 5);
  if(!(((tmp121 > 0) && (tmp120 > tmp122)) || ((tmp121 < 0) && (tmp120 < tmp122))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp120, tmp122); j += tmp121)
    {
      (&(data->localData[0]->realVars[227]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[58]/* cc_to_drone[1].spaceavailable DISCRETE */)  = 1;

  tmp126 = ((modelica_integer) 1); tmp127 = 1; tmp128 = ((modelica_integer) 10);
  if(!(((tmp127 > 0) && (tmp126 > tmp128)) || ((tmp127 < 0) && (tmp126 < tmp128))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp126, tmp128); i += tmp127)
    {
      tmp123 = ((modelica_integer) 1); tmp124 = 1; tmp125 = ((modelica_integer) 5);
      if(!(((tmp124 > 0) && (tmp123 > tmp125)) || ((tmp124 < 0) && (tmp123 < tmp125))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp123, tmp125); j += tmp124)
        {
          (&(data->localData[0]->realVars[127]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[16]/* cc_to_drone[1].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[20]/* cc_to_drone[1].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[18]/* cc_to_drone[1].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_198(DATA *data, threadData_t *threadData);

extern void System_eqFunction_197(DATA *data, threadData_t *threadData);


/*
equation index: 145
type: SIMPLE_ASSIGN
$PRE.d[2].ctrl.droneDead = $START.d[2].ctrl.droneDead
*/
void System_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  (data->simulationInfo->booleanVarsPre[65]/* d[2].ctrl.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[65]/* d[2].ctrl.droneDead DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 146
type: ALGORITHM

  $whenCondition18 := $START.$whenCondition18;
  $whenCondition17 := $START.$whenCondition17;
  $whenCondition17 := false;
  $whenCondition18 := false;
*/
void System_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  (data->localData[0]->booleanVars[9]/* $whenCondition18 DISCRETE */)  = (data->modelData->booleanVarsData[9]/* $whenCondition18 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[8]/* $whenCondition17 DISCRETE */)  = (data->modelData->booleanVarsData[8]/* $whenCondition17 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[8]/* $whenCondition17 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[9]/* $whenCondition18 DISCRETE */)  = 0;
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.droneDead = $START.d[1].ctrl.droneDead
*/
void System_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  (data->simulationInfo->booleanVarsPre[64]/* d[1].ctrl.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[64]/* d[1].ctrl.droneDead DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 148
type: ALGORITHM

  $whenCondition23 := $START.$whenCondition23;
  $whenCondition22 := $START.$whenCondition22;
  $whenCondition22 := false;
  $whenCondition23 := false;
*/
void System_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  (data->localData[0]->booleanVars[15]/* $whenCondition23 DISCRETE */)  = (data->modelData->booleanVarsData[15]/* $whenCondition23 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[14]/* $whenCondition22 DISCRETE */)  = (data->modelData->booleanVarsData[14]/* $whenCondition22 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[14]/* $whenCondition22 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[15]/* $whenCondition23 DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_162(DATA *data, threadData_t *threadData);

extern void System_eqFunction_161(DATA *data, threadData_t *threadData);

extern void System_eqFunction_160(DATA *data, threadData_t *threadData);

extern void System_eqFunction_159(DATA *data, threadData_t *threadData);

extern void System_eqFunction_158(DATA *data, threadData_t *threadData);

extern void System_eqFunction_157(DATA *data, threadData_t *threadData);

extern void System_eqFunction_156(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void System_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  System_eqFunction_1(data, threadData);
  System_eqFunction_210(data, threadData);
  System_eqFunction_206(data, threadData);
  System_eqFunction_205(data, threadData);
  System_eqFunction_213(data, threadData);
  System_eqFunction_207(data, threadData);
  System_eqFunction_203(data, threadData);
  System_eqFunction_208(data, threadData);
  System_eqFunction_211(data, threadData);
  System_eqFunction_212(data, threadData);
  System_eqFunction_222(data, threadData);
  System_eqFunction_12(data, threadData);
  System_eqFunction_13(data, threadData);
  System_eqFunction_14(data, threadData);
  System_eqFunction_15(data, threadData);
  System_eqFunction_16(data, threadData);
  System_eqFunction_17(data, threadData);
  System_eqFunction_176(data, threadData);
  System_eqFunction_184(data, threadData);
  System_eqFunction_180(data, threadData);
  System_eqFunction_175(data, threadData);
  System_eqFunction_174(data, threadData);
  System_eqFunction_181(data, threadData);
  System_eqFunction_178(data, threadData);
  System_eqFunction_188(data, threadData);
  System_eqFunction_182(data, threadData);
  System_eqFunction_183(data, threadData);
  System_eqFunction_191(data, threadData);
  System_eqFunction_195(data, threadData);
  System_eqFunction_194(data, threadData);
  System_eqFunction_192(data, threadData);
  System_eqFunction_32(data, threadData);
  System_eqFunction_33(data, threadData);
  System_eqFunction_34(data, threadData);
  System_eqFunction_35(data, threadData);
  System_eqFunction_36(data, threadData);
  System_eqFunction_37(data, threadData);
  System_eqFunction_38(data, threadData);
  System_eqFunction_39(data, threadData);
  System_eqFunction_40(data, threadData);
  System_eqFunction_233(data, threadData);
  System_eqFunction_238(data, threadData);
  System_eqFunction_232(data, threadData);
  System_eqFunction_229(data, threadData);
  System_eqFunction_237(data, threadData);
  System_eqFunction_227(data, threadData);
  System_eqFunction_235(data, threadData);
  System_eqFunction_234(data, threadData);
  System_eqFunction_231(data, threadData);
  System_eqFunction_230(data, threadData);
  System_eqFunction_51(data, threadData);
  System_eqFunction_52(data, threadData);
  System_eqFunction_53(data, threadData);
  System_eqFunction_54(data, threadData);
  System_eqFunction_55(data, threadData);
  System_eqFunction_56(data, threadData);
  System_eqFunction_57(data, threadData);
  System_eqFunction_201(data, threadData);
  System_eqFunction_223(data, threadData);
  System_eqFunction_60(data, threadData);
  System_eqFunction_61(data, threadData);
  System_eqFunction_62(data, threadData);
  System_eqFunction_165(data, threadData);
  System_eqFunction_64(data, threadData);
  System_eqFunction_65(data, threadData);
  System_eqFunction_164(data, threadData);
  System_eqFunction_67(data, threadData);
  System_eqFunction_68(data, threadData);
  System_eqFunction_69(data, threadData);
  System_eqFunction_166(data, threadData);
  System_eqFunction_71(data, threadData);
  System_eqFunction_249(data, threadData);
  System_eqFunction_73(data, threadData);
  System_eqFunction_251(data, threadData);
  System_eqFunction_75(data, threadData);
  System_eqFunction_76(data, threadData);
  System_eqFunction_77(data, threadData);
  System_eqFunction_167(data, threadData);
  System_eqFunction_79(data, threadData);
  System_eqFunction_252(data, threadData);
  System_eqFunction_81(data, threadData);
  System_eqFunction_254(data, threadData);
  System_eqFunction_83(data, threadData);
  System_eqFunction_84(data, threadData);
  System_eqFunction_85(data, threadData);
  System_eqFunction_248(data, threadData);
  System_eqFunction_247(data, threadData);
  System_eqFunction_88(data, threadData);
  System_eqFunction_89(data, threadData);
  System_eqFunction_90(data, threadData);
  System_eqFunction_170(data, threadData);
  System_eqFunction_92(data, threadData);
  System_eqFunction_93(data, threadData);
  System_eqFunction_169(data, threadData);
  System_eqFunction_95(data, threadData);
  System_eqFunction_96(data, threadData);
  System_eqFunction_97(data, threadData);
  System_eqFunction_171(data, threadData);
  System_eqFunction_99(data, threadData);
  System_eqFunction_255(data, threadData);
  System_eqFunction_101(data, threadData);
  System_eqFunction_257(data, threadData);
  System_eqFunction_103(data, threadData);
  System_eqFunction_104(data, threadData);
  System_eqFunction_105(data, threadData);
  System_eqFunction_172(data, threadData);
  System_eqFunction_107(data, threadData);
  System_eqFunction_258(data, threadData);
  System_eqFunction_109(data, threadData);
  System_eqFunction_260(data, threadData);
  System_eqFunction_111(data, threadData);
  System_eqFunction_112(data, threadData);
  System_eqFunction_113(data, threadData);
  System_eqFunction_114(data, threadData);
  System_eqFunction_218(data, threadData);
  System_eqFunction_216(data, threadData);
  System_eqFunction_220(data, threadData);
  System_eqFunction_215(data, threadData);
  System_eqFunction_219(data, threadData);
  System_eqFunction_221(data, threadData);
  System_eqFunction_217(data, threadData);
  System_eqFunction_122(data, threadData);
  System_eqFunction_123(data, threadData);
  System_eqFunction_124(data, threadData);
  System_eqFunction_125(data, threadData);
  System_eqFunction_244(data, threadData);
  System_eqFunction_242(data, threadData);
  System_eqFunction_243(data, threadData);
  System_eqFunction_240(data, threadData);
  System_eqFunction_246(data, threadData);
  System_eqFunction_241(data, threadData);
  System_eqFunction_245(data, threadData);
  System_eqFunction_133(data, threadData);
  System_eqFunction_134(data, threadData);
  System_eqFunction_135(data, threadData);
  System_eqFunction_136(data, threadData);
  System_eqFunction_187(data, threadData);
  System_eqFunction_186(data, threadData);
  System_eqFunction_139(data, threadData);
  System_eqFunction_140(data, threadData);
  System_eqFunction_141(data, threadData);
  System_eqFunction_142(data, threadData);
  System_eqFunction_198(data, threadData);
  System_eqFunction_197(data, threadData);
  System_eqFunction_145(data, threadData);
  System_eqFunction_146(data, threadData);
  System_eqFunction_147(data, threadData);
  System_eqFunction_148(data, threadData);
  System_eqFunction_162(data, threadData);
  System_eqFunction_161(data, threadData);
  System_eqFunction_160(data, threadData);
  System_eqFunction_159(data, threadData);
  System_eqFunction_158(data, threadData);
  System_eqFunction_157(data, threadData);
  System_eqFunction_156(data, threadData);
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

