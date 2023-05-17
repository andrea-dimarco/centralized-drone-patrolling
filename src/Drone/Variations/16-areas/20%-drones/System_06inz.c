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

  d[4].comm_state := $START.d[4].comm_state;
  d[4].fifox := $START.d[4].fifox;
  d[4].writesignal := $START.d[4].writesignal;
  d[4].readsignal := $START.d[4].readsignal;
  d[4].flag := $START.d[4].flag;
  d[4].setz := $START.d[4].setz;
  d[4].sety := $START.d[4].sety;
  d[4].setx := $START.d[4].setx;
  d[4].msg_to_cc[5] := $START.d[4].msg_to_cc[5];
  d[4].msg_to_cc[4] := $START.d[4].msg_to_cc[4];
  d[4].msg_to_cc[3] := $START.d[4].msg_to_cc[3];
  d[4].msg_to_cc[2] := $START.d[4].msg_to_cc[2];
  d[4].msg_to_cc[1] := $START.d[4].msg_to_cc[1];
  $whenCondition28 := $START.$whenCondition28;
  $whenCondition28 := false;
  d[4].msg_to_cc := {0.0, 0.0, 0.0, 0.0, 0.0};
  d[4].setx := myrandom() * d[4].p.flyZone[1];
  d[4].sety := myrandom() * d[4].p.flyZone[2];
  d[4].setz := myrandom() * d[4].p.flyZone[3];
  d[4].flag := 0;
  d[4].readsignal := false;
  d[4].writesignal := false;
  d[4].fifox := 0;
  d[4].comm_state := 10;
*/
void System_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  real_array tmp0;
  real_array tmp1;
  (data->localData[0]->integerVars[41]/* d[4].comm_state DISCRETE */)  = (data->modelData->integerVarsData[41]/* d[4].comm_state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[49]/* d[4].fifox DISCRETE */)  = (data->modelData->integerVarsData[49]/* d[4].fifox DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[147]/* d[4].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[147]/* d[4].writesignal DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[139]/* d[4].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[139]/* d[4].readsignal DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[53]/* d[4].flag DISCRETE */)  = (data->modelData->integerVarsData[53]/* d[4].flag DISCRETE */).attribute .start;

  (data->localData[0]->realVars[502]/* d[4].setz DISCRETE */)  = (data->modelData->realVarsData[502]/* d[4].setz DISCRETE */).attribute .start;

  (data->localData[0]->realVars[498]/* d[4].sety DISCRETE */)  = (data->modelData->realVarsData[498]/* d[4].sety DISCRETE */).attribute .start;

  (data->localData[0]->realVars[494]/* d[4].setx DISCRETE */)  = (data->modelData->realVarsData[494]/* d[4].setx DISCRETE */).attribute .start;

  (data->localData[0]->realVars[490]/* d[4].msg_to_cc[5] DISCRETE */)  = (data->modelData->realVarsData[490]/* d[4].msg_to_cc[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[489]/* d[4].msg_to_cc[4] DISCRETE */)  = (data->modelData->realVarsData[489]/* d[4].msg_to_cc[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[488]/* d[4].msg_to_cc[3] DISCRETE */)  = (data->modelData->realVarsData[488]/* d[4].msg_to_cc[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[487]/* d[4].msg_to_cc[2] DISCRETE */)  = (data->modelData->realVarsData[487]/* d[4].msg_to_cc[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[486]/* d[4].msg_to_cc[1] DISCRETE */)  = (data->modelData->realVarsData[486]/* d[4].msg_to_cc[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[20]/* $whenCondition28 DISCRETE */)  = (data->modelData->booleanVarsData[20]/* $whenCondition28 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[20]/* $whenCondition28 DISCRETE */)  = 0;

  array_alloc_scalar_real_array(&tmp0, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp1, ((modelica_real*)&((&(data->localData[0]->realVars[471]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
  real_array_copy_data(tmp0, tmp1);

  (data->localData[0]->realVars[494]/* d[4].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[2199]/* d[4].p.flyZone[1] PARAM */) );

  (data->localData[0]->realVars[498]/* d[4].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[2200]/* d[4].p.flyZone[2] PARAM */) );

  (data->localData[0]->realVars[502]/* d[4].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[2201]/* d[4].p.flyZone[3] PARAM */) );

  (data->localData[0]->integerVars[53]/* d[4].flag DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->booleanVars[139]/* d[4].readsignal DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[147]/* d[4].writesignal DISCRETE */)  = 0;

  (data->localData[0]->integerVars[49]/* d[4].fifox DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[41]/* d[4].comm_state DISCRETE */)  = ((modelica_integer) 10);
  TRACE_POP
}
extern void System_eqFunction_384(DATA *data, threadData_t *threadData);

extern void System_eqFunction_391(DATA *data, threadData_t *threadData);

extern void System_eqFunction_390(DATA *data, threadData_t *threadData);

extern void System_eqFunction_387(DATA *data, threadData_t *threadData);

extern void System_eqFunction_386(DATA *data, threadData_t *threadData);

extern void System_eqFunction_388(DATA *data, threadData_t *threadData);

extern void System_eqFunction_382(DATA *data, threadData_t *threadData);

extern void System_eqFunction_385(DATA *data, threadData_t *threadData);

extern void System_eqFunction_400(DATA *data, threadData_t *threadData);

extern void System_eqFunction_401(DATA *data, threadData_t *threadData);


/*
equation index: 12
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[4].writesignal = $START.drone_to_cc[4].writesignal
*/
void System_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  (data->simulationInfo->booleanVarsPre[171]/* drone_to_cc[4].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[171]/* drone_to_cc[4].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
drone_to_cc[4].writesigint = not $PRE.drone_to_cc[4].writesignal == drone_to_cc[4].writesignal
*/
void System_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->booleanVars[167]/* drone_to_cc[4].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[171]/* drone_to_cc[4].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[171]/* drone_to_cc[4].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[171]/* drone_to_cc[4].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[171]/* drone_to_cc[4].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[4].readsignal = $START.cc_to_drone[4].readsignal
*/
void System_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  (data->simulationInfo->booleanVarsPre[111]/* cc_to_drone[4].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[111]/* cc_to_drone[4].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
cc_to_drone[4].readsigint = not $PRE.cc_to_drone[4].readsignal == cc_to_drone[4].readsignal
*/
void System_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->booleanVars[107]/* cc_to_drone[4].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[111]/* cc_to_drone[4].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[111]/* cc_to_drone[4].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[111]/* cc_to_drone[4].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[111]/* cc_to_drone[4].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 16
type: ALGORITHM

  cc.endSimulation := $START.cc.endSimulation;
  cc.setpointChanged[4] := $START.cc.setpointChanged[4];
  cc.setpointChanged[3] := $START.cc.setpointChanged[3];
  cc.setpointChanged[2] := $START.cc.setpointChanged[2];
  cc.setpointChanged[1] := $START.cc.setpointChanged[1];
  cc.comm_done[4] := $START.cc.comm_done[4];
  cc.comm_done[3] := $START.cc.comm_done[3];
  cc.comm_done[2] := $START.cc.comm_done[2];
  cc.comm_done[1] := $START.cc.comm_done[1];
  cc.state := $START.cc.state;
  cc.fifox[4] := $START.cc.fifox[4];
  cc.fifox[3] := $START.cc.fifox[3];
  cc.fifox[2] := $START.cc.fifox[2];
  cc.fifox[1] := $START.cc.fifox[1];
  cc.pos[4,3] := $START.cc.pos[4,3];
  cc.pos[4,2] := $START.cc.pos[4,2];
  cc.pos[4,1] := $START.cc.pos[4,1];
  cc.pos[3,3] := $START.cc.pos[3,3];
  cc.pos[3,2] := $START.cc.pos[3,2];
  cc.pos[3,1] := $START.cc.pos[3,1];
  cc.pos[2,3] := $START.cc.pos[2,3];
  cc.pos[2,2] := $START.cc.pos[2,2];
  cc.pos[2,1] := $START.cc.pos[2,1];
  cc.pos[1,3] := $START.cc.pos[1,3];
  cc.pos[1,2] := $START.cc.pos[1,2];
  cc.pos[1,1] := $START.cc.pos[1,1];
  cc.msg_to_drone[4,5] := $START.cc.msg_to_drone[4,5];
  cc.msg_to_drone[4,4] := $START.cc.msg_to_drone[4,4];
  cc.msg_to_drone[4,3] := $START.cc.msg_to_drone[4,3];
  cc.msg_to_drone[4,2] := $START.cc.msg_to_drone[4,2];
  cc.msg_to_drone[4,1] := $START.cc.msg_to_drone[4,1];
  cc.msg_to_drone[3,5] := $START.cc.msg_to_drone[3,5];
  cc.msg_to_drone[3,4] := $START.cc.msg_to_drone[3,4];
  cc.msg_to_drone[3,3] := $START.cc.msg_to_drone[3,3];
  cc.msg_to_drone[3,2] := $START.cc.msg_to_drone[3,2];
  cc.msg_to_drone[3,1] := $START.cc.msg_to_drone[3,1];
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
  cc.writesignal[4] := $START.cc.writesignal[4];
  cc.writesignal[3] := $START.cc.writesignal[3];
  cc.writesignal[2] := $START.cc.writesignal[2];
  cc.writesignal[1] := $START.cc.writesignal[1];
  cc.readsignal[4] := $START.cc.readsignal[4];
  cc.readsignal[3] := $START.cc.readsignal[3];
  cc.readsignal[2] := $START.cc.readsignal[2];
  cc.readsignal[1] := $START.cc.readsignal[1];
  cc.setpointChangeTime[4] := $START.cc.setpointChangeTime[4];
  cc.setpointChangeTime[3] := $START.cc.setpointChangeTime[3];
  cc.setpointChangeTime[2] := $START.cc.setpointChangeTime[2];
  cc.setpointChangeTime[1] := $START.cc.setpointChangeTime[1];
  cc.lastAnswered[4] := $START.cc.lastAnswered[4];
  cc.lastAnswered[3] := $START.cc.lastAnswered[3];
  cc.lastAnswered[2] := $START.cc.lastAnswered[2];
  cc.lastAnswered[1] := $START.cc.lastAnswered[1];
  cc.isDead[4] := $START.cc.isDead[4];
  cc.isDead[3] := $START.cc.isDead[3];
  cc.isDead[2] := $START.cc.isDead[2];
  cc.isDead[1] := $START.cc.isDead[1];
  cc.rechargingDrones := $START.cc.rechargingDrones;
  cc.isRecharging[4] := $START.cc.isRecharging[4];
  cc.isRecharging[3] := $START.cc.isRecharging[3];
  cc.isRecharging[2] := $START.cc.isRecharging[2];
  cc.isRecharging[1] := $START.cc.isRecharging[1];
  cc.battery[4] := $START.cc.battery[4];
  cc.battery[3] := $START.cc.battery[3];
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
  cc.hasBeenSelected[16] := $START.cc.hasBeenSelected[16];
  cc.hasBeenSelected[15] := $START.cc.hasBeenSelected[15];
  cc.hasBeenSelected[14] := $START.cc.hasBeenSelected[14];
  cc.hasBeenSelected[13] := $START.cc.hasBeenSelected[13];
  cc.hasBeenSelected[12] := $START.cc.hasBeenSelected[12];
  cc.hasBeenSelected[11] := $START.cc.hasBeenSelected[11];
  cc.hasBeenSelected[10] := $START.cc.hasBeenSelected[10];
  cc.hasBeenSelected[9] := $START.cc.hasBeenSelected[9];
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
  cc.isBusy[4] := $START.cc.isBusy[4];
  cc.isBusy[3] := $START.cc.isBusy[3];
  cc.isBusy[2] := $START.cc.isBusy[2];
  cc.isBusy[1] := $START.cc.isBusy[1];
  cc.lastVisited[16] := $START.cc.lastVisited[16];
  cc.lastVisited[15] := $START.cc.lastVisited[15];
  cc.lastVisited[14] := $START.cc.lastVisited[14];
  cc.lastVisited[13] := $START.cc.lastVisited[13];
  cc.lastVisited[12] := $START.cc.lastVisited[12];
  cc.lastVisited[11] := $START.cc.lastVisited[11];
  cc.lastVisited[10] := $START.cc.lastVisited[10];
  cc.lastVisited[9] := $START.cc.lastVisited[9];
  cc.lastVisited[8] := $START.cc.lastVisited[8];
  cc.lastVisited[7] := $START.cc.lastVisited[7];
  cc.lastVisited[6] := $START.cc.lastVisited[6];
  cc.lastVisited[5] := $START.cc.lastVisited[5];
  cc.lastVisited[4] := $START.cc.lastVisited[4];
  cc.lastVisited[3] := $START.cc.lastVisited[3];
  cc.lastVisited[2] := $START.cc.lastVisited[2];
  cc.lastVisited[1] := $START.cc.lastVisited[1];
  cc.hasBeenVisited[16] := $START.cc.hasBeenVisited[16];
  cc.hasBeenVisited[15] := $START.cc.hasBeenVisited[15];
  cc.hasBeenVisited[14] := $START.cc.hasBeenVisited[14];
  cc.hasBeenVisited[13] := $START.cc.hasBeenVisited[13];
  cc.hasBeenVisited[12] := $START.cc.hasBeenVisited[12];
  cc.hasBeenVisited[11] := $START.cc.hasBeenVisited[11];
  cc.hasBeenVisited[10] := $START.cc.hasBeenVisited[10];
  cc.hasBeenVisited[9] := $START.cc.hasBeenVisited[9];
  cc.hasBeenVisited[8] := $START.cc.hasBeenVisited[8];
  cc.hasBeenVisited[7] := $START.cc.hasBeenVisited[7];
  cc.hasBeenVisited[6] := $START.cc.hasBeenVisited[6];
  cc.hasBeenVisited[5] := $START.cc.hasBeenVisited[5];
  cc.hasBeenVisited[4] := $START.cc.hasBeenVisited[4];
  cc.hasBeenVisited[3] := $START.cc.hasBeenVisited[3];
  cc.hasBeenVisited[2] := $START.cc.hasBeenVisited[2];
  cc.hasBeenVisited[1] := $START.cc.hasBeenVisited[1];
  cc.setz[4] := $START.cc.setz[4];
  cc.setz[3] := $START.cc.setz[3];
  cc.setz[2] := $START.cc.setz[2];
  cc.setz[1] := $START.cc.setz[1];
  cc.sety[4] := $START.cc.sety[4];
  cc.sety[3] := $START.cc.sety[3];
  cc.sety[2] := $START.cc.sety[2];
  cc.sety[1] := $START.cc.sety[1];
  cc.setx[4] := $START.cc.setx[4];
  cc.setx[3] := $START.cc.setx[3];
  cc.setx[2] := $START.cc.setx[2];
  cc.setx[1] := $START.cc.setx[1];
  cc.aliveDrones := $START.cc.aliveDrones;
  cc.z := $START.cc.z;
  cc.err := $START.cc.err;
  $whenCondition27 := $START.$whenCondition27;
  $whenCondition27 := false;
  cc.err := 0.0;
  cc.z := 0;
  cc.aliveDrones := 4;
  cc.setx := {cc.p.flyZone[1], cc.p.flyZone[1], cc.p.flyZone[1], cc.p.flyZone[1]};
  cc.sety := {cc.p.flyZone[2], cc.p.flyZone[2], cc.p.flyZone[2], cc.p.flyZone[2]};
  cc.setz := {cc.p.flyZone[3], cc.p.flyZone[3], cc.p.flyZone[3], cc.p.flyZone[3]};
  cc.hasBeenVisited := {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false};
  cc.lastVisited := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
  cc.isBusy := {false, false, false, false};
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
  cc.battery := {0.0, 0.0, 0.0, 0.0};
  cc.isRecharging := {false, false, false, false};
  cc.rechargingDrones := 0;
  cc.isDead := {false, false, false, false};
  cc.lastAnswered := {0.0, 0.0, 0.0, 0.0};
  cc.setpointChangeTime := {0.0, 0.0, 0.0, 0.0};
  cc.readsignal := {false, false, false, false};
  cc.writesignal := {false, false, false, false};
  for i in 1:4 loop
    for j in 1:5 loop
      cc.msg_to_drone[i,j] := 0.0;
    end for;
  end for;
  for i in 1:4 loop
    for j in 1:3 loop
      cc.pos[i,j] := 0.0;
    end for;
  end for;
  cc.fifox := {0, 0, 0, 0};
  cc.state := 0;
  cc.comm_done := {true, true, true, true};
  cc.setpointChanged := {false, false, false, false};
  cc.endSimulation := false;
  setup_db();
  setup_areas(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 4, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 16, cc.p.areas));
  setup_drones(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 4, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 16, cc.p.areas));
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
  (data->localData[0]->booleanVars[55]/* cc.endSimulation DISCRETE */)  = (data->modelData->booleanVarsData[55]/* cc.endSimulation DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[91]/* cc.setpointChanged[4] DISCRETE */)  = (data->modelData->booleanVarsData[91]/* cc.setpointChanged[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[90]/* cc.setpointChanged[3] DISCRETE */)  = (data->modelData->booleanVarsData[90]/* cc.setpointChanged[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[89]/* cc.setpointChanged[2] DISCRETE */)  = (data->modelData->booleanVarsData[89]/* cc.setpointChanged[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[88]/* cc.setpointChanged[1] DISCRETE */)  = (data->modelData->booleanVarsData[88]/* cc.setpointChanged[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[50]/* cc.comm_done[4] DISCRETE */)  = (data->modelData->booleanVarsData[50]/* cc.comm_done[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[49]/* cc.comm_done[3] DISCRETE */)  = (data->modelData->booleanVarsData[49]/* cc.comm_done[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[48]/* cc.comm_done[2] DISCRETE */)  = (data->modelData->booleanVarsData[48]/* cc.comm_done[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[47]/* cc.comm_done[1] DISCRETE */)  = (data->modelData->booleanVarsData[47]/* cc.comm_done[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[22]/* cc.state DISCRETE */)  = (data->modelData->integerVarsData[22]/* cc.state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[4]/* cc.fifox[4] DISCRETE */)  = (data->modelData->integerVarsData[4]/* cc.fifox[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[3]/* cc.fifox[3] DISCRETE */)  = (data->modelData->integerVarsData[3]/* cc.fifox[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[2]/* cc.fifox[2] DISCRETE */)  = (data->modelData->integerVarsData[2]/* cc.fifox[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)  = (data->modelData->integerVarsData[1]/* cc.fifox[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[214]/* cc.pos[4,3] DISCRETE */)  = (data->modelData->realVarsData[214]/* cc.pos[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[213]/* cc.pos[4,2] DISCRETE */)  = (data->modelData->realVarsData[213]/* cc.pos[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[212]/* cc.pos[4,1] DISCRETE */)  = (data->modelData->realVarsData[212]/* cc.pos[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[211]/* cc.pos[3,3] DISCRETE */)  = (data->modelData->realVarsData[211]/* cc.pos[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[210]/* cc.pos[3,2] DISCRETE */)  = (data->modelData->realVarsData[210]/* cc.pos[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[209]/* cc.pos[3,1] DISCRETE */)  = (data->modelData->realVarsData[209]/* cc.pos[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[208]/* cc.pos[2,3] DISCRETE */)  = (data->modelData->realVarsData[208]/* cc.pos[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[207]/* cc.pos[2,2] DISCRETE */)  = (data->modelData->realVarsData[207]/* cc.pos[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[206]/* cc.pos[2,1] DISCRETE */)  = (data->modelData->realVarsData[206]/* cc.pos[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[205]/* cc.pos[1,3] DISCRETE */)  = (data->modelData->realVarsData[205]/* cc.pos[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[204]/* cc.pos[1,2] DISCRETE */)  = (data->modelData->realVarsData[204]/* cc.pos[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[203]/* cc.pos[1,1] DISCRETE */)  = (data->modelData->realVarsData[203]/* cc.pos[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[202]/* cc.msg_to_drone[4,5] DISCRETE */)  = (data->modelData->realVarsData[202]/* cc.msg_to_drone[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[201]/* cc.msg_to_drone[4,4] DISCRETE */)  = (data->modelData->realVarsData[201]/* cc.msg_to_drone[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[200]/* cc.msg_to_drone[4,3] DISCRETE */)  = (data->modelData->realVarsData[200]/* cc.msg_to_drone[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[199]/* cc.msg_to_drone[4,2] DISCRETE */)  = (data->modelData->realVarsData[199]/* cc.msg_to_drone[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[198]/* cc.msg_to_drone[4,1] DISCRETE */)  = (data->modelData->realVarsData[198]/* cc.msg_to_drone[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[197]/* cc.msg_to_drone[3,5] DISCRETE */)  = (data->modelData->realVarsData[197]/* cc.msg_to_drone[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[196]/* cc.msg_to_drone[3,4] DISCRETE */)  = (data->modelData->realVarsData[196]/* cc.msg_to_drone[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[195]/* cc.msg_to_drone[3,3] DISCRETE */)  = (data->modelData->realVarsData[195]/* cc.msg_to_drone[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[194]/* cc.msg_to_drone[3,2] DISCRETE */)  = (data->modelData->realVarsData[194]/* cc.msg_to_drone[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[193]/* cc.msg_to_drone[3,1] DISCRETE */)  = (data->modelData->realVarsData[193]/* cc.msg_to_drone[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[192]/* cc.msg_to_drone[2,5] DISCRETE */)  = (data->modelData->realVarsData[192]/* cc.msg_to_drone[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[191]/* cc.msg_to_drone[2,4] DISCRETE */)  = (data->modelData->realVarsData[191]/* cc.msg_to_drone[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[190]/* cc.msg_to_drone[2,3] DISCRETE */)  = (data->modelData->realVarsData[190]/* cc.msg_to_drone[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[189]/* cc.msg_to_drone[2,2] DISCRETE */)  = (data->modelData->realVarsData[189]/* cc.msg_to_drone[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[188]/* cc.msg_to_drone[2,1] DISCRETE */)  = (data->modelData->realVarsData[188]/* cc.msg_to_drone[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[187]/* cc.msg_to_drone[1,5] DISCRETE */)  = (data->modelData->realVarsData[187]/* cc.msg_to_drone[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[186]/* cc.msg_to_drone[1,4] DISCRETE */)  = (data->modelData->realVarsData[186]/* cc.msg_to_drone[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[185]/* cc.msg_to_drone[1,3] DISCRETE */)  = (data->modelData->realVarsData[185]/* cc.msg_to_drone[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[184]/* cc.msg_to_drone[1,2] DISCRETE */)  = (data->modelData->realVarsData[184]/* cc.msg_to_drone[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[183]/* cc.msg_to_drone[1,1] DISCRETE */)  = (data->modelData->realVarsData[183]/* cc.msg_to_drone[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[99]/* cc.writesignal[4] DISCRETE */)  = (data->modelData->booleanVarsData[99]/* cc.writesignal[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[98]/* cc.writesignal[3] DISCRETE */)  = (data->modelData->booleanVarsData[98]/* cc.writesignal[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[97]/* cc.writesignal[2] DISCRETE */)  = (data->modelData->booleanVarsData[97]/* cc.writesignal[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[96]/* cc.writesignal[1] DISCRETE */)  = (data->modelData->booleanVarsData[96]/* cc.writesignal[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[87]/* cc.readsignal[4] DISCRETE */)  = (data->modelData->booleanVarsData[87]/* cc.readsignal[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[86]/* cc.readsignal[3] DISCRETE */)  = (data->modelData->booleanVarsData[86]/* cc.readsignal[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[85]/* cc.readsignal[2] DISCRETE */)  = (data->modelData->booleanVarsData[85]/* cc.readsignal[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[84]/* cc.readsignal[1] DISCRETE */)  = (data->modelData->booleanVarsData[84]/* cc.readsignal[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[218]/* cc.setpointChangeTime[4] DISCRETE */)  = (data->modelData->realVarsData[218]/* cc.setpointChangeTime[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[217]/* cc.setpointChangeTime[3] DISCRETE */)  = (data->modelData->realVarsData[217]/* cc.setpointChangeTime[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[216]/* cc.setpointChangeTime[2] DISCRETE */)  = (data->modelData->realVarsData[216]/* cc.setpointChangeTime[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[215]/* cc.setpointChangeTime[1] DISCRETE */)  = (data->modelData->realVarsData[215]/* cc.setpointChangeTime[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[164]/* cc.lastAnswered[4] DISCRETE */)  = (data->modelData->realVarsData[164]/* cc.lastAnswered[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[163]/* cc.lastAnswered[3] DISCRETE */)  = (data->modelData->realVarsData[163]/* cc.lastAnswered[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[162]/* cc.lastAnswered[2] DISCRETE */)  = (data->modelData->realVarsData[162]/* cc.lastAnswered[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[161]/* cc.lastAnswered[1] DISCRETE */)  = (data->modelData->realVarsData[161]/* cc.lastAnswered[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[79]/* cc.isDead[4] DISCRETE */)  = (data->modelData->booleanVarsData[79]/* cc.isDead[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[78]/* cc.isDead[3] DISCRETE */)  = (data->modelData->booleanVarsData[78]/* cc.isDead[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[77]/* cc.isDead[2] DISCRETE */)  = (data->modelData->booleanVarsData[77]/* cc.isDead[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[76]/* cc.isDead[1] DISCRETE */)  = (data->modelData->booleanVarsData[76]/* cc.isDead[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[21]/* cc.rechargingDrones DISCRETE */)  = (data->modelData->integerVarsData[21]/* cc.rechargingDrones DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[83]/* cc.isRecharging[4] DISCRETE */)  = (data->modelData->booleanVarsData[83]/* cc.isRecharging[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[82]/* cc.isRecharging[3] DISCRETE */)  = (data->modelData->booleanVarsData[82]/* cc.isRecharging[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[81]/* cc.isRecharging[2] DISCRETE */)  = (data->modelData->booleanVarsData[81]/* cc.isRecharging[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[80]/* cc.isRecharging[1] DISCRETE */)  = (data->modelData->booleanVarsData[80]/* cc.isRecharging[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[157]/* cc.battery[4] DISCRETE */)  = (data->modelData->realVarsData[157]/* cc.battery[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[156]/* cc.battery[3] DISCRETE */)  = (data->modelData->realVarsData[156]/* cc.battery[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[155]/* cc.battery[2] DISCRETE */)  = (data->modelData->realVarsData[155]/* cc.battery[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[154]/* cc.battery[1] DISCRETE */)  = (data->modelData->realVarsData[154]/* cc.battery[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[234]/* cc.tmp_time DISCRETE */)  = (data->modelData->realVarsData[234]/* cc.tmp_time DISCRETE */).attribute .start;

  (data->localData[0]->realVars[181]/* cc.max_time DISCRETE */)  = (data->modelData->realVarsData[181]/* cc.max_time DISCRETE */).attribute .start;

  (data->localData[0]->realVars[153]/* cc.area_z DISCRETE */)  = (data->modelData->realVarsData[153]/* cc.area_z DISCRETE */).attribute .start;

  (data->localData[0]->realVars[152]/* cc.area_y DISCRETE */)  = (data->modelData->realVarsData[152]/* cc.area_y DISCRETE */).attribute .start;

  (data->localData[0]->realVars[151]/* cc.area_x DISCRETE */)  = (data->modelData->realVarsData[151]/* cc.area_x DISCRETE */).attribute .start;

  (data->localData[0]->realVars[159]/* cc.choice_value_2 DISCRETE */)  = (data->modelData->realVarsData[159]/* cc.choice_value_2 DISCRETE */).attribute .start;

  (data->localData[0]->realVars[158]/* cc.choice_value_1 DISCRETE */)  = (data->modelData->realVarsData[158]/* cc.choice_value_1 DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[24]/* cc.tmp_area_2 DISCRETE */)  = (data->modelData->integerVarsData[24]/* cc.tmp_area_2 DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[23]/* cc.tmp_area_1 DISCRETE */)  = (data->modelData->integerVarsData[23]/* cc.tmp_area_1 DISCRETE */).attribute .start;

  (data->localData[0]->realVars[233]/* cc.tmp_distance DISCRETE */)  = (data->modelData->realVarsData[233]/* cc.tmp_distance DISCRETE */).attribute .start;

  (data->localData[0]->realVars[182]/* cc.min_distance DISCRETE */)  = (data->modelData->realVarsData[182]/* cc.min_distance DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[20]/* cc.hasBeenSelected[16] DISCRETE */)  = (data->modelData->integerVarsData[20]/* cc.hasBeenSelected[16] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[19]/* cc.hasBeenSelected[15] DISCRETE */)  = (data->modelData->integerVarsData[19]/* cc.hasBeenSelected[15] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[18]/* cc.hasBeenSelected[14] DISCRETE */)  = (data->modelData->integerVarsData[18]/* cc.hasBeenSelected[14] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[17]/* cc.hasBeenSelected[13] DISCRETE */)  = (data->modelData->integerVarsData[17]/* cc.hasBeenSelected[13] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[16]/* cc.hasBeenSelected[12] DISCRETE */)  = (data->modelData->integerVarsData[16]/* cc.hasBeenSelected[12] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[15]/* cc.hasBeenSelected[11] DISCRETE */)  = (data->modelData->integerVarsData[15]/* cc.hasBeenSelected[11] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[14]/* cc.hasBeenSelected[10] DISCRETE */)  = (data->modelData->integerVarsData[14]/* cc.hasBeenSelected[10] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[13]/* cc.hasBeenSelected[9] DISCRETE */)  = (data->modelData->integerVarsData[13]/* cc.hasBeenSelected[9] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[12]/* cc.hasBeenSelected[8] DISCRETE */)  = (data->modelData->integerVarsData[12]/* cc.hasBeenSelected[8] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[11]/* cc.hasBeenSelected[7] DISCRETE */)  = (data->modelData->integerVarsData[11]/* cc.hasBeenSelected[7] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[10]/* cc.hasBeenSelected[6] DISCRETE */)  = (data->modelData->integerVarsData[10]/* cc.hasBeenSelected[6] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[9]/* cc.hasBeenSelected[5] DISCRETE */)  = (data->modelData->integerVarsData[9]/* cc.hasBeenSelected[5] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[8]/* cc.hasBeenSelected[4] DISCRETE */)  = (data->modelData->integerVarsData[8]/* cc.hasBeenSelected[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[7]/* cc.hasBeenSelected[3] DISCRETE */)  = (data->modelData->integerVarsData[7]/* cc.hasBeenSelected[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[6]/* cc.hasBeenSelected[2] DISCRETE */)  = (data->modelData->integerVarsData[6]/* cc.hasBeenSelected[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[5]/* cc.hasBeenSelected[1] DISCRETE */)  = (data->modelData->integerVarsData[5]/* cc.hasBeenSelected[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[231]/* cc.time_passed_since_last_loop DISCRETE */)  = (data->modelData->realVarsData[231]/* cc.time_passed_since_last_loop DISCRETE */).attribute .start;

  (data->localData[0]->realVars[232]/* cc.time_span DISCRETE */)  = (data->modelData->realVarsData[232]/* cc.time_span DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[75]/* cc.isBusy[4] DISCRETE */)  = (data->modelData->booleanVarsData[75]/* cc.isBusy[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[74]/* cc.isBusy[3] DISCRETE */)  = (data->modelData->booleanVarsData[74]/* cc.isBusy[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[73]/* cc.isBusy[2] DISCRETE */)  = (data->modelData->booleanVarsData[73]/* cc.isBusy[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[72]/* cc.isBusy[1] DISCRETE */)  = (data->modelData->booleanVarsData[72]/* cc.isBusy[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[180]/* cc.lastVisited[16] DISCRETE */)  = (data->modelData->realVarsData[180]/* cc.lastVisited[16] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[179]/* cc.lastVisited[15] DISCRETE */)  = (data->modelData->realVarsData[179]/* cc.lastVisited[15] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[178]/* cc.lastVisited[14] DISCRETE */)  = (data->modelData->realVarsData[178]/* cc.lastVisited[14] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[177]/* cc.lastVisited[13] DISCRETE */)  = (data->modelData->realVarsData[177]/* cc.lastVisited[13] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[176]/* cc.lastVisited[12] DISCRETE */)  = (data->modelData->realVarsData[176]/* cc.lastVisited[12] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[175]/* cc.lastVisited[11] DISCRETE */)  = (data->modelData->realVarsData[175]/* cc.lastVisited[11] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[174]/* cc.lastVisited[10] DISCRETE */)  = (data->modelData->realVarsData[174]/* cc.lastVisited[10] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[173]/* cc.lastVisited[9] DISCRETE */)  = (data->modelData->realVarsData[173]/* cc.lastVisited[9] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[172]/* cc.lastVisited[8] DISCRETE */)  = (data->modelData->realVarsData[172]/* cc.lastVisited[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[171]/* cc.lastVisited[7] DISCRETE */)  = (data->modelData->realVarsData[171]/* cc.lastVisited[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[170]/* cc.lastVisited[6] DISCRETE */)  = (data->modelData->realVarsData[170]/* cc.lastVisited[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[169]/* cc.lastVisited[5] DISCRETE */)  = (data->modelData->realVarsData[169]/* cc.lastVisited[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[168]/* cc.lastVisited[4] DISCRETE */)  = (data->modelData->realVarsData[168]/* cc.lastVisited[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[167]/* cc.lastVisited[3] DISCRETE */)  = (data->modelData->realVarsData[167]/* cc.lastVisited[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[166]/* cc.lastVisited[2] DISCRETE */)  = (data->modelData->realVarsData[166]/* cc.lastVisited[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[165]/* cc.lastVisited[1] DISCRETE */)  = (data->modelData->realVarsData[165]/* cc.lastVisited[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[71]/* cc.hasBeenVisited[16] DISCRETE */)  = (data->modelData->booleanVarsData[71]/* cc.hasBeenVisited[16] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[70]/* cc.hasBeenVisited[15] DISCRETE */)  = (data->modelData->booleanVarsData[70]/* cc.hasBeenVisited[15] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[69]/* cc.hasBeenVisited[14] DISCRETE */)  = (data->modelData->booleanVarsData[69]/* cc.hasBeenVisited[14] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[68]/* cc.hasBeenVisited[13] DISCRETE */)  = (data->modelData->booleanVarsData[68]/* cc.hasBeenVisited[13] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[67]/* cc.hasBeenVisited[12] DISCRETE */)  = (data->modelData->booleanVarsData[67]/* cc.hasBeenVisited[12] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[66]/* cc.hasBeenVisited[11] DISCRETE */)  = (data->modelData->booleanVarsData[66]/* cc.hasBeenVisited[11] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[65]/* cc.hasBeenVisited[10] DISCRETE */)  = (data->modelData->booleanVarsData[65]/* cc.hasBeenVisited[10] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[64]/* cc.hasBeenVisited[9] DISCRETE */)  = (data->modelData->booleanVarsData[64]/* cc.hasBeenVisited[9] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[63]/* cc.hasBeenVisited[8] DISCRETE */)  = (data->modelData->booleanVarsData[63]/* cc.hasBeenVisited[8] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[62]/* cc.hasBeenVisited[7] DISCRETE */)  = (data->modelData->booleanVarsData[62]/* cc.hasBeenVisited[7] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[61]/* cc.hasBeenVisited[6] DISCRETE */)  = (data->modelData->booleanVarsData[61]/* cc.hasBeenVisited[6] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[60]/* cc.hasBeenVisited[5] DISCRETE */)  = (data->modelData->booleanVarsData[60]/* cc.hasBeenVisited[5] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[59]/* cc.hasBeenVisited[4] DISCRETE */)  = (data->modelData->booleanVarsData[59]/* cc.hasBeenVisited[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[58]/* cc.hasBeenVisited[3] DISCRETE */)  = (data->modelData->booleanVarsData[58]/* cc.hasBeenVisited[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[57]/* cc.hasBeenVisited[2] DISCRETE */)  = (data->modelData->booleanVarsData[57]/* cc.hasBeenVisited[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[56]/* cc.hasBeenVisited[1] DISCRETE */)  = (data->modelData->booleanVarsData[56]/* cc.hasBeenVisited[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[230]/* cc.setz[4] DISCRETE */)  = (data->modelData->realVarsData[230]/* cc.setz[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[229]/* cc.setz[3] DISCRETE */)  = (data->modelData->realVarsData[229]/* cc.setz[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[228]/* cc.setz[2] DISCRETE */)  = (data->modelData->realVarsData[228]/* cc.setz[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[227]/* cc.setz[1] DISCRETE */)  = (data->modelData->realVarsData[227]/* cc.setz[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[226]/* cc.sety[4] DISCRETE */)  = (data->modelData->realVarsData[226]/* cc.sety[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[225]/* cc.sety[3] DISCRETE */)  = (data->modelData->realVarsData[225]/* cc.sety[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[224]/* cc.sety[2] DISCRETE */)  = (data->modelData->realVarsData[224]/* cc.sety[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[223]/* cc.sety[1] DISCRETE */)  = (data->modelData->realVarsData[223]/* cc.sety[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[222]/* cc.setx[4] DISCRETE */)  = (data->modelData->realVarsData[222]/* cc.setx[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[221]/* cc.setx[3] DISCRETE */)  = (data->modelData->realVarsData[221]/* cc.setx[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[220]/* cc.setx[2] DISCRETE */)  = (data->modelData->realVarsData[220]/* cc.setx[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[219]/* cc.setx[1] DISCRETE */)  = (data->modelData->realVarsData[219]/* cc.setx[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = (data->modelData->integerVarsData[0]/* cc.aliveDrones DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[25]/* cc.z DISCRETE */)  = (data->modelData->integerVarsData[25]/* cc.z DISCRETE */).attribute .start;

  (data->localData[0]->realVars[160]/* cc.err DISCRETE */)  = (data->modelData->realVarsData[160]/* cc.err DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[19]/* $whenCondition27 DISCRETE */)  = (data->modelData->booleanVarsData[19]/* $whenCondition27 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[19]/* $whenCondition27 DISCRETE */)  = 0;

  (data->localData[0]->realVars[160]/* cc.err DISCRETE */)  = 0.0;

  (data->localData[0]->integerVars[25]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = ((modelica_integer) 4);

  array_alloc_scalar_real_array(&tmp4, 4, (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) );
  real_array_create(&tmp5, ((modelica_real*)&((&(data->localData[0]->realVars[219]/* cc.setx[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  real_array_copy_data(tmp4, tmp5);

  array_alloc_scalar_real_array(&tmp6, 4, (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) );
  real_array_create(&tmp7, ((modelica_real*)&((&(data->localData[0]->realVars[223]/* cc.sety[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  real_array_copy_data(tmp6, tmp7);

  array_alloc_scalar_real_array(&tmp8, 4, (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) );
  real_array_create(&tmp9, ((modelica_real*)&((&(data->localData[0]->realVars[227]/* cc.setz[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  real_array_copy_data(tmp8, tmp9);

  array_alloc_scalar_boolean_array(&tmp10, 16, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp11, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[56]/* cc.hasBeenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  boolean_array_copy_data(tmp10, tmp11);

  array_alloc_scalar_real_array(&tmp12, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp13, ((modelica_real*)&((&(data->localData[0]->realVars[165]/* cc.lastVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  real_array_copy_data(tmp12, tmp13);

  array_alloc_scalar_boolean_array(&tmp14, 4, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp15, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[72]/* cc.isBusy[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  boolean_array_copy_data(tmp14, tmp15);

  (data->localData[0]->realVars[232]/* cc.time_span DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[231]/* cc.time_passed_since_last_loop DISCRETE */)  = 0.0;

  array_alloc_scalar_integer_array(&tmp16, 16, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp17, ((modelica_integer*)&((&(data->localData[0]->integerVars[5]/* cc.hasBeenSelected[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  integer_array_copy_data(tmp16, tmp17);

  real_array_create(&tmp18, ((modelica_real*)&((&data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
  tmp19 = max_real_array(tmp18);
  (data->localData[0]->realVars[182]/* cc.min_distance DISCRETE */)  = tmp19;

  (data->localData[0]->realVars[233]/* cc.tmp_distance DISCRETE */)  = 0.0;

  (data->localData[0]->integerVars[23]/* cc.tmp_area_1 DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[24]/* cc.tmp_area_2 DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->realVars[158]/* cc.choice_value_1 DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[159]/* cc.choice_value_2 DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[151]/* cc.area_x DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[152]/* cc.area_y DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[153]/* cc.area_z DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[181]/* cc.max_time DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[234]/* cc.tmp_time DISCRETE */)  = 0.0;

  array_alloc_scalar_real_array(&tmp20, 4, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp21, ((modelica_real*)&((&(data->localData[0]->realVars[154]/* cc.battery[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  real_array_copy_data(tmp20, tmp21);

  array_alloc_scalar_boolean_array(&tmp22, 4, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp23, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[80]/* cc.isRecharging[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  boolean_array_copy_data(tmp22, tmp23);

  (data->localData[0]->integerVars[21]/* cc.rechargingDrones DISCRETE */)  = ((modelica_integer) 0);

  array_alloc_scalar_boolean_array(&tmp24, 4, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp25, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[76]/* cc.isDead[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  boolean_array_copy_data(tmp24, tmp25);

  array_alloc_scalar_real_array(&tmp26, 4, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp27, ((modelica_real*)&((&(data->localData[0]->realVars[161]/* cc.lastAnswered[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  real_array_copy_data(tmp26, tmp27);

  array_alloc_scalar_real_array(&tmp28, 4, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp29, ((modelica_real*)&((&(data->localData[0]->realVars[215]/* cc.setpointChangeTime[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  real_array_copy_data(tmp28, tmp29);

  array_alloc_scalar_boolean_array(&tmp30, 4, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp31, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[84]/* cc.readsignal[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  boolean_array_copy_data(tmp30, tmp31);

  array_alloc_scalar_boolean_array(&tmp32, 4, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp33, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[96]/* cc.writesignal[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  boolean_array_copy_data(tmp32, tmp33);

  tmp37 = ((modelica_integer) 1); tmp38 = 1; tmp39 = ((modelica_integer) 4);
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
          (&(data->localData[0]->realVars[183]/* cc.msg_to_drone[1,1] DISCRETE */) )[(i - 1) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  tmp43 = ((modelica_integer) 1); tmp44 = 1; tmp45 = ((modelica_integer) 4);
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
          (&(data->localData[0]->realVars[203]/* cc.pos[1,1] DISCRETE */) )[(i - 1) * 3 + (j-1)] = 0.0;
        }
      }
    }
  }

  array_alloc_scalar_integer_array(&tmp46, 4, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp47, ((modelica_integer*)&((&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  integer_array_copy_data(tmp46, tmp47);

  (data->localData[0]->integerVars[22]/* cc.state DISCRETE */)  = ((modelica_integer) 0);

  array_alloc_scalar_boolean_array(&tmp48, 4, (modelica_boolean)1, (modelica_boolean)1, (modelica_boolean)1, (modelica_boolean)1);
  boolean_array_create(&tmp49, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[47]/* cc.comm_done[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  boolean_array_copy_data(tmp48, tmp49);

  array_alloc_scalar_boolean_array(&tmp50, 4, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp51, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[88]/* cc.setpointChanged[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
  boolean_array_copy_data(tmp50, tmp51);

  (data->localData[0]->booleanVars[55]/* cc.endSimulation DISCRETE */)  = 0;

  omc_setup__db(threadData);

  real_array_create(&tmp53, ((modelica_real*)&((&data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
  real_array_create(&tmp54, ((modelica_real*)&((&data->simulationInfo->realParameter[115]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
  real_array_create(&tmp55, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
  tmp52._stop_simulation = (data->simulationInfo->realParameter[133]/* cc.p.stop_simulation PARAM */) ;
  tmp52._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
  tmp52._msg_len = ((modelica_integer) 5);
  tmp52._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
  tmp52._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
  tmp52._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
  tmp52._monitor_start = (data->simulationInfo->realParameter[126]/* cc.p.monitor_start PARAM */) ;
  tmp52._nDrones = ((modelica_integer) 4);
  tmp52._cc_choice = (data->simulationInfo->realParameter[108]/* cc.p.cc_choice PARAM */) ;
  tmp52._p_worst = (data->simulationInfo->realParameter[129]/* cc.p.p_worst PARAM */) ;
  tmp52._p_recharge = (data->simulationInfo->realParameter[128]/* cc.p.p_recharge PARAM */) ;
  tmp52._comm_timeout = (data->simulationInfo->realParameter[110]/* cc.p.comm_timeout PARAM */) ;
  tmp52._p_comm_error = (data->simulationInfo->realParameter[127]/* cc.p.p_comm_error PARAM */) ;
  tmp52._arrival_timeout = (data->simulationInfo->realParameter[105]/* cc.p.arrival_timeout PARAM */) ;
  tmp52._dDistance = (data->simulationInfo->realParameter[111]/* cc.p.dDistance PARAM */) ;
  tmp52._arrivalThreshold = (data->simulationInfo->realParameter[104]/* cc.p.arrivalThreshold PARAM */) ;
  tmp52._flyZone = tmp53;
  tmp52._docking_bay = tmp54;
  tmp52._m = (data->simulationInfo->realParameter[122]/* cc.p.m PARAM */) ;
  tmp52._maxSpeed = (data->simulationInfo->realParameter[124]/* cc.p.maxSpeed PARAM */) ;
  tmp52._horizontalODD = (data->simulationInfo->realParameter[121]/* cc.p.horizontalODD PARAM */) ;
  tmp52._verticalODD = (data->simulationInfo->realParameter[135]/* cc.p.verticalODD PARAM */) ;
  tmp52._maxAngle = (data->simulationInfo->realParameter[123]/* cc.p.maxAngle PARAM */) ;
  tmp52._minDistanceFromObs = (data->simulationInfo->realParameter[125]/* cc.p.minDistanceFromObs PARAM */) ;
  tmp52._dangerRadius = (data->simulationInfo->realParameter[112]/* cc.p.dangerRadius PARAM */) ;
  tmp52._unita = (data->simulationInfo->realParameter[134]/* cc.p.unita PARAM */) ;
  tmp52._capacity = (data->simulationInfo->realParameter[107]/* cc.p.capacity PARAM */) ;
  tmp52._batteryDischarge = (data->simulationInfo->realParameter[106]/* cc.p.batteryDischarge PARAM */) ;
  tmp52._commDischarge = (data->simulationInfo->realParameter[109]/* cc.p.commDischarge PARAM */) ;
  tmp52._rechargeRate = (data->simulationInfo->realParameter[130]/* cc.p.rechargeRate PARAM */) ;
  tmp52._dangerousBatteryPercentage = (data->simulationInfo->realParameter[114]/* cc.p.dangerousBatteryPercentage PARAM */) ;
  tmp52._dangerousBatteryLevel = (data->simulationInfo->realParameter[113]/* cc.p.dangerousBatteryLevel PARAM */) ;
  tmp52._rechargedPercentage = (data->simulationInfo->realParameter[131]/* cc.p.rechargedPercentage PARAM */) ;
  tmp52._rechargedThreshold = (data->simulationInfo->realParameter[132]/* cc.p.rechargedThreshold PARAM */) ;
  tmp52._nAreas = ((modelica_integer) 16);
  tmp52._areas = tmp55;
  omc_setup__areas(threadData, tmp52);

  real_array_create(&tmp57, ((modelica_real*)&((&data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
  real_array_create(&tmp58, ((modelica_real*)&((&data->simulationInfo->realParameter[115]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
  real_array_create(&tmp59, ((modelica_real*)&((&data->simulationInfo->realParameter[8]/* cc.p.areas[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
  tmp56._stop_simulation = (data->simulationInfo->realParameter[133]/* cc.p.stop_simulation PARAM */) ;
  tmp56._fifo_len = (data->simulationInfo->integerParameter[0]/* cc.p.fifo_len PARAM */) ;
  tmp56._msg_len = ((modelica_integer) 5);
  tmp56._Tdrone = (data->simulationInfo->realParameter[6]/* cc.p.Tdrone PARAM */) ;
  tmp56._Tcc = (data->simulationInfo->realParameter[5]/* cc.p.Tcc PARAM */) ;
  tmp56._Tm = (data->simulationInfo->realParameter[7]/* cc.p.Tm PARAM */) ;
  tmp56._monitor_start = (data->simulationInfo->realParameter[126]/* cc.p.monitor_start PARAM */) ;
  tmp56._nDrones = ((modelica_integer) 4);
  tmp56._cc_choice = (data->simulationInfo->realParameter[108]/* cc.p.cc_choice PARAM */) ;
  tmp56._p_worst = (data->simulationInfo->realParameter[129]/* cc.p.p_worst PARAM */) ;
  tmp56._p_recharge = (data->simulationInfo->realParameter[128]/* cc.p.p_recharge PARAM */) ;
  tmp56._comm_timeout = (data->simulationInfo->realParameter[110]/* cc.p.comm_timeout PARAM */) ;
  tmp56._p_comm_error = (data->simulationInfo->realParameter[127]/* cc.p.p_comm_error PARAM */) ;
  tmp56._arrival_timeout = (data->simulationInfo->realParameter[105]/* cc.p.arrival_timeout PARAM */) ;
  tmp56._dDistance = (data->simulationInfo->realParameter[111]/* cc.p.dDistance PARAM */) ;
  tmp56._arrivalThreshold = (data->simulationInfo->realParameter[104]/* cc.p.arrivalThreshold PARAM */) ;
  tmp56._flyZone = tmp57;
  tmp56._docking_bay = tmp58;
  tmp56._m = (data->simulationInfo->realParameter[122]/* cc.p.m PARAM */) ;
  tmp56._maxSpeed = (data->simulationInfo->realParameter[124]/* cc.p.maxSpeed PARAM */) ;
  tmp56._horizontalODD = (data->simulationInfo->realParameter[121]/* cc.p.horizontalODD PARAM */) ;
  tmp56._verticalODD = (data->simulationInfo->realParameter[135]/* cc.p.verticalODD PARAM */) ;
  tmp56._maxAngle = (data->simulationInfo->realParameter[123]/* cc.p.maxAngle PARAM */) ;
  tmp56._minDistanceFromObs = (data->simulationInfo->realParameter[125]/* cc.p.minDistanceFromObs PARAM */) ;
  tmp56._dangerRadius = (data->simulationInfo->realParameter[112]/* cc.p.dangerRadius PARAM */) ;
  tmp56._unita = (data->simulationInfo->realParameter[134]/* cc.p.unita PARAM */) ;
  tmp56._capacity = (data->simulationInfo->realParameter[107]/* cc.p.capacity PARAM */) ;
  tmp56._batteryDischarge = (data->simulationInfo->realParameter[106]/* cc.p.batteryDischarge PARAM */) ;
  tmp56._commDischarge = (data->simulationInfo->realParameter[109]/* cc.p.commDischarge PARAM */) ;
  tmp56._rechargeRate = (data->simulationInfo->realParameter[130]/* cc.p.rechargeRate PARAM */) ;
  tmp56._dangerousBatteryPercentage = (data->simulationInfo->realParameter[114]/* cc.p.dangerousBatteryPercentage PARAM */) ;
  tmp56._dangerousBatteryLevel = (data->simulationInfo->realParameter[113]/* cc.p.dangerousBatteryLevel PARAM */) ;
  tmp56._rechargedPercentage = (data->simulationInfo->realParameter[131]/* cc.p.rechargedPercentage PARAM */) ;
  tmp56._rechargedThreshold = (data->simulationInfo->realParameter[132]/* cc.p.rechargedThreshold PARAM */) ;
  tmp56._nAreas = ((modelica_integer) 16);
  tmp56._areas = tmp59;
  omc_setup__drones(threadData, tmp56);
  TRACE_POP
}

/*
equation index: 17
type: ALGORITHM

  m.old_avg_drones_all_areas := $START.m.old_avg_drones_all_areas;
  m.std_dev_all_areas := $START.m.std_dev_all_areas;
  m.std_dev[16] := $START.m.std_dev[16];
  m.std_dev[15] := $START.m.std_dev[15];
  m.std_dev[14] := $START.m.std_dev[14];
  m.std_dev[13] := $START.m.std_dev[13];
  m.std_dev[12] := $START.m.std_dev[12];
  m.std_dev[11] := $START.m.std_dev[11];
  m.std_dev[10] := $START.m.std_dev[10];
  m.std_dev[9] := $START.m.std_dev[9];
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
  m.avg_no_drone_time[16] := $START.m.avg_no_drone_time[16];
  m.avg_no_drone_time[15] := $START.m.avg_no_drone_time[15];
  m.avg_no_drone_time[14] := $START.m.avg_no_drone_time[14];
  m.avg_no_drone_time[13] := $START.m.avg_no_drone_time[13];
  m.avg_no_drone_time[12] := $START.m.avg_no_drone_time[12];
  m.avg_no_drone_time[11] := $START.m.avg_no_drone_time[11];
  m.avg_no_drone_time[10] := $START.m.avg_no_drone_time[10];
  m.avg_no_drone_time[9] := $START.m.avg_no_drone_time[9];
  m.avg_no_drone_time[8] := $START.m.avg_no_drone_time[8];
  m.avg_no_drone_time[7] := $START.m.avg_no_drone_time[7];
  m.avg_no_drone_time[6] := $START.m.avg_no_drone_time[6];
  m.avg_no_drone_time[5] := $START.m.avg_no_drone_time[5];
  m.avg_no_drone_time[4] := $START.m.avg_no_drone_time[4];
  m.avg_no_drone_time[3] := $START.m.avg_no_drone_time[3];
  m.avg_no_drone_time[2] := $START.m.avg_no_drone_time[2];
  m.avg_no_drone_time[1] := $START.m.avg_no_drone_time[1];
  m.no_drone_time[16] := $START.m.no_drone_time[16];
  m.no_drone_time[15] := $START.m.no_drone_time[15];
  m.no_drone_time[14] := $START.m.no_drone_time[14];
  m.no_drone_time[13] := $START.m.no_drone_time[13];
  m.no_drone_time[12] := $START.m.no_drone_time[12];
  m.no_drone_time[11] := $START.m.no_drone_time[11];
  m.no_drone_time[10] := $START.m.no_drone_time[10];
  m.no_drone_time[9] := $START.m.no_drone_time[9];
  m.no_drone_time[8] := $START.m.no_drone_time[8];
  m.no_drone_time[7] := $START.m.no_drone_time[7];
  m.no_drone_time[6] := $START.m.no_drone_time[6];
  m.no_drone_time[5] := $START.m.no_drone_time[5];
  m.no_drone_time[4] := $START.m.no_drone_time[4];
  m.no_drone_time[3] := $START.m.no_drone_time[3];
  m.no_drone_time[2] := $START.m.no_drone_time[2];
  m.no_drone_time[1] := $START.m.no_drone_time[1];
  m.p_drones_all_areas := $START.m.p_drones_all_areas;
  m.p_drones[16] := $START.m.p_drones[16];
  m.p_drones[15] := $START.m.p_drones[15];
  m.p_drones[14] := $START.m.p_drones[14];
  m.p_drones[13] := $START.m.p_drones[13];
  m.p_drones[12] := $START.m.p_drones[12];
  m.p_drones[11] := $START.m.p_drones[11];
  m.p_drones[10] := $START.m.p_drones[10];
  m.p_drones[9] := $START.m.p_drones[9];
  m.p_drones[8] := $START.m.p_drones[8];
  m.p_drones[7] := $START.m.p_drones[7];
  m.p_drones[6] := $START.m.p_drones[6];
  m.p_drones[5] := $START.m.p_drones[5];
  m.p_drones[4] := $START.m.p_drones[4];
  m.p_drones[3] := $START.m.p_drones[3];
  m.p_drones[2] := $START.m.p_drones[2];
  m.p_drones[1] := $START.m.p_drones[1];
  m.beenVisited[16] := $START.m.beenVisited[16];
  m.beenVisited[15] := $START.m.beenVisited[15];
  m.beenVisited[14] := $START.m.beenVisited[14];
  m.beenVisited[13] := $START.m.beenVisited[13];
  m.beenVisited[12] := $START.m.beenVisited[12];
  m.beenVisited[11] := $START.m.beenVisited[11];
  m.beenVisited[10] := $START.m.beenVisited[10];
  m.beenVisited[9] := $START.m.beenVisited[9];
  m.beenVisited[8] := $START.m.beenVisited[8];
  m.beenVisited[7] := $START.m.beenVisited[7];
  m.beenVisited[6] := $START.m.beenVisited[6];
  m.beenVisited[5] := $START.m.beenVisited[5];
  m.beenVisited[4] := $START.m.beenVisited[4];
  m.beenVisited[3] := $START.m.beenVisited[3];
  m.beenVisited[2] := $START.m.beenVisited[2];
  m.beenVisited[1] := $START.m.beenVisited[1];
  m.avg_drones_all_areas := $START.m.avg_drones_all_areas;
  m.avg_drones[16] := $START.m.avg_drones[16];
  m.avg_drones[15] := $START.m.avg_drones[15];
  m.avg_drones[14] := $START.m.avg_drones[14];
  m.avg_drones[13] := $START.m.avg_drones[13];
  m.avg_drones[12] := $START.m.avg_drones[12];
  m.avg_drones[11] := $START.m.avg_drones[11];
  m.avg_drones[10] := $START.m.avg_drones[10];
  m.avg_drones[9] := $START.m.avg_drones[9];
  m.avg_drones[8] := $START.m.avg_drones[8];
  m.avg_drones[7] := $START.m.avg_drones[7];
  m.avg_drones[6] := $START.m.avg_drones[6];
  m.avg_drones[5] := $START.m.avg_drones[5];
  m.avg_drones[4] := $START.m.avg_drones[4];
  m.avg_drones[3] := $START.m.avg_drones[3];
  m.avg_drones[2] := $START.m.avg_drones[2];
  m.avg_drones[1] := $START.m.avg_drones[1];
  m.current_drones[16] := $START.m.current_drones[16];
  m.current_drones[15] := $START.m.current_drones[15];
  m.current_drones[14] := $START.m.current_drones[14];
  m.current_drones[13] := $START.m.current_drones[13];
  m.current_drones[12] := $START.m.current_drones[12];
  m.current_drones[11] := $START.m.current_drones[11];
  m.current_drones[10] := $START.m.current_drones[10];
  m.current_drones[9] := $START.m.current_drones[9];
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
  $whenCondition26 := $START.$whenCondition26;
  $whenCondition25 := $START.$whenCondition25;
  $whenCondition25 := false;
  $whenCondition26 := time > m.p.stop_simulation or cc.endSimulation;
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
  (data->localData[0]->realVars[774]/* m.old_avg_drones_all_areas DISCRETE */)  = (data->modelData->realVarsData[774]/* m.old_avg_drones_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[808]/* m.std_dev_all_areas DISCRETE */)  = (data->modelData->realVarsData[808]/* m.std_dev_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[807]/* m.std_dev[16] DISCRETE */)  = (data->modelData->realVarsData[807]/* m.std_dev[16] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[806]/* m.std_dev[15] DISCRETE */)  = (data->modelData->realVarsData[806]/* m.std_dev[15] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[805]/* m.std_dev[14] DISCRETE */)  = (data->modelData->realVarsData[805]/* m.std_dev[14] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[804]/* m.std_dev[13] DISCRETE */)  = (data->modelData->realVarsData[804]/* m.std_dev[13] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[803]/* m.std_dev[12] DISCRETE */)  = (data->modelData->realVarsData[803]/* m.std_dev[12] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[802]/* m.std_dev[11] DISCRETE */)  = (data->modelData->realVarsData[802]/* m.std_dev[11] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[801]/* m.std_dev[10] DISCRETE */)  = (data->modelData->realVarsData[801]/* m.std_dev[10] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[800]/* m.std_dev[9] DISCRETE */)  = (data->modelData->realVarsData[800]/* m.std_dev[9] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[799]/* m.std_dev[8] DISCRETE */)  = (data->modelData->realVarsData[799]/* m.std_dev[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[798]/* m.std_dev[7] DISCRETE */)  = (data->modelData->realVarsData[798]/* m.std_dev[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[797]/* m.std_dev[6] DISCRETE */)  = (data->modelData->realVarsData[797]/* m.std_dev[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[796]/* m.std_dev[5] DISCRETE */)  = (data->modelData->realVarsData[796]/* m.std_dev[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[795]/* m.std_dev[4] DISCRETE */)  = (data->modelData->realVarsData[795]/* m.std_dev[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[794]/* m.std_dev[3] DISCRETE */)  = (data->modelData->realVarsData[794]/* m.std_dev[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[793]/* m.std_dev[2] DISCRETE */)  = (data->modelData->realVarsData[793]/* m.std_dev[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[792]/* m.std_dev[1] DISCRETE */)  = (data->modelData->realVarsData[792]/* m.std_dev[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[757]/* m.max_no_drone_time DISCRETE */)  = (data->modelData->realVarsData[757]/* m.max_no_drone_time DISCRETE */).attribute .start;

  (data->localData[0]->realVars[756]/* m.avg_no_drone_time_all_areas DISCRETE */)  = (data->modelData->realVarsData[756]/* m.avg_no_drone_time_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[755]/* m.avg_no_drone_time[16] DISCRETE */)  = (data->modelData->realVarsData[755]/* m.avg_no_drone_time[16] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[754]/* m.avg_no_drone_time[15] DISCRETE */)  = (data->modelData->realVarsData[754]/* m.avg_no_drone_time[15] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[753]/* m.avg_no_drone_time[14] DISCRETE */)  = (data->modelData->realVarsData[753]/* m.avg_no_drone_time[14] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[752]/* m.avg_no_drone_time[13] DISCRETE */)  = (data->modelData->realVarsData[752]/* m.avg_no_drone_time[13] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[751]/* m.avg_no_drone_time[12] DISCRETE */)  = (data->modelData->realVarsData[751]/* m.avg_no_drone_time[12] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[750]/* m.avg_no_drone_time[11] DISCRETE */)  = (data->modelData->realVarsData[750]/* m.avg_no_drone_time[11] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[749]/* m.avg_no_drone_time[10] DISCRETE */)  = (data->modelData->realVarsData[749]/* m.avg_no_drone_time[10] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[748]/* m.avg_no_drone_time[9] DISCRETE */)  = (data->modelData->realVarsData[748]/* m.avg_no_drone_time[9] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[747]/* m.avg_no_drone_time[8] DISCRETE */)  = (data->modelData->realVarsData[747]/* m.avg_no_drone_time[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[746]/* m.avg_no_drone_time[7] DISCRETE */)  = (data->modelData->realVarsData[746]/* m.avg_no_drone_time[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[745]/* m.avg_no_drone_time[6] DISCRETE */)  = (data->modelData->realVarsData[745]/* m.avg_no_drone_time[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[744]/* m.avg_no_drone_time[5] DISCRETE */)  = (data->modelData->realVarsData[744]/* m.avg_no_drone_time[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[743]/* m.avg_no_drone_time[4] DISCRETE */)  = (data->modelData->realVarsData[743]/* m.avg_no_drone_time[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[742]/* m.avg_no_drone_time[3] DISCRETE */)  = (data->modelData->realVarsData[742]/* m.avg_no_drone_time[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[741]/* m.avg_no_drone_time[2] DISCRETE */)  = (data->modelData->realVarsData[741]/* m.avg_no_drone_time[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[740]/* m.avg_no_drone_time[1] DISCRETE */)  = (data->modelData->realVarsData[740]/* m.avg_no_drone_time[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[773]/* m.no_drone_time[16] DISCRETE */)  = (data->modelData->realVarsData[773]/* m.no_drone_time[16] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[772]/* m.no_drone_time[15] DISCRETE */)  = (data->modelData->realVarsData[772]/* m.no_drone_time[15] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[771]/* m.no_drone_time[14] DISCRETE */)  = (data->modelData->realVarsData[771]/* m.no_drone_time[14] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[770]/* m.no_drone_time[13] DISCRETE */)  = (data->modelData->realVarsData[770]/* m.no_drone_time[13] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[769]/* m.no_drone_time[12] DISCRETE */)  = (data->modelData->realVarsData[769]/* m.no_drone_time[12] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[768]/* m.no_drone_time[11] DISCRETE */)  = (data->modelData->realVarsData[768]/* m.no_drone_time[11] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[767]/* m.no_drone_time[10] DISCRETE */)  = (data->modelData->realVarsData[767]/* m.no_drone_time[10] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[766]/* m.no_drone_time[9] DISCRETE */)  = (data->modelData->realVarsData[766]/* m.no_drone_time[9] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[765]/* m.no_drone_time[8] DISCRETE */)  = (data->modelData->realVarsData[765]/* m.no_drone_time[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[764]/* m.no_drone_time[7] DISCRETE */)  = (data->modelData->realVarsData[764]/* m.no_drone_time[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[763]/* m.no_drone_time[6] DISCRETE */)  = (data->modelData->realVarsData[763]/* m.no_drone_time[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[762]/* m.no_drone_time[5] DISCRETE */)  = (data->modelData->realVarsData[762]/* m.no_drone_time[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[761]/* m.no_drone_time[4] DISCRETE */)  = (data->modelData->realVarsData[761]/* m.no_drone_time[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[760]/* m.no_drone_time[3] DISCRETE */)  = (data->modelData->realVarsData[760]/* m.no_drone_time[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[759]/* m.no_drone_time[2] DISCRETE */)  = (data->modelData->realVarsData[759]/* m.no_drone_time[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[758]/* m.no_drone_time[1] DISCRETE */)  = (data->modelData->realVarsData[758]/* m.no_drone_time[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[791]/* m.p_drones_all_areas DISCRETE */)  = (data->modelData->realVarsData[791]/* m.p_drones_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[790]/* m.p_drones[16] DISCRETE */)  = (data->modelData->realVarsData[790]/* m.p_drones[16] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[789]/* m.p_drones[15] DISCRETE */)  = (data->modelData->realVarsData[789]/* m.p_drones[15] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[788]/* m.p_drones[14] DISCRETE */)  = (data->modelData->realVarsData[788]/* m.p_drones[14] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[787]/* m.p_drones[13] DISCRETE */)  = (data->modelData->realVarsData[787]/* m.p_drones[13] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[786]/* m.p_drones[12] DISCRETE */)  = (data->modelData->realVarsData[786]/* m.p_drones[12] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[785]/* m.p_drones[11] DISCRETE */)  = (data->modelData->realVarsData[785]/* m.p_drones[11] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[784]/* m.p_drones[10] DISCRETE */)  = (data->modelData->realVarsData[784]/* m.p_drones[10] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[783]/* m.p_drones[9] DISCRETE */)  = (data->modelData->realVarsData[783]/* m.p_drones[9] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[782]/* m.p_drones[8] DISCRETE */)  = (data->modelData->realVarsData[782]/* m.p_drones[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[781]/* m.p_drones[7] DISCRETE */)  = (data->modelData->realVarsData[781]/* m.p_drones[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[780]/* m.p_drones[6] DISCRETE */)  = (data->modelData->realVarsData[780]/* m.p_drones[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[779]/* m.p_drones[5] DISCRETE */)  = (data->modelData->realVarsData[779]/* m.p_drones[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[778]/* m.p_drones[4] DISCRETE */)  = (data->modelData->realVarsData[778]/* m.p_drones[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[777]/* m.p_drones[3] DISCRETE */)  = (data->modelData->realVarsData[777]/* m.p_drones[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[776]/* m.p_drones[2] DISCRETE */)  = (data->modelData->realVarsData[776]/* m.p_drones[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[775]/* m.p_drones[1] DISCRETE */)  = (data->modelData->realVarsData[775]/* m.p_drones[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[81]/* m.beenVisited[16] DISCRETE */)  = (data->modelData->integerVarsData[81]/* m.beenVisited[16] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[80]/* m.beenVisited[15] DISCRETE */)  = (data->modelData->integerVarsData[80]/* m.beenVisited[15] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[79]/* m.beenVisited[14] DISCRETE */)  = (data->modelData->integerVarsData[79]/* m.beenVisited[14] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[78]/* m.beenVisited[13] DISCRETE */)  = (data->modelData->integerVarsData[78]/* m.beenVisited[13] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[77]/* m.beenVisited[12] DISCRETE */)  = (data->modelData->integerVarsData[77]/* m.beenVisited[12] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[76]/* m.beenVisited[11] DISCRETE */)  = (data->modelData->integerVarsData[76]/* m.beenVisited[11] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[75]/* m.beenVisited[10] DISCRETE */)  = (data->modelData->integerVarsData[75]/* m.beenVisited[10] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[74]/* m.beenVisited[9] DISCRETE */)  = (data->modelData->integerVarsData[74]/* m.beenVisited[9] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[73]/* m.beenVisited[8] DISCRETE */)  = (data->modelData->integerVarsData[73]/* m.beenVisited[8] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[72]/* m.beenVisited[7] DISCRETE */)  = (data->modelData->integerVarsData[72]/* m.beenVisited[7] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[71]/* m.beenVisited[6] DISCRETE */)  = (data->modelData->integerVarsData[71]/* m.beenVisited[6] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[70]/* m.beenVisited[5] DISCRETE */)  = (data->modelData->integerVarsData[70]/* m.beenVisited[5] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[69]/* m.beenVisited[4] DISCRETE */)  = (data->modelData->integerVarsData[69]/* m.beenVisited[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[68]/* m.beenVisited[3] DISCRETE */)  = (data->modelData->integerVarsData[68]/* m.beenVisited[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[67]/* m.beenVisited[2] DISCRETE */)  = (data->modelData->integerVarsData[67]/* m.beenVisited[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[66]/* m.beenVisited[1] DISCRETE */)  = (data->modelData->integerVarsData[66]/* m.beenVisited[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[739]/* m.avg_drones_all_areas DISCRETE */)  = (data->modelData->realVarsData[739]/* m.avg_drones_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[738]/* m.avg_drones[16] DISCRETE */)  = (data->modelData->realVarsData[738]/* m.avg_drones[16] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[737]/* m.avg_drones[15] DISCRETE */)  = (data->modelData->realVarsData[737]/* m.avg_drones[15] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[736]/* m.avg_drones[14] DISCRETE */)  = (data->modelData->realVarsData[736]/* m.avg_drones[14] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[735]/* m.avg_drones[13] DISCRETE */)  = (data->modelData->realVarsData[735]/* m.avg_drones[13] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[734]/* m.avg_drones[12] DISCRETE */)  = (data->modelData->realVarsData[734]/* m.avg_drones[12] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[733]/* m.avg_drones[11] DISCRETE */)  = (data->modelData->realVarsData[733]/* m.avg_drones[11] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[732]/* m.avg_drones[10] DISCRETE */)  = (data->modelData->realVarsData[732]/* m.avg_drones[10] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[731]/* m.avg_drones[9] DISCRETE */)  = (data->modelData->realVarsData[731]/* m.avg_drones[9] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[730]/* m.avg_drones[8] DISCRETE */)  = (data->modelData->realVarsData[730]/* m.avg_drones[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[729]/* m.avg_drones[7] DISCRETE */)  = (data->modelData->realVarsData[729]/* m.avg_drones[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[728]/* m.avg_drones[6] DISCRETE */)  = (data->modelData->realVarsData[728]/* m.avg_drones[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[727]/* m.avg_drones[5] DISCRETE */)  = (data->modelData->realVarsData[727]/* m.avg_drones[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[726]/* m.avg_drones[4] DISCRETE */)  = (data->modelData->realVarsData[726]/* m.avg_drones[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[725]/* m.avg_drones[3] DISCRETE */)  = (data->modelData->realVarsData[725]/* m.avg_drones[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[724]/* m.avg_drones[2] DISCRETE */)  = (data->modelData->realVarsData[724]/* m.avg_drones[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[723]/* m.avg_drones[1] DISCRETE */)  = (data->modelData->realVarsData[723]/* m.avg_drones[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[97]/* m.current_drones[16] DISCRETE */)  = (data->modelData->integerVarsData[97]/* m.current_drones[16] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[96]/* m.current_drones[15] DISCRETE */)  = (data->modelData->integerVarsData[96]/* m.current_drones[15] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[95]/* m.current_drones[14] DISCRETE */)  = (data->modelData->integerVarsData[95]/* m.current_drones[14] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[94]/* m.current_drones[13] DISCRETE */)  = (data->modelData->integerVarsData[94]/* m.current_drones[13] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[93]/* m.current_drones[12] DISCRETE */)  = (data->modelData->integerVarsData[93]/* m.current_drones[12] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[92]/* m.current_drones[11] DISCRETE */)  = (data->modelData->integerVarsData[92]/* m.current_drones[11] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[91]/* m.current_drones[10] DISCRETE */)  = (data->modelData->integerVarsData[91]/* m.current_drones[10] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[90]/* m.current_drones[9] DISCRETE */)  = (data->modelData->integerVarsData[90]/* m.current_drones[9] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[89]/* m.current_drones[8] DISCRETE */)  = (data->modelData->integerVarsData[89]/* m.current_drones[8] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[88]/* m.current_drones[7] DISCRETE */)  = (data->modelData->integerVarsData[88]/* m.current_drones[7] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[87]/* m.current_drones[6] DISCRETE */)  = (data->modelData->integerVarsData[87]/* m.current_drones[6] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[86]/* m.current_drones[5] DISCRETE */)  = (data->modelData->integerVarsData[86]/* m.current_drones[5] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[85]/* m.current_drones[4] DISCRETE */)  = (data->modelData->integerVarsData[85]/* m.current_drones[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[84]/* m.current_drones[3] DISCRETE */)  = (data->modelData->integerVarsData[84]/* m.current_drones[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[83]/* m.current_drones[2] DISCRETE */)  = (data->modelData->integerVarsData[83]/* m.current_drones[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[82]/* m.current_drones[1] DISCRETE */)  = (data->modelData->integerVarsData[82]/* m.current_drones[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[98]/* m.samples DISCRETE */)  = (data->modelData->integerVarsData[98]/* m.samples DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[99]/* m.z DISCRETE */)  = (data->modelData->integerVarsData[99]/* m.z DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[18]/* $whenCondition26 DISCRETE */)  = (data->modelData->booleanVarsData[18]/* $whenCondition26 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[17]/* $whenCondition25 DISCRETE */)  = (data->modelData->booleanVarsData[17]/* $whenCondition25 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[17]/* $whenCondition25 DISCRETE */)  = 0;

  tmp60 = Greater(data->localData[0]->timeValue,(data->simulationInfo->realParameter[2914]/* m.p.stop_simulation PARAM */) );
  (data->localData[0]->booleanVars[18]/* $whenCondition26 DISCRETE */)  = (tmp60 || (data->localData[0]->booleanVars[55]/* cc.endSimulation DISCRETE */) );

  (data->localData[0]->integerVars[99]/* m.z DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[98]/* m.samples DISCRETE */)  = ((modelica_integer) 0);

  array_alloc_scalar_integer_array(&tmp61, 16, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp62, ((modelica_integer*)&((&(data->localData[0]->integerVars[82]/* m.current_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  integer_array_copy_data(tmp61, tmp62);

  array_alloc_scalar_real_array(&tmp63, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp64, ((modelica_real*)&((&(data->localData[0]->realVars[723]/* m.avg_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  real_array_copy_data(tmp63, tmp64);

  (data->localData[0]->realVars[739]/* m.avg_drones_all_areas DISCRETE */)  = 0.0;

  array_alloc_scalar_integer_array(&tmp65, 16, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp66, ((modelica_integer*)&((&(data->localData[0]->integerVars[66]/* m.beenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  integer_array_copy_data(tmp65, tmp66);

  array_alloc_scalar_real_array(&tmp67, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp68, ((modelica_real*)&((&(data->localData[0]->realVars[775]/* m.p_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  real_array_copy_data(tmp67, tmp68);

  (data->localData[0]->realVars[791]/* m.p_drones_all_areas DISCRETE */)  = 0.0;

  array_alloc_scalar_real_array(&tmp69, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp70, ((modelica_real*)&((&(data->localData[0]->realVars[758]/* m.no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  real_array_copy_data(tmp69, tmp70);

  array_alloc_scalar_real_array(&tmp71, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp72, ((modelica_real*)&((&(data->localData[0]->realVars[740]/* m.avg_no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  real_array_copy_data(tmp71, tmp72);

  (data->localData[0]->realVars[756]/* m.avg_no_drone_time_all_areas DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[757]/* m.max_no_drone_time DISCRETE */)  = 0.0;

  array_alloc_scalar_real_array(&tmp73, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp74, ((modelica_real*)&((&(data->localData[0]->realVars[792]/* m.std_dev[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  real_array_copy_data(tmp73, tmp74);

  (data->localData[0]->realVars[808]/* m.std_dev_all_areas DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[774]/* m.old_avg_drones_all_areas DISCRETE */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_330(DATA *data, threadData_t *threadData);

extern void System_eqFunction_334(DATA *data, threadData_t *threadData);

extern void System_eqFunction_353(DATA *data, threadData_t *threadData);

extern void System_eqFunction_337(DATA *data, threadData_t *threadData);

extern void System_eqFunction_355(DATA *data, threadData_t *threadData);

extern void System_eqFunction_354(DATA *data, threadData_t *threadData);

extern void System_eqFunction_346(DATA *data, threadData_t *threadData);

extern void System_eqFunction_359(DATA *data, threadData_t *threadData);

extern void System_eqFunction_361(DATA *data, threadData_t *threadData);

extern void System_eqFunction_341(DATA *data, threadData_t *threadData);

extern void System_eqFunction_342(DATA *data, threadData_t *threadData);

extern void System_eqFunction_366(DATA *data, threadData_t *threadData);

extern void System_eqFunction_367(DATA *data, threadData_t *threadData);

extern void System_eqFunction_350(DATA *data, threadData_t *threadData);

extern void System_eqFunction_339(DATA *data, threadData_t *threadData);

extern void System_eqFunction_343(DATA *data, threadData_t *threadData);

extern void System_eqFunction_344(DATA *data, threadData_t *threadData);

extern void System_eqFunction_375(DATA *data, threadData_t *threadData);

extern void System_eqFunction_345(DATA *data, threadData_t *threadData);

extern void System_eqFunction_374(DATA *data, threadData_t *threadData);

extern void System_eqFunction_372(DATA *data, threadData_t *threadData);

extern void System_eqFunction_332(DATA *data, threadData_t *threadData);

extern void System_eqFunction_349(DATA *data, threadData_t *threadData);

extern void System_eqFunction_348(DATA *data, threadData_t *threadData);

extern void System_eqFunction_352(DATA *data, threadData_t *threadData);

extern void System_eqFunction_362(DATA *data, threadData_t *threadData);

extern void System_eqFunction_338(DATA *data, threadData_t *threadData);

extern void System_eqFunction_335(DATA *data, threadData_t *threadData);


/*
equation index: 46
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[4].readsignal = $START.drone_to_cc[4].readsignal
*/
void System_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  (data->simulationInfo->booleanVarsPre[159]/* drone_to_cc[4].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[159]/* drone_to_cc[4].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
drone_to_cc[4].readsigint = not $PRE.drone_to_cc[4].readsignal == drone_to_cc[4].readsignal
*/
void System_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  (data->localData[0]->booleanVars[155]/* drone_to_cc[4].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[159]/* drone_to_cc[4].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[159]/* drone_to_cc[4].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[159]/* drone_to_cc[4].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[159]/* drone_to_cc[4].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[3].readsignal = $START.drone_to_cc[3].readsignal
*/
void System_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  (data->simulationInfo->booleanVarsPre[158]/* drone_to_cc[3].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[158]/* drone_to_cc[3].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
drone_to_cc[3].readsigint = not $PRE.drone_to_cc[3].readsignal == drone_to_cc[3].readsignal
*/
void System_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  (data->localData[0]->booleanVars[154]/* drone_to_cc[3].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[158]/* drone_to_cc[3].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[158]/* drone_to_cc[3].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[158]/* drone_to_cc[3].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[158]/* drone_to_cc[3].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[2].readsignal = $START.drone_to_cc[2].readsignal
*/
void System_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  (data->simulationInfo->booleanVarsPre[157]/* drone_to_cc[2].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[157]/* drone_to_cc[2].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
drone_to_cc[2].readsigint = not $PRE.drone_to_cc[2].readsignal == drone_to_cc[2].readsignal
*/
void System_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  (data->localData[0]->booleanVars[153]/* drone_to_cc[2].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[157]/* drone_to_cc[2].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[157]/* drone_to_cc[2].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[157]/* drone_to_cc[2].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[157]/* drone_to_cc[2].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].readsignal = $START.drone_to_cc[1].readsignal
*/
void System_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  (data->simulationInfo->booleanVarsPre[156]/* drone_to_cc[1].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[156]/* drone_to_cc[1].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
drone_to_cc[1].readsigint = not $PRE.drone_to_cc[1].readsignal == drone_to_cc[1].readsignal
*/
void System_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  (data->localData[0]->booleanVars[152]/* drone_to_cc[1].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[156]/* drone_to_cc[1].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[156]/* drone_to_cc[1].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[156]/* drone_to_cc[1].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[156]/* drone_to_cc[1].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[4].writesignal = $START.cc_to_drone[4].writesignal
*/
void System_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  (data->simulationInfo->booleanVarsPre[123]/* cc_to_drone[4].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[123]/* cc_to_drone[4].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
cc_to_drone[4].writesigint = not $PRE.cc_to_drone[4].writesignal == cc_to_drone[4].writesignal
*/
void System_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  (data->localData[0]->booleanVars[119]/* cc_to_drone[4].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[123]/* cc_to_drone[4].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[123]/* cc_to_drone[4].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[123]/* cc_to_drone[4].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[123]/* cc_to_drone[4].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[3].writesignal = $START.cc_to_drone[3].writesignal
*/
void System_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  (data->simulationInfo->booleanVarsPre[122]/* cc_to_drone[3].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[122]/* cc_to_drone[3].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
cc_to_drone[3].writesigint = not $PRE.cc_to_drone[3].writesignal == cc_to_drone[3].writesignal
*/
void System_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  (data->localData[0]->booleanVars[118]/* cc_to_drone[3].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[122]/* cc_to_drone[3].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[122]/* cc_to_drone[3].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[122]/* cc_to_drone[3].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[122]/* cc_to_drone[3].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[2].writesignal = $START.cc_to_drone[2].writesignal
*/
void System_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  (data->simulationInfo->booleanVarsPre[121]/* cc_to_drone[2].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[121]/* cc_to_drone[2].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
cc_to_drone[2].writesigint = not $PRE.cc_to_drone[2].writesignal == cc_to_drone[2].writesignal
*/
void System_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  (data->localData[0]->booleanVars[117]/* cc_to_drone[2].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[121]/* cc_to_drone[2].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[121]/* cc_to_drone[2].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[121]/* cc_to_drone[2].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[121]/* cc_to_drone[2].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].writesignal = $START.cc_to_drone[1].writesignal
*/
void System_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  (data->simulationInfo->booleanVarsPre[120]/* cc_to_drone[1].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[120]/* cc_to_drone[1].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
cc_to_drone[1].writesigint = not $PRE.cc_to_drone[1].writesignal == cc_to_drone[1].writesignal
*/
void System_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  (data->localData[0]->booleanVars[116]/* cc_to_drone[1].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[120]/* cc_to_drone[1].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[120]/* cc_to_drone[1].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[120]/* cc_to_drone[1].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[120]/* cc_to_drone[1].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 62
type: ALGORITHM

  d[3].comm_state := $START.d[3].comm_state;
  d[3].fifox := $START.d[3].fifox;
  d[3].writesignal := $START.d[3].writesignal;
  d[3].readsignal := $START.d[3].readsignal;
  d[3].flag := $START.d[3].flag;
  d[3].setz := $START.d[3].setz;
  d[3].sety := $START.d[3].sety;
  d[3].setx := $START.d[3].setx;
  d[3].msg_to_cc[5] := $START.d[3].msg_to_cc[5];
  d[3].msg_to_cc[4] := $START.d[3].msg_to_cc[4];
  d[3].msg_to_cc[3] := $START.d[3].msg_to_cc[3];
  d[3].msg_to_cc[2] := $START.d[3].msg_to_cc[2];
  d[3].msg_to_cc[1] := $START.d[3].msg_to_cc[1];
  $whenCondition33 := $START.$whenCondition33;
  $whenCondition33 := false;
  d[3].msg_to_cc := {0.0, 0.0, 0.0, 0.0, 0.0};
  d[3].setx := myrandom() * d[3].p.flyZone[1];
  d[3].sety := myrandom() * d[3].p.flyZone[2];
  d[3].setz := myrandom() * d[3].p.flyZone[3];
  d[3].flag := 0;
  d[3].readsignal := false;
  d[3].writesignal := false;
  d[3].fifox := 0;
  d[3].comm_state := 10;
*/
void System_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  real_array tmp83;
  real_array tmp84;
  (data->localData[0]->integerVars[40]/* d[3].comm_state DISCRETE */)  = (data->modelData->integerVarsData[40]/* d[3].comm_state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[48]/* d[3].fifox DISCRETE */)  = (data->modelData->integerVarsData[48]/* d[3].fifox DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[146]/* d[3].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[146]/* d[3].writesignal DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[138]/* d[3].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[138]/* d[3].readsignal DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[52]/* d[3].flag DISCRETE */)  = (data->modelData->integerVarsData[52]/* d[3].flag DISCRETE */).attribute .start;

  (data->localData[0]->realVars[501]/* d[3].setz DISCRETE */)  = (data->modelData->realVarsData[501]/* d[3].setz DISCRETE */).attribute .start;

  (data->localData[0]->realVars[497]/* d[3].sety DISCRETE */)  = (data->modelData->realVarsData[497]/* d[3].sety DISCRETE */).attribute .start;

  (data->localData[0]->realVars[493]/* d[3].setx DISCRETE */)  = (data->modelData->realVarsData[493]/* d[3].setx DISCRETE */).attribute .start;

  (data->localData[0]->realVars[485]/* d[3].msg_to_cc[5] DISCRETE */)  = (data->modelData->realVarsData[485]/* d[3].msg_to_cc[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[484]/* d[3].msg_to_cc[4] DISCRETE */)  = (data->modelData->realVarsData[484]/* d[3].msg_to_cc[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[483]/* d[3].msg_to_cc[3] DISCRETE */)  = (data->modelData->realVarsData[483]/* d[3].msg_to_cc[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[482]/* d[3].msg_to_cc[2] DISCRETE */)  = (data->modelData->realVarsData[482]/* d[3].msg_to_cc[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[481]/* d[3].msg_to_cc[1] DISCRETE */)  = (data->modelData->realVarsData[481]/* d[3].msg_to_cc[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[26]/* $whenCondition33 DISCRETE */)  = (data->modelData->booleanVarsData[26]/* $whenCondition33 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[26]/* $whenCondition33 DISCRETE */)  = 0;

  array_alloc_scalar_real_array(&tmp83, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp84, ((modelica_real*)&((&(data->localData[0]->realVars[471]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
  real_array_copy_data(tmp83, tmp84);

  (data->localData[0]->realVars[493]/* d[3].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[2196]/* d[3].p.flyZone[1] PARAM */) );

  (data->localData[0]->realVars[497]/* d[3].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[2197]/* d[3].p.flyZone[2] PARAM */) );

  (data->localData[0]->realVars[501]/* d[3].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[2198]/* d[3].p.flyZone[3] PARAM */) );

  (data->localData[0]->integerVars[52]/* d[3].flag DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->booleanVars[138]/* d[3].readsignal DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[146]/* d[3].writesignal DISCRETE */)  = 0;

  (data->localData[0]->integerVars[48]/* d[3].fifox DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[40]/* d[3].comm_state DISCRETE */)  = ((modelica_integer) 10);
  TRACE_POP
}
extern void System_eqFunction_417(DATA *data, threadData_t *threadData);

extern void System_eqFunction_414(DATA *data, threadData_t *threadData);

extern void System_eqFunction_418(DATA *data, threadData_t *threadData);

extern void System_eqFunction_408(DATA *data, threadData_t *threadData);

extern void System_eqFunction_415(DATA *data, threadData_t *threadData);

extern void System_eqFunction_412(DATA *data, threadData_t *threadData);

extern void System_eqFunction_409(DATA *data, threadData_t *threadData);

extern void System_eqFunction_427(DATA *data, threadData_t *threadData);

extern void System_eqFunction_411(DATA *data, threadData_t *threadData);

extern void System_eqFunction_416(DATA *data, threadData_t *threadData);


/*
equation index: 73
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[3].writesignal = $START.drone_to_cc[3].writesignal
*/
void System_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  (data->simulationInfo->booleanVarsPre[170]/* drone_to_cc[3].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[170]/* drone_to_cc[3].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
drone_to_cc[3].writesigint = not $PRE.drone_to_cc[3].writesignal == drone_to_cc[3].writesignal
*/
void System_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  (data->localData[0]->booleanVars[166]/* drone_to_cc[3].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[170]/* drone_to_cc[3].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[170]/* drone_to_cc[3].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[170]/* drone_to_cc[3].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[170]/* drone_to_cc[3].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[3].readsignal = $START.cc_to_drone[3].readsignal
*/
void System_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  (data->simulationInfo->booleanVarsPre[110]/* cc_to_drone[3].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[110]/* cc_to_drone[3].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
cc_to_drone[3].readsigint = not $PRE.cc_to_drone[3].readsignal == cc_to_drone[3].readsignal
*/
void System_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  (data->localData[0]->booleanVars[106]/* cc_to_drone[3].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[110]/* cc_to_drone[3].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[110]/* cc_to_drone[3].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[110]/* cc_to_drone[3].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[110]/* cc_to_drone[3].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 77
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
  $whenCondition38 := $START.$whenCondition38;
  $whenCondition38 := false;
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
void System_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  real_array tmp87;
  real_array tmp88;
  (data->localData[0]->integerVars[39]/* d[2].comm_state DISCRETE */)  = (data->modelData->integerVarsData[39]/* d[2].comm_state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[47]/* d[2].fifox DISCRETE */)  = (data->modelData->integerVarsData[47]/* d[2].fifox DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[145]/* d[2].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[145]/* d[2].writesignal DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[137]/* d[2].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[137]/* d[2].readsignal DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[51]/* d[2].flag DISCRETE */)  = (data->modelData->integerVarsData[51]/* d[2].flag DISCRETE */).attribute .start;

  (data->localData[0]->realVars[500]/* d[2].setz DISCRETE */)  = (data->modelData->realVarsData[500]/* d[2].setz DISCRETE */).attribute .start;

  (data->localData[0]->realVars[496]/* d[2].sety DISCRETE */)  = (data->modelData->realVarsData[496]/* d[2].sety DISCRETE */).attribute .start;

  (data->localData[0]->realVars[492]/* d[2].setx DISCRETE */)  = (data->modelData->realVarsData[492]/* d[2].setx DISCRETE */).attribute .start;

  (data->localData[0]->realVars[480]/* d[2].msg_to_cc[5] DISCRETE */)  = (data->modelData->realVarsData[480]/* d[2].msg_to_cc[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[479]/* d[2].msg_to_cc[4] DISCRETE */)  = (data->modelData->realVarsData[479]/* d[2].msg_to_cc[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[478]/* d[2].msg_to_cc[3] DISCRETE */)  = (data->modelData->realVarsData[478]/* d[2].msg_to_cc[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[477]/* d[2].msg_to_cc[2] DISCRETE */)  = (data->modelData->realVarsData[477]/* d[2].msg_to_cc[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[476]/* d[2].msg_to_cc[1] DISCRETE */)  = (data->modelData->realVarsData[476]/* d[2].msg_to_cc[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[31]/* $whenCondition38 DISCRETE */)  = (data->modelData->booleanVarsData[31]/* $whenCondition38 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[31]/* $whenCondition38 DISCRETE */)  = 0;

  array_alloc_scalar_real_array(&tmp87, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp88, ((modelica_real*)&((&(data->localData[0]->realVars[471]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
  real_array_copy_data(tmp87, tmp88);

  (data->localData[0]->realVars[492]/* d[2].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[2193]/* d[2].p.flyZone[1] PARAM */) );

  (data->localData[0]->realVars[496]/* d[2].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[2194]/* d[2].p.flyZone[2] PARAM */) );

  (data->localData[0]->realVars[500]/* d[2].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[2195]/* d[2].p.flyZone[3] PARAM */) );

  (data->localData[0]->integerVars[51]/* d[2].flag DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->booleanVars[137]/* d[2].readsignal DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[145]/* d[2].writesignal DISCRETE */)  = 0;

  (data->localData[0]->integerVars[47]/* d[2].fifox DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[39]/* d[2].comm_state DISCRETE */)  = ((modelica_integer) 10);
  TRACE_POP
}
extern void System_eqFunction_437(DATA *data, threadData_t *threadData);

extern void System_eqFunction_441(DATA *data, threadData_t *threadData);

extern void System_eqFunction_439(DATA *data, threadData_t *threadData);

extern void System_eqFunction_434(DATA *data, threadData_t *threadData);

extern void System_eqFunction_442(DATA *data, threadData_t *threadData);

extern void System_eqFunction_432(DATA *data, threadData_t *threadData);

extern void System_eqFunction_435(DATA *data, threadData_t *threadData);

extern void System_eqFunction_438(DATA *data, threadData_t *threadData);

extern void System_eqFunction_451(DATA *data, threadData_t *threadData);

extern void System_eqFunction_440(DATA *data, threadData_t *threadData);


/*
equation index: 88
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[2].writesignal = $START.drone_to_cc[2].writesignal
*/
void System_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  (data->simulationInfo->booleanVarsPre[169]/* drone_to_cc[2].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[169]/* drone_to_cc[2].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
drone_to_cc[2].writesigint = not $PRE.drone_to_cc[2].writesignal == drone_to_cc[2].writesignal
*/
void System_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  (data->localData[0]->booleanVars[165]/* drone_to_cc[2].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[169]/* drone_to_cc[2].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[169]/* drone_to_cc[2].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[169]/* drone_to_cc[2].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[169]/* drone_to_cc[2].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[2].readsignal = $START.cc_to_drone[2].readsignal
*/
void System_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  (data->simulationInfo->booleanVarsPre[109]/* cc_to_drone[2].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[109]/* cc_to_drone[2].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
cc_to_drone[2].readsigint = not $PRE.cc_to_drone[2].readsignal == cc_to_drone[2].readsignal
*/
void System_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  (data->localData[0]->booleanVars[105]/* cc_to_drone[2].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[109]/* cc_to_drone[2].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[109]/* cc_to_drone[2].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[109]/* cc_to_drone[2].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[109]/* cc_to_drone[2].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 92
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
  $whenCondition43 := $START.$whenCondition43;
  $whenCondition43 := false;
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
void System_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  real_array tmp91;
  real_array tmp92;
  (data->localData[0]->integerVars[38]/* d[1].comm_state DISCRETE */)  = (data->modelData->integerVarsData[38]/* d[1].comm_state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[46]/* d[1].fifox DISCRETE */)  = (data->modelData->integerVarsData[46]/* d[1].fifox DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[144]/* d[1].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[144]/* d[1].writesignal DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[136]/* d[1].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[136]/* d[1].readsignal DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[50]/* d[1].flag DISCRETE */)  = (data->modelData->integerVarsData[50]/* d[1].flag DISCRETE */).attribute .start;

  (data->localData[0]->realVars[499]/* d[1].setz DISCRETE */)  = (data->modelData->realVarsData[499]/* d[1].setz DISCRETE */).attribute .start;

  (data->localData[0]->realVars[495]/* d[1].sety DISCRETE */)  = (data->modelData->realVarsData[495]/* d[1].sety DISCRETE */).attribute .start;

  (data->localData[0]->realVars[491]/* d[1].setx DISCRETE */)  = (data->modelData->realVarsData[491]/* d[1].setx DISCRETE */).attribute .start;

  (data->localData[0]->realVars[475]/* d[1].msg_to_cc[5] DISCRETE */)  = (data->modelData->realVarsData[475]/* d[1].msg_to_cc[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[474]/* d[1].msg_to_cc[4] DISCRETE */)  = (data->modelData->realVarsData[474]/* d[1].msg_to_cc[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[473]/* d[1].msg_to_cc[3] DISCRETE */)  = (data->modelData->realVarsData[473]/* d[1].msg_to_cc[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[472]/* d[1].msg_to_cc[2] DISCRETE */)  = (data->modelData->realVarsData[472]/* d[1].msg_to_cc[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[471]/* d[1].msg_to_cc[1] DISCRETE */)  = (data->modelData->realVarsData[471]/* d[1].msg_to_cc[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[37]/* $whenCondition43 DISCRETE */)  = (data->modelData->booleanVarsData[37]/* $whenCondition43 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[37]/* $whenCondition43 DISCRETE */)  = 0;

  array_alloc_scalar_real_array(&tmp91, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp92, ((modelica_real*)&((&(data->localData[0]->realVars[471]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
  real_array_copy_data(tmp91, tmp92);

  (data->localData[0]->realVars[491]/* d[1].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[2190]/* d[1].p.flyZone[1] PARAM */) );

  (data->localData[0]->realVars[495]/* d[1].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[2191]/* d[1].p.flyZone[2] PARAM */) );

  (data->localData[0]->realVars[499]/* d[1].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[2192]/* d[1].p.flyZone[3] PARAM */) );

  (data->localData[0]->integerVars[50]/* d[1].flag DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->booleanVars[136]/* d[1].readsignal DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[144]/* d[1].writesignal DISCRETE */)  = 0;

  (data->localData[0]->integerVars[46]/* d[1].fifox DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[38]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 10);
  TRACE_POP
}
extern void System_eqFunction_468(DATA *data, threadData_t *threadData);

extern void System_eqFunction_466(DATA *data, threadData_t *threadData);

extern void System_eqFunction_467(DATA *data, threadData_t *threadData);

extern void System_eqFunction_459(DATA *data, threadData_t *threadData);

extern void System_eqFunction_457(DATA *data, threadData_t *threadData);

extern void System_eqFunction_463(DATA *data, threadData_t *threadData);

extern void System_eqFunction_460(DATA *data, threadData_t *threadData);

extern void System_eqFunction_465(DATA *data, threadData_t *threadData);

extern void System_eqFunction_462(DATA *data, threadData_t *threadData);

extern void System_eqFunction_458(DATA *data, threadData_t *threadData);


/*
equation index: 103
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].writesignal = $START.drone_to_cc[1].writesignal
*/
void System_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  (data->simulationInfo->booleanVarsPre[168]/* drone_to_cc[1].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[168]/* drone_to_cc[1].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
drone_to_cc[1].writesigint = not $PRE.drone_to_cc[1].writesignal == drone_to_cc[1].writesignal
*/
void System_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  (data->localData[0]->booleanVars[164]/* drone_to_cc[1].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[168]/* drone_to_cc[1].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[168]/* drone_to_cc[1].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[168]/* drone_to_cc[1].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[168]/* drone_to_cc[1].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].readsignal = $START.cc_to_drone[1].readsignal
*/
void System_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  (data->simulationInfo->booleanVarsPre[108]/* cc_to_drone[1].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[108]/* cc_to_drone[1].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
cc_to_drone[1].readsigint = not $PRE.cc_to_drone[1].readsignal == cc_to_drone[1].readsignal
*/
void System_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  (data->localData[0]->booleanVars[104]/* cc_to_drone[1].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[108]/* cc_to_drone[1].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[108]/* cc_to_drone[1].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[108]/* cc_to_drone[1].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[108]/* cc_to_drone[1].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 107
type: SIMPLE_ASSIGN
$PRE.d[4].d.battery = $START.d[4].d.battery
*/
void System_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  (data->simulationInfo->realVarsPre[470]/* d[4].d.battery DISCRETE */)  = (data->modelData->realVarsData[470]/* d[4].d.battery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 108
type: SIMPLE_ASSIGN
$PRE.d[4].d.droneState = $START.d[4].d.droneState
*/
void System_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  (data->simulationInfo->integerVarsPre[45]/* d[4].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[45]/* d[4].d.droneState DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 109
type: ALGORITHM

  d[4].d.droneDead := $START.d[4].d.droneDead;
  d[4].d.droneState := $START.d[4].d.droneState;
  d[4].d.battery := $START.d[4].d.battery;
  $whenCondition32 := $START.$whenCondition32;
  $whenCondition31 := $START.$whenCondition31;
  $whenCondition31 := abs($PRE.d[4].d.battery) < 0.01;
  $whenCondition32 := false;
  d[4].d.battery := d[4].d.p.capacity;
  d[4].d.droneState := 1;
  d[4].d.droneDead := false;
*/
void System_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  modelica_boolean tmp95;
  (data->localData[0]->booleanVars[131]/* d[4].d.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[131]/* d[4].d.droneDead DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[45]/* d[4].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[45]/* d[4].d.droneState DISCRETE */).attribute .start;

  (data->localData[0]->realVars[470]/* d[4].d.battery DISCRETE */)  = (data->modelData->realVarsData[470]/* d[4].d.battery DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[25]/* $whenCondition32 DISCRETE */)  = (data->modelData->booleanVarsData[25]/* $whenCondition32 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[24]/* $whenCondition31 DISCRETE */)  = (data->modelData->booleanVarsData[24]/* $whenCondition31 DISCRETE */).attribute .start;

  tmp95 = Less(fabs((data->simulationInfo->realVarsPre[470]/* d[4].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[24]/* $whenCondition31 DISCRETE */)  = tmp95;

  (data->localData[0]->booleanVars[25]/* $whenCondition32 DISCRETE */)  = 0;

  (data->localData[0]->realVars[470]/* d[4].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[1625]/* d[4].d.p.capacity PARAM */) ;

  (data->localData[0]->integerVars[45]/* d[4].d.droneState DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->booleanVars[131]/* d[4].d.droneDead DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_403(DATA *data, threadData_t *threadData);

extern void System_eqFunction_402(DATA *data, threadData_t *threadData);


/*
equation index: 112
type: SIMPLE_ASSIGN
d[4].ctrl.destZ = 0.0
*/
void System_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  (data->localData[0]->realVars[466]/* d[4].ctrl.destZ DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
$PRE.d[4].ctrl.destZ = d[4].ctrl.destZ
*/
void System_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  (data->simulationInfo->realVarsPre[466]/* d[4].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[466]/* d[4].ctrl.destZ DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
d[4].d.Vz = 0.0
*/
void System_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  (data->localData[0]->realVars[11]/* d[4].d.Vz STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_311(DATA *data, threadData_t *threadData);


/*
equation index: 116
type: SIMPLE_ASSIGN
d[4].d.z = d[4].d.p.docking_bay[3] + d[4].d.p.dDistance * (*Real*)(d[4].d.drone_id)
*/
void System_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  (data->localData[0]->realVars[23]/* d[4].d.z STATE(1,d[4].d.Vz) */)  = (data->simulationInfo->realParameter[1665]/* d[4].d.p.docking_bay[3] PARAM */)  + ((data->simulationInfo->realParameter[1641]/* d[4].d.p.dDistance PARAM */) ) * (((modelica_real)(data->simulationInfo->integerParameter[39]/* d[4].d.drone_id PARAM */) ));
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
d[4].ctrl.Trustz = d[4].ctrl.prm.m * (9.81 + d[4].ctrl.kz1 * (d[4].d.z - $PRE.d[4].ctrl.destZ) + d[4].ctrl.kz2 * d[4].d.Vz)
*/
void System_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  (data->localData[0]->realVars[108]/* d[4].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1161]/* d[4].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[681]/* d[4].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[23]/* d[4].d.z STATE(1,d[4].d.Vz) */)  - (data->simulationInfo->realVarsPre[466]/* d[4].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[685]/* d[4].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[11]/* d[4].d.Vz STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_310(DATA *data, threadData_t *threadData);


/*
equation index: 119
type: SIMPLE_ASSIGN
d[4].ctrl.destY = 0.0
*/
void System_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  (data->localData[0]->realVars[462]/* d[4].ctrl.destY DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
$PRE.d[4].ctrl.destY = d[4].ctrl.destY
*/
void System_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  (data->simulationInfo->realVarsPre[462]/* d[4].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[462]/* d[4].ctrl.destY DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
d[4].d.Vy = 0.0
*/
void System_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  (data->localData[0]->realVars[7]/* d[4].d.Vy STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_312(DATA *data, threadData_t *threadData);


/*
equation index: 123
type: SIMPLE_ASSIGN
d[4].d.y = d[4].d.p.docking_bay[2]
*/
void System_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  (data->localData[0]->realVars[19]/* d[4].d.y STATE(1,d[4].d.Vy) */)  = (data->simulationInfo->realParameter[1664]/* d[4].d.p.docking_bay[2] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_479(DATA *data, threadData_t *threadData);


/*
equation index: 125
type: SIMPLE_ASSIGN
d[4].ctrl.Trusty = d[4].ctrl.prm.m * (d[4].ctrl.ky1 * (d[4].ctrl.y - $PRE.d[4].ctrl.destY) + d[4].ctrl.ky2 * d[4].d.Vy)
*/
void System_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  (data->localData[0]->realVars[104]/* d[4].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1161]/* d[4].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[673]/* d[4].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[128]/* d[4].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[462]/* d[4].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[677]/* d[4].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[7]/* d[4].d.Vy STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_481(DATA *data, threadData_t *threadData);


/*
equation index: 127
type: SIMPLE_ASSIGN
d[4].ctrl.destX = 0.0
*/
void System_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  (data->localData[0]->realVars[458]/* d[4].ctrl.destX DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
$PRE.d[4].ctrl.destX = d[4].ctrl.destX
*/
void System_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  (data->simulationInfo->realVarsPre[458]/* d[4].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[458]/* d[4].ctrl.destX DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
d[4].d.Vx = 0.0
*/
void System_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  (data->localData[0]->realVars[3]/* d[4].d.Vx STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_313(DATA *data, threadData_t *threadData);


/*
equation index: 131
type: SIMPLE_ASSIGN
d[4].d.x = d[4].d.p.docking_bay[1]
*/
void System_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  (data->localData[0]->realVars[15]/* d[4].d.x STATE(1,d[4].d.Vx) */)  = (data->simulationInfo->realParameter[1663]/* d[4].d.p.docking_bay[1] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_482(DATA *data, threadData_t *threadData);


/*
equation index: 133
type: SIMPLE_ASSIGN
d[4].ctrl.Trustx = d[4].ctrl.prm.m * (d[4].ctrl.kx1 * (d[4].ctrl.x - $PRE.d[4].ctrl.destX) + d[4].ctrl.kx2 * d[4].d.Vx)
*/
void System_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  (data->localData[0]->realVars[100]/* d[4].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1161]/* d[4].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[665]/* d[4].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[124]/* d[4].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[458]/* d[4].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[669]/* d[4].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[3]/* d[4].d.Vx STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_484(DATA *data, threadData_t *threadData);


/*
equation index: 135
type: SIMPLE_ASSIGN
$PRE.d[3].d.battery = $START.d[3].d.battery
*/
void System_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  (data->simulationInfo->realVarsPre[469]/* d[3].d.battery DISCRETE */)  = (data->modelData->realVarsData[469]/* d[3].d.battery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
$PRE.d[3].d.droneState = $START.d[3].d.droneState
*/
void System_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  (data->simulationInfo->integerVarsPre[44]/* d[3].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[44]/* d[3].d.droneState DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 137
type: ALGORITHM

  d[3].d.droneDead := $START.d[3].d.droneDead;
  d[3].d.droneState := $START.d[3].d.droneState;
  d[3].d.battery := $START.d[3].d.battery;
  $whenCondition37 := $START.$whenCondition37;
  $whenCondition36 := $START.$whenCondition36;
  $whenCondition36 := abs($PRE.d[3].d.battery) < 0.01;
  $whenCondition37 := false;
  d[3].d.battery := d[3].d.p.capacity;
  d[3].d.droneState := 1;
  d[3].d.droneDead := false;
*/
void System_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  modelica_boolean tmp96;
  (data->localData[0]->booleanVars[130]/* d[3].d.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[130]/* d[3].d.droneDead DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[44]/* d[3].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[44]/* d[3].d.droneState DISCRETE */).attribute .start;

  (data->localData[0]->realVars[469]/* d[3].d.battery DISCRETE */)  = (data->modelData->realVarsData[469]/* d[3].d.battery DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[30]/* $whenCondition37 DISCRETE */)  = (data->modelData->booleanVarsData[30]/* $whenCondition37 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[29]/* $whenCondition36 DISCRETE */)  = (data->modelData->booleanVarsData[29]/* $whenCondition36 DISCRETE */).attribute .start;

  tmp96 = Less(fabs((data->simulationInfo->realVarsPre[469]/* d[3].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[29]/* $whenCondition36 DISCRETE */)  = tmp96;

  (data->localData[0]->booleanVars[30]/* $whenCondition37 DISCRETE */)  = 0;

  (data->localData[0]->realVars[469]/* d[3].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[1624]/* d[3].d.p.capacity PARAM */) ;

  (data->localData[0]->integerVars[44]/* d[3].d.droneState DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->booleanVars[130]/* d[3].d.droneDead DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_406(DATA *data, threadData_t *threadData);

extern void System_eqFunction_428(DATA *data, threadData_t *threadData);


/*
equation index: 140
type: SIMPLE_ASSIGN
d[3].ctrl.destZ = 0.0
*/
void System_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  (data->localData[0]->realVars[465]/* d[3].ctrl.destZ DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
$PRE.d[3].ctrl.destZ = d[3].ctrl.destZ
*/
void System_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  (data->simulationInfo->realVarsPre[465]/* d[3].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[465]/* d[3].ctrl.destZ DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
d[3].d.Vz = 0.0
*/
void System_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  (data->localData[0]->realVars[10]/* d[3].d.Vz STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_316(DATA *data, threadData_t *threadData);


/*
equation index: 144
type: SIMPLE_ASSIGN
d[3].d.z = d[3].d.p.docking_bay[3] + d[3].d.p.dDistance * (*Real*)(d[3].d.drone_id)
*/
void System_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  (data->localData[0]->realVars[22]/* d[3].d.z STATE(1,d[3].d.Vz) */)  = (data->simulationInfo->realParameter[1662]/* d[3].d.p.docking_bay[3] PARAM */)  + ((data->simulationInfo->realParameter[1640]/* d[3].d.p.dDistance PARAM */) ) * (((modelica_real)(data->simulationInfo->integerParameter[38]/* d[3].d.drone_id PARAM */) ));
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
d[3].ctrl.Trustz = d[3].ctrl.prm.m * (9.81 + d[3].ctrl.kz1 * (d[3].d.z - $PRE.d[3].ctrl.destZ) + d[3].ctrl.kz2 * d[3].d.Vz)
*/
void System_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  (data->localData[0]->realVars[107]/* d[3].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1160]/* d[3].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[680]/* d[3].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[22]/* d[3].d.z STATE(1,d[3].d.Vz) */)  - (data->simulationInfo->realVarsPre[465]/* d[3].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[684]/* d[3].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[10]/* d[3].d.Vz STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_315(DATA *data, threadData_t *threadData);


/*
equation index: 147
type: SIMPLE_ASSIGN
d[3].ctrl.destY = 0.0
*/
void System_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  (data->localData[0]->realVars[461]/* d[3].ctrl.destY DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
$PRE.d[3].ctrl.destY = d[3].ctrl.destY
*/
void System_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  (data->simulationInfo->realVarsPre[461]/* d[3].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[461]/* d[3].ctrl.destY DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
d[3].d.Vy = 0.0
*/
void System_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  (data->localData[0]->realVars[6]/* d[3].d.Vy STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_317(DATA *data, threadData_t *threadData);


/*
equation index: 151
type: SIMPLE_ASSIGN
d[3].d.y = d[3].d.p.docking_bay[2]
*/
void System_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  (data->localData[0]->realVars[18]/* d[3].d.y STATE(1,d[3].d.Vy) */)  = (data->simulationInfo->realParameter[1661]/* d[3].d.p.docking_bay[2] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_485(DATA *data, threadData_t *threadData);


/*
equation index: 153
type: SIMPLE_ASSIGN
d[3].ctrl.Trusty = d[3].ctrl.prm.m * (d[3].ctrl.ky1 * (d[3].ctrl.y - $PRE.d[3].ctrl.destY) + d[3].ctrl.ky2 * d[3].d.Vy)
*/
void System_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  (data->localData[0]->realVars[103]/* d[3].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1160]/* d[3].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[672]/* d[3].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[127]/* d[3].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[461]/* d[3].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[676]/* d[3].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[6]/* d[3].d.Vy STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_487(DATA *data, threadData_t *threadData);


/*
equation index: 155
type: SIMPLE_ASSIGN
d[3].ctrl.destX = 0.0
*/
void System_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  (data->localData[0]->realVars[457]/* d[3].ctrl.destX DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
$PRE.d[3].ctrl.destX = d[3].ctrl.destX
*/
void System_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  (data->simulationInfo->realVarsPre[457]/* d[3].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[457]/* d[3].ctrl.destX DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
d[3].d.Vx = 0.0
*/
void System_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  (data->localData[0]->realVars[2]/* d[3].d.Vx STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_318(DATA *data, threadData_t *threadData);


/*
equation index: 159
type: SIMPLE_ASSIGN
d[3].d.x = d[3].d.p.docking_bay[1]
*/
void System_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  (data->localData[0]->realVars[14]/* d[3].d.x STATE(1,d[3].d.Vx) */)  = (data->simulationInfo->realParameter[1660]/* d[3].d.p.docking_bay[1] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_488(DATA *data, threadData_t *threadData);


/*
equation index: 161
type: SIMPLE_ASSIGN
d[3].ctrl.Trustx = d[3].ctrl.prm.m * (d[3].ctrl.kx1 * (d[3].ctrl.x - $PRE.d[3].ctrl.destX) + d[3].ctrl.kx2 * d[3].d.Vx)
*/
void System_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  (data->localData[0]->realVars[99]/* d[3].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1160]/* d[3].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[664]/* d[3].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[123]/* d[3].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[457]/* d[3].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[668]/* d[3].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[2]/* d[3].d.Vx STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_490(DATA *data, threadData_t *threadData);


/*
equation index: 163
type: SIMPLE_ASSIGN
$PRE.d[2].d.battery = $START.d[2].d.battery
*/
void System_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  (data->simulationInfo->realVarsPre[468]/* d[2].d.battery DISCRETE */)  = (data->modelData->realVarsData[468]/* d[2].d.battery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 164
type: SIMPLE_ASSIGN
$PRE.d[2].d.droneState = $START.d[2].d.droneState
*/
void System_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  (data->simulationInfo->integerVarsPre[43]/* d[2].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[43]/* d[2].d.droneState DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 165
type: ALGORITHM

  d[2].d.droneDead := $START.d[2].d.droneDead;
  d[2].d.droneState := $START.d[2].d.droneState;
  d[2].d.battery := $START.d[2].d.battery;
  $whenCondition42 := $START.$whenCondition42;
  $whenCondition41 := $START.$whenCondition41;
  $whenCondition41 := abs($PRE.d[2].d.battery) < 0.01;
  $whenCondition42 := false;
  d[2].d.battery := d[2].d.p.capacity;
  d[2].d.droneState := 1;
  d[2].d.droneDead := false;
*/
void System_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  modelica_boolean tmp97;
  (data->localData[0]->booleanVars[129]/* d[2].d.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[129]/* d[2].d.droneDead DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[43]/* d[2].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[43]/* d[2].d.droneState DISCRETE */).attribute .start;

  (data->localData[0]->realVars[468]/* d[2].d.battery DISCRETE */)  = (data->modelData->realVarsData[468]/* d[2].d.battery DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[36]/* $whenCondition42 DISCRETE */)  = (data->modelData->booleanVarsData[36]/* $whenCondition42 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[35]/* $whenCondition41 DISCRETE */)  = (data->modelData->booleanVarsData[35]/* $whenCondition41 DISCRETE */).attribute .start;

  tmp97 = Less(fabs((data->simulationInfo->realVarsPre[468]/* d[2].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[35]/* $whenCondition41 DISCRETE */)  = tmp97;

  (data->localData[0]->booleanVars[36]/* $whenCondition42 DISCRETE */)  = 0;

  (data->localData[0]->realVars[468]/* d[2].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[1623]/* d[2].d.p.capacity PARAM */) ;

  (data->localData[0]->integerVars[43]/* d[2].d.droneState DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->booleanVars[129]/* d[2].d.droneDead DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_453(DATA *data, threadData_t *threadData);

extern void System_eqFunction_452(DATA *data, threadData_t *threadData);


/*
equation index: 168
type: SIMPLE_ASSIGN
d[2].ctrl.destZ = 0.0
*/
void System_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  (data->localData[0]->realVars[464]/* d[2].ctrl.destZ DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
$PRE.d[2].ctrl.destZ = d[2].ctrl.destZ
*/
void System_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  (data->simulationInfo->realVarsPre[464]/* d[2].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[464]/* d[2].ctrl.destZ DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
d[2].d.Vz = 0.0
*/
void System_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  (data->localData[0]->realVars[9]/* d[2].d.Vz STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_321(DATA *data, threadData_t *threadData);


/*
equation index: 172
type: SIMPLE_ASSIGN
d[2].d.z = d[2].d.p.docking_bay[3] + d[2].d.p.dDistance * (*Real*)(d[2].d.drone_id)
*/
void System_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  (data->localData[0]->realVars[21]/* d[2].d.z STATE(1,d[2].d.Vz) */)  = (data->simulationInfo->realParameter[1659]/* d[2].d.p.docking_bay[3] PARAM */)  + ((data->simulationInfo->realParameter[1639]/* d[2].d.p.dDistance PARAM */) ) * (((modelica_real)(data->simulationInfo->integerParameter[37]/* d[2].d.drone_id PARAM */) ));
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
d[2].ctrl.Trustz = d[2].ctrl.prm.m * (9.81 + d[2].ctrl.kz1 * (d[2].d.z - $PRE.d[2].ctrl.destZ) + d[2].ctrl.kz2 * d[2].d.Vz)
*/
void System_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  (data->localData[0]->realVars[106]/* d[2].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1159]/* d[2].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[679]/* d[2].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[21]/* d[2].d.z STATE(1,d[2].d.Vz) */)  - (data->simulationInfo->realVarsPre[464]/* d[2].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[683]/* d[2].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[9]/* d[2].d.Vz STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_320(DATA *data, threadData_t *threadData);


/*
equation index: 175
type: SIMPLE_ASSIGN
d[2].ctrl.destY = 0.0
*/
void System_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  (data->localData[0]->realVars[460]/* d[2].ctrl.destY DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
$PRE.d[2].ctrl.destY = d[2].ctrl.destY
*/
void System_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  (data->simulationInfo->realVarsPre[460]/* d[2].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[460]/* d[2].ctrl.destY DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
d[2].d.Vy = 0.0
*/
void System_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  (data->localData[0]->realVars[5]/* d[2].d.Vy STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_322(DATA *data, threadData_t *threadData);


/*
equation index: 179
type: SIMPLE_ASSIGN
d[2].d.y = d[2].d.p.docking_bay[2]
*/
void System_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  (data->localData[0]->realVars[17]/* d[2].d.y STATE(1,d[2].d.Vy) */)  = (data->simulationInfo->realParameter[1658]/* d[2].d.p.docking_bay[2] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_491(DATA *data, threadData_t *threadData);


/*
equation index: 181
type: SIMPLE_ASSIGN
d[2].ctrl.Trusty = d[2].ctrl.prm.m * (d[2].ctrl.ky1 * (d[2].ctrl.y - $PRE.d[2].ctrl.destY) + d[2].ctrl.ky2 * d[2].d.Vy)
*/
void System_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  (data->localData[0]->realVars[102]/* d[2].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1159]/* d[2].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[671]/* d[2].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[126]/* d[2].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[460]/* d[2].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[675]/* d[2].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[5]/* d[2].d.Vy STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_493(DATA *data, threadData_t *threadData);


/*
equation index: 183
type: SIMPLE_ASSIGN
d[2].ctrl.destX = 0.0
*/
void System_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  (data->localData[0]->realVars[456]/* d[2].ctrl.destX DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
$PRE.d[2].ctrl.destX = d[2].ctrl.destX
*/
void System_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  (data->simulationInfo->realVarsPre[456]/* d[2].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[456]/* d[2].ctrl.destX DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 185
type: SIMPLE_ASSIGN
d[2].d.Vx = 0.0
*/
void System_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  (data->localData[0]->realVars[1]/* d[2].d.Vx STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_323(DATA *data, threadData_t *threadData);


/*
equation index: 187
type: SIMPLE_ASSIGN
d[2].d.x = d[2].d.p.docking_bay[1]
*/
void System_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  (data->localData[0]->realVars[13]/* d[2].d.x STATE(1,d[2].d.Vx) */)  = (data->simulationInfo->realParameter[1657]/* d[2].d.p.docking_bay[1] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_494(DATA *data, threadData_t *threadData);


/*
equation index: 189
type: SIMPLE_ASSIGN
d[2].ctrl.Trustx = d[2].ctrl.prm.m * (d[2].ctrl.kx1 * (d[2].ctrl.x - $PRE.d[2].ctrl.destX) + d[2].ctrl.kx2 * d[2].d.Vx)
*/
void System_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  (data->localData[0]->realVars[98]/* d[2].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1159]/* d[2].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[663]/* d[2].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[122]/* d[2].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[456]/* d[2].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[667]/* d[2].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[1]/* d[2].d.Vx STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_496(DATA *data, threadData_t *threadData);


/*
equation index: 191
type: SIMPLE_ASSIGN
$PRE.d[1].d.battery = $START.d[1].d.battery
*/
void System_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  (data->simulationInfo->realVarsPre[467]/* d[1].d.battery DISCRETE */)  = (data->modelData->realVarsData[467]/* d[1].d.battery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 192
type: SIMPLE_ASSIGN
$PRE.d[1].d.droneState = $START.d[1].d.droneState
*/
void System_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  (data->simulationInfo->integerVarsPre[42]/* d[1].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[42]/* d[1].d.droneState DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 193
type: ALGORITHM

  d[1].d.droneDead := $START.d[1].d.droneDead;
  d[1].d.droneState := $START.d[1].d.droneState;
  d[1].d.battery := $START.d[1].d.battery;
  $whenCondition47 := $START.$whenCondition47;
  $whenCondition46 := $START.$whenCondition46;
  $whenCondition46 := abs($PRE.d[1].d.battery) < 0.01;
  $whenCondition47 := false;
  d[1].d.battery := d[1].d.p.capacity;
  d[1].d.droneState := 1;
  d[1].d.droneDead := false;
*/
void System_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  modelica_boolean tmp98;
  (data->localData[0]->booleanVars[128]/* d[1].d.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[128]/* d[1].d.droneDead DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[42]/* d[1].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[42]/* d[1].d.droneState DISCRETE */).attribute .start;

  (data->localData[0]->realVars[467]/* d[1].d.battery DISCRETE */)  = (data->modelData->realVarsData[467]/* d[1].d.battery DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[41]/* $whenCondition47 DISCRETE */)  = (data->modelData->booleanVarsData[41]/* $whenCondition47 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[40]/* $whenCondition46 DISCRETE */)  = (data->modelData->booleanVarsData[40]/* $whenCondition46 DISCRETE */).attribute .start;

  tmp98 = Less(fabs((data->simulationInfo->realVarsPre[467]/* d[1].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[40]/* $whenCondition46 DISCRETE */)  = tmp98;

  (data->localData[0]->booleanVars[41]/* $whenCondition47 DISCRETE */)  = 0;

  (data->localData[0]->realVars[467]/* d[1].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[1622]/* d[1].d.p.capacity PARAM */) ;

  (data->localData[0]->integerVars[42]/* d[1].d.droneState DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->booleanVars[128]/* d[1].d.droneDead DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_478(DATA *data, threadData_t *threadData);

extern void System_eqFunction_477(DATA *data, threadData_t *threadData);


/*
equation index: 196
type: SIMPLE_ASSIGN
d[1].ctrl.destZ = 0.0
*/
void System_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  (data->localData[0]->realVars[463]/* d[1].ctrl.destZ DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.destZ = d[1].ctrl.destZ
*/
void System_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  (data->simulationInfo->realVarsPre[463]/* d[1].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[463]/* d[1].ctrl.destZ DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
d[1].d.Vz = 0.0
*/
void System_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  (data->localData[0]->realVars[8]/* d[1].d.Vz STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_326(DATA *data, threadData_t *threadData);


/*
equation index: 200
type: SIMPLE_ASSIGN
d[1].d.z = d[1].d.p.docking_bay[3] + d[1].d.p.dDistance * (*Real*)(d[1].d.drone_id)
*/
void System_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  (data->localData[0]->realVars[20]/* d[1].d.z STATE(1,d[1].d.Vz) */)  = (data->simulationInfo->realParameter[1656]/* d[1].d.p.docking_bay[3] PARAM */)  + ((data->simulationInfo->realParameter[1638]/* d[1].d.p.dDistance PARAM */) ) * (((modelica_real)(data->simulationInfo->integerParameter[36]/* d[1].d.drone_id PARAM */) ));
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
d[1].ctrl.Trustz = d[1].ctrl.prm.m * (9.81 + d[1].ctrl.kz1 * (d[1].d.z - $PRE.d[1].ctrl.destZ) + d[1].ctrl.kz2 * d[1].d.Vz)
*/
void System_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  (data->localData[0]->realVars[105]/* d[1].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1158]/* d[1].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[678]/* d[1].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[20]/* d[1].d.z STATE(1,d[1].d.Vz) */)  - (data->simulationInfo->realVarsPre[463]/* d[1].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[682]/* d[1].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[8]/* d[1].d.Vz STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_325(DATA *data, threadData_t *threadData);


/*
equation index: 203
type: SIMPLE_ASSIGN
d[1].ctrl.destY = 0.0
*/
void System_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  (data->localData[0]->realVars[459]/* d[1].ctrl.destY DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.destY = d[1].ctrl.destY
*/
void System_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  (data->simulationInfo->realVarsPre[459]/* d[1].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[459]/* d[1].ctrl.destY DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
d[1].d.Vy = 0.0
*/
void System_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  (data->localData[0]->realVars[4]/* d[1].d.Vy STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_327(DATA *data, threadData_t *threadData);


/*
equation index: 207
type: SIMPLE_ASSIGN
d[1].d.y = d[1].d.p.docking_bay[2]
*/
void System_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  (data->localData[0]->realVars[16]/* d[1].d.y STATE(1,d[1].d.Vy) */)  = (data->simulationInfo->realParameter[1655]/* d[1].d.p.docking_bay[2] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_497(DATA *data, threadData_t *threadData);


/*
equation index: 209
type: SIMPLE_ASSIGN
d[1].ctrl.Trusty = d[1].ctrl.prm.m * (d[1].ctrl.ky1 * (d[1].ctrl.y - $PRE.d[1].ctrl.destY) + d[1].ctrl.ky2 * d[1].d.Vy)
*/
void System_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  (data->localData[0]->realVars[101]/* d[1].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1158]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[670]/* d[1].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[125]/* d[1].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[459]/* d[1].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[674]/* d[1].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[4]/* d[1].d.Vy STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_499(DATA *data, threadData_t *threadData);


/*
equation index: 211
type: SIMPLE_ASSIGN
d[1].ctrl.destX = 0.0
*/
void System_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  (data->localData[0]->realVars[455]/* d[1].ctrl.destX DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.destX = d[1].ctrl.destX
*/
void System_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  (data->simulationInfo->realVarsPre[455]/* d[1].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[455]/* d[1].ctrl.destX DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 213
type: SIMPLE_ASSIGN
d[1].d.Vx = 0.0
*/
void System_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  (data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_328(DATA *data, threadData_t *threadData);


/*
equation index: 215
type: SIMPLE_ASSIGN
d[1].d.x = d[1].d.p.docking_bay[1]
*/
void System_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  (data->localData[0]->realVars[12]/* d[1].d.x STATE(1,d[1].d.Vx) */)  = (data->simulationInfo->realParameter[1654]/* d[1].d.p.docking_bay[1] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_500(DATA *data, threadData_t *threadData);


/*
equation index: 217
type: SIMPLE_ASSIGN
d[1].ctrl.Trustx = d[1].ctrl.prm.m * (d[1].ctrl.kx1 * (d[1].ctrl.x - $PRE.d[1].ctrl.destX) + d[1].ctrl.kx2 * d[1].d.Vx)
*/
void System_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  (data->localData[0]->realVars[97]/* d[1].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1158]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[662]/* d[1].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[121]/* d[1].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[455]/* d[1].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[666]/* d[1].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_502(DATA *data, threadData_t *threadData);


/*
equation index: 219
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[4].writesigint = $START.drone_to_cc[4].writesigint
*/
void System_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  (data->simulationInfo->booleanVarsPre[167]/* drone_to_cc[4].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[167]/* drone_to_cc[4].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[4].readsigint = $START.drone_to_cc[4].readsigint
*/
void System_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  (data->simulationInfo->booleanVarsPre[155]/* drone_to_cc[4].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[155]/* drone_to_cc[4].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 221
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[4].fifosize = $START.drone_to_cc[4].fifosize
*/
void System_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  (data->simulationInfo->integerVarsPre[57]/* drone_to_cc[4].fifosize DISCRETE */)  = (data->modelData->integerVarsData[57]/* drone_to_cc[4].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 222
type: ALGORITHM

  drone_to_cc[4].newest := $START.drone_to_cc[4].newest;
  drone_to_cc[4].oldest := $START.drone_to_cc[4].oldest;
  drone_to_cc[4].fifosize := $START.drone_to_cc[4].fifosize;
  drone_to_cc[4].fifo[10,5] := $START.drone_to_cc[4].fifo[10,5];
  drone_to_cc[4].fifo[10,4] := $START.drone_to_cc[4].fifo[10,4];
  drone_to_cc[4].fifo[10,3] := $START.drone_to_cc[4].fifo[10,3];
  drone_to_cc[4].fifo[10,2] := $START.drone_to_cc[4].fifo[10,2];
  drone_to_cc[4].fifo[10,1] := $START.drone_to_cc[4].fifo[10,1];
  drone_to_cc[4].fifo[9,5] := $START.drone_to_cc[4].fifo[9,5];
  drone_to_cc[4].fifo[9,4] := $START.drone_to_cc[4].fifo[9,4];
  drone_to_cc[4].fifo[9,3] := $START.drone_to_cc[4].fifo[9,3];
  drone_to_cc[4].fifo[9,2] := $START.drone_to_cc[4].fifo[9,2];
  drone_to_cc[4].fifo[9,1] := $START.drone_to_cc[4].fifo[9,1];
  drone_to_cc[4].fifo[8,5] := $START.drone_to_cc[4].fifo[8,5];
  drone_to_cc[4].fifo[8,4] := $START.drone_to_cc[4].fifo[8,4];
  drone_to_cc[4].fifo[8,3] := $START.drone_to_cc[4].fifo[8,3];
  drone_to_cc[4].fifo[8,2] := $START.drone_to_cc[4].fifo[8,2];
  drone_to_cc[4].fifo[8,1] := $START.drone_to_cc[4].fifo[8,1];
  drone_to_cc[4].fifo[7,5] := $START.drone_to_cc[4].fifo[7,5];
  drone_to_cc[4].fifo[7,4] := $START.drone_to_cc[4].fifo[7,4];
  drone_to_cc[4].fifo[7,3] := $START.drone_to_cc[4].fifo[7,3];
  drone_to_cc[4].fifo[7,2] := $START.drone_to_cc[4].fifo[7,2];
  drone_to_cc[4].fifo[7,1] := $START.drone_to_cc[4].fifo[7,1];
  drone_to_cc[4].fifo[6,5] := $START.drone_to_cc[4].fifo[6,5];
  drone_to_cc[4].fifo[6,4] := $START.drone_to_cc[4].fifo[6,4];
  drone_to_cc[4].fifo[6,3] := $START.drone_to_cc[4].fifo[6,3];
  drone_to_cc[4].fifo[6,2] := $START.drone_to_cc[4].fifo[6,2];
  drone_to_cc[4].fifo[6,1] := $START.drone_to_cc[4].fifo[6,1];
  drone_to_cc[4].fifo[5,5] := $START.drone_to_cc[4].fifo[5,5];
  drone_to_cc[4].fifo[5,4] := $START.drone_to_cc[4].fifo[5,4];
  drone_to_cc[4].fifo[5,3] := $START.drone_to_cc[4].fifo[5,3];
  drone_to_cc[4].fifo[5,2] := $START.drone_to_cc[4].fifo[5,2];
  drone_to_cc[4].fifo[5,1] := $START.drone_to_cc[4].fifo[5,1];
  drone_to_cc[4].fifo[4,5] := $START.drone_to_cc[4].fifo[4,5];
  drone_to_cc[4].fifo[4,4] := $START.drone_to_cc[4].fifo[4,4];
  drone_to_cc[4].fifo[4,3] := $START.drone_to_cc[4].fifo[4,3];
  drone_to_cc[4].fifo[4,2] := $START.drone_to_cc[4].fifo[4,2];
  drone_to_cc[4].fifo[4,1] := $START.drone_to_cc[4].fifo[4,1];
  drone_to_cc[4].fifo[3,5] := $START.drone_to_cc[4].fifo[3,5];
  drone_to_cc[4].fifo[3,4] := $START.drone_to_cc[4].fifo[3,4];
  drone_to_cc[4].fifo[3,3] := $START.drone_to_cc[4].fifo[3,3];
  drone_to_cc[4].fifo[3,2] := $START.drone_to_cc[4].fifo[3,2];
  drone_to_cc[4].fifo[3,1] := $START.drone_to_cc[4].fifo[3,1];
  drone_to_cc[4].fifo[2,5] := $START.drone_to_cc[4].fifo[2,5];
  drone_to_cc[4].fifo[2,4] := $START.drone_to_cc[4].fifo[2,4];
  drone_to_cc[4].fifo[2,3] := $START.drone_to_cc[4].fifo[2,3];
  drone_to_cc[4].fifo[2,2] := $START.drone_to_cc[4].fifo[2,2];
  drone_to_cc[4].fifo[2,1] := $START.drone_to_cc[4].fifo[2,1];
  drone_to_cc[4].fifo[1,5] := $START.drone_to_cc[4].fifo[1,5];
  drone_to_cc[4].fifo[1,4] := $START.drone_to_cc[4].fifo[1,4];
  drone_to_cc[4].fifo[1,3] := $START.drone_to_cc[4].fifo[1,3];
  drone_to_cc[4].fifo[1,2] := $START.drone_to_cc[4].fifo[1,2];
  drone_to_cc[4].fifo[1,1] := $START.drone_to_cc[4].fifo[1,1];
  drone_to_cc[4].spaceavailable := $START.drone_to_cc[4].spaceavailable;
  drone_to_cc[4].outputdata[5] := $START.drone_to_cc[4].outputdata[5];
  drone_to_cc[4].outputdata[4] := $START.drone_to_cc[4].outputdata[4];
  drone_to_cc[4].outputdata[3] := $START.drone_to_cc[4].outputdata[3];
  drone_to_cc[4].outputdata[2] := $START.drone_to_cc[4].outputdata[2];
  drone_to_cc[4].outputdata[1] := $START.drone_to_cc[4].outputdata[1];
  drone_to_cc[4].datavailable := $START.drone_to_cc[4].datavailable;
  $whenCondition3 := $START.$whenCondition3;
  $whenCondition2 := $START.$whenCondition2;
  $whenCondition1 := $START.$whenCondition1;
  $whenCondition1 := $PRE.drone_to_cc[4].readsigint and $PRE.drone_to_cc[4].writesigint;
  $whenCondition2 := $PRE.drone_to_cc[4].readsigint and not $PRE.drone_to_cc[4].writesigint and $PRE.drone_to_cc[4].fifosize >= 1;
  $whenCondition3 := not $PRE.drone_to_cc[4].readsigint and $PRE.drone_to_cc[4].writesigint and $PRE.drone_to_cc[4].fifosize < 10;
  drone_to_cc[4].datavailable := false;
  for j in 1:5 loop
    drone_to_cc[4].outputdata[j] := 0.0;
  end for;
  drone_to_cc[4].spaceavailable := true;
  for i in 1:10 loop
    for j in 1:5 loop
      drone_to_cc[4].fifo[i,j] := 0.0;
    end for;
  end for;
  drone_to_cc[4].fifosize := 0;
  drone_to_cc[4].oldest := 1;
  drone_to_cc[4].newest := 1;
*/
void System_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  modelica_integer tmp101;
  modelica_integer tmp102;
  modelica_integer tmp103;
  modelica_integer tmp104;
  modelica_integer tmp105;
  modelica_integer tmp106;
  modelica_integer tmp107;
  modelica_integer tmp108;
  modelica_integer tmp109;
  (data->localData[0]->integerVars[61]/* drone_to_cc[4].newest DISCRETE */)  = (data->modelData->integerVarsData[61]/* drone_to_cc[4].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[65]/* drone_to_cc[4].oldest DISCRETE */)  = (data->modelData->integerVarsData[65]/* drone_to_cc[4].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[57]/* drone_to_cc[4].fifosize DISCRETE */)  = (data->modelData->integerVarsData[57]/* drone_to_cc[4].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[702]/* drone_to_cc[4].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[702]/* drone_to_cc[4].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[701]/* drone_to_cc[4].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[701]/* drone_to_cc[4].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[700]/* drone_to_cc[4].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[700]/* drone_to_cc[4].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[699]/* drone_to_cc[4].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[699]/* drone_to_cc[4].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[698]/* drone_to_cc[4].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[698]/* drone_to_cc[4].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[697]/* drone_to_cc[4].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[697]/* drone_to_cc[4].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[696]/* drone_to_cc[4].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[696]/* drone_to_cc[4].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[695]/* drone_to_cc[4].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[695]/* drone_to_cc[4].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[694]/* drone_to_cc[4].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[694]/* drone_to_cc[4].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[693]/* drone_to_cc[4].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[693]/* drone_to_cc[4].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[692]/* drone_to_cc[4].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[692]/* drone_to_cc[4].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[691]/* drone_to_cc[4].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[691]/* drone_to_cc[4].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[690]/* drone_to_cc[4].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[690]/* drone_to_cc[4].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[689]/* drone_to_cc[4].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[689]/* drone_to_cc[4].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[688]/* drone_to_cc[4].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[688]/* drone_to_cc[4].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[687]/* drone_to_cc[4].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[687]/* drone_to_cc[4].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[686]/* drone_to_cc[4].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[686]/* drone_to_cc[4].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[685]/* drone_to_cc[4].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[685]/* drone_to_cc[4].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[684]/* drone_to_cc[4].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[684]/* drone_to_cc[4].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[683]/* drone_to_cc[4].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[683]/* drone_to_cc[4].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[682]/* drone_to_cc[4].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[682]/* drone_to_cc[4].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[681]/* drone_to_cc[4].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[681]/* drone_to_cc[4].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[680]/* drone_to_cc[4].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[680]/* drone_to_cc[4].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[679]/* drone_to_cc[4].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[679]/* drone_to_cc[4].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[678]/* drone_to_cc[4].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[678]/* drone_to_cc[4].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[677]/* drone_to_cc[4].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[677]/* drone_to_cc[4].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[676]/* drone_to_cc[4].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[676]/* drone_to_cc[4].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[675]/* drone_to_cc[4].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[675]/* drone_to_cc[4].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[674]/* drone_to_cc[4].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[674]/* drone_to_cc[4].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[673]/* drone_to_cc[4].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[673]/* drone_to_cc[4].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[672]/* drone_to_cc[4].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[672]/* drone_to_cc[4].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[671]/* drone_to_cc[4].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[671]/* drone_to_cc[4].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[670]/* drone_to_cc[4].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[670]/* drone_to_cc[4].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[669]/* drone_to_cc[4].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[669]/* drone_to_cc[4].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[668]/* drone_to_cc[4].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[668]/* drone_to_cc[4].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[667]/* drone_to_cc[4].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[667]/* drone_to_cc[4].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[666]/* drone_to_cc[4].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[666]/* drone_to_cc[4].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[665]/* drone_to_cc[4].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[665]/* drone_to_cc[4].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[664]/* drone_to_cc[4].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[664]/* drone_to_cc[4].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[663]/* drone_to_cc[4].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[663]/* drone_to_cc[4].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[662]/* drone_to_cc[4].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[662]/* drone_to_cc[4].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[661]/* drone_to_cc[4].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[661]/* drone_to_cc[4].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[660]/* drone_to_cc[4].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[660]/* drone_to_cc[4].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[659]/* drone_to_cc[4].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[659]/* drone_to_cc[4].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[658]/* drone_to_cc[4].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[658]/* drone_to_cc[4].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[657]/* drone_to_cc[4].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[657]/* drone_to_cc[4].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[656]/* drone_to_cc[4].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[656]/* drone_to_cc[4].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[655]/* drone_to_cc[4].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[655]/* drone_to_cc[4].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[654]/* drone_to_cc[4].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[654]/* drone_to_cc[4].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[653]/* drone_to_cc[4].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[653]/* drone_to_cc[4].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[163]/* drone_to_cc[4].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[163]/* drone_to_cc[4].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[722]/* drone_to_cc[4].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[722]/* drone_to_cc[4].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[721]/* drone_to_cc[4].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[721]/* drone_to_cc[4].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[720]/* drone_to_cc[4].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[720]/* drone_to_cc[4].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[719]/* drone_to_cc[4].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[719]/* drone_to_cc[4].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[718]/* drone_to_cc[4].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[718]/* drone_to_cc[4].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[151]/* drone_to_cc[4].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[151]/* drone_to_cc[4].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[22]/* $whenCondition3 DISCRETE */)  = (data->modelData->booleanVarsData[22]/* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[11]/* $whenCondition2 DISCRETE */)  = (data->modelData->booleanVarsData[11]/* $whenCondition2 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = (data->modelData->booleanVarsData[0]/* $whenCondition1 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[155]/* drone_to_cc[4].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[167]/* drone_to_cc[4].writesigint DISCRETE */) );

  tmp99 = GreaterEq((data->simulationInfo->integerVarsPre[57]/* drone_to_cc[4].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[11]/* $whenCondition2 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[155]/* drone_to_cc[4].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[167]/* drone_to_cc[4].writesigint DISCRETE */) )) && tmp99);

  tmp100 = Less((data->simulationInfo->integerVarsPre[57]/* drone_to_cc[4].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[22]/* $whenCondition3 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[155]/* drone_to_cc[4].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[167]/* drone_to_cc[4].writesigint DISCRETE */) ) && tmp100);

  (data->localData[0]->booleanVars[151]/* drone_to_cc[4].datavailable DISCRETE */)  = 0;

  tmp101 = ((modelica_integer) 1); tmp102 = 1; tmp103 = ((modelica_integer) 5);
  if(!(((tmp102 > 0) && (tmp101 > tmp103)) || ((tmp102 < 0) && (tmp101 < tmp103))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp101, tmp103); j += tmp102)
    {
      (&(data->localData[0]->realVars[703]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[163]/* drone_to_cc[4].spaceavailable DISCRETE */)  = 1;

  tmp107 = ((modelica_integer) 1); tmp108 = 1; tmp109 = ((modelica_integer) 10);
  if(!(((tmp108 > 0) && (tmp107 > tmp109)) || ((tmp108 < 0) && (tmp107 < tmp109))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp107, tmp109); i += tmp108)
    {
      tmp104 = ((modelica_integer) 1); tmp105 = 1; tmp106 = ((modelica_integer) 5);
      if(!(((tmp105 > 0) && (tmp104 > tmp106)) || ((tmp105 < 0) && (tmp104 < tmp106))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp104, tmp106); j += tmp105)
        {
          (&(data->localData[0]->realVars[503]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[57]/* drone_to_cc[4].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[65]/* drone_to_cc[4].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[61]/* drone_to_cc[4].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_395(DATA *data, threadData_t *threadData);

extern void System_eqFunction_398(DATA *data, threadData_t *threadData);

extern void System_eqFunction_393(DATA *data, threadData_t *threadData);

extern void System_eqFunction_397(DATA *data, threadData_t *threadData);

extern void System_eqFunction_394(DATA *data, threadData_t *threadData);

extern void System_eqFunction_399(DATA *data, threadData_t *threadData);

extern void System_eqFunction_396(DATA *data, threadData_t *threadData);


/*
equation index: 230
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[3].writesigint = $START.drone_to_cc[3].writesigint
*/
void System_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  (data->simulationInfo->booleanVarsPre[166]/* drone_to_cc[3].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[166]/* drone_to_cc[3].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[3].readsigint = $START.drone_to_cc[3].readsigint
*/
void System_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  (data->simulationInfo->booleanVarsPre[154]/* drone_to_cc[3].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[154]/* drone_to_cc[3].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[3].fifosize = $START.drone_to_cc[3].fifosize
*/
void System_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  (data->simulationInfo->integerVarsPre[56]/* drone_to_cc[3].fifosize DISCRETE */)  = (data->modelData->integerVarsData[56]/* drone_to_cc[3].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 233
type: ALGORITHM

  drone_to_cc[3].newest := $START.drone_to_cc[3].newest;
  drone_to_cc[3].oldest := $START.drone_to_cc[3].oldest;
  drone_to_cc[3].fifosize := $START.drone_to_cc[3].fifosize;
  drone_to_cc[3].fifo[10,5] := $START.drone_to_cc[3].fifo[10,5];
  drone_to_cc[3].fifo[10,4] := $START.drone_to_cc[3].fifo[10,4];
  drone_to_cc[3].fifo[10,3] := $START.drone_to_cc[3].fifo[10,3];
  drone_to_cc[3].fifo[10,2] := $START.drone_to_cc[3].fifo[10,2];
  drone_to_cc[3].fifo[10,1] := $START.drone_to_cc[3].fifo[10,1];
  drone_to_cc[3].fifo[9,5] := $START.drone_to_cc[3].fifo[9,5];
  drone_to_cc[3].fifo[9,4] := $START.drone_to_cc[3].fifo[9,4];
  drone_to_cc[3].fifo[9,3] := $START.drone_to_cc[3].fifo[9,3];
  drone_to_cc[3].fifo[9,2] := $START.drone_to_cc[3].fifo[9,2];
  drone_to_cc[3].fifo[9,1] := $START.drone_to_cc[3].fifo[9,1];
  drone_to_cc[3].fifo[8,5] := $START.drone_to_cc[3].fifo[8,5];
  drone_to_cc[3].fifo[8,4] := $START.drone_to_cc[3].fifo[8,4];
  drone_to_cc[3].fifo[8,3] := $START.drone_to_cc[3].fifo[8,3];
  drone_to_cc[3].fifo[8,2] := $START.drone_to_cc[3].fifo[8,2];
  drone_to_cc[3].fifo[8,1] := $START.drone_to_cc[3].fifo[8,1];
  drone_to_cc[3].fifo[7,5] := $START.drone_to_cc[3].fifo[7,5];
  drone_to_cc[3].fifo[7,4] := $START.drone_to_cc[3].fifo[7,4];
  drone_to_cc[3].fifo[7,3] := $START.drone_to_cc[3].fifo[7,3];
  drone_to_cc[3].fifo[7,2] := $START.drone_to_cc[3].fifo[7,2];
  drone_to_cc[3].fifo[7,1] := $START.drone_to_cc[3].fifo[7,1];
  drone_to_cc[3].fifo[6,5] := $START.drone_to_cc[3].fifo[6,5];
  drone_to_cc[3].fifo[6,4] := $START.drone_to_cc[3].fifo[6,4];
  drone_to_cc[3].fifo[6,3] := $START.drone_to_cc[3].fifo[6,3];
  drone_to_cc[3].fifo[6,2] := $START.drone_to_cc[3].fifo[6,2];
  drone_to_cc[3].fifo[6,1] := $START.drone_to_cc[3].fifo[6,1];
  drone_to_cc[3].fifo[5,5] := $START.drone_to_cc[3].fifo[5,5];
  drone_to_cc[3].fifo[5,4] := $START.drone_to_cc[3].fifo[5,4];
  drone_to_cc[3].fifo[5,3] := $START.drone_to_cc[3].fifo[5,3];
  drone_to_cc[3].fifo[5,2] := $START.drone_to_cc[3].fifo[5,2];
  drone_to_cc[3].fifo[5,1] := $START.drone_to_cc[3].fifo[5,1];
  drone_to_cc[3].fifo[4,5] := $START.drone_to_cc[3].fifo[4,5];
  drone_to_cc[3].fifo[4,4] := $START.drone_to_cc[3].fifo[4,4];
  drone_to_cc[3].fifo[4,3] := $START.drone_to_cc[3].fifo[4,3];
  drone_to_cc[3].fifo[4,2] := $START.drone_to_cc[3].fifo[4,2];
  drone_to_cc[3].fifo[4,1] := $START.drone_to_cc[3].fifo[4,1];
  drone_to_cc[3].fifo[3,5] := $START.drone_to_cc[3].fifo[3,5];
  drone_to_cc[3].fifo[3,4] := $START.drone_to_cc[3].fifo[3,4];
  drone_to_cc[3].fifo[3,3] := $START.drone_to_cc[3].fifo[3,3];
  drone_to_cc[3].fifo[3,2] := $START.drone_to_cc[3].fifo[3,2];
  drone_to_cc[3].fifo[3,1] := $START.drone_to_cc[3].fifo[3,1];
  drone_to_cc[3].fifo[2,5] := $START.drone_to_cc[3].fifo[2,5];
  drone_to_cc[3].fifo[2,4] := $START.drone_to_cc[3].fifo[2,4];
  drone_to_cc[3].fifo[2,3] := $START.drone_to_cc[3].fifo[2,3];
  drone_to_cc[3].fifo[2,2] := $START.drone_to_cc[3].fifo[2,2];
  drone_to_cc[3].fifo[2,1] := $START.drone_to_cc[3].fifo[2,1];
  drone_to_cc[3].fifo[1,5] := $START.drone_to_cc[3].fifo[1,5];
  drone_to_cc[3].fifo[1,4] := $START.drone_to_cc[3].fifo[1,4];
  drone_to_cc[3].fifo[1,3] := $START.drone_to_cc[3].fifo[1,3];
  drone_to_cc[3].fifo[1,2] := $START.drone_to_cc[3].fifo[1,2];
  drone_to_cc[3].fifo[1,1] := $START.drone_to_cc[3].fifo[1,1];
  drone_to_cc[3].spaceavailable := $START.drone_to_cc[3].spaceavailable;
  drone_to_cc[3].outputdata[5] := $START.drone_to_cc[3].outputdata[5];
  drone_to_cc[3].outputdata[4] := $START.drone_to_cc[3].outputdata[4];
  drone_to_cc[3].outputdata[3] := $START.drone_to_cc[3].outputdata[3];
  drone_to_cc[3].outputdata[2] := $START.drone_to_cc[3].outputdata[2];
  drone_to_cc[3].outputdata[1] := $START.drone_to_cc[3].outputdata[1];
  drone_to_cc[3].datavailable := $START.drone_to_cc[3].datavailable;
  $whenCondition6 := $START.$whenCondition6;
  $whenCondition5 := $START.$whenCondition5;
  $whenCondition4 := $START.$whenCondition4;
  $whenCondition4 := $PRE.drone_to_cc[3].readsigint and $PRE.drone_to_cc[3].writesigint;
  $whenCondition5 := $PRE.drone_to_cc[3].readsigint and not $PRE.drone_to_cc[3].writesigint and $PRE.drone_to_cc[3].fifosize >= 1;
  $whenCondition6 := not $PRE.drone_to_cc[3].readsigint and $PRE.drone_to_cc[3].writesigint and $PRE.drone_to_cc[3].fifosize < 10;
  drone_to_cc[3].datavailable := false;
  for j in 1:5 loop
    drone_to_cc[3].outputdata[j] := 0.0;
  end for;
  drone_to_cc[3].spaceavailable := true;
  for i in 1:10 loop
    for j in 1:5 loop
      drone_to_cc[3].fifo[i,j] := 0.0;
    end for;
  end for;
  drone_to_cc[3].fifosize := 0;
  drone_to_cc[3].oldest := 1;
  drone_to_cc[3].newest := 1;
*/
void System_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  modelica_integer tmp112;
  modelica_integer tmp113;
  modelica_integer tmp114;
  modelica_integer tmp115;
  modelica_integer tmp116;
  modelica_integer tmp117;
  modelica_integer tmp118;
  modelica_integer tmp119;
  modelica_integer tmp120;
  (data->localData[0]->integerVars[60]/* drone_to_cc[3].newest DISCRETE */)  = (data->modelData->integerVarsData[60]/* drone_to_cc[3].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[64]/* drone_to_cc[3].oldest DISCRETE */)  = (data->modelData->integerVarsData[64]/* drone_to_cc[3].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[56]/* drone_to_cc[3].fifosize DISCRETE */)  = (data->modelData->integerVarsData[56]/* drone_to_cc[3].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[652]/* drone_to_cc[3].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[652]/* drone_to_cc[3].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[651]/* drone_to_cc[3].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[651]/* drone_to_cc[3].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[650]/* drone_to_cc[3].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[650]/* drone_to_cc[3].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[649]/* drone_to_cc[3].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[649]/* drone_to_cc[3].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[648]/* drone_to_cc[3].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[648]/* drone_to_cc[3].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[647]/* drone_to_cc[3].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[647]/* drone_to_cc[3].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[646]/* drone_to_cc[3].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[646]/* drone_to_cc[3].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[645]/* drone_to_cc[3].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[645]/* drone_to_cc[3].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[644]/* drone_to_cc[3].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[644]/* drone_to_cc[3].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[643]/* drone_to_cc[3].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[643]/* drone_to_cc[3].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[642]/* drone_to_cc[3].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[642]/* drone_to_cc[3].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[641]/* drone_to_cc[3].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[641]/* drone_to_cc[3].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[640]/* drone_to_cc[3].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[640]/* drone_to_cc[3].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[639]/* drone_to_cc[3].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[639]/* drone_to_cc[3].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[638]/* drone_to_cc[3].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[638]/* drone_to_cc[3].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[637]/* drone_to_cc[3].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[637]/* drone_to_cc[3].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[636]/* drone_to_cc[3].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[636]/* drone_to_cc[3].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[635]/* drone_to_cc[3].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[635]/* drone_to_cc[3].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[634]/* drone_to_cc[3].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[634]/* drone_to_cc[3].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[633]/* drone_to_cc[3].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[633]/* drone_to_cc[3].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[632]/* drone_to_cc[3].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[632]/* drone_to_cc[3].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[631]/* drone_to_cc[3].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[631]/* drone_to_cc[3].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[630]/* drone_to_cc[3].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[630]/* drone_to_cc[3].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[629]/* drone_to_cc[3].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[629]/* drone_to_cc[3].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[628]/* drone_to_cc[3].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[628]/* drone_to_cc[3].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[627]/* drone_to_cc[3].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[627]/* drone_to_cc[3].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[626]/* drone_to_cc[3].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[626]/* drone_to_cc[3].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[625]/* drone_to_cc[3].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[625]/* drone_to_cc[3].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[624]/* drone_to_cc[3].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[624]/* drone_to_cc[3].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[623]/* drone_to_cc[3].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[623]/* drone_to_cc[3].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[622]/* drone_to_cc[3].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[622]/* drone_to_cc[3].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[621]/* drone_to_cc[3].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[621]/* drone_to_cc[3].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[620]/* drone_to_cc[3].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[620]/* drone_to_cc[3].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[619]/* drone_to_cc[3].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[619]/* drone_to_cc[3].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[618]/* drone_to_cc[3].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[618]/* drone_to_cc[3].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[617]/* drone_to_cc[3].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[617]/* drone_to_cc[3].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[616]/* drone_to_cc[3].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[616]/* drone_to_cc[3].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[615]/* drone_to_cc[3].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[615]/* drone_to_cc[3].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[614]/* drone_to_cc[3].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[614]/* drone_to_cc[3].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[613]/* drone_to_cc[3].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[613]/* drone_to_cc[3].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[612]/* drone_to_cc[3].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[612]/* drone_to_cc[3].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[611]/* drone_to_cc[3].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[611]/* drone_to_cc[3].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[610]/* drone_to_cc[3].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[610]/* drone_to_cc[3].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[609]/* drone_to_cc[3].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[609]/* drone_to_cc[3].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[608]/* drone_to_cc[3].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[608]/* drone_to_cc[3].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[607]/* drone_to_cc[3].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[607]/* drone_to_cc[3].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[606]/* drone_to_cc[3].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[606]/* drone_to_cc[3].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[605]/* drone_to_cc[3].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[605]/* drone_to_cc[3].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[604]/* drone_to_cc[3].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[604]/* drone_to_cc[3].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[603]/* drone_to_cc[3].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[603]/* drone_to_cc[3].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[162]/* drone_to_cc[3].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[162]/* drone_to_cc[3].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[717]/* drone_to_cc[3].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[717]/* drone_to_cc[3].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[716]/* drone_to_cc[3].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[716]/* drone_to_cc[3].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[715]/* drone_to_cc[3].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[715]/* drone_to_cc[3].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[714]/* drone_to_cc[3].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[714]/* drone_to_cc[3].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[713]/* drone_to_cc[3].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[713]/* drone_to_cc[3].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[150]/* drone_to_cc[3].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[150]/* drone_to_cc[3].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[43]/* $whenCondition6 DISCRETE */)  = (data->modelData->booleanVarsData[43]/* $whenCondition6 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[42]/* $whenCondition5 DISCRETE */)  = (data->modelData->booleanVarsData[42]/* $whenCondition5 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[33]/* $whenCondition4 DISCRETE */)  = (data->modelData->booleanVarsData[33]/* $whenCondition4 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[33]/* $whenCondition4 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[154]/* drone_to_cc[3].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[166]/* drone_to_cc[3].writesigint DISCRETE */) );

  tmp110 = GreaterEq((data->simulationInfo->integerVarsPre[56]/* drone_to_cc[3].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[42]/* $whenCondition5 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[154]/* drone_to_cc[3].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[166]/* drone_to_cc[3].writesigint DISCRETE */) )) && tmp110);

  tmp111 = Less((data->simulationInfo->integerVarsPre[56]/* drone_to_cc[3].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[43]/* $whenCondition6 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[154]/* drone_to_cc[3].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[166]/* drone_to_cc[3].writesigint DISCRETE */) ) && tmp111);

  (data->localData[0]->booleanVars[150]/* drone_to_cc[3].datavailable DISCRETE */)  = 0;

  tmp112 = ((modelica_integer) 1); tmp113 = 1; tmp114 = ((modelica_integer) 5);
  if(!(((tmp113 > 0) && (tmp112 > tmp114)) || ((tmp113 < 0) && (tmp112 < tmp114))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp112, tmp114); j += tmp113)
    {
      (&(data->localData[0]->realVars[703]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[162]/* drone_to_cc[3].spaceavailable DISCRETE */)  = 1;

  tmp118 = ((modelica_integer) 1); tmp119 = 1; tmp120 = ((modelica_integer) 10);
  if(!(((tmp119 > 0) && (tmp118 > tmp120)) || ((tmp119 < 0) && (tmp118 < tmp120))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp118, tmp120); i += tmp119)
    {
      tmp115 = ((modelica_integer) 1); tmp116 = 1; tmp117 = ((modelica_integer) 5);
      if(!(((tmp116 > 0) && (tmp115 > tmp117)) || ((tmp116 < 0) && (tmp115 < tmp117))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp115, tmp117); j += tmp116)
        {
          (&(data->localData[0]->realVars[503]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[56]/* drone_to_cc[3].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[64]/* drone_to_cc[3].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[60]/* drone_to_cc[3].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_426(DATA *data, threadData_t *threadData);

extern void System_eqFunction_421(DATA *data, threadData_t *threadData);

extern void System_eqFunction_425(DATA *data, threadData_t *threadData);

extern void System_eqFunction_423(DATA *data, threadData_t *threadData);

extern void System_eqFunction_422(DATA *data, threadData_t *threadData);

extern void System_eqFunction_420(DATA *data, threadData_t *threadData);

extern void System_eqFunction_424(DATA *data, threadData_t *threadData);


/*
equation index: 241
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[2].writesigint = $START.drone_to_cc[2].writesigint
*/
void System_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  (data->simulationInfo->booleanVarsPre[165]/* drone_to_cc[2].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[165]/* drone_to_cc[2].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[2].readsigint = $START.drone_to_cc[2].readsigint
*/
void System_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  (data->simulationInfo->booleanVarsPre[153]/* drone_to_cc[2].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[153]/* drone_to_cc[2].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[2].fifosize = $START.drone_to_cc[2].fifosize
*/
void System_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  (data->simulationInfo->integerVarsPre[55]/* drone_to_cc[2].fifosize DISCRETE */)  = (data->modelData->integerVarsData[55]/* drone_to_cc[2].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 244
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
  $whenCondition9 := $START.$whenCondition9;
  $whenCondition8 := $START.$whenCondition8;
  $whenCondition7 := $START.$whenCondition7;
  $whenCondition7 := $PRE.drone_to_cc[2].readsigint and $PRE.drone_to_cc[2].writesigint;
  $whenCondition8 := $PRE.drone_to_cc[2].readsigint and not $PRE.drone_to_cc[2].writesigint and $PRE.drone_to_cc[2].fifosize >= 1;
  $whenCondition9 := not $PRE.drone_to_cc[2].readsigint and $PRE.drone_to_cc[2].writesigint and $PRE.drone_to_cc[2].fifosize < 10;
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
void System_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  modelica_integer tmp123;
  modelica_integer tmp124;
  modelica_integer tmp125;
  modelica_integer tmp126;
  modelica_integer tmp127;
  modelica_integer tmp128;
  modelica_integer tmp129;
  modelica_integer tmp130;
  modelica_integer tmp131;
  (data->localData[0]->integerVars[59]/* drone_to_cc[2].newest DISCRETE */)  = (data->modelData->integerVarsData[59]/* drone_to_cc[2].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[63]/* drone_to_cc[2].oldest DISCRETE */)  = (data->modelData->integerVarsData[63]/* drone_to_cc[2].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[55]/* drone_to_cc[2].fifosize DISCRETE */)  = (data->modelData->integerVarsData[55]/* drone_to_cc[2].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[602]/* drone_to_cc[2].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[602]/* drone_to_cc[2].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[601]/* drone_to_cc[2].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[601]/* drone_to_cc[2].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[600]/* drone_to_cc[2].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[600]/* drone_to_cc[2].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[599]/* drone_to_cc[2].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[599]/* drone_to_cc[2].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[598]/* drone_to_cc[2].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[598]/* drone_to_cc[2].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[597]/* drone_to_cc[2].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[597]/* drone_to_cc[2].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[596]/* drone_to_cc[2].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[596]/* drone_to_cc[2].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[595]/* drone_to_cc[2].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[595]/* drone_to_cc[2].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[594]/* drone_to_cc[2].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[594]/* drone_to_cc[2].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[593]/* drone_to_cc[2].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[593]/* drone_to_cc[2].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[592]/* drone_to_cc[2].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[592]/* drone_to_cc[2].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[591]/* drone_to_cc[2].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[591]/* drone_to_cc[2].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[590]/* drone_to_cc[2].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[590]/* drone_to_cc[2].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[589]/* drone_to_cc[2].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[589]/* drone_to_cc[2].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[588]/* drone_to_cc[2].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[588]/* drone_to_cc[2].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[587]/* drone_to_cc[2].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[587]/* drone_to_cc[2].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[586]/* drone_to_cc[2].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[586]/* drone_to_cc[2].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[585]/* drone_to_cc[2].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[585]/* drone_to_cc[2].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[584]/* drone_to_cc[2].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[584]/* drone_to_cc[2].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[583]/* drone_to_cc[2].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[583]/* drone_to_cc[2].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[582]/* drone_to_cc[2].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[582]/* drone_to_cc[2].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[581]/* drone_to_cc[2].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[581]/* drone_to_cc[2].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[580]/* drone_to_cc[2].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[580]/* drone_to_cc[2].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[579]/* drone_to_cc[2].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[579]/* drone_to_cc[2].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[578]/* drone_to_cc[2].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[578]/* drone_to_cc[2].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[577]/* drone_to_cc[2].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[577]/* drone_to_cc[2].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[576]/* drone_to_cc[2].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[576]/* drone_to_cc[2].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[575]/* drone_to_cc[2].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[575]/* drone_to_cc[2].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[574]/* drone_to_cc[2].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[574]/* drone_to_cc[2].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[573]/* drone_to_cc[2].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[573]/* drone_to_cc[2].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[572]/* drone_to_cc[2].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[572]/* drone_to_cc[2].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[571]/* drone_to_cc[2].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[571]/* drone_to_cc[2].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[570]/* drone_to_cc[2].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[570]/* drone_to_cc[2].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[569]/* drone_to_cc[2].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[569]/* drone_to_cc[2].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[568]/* drone_to_cc[2].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[568]/* drone_to_cc[2].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[567]/* drone_to_cc[2].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[567]/* drone_to_cc[2].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[566]/* drone_to_cc[2].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[566]/* drone_to_cc[2].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[565]/* drone_to_cc[2].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[565]/* drone_to_cc[2].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[564]/* drone_to_cc[2].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[564]/* drone_to_cc[2].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[563]/* drone_to_cc[2].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[563]/* drone_to_cc[2].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[562]/* drone_to_cc[2].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[562]/* drone_to_cc[2].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[561]/* drone_to_cc[2].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[561]/* drone_to_cc[2].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[560]/* drone_to_cc[2].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[560]/* drone_to_cc[2].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[559]/* drone_to_cc[2].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[559]/* drone_to_cc[2].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[558]/* drone_to_cc[2].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[558]/* drone_to_cc[2].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[557]/* drone_to_cc[2].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[557]/* drone_to_cc[2].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[556]/* drone_to_cc[2].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[556]/* drone_to_cc[2].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[555]/* drone_to_cc[2].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[555]/* drone_to_cc[2].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[554]/* drone_to_cc[2].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[554]/* drone_to_cc[2].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[553]/* drone_to_cc[2].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[553]/* drone_to_cc[2].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[161]/* drone_to_cc[2].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[161]/* drone_to_cc[2].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[712]/* drone_to_cc[2].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[712]/* drone_to_cc[2].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[711]/* drone_to_cc[2].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[711]/* drone_to_cc[2].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[710]/* drone_to_cc[2].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[710]/* drone_to_cc[2].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[709]/* drone_to_cc[2].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[709]/* drone_to_cc[2].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[708]/* drone_to_cc[2].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[708]/* drone_to_cc[2].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[149]/* drone_to_cc[2].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[149]/* drone_to_cc[2].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[46]/* $whenCondition9 DISCRETE */)  = (data->modelData->booleanVarsData[46]/* $whenCondition9 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[45]/* $whenCondition8 DISCRETE */)  = (data->modelData->booleanVarsData[45]/* $whenCondition8 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[44]/* $whenCondition7 DISCRETE */)  = (data->modelData->booleanVarsData[44]/* $whenCondition7 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[44]/* $whenCondition7 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[153]/* drone_to_cc[2].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[165]/* drone_to_cc[2].writesigint DISCRETE */) );

  tmp121 = GreaterEq((data->simulationInfo->integerVarsPre[55]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[45]/* $whenCondition8 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[153]/* drone_to_cc[2].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[165]/* drone_to_cc[2].writesigint DISCRETE */) )) && tmp121);

  tmp122 = Less((data->simulationInfo->integerVarsPre[55]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[46]/* $whenCondition9 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[153]/* drone_to_cc[2].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[165]/* drone_to_cc[2].writesigint DISCRETE */) ) && tmp122);

  (data->localData[0]->booleanVars[149]/* drone_to_cc[2].datavailable DISCRETE */)  = 0;

  tmp123 = ((modelica_integer) 1); tmp124 = 1; tmp125 = ((modelica_integer) 5);
  if(!(((tmp124 > 0) && (tmp123 > tmp125)) || ((tmp124 < 0) && (tmp123 < tmp125))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp123, tmp125); j += tmp124)
    {
      (&(data->localData[0]->realVars[703]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[161]/* drone_to_cc[2].spaceavailable DISCRETE */)  = 1;

  tmp129 = ((modelica_integer) 1); tmp130 = 1; tmp131 = ((modelica_integer) 10);
  if(!(((tmp130 > 0) && (tmp129 > tmp131)) || ((tmp130 < 0) && (tmp129 < tmp131))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp129, tmp131); i += tmp130)
    {
      tmp126 = ((modelica_integer) 1); tmp127 = 1; tmp128 = ((modelica_integer) 5);
      if(!(((tmp127 > 0) && (tmp126 > tmp128)) || ((tmp127 < 0) && (tmp126 < tmp128))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp126, tmp128); j += tmp127)
        {
          (&(data->localData[0]->realVars[503]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[55]/* drone_to_cc[2].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[63]/* drone_to_cc[2].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[59]/* drone_to_cc[2].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_445(DATA *data, threadData_t *threadData);

extern void System_eqFunction_449(DATA *data, threadData_t *threadData);

extern void System_eqFunction_446(DATA *data, threadData_t *threadData);

extern void System_eqFunction_444(DATA *data, threadData_t *threadData);

extern void System_eqFunction_448(DATA *data, threadData_t *threadData);

extern void System_eqFunction_450(DATA *data, threadData_t *threadData);

extern void System_eqFunction_447(DATA *data, threadData_t *threadData);


/*
equation index: 252
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].writesigint = $START.drone_to_cc[1].writesigint
*/
void System_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  (data->simulationInfo->booleanVarsPre[164]/* drone_to_cc[1].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[164]/* drone_to_cc[1].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].readsigint = $START.drone_to_cc[1].readsigint
*/
void System_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  (data->simulationInfo->booleanVarsPre[152]/* drone_to_cc[1].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[152]/* drone_to_cc[1].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].fifosize = $START.drone_to_cc[1].fifosize
*/
void System_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  (data->simulationInfo->integerVarsPre[54]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->modelData->integerVarsData[54]/* drone_to_cc[1].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 255
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
  $whenCondition12 := $START.$whenCondition12;
  $whenCondition11 := $START.$whenCondition11;
  $whenCondition10 := $START.$whenCondition10;
  $whenCondition10 := $PRE.drone_to_cc[1].readsigint and $PRE.drone_to_cc[1].writesigint;
  $whenCondition11 := $PRE.drone_to_cc[1].readsigint and not $PRE.drone_to_cc[1].writesigint and $PRE.drone_to_cc[1].fifosize >= 1;
  $whenCondition12 := not $PRE.drone_to_cc[1].readsigint and $PRE.drone_to_cc[1].writesigint and $PRE.drone_to_cc[1].fifosize < 10;
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
void System_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  modelica_integer tmp134;
  modelica_integer tmp135;
  modelica_integer tmp136;
  modelica_integer tmp137;
  modelica_integer tmp138;
  modelica_integer tmp139;
  modelica_integer tmp140;
  modelica_integer tmp141;
  modelica_integer tmp142;
  (data->localData[0]->integerVars[58]/* drone_to_cc[1].newest DISCRETE */)  = (data->modelData->integerVarsData[58]/* drone_to_cc[1].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[62]/* drone_to_cc[1].oldest DISCRETE */)  = (data->modelData->integerVarsData[62]/* drone_to_cc[1].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[54]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->modelData->integerVarsData[54]/* drone_to_cc[1].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[552]/* drone_to_cc[1].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[552]/* drone_to_cc[1].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[551]/* drone_to_cc[1].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[551]/* drone_to_cc[1].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[550]/* drone_to_cc[1].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[550]/* drone_to_cc[1].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[549]/* drone_to_cc[1].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[549]/* drone_to_cc[1].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[548]/* drone_to_cc[1].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[548]/* drone_to_cc[1].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[547]/* drone_to_cc[1].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[547]/* drone_to_cc[1].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[546]/* drone_to_cc[1].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[546]/* drone_to_cc[1].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[545]/* drone_to_cc[1].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[545]/* drone_to_cc[1].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[544]/* drone_to_cc[1].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[544]/* drone_to_cc[1].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[543]/* drone_to_cc[1].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[543]/* drone_to_cc[1].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[542]/* drone_to_cc[1].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[542]/* drone_to_cc[1].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[541]/* drone_to_cc[1].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[541]/* drone_to_cc[1].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[540]/* drone_to_cc[1].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[540]/* drone_to_cc[1].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[539]/* drone_to_cc[1].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[539]/* drone_to_cc[1].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[538]/* drone_to_cc[1].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[538]/* drone_to_cc[1].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[537]/* drone_to_cc[1].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[537]/* drone_to_cc[1].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[536]/* drone_to_cc[1].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[536]/* drone_to_cc[1].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[535]/* drone_to_cc[1].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[535]/* drone_to_cc[1].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[534]/* drone_to_cc[1].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[534]/* drone_to_cc[1].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[533]/* drone_to_cc[1].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[533]/* drone_to_cc[1].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[532]/* drone_to_cc[1].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[532]/* drone_to_cc[1].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[531]/* drone_to_cc[1].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[531]/* drone_to_cc[1].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[530]/* drone_to_cc[1].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[530]/* drone_to_cc[1].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[529]/* drone_to_cc[1].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[529]/* drone_to_cc[1].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[528]/* drone_to_cc[1].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[528]/* drone_to_cc[1].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[527]/* drone_to_cc[1].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[527]/* drone_to_cc[1].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[526]/* drone_to_cc[1].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[526]/* drone_to_cc[1].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[525]/* drone_to_cc[1].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[525]/* drone_to_cc[1].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[524]/* drone_to_cc[1].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[524]/* drone_to_cc[1].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[523]/* drone_to_cc[1].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[523]/* drone_to_cc[1].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[522]/* drone_to_cc[1].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[522]/* drone_to_cc[1].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[521]/* drone_to_cc[1].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[521]/* drone_to_cc[1].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[520]/* drone_to_cc[1].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[520]/* drone_to_cc[1].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[519]/* drone_to_cc[1].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[519]/* drone_to_cc[1].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[518]/* drone_to_cc[1].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[518]/* drone_to_cc[1].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[517]/* drone_to_cc[1].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[517]/* drone_to_cc[1].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[516]/* drone_to_cc[1].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[516]/* drone_to_cc[1].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[515]/* drone_to_cc[1].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[515]/* drone_to_cc[1].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[514]/* drone_to_cc[1].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[514]/* drone_to_cc[1].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[513]/* drone_to_cc[1].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[513]/* drone_to_cc[1].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[512]/* drone_to_cc[1].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[512]/* drone_to_cc[1].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[511]/* drone_to_cc[1].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[511]/* drone_to_cc[1].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[510]/* drone_to_cc[1].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[510]/* drone_to_cc[1].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[509]/* drone_to_cc[1].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[509]/* drone_to_cc[1].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[508]/* drone_to_cc[1].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[508]/* drone_to_cc[1].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[507]/* drone_to_cc[1].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[507]/* drone_to_cc[1].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[506]/* drone_to_cc[1].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[506]/* drone_to_cc[1].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[505]/* drone_to_cc[1].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[505]/* drone_to_cc[1].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[504]/* drone_to_cc[1].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[504]/* drone_to_cc[1].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[503]/* drone_to_cc[1].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[503]/* drone_to_cc[1].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[160]/* drone_to_cc[1].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[160]/* drone_to_cc[1].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[707]/* drone_to_cc[1].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[707]/* drone_to_cc[1].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[706]/* drone_to_cc[1].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[706]/* drone_to_cc[1].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[705]/* drone_to_cc[1].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[705]/* drone_to_cc[1].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[704]/* drone_to_cc[1].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[704]/* drone_to_cc[1].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[703]/* drone_to_cc[1].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[703]/* drone_to_cc[1].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[148]/* drone_to_cc[1].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[148]/* drone_to_cc[1].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = (data->modelData->booleanVarsData[3]/* $whenCondition12 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (data->modelData->booleanVarsData[2]/* $whenCondition11 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = (data->modelData->booleanVarsData[1]/* $whenCondition10 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[152]/* drone_to_cc[1].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[164]/* drone_to_cc[1].writesigint DISCRETE */) );

  tmp132 = GreaterEq((data->simulationInfo->integerVarsPre[54]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[152]/* drone_to_cc[1].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[164]/* drone_to_cc[1].writesigint DISCRETE */) )) && tmp132);

  tmp133 = Less((data->simulationInfo->integerVarsPre[54]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[152]/* drone_to_cc[1].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[164]/* drone_to_cc[1].writesigint DISCRETE */) ) && tmp133);

  (data->localData[0]->booleanVars[148]/* drone_to_cc[1].datavailable DISCRETE */)  = 0;

  tmp134 = ((modelica_integer) 1); tmp135 = 1; tmp136 = ((modelica_integer) 5);
  if(!(((tmp135 > 0) && (tmp134 > tmp136)) || ((tmp135 < 0) && (tmp134 < tmp136))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp134, tmp136); j += tmp135)
    {
      (&(data->localData[0]->realVars[703]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[160]/* drone_to_cc[1].spaceavailable DISCRETE */)  = 1;

  tmp140 = ((modelica_integer) 1); tmp141 = 1; tmp142 = ((modelica_integer) 10);
  if(!(((tmp141 > 0) && (tmp140 > tmp142)) || ((tmp141 < 0) && (tmp140 < tmp142))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp140, tmp142); i += tmp141)
    {
      tmp137 = ((modelica_integer) 1); tmp138 = 1; tmp139 = ((modelica_integer) 5);
      if(!(((tmp138 > 0) && (tmp137 > tmp139)) || ((tmp138 < 0) && (tmp137 < tmp139))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp137, tmp139); j += tmp138)
        {
          (&(data->localData[0]->realVars[503]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[54]/* drone_to_cc[1].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[62]/* drone_to_cc[1].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[58]/* drone_to_cc[1].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_471(DATA *data, threadData_t *threadData);

extern void System_eqFunction_472(DATA *data, threadData_t *threadData);

extern void System_eqFunction_470(DATA *data, threadData_t *threadData);

extern void System_eqFunction_473(DATA *data, threadData_t *threadData);

extern void System_eqFunction_476(DATA *data, threadData_t *threadData);

extern void System_eqFunction_475(DATA *data, threadData_t *threadData);

extern void System_eqFunction_474(DATA *data, threadData_t *threadData);


/*
equation index: 263
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[4].writesigint = $START.cc_to_drone[4].writesigint
*/
void System_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  (data->simulationInfo->booleanVarsPre[119]/* cc_to_drone[4].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[119]/* cc_to_drone[4].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[4].readsigint = $START.cc_to_drone[4].readsigint
*/
void System_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  (data->simulationInfo->booleanVarsPre[107]/* cc_to_drone[4].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[107]/* cc_to_drone[4].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[4].fifosize = $START.cc_to_drone[4].fifosize
*/
void System_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  (data->simulationInfo->integerVarsPre[29]/* cc_to_drone[4].fifosize DISCRETE */)  = (data->modelData->integerVarsData[29]/* cc_to_drone[4].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 266
type: ALGORITHM

  cc_to_drone[4].newest := $START.cc_to_drone[4].newest;
  cc_to_drone[4].oldest := $START.cc_to_drone[4].oldest;
  cc_to_drone[4].fifosize := $START.cc_to_drone[4].fifosize;
  cc_to_drone[4].fifo[10,5] := $START.cc_to_drone[4].fifo[10,5];
  cc_to_drone[4].fifo[10,4] := $START.cc_to_drone[4].fifo[10,4];
  cc_to_drone[4].fifo[10,3] := $START.cc_to_drone[4].fifo[10,3];
  cc_to_drone[4].fifo[10,2] := $START.cc_to_drone[4].fifo[10,2];
  cc_to_drone[4].fifo[10,1] := $START.cc_to_drone[4].fifo[10,1];
  cc_to_drone[4].fifo[9,5] := $START.cc_to_drone[4].fifo[9,5];
  cc_to_drone[4].fifo[9,4] := $START.cc_to_drone[4].fifo[9,4];
  cc_to_drone[4].fifo[9,3] := $START.cc_to_drone[4].fifo[9,3];
  cc_to_drone[4].fifo[9,2] := $START.cc_to_drone[4].fifo[9,2];
  cc_to_drone[4].fifo[9,1] := $START.cc_to_drone[4].fifo[9,1];
  cc_to_drone[4].fifo[8,5] := $START.cc_to_drone[4].fifo[8,5];
  cc_to_drone[4].fifo[8,4] := $START.cc_to_drone[4].fifo[8,4];
  cc_to_drone[4].fifo[8,3] := $START.cc_to_drone[4].fifo[8,3];
  cc_to_drone[4].fifo[8,2] := $START.cc_to_drone[4].fifo[8,2];
  cc_to_drone[4].fifo[8,1] := $START.cc_to_drone[4].fifo[8,1];
  cc_to_drone[4].fifo[7,5] := $START.cc_to_drone[4].fifo[7,5];
  cc_to_drone[4].fifo[7,4] := $START.cc_to_drone[4].fifo[7,4];
  cc_to_drone[4].fifo[7,3] := $START.cc_to_drone[4].fifo[7,3];
  cc_to_drone[4].fifo[7,2] := $START.cc_to_drone[4].fifo[7,2];
  cc_to_drone[4].fifo[7,1] := $START.cc_to_drone[4].fifo[7,1];
  cc_to_drone[4].fifo[6,5] := $START.cc_to_drone[4].fifo[6,5];
  cc_to_drone[4].fifo[6,4] := $START.cc_to_drone[4].fifo[6,4];
  cc_to_drone[4].fifo[6,3] := $START.cc_to_drone[4].fifo[6,3];
  cc_to_drone[4].fifo[6,2] := $START.cc_to_drone[4].fifo[6,2];
  cc_to_drone[4].fifo[6,1] := $START.cc_to_drone[4].fifo[6,1];
  cc_to_drone[4].fifo[5,5] := $START.cc_to_drone[4].fifo[5,5];
  cc_to_drone[4].fifo[5,4] := $START.cc_to_drone[4].fifo[5,4];
  cc_to_drone[4].fifo[5,3] := $START.cc_to_drone[4].fifo[5,3];
  cc_to_drone[4].fifo[5,2] := $START.cc_to_drone[4].fifo[5,2];
  cc_to_drone[4].fifo[5,1] := $START.cc_to_drone[4].fifo[5,1];
  cc_to_drone[4].fifo[4,5] := $START.cc_to_drone[4].fifo[4,5];
  cc_to_drone[4].fifo[4,4] := $START.cc_to_drone[4].fifo[4,4];
  cc_to_drone[4].fifo[4,3] := $START.cc_to_drone[4].fifo[4,3];
  cc_to_drone[4].fifo[4,2] := $START.cc_to_drone[4].fifo[4,2];
  cc_to_drone[4].fifo[4,1] := $START.cc_to_drone[4].fifo[4,1];
  cc_to_drone[4].fifo[3,5] := $START.cc_to_drone[4].fifo[3,5];
  cc_to_drone[4].fifo[3,4] := $START.cc_to_drone[4].fifo[3,4];
  cc_to_drone[4].fifo[3,3] := $START.cc_to_drone[4].fifo[3,3];
  cc_to_drone[4].fifo[3,2] := $START.cc_to_drone[4].fifo[3,2];
  cc_to_drone[4].fifo[3,1] := $START.cc_to_drone[4].fifo[3,1];
  cc_to_drone[4].fifo[2,5] := $START.cc_to_drone[4].fifo[2,5];
  cc_to_drone[4].fifo[2,4] := $START.cc_to_drone[4].fifo[2,4];
  cc_to_drone[4].fifo[2,3] := $START.cc_to_drone[4].fifo[2,3];
  cc_to_drone[4].fifo[2,2] := $START.cc_to_drone[4].fifo[2,2];
  cc_to_drone[4].fifo[2,1] := $START.cc_to_drone[4].fifo[2,1];
  cc_to_drone[4].fifo[1,5] := $START.cc_to_drone[4].fifo[1,5];
  cc_to_drone[4].fifo[1,4] := $START.cc_to_drone[4].fifo[1,4];
  cc_to_drone[4].fifo[1,3] := $START.cc_to_drone[4].fifo[1,3];
  cc_to_drone[4].fifo[1,2] := $START.cc_to_drone[4].fifo[1,2];
  cc_to_drone[4].fifo[1,1] := $START.cc_to_drone[4].fifo[1,1];
  cc_to_drone[4].spaceavailable := $START.cc_to_drone[4].spaceavailable;
  cc_to_drone[4].outputdata[5] := $START.cc_to_drone[4].outputdata[5];
  cc_to_drone[4].outputdata[4] := $START.cc_to_drone[4].outputdata[4];
  cc_to_drone[4].outputdata[3] := $START.cc_to_drone[4].outputdata[3];
  cc_to_drone[4].outputdata[2] := $START.cc_to_drone[4].outputdata[2];
  cc_to_drone[4].outputdata[1] := $START.cc_to_drone[4].outputdata[1];
  cc_to_drone[4].datavailable := $START.cc_to_drone[4].datavailable;
  $whenCondition15 := $START.$whenCondition15;
  $whenCondition14 := $START.$whenCondition14;
  $whenCondition13 := $START.$whenCondition13;
  $whenCondition13 := $PRE.cc_to_drone[4].readsigint and $PRE.cc_to_drone[4].writesigint;
  $whenCondition14 := $PRE.cc_to_drone[4].readsigint and not $PRE.cc_to_drone[4].writesigint and $PRE.cc_to_drone[4].fifosize >= 1;
  $whenCondition15 := not $PRE.cc_to_drone[4].readsigint and $PRE.cc_to_drone[4].writesigint and $PRE.cc_to_drone[4].fifosize < 10;
  cc_to_drone[4].datavailable := false;
  for j in 1:5 loop
    cc_to_drone[4].outputdata[j] := 0.0;
  end for;
  cc_to_drone[4].spaceavailable := true;
  for i in 1:10 loop
    for j in 1:5 loop
      cc_to_drone[4].fifo[i,j] := 0.0;
    end for;
  end for;
  cc_to_drone[4].fifosize := 0;
  cc_to_drone[4].oldest := 1;
  cc_to_drone[4].newest := 1;
*/
void System_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  modelica_boolean tmp143;
  modelica_boolean tmp144;
  modelica_integer tmp145;
  modelica_integer tmp146;
  modelica_integer tmp147;
  modelica_integer tmp148;
  modelica_integer tmp149;
  modelica_integer tmp150;
  modelica_integer tmp151;
  modelica_integer tmp152;
  modelica_integer tmp153;
  (data->localData[0]->integerVars[33]/* cc_to_drone[4].newest DISCRETE */)  = (data->modelData->integerVarsData[33]/* cc_to_drone[4].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[37]/* cc_to_drone[4].oldest DISCRETE */)  = (data->modelData->integerVarsData[37]/* cc_to_drone[4].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[29]/* cc_to_drone[4].fifosize DISCRETE */)  = (data->modelData->integerVarsData[29]/* cc_to_drone[4].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[434]/* cc_to_drone[4].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[434]/* cc_to_drone[4].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[433]/* cc_to_drone[4].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[433]/* cc_to_drone[4].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[432]/* cc_to_drone[4].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[432]/* cc_to_drone[4].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[431]/* cc_to_drone[4].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[431]/* cc_to_drone[4].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[430]/* cc_to_drone[4].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[430]/* cc_to_drone[4].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[429]/* cc_to_drone[4].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[429]/* cc_to_drone[4].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[428]/* cc_to_drone[4].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[428]/* cc_to_drone[4].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[427]/* cc_to_drone[4].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[427]/* cc_to_drone[4].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[426]/* cc_to_drone[4].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[426]/* cc_to_drone[4].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[425]/* cc_to_drone[4].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[425]/* cc_to_drone[4].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[424]/* cc_to_drone[4].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[424]/* cc_to_drone[4].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[423]/* cc_to_drone[4].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[423]/* cc_to_drone[4].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[422]/* cc_to_drone[4].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[422]/* cc_to_drone[4].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[421]/* cc_to_drone[4].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[421]/* cc_to_drone[4].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[420]/* cc_to_drone[4].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[420]/* cc_to_drone[4].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[419]/* cc_to_drone[4].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[419]/* cc_to_drone[4].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[418]/* cc_to_drone[4].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[418]/* cc_to_drone[4].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[417]/* cc_to_drone[4].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[417]/* cc_to_drone[4].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[416]/* cc_to_drone[4].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[416]/* cc_to_drone[4].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[415]/* cc_to_drone[4].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[415]/* cc_to_drone[4].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[414]/* cc_to_drone[4].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[414]/* cc_to_drone[4].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[413]/* cc_to_drone[4].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[413]/* cc_to_drone[4].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[412]/* cc_to_drone[4].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[412]/* cc_to_drone[4].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[411]/* cc_to_drone[4].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[411]/* cc_to_drone[4].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[410]/* cc_to_drone[4].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[410]/* cc_to_drone[4].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[409]/* cc_to_drone[4].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[409]/* cc_to_drone[4].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[408]/* cc_to_drone[4].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[408]/* cc_to_drone[4].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[407]/* cc_to_drone[4].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[407]/* cc_to_drone[4].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[406]/* cc_to_drone[4].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[406]/* cc_to_drone[4].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[405]/* cc_to_drone[4].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[405]/* cc_to_drone[4].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[404]/* cc_to_drone[4].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[404]/* cc_to_drone[4].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[403]/* cc_to_drone[4].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[403]/* cc_to_drone[4].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[402]/* cc_to_drone[4].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[402]/* cc_to_drone[4].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[401]/* cc_to_drone[4].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[401]/* cc_to_drone[4].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[400]/* cc_to_drone[4].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[400]/* cc_to_drone[4].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[399]/* cc_to_drone[4].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[399]/* cc_to_drone[4].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[398]/* cc_to_drone[4].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[398]/* cc_to_drone[4].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[397]/* cc_to_drone[4].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[397]/* cc_to_drone[4].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[396]/* cc_to_drone[4].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[396]/* cc_to_drone[4].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[395]/* cc_to_drone[4].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[395]/* cc_to_drone[4].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[394]/* cc_to_drone[4].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[394]/* cc_to_drone[4].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[393]/* cc_to_drone[4].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[393]/* cc_to_drone[4].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[392]/* cc_to_drone[4].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[392]/* cc_to_drone[4].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[391]/* cc_to_drone[4].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[391]/* cc_to_drone[4].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[390]/* cc_to_drone[4].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[390]/* cc_to_drone[4].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[389]/* cc_to_drone[4].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[389]/* cc_to_drone[4].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[388]/* cc_to_drone[4].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[388]/* cc_to_drone[4].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[387]/* cc_to_drone[4].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[387]/* cc_to_drone[4].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[386]/* cc_to_drone[4].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[386]/* cc_to_drone[4].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[385]/* cc_to_drone[4].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[385]/* cc_to_drone[4].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[115]/* cc_to_drone[4].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[115]/* cc_to_drone[4].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[454]/* cc_to_drone[4].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[454]/* cc_to_drone[4].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[453]/* cc_to_drone[4].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[453]/* cc_to_drone[4].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[452]/* cc_to_drone[4].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[452]/* cc_to_drone[4].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[451]/* cc_to_drone[4].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[451]/* cc_to_drone[4].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[450]/* cc_to_drone[4].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[450]/* cc_to_drone[4].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[103]/* cc_to_drone[4].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[103]/* cc_to_drone[4].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  = (data->modelData->booleanVarsData[6]/* $whenCondition15 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (data->modelData->booleanVarsData[5]/* $whenCondition14 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = (data->modelData->booleanVarsData[4]/* $whenCondition13 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[107]/* cc_to_drone[4].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[119]/* cc_to_drone[4].writesigint DISCRETE */) );

  tmp143 = GreaterEq((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[4].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[107]/* cc_to_drone[4].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[119]/* cc_to_drone[4].writesigint DISCRETE */) )) && tmp143);

  tmp144 = Less((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[4].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[107]/* cc_to_drone[4].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[119]/* cc_to_drone[4].writesigint DISCRETE */) ) && tmp144);

  (data->localData[0]->booleanVars[103]/* cc_to_drone[4].datavailable DISCRETE */)  = 0;

  tmp145 = ((modelica_integer) 1); tmp146 = 1; tmp147 = ((modelica_integer) 5);
  if(!(((tmp146 > 0) && (tmp145 > tmp147)) || ((tmp146 < 0) && (tmp145 < tmp147))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp145, tmp147); j += tmp146)
    {
      (&(data->localData[0]->realVars[435]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[115]/* cc_to_drone[4].spaceavailable DISCRETE */)  = 1;

  tmp151 = ((modelica_integer) 1); tmp152 = 1; tmp153 = ((modelica_integer) 10);
  if(!(((tmp152 > 0) && (tmp151 > tmp153)) || ((tmp152 < 0) && (tmp151 < tmp153))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp151, tmp153); i += tmp152)
    {
      tmp148 = ((modelica_integer) 1); tmp149 = 1; tmp150 = ((modelica_integer) 5);
      if(!(((tmp149 > 0) && (tmp148 > tmp150)) || ((tmp149 < 0) && (tmp148 < tmp150))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp148, tmp150); j += tmp149)
        {
          (&(data->localData[0]->realVars[235]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[29]/* cc_to_drone[4].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[37]/* cc_to_drone[4].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[33]/* cc_to_drone[4].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_358(DATA *data, threadData_t *threadData);

extern void System_eqFunction_357(DATA *data, threadData_t *threadData);


/*
equation index: 269
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[3].writesigint = $START.cc_to_drone[3].writesigint
*/
void System_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  (data->simulationInfo->booleanVarsPre[118]/* cc_to_drone[3].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[118]/* cc_to_drone[3].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[3].readsigint = $START.cc_to_drone[3].readsigint
*/
void System_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  (data->simulationInfo->booleanVarsPre[106]/* cc_to_drone[3].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[106]/* cc_to_drone[3].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[3].fifosize = $START.cc_to_drone[3].fifosize
*/
void System_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  (data->simulationInfo->integerVarsPre[28]/* cc_to_drone[3].fifosize DISCRETE */)  = (data->modelData->integerVarsData[28]/* cc_to_drone[3].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 272
type: ALGORITHM

  cc_to_drone[3].newest := $START.cc_to_drone[3].newest;
  cc_to_drone[3].oldest := $START.cc_to_drone[3].oldest;
  cc_to_drone[3].fifosize := $START.cc_to_drone[3].fifosize;
  cc_to_drone[3].fifo[10,5] := $START.cc_to_drone[3].fifo[10,5];
  cc_to_drone[3].fifo[10,4] := $START.cc_to_drone[3].fifo[10,4];
  cc_to_drone[3].fifo[10,3] := $START.cc_to_drone[3].fifo[10,3];
  cc_to_drone[3].fifo[10,2] := $START.cc_to_drone[3].fifo[10,2];
  cc_to_drone[3].fifo[10,1] := $START.cc_to_drone[3].fifo[10,1];
  cc_to_drone[3].fifo[9,5] := $START.cc_to_drone[3].fifo[9,5];
  cc_to_drone[3].fifo[9,4] := $START.cc_to_drone[3].fifo[9,4];
  cc_to_drone[3].fifo[9,3] := $START.cc_to_drone[3].fifo[9,3];
  cc_to_drone[3].fifo[9,2] := $START.cc_to_drone[3].fifo[9,2];
  cc_to_drone[3].fifo[9,1] := $START.cc_to_drone[3].fifo[9,1];
  cc_to_drone[3].fifo[8,5] := $START.cc_to_drone[3].fifo[8,5];
  cc_to_drone[3].fifo[8,4] := $START.cc_to_drone[3].fifo[8,4];
  cc_to_drone[3].fifo[8,3] := $START.cc_to_drone[3].fifo[8,3];
  cc_to_drone[3].fifo[8,2] := $START.cc_to_drone[3].fifo[8,2];
  cc_to_drone[3].fifo[8,1] := $START.cc_to_drone[3].fifo[8,1];
  cc_to_drone[3].fifo[7,5] := $START.cc_to_drone[3].fifo[7,5];
  cc_to_drone[3].fifo[7,4] := $START.cc_to_drone[3].fifo[7,4];
  cc_to_drone[3].fifo[7,3] := $START.cc_to_drone[3].fifo[7,3];
  cc_to_drone[3].fifo[7,2] := $START.cc_to_drone[3].fifo[7,2];
  cc_to_drone[3].fifo[7,1] := $START.cc_to_drone[3].fifo[7,1];
  cc_to_drone[3].fifo[6,5] := $START.cc_to_drone[3].fifo[6,5];
  cc_to_drone[3].fifo[6,4] := $START.cc_to_drone[3].fifo[6,4];
  cc_to_drone[3].fifo[6,3] := $START.cc_to_drone[3].fifo[6,3];
  cc_to_drone[3].fifo[6,2] := $START.cc_to_drone[3].fifo[6,2];
  cc_to_drone[3].fifo[6,1] := $START.cc_to_drone[3].fifo[6,1];
  cc_to_drone[3].fifo[5,5] := $START.cc_to_drone[3].fifo[5,5];
  cc_to_drone[3].fifo[5,4] := $START.cc_to_drone[3].fifo[5,4];
  cc_to_drone[3].fifo[5,3] := $START.cc_to_drone[3].fifo[5,3];
  cc_to_drone[3].fifo[5,2] := $START.cc_to_drone[3].fifo[5,2];
  cc_to_drone[3].fifo[5,1] := $START.cc_to_drone[3].fifo[5,1];
  cc_to_drone[3].fifo[4,5] := $START.cc_to_drone[3].fifo[4,5];
  cc_to_drone[3].fifo[4,4] := $START.cc_to_drone[3].fifo[4,4];
  cc_to_drone[3].fifo[4,3] := $START.cc_to_drone[3].fifo[4,3];
  cc_to_drone[3].fifo[4,2] := $START.cc_to_drone[3].fifo[4,2];
  cc_to_drone[3].fifo[4,1] := $START.cc_to_drone[3].fifo[4,1];
  cc_to_drone[3].fifo[3,5] := $START.cc_to_drone[3].fifo[3,5];
  cc_to_drone[3].fifo[3,4] := $START.cc_to_drone[3].fifo[3,4];
  cc_to_drone[3].fifo[3,3] := $START.cc_to_drone[3].fifo[3,3];
  cc_to_drone[3].fifo[3,2] := $START.cc_to_drone[3].fifo[3,2];
  cc_to_drone[3].fifo[3,1] := $START.cc_to_drone[3].fifo[3,1];
  cc_to_drone[3].fifo[2,5] := $START.cc_to_drone[3].fifo[2,5];
  cc_to_drone[3].fifo[2,4] := $START.cc_to_drone[3].fifo[2,4];
  cc_to_drone[3].fifo[2,3] := $START.cc_to_drone[3].fifo[2,3];
  cc_to_drone[3].fifo[2,2] := $START.cc_to_drone[3].fifo[2,2];
  cc_to_drone[3].fifo[2,1] := $START.cc_to_drone[3].fifo[2,1];
  cc_to_drone[3].fifo[1,5] := $START.cc_to_drone[3].fifo[1,5];
  cc_to_drone[3].fifo[1,4] := $START.cc_to_drone[3].fifo[1,4];
  cc_to_drone[3].fifo[1,3] := $START.cc_to_drone[3].fifo[1,3];
  cc_to_drone[3].fifo[1,2] := $START.cc_to_drone[3].fifo[1,2];
  cc_to_drone[3].fifo[1,1] := $START.cc_to_drone[3].fifo[1,1];
  cc_to_drone[3].spaceavailable := $START.cc_to_drone[3].spaceavailable;
  cc_to_drone[3].outputdata[5] := $START.cc_to_drone[3].outputdata[5];
  cc_to_drone[3].outputdata[4] := $START.cc_to_drone[3].outputdata[4];
  cc_to_drone[3].outputdata[3] := $START.cc_to_drone[3].outputdata[3];
  cc_to_drone[3].outputdata[2] := $START.cc_to_drone[3].outputdata[2];
  cc_to_drone[3].outputdata[1] := $START.cc_to_drone[3].outputdata[1];
  cc_to_drone[3].datavailable := $START.cc_to_drone[3].datavailable;
  $whenCondition18 := $START.$whenCondition18;
  $whenCondition17 := $START.$whenCondition17;
  $whenCondition16 := $START.$whenCondition16;
  $whenCondition16 := $PRE.cc_to_drone[3].readsigint and $PRE.cc_to_drone[3].writesigint;
  $whenCondition17 := $PRE.cc_to_drone[3].readsigint and not $PRE.cc_to_drone[3].writesigint and $PRE.cc_to_drone[3].fifosize >= 1;
  $whenCondition18 := not $PRE.cc_to_drone[3].readsigint and $PRE.cc_to_drone[3].writesigint and $PRE.cc_to_drone[3].fifosize < 10;
  cc_to_drone[3].datavailable := false;
  for j in 1:5 loop
    cc_to_drone[3].outputdata[j] := 0.0;
  end for;
  cc_to_drone[3].spaceavailable := true;
  for i in 1:10 loop
    for j in 1:5 loop
      cc_to_drone[3].fifo[i,j] := 0.0;
    end for;
  end for;
  cc_to_drone[3].fifosize := 0;
  cc_to_drone[3].oldest := 1;
  cc_to_drone[3].newest := 1;
*/
void System_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  modelica_boolean tmp154;
  modelica_boolean tmp155;
  modelica_integer tmp156;
  modelica_integer tmp157;
  modelica_integer tmp158;
  modelica_integer tmp159;
  modelica_integer tmp160;
  modelica_integer tmp161;
  modelica_integer tmp162;
  modelica_integer tmp163;
  modelica_integer tmp164;
  (data->localData[0]->integerVars[32]/* cc_to_drone[3].newest DISCRETE */)  = (data->modelData->integerVarsData[32]/* cc_to_drone[3].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[36]/* cc_to_drone[3].oldest DISCRETE */)  = (data->modelData->integerVarsData[36]/* cc_to_drone[3].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[28]/* cc_to_drone[3].fifosize DISCRETE */)  = (data->modelData->integerVarsData[28]/* cc_to_drone[3].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[384]/* cc_to_drone[3].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[384]/* cc_to_drone[3].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[383]/* cc_to_drone[3].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[383]/* cc_to_drone[3].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[382]/* cc_to_drone[3].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[382]/* cc_to_drone[3].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[381]/* cc_to_drone[3].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[381]/* cc_to_drone[3].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[380]/* cc_to_drone[3].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[380]/* cc_to_drone[3].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[379]/* cc_to_drone[3].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[379]/* cc_to_drone[3].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[378]/* cc_to_drone[3].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[378]/* cc_to_drone[3].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[377]/* cc_to_drone[3].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[377]/* cc_to_drone[3].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[376]/* cc_to_drone[3].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[376]/* cc_to_drone[3].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[375]/* cc_to_drone[3].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[375]/* cc_to_drone[3].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[374]/* cc_to_drone[3].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[374]/* cc_to_drone[3].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[373]/* cc_to_drone[3].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[373]/* cc_to_drone[3].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[372]/* cc_to_drone[3].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[372]/* cc_to_drone[3].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[371]/* cc_to_drone[3].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[371]/* cc_to_drone[3].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[370]/* cc_to_drone[3].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[370]/* cc_to_drone[3].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[369]/* cc_to_drone[3].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[369]/* cc_to_drone[3].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[368]/* cc_to_drone[3].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[368]/* cc_to_drone[3].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[367]/* cc_to_drone[3].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[367]/* cc_to_drone[3].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[366]/* cc_to_drone[3].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[366]/* cc_to_drone[3].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[365]/* cc_to_drone[3].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[365]/* cc_to_drone[3].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[364]/* cc_to_drone[3].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[364]/* cc_to_drone[3].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[363]/* cc_to_drone[3].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[363]/* cc_to_drone[3].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[362]/* cc_to_drone[3].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[362]/* cc_to_drone[3].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[361]/* cc_to_drone[3].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[361]/* cc_to_drone[3].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[360]/* cc_to_drone[3].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[360]/* cc_to_drone[3].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[359]/* cc_to_drone[3].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[359]/* cc_to_drone[3].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[358]/* cc_to_drone[3].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[358]/* cc_to_drone[3].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[357]/* cc_to_drone[3].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[357]/* cc_to_drone[3].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[356]/* cc_to_drone[3].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[356]/* cc_to_drone[3].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[355]/* cc_to_drone[3].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[355]/* cc_to_drone[3].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[354]/* cc_to_drone[3].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[354]/* cc_to_drone[3].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[353]/* cc_to_drone[3].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[353]/* cc_to_drone[3].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[352]/* cc_to_drone[3].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[352]/* cc_to_drone[3].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[351]/* cc_to_drone[3].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[351]/* cc_to_drone[3].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[350]/* cc_to_drone[3].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[350]/* cc_to_drone[3].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[349]/* cc_to_drone[3].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[349]/* cc_to_drone[3].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[348]/* cc_to_drone[3].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[348]/* cc_to_drone[3].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[347]/* cc_to_drone[3].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[347]/* cc_to_drone[3].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[346]/* cc_to_drone[3].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[346]/* cc_to_drone[3].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[345]/* cc_to_drone[3].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[345]/* cc_to_drone[3].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[344]/* cc_to_drone[3].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[344]/* cc_to_drone[3].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[343]/* cc_to_drone[3].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[343]/* cc_to_drone[3].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[342]/* cc_to_drone[3].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[342]/* cc_to_drone[3].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[341]/* cc_to_drone[3].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[341]/* cc_to_drone[3].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[340]/* cc_to_drone[3].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[340]/* cc_to_drone[3].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[339]/* cc_to_drone[3].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[339]/* cc_to_drone[3].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[338]/* cc_to_drone[3].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[338]/* cc_to_drone[3].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[337]/* cc_to_drone[3].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[337]/* cc_to_drone[3].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[336]/* cc_to_drone[3].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[336]/* cc_to_drone[3].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[335]/* cc_to_drone[3].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[335]/* cc_to_drone[3].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[114]/* cc_to_drone[3].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[114]/* cc_to_drone[3].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[449]/* cc_to_drone[3].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[449]/* cc_to_drone[3].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[448]/* cc_to_drone[3].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[448]/* cc_to_drone[3].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[447]/* cc_to_drone[3].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[447]/* cc_to_drone[3].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[446]/* cc_to_drone[3].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[446]/* cc_to_drone[3].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[445]/* cc_to_drone[3].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[445]/* cc_to_drone[3].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[102]/* cc_to_drone[3].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[102]/* cc_to_drone[3].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[9]/* $whenCondition18 DISCRETE */)  = (data->modelData->booleanVarsData[9]/* $whenCondition18 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[8]/* $whenCondition17 DISCRETE */)  = (data->modelData->booleanVarsData[8]/* $whenCondition17 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[7]/* $whenCondition16 DISCRETE */)  = (data->modelData->booleanVarsData[7]/* $whenCondition16 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[7]/* $whenCondition16 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[106]/* cc_to_drone[3].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[118]/* cc_to_drone[3].writesigint DISCRETE */) );

  tmp154 = GreaterEq((data->simulationInfo->integerVarsPre[28]/* cc_to_drone[3].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[8]/* $whenCondition17 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[106]/* cc_to_drone[3].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[118]/* cc_to_drone[3].writesigint DISCRETE */) )) && tmp154);

  tmp155 = Less((data->simulationInfo->integerVarsPre[28]/* cc_to_drone[3].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[9]/* $whenCondition18 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[106]/* cc_to_drone[3].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[118]/* cc_to_drone[3].writesigint DISCRETE */) ) && tmp155);

  (data->localData[0]->booleanVars[102]/* cc_to_drone[3].datavailable DISCRETE */)  = 0;

  tmp156 = ((modelica_integer) 1); tmp157 = 1; tmp158 = ((modelica_integer) 5);
  if(!(((tmp157 > 0) && (tmp156 > tmp158)) || ((tmp157 < 0) && (tmp156 < tmp158))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp156, tmp158); j += tmp157)
    {
      (&(data->localData[0]->realVars[435]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[114]/* cc_to_drone[3].spaceavailable DISCRETE */)  = 1;

  tmp162 = ((modelica_integer) 1); tmp163 = 1; tmp164 = ((modelica_integer) 10);
  if(!(((tmp163 > 0) && (tmp162 > tmp164)) || ((tmp163 < 0) && (tmp162 < tmp164))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp162, tmp164); i += tmp163)
    {
      tmp159 = ((modelica_integer) 1); tmp160 = 1; tmp161 = ((modelica_integer) 5);
      if(!(((tmp160 > 0) && (tmp159 > tmp161)) || ((tmp160 < 0) && (tmp159 < tmp161))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp159, tmp161); j += tmp160)
        {
          (&(data->localData[0]->realVars[235]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[28]/* cc_to_drone[3].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[36]/* cc_to_drone[3].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[32]/* cc_to_drone[3].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_370(DATA *data, threadData_t *threadData);

extern void System_eqFunction_369(DATA *data, threadData_t *threadData);


/*
equation index: 275
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[2].writesigint = $START.cc_to_drone[2].writesigint
*/
void System_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  (data->simulationInfo->booleanVarsPre[117]/* cc_to_drone[2].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[117]/* cc_to_drone[2].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[2].readsigint = $START.cc_to_drone[2].readsigint
*/
void System_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  (data->simulationInfo->booleanVarsPre[105]/* cc_to_drone[2].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[105]/* cc_to_drone[2].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[2].fifosize = $START.cc_to_drone[2].fifosize
*/
void System_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  (data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].fifosize DISCRETE */)  = (data->modelData->integerVarsData[27]/* cc_to_drone[2].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 278
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
  $whenCondition21 := $START.$whenCondition21;
  $whenCondition20 := $START.$whenCondition20;
  $whenCondition19 := $START.$whenCondition19;
  $whenCondition19 := $PRE.cc_to_drone[2].readsigint and $PRE.cc_to_drone[2].writesigint;
  $whenCondition20 := $PRE.cc_to_drone[2].readsigint and not $PRE.cc_to_drone[2].writesigint and $PRE.cc_to_drone[2].fifosize >= 1;
  $whenCondition21 := not $PRE.cc_to_drone[2].readsigint and $PRE.cc_to_drone[2].writesigint and $PRE.cc_to_drone[2].fifosize < 10;
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
void System_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  modelica_boolean tmp165;
  modelica_boolean tmp166;
  modelica_integer tmp167;
  modelica_integer tmp168;
  modelica_integer tmp169;
  modelica_integer tmp170;
  modelica_integer tmp171;
  modelica_integer tmp172;
  modelica_integer tmp173;
  modelica_integer tmp174;
  modelica_integer tmp175;
  (data->localData[0]->integerVars[31]/* cc_to_drone[2].newest DISCRETE */)  = (data->modelData->integerVarsData[31]/* cc_to_drone[2].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[35]/* cc_to_drone[2].oldest DISCRETE */)  = (data->modelData->integerVarsData[35]/* cc_to_drone[2].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[27]/* cc_to_drone[2].fifosize DISCRETE */)  = (data->modelData->integerVarsData[27]/* cc_to_drone[2].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[334]/* cc_to_drone[2].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[334]/* cc_to_drone[2].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[333]/* cc_to_drone[2].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[333]/* cc_to_drone[2].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[332]/* cc_to_drone[2].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[332]/* cc_to_drone[2].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[331]/* cc_to_drone[2].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[331]/* cc_to_drone[2].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[330]/* cc_to_drone[2].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[330]/* cc_to_drone[2].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[329]/* cc_to_drone[2].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[329]/* cc_to_drone[2].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[328]/* cc_to_drone[2].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[328]/* cc_to_drone[2].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[327]/* cc_to_drone[2].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[327]/* cc_to_drone[2].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[326]/* cc_to_drone[2].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[326]/* cc_to_drone[2].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[325]/* cc_to_drone[2].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[325]/* cc_to_drone[2].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[324]/* cc_to_drone[2].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[324]/* cc_to_drone[2].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[323]/* cc_to_drone[2].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[323]/* cc_to_drone[2].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[322]/* cc_to_drone[2].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[322]/* cc_to_drone[2].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[321]/* cc_to_drone[2].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[321]/* cc_to_drone[2].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[320]/* cc_to_drone[2].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[320]/* cc_to_drone[2].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[319]/* cc_to_drone[2].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[319]/* cc_to_drone[2].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[318]/* cc_to_drone[2].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[318]/* cc_to_drone[2].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[317]/* cc_to_drone[2].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[317]/* cc_to_drone[2].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[316]/* cc_to_drone[2].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[316]/* cc_to_drone[2].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[315]/* cc_to_drone[2].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[315]/* cc_to_drone[2].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[314]/* cc_to_drone[2].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[314]/* cc_to_drone[2].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[313]/* cc_to_drone[2].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[313]/* cc_to_drone[2].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[312]/* cc_to_drone[2].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[312]/* cc_to_drone[2].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[311]/* cc_to_drone[2].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[311]/* cc_to_drone[2].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[310]/* cc_to_drone[2].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[310]/* cc_to_drone[2].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[309]/* cc_to_drone[2].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[309]/* cc_to_drone[2].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[308]/* cc_to_drone[2].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[308]/* cc_to_drone[2].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[307]/* cc_to_drone[2].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[307]/* cc_to_drone[2].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[306]/* cc_to_drone[2].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[306]/* cc_to_drone[2].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[305]/* cc_to_drone[2].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[305]/* cc_to_drone[2].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[304]/* cc_to_drone[2].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[304]/* cc_to_drone[2].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[303]/* cc_to_drone[2].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[303]/* cc_to_drone[2].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[302]/* cc_to_drone[2].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[302]/* cc_to_drone[2].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[301]/* cc_to_drone[2].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[301]/* cc_to_drone[2].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[300]/* cc_to_drone[2].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[300]/* cc_to_drone[2].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[299]/* cc_to_drone[2].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[299]/* cc_to_drone[2].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[298]/* cc_to_drone[2].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[298]/* cc_to_drone[2].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[297]/* cc_to_drone[2].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[297]/* cc_to_drone[2].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[296]/* cc_to_drone[2].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[296]/* cc_to_drone[2].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[295]/* cc_to_drone[2].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[295]/* cc_to_drone[2].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[294]/* cc_to_drone[2].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[294]/* cc_to_drone[2].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[293]/* cc_to_drone[2].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[293]/* cc_to_drone[2].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[292]/* cc_to_drone[2].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[292]/* cc_to_drone[2].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[291]/* cc_to_drone[2].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[291]/* cc_to_drone[2].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[290]/* cc_to_drone[2].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[290]/* cc_to_drone[2].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[289]/* cc_to_drone[2].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[289]/* cc_to_drone[2].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[288]/* cc_to_drone[2].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[288]/* cc_to_drone[2].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[287]/* cc_to_drone[2].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[287]/* cc_to_drone[2].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[286]/* cc_to_drone[2].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[286]/* cc_to_drone[2].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[285]/* cc_to_drone[2].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[285]/* cc_to_drone[2].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[113]/* cc_to_drone[2].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[113]/* cc_to_drone[2].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[444]/* cc_to_drone[2].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[444]/* cc_to_drone[2].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[443]/* cc_to_drone[2].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[443]/* cc_to_drone[2].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[442]/* cc_to_drone[2].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[442]/* cc_to_drone[2].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[441]/* cc_to_drone[2].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[441]/* cc_to_drone[2].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[440]/* cc_to_drone[2].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[440]/* cc_to_drone[2].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[101]/* cc_to_drone[2].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[101]/* cc_to_drone[2].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[13]/* $whenCondition21 DISCRETE */)  = (data->modelData->booleanVarsData[13]/* $whenCondition21 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[12]/* $whenCondition20 DISCRETE */)  = (data->modelData->booleanVarsData[12]/* $whenCondition20 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[10]/* $whenCondition19 DISCRETE */)  = (data->modelData->booleanVarsData[10]/* $whenCondition19 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[10]/* $whenCondition19 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[105]/* cc_to_drone[2].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[117]/* cc_to_drone[2].writesigint DISCRETE */) );

  tmp165 = GreaterEq((data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[12]/* $whenCondition20 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[105]/* cc_to_drone[2].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[117]/* cc_to_drone[2].writesigint DISCRETE */) )) && tmp165);

  tmp166 = Less((data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[13]/* $whenCondition21 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[105]/* cc_to_drone[2].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[117]/* cc_to_drone[2].writesigint DISCRETE */) ) && tmp166);

  (data->localData[0]->booleanVars[101]/* cc_to_drone[2].datavailable DISCRETE */)  = 0;

  tmp167 = ((modelica_integer) 1); tmp168 = 1; tmp169 = ((modelica_integer) 5);
  if(!(((tmp168 > 0) && (tmp167 > tmp169)) || ((tmp168 < 0) && (tmp167 < tmp169))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp167, tmp169); j += tmp168)
    {
      (&(data->localData[0]->realVars[435]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[113]/* cc_to_drone[2].spaceavailable DISCRETE */)  = 1;

  tmp173 = ((modelica_integer) 1); tmp174 = 1; tmp175 = ((modelica_integer) 10);
  if(!(((tmp174 > 0) && (tmp173 > tmp175)) || ((tmp174 < 0) && (tmp173 < tmp175))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp173, tmp175); i += tmp174)
    {
      tmp170 = ((modelica_integer) 1); tmp171 = 1; tmp172 = ((modelica_integer) 5);
      if(!(((tmp171 > 0) && (tmp170 > tmp172)) || ((tmp171 < 0) && (tmp170 < tmp172))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp170, tmp172); j += tmp171)
        {
          (&(data->localData[0]->realVars[235]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[27]/* cc_to_drone[2].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[35]/* cc_to_drone[2].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[31]/* cc_to_drone[2].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_378(DATA *data, threadData_t *threadData);

extern void System_eqFunction_377(DATA *data, threadData_t *threadData);


/*
equation index: 281
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].writesigint = $START.cc_to_drone[1].writesigint
*/
void System_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  (data->simulationInfo->booleanVarsPre[116]/* cc_to_drone[1].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[116]/* cc_to_drone[1].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].readsigint = $START.cc_to_drone[1].readsigint
*/
void System_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  (data->simulationInfo->booleanVarsPre[104]/* cc_to_drone[1].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[104]/* cc_to_drone[1].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].fifosize = $START.cc_to_drone[1].fifosize
*/
void System_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  (data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->modelData->integerVarsData[26]/* cc_to_drone[1].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 284
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
  $whenCondition24 := $START.$whenCondition24;
  $whenCondition23 := $START.$whenCondition23;
  $whenCondition22 := $START.$whenCondition22;
  $whenCondition22 := $PRE.cc_to_drone[1].readsigint and $PRE.cc_to_drone[1].writesigint;
  $whenCondition23 := $PRE.cc_to_drone[1].readsigint and not $PRE.cc_to_drone[1].writesigint and $PRE.cc_to_drone[1].fifosize >= 1;
  $whenCondition24 := not $PRE.cc_to_drone[1].readsigint and $PRE.cc_to_drone[1].writesigint and $PRE.cc_to_drone[1].fifosize < 10;
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
void System_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  modelica_boolean tmp176;
  modelica_boolean tmp177;
  modelica_integer tmp178;
  modelica_integer tmp179;
  modelica_integer tmp180;
  modelica_integer tmp181;
  modelica_integer tmp182;
  modelica_integer tmp183;
  modelica_integer tmp184;
  modelica_integer tmp185;
  modelica_integer tmp186;
  (data->localData[0]->integerVars[30]/* cc_to_drone[1].newest DISCRETE */)  = (data->modelData->integerVarsData[30]/* cc_to_drone[1].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[34]/* cc_to_drone[1].oldest DISCRETE */)  = (data->modelData->integerVarsData[34]/* cc_to_drone[1].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[26]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->modelData->integerVarsData[26]/* cc_to_drone[1].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[284]/* cc_to_drone[1].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[284]/* cc_to_drone[1].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[283]/* cc_to_drone[1].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[283]/* cc_to_drone[1].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[282]/* cc_to_drone[1].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[282]/* cc_to_drone[1].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[281]/* cc_to_drone[1].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[281]/* cc_to_drone[1].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[280]/* cc_to_drone[1].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[280]/* cc_to_drone[1].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[279]/* cc_to_drone[1].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[279]/* cc_to_drone[1].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[278]/* cc_to_drone[1].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[278]/* cc_to_drone[1].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[277]/* cc_to_drone[1].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[277]/* cc_to_drone[1].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[276]/* cc_to_drone[1].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[276]/* cc_to_drone[1].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[275]/* cc_to_drone[1].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[275]/* cc_to_drone[1].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[274]/* cc_to_drone[1].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[274]/* cc_to_drone[1].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[273]/* cc_to_drone[1].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[273]/* cc_to_drone[1].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[272]/* cc_to_drone[1].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[272]/* cc_to_drone[1].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[271]/* cc_to_drone[1].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[271]/* cc_to_drone[1].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[270]/* cc_to_drone[1].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[270]/* cc_to_drone[1].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[269]/* cc_to_drone[1].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[269]/* cc_to_drone[1].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[268]/* cc_to_drone[1].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[268]/* cc_to_drone[1].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[267]/* cc_to_drone[1].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[267]/* cc_to_drone[1].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[266]/* cc_to_drone[1].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[266]/* cc_to_drone[1].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[265]/* cc_to_drone[1].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[265]/* cc_to_drone[1].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[264]/* cc_to_drone[1].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[264]/* cc_to_drone[1].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[263]/* cc_to_drone[1].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[263]/* cc_to_drone[1].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[262]/* cc_to_drone[1].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[262]/* cc_to_drone[1].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[261]/* cc_to_drone[1].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[261]/* cc_to_drone[1].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[260]/* cc_to_drone[1].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[260]/* cc_to_drone[1].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[259]/* cc_to_drone[1].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[259]/* cc_to_drone[1].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[258]/* cc_to_drone[1].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[258]/* cc_to_drone[1].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[257]/* cc_to_drone[1].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[257]/* cc_to_drone[1].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[256]/* cc_to_drone[1].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[256]/* cc_to_drone[1].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[255]/* cc_to_drone[1].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[255]/* cc_to_drone[1].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[254]/* cc_to_drone[1].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[254]/* cc_to_drone[1].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[253]/* cc_to_drone[1].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[253]/* cc_to_drone[1].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[252]/* cc_to_drone[1].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[252]/* cc_to_drone[1].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[251]/* cc_to_drone[1].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[251]/* cc_to_drone[1].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[250]/* cc_to_drone[1].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[250]/* cc_to_drone[1].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[249]/* cc_to_drone[1].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[249]/* cc_to_drone[1].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[248]/* cc_to_drone[1].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[248]/* cc_to_drone[1].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[247]/* cc_to_drone[1].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[247]/* cc_to_drone[1].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[246]/* cc_to_drone[1].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[246]/* cc_to_drone[1].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[245]/* cc_to_drone[1].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[245]/* cc_to_drone[1].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[244]/* cc_to_drone[1].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[244]/* cc_to_drone[1].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[243]/* cc_to_drone[1].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[243]/* cc_to_drone[1].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[242]/* cc_to_drone[1].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[242]/* cc_to_drone[1].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[241]/* cc_to_drone[1].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[241]/* cc_to_drone[1].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[240]/* cc_to_drone[1].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[240]/* cc_to_drone[1].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[239]/* cc_to_drone[1].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[239]/* cc_to_drone[1].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[238]/* cc_to_drone[1].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[238]/* cc_to_drone[1].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[237]/* cc_to_drone[1].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[237]/* cc_to_drone[1].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[236]/* cc_to_drone[1].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[236]/* cc_to_drone[1].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[235]/* cc_to_drone[1].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[235]/* cc_to_drone[1].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[112]/* cc_to_drone[1].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[112]/* cc_to_drone[1].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[439]/* cc_to_drone[1].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[439]/* cc_to_drone[1].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[438]/* cc_to_drone[1].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[438]/* cc_to_drone[1].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[437]/* cc_to_drone[1].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[437]/* cc_to_drone[1].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[436]/* cc_to_drone[1].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[436]/* cc_to_drone[1].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[435]/* cc_to_drone[1].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[435]/* cc_to_drone[1].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[100]/* cc_to_drone[1].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[100]/* cc_to_drone[1].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[16]/* $whenCondition24 DISCRETE */)  = (data->modelData->booleanVarsData[16]/* $whenCondition24 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[15]/* $whenCondition23 DISCRETE */)  = (data->modelData->booleanVarsData[15]/* $whenCondition23 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[14]/* $whenCondition22 DISCRETE */)  = (data->modelData->booleanVarsData[14]/* $whenCondition22 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[14]/* $whenCondition22 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[104]/* cc_to_drone[1].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[116]/* cc_to_drone[1].writesigint DISCRETE */) );

  tmp176 = GreaterEq((data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[15]/* $whenCondition23 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[104]/* cc_to_drone[1].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[116]/* cc_to_drone[1].writesigint DISCRETE */) )) && tmp176);

  tmp177 = Less((data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[16]/* $whenCondition24 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[104]/* cc_to_drone[1].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[116]/* cc_to_drone[1].writesigint DISCRETE */) ) && tmp177);

  (data->localData[0]->booleanVars[100]/* cc_to_drone[1].datavailable DISCRETE */)  = 0;

  tmp178 = ((modelica_integer) 1); tmp179 = 1; tmp180 = ((modelica_integer) 5);
  if(!(((tmp179 > 0) && (tmp178 > tmp180)) || ((tmp179 < 0) && (tmp178 < tmp180))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp178, tmp180); j += tmp179)
    {
      (&(data->localData[0]->realVars[435]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[112]/* cc_to_drone[1].spaceavailable DISCRETE */)  = 1;

  tmp184 = ((modelica_integer) 1); tmp185 = 1; tmp186 = ((modelica_integer) 10);
  if(!(((tmp185 > 0) && (tmp184 > tmp186)) || ((tmp185 < 0) && (tmp184 < tmp186))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp184, tmp186); i += tmp185)
    {
      tmp181 = ((modelica_integer) 1); tmp182 = 1; tmp183 = ((modelica_integer) 5);
      if(!(((tmp182 > 0) && (tmp181 > tmp183)) || ((tmp182 < 0) && (tmp181 < tmp183))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp181, tmp183); j += tmp182)
        {
          (&(data->localData[0]->realVars[235]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[26]/* cc_to_drone[1].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[34]/* cc_to_drone[1].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[30]/* cc_to_drone[1].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_365(DATA *data, threadData_t *threadData);

extern void System_eqFunction_364(DATA *data, threadData_t *threadData);


/*
equation index: 287
type: SIMPLE_ASSIGN
$PRE.d[4].ctrl.droneDead = $START.d[4].ctrl.droneDead
*/
void System_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  (data->simulationInfo->booleanVarsPre[127]/* d[4].ctrl.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[127]/* d[4].ctrl.droneDead DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 288
type: ALGORITHM

  $whenCondition30 := $START.$whenCondition30;
  $whenCondition29 := $START.$whenCondition29;
  $whenCondition29 := false;
  $whenCondition30 := false;
*/
void System_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  (data->localData[0]->booleanVars[23]/* $whenCondition30 DISCRETE */)  = (data->modelData->booleanVarsData[23]/* $whenCondition30 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[21]/* $whenCondition29 DISCRETE */)  = (data->modelData->booleanVarsData[21]/* $whenCondition29 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[21]/* $whenCondition29 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[23]/* $whenCondition30 DISCRETE */)  = 0;
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
$PRE.d[3].ctrl.droneDead = $START.d[3].ctrl.droneDead
*/
void System_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  (data->simulationInfo->booleanVarsPre[126]/* d[3].ctrl.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[126]/* d[3].ctrl.droneDead DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 290
type: ALGORITHM

  $whenCondition35 := $START.$whenCondition35;
  $whenCondition34 := $START.$whenCondition34;
  $whenCondition34 := false;
  $whenCondition35 := false;
*/
void System_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  (data->localData[0]->booleanVars[28]/* $whenCondition35 DISCRETE */)  = (data->modelData->booleanVarsData[28]/* $whenCondition35 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[27]/* $whenCondition34 DISCRETE */)  = (data->modelData->booleanVarsData[27]/* $whenCondition34 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[27]/* $whenCondition34 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[28]/* $whenCondition35 DISCRETE */)  = 0;
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
$PRE.d[2].ctrl.droneDead = $START.d[2].ctrl.droneDead
*/
void System_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  (data->simulationInfo->booleanVarsPre[125]/* d[2].ctrl.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[125]/* d[2].ctrl.droneDead DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 292
type: ALGORITHM

  $whenCondition40 := $START.$whenCondition40;
  $whenCondition39 := $START.$whenCondition39;
  $whenCondition39 := false;
  $whenCondition40 := false;
*/
void System_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  (data->localData[0]->booleanVars[34]/* $whenCondition40 DISCRETE */)  = (data->modelData->booleanVarsData[34]/* $whenCondition40 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[32]/* $whenCondition39 DISCRETE */)  = (data->modelData->booleanVarsData[32]/* $whenCondition39 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[32]/* $whenCondition39 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[34]/* $whenCondition40 DISCRETE */)  = 0;
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.droneDead = $START.d[1].ctrl.droneDead
*/
void System_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  (data->simulationInfo->booleanVarsPre[124]/* d[1].ctrl.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[124]/* d[1].ctrl.droneDead DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 294
type: ALGORITHM

  $whenCondition45 := $START.$whenCondition45;
  $whenCondition44 := $START.$whenCondition44;
  $whenCondition44 := false;
  $whenCondition45 := false;
*/
void System_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  (data->localData[0]->booleanVars[39]/* $whenCondition45 DISCRETE */)  = (data->modelData->booleanVarsData[39]/* $whenCondition45 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[38]/* $whenCondition44 DISCRETE */)  = (data->modelData->booleanVarsData[38]/* $whenCondition44 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[38]/* $whenCondition44 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[39]/* $whenCondition45 DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_308(DATA *data, threadData_t *threadData);

extern void System_eqFunction_307(DATA *data, threadData_t *threadData);

extern void System_eqFunction_306(DATA *data, threadData_t *threadData);

extern void System_eqFunction_305(DATA *data, threadData_t *threadData);

extern void System_eqFunction_304(DATA *data, threadData_t *threadData);

extern void System_eqFunction_303(DATA *data, threadData_t *threadData);

extern void System_eqFunction_302(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void System_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  System_eqFunction_1(data, threadData);
  System_eqFunction_384(data, threadData);
  System_eqFunction_391(data, threadData);
  System_eqFunction_390(data, threadData);
  System_eqFunction_387(data, threadData);
  System_eqFunction_386(data, threadData);
  System_eqFunction_388(data, threadData);
  System_eqFunction_382(data, threadData);
  System_eqFunction_385(data, threadData);
  System_eqFunction_400(data, threadData);
  System_eqFunction_401(data, threadData);
  System_eqFunction_12(data, threadData);
  System_eqFunction_13(data, threadData);
  System_eqFunction_14(data, threadData);
  System_eqFunction_15(data, threadData);
  System_eqFunction_16(data, threadData);
  System_eqFunction_17(data, threadData);
  System_eqFunction_330(data, threadData);
  System_eqFunction_334(data, threadData);
  System_eqFunction_353(data, threadData);
  System_eqFunction_337(data, threadData);
  System_eqFunction_355(data, threadData);
  System_eqFunction_354(data, threadData);
  System_eqFunction_346(data, threadData);
  System_eqFunction_359(data, threadData);
  System_eqFunction_361(data, threadData);
  System_eqFunction_341(data, threadData);
  System_eqFunction_342(data, threadData);
  System_eqFunction_366(data, threadData);
  System_eqFunction_367(data, threadData);
  System_eqFunction_350(data, threadData);
  System_eqFunction_339(data, threadData);
  System_eqFunction_343(data, threadData);
  System_eqFunction_344(data, threadData);
  System_eqFunction_375(data, threadData);
  System_eqFunction_345(data, threadData);
  System_eqFunction_374(data, threadData);
  System_eqFunction_372(data, threadData);
  System_eqFunction_332(data, threadData);
  System_eqFunction_349(data, threadData);
  System_eqFunction_348(data, threadData);
  System_eqFunction_352(data, threadData);
  System_eqFunction_362(data, threadData);
  System_eqFunction_338(data, threadData);
  System_eqFunction_335(data, threadData);
  System_eqFunction_46(data, threadData);
  System_eqFunction_47(data, threadData);
  System_eqFunction_48(data, threadData);
  System_eqFunction_49(data, threadData);
  System_eqFunction_50(data, threadData);
  System_eqFunction_51(data, threadData);
  System_eqFunction_52(data, threadData);
  System_eqFunction_53(data, threadData);
  System_eqFunction_54(data, threadData);
  System_eqFunction_55(data, threadData);
  System_eqFunction_56(data, threadData);
  System_eqFunction_57(data, threadData);
  System_eqFunction_58(data, threadData);
  System_eqFunction_59(data, threadData);
  System_eqFunction_60(data, threadData);
  System_eqFunction_61(data, threadData);
  System_eqFunction_62(data, threadData);
  System_eqFunction_417(data, threadData);
  System_eqFunction_414(data, threadData);
  System_eqFunction_418(data, threadData);
  System_eqFunction_408(data, threadData);
  System_eqFunction_415(data, threadData);
  System_eqFunction_412(data, threadData);
  System_eqFunction_409(data, threadData);
  System_eqFunction_427(data, threadData);
  System_eqFunction_411(data, threadData);
  System_eqFunction_416(data, threadData);
  System_eqFunction_73(data, threadData);
  System_eqFunction_74(data, threadData);
  System_eqFunction_75(data, threadData);
  System_eqFunction_76(data, threadData);
  System_eqFunction_77(data, threadData);
  System_eqFunction_437(data, threadData);
  System_eqFunction_441(data, threadData);
  System_eqFunction_439(data, threadData);
  System_eqFunction_434(data, threadData);
  System_eqFunction_442(data, threadData);
  System_eqFunction_432(data, threadData);
  System_eqFunction_435(data, threadData);
  System_eqFunction_438(data, threadData);
  System_eqFunction_451(data, threadData);
  System_eqFunction_440(data, threadData);
  System_eqFunction_88(data, threadData);
  System_eqFunction_89(data, threadData);
  System_eqFunction_90(data, threadData);
  System_eqFunction_91(data, threadData);
  System_eqFunction_92(data, threadData);
  System_eqFunction_468(data, threadData);
  System_eqFunction_466(data, threadData);
  System_eqFunction_467(data, threadData);
  System_eqFunction_459(data, threadData);
  System_eqFunction_457(data, threadData);
  System_eqFunction_463(data, threadData);
  System_eqFunction_460(data, threadData);
  System_eqFunction_465(data, threadData);
  System_eqFunction_462(data, threadData);
  System_eqFunction_458(data, threadData);
  System_eqFunction_103(data, threadData);
  System_eqFunction_104(data, threadData);
  System_eqFunction_105(data, threadData);
  System_eqFunction_106(data, threadData);
  System_eqFunction_107(data, threadData);
  System_eqFunction_108(data, threadData);
  System_eqFunction_109(data, threadData);
  System_eqFunction_403(data, threadData);
  System_eqFunction_402(data, threadData);
  System_eqFunction_112(data, threadData);
  System_eqFunction_113(data, threadData);
  System_eqFunction_114(data, threadData);
  System_eqFunction_311(data, threadData);
  System_eqFunction_116(data, threadData);
  System_eqFunction_117(data, threadData);
  System_eqFunction_310(data, threadData);
  System_eqFunction_119(data, threadData);
  System_eqFunction_120(data, threadData);
  System_eqFunction_121(data, threadData);
  System_eqFunction_312(data, threadData);
  System_eqFunction_123(data, threadData);
  System_eqFunction_479(data, threadData);
  System_eqFunction_125(data, threadData);
  System_eqFunction_481(data, threadData);
  System_eqFunction_127(data, threadData);
  System_eqFunction_128(data, threadData);
  System_eqFunction_129(data, threadData);
  System_eqFunction_313(data, threadData);
  System_eqFunction_131(data, threadData);
  System_eqFunction_482(data, threadData);
  System_eqFunction_133(data, threadData);
  System_eqFunction_484(data, threadData);
  System_eqFunction_135(data, threadData);
  System_eqFunction_136(data, threadData);
  System_eqFunction_137(data, threadData);
  System_eqFunction_406(data, threadData);
  System_eqFunction_428(data, threadData);
  System_eqFunction_140(data, threadData);
  System_eqFunction_141(data, threadData);
  System_eqFunction_142(data, threadData);
  System_eqFunction_316(data, threadData);
  System_eqFunction_144(data, threadData);
  System_eqFunction_145(data, threadData);
  System_eqFunction_315(data, threadData);
  System_eqFunction_147(data, threadData);
  System_eqFunction_148(data, threadData);
  System_eqFunction_149(data, threadData);
  System_eqFunction_317(data, threadData);
  System_eqFunction_151(data, threadData);
  System_eqFunction_485(data, threadData);
  System_eqFunction_153(data, threadData);
  System_eqFunction_487(data, threadData);
  System_eqFunction_155(data, threadData);
  System_eqFunction_156(data, threadData);
  System_eqFunction_157(data, threadData);
  System_eqFunction_318(data, threadData);
  System_eqFunction_159(data, threadData);
  System_eqFunction_488(data, threadData);
  System_eqFunction_161(data, threadData);
  System_eqFunction_490(data, threadData);
  System_eqFunction_163(data, threadData);
  System_eqFunction_164(data, threadData);
  System_eqFunction_165(data, threadData);
  System_eqFunction_453(data, threadData);
  System_eqFunction_452(data, threadData);
  System_eqFunction_168(data, threadData);
  System_eqFunction_169(data, threadData);
  System_eqFunction_170(data, threadData);
  System_eqFunction_321(data, threadData);
  System_eqFunction_172(data, threadData);
  System_eqFunction_173(data, threadData);
  System_eqFunction_320(data, threadData);
  System_eqFunction_175(data, threadData);
  System_eqFunction_176(data, threadData);
  System_eqFunction_177(data, threadData);
  System_eqFunction_322(data, threadData);
  System_eqFunction_179(data, threadData);
  System_eqFunction_491(data, threadData);
  System_eqFunction_181(data, threadData);
  System_eqFunction_493(data, threadData);
  System_eqFunction_183(data, threadData);
  System_eqFunction_184(data, threadData);
  System_eqFunction_185(data, threadData);
  System_eqFunction_323(data, threadData);
  System_eqFunction_187(data, threadData);
  System_eqFunction_494(data, threadData);
  System_eqFunction_189(data, threadData);
  System_eqFunction_496(data, threadData);
  System_eqFunction_191(data, threadData);
  System_eqFunction_192(data, threadData);
  System_eqFunction_193(data, threadData);
  System_eqFunction_478(data, threadData);
  System_eqFunction_477(data, threadData);
  System_eqFunction_196(data, threadData);
  System_eqFunction_197(data, threadData);
  System_eqFunction_198(data, threadData);
  System_eqFunction_326(data, threadData);
  System_eqFunction_200(data, threadData);
  System_eqFunction_201(data, threadData);
  System_eqFunction_325(data, threadData);
  System_eqFunction_203(data, threadData);
  System_eqFunction_204(data, threadData);
  System_eqFunction_205(data, threadData);
  System_eqFunction_327(data, threadData);
  System_eqFunction_207(data, threadData);
  System_eqFunction_497(data, threadData);
  System_eqFunction_209(data, threadData);
  System_eqFunction_499(data, threadData);
  System_eqFunction_211(data, threadData);
  System_eqFunction_212(data, threadData);
  System_eqFunction_213(data, threadData);
  System_eqFunction_328(data, threadData);
  System_eqFunction_215(data, threadData);
  System_eqFunction_500(data, threadData);
  System_eqFunction_217(data, threadData);
  System_eqFunction_502(data, threadData);
  System_eqFunction_219(data, threadData);
  System_eqFunction_220(data, threadData);
  System_eqFunction_221(data, threadData);
  System_eqFunction_222(data, threadData);
  System_eqFunction_395(data, threadData);
  System_eqFunction_398(data, threadData);
  System_eqFunction_393(data, threadData);
  System_eqFunction_397(data, threadData);
  System_eqFunction_394(data, threadData);
  System_eqFunction_399(data, threadData);
  System_eqFunction_396(data, threadData);
  System_eqFunction_230(data, threadData);
  System_eqFunction_231(data, threadData);
  System_eqFunction_232(data, threadData);
  System_eqFunction_233(data, threadData);
  System_eqFunction_426(data, threadData);
  System_eqFunction_421(data, threadData);
  System_eqFunction_425(data, threadData);
  System_eqFunction_423(data, threadData);
  System_eqFunction_422(data, threadData);
  System_eqFunction_420(data, threadData);
  System_eqFunction_424(data, threadData);
  System_eqFunction_241(data, threadData);
  System_eqFunction_242(data, threadData);
  System_eqFunction_243(data, threadData);
  System_eqFunction_244(data, threadData);
  System_eqFunction_445(data, threadData);
  System_eqFunction_449(data, threadData);
  System_eqFunction_446(data, threadData);
  System_eqFunction_444(data, threadData);
  System_eqFunction_448(data, threadData);
  System_eqFunction_450(data, threadData);
  System_eqFunction_447(data, threadData);
  System_eqFunction_252(data, threadData);
  System_eqFunction_253(data, threadData);
  System_eqFunction_254(data, threadData);
  System_eqFunction_255(data, threadData);
  System_eqFunction_471(data, threadData);
  System_eqFunction_472(data, threadData);
  System_eqFunction_470(data, threadData);
  System_eqFunction_473(data, threadData);
  System_eqFunction_476(data, threadData);
  System_eqFunction_475(data, threadData);
  System_eqFunction_474(data, threadData);
  System_eqFunction_263(data, threadData);
  System_eqFunction_264(data, threadData);
  System_eqFunction_265(data, threadData);
  System_eqFunction_266(data, threadData);
  System_eqFunction_358(data, threadData);
  System_eqFunction_357(data, threadData);
  System_eqFunction_269(data, threadData);
  System_eqFunction_270(data, threadData);
  System_eqFunction_271(data, threadData);
  System_eqFunction_272(data, threadData);
  System_eqFunction_370(data, threadData);
  System_eqFunction_369(data, threadData);
  System_eqFunction_275(data, threadData);
  System_eqFunction_276(data, threadData);
  System_eqFunction_277(data, threadData);
  System_eqFunction_278(data, threadData);
  System_eqFunction_378(data, threadData);
  System_eqFunction_377(data, threadData);
  System_eqFunction_281(data, threadData);
  System_eqFunction_282(data, threadData);
  System_eqFunction_283(data, threadData);
  System_eqFunction_284(data, threadData);
  System_eqFunction_365(data, threadData);
  System_eqFunction_364(data, threadData);
  System_eqFunction_287(data, threadData);
  System_eqFunction_288(data, threadData);
  System_eqFunction_289(data, threadData);
  System_eqFunction_290(data, threadData);
  System_eqFunction_291(data, threadData);
  System_eqFunction_292(data, threadData);
  System_eqFunction_293(data, threadData);
  System_eqFunction_294(data, threadData);
  System_eqFunction_308(data, threadData);
  System_eqFunction_307(data, threadData);
  System_eqFunction_306(data, threadData);
  System_eqFunction_305(data, threadData);
  System_eqFunction_304(data, threadData);
  System_eqFunction_303(data, threadData);
  System_eqFunction_302(data, threadData);
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

