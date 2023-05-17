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

  d[7].comm_state := $START.d[7].comm_state;
  d[7].fifox := $START.d[7].fifox;
  d[7].writesignal := $START.d[7].writesignal;
  d[7].readsignal := $START.d[7].readsignal;
  d[7].flag := $START.d[7].flag;
  d[7].setz := $START.d[7].setz;
  d[7].sety := $START.d[7].sety;
  d[7].setx := $START.d[7].setx;
  d[7].msg_to_cc[5] := $START.d[7].msg_to_cc[5];
  d[7].msg_to_cc[4] := $START.d[7].msg_to_cc[4];
  d[7].msg_to_cc[3] := $START.d[7].msg_to_cc[3];
  d[7].msg_to_cc[2] := $START.d[7].msg_to_cc[2];
  d[7].msg_to_cc[1] := $START.d[7].msg_to_cc[1];
  $whenCondition46 := $START.$whenCondition46;
  $whenCondition46 := false;
  d[7].msg_to_cc := {0.0, 0.0, 0.0, 0.0, 0.0};
  d[7].setx := myrandom() * d[7].p.flyZone[1];
  d[7].sety := myrandom() * d[7].p.flyZone[2];
  d[7].setz := myrandom() * d[7].p.flyZone[3];
  d[7].flag := 0;
  d[7].readsignal := false;
  d[7].writesignal := false;
  d[7].fifox := 0;
  d[7].comm_state := 10;
*/
void System_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  real_array tmp0;
  real_array tmp1;
  (data->localData[0]->integerVars[56]/* d[7].comm_state DISCRETE */)  = (data->modelData->integerVarsData[56]/* d[7].comm_state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[70]/* d[7].fifox DISCRETE */)  = (data->modelData->integerVarsData[70]/* d[7].fifox DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[243]/* d[7].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[243]/* d[7].writesignal DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[229]/* d[7].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[229]/* d[7].readsignal DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[77]/* d[7].flag DISCRETE */)  = (data->modelData->integerVarsData[77]/* d[7].flag DISCRETE */).attribute .start;

  (data->localData[0]->realVars[853]/* d[7].setz DISCRETE */)  = (data->modelData->realVarsData[853]/* d[7].setz DISCRETE */).attribute .start;

  (data->localData[0]->realVars[846]/* d[7].sety DISCRETE */)  = (data->modelData->realVarsData[846]/* d[7].sety DISCRETE */).attribute .start;

  (data->localData[0]->realVars[839]/* d[7].setx DISCRETE */)  = (data->modelData->realVarsData[839]/* d[7].setx DISCRETE */).attribute .start;

  (data->localData[0]->realVars[832]/* d[7].msg_to_cc[5] DISCRETE */)  = (data->modelData->realVarsData[832]/* d[7].msg_to_cc[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[831]/* d[7].msg_to_cc[4] DISCRETE */)  = (data->modelData->realVarsData[831]/* d[7].msg_to_cc[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[830]/* d[7].msg_to_cc[3] DISCRETE */)  = (data->modelData->realVarsData[830]/* d[7].msg_to_cc[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[829]/* d[7].msg_to_cc[2] DISCRETE */)  = (data->modelData->realVarsData[829]/* d[7].msg_to_cc[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[828]/* d[7].msg_to_cc[1] DISCRETE */)  = (data->modelData->realVarsData[828]/* d[7].msg_to_cc[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[40]/* $whenCondition46 DISCRETE */)  = (data->modelData->booleanVarsData[40]/* $whenCondition46 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[40]/* $whenCondition46 DISCRETE */)  = 0;

  array_alloc_scalar_real_array(&tmp0, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp1, ((modelica_real*)&((&(data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 7) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
  real_array_copy_data(tmp0, tmp1);

  (data->localData[0]->realVars[839]/* d[7].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3747]/* d[7].p.flyZone[1] PARAM */) );

  (data->localData[0]->realVars[846]/* d[7].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3748]/* d[7].p.flyZone[2] PARAM */) );

  (data->localData[0]->realVars[853]/* d[7].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3749]/* d[7].p.flyZone[3] PARAM */) );

  (data->localData[0]->integerVars[77]/* d[7].flag DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->booleanVars[229]/* d[7].readsignal DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[243]/* d[7].writesignal DISCRETE */)  = 0;

  (data->localData[0]->integerVars[70]/* d[7].fifox DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[56]/* d[7].comm_state DISCRETE */)  = ((modelica_integer) 10);
  TRACE_POP
}
extern void System_eqFunction_663(DATA *data, threadData_t *threadData);

extern void System_eqFunction_655(DATA *data, threadData_t *threadData);

extern void System_eqFunction_658(DATA *data, threadData_t *threadData);

extern void System_eqFunction_662(DATA *data, threadData_t *threadData);

extern void System_eqFunction_659(DATA *data, threadData_t *threadData);

extern void System_eqFunction_656(DATA *data, threadData_t *threadData);

extern void System_eqFunction_660(DATA *data, threadData_t *threadData);

extern void System_eqFunction_654(DATA *data, threadData_t *threadData);

extern void System_eqFunction_653(DATA *data, threadData_t *threadData);

extern void System_eqFunction_672(DATA *data, threadData_t *threadData);


/*
equation index: 12
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[7].writesignal = $START.drone_to_cc[7].writesignal
*/
void System_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  (data->simulationInfo->booleanVarsPre[285]/* drone_to_cc[7].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[285]/* drone_to_cc[7].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
drone_to_cc[7].writesigint = not $PRE.drone_to_cc[7].writesignal == drone_to_cc[7].writesignal
*/
void System_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->booleanVars[278]/* drone_to_cc[7].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[285]/* drone_to_cc[7].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[285]/* drone_to_cc[7].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[285]/* drone_to_cc[7].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[285]/* drone_to_cc[7].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[7].readsignal = $START.cc_to_drone[7].readsignal
*/
void System_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  (data->simulationInfo->booleanVarsPre[180]/* cc_to_drone[7].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[180]/* cc_to_drone[7].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
cc_to_drone[7].readsigint = not $PRE.cc_to_drone[7].readsignal == cc_to_drone[7].readsignal
*/
void System_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->booleanVars[173]/* cc_to_drone[7].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[180]/* cc_to_drone[7].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[180]/* cc_to_drone[7].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[180]/* cc_to_drone[7].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[180]/* cc_to_drone[7].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 16
type: ALGORITHM

  cc.endSimulation := $START.cc.endSimulation;
  cc.setpointChanged[7] := $START.cc.setpointChanged[7];
  cc.setpointChanged[6] := $START.cc.setpointChanged[6];
  cc.setpointChanged[5] := $START.cc.setpointChanged[5];
  cc.setpointChanged[4] := $START.cc.setpointChanged[4];
  cc.setpointChanged[3] := $START.cc.setpointChanged[3];
  cc.setpointChanged[2] := $START.cc.setpointChanged[2];
  cc.setpointChanged[1] := $START.cc.setpointChanged[1];
  cc.comm_done[7] := $START.cc.comm_done[7];
  cc.comm_done[6] := $START.cc.comm_done[6];
  cc.comm_done[5] := $START.cc.comm_done[5];
  cc.comm_done[4] := $START.cc.comm_done[4];
  cc.comm_done[3] := $START.cc.comm_done[3];
  cc.comm_done[2] := $START.cc.comm_done[2];
  cc.comm_done[1] := $START.cc.comm_done[1];
  cc.state := $START.cc.state;
  cc.fifox[7] := $START.cc.fifox[7];
  cc.fifox[6] := $START.cc.fifox[6];
  cc.fifox[5] := $START.cc.fifox[5];
  cc.fifox[4] := $START.cc.fifox[4];
  cc.fifox[3] := $START.cc.fifox[3];
  cc.fifox[2] := $START.cc.fifox[2];
  cc.fifox[1] := $START.cc.fifox[1];
  cc.pos[7,3] := $START.cc.pos[7,3];
  cc.pos[7,2] := $START.cc.pos[7,2];
  cc.pos[7,1] := $START.cc.pos[7,1];
  cc.pos[6,3] := $START.cc.pos[6,3];
  cc.pos[6,2] := $START.cc.pos[6,2];
  cc.pos[6,1] := $START.cc.pos[6,1];
  cc.pos[5,3] := $START.cc.pos[5,3];
  cc.pos[5,2] := $START.cc.pos[5,2];
  cc.pos[5,1] := $START.cc.pos[5,1];
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
  cc.msg_to_drone[7,5] := $START.cc.msg_to_drone[7,5];
  cc.msg_to_drone[7,4] := $START.cc.msg_to_drone[7,4];
  cc.msg_to_drone[7,3] := $START.cc.msg_to_drone[7,3];
  cc.msg_to_drone[7,2] := $START.cc.msg_to_drone[7,2];
  cc.msg_to_drone[7,1] := $START.cc.msg_to_drone[7,1];
  cc.msg_to_drone[6,5] := $START.cc.msg_to_drone[6,5];
  cc.msg_to_drone[6,4] := $START.cc.msg_to_drone[6,4];
  cc.msg_to_drone[6,3] := $START.cc.msg_to_drone[6,3];
  cc.msg_to_drone[6,2] := $START.cc.msg_to_drone[6,2];
  cc.msg_to_drone[6,1] := $START.cc.msg_to_drone[6,1];
  cc.msg_to_drone[5,5] := $START.cc.msg_to_drone[5,5];
  cc.msg_to_drone[5,4] := $START.cc.msg_to_drone[5,4];
  cc.msg_to_drone[5,3] := $START.cc.msg_to_drone[5,3];
  cc.msg_to_drone[5,2] := $START.cc.msg_to_drone[5,2];
  cc.msg_to_drone[5,1] := $START.cc.msg_to_drone[5,1];
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
  cc.writesignal[7] := $START.cc.writesignal[7];
  cc.writesignal[6] := $START.cc.writesignal[6];
  cc.writesignal[5] := $START.cc.writesignal[5];
  cc.writesignal[4] := $START.cc.writesignal[4];
  cc.writesignal[3] := $START.cc.writesignal[3];
  cc.writesignal[2] := $START.cc.writesignal[2];
  cc.writesignal[1] := $START.cc.writesignal[1];
  cc.readsignal[7] := $START.cc.readsignal[7];
  cc.readsignal[6] := $START.cc.readsignal[6];
  cc.readsignal[5] := $START.cc.readsignal[5];
  cc.readsignal[4] := $START.cc.readsignal[4];
  cc.readsignal[3] := $START.cc.readsignal[3];
  cc.readsignal[2] := $START.cc.readsignal[2];
  cc.readsignal[1] := $START.cc.readsignal[1];
  cc.setpointChangeTime[7] := $START.cc.setpointChangeTime[7];
  cc.setpointChangeTime[6] := $START.cc.setpointChangeTime[6];
  cc.setpointChangeTime[5] := $START.cc.setpointChangeTime[5];
  cc.setpointChangeTime[4] := $START.cc.setpointChangeTime[4];
  cc.setpointChangeTime[3] := $START.cc.setpointChangeTime[3];
  cc.setpointChangeTime[2] := $START.cc.setpointChangeTime[2];
  cc.setpointChangeTime[1] := $START.cc.setpointChangeTime[1];
  cc.lastAnswered[7] := $START.cc.lastAnswered[7];
  cc.lastAnswered[6] := $START.cc.lastAnswered[6];
  cc.lastAnswered[5] := $START.cc.lastAnswered[5];
  cc.lastAnswered[4] := $START.cc.lastAnswered[4];
  cc.lastAnswered[3] := $START.cc.lastAnswered[3];
  cc.lastAnswered[2] := $START.cc.lastAnswered[2];
  cc.lastAnswered[1] := $START.cc.lastAnswered[1];
  cc.isDead[7] := $START.cc.isDead[7];
  cc.isDead[6] := $START.cc.isDead[6];
  cc.isDead[5] := $START.cc.isDead[5];
  cc.isDead[4] := $START.cc.isDead[4];
  cc.isDead[3] := $START.cc.isDead[3];
  cc.isDead[2] := $START.cc.isDead[2];
  cc.isDead[1] := $START.cc.isDead[1];
  cc.rechargingDrones := $START.cc.rechargingDrones;
  cc.isRecharging[7] := $START.cc.isRecharging[7];
  cc.isRecharging[6] := $START.cc.isRecharging[6];
  cc.isRecharging[5] := $START.cc.isRecharging[5];
  cc.isRecharging[4] := $START.cc.isRecharging[4];
  cc.isRecharging[3] := $START.cc.isRecharging[3];
  cc.isRecharging[2] := $START.cc.isRecharging[2];
  cc.isRecharging[1] := $START.cc.isRecharging[1];
  cc.battery[7] := $START.cc.battery[7];
  cc.battery[6] := $START.cc.battery[6];
  cc.battery[5] := $START.cc.battery[5];
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
  cc.isBusy[7] := $START.cc.isBusy[7];
  cc.isBusy[6] := $START.cc.isBusy[6];
  cc.isBusy[5] := $START.cc.isBusy[5];
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
  cc.setz[7] := $START.cc.setz[7];
  cc.setz[6] := $START.cc.setz[6];
  cc.setz[5] := $START.cc.setz[5];
  cc.setz[4] := $START.cc.setz[4];
  cc.setz[3] := $START.cc.setz[3];
  cc.setz[2] := $START.cc.setz[2];
  cc.setz[1] := $START.cc.setz[1];
  cc.sety[7] := $START.cc.sety[7];
  cc.sety[6] := $START.cc.sety[6];
  cc.sety[5] := $START.cc.sety[5];
  cc.sety[4] := $START.cc.sety[4];
  cc.sety[3] := $START.cc.sety[3];
  cc.sety[2] := $START.cc.sety[2];
  cc.sety[1] := $START.cc.sety[1];
  cc.setx[7] := $START.cc.setx[7];
  cc.setx[6] := $START.cc.setx[6];
  cc.setx[5] := $START.cc.setx[5];
  cc.setx[4] := $START.cc.setx[4];
  cc.setx[3] := $START.cc.setx[3];
  cc.setx[2] := $START.cc.setx[2];
  cc.setx[1] := $START.cc.setx[1];
  cc.aliveDrones := $START.cc.aliveDrones;
  cc.z := $START.cc.z;
  cc.err := $START.cc.err;
  $whenCondition45 := $START.$whenCondition45;
  $whenCondition45 := false;
  cc.err := 0.0;
  cc.z := 0;
  cc.aliveDrones := 7;
  cc.setx := {cc.p.flyZone[1], cc.p.flyZone[1], cc.p.flyZone[1], cc.p.flyZone[1], cc.p.flyZone[1], cc.p.flyZone[1], cc.p.flyZone[1]};
  cc.sety := {cc.p.flyZone[2], cc.p.flyZone[2], cc.p.flyZone[2], cc.p.flyZone[2], cc.p.flyZone[2], cc.p.flyZone[2], cc.p.flyZone[2]};
  cc.setz := {cc.p.flyZone[3], cc.p.flyZone[3], cc.p.flyZone[3], cc.p.flyZone[3], cc.p.flyZone[3], cc.p.flyZone[3], cc.p.flyZone[3]};
  cc.hasBeenVisited := {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false};
  cc.lastVisited := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
  cc.isBusy := {false, false, false, false, false, false, false};
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
  cc.battery := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
  cc.isRecharging := {false, false, false, false, false, false, false};
  cc.rechargingDrones := 0;
  cc.isDead := {false, false, false, false, false, false, false};
  cc.lastAnswered := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
  cc.setpointChangeTime := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
  cc.readsignal := {false, false, false, false, false, false, false};
  cc.writesignal := {false, false, false, false, false, false, false};
  for i in 1:7 loop
    for j in 1:5 loop
      cc.msg_to_drone[i,j] := 0.0;
    end for;
  end for;
  for i in 1:7 loop
    for j in 1:3 loop
      cc.pos[i,j] := 0.0;
    end for;
  end for;
  cc.fifox := {0, 0, 0, 0, 0, 0, 0};
  cc.state := 0;
  cc.comm_done := {true, true, true, true, true, true, true};
  cc.setpointChanged := {false, false, false, false, false, false, false};
  cc.endSimulation := false;
  setup_db();
  setup_areas(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 7, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 16, cc.p.areas));
  setup_drones(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 7, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 16, cc.p.areas));
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
  (data->localData[0]->booleanVars[94]/* cc.endSimulation DISCRETE */)  = (data->modelData->booleanVarsData[94]/* cc.endSimulation DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[145]/* cc.setpointChanged[7] DISCRETE */)  = (data->modelData->booleanVarsData[145]/* cc.setpointChanged[7] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[144]/* cc.setpointChanged[6] DISCRETE */)  = (data->modelData->booleanVarsData[144]/* cc.setpointChanged[6] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[143]/* cc.setpointChanged[5] DISCRETE */)  = (data->modelData->booleanVarsData[143]/* cc.setpointChanged[5] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[142]/* cc.setpointChanged[4] DISCRETE */)  = (data->modelData->booleanVarsData[142]/* cc.setpointChanged[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[141]/* cc.setpointChanged[3] DISCRETE */)  = (data->modelData->booleanVarsData[141]/* cc.setpointChanged[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[140]/* cc.setpointChanged[2] DISCRETE */)  = (data->modelData->booleanVarsData[140]/* cc.setpointChanged[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[139]/* cc.setpointChanged[1] DISCRETE */)  = (data->modelData->booleanVarsData[139]/* cc.setpointChanged[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[86]/* cc.comm_done[7] DISCRETE */)  = (data->modelData->booleanVarsData[86]/* cc.comm_done[7] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[85]/* cc.comm_done[6] DISCRETE */)  = (data->modelData->booleanVarsData[85]/* cc.comm_done[6] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[84]/* cc.comm_done[5] DISCRETE */)  = (data->modelData->booleanVarsData[84]/* cc.comm_done[5] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[83]/* cc.comm_done[4] DISCRETE */)  = (data->modelData->booleanVarsData[83]/* cc.comm_done[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[82]/* cc.comm_done[3] DISCRETE */)  = (data->modelData->booleanVarsData[82]/* cc.comm_done[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[81]/* cc.comm_done[2] DISCRETE */)  = (data->modelData->booleanVarsData[81]/* cc.comm_done[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[80]/* cc.comm_done[1] DISCRETE */)  = (data->modelData->booleanVarsData[80]/* cc.comm_done[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[25]/* cc.state DISCRETE */)  = (data->modelData->integerVarsData[25]/* cc.state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[7]/* cc.fifox[7] DISCRETE */)  = (data->modelData->integerVarsData[7]/* cc.fifox[7] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[6]/* cc.fifox[6] DISCRETE */)  = (data->modelData->integerVarsData[6]/* cc.fifox[6] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[5]/* cc.fifox[5] DISCRETE */)  = (data->modelData->integerVarsData[5]/* cc.fifox[5] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[4]/* cc.fifox[4] DISCRETE */)  = (data->modelData->integerVarsData[4]/* cc.fifox[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[3]/* cc.fifox[3] DISCRETE */)  = (data->modelData->integerVarsData[3]/* cc.fifox[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[2]/* cc.fifox[2] DISCRETE */)  = (data->modelData->integerVarsData[2]/* cc.fifox[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)  = (data->modelData->integerVarsData[1]/* cc.fifox[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[352]/* cc.pos[7,3] DISCRETE */)  = (data->modelData->realVarsData[352]/* cc.pos[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[351]/* cc.pos[7,2] DISCRETE */)  = (data->modelData->realVarsData[351]/* cc.pos[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[350]/* cc.pos[7,1] DISCRETE */)  = (data->modelData->realVarsData[350]/* cc.pos[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[349]/* cc.pos[6,3] DISCRETE */)  = (data->modelData->realVarsData[349]/* cc.pos[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[348]/* cc.pos[6,2] DISCRETE */)  = (data->modelData->realVarsData[348]/* cc.pos[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[347]/* cc.pos[6,1] DISCRETE */)  = (data->modelData->realVarsData[347]/* cc.pos[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[346]/* cc.pos[5,3] DISCRETE */)  = (data->modelData->realVarsData[346]/* cc.pos[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[345]/* cc.pos[5,2] DISCRETE */)  = (data->modelData->realVarsData[345]/* cc.pos[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[344]/* cc.pos[5,1] DISCRETE */)  = (data->modelData->realVarsData[344]/* cc.pos[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[343]/* cc.pos[4,3] DISCRETE */)  = (data->modelData->realVarsData[343]/* cc.pos[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[342]/* cc.pos[4,2] DISCRETE */)  = (data->modelData->realVarsData[342]/* cc.pos[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[341]/* cc.pos[4,1] DISCRETE */)  = (data->modelData->realVarsData[341]/* cc.pos[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[340]/* cc.pos[3,3] DISCRETE */)  = (data->modelData->realVarsData[340]/* cc.pos[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[339]/* cc.pos[3,2] DISCRETE */)  = (data->modelData->realVarsData[339]/* cc.pos[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[338]/* cc.pos[3,1] DISCRETE */)  = (data->modelData->realVarsData[338]/* cc.pos[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[337]/* cc.pos[2,3] DISCRETE */)  = (data->modelData->realVarsData[337]/* cc.pos[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[336]/* cc.pos[2,2] DISCRETE */)  = (data->modelData->realVarsData[336]/* cc.pos[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[335]/* cc.pos[2,1] DISCRETE */)  = (data->modelData->realVarsData[335]/* cc.pos[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[334]/* cc.pos[1,3] DISCRETE */)  = (data->modelData->realVarsData[334]/* cc.pos[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[333]/* cc.pos[1,2] DISCRETE */)  = (data->modelData->realVarsData[333]/* cc.pos[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[332]/* cc.pos[1,1] DISCRETE */)  = (data->modelData->realVarsData[332]/* cc.pos[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[331]/* cc.msg_to_drone[7,5] DISCRETE */)  = (data->modelData->realVarsData[331]/* cc.msg_to_drone[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[330]/* cc.msg_to_drone[7,4] DISCRETE */)  = (data->modelData->realVarsData[330]/* cc.msg_to_drone[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[329]/* cc.msg_to_drone[7,3] DISCRETE */)  = (data->modelData->realVarsData[329]/* cc.msg_to_drone[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[328]/* cc.msg_to_drone[7,2] DISCRETE */)  = (data->modelData->realVarsData[328]/* cc.msg_to_drone[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[327]/* cc.msg_to_drone[7,1] DISCRETE */)  = (data->modelData->realVarsData[327]/* cc.msg_to_drone[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[326]/* cc.msg_to_drone[6,5] DISCRETE */)  = (data->modelData->realVarsData[326]/* cc.msg_to_drone[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[325]/* cc.msg_to_drone[6,4] DISCRETE */)  = (data->modelData->realVarsData[325]/* cc.msg_to_drone[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[324]/* cc.msg_to_drone[6,3] DISCRETE */)  = (data->modelData->realVarsData[324]/* cc.msg_to_drone[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[323]/* cc.msg_to_drone[6,2] DISCRETE */)  = (data->modelData->realVarsData[323]/* cc.msg_to_drone[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[322]/* cc.msg_to_drone[6,1] DISCRETE */)  = (data->modelData->realVarsData[322]/* cc.msg_to_drone[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[321]/* cc.msg_to_drone[5,5] DISCRETE */)  = (data->modelData->realVarsData[321]/* cc.msg_to_drone[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[320]/* cc.msg_to_drone[5,4] DISCRETE */)  = (data->modelData->realVarsData[320]/* cc.msg_to_drone[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[319]/* cc.msg_to_drone[5,3] DISCRETE */)  = (data->modelData->realVarsData[319]/* cc.msg_to_drone[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[318]/* cc.msg_to_drone[5,2] DISCRETE */)  = (data->modelData->realVarsData[318]/* cc.msg_to_drone[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[317]/* cc.msg_to_drone[5,1] DISCRETE */)  = (data->modelData->realVarsData[317]/* cc.msg_to_drone[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[316]/* cc.msg_to_drone[4,5] DISCRETE */)  = (data->modelData->realVarsData[316]/* cc.msg_to_drone[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[315]/* cc.msg_to_drone[4,4] DISCRETE */)  = (data->modelData->realVarsData[315]/* cc.msg_to_drone[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[314]/* cc.msg_to_drone[4,3] DISCRETE */)  = (data->modelData->realVarsData[314]/* cc.msg_to_drone[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[313]/* cc.msg_to_drone[4,2] DISCRETE */)  = (data->modelData->realVarsData[313]/* cc.msg_to_drone[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[312]/* cc.msg_to_drone[4,1] DISCRETE */)  = (data->modelData->realVarsData[312]/* cc.msg_to_drone[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[311]/* cc.msg_to_drone[3,5] DISCRETE */)  = (data->modelData->realVarsData[311]/* cc.msg_to_drone[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[310]/* cc.msg_to_drone[3,4] DISCRETE */)  = (data->modelData->realVarsData[310]/* cc.msg_to_drone[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[309]/* cc.msg_to_drone[3,3] DISCRETE */)  = (data->modelData->realVarsData[309]/* cc.msg_to_drone[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[308]/* cc.msg_to_drone[3,2] DISCRETE */)  = (data->modelData->realVarsData[308]/* cc.msg_to_drone[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[307]/* cc.msg_to_drone[3,1] DISCRETE */)  = (data->modelData->realVarsData[307]/* cc.msg_to_drone[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[306]/* cc.msg_to_drone[2,5] DISCRETE */)  = (data->modelData->realVarsData[306]/* cc.msg_to_drone[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[305]/* cc.msg_to_drone[2,4] DISCRETE */)  = (data->modelData->realVarsData[305]/* cc.msg_to_drone[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[304]/* cc.msg_to_drone[2,3] DISCRETE */)  = (data->modelData->realVarsData[304]/* cc.msg_to_drone[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[303]/* cc.msg_to_drone[2,2] DISCRETE */)  = (data->modelData->realVarsData[303]/* cc.msg_to_drone[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[302]/* cc.msg_to_drone[2,1] DISCRETE */)  = (data->modelData->realVarsData[302]/* cc.msg_to_drone[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[301]/* cc.msg_to_drone[1,5] DISCRETE */)  = (data->modelData->realVarsData[301]/* cc.msg_to_drone[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[300]/* cc.msg_to_drone[1,4] DISCRETE */)  = (data->modelData->realVarsData[300]/* cc.msg_to_drone[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[299]/* cc.msg_to_drone[1,3] DISCRETE */)  = (data->modelData->realVarsData[299]/* cc.msg_to_drone[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[298]/* cc.msg_to_drone[1,2] DISCRETE */)  = (data->modelData->realVarsData[298]/* cc.msg_to_drone[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[297]/* cc.msg_to_drone[1,1] DISCRETE */)  = (data->modelData->realVarsData[297]/* cc.msg_to_drone[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[159]/* cc.writesignal[7] DISCRETE */)  = (data->modelData->booleanVarsData[159]/* cc.writesignal[7] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[158]/* cc.writesignal[6] DISCRETE */)  = (data->modelData->booleanVarsData[158]/* cc.writesignal[6] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[157]/* cc.writesignal[5] DISCRETE */)  = (data->modelData->booleanVarsData[157]/* cc.writesignal[5] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[156]/* cc.writesignal[4] DISCRETE */)  = (data->modelData->booleanVarsData[156]/* cc.writesignal[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[155]/* cc.writesignal[3] DISCRETE */)  = (data->modelData->booleanVarsData[155]/* cc.writesignal[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[154]/* cc.writesignal[2] DISCRETE */)  = (data->modelData->booleanVarsData[154]/* cc.writesignal[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[153]/* cc.writesignal[1] DISCRETE */)  = (data->modelData->booleanVarsData[153]/* cc.writesignal[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[138]/* cc.readsignal[7] DISCRETE */)  = (data->modelData->booleanVarsData[138]/* cc.readsignal[7] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[137]/* cc.readsignal[6] DISCRETE */)  = (data->modelData->booleanVarsData[137]/* cc.readsignal[6] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[136]/* cc.readsignal[5] DISCRETE */)  = (data->modelData->booleanVarsData[136]/* cc.readsignal[5] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[135]/* cc.readsignal[4] DISCRETE */)  = (data->modelData->booleanVarsData[135]/* cc.readsignal[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[134]/* cc.readsignal[3] DISCRETE */)  = (data->modelData->booleanVarsData[134]/* cc.readsignal[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[133]/* cc.readsignal[2] DISCRETE */)  = (data->modelData->booleanVarsData[133]/* cc.readsignal[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[132]/* cc.readsignal[1] DISCRETE */)  = (data->modelData->booleanVarsData[132]/* cc.readsignal[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[359]/* cc.setpointChangeTime[7] DISCRETE */)  = (data->modelData->realVarsData[359]/* cc.setpointChangeTime[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[358]/* cc.setpointChangeTime[6] DISCRETE */)  = (data->modelData->realVarsData[358]/* cc.setpointChangeTime[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[357]/* cc.setpointChangeTime[5] DISCRETE */)  = (data->modelData->realVarsData[357]/* cc.setpointChangeTime[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[356]/* cc.setpointChangeTime[4] DISCRETE */)  = (data->modelData->realVarsData[356]/* cc.setpointChangeTime[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[355]/* cc.setpointChangeTime[3] DISCRETE */)  = (data->modelData->realVarsData[355]/* cc.setpointChangeTime[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[354]/* cc.setpointChangeTime[2] DISCRETE */)  = (data->modelData->realVarsData[354]/* cc.setpointChangeTime[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[353]/* cc.setpointChangeTime[1] DISCRETE */)  = (data->modelData->realVarsData[353]/* cc.setpointChangeTime[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[278]/* cc.lastAnswered[7] DISCRETE */)  = (data->modelData->realVarsData[278]/* cc.lastAnswered[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[277]/* cc.lastAnswered[6] DISCRETE */)  = (data->modelData->realVarsData[277]/* cc.lastAnswered[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[276]/* cc.lastAnswered[5] DISCRETE */)  = (data->modelData->realVarsData[276]/* cc.lastAnswered[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[275]/* cc.lastAnswered[4] DISCRETE */)  = (data->modelData->realVarsData[275]/* cc.lastAnswered[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[274]/* cc.lastAnswered[3] DISCRETE */)  = (data->modelData->realVarsData[274]/* cc.lastAnswered[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[273]/* cc.lastAnswered[2] DISCRETE */)  = (data->modelData->realVarsData[273]/* cc.lastAnswered[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[272]/* cc.lastAnswered[1] DISCRETE */)  = (data->modelData->realVarsData[272]/* cc.lastAnswered[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[124]/* cc.isDead[7] DISCRETE */)  = (data->modelData->booleanVarsData[124]/* cc.isDead[7] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[123]/* cc.isDead[6] DISCRETE */)  = (data->modelData->booleanVarsData[123]/* cc.isDead[6] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[122]/* cc.isDead[5] DISCRETE */)  = (data->modelData->booleanVarsData[122]/* cc.isDead[5] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[121]/* cc.isDead[4] DISCRETE */)  = (data->modelData->booleanVarsData[121]/* cc.isDead[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[120]/* cc.isDead[3] DISCRETE */)  = (data->modelData->booleanVarsData[120]/* cc.isDead[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[119]/* cc.isDead[2] DISCRETE */)  = (data->modelData->booleanVarsData[119]/* cc.isDead[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[118]/* cc.isDead[1] DISCRETE */)  = (data->modelData->booleanVarsData[118]/* cc.isDead[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[24]/* cc.rechargingDrones DISCRETE */)  = (data->modelData->integerVarsData[24]/* cc.rechargingDrones DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[131]/* cc.isRecharging[7] DISCRETE */)  = (data->modelData->booleanVarsData[131]/* cc.isRecharging[7] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[130]/* cc.isRecharging[6] DISCRETE */)  = (data->modelData->booleanVarsData[130]/* cc.isRecharging[6] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[129]/* cc.isRecharging[5] DISCRETE */)  = (data->modelData->booleanVarsData[129]/* cc.isRecharging[5] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[128]/* cc.isRecharging[4] DISCRETE */)  = (data->modelData->booleanVarsData[128]/* cc.isRecharging[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[127]/* cc.isRecharging[3] DISCRETE */)  = (data->modelData->booleanVarsData[127]/* cc.isRecharging[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[126]/* cc.isRecharging[2] DISCRETE */)  = (data->modelData->booleanVarsData[126]/* cc.isRecharging[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[125]/* cc.isRecharging[1] DISCRETE */)  = (data->modelData->booleanVarsData[125]/* cc.isRecharging[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[268]/* cc.battery[7] DISCRETE */)  = (data->modelData->realVarsData[268]/* cc.battery[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[267]/* cc.battery[6] DISCRETE */)  = (data->modelData->realVarsData[267]/* cc.battery[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[266]/* cc.battery[5] DISCRETE */)  = (data->modelData->realVarsData[266]/* cc.battery[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[265]/* cc.battery[4] DISCRETE */)  = (data->modelData->realVarsData[265]/* cc.battery[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[264]/* cc.battery[3] DISCRETE */)  = (data->modelData->realVarsData[264]/* cc.battery[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[263]/* cc.battery[2] DISCRETE */)  = (data->modelData->realVarsData[263]/* cc.battery[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[262]/* cc.battery[1] DISCRETE */)  = (data->modelData->realVarsData[262]/* cc.battery[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[384]/* cc.tmp_time DISCRETE */)  = (data->modelData->realVarsData[384]/* cc.tmp_time DISCRETE */).attribute .start;

  (data->localData[0]->realVars[295]/* cc.max_time DISCRETE */)  = (data->modelData->realVarsData[295]/* cc.max_time DISCRETE */).attribute .start;

  (data->localData[0]->realVars[261]/* cc.area_z DISCRETE */)  = (data->modelData->realVarsData[261]/* cc.area_z DISCRETE */).attribute .start;

  (data->localData[0]->realVars[260]/* cc.area_y DISCRETE */)  = (data->modelData->realVarsData[260]/* cc.area_y DISCRETE */).attribute .start;

  (data->localData[0]->realVars[259]/* cc.area_x DISCRETE */)  = (data->modelData->realVarsData[259]/* cc.area_x DISCRETE */).attribute .start;

  (data->localData[0]->realVars[270]/* cc.choice_value_2 DISCRETE */)  = (data->modelData->realVarsData[270]/* cc.choice_value_2 DISCRETE */).attribute .start;

  (data->localData[0]->realVars[269]/* cc.choice_value_1 DISCRETE */)  = (data->modelData->realVarsData[269]/* cc.choice_value_1 DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[27]/* cc.tmp_area_2 DISCRETE */)  = (data->modelData->integerVarsData[27]/* cc.tmp_area_2 DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[26]/* cc.tmp_area_1 DISCRETE */)  = (data->modelData->integerVarsData[26]/* cc.tmp_area_1 DISCRETE */).attribute .start;

  (data->localData[0]->realVars[383]/* cc.tmp_distance DISCRETE */)  = (data->modelData->realVarsData[383]/* cc.tmp_distance DISCRETE */).attribute .start;

  (data->localData[0]->realVars[296]/* cc.min_distance DISCRETE */)  = (data->modelData->realVarsData[296]/* cc.min_distance DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[23]/* cc.hasBeenSelected[16] DISCRETE */)  = (data->modelData->integerVarsData[23]/* cc.hasBeenSelected[16] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[22]/* cc.hasBeenSelected[15] DISCRETE */)  = (data->modelData->integerVarsData[22]/* cc.hasBeenSelected[15] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[21]/* cc.hasBeenSelected[14] DISCRETE */)  = (data->modelData->integerVarsData[21]/* cc.hasBeenSelected[14] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[20]/* cc.hasBeenSelected[13] DISCRETE */)  = (data->modelData->integerVarsData[20]/* cc.hasBeenSelected[13] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[19]/* cc.hasBeenSelected[12] DISCRETE */)  = (data->modelData->integerVarsData[19]/* cc.hasBeenSelected[12] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[18]/* cc.hasBeenSelected[11] DISCRETE */)  = (data->modelData->integerVarsData[18]/* cc.hasBeenSelected[11] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[17]/* cc.hasBeenSelected[10] DISCRETE */)  = (data->modelData->integerVarsData[17]/* cc.hasBeenSelected[10] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[16]/* cc.hasBeenSelected[9] DISCRETE */)  = (data->modelData->integerVarsData[16]/* cc.hasBeenSelected[9] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[15]/* cc.hasBeenSelected[8] DISCRETE */)  = (data->modelData->integerVarsData[15]/* cc.hasBeenSelected[8] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[14]/* cc.hasBeenSelected[7] DISCRETE */)  = (data->modelData->integerVarsData[14]/* cc.hasBeenSelected[7] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[13]/* cc.hasBeenSelected[6] DISCRETE */)  = (data->modelData->integerVarsData[13]/* cc.hasBeenSelected[6] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[12]/* cc.hasBeenSelected[5] DISCRETE */)  = (data->modelData->integerVarsData[12]/* cc.hasBeenSelected[5] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[11]/* cc.hasBeenSelected[4] DISCRETE */)  = (data->modelData->integerVarsData[11]/* cc.hasBeenSelected[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[10]/* cc.hasBeenSelected[3] DISCRETE */)  = (data->modelData->integerVarsData[10]/* cc.hasBeenSelected[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[9]/* cc.hasBeenSelected[2] DISCRETE */)  = (data->modelData->integerVarsData[9]/* cc.hasBeenSelected[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[8]/* cc.hasBeenSelected[1] DISCRETE */)  = (data->modelData->integerVarsData[8]/* cc.hasBeenSelected[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[381]/* cc.time_passed_since_last_loop DISCRETE */)  = (data->modelData->realVarsData[381]/* cc.time_passed_since_last_loop DISCRETE */).attribute .start;

  (data->localData[0]->realVars[382]/* cc.time_span DISCRETE */)  = (data->modelData->realVarsData[382]/* cc.time_span DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[117]/* cc.isBusy[7] DISCRETE */)  = (data->modelData->booleanVarsData[117]/* cc.isBusy[7] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[116]/* cc.isBusy[6] DISCRETE */)  = (data->modelData->booleanVarsData[116]/* cc.isBusy[6] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[115]/* cc.isBusy[5] DISCRETE */)  = (data->modelData->booleanVarsData[115]/* cc.isBusy[5] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[114]/* cc.isBusy[4] DISCRETE */)  = (data->modelData->booleanVarsData[114]/* cc.isBusy[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[113]/* cc.isBusy[3] DISCRETE */)  = (data->modelData->booleanVarsData[113]/* cc.isBusy[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[112]/* cc.isBusy[2] DISCRETE */)  = (data->modelData->booleanVarsData[112]/* cc.isBusy[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[111]/* cc.isBusy[1] DISCRETE */)  = (data->modelData->booleanVarsData[111]/* cc.isBusy[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[294]/* cc.lastVisited[16] DISCRETE */)  = (data->modelData->realVarsData[294]/* cc.lastVisited[16] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[293]/* cc.lastVisited[15] DISCRETE */)  = (data->modelData->realVarsData[293]/* cc.lastVisited[15] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[292]/* cc.lastVisited[14] DISCRETE */)  = (data->modelData->realVarsData[292]/* cc.lastVisited[14] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[291]/* cc.lastVisited[13] DISCRETE */)  = (data->modelData->realVarsData[291]/* cc.lastVisited[13] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[290]/* cc.lastVisited[12] DISCRETE */)  = (data->modelData->realVarsData[290]/* cc.lastVisited[12] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[289]/* cc.lastVisited[11] DISCRETE */)  = (data->modelData->realVarsData[289]/* cc.lastVisited[11] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[288]/* cc.lastVisited[10] DISCRETE */)  = (data->modelData->realVarsData[288]/* cc.lastVisited[10] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[287]/* cc.lastVisited[9] DISCRETE */)  = (data->modelData->realVarsData[287]/* cc.lastVisited[9] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[286]/* cc.lastVisited[8] DISCRETE */)  = (data->modelData->realVarsData[286]/* cc.lastVisited[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[285]/* cc.lastVisited[7] DISCRETE */)  = (data->modelData->realVarsData[285]/* cc.lastVisited[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[284]/* cc.lastVisited[6] DISCRETE */)  = (data->modelData->realVarsData[284]/* cc.lastVisited[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[283]/* cc.lastVisited[5] DISCRETE */)  = (data->modelData->realVarsData[283]/* cc.lastVisited[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[282]/* cc.lastVisited[4] DISCRETE */)  = (data->modelData->realVarsData[282]/* cc.lastVisited[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[281]/* cc.lastVisited[3] DISCRETE */)  = (data->modelData->realVarsData[281]/* cc.lastVisited[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[280]/* cc.lastVisited[2] DISCRETE */)  = (data->modelData->realVarsData[280]/* cc.lastVisited[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[279]/* cc.lastVisited[1] DISCRETE */)  = (data->modelData->realVarsData[279]/* cc.lastVisited[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[110]/* cc.hasBeenVisited[16] DISCRETE */)  = (data->modelData->booleanVarsData[110]/* cc.hasBeenVisited[16] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[109]/* cc.hasBeenVisited[15] DISCRETE */)  = (data->modelData->booleanVarsData[109]/* cc.hasBeenVisited[15] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[108]/* cc.hasBeenVisited[14] DISCRETE */)  = (data->modelData->booleanVarsData[108]/* cc.hasBeenVisited[14] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[107]/* cc.hasBeenVisited[13] DISCRETE */)  = (data->modelData->booleanVarsData[107]/* cc.hasBeenVisited[13] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[106]/* cc.hasBeenVisited[12] DISCRETE */)  = (data->modelData->booleanVarsData[106]/* cc.hasBeenVisited[12] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[105]/* cc.hasBeenVisited[11] DISCRETE */)  = (data->modelData->booleanVarsData[105]/* cc.hasBeenVisited[11] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[104]/* cc.hasBeenVisited[10] DISCRETE */)  = (data->modelData->booleanVarsData[104]/* cc.hasBeenVisited[10] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[103]/* cc.hasBeenVisited[9] DISCRETE */)  = (data->modelData->booleanVarsData[103]/* cc.hasBeenVisited[9] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[102]/* cc.hasBeenVisited[8] DISCRETE */)  = (data->modelData->booleanVarsData[102]/* cc.hasBeenVisited[8] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[101]/* cc.hasBeenVisited[7] DISCRETE */)  = (data->modelData->booleanVarsData[101]/* cc.hasBeenVisited[7] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[100]/* cc.hasBeenVisited[6] DISCRETE */)  = (data->modelData->booleanVarsData[100]/* cc.hasBeenVisited[6] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[99]/* cc.hasBeenVisited[5] DISCRETE */)  = (data->modelData->booleanVarsData[99]/* cc.hasBeenVisited[5] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[98]/* cc.hasBeenVisited[4] DISCRETE */)  = (data->modelData->booleanVarsData[98]/* cc.hasBeenVisited[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[97]/* cc.hasBeenVisited[3] DISCRETE */)  = (data->modelData->booleanVarsData[97]/* cc.hasBeenVisited[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[96]/* cc.hasBeenVisited[2] DISCRETE */)  = (data->modelData->booleanVarsData[96]/* cc.hasBeenVisited[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[95]/* cc.hasBeenVisited[1] DISCRETE */)  = (data->modelData->booleanVarsData[95]/* cc.hasBeenVisited[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[380]/* cc.setz[7] DISCRETE */)  = (data->modelData->realVarsData[380]/* cc.setz[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[379]/* cc.setz[6] DISCRETE */)  = (data->modelData->realVarsData[379]/* cc.setz[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[378]/* cc.setz[5] DISCRETE */)  = (data->modelData->realVarsData[378]/* cc.setz[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[377]/* cc.setz[4] DISCRETE */)  = (data->modelData->realVarsData[377]/* cc.setz[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[376]/* cc.setz[3] DISCRETE */)  = (data->modelData->realVarsData[376]/* cc.setz[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[375]/* cc.setz[2] DISCRETE */)  = (data->modelData->realVarsData[375]/* cc.setz[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[374]/* cc.setz[1] DISCRETE */)  = (data->modelData->realVarsData[374]/* cc.setz[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[373]/* cc.sety[7] DISCRETE */)  = (data->modelData->realVarsData[373]/* cc.sety[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[372]/* cc.sety[6] DISCRETE */)  = (data->modelData->realVarsData[372]/* cc.sety[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[371]/* cc.sety[5] DISCRETE */)  = (data->modelData->realVarsData[371]/* cc.sety[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[370]/* cc.sety[4] DISCRETE */)  = (data->modelData->realVarsData[370]/* cc.sety[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[369]/* cc.sety[3] DISCRETE */)  = (data->modelData->realVarsData[369]/* cc.sety[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[368]/* cc.sety[2] DISCRETE */)  = (data->modelData->realVarsData[368]/* cc.sety[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[367]/* cc.sety[1] DISCRETE */)  = (data->modelData->realVarsData[367]/* cc.sety[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[366]/* cc.setx[7] DISCRETE */)  = (data->modelData->realVarsData[366]/* cc.setx[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[365]/* cc.setx[6] DISCRETE */)  = (data->modelData->realVarsData[365]/* cc.setx[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[364]/* cc.setx[5] DISCRETE */)  = (data->modelData->realVarsData[364]/* cc.setx[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[363]/* cc.setx[4] DISCRETE */)  = (data->modelData->realVarsData[363]/* cc.setx[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[362]/* cc.setx[3] DISCRETE */)  = (data->modelData->realVarsData[362]/* cc.setx[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[361]/* cc.setx[2] DISCRETE */)  = (data->modelData->realVarsData[361]/* cc.setx[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[360]/* cc.setx[1] DISCRETE */)  = (data->modelData->realVarsData[360]/* cc.setx[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = (data->modelData->integerVarsData[0]/* cc.aliveDrones DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[28]/* cc.z DISCRETE */)  = (data->modelData->integerVarsData[28]/* cc.z DISCRETE */).attribute .start;

  (data->localData[0]->realVars[271]/* cc.err DISCRETE */)  = (data->modelData->realVarsData[271]/* cc.err DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[39]/* $whenCondition45 DISCRETE */)  = (data->modelData->booleanVarsData[39]/* $whenCondition45 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[39]/* $whenCondition45 DISCRETE */)  = 0;

  (data->localData[0]->realVars[271]/* cc.err DISCRETE */)  = 0.0;

  (data->localData[0]->integerVars[28]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = ((modelica_integer) 7);

  array_alloc_scalar_real_array(&tmp4, 7, (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) );
  real_array_create(&tmp5, ((modelica_real*)&((&(data->localData[0]->realVars[360]/* cc.setx[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
  real_array_copy_data(tmp4, tmp5);

  array_alloc_scalar_real_array(&tmp6, 7, (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) );
  real_array_create(&tmp7, ((modelica_real*)&((&(data->localData[0]->realVars[367]/* cc.sety[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
  real_array_copy_data(tmp6, tmp7);

  array_alloc_scalar_real_array(&tmp8, 7, (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) );
  real_array_create(&tmp9, ((modelica_real*)&((&(data->localData[0]->realVars[374]/* cc.setz[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
  real_array_copy_data(tmp8, tmp9);

  array_alloc_scalar_boolean_array(&tmp10, 16, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp11, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[95]/* cc.hasBeenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  boolean_array_copy_data(tmp10, tmp11);

  array_alloc_scalar_real_array(&tmp12, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp13, ((modelica_real*)&((&(data->localData[0]->realVars[279]/* cc.lastVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  real_array_copy_data(tmp12, tmp13);

  array_alloc_scalar_boolean_array(&tmp14, 7, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp15, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[111]/* cc.isBusy[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
  boolean_array_copy_data(tmp14, tmp15);

  (data->localData[0]->realVars[382]/* cc.time_span DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[381]/* cc.time_passed_since_last_loop DISCRETE */)  = 0.0;

  array_alloc_scalar_integer_array(&tmp16, 16, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp17, ((modelica_integer*)&((&(data->localData[0]->integerVars[8]/* cc.hasBeenSelected[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  integer_array_copy_data(tmp16, tmp17);

  real_array_create(&tmp18, ((modelica_real*)&((&data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
  tmp19 = max_real_array(tmp18);
  (data->localData[0]->realVars[296]/* cc.min_distance DISCRETE */)  = tmp19;

  (data->localData[0]->realVars[383]/* cc.tmp_distance DISCRETE */)  = 0.0;

  (data->localData[0]->integerVars[26]/* cc.tmp_area_1 DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[27]/* cc.tmp_area_2 DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->realVars[269]/* cc.choice_value_1 DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[270]/* cc.choice_value_2 DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[259]/* cc.area_x DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[260]/* cc.area_y DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[261]/* cc.area_z DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[295]/* cc.max_time DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[384]/* cc.tmp_time DISCRETE */)  = 0.0;

  array_alloc_scalar_real_array(&tmp20, 7, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp21, ((modelica_real*)&((&(data->localData[0]->realVars[262]/* cc.battery[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
  real_array_copy_data(tmp20, tmp21);

  array_alloc_scalar_boolean_array(&tmp22, 7, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp23, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[125]/* cc.isRecharging[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
  boolean_array_copy_data(tmp22, tmp23);

  (data->localData[0]->integerVars[24]/* cc.rechargingDrones DISCRETE */)  = ((modelica_integer) 0);

  array_alloc_scalar_boolean_array(&tmp24, 7, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp25, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[118]/* cc.isDead[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
  boolean_array_copy_data(tmp24, tmp25);

  array_alloc_scalar_real_array(&tmp26, 7, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp27, ((modelica_real*)&((&(data->localData[0]->realVars[272]/* cc.lastAnswered[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
  real_array_copy_data(tmp26, tmp27);

  array_alloc_scalar_real_array(&tmp28, 7, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp29, ((modelica_real*)&((&(data->localData[0]->realVars[353]/* cc.setpointChangeTime[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
  real_array_copy_data(tmp28, tmp29);

  array_alloc_scalar_boolean_array(&tmp30, 7, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp31, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[132]/* cc.readsignal[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
  boolean_array_copy_data(tmp30, tmp31);

  array_alloc_scalar_boolean_array(&tmp32, 7, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp33, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[153]/* cc.writesignal[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
  boolean_array_copy_data(tmp32, tmp33);

  tmp37 = ((modelica_integer) 1); tmp38 = 1; tmp39 = ((modelica_integer) 7);
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
          (&(data->localData[0]->realVars[297]/* cc.msg_to_drone[1,1] DISCRETE */) )[(i - 1) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  tmp43 = ((modelica_integer) 1); tmp44 = 1; tmp45 = ((modelica_integer) 7);
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
          (&(data->localData[0]->realVars[332]/* cc.pos[1,1] DISCRETE */) )[(i - 1) * 3 + (j-1)] = 0.0;
        }
      }
    }
  }

  array_alloc_scalar_integer_array(&tmp46, 7, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp47, ((modelica_integer*)&((&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
  integer_array_copy_data(tmp46, tmp47);

  (data->localData[0]->integerVars[25]/* cc.state DISCRETE */)  = ((modelica_integer) 0);

  array_alloc_scalar_boolean_array(&tmp48, 7, (modelica_boolean)1, (modelica_boolean)1, (modelica_boolean)1, (modelica_boolean)1, (modelica_boolean)1, (modelica_boolean)1, (modelica_boolean)1);
  boolean_array_create(&tmp49, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[80]/* cc.comm_done[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
  boolean_array_copy_data(tmp48, tmp49);

  array_alloc_scalar_boolean_array(&tmp50, 7, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp51, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[139]/* cc.setpointChanged[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
  boolean_array_copy_data(tmp50, tmp51);

  (data->localData[0]->booleanVars[94]/* cc.endSimulation DISCRETE */)  = 0;

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
  tmp52._nDrones = ((modelica_integer) 7);
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
  tmp56._nDrones = ((modelica_integer) 7);
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
  $whenCondition44 := $START.$whenCondition44;
  $whenCondition43 := $START.$whenCondition43;
  $whenCondition43 := false;
  $whenCondition44 := time > m.p.stop_simulation or cc.endSimulation;
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
  (data->localData[0]->realVars[1290]/* m.old_avg_drones_all_areas DISCRETE */)  = (data->modelData->realVarsData[1290]/* m.old_avg_drones_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1324]/* m.std_dev_all_areas DISCRETE */)  = (data->modelData->realVarsData[1324]/* m.std_dev_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1323]/* m.std_dev[16] DISCRETE */)  = (data->modelData->realVarsData[1323]/* m.std_dev[16] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1322]/* m.std_dev[15] DISCRETE */)  = (data->modelData->realVarsData[1322]/* m.std_dev[15] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1321]/* m.std_dev[14] DISCRETE */)  = (data->modelData->realVarsData[1321]/* m.std_dev[14] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1320]/* m.std_dev[13] DISCRETE */)  = (data->modelData->realVarsData[1320]/* m.std_dev[13] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1319]/* m.std_dev[12] DISCRETE */)  = (data->modelData->realVarsData[1319]/* m.std_dev[12] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1318]/* m.std_dev[11] DISCRETE */)  = (data->modelData->realVarsData[1318]/* m.std_dev[11] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1317]/* m.std_dev[10] DISCRETE */)  = (data->modelData->realVarsData[1317]/* m.std_dev[10] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1316]/* m.std_dev[9] DISCRETE */)  = (data->modelData->realVarsData[1316]/* m.std_dev[9] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1315]/* m.std_dev[8] DISCRETE */)  = (data->modelData->realVarsData[1315]/* m.std_dev[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1314]/* m.std_dev[7] DISCRETE */)  = (data->modelData->realVarsData[1314]/* m.std_dev[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1313]/* m.std_dev[6] DISCRETE */)  = (data->modelData->realVarsData[1313]/* m.std_dev[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1312]/* m.std_dev[5] DISCRETE */)  = (data->modelData->realVarsData[1312]/* m.std_dev[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1311]/* m.std_dev[4] DISCRETE */)  = (data->modelData->realVarsData[1311]/* m.std_dev[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1310]/* m.std_dev[3] DISCRETE */)  = (data->modelData->realVarsData[1310]/* m.std_dev[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1309]/* m.std_dev[2] DISCRETE */)  = (data->modelData->realVarsData[1309]/* m.std_dev[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1308]/* m.std_dev[1] DISCRETE */)  = (data->modelData->realVarsData[1308]/* m.std_dev[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1273]/* m.max_no_drone_time DISCRETE */)  = (data->modelData->realVarsData[1273]/* m.max_no_drone_time DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1272]/* m.avg_no_drone_time_all_areas DISCRETE */)  = (data->modelData->realVarsData[1272]/* m.avg_no_drone_time_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1271]/* m.avg_no_drone_time[16] DISCRETE */)  = (data->modelData->realVarsData[1271]/* m.avg_no_drone_time[16] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1270]/* m.avg_no_drone_time[15] DISCRETE */)  = (data->modelData->realVarsData[1270]/* m.avg_no_drone_time[15] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1269]/* m.avg_no_drone_time[14] DISCRETE */)  = (data->modelData->realVarsData[1269]/* m.avg_no_drone_time[14] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1268]/* m.avg_no_drone_time[13] DISCRETE */)  = (data->modelData->realVarsData[1268]/* m.avg_no_drone_time[13] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1267]/* m.avg_no_drone_time[12] DISCRETE */)  = (data->modelData->realVarsData[1267]/* m.avg_no_drone_time[12] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1266]/* m.avg_no_drone_time[11] DISCRETE */)  = (data->modelData->realVarsData[1266]/* m.avg_no_drone_time[11] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1265]/* m.avg_no_drone_time[10] DISCRETE */)  = (data->modelData->realVarsData[1265]/* m.avg_no_drone_time[10] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1264]/* m.avg_no_drone_time[9] DISCRETE */)  = (data->modelData->realVarsData[1264]/* m.avg_no_drone_time[9] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1263]/* m.avg_no_drone_time[8] DISCRETE */)  = (data->modelData->realVarsData[1263]/* m.avg_no_drone_time[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1262]/* m.avg_no_drone_time[7] DISCRETE */)  = (data->modelData->realVarsData[1262]/* m.avg_no_drone_time[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1261]/* m.avg_no_drone_time[6] DISCRETE */)  = (data->modelData->realVarsData[1261]/* m.avg_no_drone_time[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1260]/* m.avg_no_drone_time[5] DISCRETE */)  = (data->modelData->realVarsData[1260]/* m.avg_no_drone_time[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1259]/* m.avg_no_drone_time[4] DISCRETE */)  = (data->modelData->realVarsData[1259]/* m.avg_no_drone_time[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1258]/* m.avg_no_drone_time[3] DISCRETE */)  = (data->modelData->realVarsData[1258]/* m.avg_no_drone_time[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1257]/* m.avg_no_drone_time[2] DISCRETE */)  = (data->modelData->realVarsData[1257]/* m.avg_no_drone_time[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1256]/* m.avg_no_drone_time[1] DISCRETE */)  = (data->modelData->realVarsData[1256]/* m.avg_no_drone_time[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1289]/* m.no_drone_time[16] DISCRETE */)  = (data->modelData->realVarsData[1289]/* m.no_drone_time[16] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1288]/* m.no_drone_time[15] DISCRETE */)  = (data->modelData->realVarsData[1288]/* m.no_drone_time[15] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1287]/* m.no_drone_time[14] DISCRETE */)  = (data->modelData->realVarsData[1287]/* m.no_drone_time[14] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1286]/* m.no_drone_time[13] DISCRETE */)  = (data->modelData->realVarsData[1286]/* m.no_drone_time[13] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1285]/* m.no_drone_time[12] DISCRETE */)  = (data->modelData->realVarsData[1285]/* m.no_drone_time[12] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1284]/* m.no_drone_time[11] DISCRETE */)  = (data->modelData->realVarsData[1284]/* m.no_drone_time[11] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1283]/* m.no_drone_time[10] DISCRETE */)  = (data->modelData->realVarsData[1283]/* m.no_drone_time[10] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1282]/* m.no_drone_time[9] DISCRETE */)  = (data->modelData->realVarsData[1282]/* m.no_drone_time[9] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1281]/* m.no_drone_time[8] DISCRETE */)  = (data->modelData->realVarsData[1281]/* m.no_drone_time[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1280]/* m.no_drone_time[7] DISCRETE */)  = (data->modelData->realVarsData[1280]/* m.no_drone_time[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1279]/* m.no_drone_time[6] DISCRETE */)  = (data->modelData->realVarsData[1279]/* m.no_drone_time[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1278]/* m.no_drone_time[5] DISCRETE */)  = (data->modelData->realVarsData[1278]/* m.no_drone_time[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1277]/* m.no_drone_time[4] DISCRETE */)  = (data->modelData->realVarsData[1277]/* m.no_drone_time[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1276]/* m.no_drone_time[3] DISCRETE */)  = (data->modelData->realVarsData[1276]/* m.no_drone_time[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1275]/* m.no_drone_time[2] DISCRETE */)  = (data->modelData->realVarsData[1275]/* m.no_drone_time[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1274]/* m.no_drone_time[1] DISCRETE */)  = (data->modelData->realVarsData[1274]/* m.no_drone_time[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1307]/* m.p_drones_all_areas DISCRETE */)  = (data->modelData->realVarsData[1307]/* m.p_drones_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1306]/* m.p_drones[16] DISCRETE */)  = (data->modelData->realVarsData[1306]/* m.p_drones[16] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1305]/* m.p_drones[15] DISCRETE */)  = (data->modelData->realVarsData[1305]/* m.p_drones[15] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1304]/* m.p_drones[14] DISCRETE */)  = (data->modelData->realVarsData[1304]/* m.p_drones[14] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1303]/* m.p_drones[13] DISCRETE */)  = (data->modelData->realVarsData[1303]/* m.p_drones[13] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1302]/* m.p_drones[12] DISCRETE */)  = (data->modelData->realVarsData[1302]/* m.p_drones[12] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1301]/* m.p_drones[11] DISCRETE */)  = (data->modelData->realVarsData[1301]/* m.p_drones[11] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1300]/* m.p_drones[10] DISCRETE */)  = (data->modelData->realVarsData[1300]/* m.p_drones[10] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1299]/* m.p_drones[9] DISCRETE */)  = (data->modelData->realVarsData[1299]/* m.p_drones[9] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1298]/* m.p_drones[8] DISCRETE */)  = (data->modelData->realVarsData[1298]/* m.p_drones[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1297]/* m.p_drones[7] DISCRETE */)  = (data->modelData->realVarsData[1297]/* m.p_drones[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1296]/* m.p_drones[6] DISCRETE */)  = (data->modelData->realVarsData[1296]/* m.p_drones[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1295]/* m.p_drones[5] DISCRETE */)  = (data->modelData->realVarsData[1295]/* m.p_drones[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1294]/* m.p_drones[4] DISCRETE */)  = (data->modelData->realVarsData[1294]/* m.p_drones[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1293]/* m.p_drones[3] DISCRETE */)  = (data->modelData->realVarsData[1293]/* m.p_drones[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1292]/* m.p_drones[2] DISCRETE */)  = (data->modelData->realVarsData[1292]/* m.p_drones[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1291]/* m.p_drones[1] DISCRETE */)  = (data->modelData->realVarsData[1291]/* m.p_drones[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[114]/* m.beenVisited[16] DISCRETE */)  = (data->modelData->integerVarsData[114]/* m.beenVisited[16] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[113]/* m.beenVisited[15] DISCRETE */)  = (data->modelData->integerVarsData[113]/* m.beenVisited[15] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[112]/* m.beenVisited[14] DISCRETE */)  = (data->modelData->integerVarsData[112]/* m.beenVisited[14] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[111]/* m.beenVisited[13] DISCRETE */)  = (data->modelData->integerVarsData[111]/* m.beenVisited[13] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[110]/* m.beenVisited[12] DISCRETE */)  = (data->modelData->integerVarsData[110]/* m.beenVisited[12] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[109]/* m.beenVisited[11] DISCRETE */)  = (data->modelData->integerVarsData[109]/* m.beenVisited[11] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[108]/* m.beenVisited[10] DISCRETE */)  = (data->modelData->integerVarsData[108]/* m.beenVisited[10] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[107]/* m.beenVisited[9] DISCRETE */)  = (data->modelData->integerVarsData[107]/* m.beenVisited[9] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[106]/* m.beenVisited[8] DISCRETE */)  = (data->modelData->integerVarsData[106]/* m.beenVisited[8] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[105]/* m.beenVisited[7] DISCRETE */)  = (data->modelData->integerVarsData[105]/* m.beenVisited[7] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[104]/* m.beenVisited[6] DISCRETE */)  = (data->modelData->integerVarsData[104]/* m.beenVisited[6] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[103]/* m.beenVisited[5] DISCRETE */)  = (data->modelData->integerVarsData[103]/* m.beenVisited[5] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[102]/* m.beenVisited[4] DISCRETE */)  = (data->modelData->integerVarsData[102]/* m.beenVisited[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[101]/* m.beenVisited[3] DISCRETE */)  = (data->modelData->integerVarsData[101]/* m.beenVisited[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[100]/* m.beenVisited[2] DISCRETE */)  = (data->modelData->integerVarsData[100]/* m.beenVisited[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[99]/* m.beenVisited[1] DISCRETE */)  = (data->modelData->integerVarsData[99]/* m.beenVisited[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1255]/* m.avg_drones_all_areas DISCRETE */)  = (data->modelData->realVarsData[1255]/* m.avg_drones_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1254]/* m.avg_drones[16] DISCRETE */)  = (data->modelData->realVarsData[1254]/* m.avg_drones[16] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1253]/* m.avg_drones[15] DISCRETE */)  = (data->modelData->realVarsData[1253]/* m.avg_drones[15] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1252]/* m.avg_drones[14] DISCRETE */)  = (data->modelData->realVarsData[1252]/* m.avg_drones[14] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1251]/* m.avg_drones[13] DISCRETE */)  = (data->modelData->realVarsData[1251]/* m.avg_drones[13] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1250]/* m.avg_drones[12] DISCRETE */)  = (data->modelData->realVarsData[1250]/* m.avg_drones[12] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1249]/* m.avg_drones[11] DISCRETE */)  = (data->modelData->realVarsData[1249]/* m.avg_drones[11] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1248]/* m.avg_drones[10] DISCRETE */)  = (data->modelData->realVarsData[1248]/* m.avg_drones[10] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1247]/* m.avg_drones[9] DISCRETE */)  = (data->modelData->realVarsData[1247]/* m.avg_drones[9] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1246]/* m.avg_drones[8] DISCRETE */)  = (data->modelData->realVarsData[1246]/* m.avg_drones[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1245]/* m.avg_drones[7] DISCRETE */)  = (data->modelData->realVarsData[1245]/* m.avg_drones[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1244]/* m.avg_drones[6] DISCRETE */)  = (data->modelData->realVarsData[1244]/* m.avg_drones[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1243]/* m.avg_drones[5] DISCRETE */)  = (data->modelData->realVarsData[1243]/* m.avg_drones[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1242]/* m.avg_drones[4] DISCRETE */)  = (data->modelData->realVarsData[1242]/* m.avg_drones[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1241]/* m.avg_drones[3] DISCRETE */)  = (data->modelData->realVarsData[1241]/* m.avg_drones[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1240]/* m.avg_drones[2] DISCRETE */)  = (data->modelData->realVarsData[1240]/* m.avg_drones[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1239]/* m.avg_drones[1] DISCRETE */)  = (data->modelData->realVarsData[1239]/* m.avg_drones[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[130]/* m.current_drones[16] DISCRETE */)  = (data->modelData->integerVarsData[130]/* m.current_drones[16] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[129]/* m.current_drones[15] DISCRETE */)  = (data->modelData->integerVarsData[129]/* m.current_drones[15] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[128]/* m.current_drones[14] DISCRETE */)  = (data->modelData->integerVarsData[128]/* m.current_drones[14] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[127]/* m.current_drones[13] DISCRETE */)  = (data->modelData->integerVarsData[127]/* m.current_drones[13] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[126]/* m.current_drones[12] DISCRETE */)  = (data->modelData->integerVarsData[126]/* m.current_drones[12] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[125]/* m.current_drones[11] DISCRETE */)  = (data->modelData->integerVarsData[125]/* m.current_drones[11] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[124]/* m.current_drones[10] DISCRETE */)  = (data->modelData->integerVarsData[124]/* m.current_drones[10] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[123]/* m.current_drones[9] DISCRETE */)  = (data->modelData->integerVarsData[123]/* m.current_drones[9] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[122]/* m.current_drones[8] DISCRETE */)  = (data->modelData->integerVarsData[122]/* m.current_drones[8] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[121]/* m.current_drones[7] DISCRETE */)  = (data->modelData->integerVarsData[121]/* m.current_drones[7] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[120]/* m.current_drones[6] DISCRETE */)  = (data->modelData->integerVarsData[120]/* m.current_drones[6] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[119]/* m.current_drones[5] DISCRETE */)  = (data->modelData->integerVarsData[119]/* m.current_drones[5] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[118]/* m.current_drones[4] DISCRETE */)  = (data->modelData->integerVarsData[118]/* m.current_drones[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[117]/* m.current_drones[3] DISCRETE */)  = (data->modelData->integerVarsData[117]/* m.current_drones[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[116]/* m.current_drones[2] DISCRETE */)  = (data->modelData->integerVarsData[116]/* m.current_drones[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[115]/* m.current_drones[1] DISCRETE */)  = (data->modelData->integerVarsData[115]/* m.current_drones[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[131]/* m.samples DISCRETE */)  = (data->modelData->integerVarsData[131]/* m.samples DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[132]/* m.z DISCRETE */)  = (data->modelData->integerVarsData[132]/* m.z DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[38]/* $whenCondition44 DISCRETE */)  = (data->modelData->booleanVarsData[38]/* $whenCondition44 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[37]/* $whenCondition43 DISCRETE */)  = (data->modelData->booleanVarsData[37]/* $whenCondition43 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[37]/* $whenCondition43 DISCRETE */)  = 0;

  tmp60 = Greater(data->localData[0]->timeValue,(data->simulationInfo->realParameter[4900]/* m.p.stop_simulation PARAM */) );
  (data->localData[0]->booleanVars[38]/* $whenCondition44 DISCRETE */)  = (tmp60 || (data->localData[0]->booleanVars[94]/* cc.endSimulation DISCRETE */) );

  (data->localData[0]->integerVars[132]/* m.z DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[131]/* m.samples DISCRETE */)  = ((modelica_integer) 0);

  array_alloc_scalar_integer_array(&tmp61, 16, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp62, ((modelica_integer*)&((&(data->localData[0]->integerVars[115]/* m.current_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  integer_array_copy_data(tmp61, tmp62);

  array_alloc_scalar_real_array(&tmp63, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp64, ((modelica_real*)&((&(data->localData[0]->realVars[1239]/* m.avg_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  real_array_copy_data(tmp63, tmp64);

  (data->localData[0]->realVars[1255]/* m.avg_drones_all_areas DISCRETE */)  = 0.0;

  array_alloc_scalar_integer_array(&tmp65, 16, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp66, ((modelica_integer*)&((&(data->localData[0]->integerVars[99]/* m.beenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  integer_array_copy_data(tmp65, tmp66);

  array_alloc_scalar_real_array(&tmp67, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp68, ((modelica_real*)&((&(data->localData[0]->realVars[1291]/* m.p_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  real_array_copy_data(tmp67, tmp68);

  (data->localData[0]->realVars[1307]/* m.p_drones_all_areas DISCRETE */)  = 0.0;

  array_alloc_scalar_real_array(&tmp69, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp70, ((modelica_real*)&((&(data->localData[0]->realVars[1274]/* m.no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  real_array_copy_data(tmp69, tmp70);

  array_alloc_scalar_real_array(&tmp71, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp72, ((modelica_real*)&((&(data->localData[0]->realVars[1256]/* m.avg_no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  real_array_copy_data(tmp71, tmp72);

  (data->localData[0]->realVars[1272]/* m.avg_no_drone_time_all_areas DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[1273]/* m.max_no_drone_time DISCRETE */)  = 0.0;

  array_alloc_scalar_real_array(&tmp73, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp74, ((modelica_real*)&((&(data->localData[0]->realVars[1308]/* m.std_dev[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
  real_array_copy_data(tmp73, tmp74);

  (data->localData[0]->realVars[1324]/* m.std_dev_all_areas DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[1290]/* m.old_avg_drones_all_areas DISCRETE */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_635(DATA *data, threadData_t *threadData);

extern void System_eqFunction_568(DATA *data, threadData_t *threadData);

extern void System_eqFunction_564(DATA *data, threadData_t *threadData);

extern void System_eqFunction_627(DATA *data, threadData_t *threadData);

extern void System_eqFunction_591(DATA *data, threadData_t *threadData);

extern void System_eqFunction_565(DATA *data, threadData_t *threadData);

extern void System_eqFunction_578(DATA *data, threadData_t *threadData);

extern void System_eqFunction_645(DATA *data, threadData_t *threadData);

extern void System_eqFunction_621(DATA *data, threadData_t *threadData);

extern void System_eqFunction_569(DATA *data, threadData_t *threadData);

extern void System_eqFunction_641(DATA *data, threadData_t *threadData);

extern void System_eqFunction_567(DATA *data, threadData_t *threadData);

extern void System_eqFunction_570(DATA *data, threadData_t *threadData);

extern void System_eqFunction_592(DATA *data, threadData_t *threadData);

extern void System_eqFunction_576(DATA *data, threadData_t *threadData);

extern void System_eqFunction_582(DATA *data, threadData_t *threadData);

extern void System_eqFunction_583(DATA *data, threadData_t *threadData);

extern void System_eqFunction_584(DATA *data, threadData_t *threadData);

extern void System_eqFunction_571(DATA *data, threadData_t *threadData);

extern void System_eqFunction_586(DATA *data, threadData_t *threadData);

extern void System_eqFunction_639(DATA *data, threadData_t *threadData);

extern void System_eqFunction_600(DATA *data, threadData_t *threadData);

extern void System_eqFunction_590(DATA *data, threadData_t *threadData);

extern void System_eqFunction_594(DATA *data, threadData_t *threadData);

extern void System_eqFunction_585(DATA *data, threadData_t *threadData);

extern void System_eqFunction_595(DATA *data, threadData_t *threadData);

extern void System_eqFunction_611(DATA *data, threadData_t *threadData);

extern void System_eqFunction_596(DATA *data, threadData_t *threadData);

extern void System_eqFunction_647(DATA *data, threadData_t *threadData);

extern void System_eqFunction_619(DATA *data, threadData_t *threadData);

extern void System_eqFunction_623(DATA *data, threadData_t *threadData);

extern void System_eqFunction_604(DATA *data, threadData_t *threadData);

extern void System_eqFunction_566(DATA *data, threadData_t *threadData);

extern void System_eqFunction_605(DATA *data, threadData_t *threadData);

extern void System_eqFunction_598(DATA *data, threadData_t *threadData);

extern void System_eqFunction_573(DATA *data, threadData_t *threadData);

extern void System_eqFunction_607(DATA *data, threadData_t *threadData);

extern void System_eqFunction_606(DATA *data, threadData_t *threadData);

extern void System_eqFunction_608(DATA *data, threadData_t *threadData);

extern void System_eqFunction_615(DATA *data, threadData_t *threadData);

extern void System_eqFunction_609(DATA *data, threadData_t *threadData);

extern void System_eqFunction_637(DATA *data, threadData_t *threadData);

extern void System_eqFunction_580(DATA *data, threadData_t *threadData);

extern void System_eqFunction_575(DATA *data, threadData_t *threadData);

extern void System_eqFunction_631(DATA *data, threadData_t *threadData);

extern void System_eqFunction_620(DATA *data, threadData_t *threadData);

extern void System_eqFunction_622(DATA *data, threadData_t *threadData);

extern void System_eqFunction_572(DATA *data, threadData_t *threadData);

extern void System_eqFunction_602(DATA *data, threadData_t *threadData);


/*
equation index: 67
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[7].readsignal = $START.drone_to_cc[7].readsignal
*/
void System_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  (data->simulationInfo->booleanVarsPre[264]/* drone_to_cc[7].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[264]/* drone_to_cc[7].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
drone_to_cc[7].readsigint = not $PRE.drone_to_cc[7].readsignal == drone_to_cc[7].readsignal
*/
void System_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  (data->localData[0]->booleanVars[257]/* drone_to_cc[7].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[264]/* drone_to_cc[7].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[264]/* drone_to_cc[7].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[264]/* drone_to_cc[7].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[264]/* drone_to_cc[7].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[6].readsignal = $START.drone_to_cc[6].readsignal
*/
void System_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  (data->simulationInfo->booleanVarsPre[263]/* drone_to_cc[6].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[263]/* drone_to_cc[6].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
drone_to_cc[6].readsigint = not $PRE.drone_to_cc[6].readsignal == drone_to_cc[6].readsignal
*/
void System_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  (data->localData[0]->booleanVars[256]/* drone_to_cc[6].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[263]/* drone_to_cc[6].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[263]/* drone_to_cc[6].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[263]/* drone_to_cc[6].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[263]/* drone_to_cc[6].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[5].readsignal = $START.drone_to_cc[5].readsignal
*/
void System_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  (data->simulationInfo->booleanVarsPre[262]/* drone_to_cc[5].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[262]/* drone_to_cc[5].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 72
type: SIMPLE_ASSIGN
drone_to_cc[5].readsigint = not $PRE.drone_to_cc[5].readsignal == drone_to_cc[5].readsignal
*/
void System_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  (data->localData[0]->booleanVars[255]/* drone_to_cc[5].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[262]/* drone_to_cc[5].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[262]/* drone_to_cc[5].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[262]/* drone_to_cc[5].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[262]/* drone_to_cc[5].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[4].readsignal = $START.drone_to_cc[4].readsignal
*/
void System_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  (data->simulationInfo->booleanVarsPre[261]/* drone_to_cc[4].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[261]/* drone_to_cc[4].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
drone_to_cc[4].readsigint = not $PRE.drone_to_cc[4].readsignal == drone_to_cc[4].readsignal
*/
void System_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  (data->localData[0]->booleanVars[254]/* drone_to_cc[4].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[261]/* drone_to_cc[4].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[261]/* drone_to_cc[4].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[261]/* drone_to_cc[4].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[261]/* drone_to_cc[4].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[3].readsignal = $START.drone_to_cc[3].readsignal
*/
void System_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  (data->simulationInfo->booleanVarsPre[260]/* drone_to_cc[3].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[260]/* drone_to_cc[3].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
drone_to_cc[3].readsigint = not $PRE.drone_to_cc[3].readsignal == drone_to_cc[3].readsignal
*/
void System_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  (data->localData[0]->booleanVars[253]/* drone_to_cc[3].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[260]/* drone_to_cc[3].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[260]/* drone_to_cc[3].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[260]/* drone_to_cc[3].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[260]/* drone_to_cc[3].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[2].readsignal = $START.drone_to_cc[2].readsignal
*/
void System_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  (data->simulationInfo->booleanVarsPre[259]/* drone_to_cc[2].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[259]/* drone_to_cc[2].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
drone_to_cc[2].readsigint = not $PRE.drone_to_cc[2].readsignal == drone_to_cc[2].readsignal
*/
void System_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  (data->localData[0]->booleanVars[252]/* drone_to_cc[2].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[259]/* drone_to_cc[2].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[259]/* drone_to_cc[2].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[259]/* drone_to_cc[2].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[259]/* drone_to_cc[2].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].readsignal = $START.drone_to_cc[1].readsignal
*/
void System_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  (data->simulationInfo->booleanVarsPre[258]/* drone_to_cc[1].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[258]/* drone_to_cc[1].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 80
type: SIMPLE_ASSIGN
drone_to_cc[1].readsigint = not $PRE.drone_to_cc[1].readsignal == drone_to_cc[1].readsignal
*/
void System_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  (data->localData[0]->booleanVars[251]/* drone_to_cc[1].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[258]/* drone_to_cc[1].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[258]/* drone_to_cc[1].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[258]/* drone_to_cc[1].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[258]/* drone_to_cc[1].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 81
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[7].writesignal = $START.cc_to_drone[7].writesignal
*/
void System_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  (data->simulationInfo->booleanVarsPre[201]/* cc_to_drone[7].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[201]/* cc_to_drone[7].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 82
type: SIMPLE_ASSIGN
cc_to_drone[7].writesigint = not $PRE.cc_to_drone[7].writesignal == cc_to_drone[7].writesignal
*/
void System_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  (data->localData[0]->booleanVars[194]/* cc_to_drone[7].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[201]/* cc_to_drone[7].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[201]/* cc_to_drone[7].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[201]/* cc_to_drone[7].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[201]/* cc_to_drone[7].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 83
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[6].writesignal = $START.cc_to_drone[6].writesignal
*/
void System_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  (data->simulationInfo->booleanVarsPre[200]/* cc_to_drone[6].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[200]/* cc_to_drone[6].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
cc_to_drone[6].writesigint = not $PRE.cc_to_drone[6].writesignal == cc_to_drone[6].writesignal
*/
void System_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  (data->localData[0]->booleanVars[193]/* cc_to_drone[6].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[200]/* cc_to_drone[6].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[200]/* cc_to_drone[6].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[200]/* cc_to_drone[6].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[200]/* cc_to_drone[6].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[5].writesignal = $START.cc_to_drone[5].writesignal
*/
void System_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  (data->simulationInfo->booleanVarsPre[199]/* cc_to_drone[5].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[199]/* cc_to_drone[5].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
cc_to_drone[5].writesigint = not $PRE.cc_to_drone[5].writesignal == cc_to_drone[5].writesignal
*/
void System_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  (data->localData[0]->booleanVars[192]/* cc_to_drone[5].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[199]/* cc_to_drone[5].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[199]/* cc_to_drone[5].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[199]/* cc_to_drone[5].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[199]/* cc_to_drone[5].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[4].writesignal = $START.cc_to_drone[4].writesignal
*/
void System_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  (data->simulationInfo->booleanVarsPre[198]/* cc_to_drone[4].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[198]/* cc_to_drone[4].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 88
type: SIMPLE_ASSIGN
cc_to_drone[4].writesigint = not $PRE.cc_to_drone[4].writesignal == cc_to_drone[4].writesignal
*/
void System_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  (data->localData[0]->booleanVars[191]/* cc_to_drone[4].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[198]/* cc_to_drone[4].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[198]/* cc_to_drone[4].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[198]/* cc_to_drone[4].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[198]/* cc_to_drone[4].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[3].writesignal = $START.cc_to_drone[3].writesignal
*/
void System_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  (data->simulationInfo->booleanVarsPre[197]/* cc_to_drone[3].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[197]/* cc_to_drone[3].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
cc_to_drone[3].writesigint = not $PRE.cc_to_drone[3].writesignal == cc_to_drone[3].writesignal
*/
void System_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  (data->localData[0]->booleanVars[190]/* cc_to_drone[3].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[197]/* cc_to_drone[3].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[197]/* cc_to_drone[3].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[197]/* cc_to_drone[3].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[197]/* cc_to_drone[3].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[2].writesignal = $START.cc_to_drone[2].writesignal
*/
void System_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  (data->simulationInfo->booleanVarsPre[196]/* cc_to_drone[2].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[196]/* cc_to_drone[2].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 92
type: SIMPLE_ASSIGN
cc_to_drone[2].writesigint = not $PRE.cc_to_drone[2].writesignal == cc_to_drone[2].writesignal
*/
void System_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  (data->localData[0]->booleanVars[189]/* cc_to_drone[2].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[196]/* cc_to_drone[2].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[196]/* cc_to_drone[2].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[196]/* cc_to_drone[2].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[196]/* cc_to_drone[2].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].writesignal = $START.cc_to_drone[1].writesignal
*/
void System_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  (data->simulationInfo->booleanVarsPre[195]/* cc_to_drone[1].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[195]/* cc_to_drone[1].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
cc_to_drone[1].writesigint = not $PRE.cc_to_drone[1].writesignal == cc_to_drone[1].writesignal
*/
void System_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  (data->localData[0]->booleanVars[188]/* cc_to_drone[1].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[195]/* cc_to_drone[1].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[195]/* cc_to_drone[1].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[195]/* cc_to_drone[1].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[195]/* cc_to_drone[1].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 95
type: ALGORITHM

  d[6].comm_state := $START.d[6].comm_state;
  d[6].fifox := $START.d[6].fifox;
  d[6].writesignal := $START.d[6].writesignal;
  d[6].readsignal := $START.d[6].readsignal;
  d[6].flag := $START.d[6].flag;
  d[6].setz := $START.d[6].setz;
  d[6].sety := $START.d[6].sety;
  d[6].setx := $START.d[6].setx;
  d[6].msg_to_cc[5] := $START.d[6].msg_to_cc[5];
  d[6].msg_to_cc[4] := $START.d[6].msg_to_cc[4];
  d[6].msg_to_cc[3] := $START.d[6].msg_to_cc[3];
  d[6].msg_to_cc[2] := $START.d[6].msg_to_cc[2];
  d[6].msg_to_cc[1] := $START.d[6].msg_to_cc[1];
  $whenCondition51 := $START.$whenCondition51;
  $whenCondition51 := false;
  d[6].msg_to_cc := {0.0, 0.0, 0.0, 0.0, 0.0};
  d[6].setx := myrandom() * d[6].p.flyZone[1];
  d[6].sety := myrandom() * d[6].p.flyZone[2];
  d[6].setz := myrandom() * d[6].p.flyZone[3];
  d[6].flag := 0;
  d[6].readsignal := false;
  d[6].writesignal := false;
  d[6].fifox := 0;
  d[6].comm_state := 10;
*/
void System_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  real_array tmp89;
  real_array tmp90;
  (data->localData[0]->integerVars[55]/* d[6].comm_state DISCRETE */)  = (data->modelData->integerVarsData[55]/* d[6].comm_state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[69]/* d[6].fifox DISCRETE */)  = (data->modelData->integerVarsData[69]/* d[6].fifox DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[242]/* d[6].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[242]/* d[6].writesignal DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[228]/* d[6].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[228]/* d[6].readsignal DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[76]/* d[6].flag DISCRETE */)  = (data->modelData->integerVarsData[76]/* d[6].flag DISCRETE */).attribute .start;

  (data->localData[0]->realVars[852]/* d[6].setz DISCRETE */)  = (data->modelData->realVarsData[852]/* d[6].setz DISCRETE */).attribute .start;

  (data->localData[0]->realVars[845]/* d[6].sety DISCRETE */)  = (data->modelData->realVarsData[845]/* d[6].sety DISCRETE */).attribute .start;

  (data->localData[0]->realVars[838]/* d[6].setx DISCRETE */)  = (data->modelData->realVarsData[838]/* d[6].setx DISCRETE */).attribute .start;

  (data->localData[0]->realVars[827]/* d[6].msg_to_cc[5] DISCRETE */)  = (data->modelData->realVarsData[827]/* d[6].msg_to_cc[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[826]/* d[6].msg_to_cc[4] DISCRETE */)  = (data->modelData->realVarsData[826]/* d[6].msg_to_cc[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[825]/* d[6].msg_to_cc[3] DISCRETE */)  = (data->modelData->realVarsData[825]/* d[6].msg_to_cc[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[824]/* d[6].msg_to_cc[2] DISCRETE */)  = (data->modelData->realVarsData[824]/* d[6].msg_to_cc[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[823]/* d[6].msg_to_cc[1] DISCRETE */)  = (data->modelData->realVarsData[823]/* d[6].msg_to_cc[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[46]/* $whenCondition51 DISCRETE */)  = (data->modelData->booleanVarsData[46]/* $whenCondition51 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[46]/* $whenCondition51 DISCRETE */)  = 0;

  array_alloc_scalar_real_array(&tmp89, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp90, ((modelica_real*)&((&(data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 6) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
  real_array_copy_data(tmp89, tmp90);

  (data->localData[0]->realVars[838]/* d[6].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3744]/* d[6].p.flyZone[1] PARAM */) );

  (data->localData[0]->realVars[845]/* d[6].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3745]/* d[6].p.flyZone[2] PARAM */) );

  (data->localData[0]->realVars[852]/* d[6].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3746]/* d[6].p.flyZone[3] PARAM */) );

  (data->localData[0]->integerVars[76]/* d[6].flag DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->booleanVars[228]/* d[6].readsignal DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[242]/* d[6].writesignal DISCRETE */)  = 0;

  (data->localData[0]->integerVars[69]/* d[6].fifox DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[55]/* d[6].comm_state DISCRETE */)  = ((modelica_integer) 10);
  TRACE_POP
}
extern void System_eqFunction_681(DATA *data, threadData_t *threadData);

extern void System_eqFunction_688(DATA *data, threadData_t *threadData);

extern void System_eqFunction_677(DATA *data, threadData_t *threadData);

extern void System_eqFunction_678(DATA *data, threadData_t *threadData);

extern void System_eqFunction_679(DATA *data, threadData_t *threadData);

extern void System_eqFunction_685(DATA *data, threadData_t *threadData);

extern void System_eqFunction_683(DATA *data, threadData_t *threadData);

extern void System_eqFunction_687(DATA *data, threadData_t *threadData);

extern void System_eqFunction_680(DATA *data, threadData_t *threadData);

extern void System_eqFunction_682(DATA *data, threadData_t *threadData);


/*
equation index: 106
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[6].writesignal = $START.drone_to_cc[6].writesignal
*/
void System_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  (data->simulationInfo->booleanVarsPre[284]/* drone_to_cc[6].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[284]/* drone_to_cc[6].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 107
type: SIMPLE_ASSIGN
drone_to_cc[6].writesigint = not $PRE.drone_to_cc[6].writesignal == drone_to_cc[6].writesignal
*/
void System_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  (data->localData[0]->booleanVars[277]/* drone_to_cc[6].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[284]/* drone_to_cc[6].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[284]/* drone_to_cc[6].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[284]/* drone_to_cc[6].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[284]/* drone_to_cc[6].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 108
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[6].readsignal = $START.cc_to_drone[6].readsignal
*/
void System_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  (data->simulationInfo->booleanVarsPre[179]/* cc_to_drone[6].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[179]/* cc_to_drone[6].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 109
type: SIMPLE_ASSIGN
cc_to_drone[6].readsigint = not $PRE.cc_to_drone[6].readsignal == cc_to_drone[6].readsignal
*/
void System_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  (data->localData[0]->booleanVars[172]/* cc_to_drone[6].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[179]/* cc_to_drone[6].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[179]/* cc_to_drone[6].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[179]/* cc_to_drone[6].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[179]/* cc_to_drone[6].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 110
type: ALGORITHM

  d[5].comm_state := $START.d[5].comm_state;
  d[5].fifox := $START.d[5].fifox;
  d[5].writesignal := $START.d[5].writesignal;
  d[5].readsignal := $START.d[5].readsignal;
  d[5].flag := $START.d[5].flag;
  d[5].setz := $START.d[5].setz;
  d[5].sety := $START.d[5].sety;
  d[5].setx := $START.d[5].setx;
  d[5].msg_to_cc[5] := $START.d[5].msg_to_cc[5];
  d[5].msg_to_cc[4] := $START.d[5].msg_to_cc[4];
  d[5].msg_to_cc[3] := $START.d[5].msg_to_cc[3];
  d[5].msg_to_cc[2] := $START.d[5].msg_to_cc[2];
  d[5].msg_to_cc[1] := $START.d[5].msg_to_cc[1];
  $whenCondition56 := $START.$whenCondition56;
  $whenCondition56 := false;
  d[5].msg_to_cc := {0.0, 0.0, 0.0, 0.0, 0.0};
  d[5].setx := myrandom() * d[5].p.flyZone[1];
  d[5].sety := myrandom() * d[5].p.flyZone[2];
  d[5].setz := myrandom() * d[5].p.flyZone[3];
  d[5].flag := 0;
  d[5].readsignal := false;
  d[5].writesignal := false;
  d[5].fifox := 0;
  d[5].comm_state := 10;
*/
void System_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  real_array tmp93;
  real_array tmp94;
  (data->localData[0]->integerVars[54]/* d[5].comm_state DISCRETE */)  = (data->modelData->integerVarsData[54]/* d[5].comm_state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[68]/* d[5].fifox DISCRETE */)  = (data->modelData->integerVarsData[68]/* d[5].fifox DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[241]/* d[5].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[241]/* d[5].writesignal DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[227]/* d[5].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[227]/* d[5].readsignal DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[75]/* d[5].flag DISCRETE */)  = (data->modelData->integerVarsData[75]/* d[5].flag DISCRETE */).attribute .start;

  (data->localData[0]->realVars[851]/* d[5].setz DISCRETE */)  = (data->modelData->realVarsData[851]/* d[5].setz DISCRETE */).attribute .start;

  (data->localData[0]->realVars[844]/* d[5].sety DISCRETE */)  = (data->modelData->realVarsData[844]/* d[5].sety DISCRETE */).attribute .start;

  (data->localData[0]->realVars[837]/* d[5].setx DISCRETE */)  = (data->modelData->realVarsData[837]/* d[5].setx DISCRETE */).attribute .start;

  (data->localData[0]->realVars[822]/* d[5].msg_to_cc[5] DISCRETE */)  = (data->modelData->realVarsData[822]/* d[5].msg_to_cc[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[821]/* d[5].msg_to_cc[4] DISCRETE */)  = (data->modelData->realVarsData[821]/* d[5].msg_to_cc[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[820]/* d[5].msg_to_cc[3] DISCRETE */)  = (data->modelData->realVarsData[820]/* d[5].msg_to_cc[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[819]/* d[5].msg_to_cc[2] DISCRETE */)  = (data->modelData->realVarsData[819]/* d[5].msg_to_cc[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[818]/* d[5].msg_to_cc[1] DISCRETE */)  = (data->modelData->realVarsData[818]/* d[5].msg_to_cc[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[51]/* $whenCondition56 DISCRETE */)  = (data->modelData->booleanVarsData[51]/* $whenCondition56 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[51]/* $whenCondition56 DISCRETE */)  = 0;

  array_alloc_scalar_real_array(&tmp93, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp94, ((modelica_real*)&((&(data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 5) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
  real_array_copy_data(tmp93, tmp94);

  (data->localData[0]->realVars[837]/* d[5].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3741]/* d[5].p.flyZone[1] PARAM */) );

  (data->localData[0]->realVars[844]/* d[5].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3742]/* d[5].p.flyZone[2] PARAM */) );

  (data->localData[0]->realVars[851]/* d[5].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3743]/* d[5].p.flyZone[3] PARAM */) );

  (data->localData[0]->integerVars[75]/* d[5].flag DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->booleanVars[227]/* d[5].readsignal DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[241]/* d[5].writesignal DISCRETE */)  = 0;

  (data->localData[0]->integerVars[68]/* d[5].fifox DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[54]/* d[5].comm_state DISCRETE */)  = ((modelica_integer) 10);
  TRACE_POP
}
extern void System_eqFunction_710(DATA *data, threadData_t *threadData);

extern void System_eqFunction_711(DATA *data, threadData_t *threadData);

extern void System_eqFunction_707(DATA *data, threadData_t *threadData);

extern void System_eqFunction_702(DATA *data, threadData_t *threadData);

extern void System_eqFunction_703(DATA *data, threadData_t *threadData);

extern void System_eqFunction_708(DATA *data, threadData_t *threadData);

extern void System_eqFunction_720(DATA *data, threadData_t *threadData);

extern void System_eqFunction_705(DATA *data, threadData_t *threadData);

extern void System_eqFunction_706(DATA *data, threadData_t *threadData);

extern void System_eqFunction_704(DATA *data, threadData_t *threadData);


/*
equation index: 121
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[5].writesignal = $START.drone_to_cc[5].writesignal
*/
void System_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  (data->simulationInfo->booleanVarsPre[283]/* drone_to_cc[5].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[283]/* drone_to_cc[5].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
drone_to_cc[5].writesigint = not $PRE.drone_to_cc[5].writesignal == drone_to_cc[5].writesignal
*/
void System_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  (data->localData[0]->booleanVars[276]/* drone_to_cc[5].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[283]/* drone_to_cc[5].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[283]/* drone_to_cc[5].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[283]/* drone_to_cc[5].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[283]/* drone_to_cc[5].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[5].readsignal = $START.cc_to_drone[5].readsignal
*/
void System_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  (data->simulationInfo->booleanVarsPre[178]/* cc_to_drone[5].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[178]/* cc_to_drone[5].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
cc_to_drone[5].readsigint = not $PRE.cc_to_drone[5].readsignal == cc_to_drone[5].readsignal
*/
void System_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  (data->localData[0]->booleanVars[171]/* cc_to_drone[5].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[178]/* cc_to_drone[5].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[178]/* cc_to_drone[5].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[178]/* cc_to_drone[5].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[178]/* cc_to_drone[5].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 125
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
  $whenCondition61 := $START.$whenCondition61;
  $whenCondition61 := false;
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
void System_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  real_array tmp97;
  real_array tmp98;
  (data->localData[0]->integerVars[53]/* d[4].comm_state DISCRETE */)  = (data->modelData->integerVarsData[53]/* d[4].comm_state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[67]/* d[4].fifox DISCRETE */)  = (data->modelData->integerVarsData[67]/* d[4].fifox DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[240]/* d[4].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[240]/* d[4].writesignal DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[226]/* d[4].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[226]/* d[4].readsignal DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[74]/* d[4].flag DISCRETE */)  = (data->modelData->integerVarsData[74]/* d[4].flag DISCRETE */).attribute .start;

  (data->localData[0]->realVars[850]/* d[4].setz DISCRETE */)  = (data->modelData->realVarsData[850]/* d[4].setz DISCRETE */).attribute .start;

  (data->localData[0]->realVars[843]/* d[4].sety DISCRETE */)  = (data->modelData->realVarsData[843]/* d[4].sety DISCRETE */).attribute .start;

  (data->localData[0]->realVars[836]/* d[4].setx DISCRETE */)  = (data->modelData->realVarsData[836]/* d[4].setx DISCRETE */).attribute .start;

  (data->localData[0]->realVars[817]/* d[4].msg_to_cc[5] DISCRETE */)  = (data->modelData->realVarsData[817]/* d[4].msg_to_cc[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[816]/* d[4].msg_to_cc[4] DISCRETE */)  = (data->modelData->realVarsData[816]/* d[4].msg_to_cc[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[815]/* d[4].msg_to_cc[3] DISCRETE */)  = (data->modelData->realVarsData[815]/* d[4].msg_to_cc[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[814]/* d[4].msg_to_cc[2] DISCRETE */)  = (data->modelData->realVarsData[814]/* d[4].msg_to_cc[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[813]/* d[4].msg_to_cc[1] DISCRETE */)  = (data->modelData->realVarsData[813]/* d[4].msg_to_cc[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[57]/* $whenCondition61 DISCRETE */)  = (data->modelData->booleanVarsData[57]/* $whenCondition61 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[57]/* $whenCondition61 DISCRETE */)  = 0;

  array_alloc_scalar_real_array(&tmp97, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp98, ((modelica_real*)&((&(data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
  real_array_copy_data(tmp97, tmp98);

  (data->localData[0]->realVars[836]/* d[4].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3738]/* d[4].p.flyZone[1] PARAM */) );

  (data->localData[0]->realVars[843]/* d[4].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3739]/* d[4].p.flyZone[2] PARAM */) );

  (data->localData[0]->realVars[850]/* d[4].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3740]/* d[4].p.flyZone[3] PARAM */) );

  (data->localData[0]->integerVars[74]/* d[4].flag DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->booleanVars[226]/* d[4].readsignal DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[240]/* d[4].writesignal DISCRETE */)  = 0;

  (data->localData[0]->integerVars[67]/* d[4].fifox DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[53]/* d[4].comm_state DISCRETE */)  = ((modelica_integer) 10);
  TRACE_POP
}
extern void System_eqFunction_730(DATA *data, threadData_t *threadData);

extern void System_eqFunction_733(DATA *data, threadData_t *threadData);

extern void System_eqFunction_735(DATA *data, threadData_t *threadData);

extern void System_eqFunction_729(DATA *data, threadData_t *threadData);

extern void System_eqFunction_734(DATA *data, threadData_t *threadData);

extern void System_eqFunction_727(DATA *data, threadData_t *threadData);

extern void System_eqFunction_731(DATA *data, threadData_t *threadData);

extern void System_eqFunction_746(DATA *data, threadData_t *threadData);

extern void System_eqFunction_744(DATA *data, threadData_t *threadData);

extern void System_eqFunction_745(DATA *data, threadData_t *threadData);


/*
equation index: 136
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[4].writesignal = $START.drone_to_cc[4].writesignal
*/
void System_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  (data->simulationInfo->booleanVarsPre[282]/* drone_to_cc[4].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[282]/* drone_to_cc[4].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
drone_to_cc[4].writesigint = not $PRE.drone_to_cc[4].writesignal == drone_to_cc[4].writesignal
*/
void System_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  (data->localData[0]->booleanVars[275]/* drone_to_cc[4].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[282]/* drone_to_cc[4].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[282]/* drone_to_cc[4].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[282]/* drone_to_cc[4].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[282]/* drone_to_cc[4].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[4].readsignal = $START.cc_to_drone[4].readsignal
*/
void System_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  (data->simulationInfo->booleanVarsPre[177]/* cc_to_drone[4].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[177]/* cc_to_drone[4].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
cc_to_drone[4].readsigint = not $PRE.cc_to_drone[4].readsignal == cc_to_drone[4].readsignal
*/
void System_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  (data->localData[0]->booleanVars[170]/* cc_to_drone[4].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[177]/* cc_to_drone[4].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[177]/* cc_to_drone[4].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[177]/* cc_to_drone[4].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[177]/* cc_to_drone[4].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 140
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
  $whenCondition66 := $START.$whenCondition66;
  $whenCondition66 := false;
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
void System_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  real_array tmp101;
  real_array tmp102;
  (data->localData[0]->integerVars[52]/* d[3].comm_state DISCRETE */)  = (data->modelData->integerVarsData[52]/* d[3].comm_state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[66]/* d[3].fifox DISCRETE */)  = (data->modelData->integerVarsData[66]/* d[3].fifox DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[239]/* d[3].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[239]/* d[3].writesignal DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[225]/* d[3].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[225]/* d[3].readsignal DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[73]/* d[3].flag DISCRETE */)  = (data->modelData->integerVarsData[73]/* d[3].flag DISCRETE */).attribute .start;

  (data->localData[0]->realVars[849]/* d[3].setz DISCRETE */)  = (data->modelData->realVarsData[849]/* d[3].setz DISCRETE */).attribute .start;

  (data->localData[0]->realVars[842]/* d[3].sety DISCRETE */)  = (data->modelData->realVarsData[842]/* d[3].sety DISCRETE */).attribute .start;

  (data->localData[0]->realVars[835]/* d[3].setx DISCRETE */)  = (data->modelData->realVarsData[835]/* d[3].setx DISCRETE */).attribute .start;

  (data->localData[0]->realVars[812]/* d[3].msg_to_cc[5] DISCRETE */)  = (data->modelData->realVarsData[812]/* d[3].msg_to_cc[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[811]/* d[3].msg_to_cc[4] DISCRETE */)  = (data->modelData->realVarsData[811]/* d[3].msg_to_cc[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[810]/* d[3].msg_to_cc[3] DISCRETE */)  = (data->modelData->realVarsData[810]/* d[3].msg_to_cc[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[809]/* d[3].msg_to_cc[2] DISCRETE */)  = (data->modelData->realVarsData[809]/* d[3].msg_to_cc[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[808]/* d[3].msg_to_cc[1] DISCRETE */)  = (data->modelData->realVarsData[808]/* d[3].msg_to_cc[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[62]/* $whenCondition66 DISCRETE */)  = (data->modelData->booleanVarsData[62]/* $whenCondition66 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[62]/* $whenCondition66 DISCRETE */)  = 0;

  array_alloc_scalar_real_array(&tmp101, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp102, ((modelica_real*)&((&(data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
  real_array_copy_data(tmp101, tmp102);

  (data->localData[0]->realVars[835]/* d[3].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3735]/* d[3].p.flyZone[1] PARAM */) );

  (data->localData[0]->realVars[842]/* d[3].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3736]/* d[3].p.flyZone[2] PARAM */) );

  (data->localData[0]->realVars[849]/* d[3].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3737]/* d[3].p.flyZone[3] PARAM */) );

  (data->localData[0]->integerVars[73]/* d[3].flag DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->booleanVars[225]/* d[3].readsignal DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[239]/* d[3].writesignal DISCRETE */)  = 0;

  (data->localData[0]->integerVars[66]/* d[3].fifox DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[52]/* d[3].comm_state DISCRETE */)  = ((modelica_integer) 10);
  TRACE_POP
}
extern void System_eqFunction_753(DATA *data, threadData_t *threadData);

extern void System_eqFunction_764(DATA *data, threadData_t *threadData);

extern void System_eqFunction_760(DATA *data, threadData_t *threadData);

extern void System_eqFunction_759(DATA *data, threadData_t *threadData);

extern void System_eqFunction_763(DATA *data, threadData_t *threadData);

extern void System_eqFunction_761(DATA *data, threadData_t *threadData);

extern void System_eqFunction_755(DATA *data, threadData_t *threadData);

extern void System_eqFunction_757(DATA *data, threadData_t *threadData);

extern void System_eqFunction_754(DATA *data, threadData_t *threadData);

extern void System_eqFunction_758(DATA *data, threadData_t *threadData);


/*
equation index: 151
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[3].writesignal = $START.drone_to_cc[3].writesignal
*/
void System_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  (data->simulationInfo->booleanVarsPre[281]/* drone_to_cc[3].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[281]/* drone_to_cc[3].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
drone_to_cc[3].writesigint = not $PRE.drone_to_cc[3].writesignal == drone_to_cc[3].writesignal
*/
void System_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  (data->localData[0]->booleanVars[274]/* drone_to_cc[3].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[281]/* drone_to_cc[3].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[281]/* drone_to_cc[3].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[281]/* drone_to_cc[3].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[281]/* drone_to_cc[3].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[3].readsignal = $START.cc_to_drone[3].readsignal
*/
void System_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  (data->simulationInfo->booleanVarsPre[176]/* cc_to_drone[3].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[176]/* cc_to_drone[3].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
cc_to_drone[3].readsigint = not $PRE.cc_to_drone[3].readsignal == cc_to_drone[3].readsignal
*/
void System_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  (data->localData[0]->booleanVars[169]/* cc_to_drone[3].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[176]/* cc_to_drone[3].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[176]/* cc_to_drone[3].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[176]/* cc_to_drone[3].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[176]/* cc_to_drone[3].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 155
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
  $whenCondition71 := $START.$whenCondition71;
  $whenCondition71 := false;
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
void System_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  real_array tmp105;
  real_array tmp106;
  (data->localData[0]->integerVars[51]/* d[2].comm_state DISCRETE */)  = (data->modelData->integerVarsData[51]/* d[2].comm_state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[65]/* d[2].fifox DISCRETE */)  = (data->modelData->integerVarsData[65]/* d[2].fifox DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[238]/* d[2].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[238]/* d[2].writesignal DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[224]/* d[2].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[224]/* d[2].readsignal DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[72]/* d[2].flag DISCRETE */)  = (data->modelData->integerVarsData[72]/* d[2].flag DISCRETE */).attribute .start;

  (data->localData[0]->realVars[848]/* d[2].setz DISCRETE */)  = (data->modelData->realVarsData[848]/* d[2].setz DISCRETE */).attribute .start;

  (data->localData[0]->realVars[841]/* d[2].sety DISCRETE */)  = (data->modelData->realVarsData[841]/* d[2].sety DISCRETE */).attribute .start;

  (data->localData[0]->realVars[834]/* d[2].setx DISCRETE */)  = (data->modelData->realVarsData[834]/* d[2].setx DISCRETE */).attribute .start;

  (data->localData[0]->realVars[807]/* d[2].msg_to_cc[5] DISCRETE */)  = (data->modelData->realVarsData[807]/* d[2].msg_to_cc[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[806]/* d[2].msg_to_cc[4] DISCRETE */)  = (data->modelData->realVarsData[806]/* d[2].msg_to_cc[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[805]/* d[2].msg_to_cc[3] DISCRETE */)  = (data->modelData->realVarsData[805]/* d[2].msg_to_cc[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[804]/* d[2].msg_to_cc[2] DISCRETE */)  = (data->modelData->realVarsData[804]/* d[2].msg_to_cc[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[803]/* d[2].msg_to_cc[1] DISCRETE */)  = (data->modelData->realVarsData[803]/* d[2].msg_to_cc[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[68]/* $whenCondition71 DISCRETE */)  = (data->modelData->booleanVarsData[68]/* $whenCondition71 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[68]/* $whenCondition71 DISCRETE */)  = 0;

  array_alloc_scalar_real_array(&tmp105, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp106, ((modelica_real*)&((&(data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
  real_array_copy_data(tmp105, tmp106);

  (data->localData[0]->realVars[834]/* d[2].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3732]/* d[2].p.flyZone[1] PARAM */) );

  (data->localData[0]->realVars[841]/* d[2].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3733]/* d[2].p.flyZone[2] PARAM */) );

  (data->localData[0]->realVars[848]/* d[2].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3734]/* d[2].p.flyZone[3] PARAM */) );

  (data->localData[0]->integerVars[72]/* d[2].flag DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->booleanVars[224]/* d[2].readsignal DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[238]/* d[2].writesignal DISCRETE */)  = 0;

  (data->localData[0]->integerVars[65]/* d[2].fifox DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[51]/* d[2].comm_state DISCRETE */)  = ((modelica_integer) 10);
  TRACE_POP
}
extern void System_eqFunction_786(DATA *data, threadData_t *threadData);

extern void System_eqFunction_784(DATA *data, threadData_t *threadData);

extern void System_eqFunction_782(DATA *data, threadData_t *threadData);

extern void System_eqFunction_785(DATA *data, threadData_t *threadData);

extern void System_eqFunction_789(DATA *data, threadData_t *threadData);

extern void System_eqFunction_787(DATA *data, threadData_t *threadData);

extern void System_eqFunction_779(DATA *data, threadData_t *threadData);

extern void System_eqFunction_783(DATA *data, threadData_t *threadData);

extern void System_eqFunction_781(DATA *data, threadData_t *threadData);

extern void System_eqFunction_778(DATA *data, threadData_t *threadData);


/*
equation index: 166
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[2].writesignal = $START.drone_to_cc[2].writesignal
*/
void System_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  (data->simulationInfo->booleanVarsPre[280]/* drone_to_cc[2].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[280]/* drone_to_cc[2].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 167
type: SIMPLE_ASSIGN
drone_to_cc[2].writesigint = not $PRE.drone_to_cc[2].writesignal == drone_to_cc[2].writesignal
*/
void System_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  (data->localData[0]->booleanVars[273]/* drone_to_cc[2].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[280]/* drone_to_cc[2].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[280]/* drone_to_cc[2].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[280]/* drone_to_cc[2].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[280]/* drone_to_cc[2].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 168
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[2].readsignal = $START.cc_to_drone[2].readsignal
*/
void System_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  (data->simulationInfo->booleanVarsPre[175]/* cc_to_drone[2].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[175]/* cc_to_drone[2].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
cc_to_drone[2].readsigint = not $PRE.cc_to_drone[2].readsignal == cc_to_drone[2].readsignal
*/
void System_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  (data->localData[0]->booleanVars[168]/* cc_to_drone[2].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[175]/* cc_to_drone[2].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[175]/* cc_to_drone[2].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[175]/* cc_to_drone[2].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[175]/* cc_to_drone[2].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 170
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
  $whenCondition76 := $START.$whenCondition76;
  $whenCondition76 := false;
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
void System_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  real_array tmp109;
  real_array tmp110;
  (data->localData[0]->integerVars[50]/* d[1].comm_state DISCRETE */)  = (data->modelData->integerVarsData[50]/* d[1].comm_state DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[64]/* d[1].fifox DISCRETE */)  = (data->modelData->integerVarsData[64]/* d[1].fifox DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[237]/* d[1].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[237]/* d[1].writesignal DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[223]/* d[1].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[223]/* d[1].readsignal DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[71]/* d[1].flag DISCRETE */)  = (data->modelData->integerVarsData[71]/* d[1].flag DISCRETE */).attribute .start;

  (data->localData[0]->realVars[847]/* d[1].setz DISCRETE */)  = (data->modelData->realVarsData[847]/* d[1].setz DISCRETE */).attribute .start;

  (data->localData[0]->realVars[840]/* d[1].sety DISCRETE */)  = (data->modelData->realVarsData[840]/* d[1].sety DISCRETE */).attribute .start;

  (data->localData[0]->realVars[833]/* d[1].setx DISCRETE */)  = (data->modelData->realVarsData[833]/* d[1].setx DISCRETE */).attribute .start;

  (data->localData[0]->realVars[802]/* d[1].msg_to_cc[5] DISCRETE */)  = (data->modelData->realVarsData[802]/* d[1].msg_to_cc[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[801]/* d[1].msg_to_cc[4] DISCRETE */)  = (data->modelData->realVarsData[801]/* d[1].msg_to_cc[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[800]/* d[1].msg_to_cc[3] DISCRETE */)  = (data->modelData->realVarsData[800]/* d[1].msg_to_cc[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[799]/* d[1].msg_to_cc[2] DISCRETE */)  = (data->modelData->realVarsData[799]/* d[1].msg_to_cc[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */)  = (data->modelData->realVarsData[798]/* d[1].msg_to_cc[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[73]/* $whenCondition76 DISCRETE */)  = (data->modelData->booleanVarsData[73]/* $whenCondition76 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[73]/* $whenCondition76 DISCRETE */)  = 0;

  array_alloc_scalar_real_array(&tmp109, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp110, ((modelica_real*)&((&(data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
  real_array_copy_data(tmp109, tmp110);

  (data->localData[0]->realVars[833]/* d[1].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3729]/* d[1].p.flyZone[1] PARAM */) );

  (data->localData[0]->realVars[840]/* d[1].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3730]/* d[1].p.flyZone[2] PARAM */) );

  (data->localData[0]->realVars[847]/* d[1].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3731]/* d[1].p.flyZone[3] PARAM */) );

  (data->localData[0]->integerVars[71]/* d[1].flag DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->booleanVars[223]/* d[1].readsignal DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[237]/* d[1].writesignal DISCRETE */)  = 0;

  (data->localData[0]->integerVars[64]/* d[1].fifox DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[50]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 10);
  TRACE_POP
}
extern void System_eqFunction_806(DATA *data, threadData_t *threadData);

extern void System_eqFunction_804(DATA *data, threadData_t *threadData);

extern void System_eqFunction_811(DATA *data, threadData_t *threadData);

extern void System_eqFunction_803(DATA *data, threadData_t *threadData);

extern void System_eqFunction_805(DATA *data, threadData_t *threadData);

extern void System_eqFunction_820(DATA *data, threadData_t *threadData);

extern void System_eqFunction_809(DATA *data, threadData_t *threadData);

extern void System_eqFunction_807(DATA *data, threadData_t *threadData);

extern void System_eqFunction_802(DATA *data, threadData_t *threadData);

extern void System_eqFunction_808(DATA *data, threadData_t *threadData);


/*
equation index: 181
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].writesignal = $START.drone_to_cc[1].writesignal
*/
void System_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  (data->simulationInfo->booleanVarsPre[279]/* drone_to_cc[1].writesignal DISCRETE */)  = (data->modelData->booleanVarsData[279]/* drone_to_cc[1].writesignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
drone_to_cc[1].writesigint = not $PRE.drone_to_cc[1].writesignal == drone_to_cc[1].writesignal
*/
void System_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  (data->localData[0]->booleanVars[272]/* drone_to_cc[1].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[279]/* drone_to_cc[1].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[279]/* drone_to_cc[1].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[279]/* drone_to_cc[1].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[279]/* drone_to_cc[1].writesignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].readsignal = $START.cc_to_drone[1].readsignal
*/
void System_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  (data->simulationInfo->booleanVarsPre[174]/* cc_to_drone[1].readsignal DISCRETE */)  = (data->modelData->booleanVarsData[174]/* cc_to_drone[1].readsignal DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
cc_to_drone[1].readsigint = not $PRE.cc_to_drone[1].readsignal == cc_to_drone[1].readsignal
*/
void System_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  (data->localData[0]->booleanVars[167]/* cc_to_drone[1].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[174]/* cc_to_drone[1].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[174]/* cc_to_drone[1].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[174]/* cc_to_drone[1].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[174]/* cc_to_drone[1].readsignal DISCRETE */) )));
  TRACE_POP
}

/*
equation index: 185
type: SIMPLE_ASSIGN
$PRE.d[7].d.battery = $START.d[7].d.battery
*/
void System_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  (data->simulationInfo->realVarsPre[797]/* d[7].d.battery DISCRETE */)  = (data->modelData->realVarsData[797]/* d[7].d.battery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 186
type: SIMPLE_ASSIGN
$PRE.d[7].d.droneState = $START.d[7].d.droneState
*/
void System_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  (data->simulationInfo->integerVarsPre[63]/* d[7].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[63]/* d[7].d.droneState DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 187
type: ALGORITHM

  d[7].d.droneDead := $START.d[7].d.droneDead;
  d[7].d.droneState := $START.d[7].d.droneState;
  d[7].d.battery := $START.d[7].d.battery;
  $whenCondition50 := $START.$whenCondition50;
  $whenCondition49 := $START.$whenCondition49;
  $whenCondition49 := abs($PRE.d[7].d.battery) < 0.01;
  $whenCondition50 := false;
  d[7].d.battery := d[7].d.p.capacity;
  d[7].d.droneState := 1;
  d[7].d.droneDead := false;
*/
void System_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  modelica_boolean tmp113;
  (data->localData[0]->booleanVars[215]/* d[7].d.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[215]/* d[7].d.droneDead DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[63]/* d[7].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[63]/* d[7].d.droneState DISCRETE */).attribute .start;

  (data->localData[0]->realVars[797]/* d[7].d.battery DISCRETE */)  = (data->modelData->realVarsData[797]/* d[7].d.battery DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[45]/* $whenCondition50 DISCRETE */)  = (data->modelData->booleanVarsData[45]/* $whenCondition50 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[43]/* $whenCondition49 DISCRETE */)  = (data->modelData->booleanVarsData[43]/* $whenCondition49 DISCRETE */).attribute .start;

  tmp113 = Less(fabs((data->simulationInfo->realVarsPre[797]/* d[7].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[43]/* $whenCondition49 DISCRETE */)  = tmp113;

  (data->localData[0]->booleanVars[45]/* $whenCondition50 DISCRETE */)  = 0;

  (data->localData[0]->realVars[797]/* d[7].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[2741]/* d[7].d.p.capacity PARAM */) ;

  (data->localData[0]->integerVars[63]/* d[7].d.droneState DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->booleanVars[215]/* d[7].d.droneDead DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_651(DATA *data, threadData_t *threadData);

extern void System_eqFunction_673(DATA *data, threadData_t *threadData);


/*
equation index: 190
type: SIMPLE_ASSIGN
d[7].ctrl.destZ = 0.0
*/
void System_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  (data->localData[0]->realVars[790]/* d[7].ctrl.destZ DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 191
type: SIMPLE_ASSIGN
$PRE.d[7].ctrl.destZ = d[7].ctrl.destZ
*/
void System_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  (data->simulationInfo->realVarsPre[790]/* d[7].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[790]/* d[7].ctrl.destZ DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 192
type: SIMPLE_ASSIGN
d[7].d.Vz = 0.0
*/
void System_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  (data->localData[0]->realVars[20]/* d[7].d.Vz STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_530(DATA *data, threadData_t *threadData);


/*
equation index: 194
type: SIMPLE_ASSIGN
d[7].d.z = d[7].d.p.docking_bay[3] + d[7].d.p.dDistance * (*Real*)(d[7].d.drone_id)
*/
void System_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  (data->localData[0]->realVars[41]/* d[7].d.z STATE(1,d[7].d.Vz) */)  = (data->simulationInfo->realParameter[2811]/* d[7].d.p.docking_bay[3] PARAM */)  + ((data->simulationInfo->realParameter[2769]/* d[7].d.p.dDistance PARAM */) ) * (((modelica_real)(data->simulationInfo->integerParameter[66]/* d[7].d.drone_id PARAM */) ));
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
d[7].ctrl.Trustz = d[7].ctrl.prm.m * (9.81 + d[7].ctrl.kz1 * (d[7].d.z - $PRE.d[7].ctrl.destZ) + d[7].ctrl.kz2 * d[7].d.Vz)
*/
void System_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  (data->localData[0]->realVars[186]/* d[7].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1929]/* d[7].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[1089]/* d[7].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[41]/* d[7].d.z STATE(1,d[7].d.Vz) */)  - (data->simulationInfo->realVarsPre[790]/* d[7].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[1096]/* d[7].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[20]/* d[7].d.Vz STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_529(DATA *data, threadData_t *threadData);


/*
equation index: 197
type: SIMPLE_ASSIGN
d[7].ctrl.destY = 0.0
*/
void System_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  (data->localData[0]->realVars[783]/* d[7].ctrl.destY DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
$PRE.d[7].ctrl.destY = d[7].ctrl.destY
*/
void System_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  (data->simulationInfo->realVarsPre[783]/* d[7].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[783]/* d[7].ctrl.destY DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
d[7].d.Vy = 0.0
*/
void System_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  (data->localData[0]->realVars[13]/* d[7].d.Vy STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_531(DATA *data, threadData_t *threadData);


/*
equation index: 201
type: SIMPLE_ASSIGN
d[7].d.y = d[7].d.p.docking_bay[2]
*/
void System_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  (data->localData[0]->realVars[34]/* d[7].d.y STATE(1,d[7].d.Vy) */)  = (data->simulationInfo->realParameter[2810]/* d[7].d.p.docking_bay[2] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_824(DATA *data, threadData_t *threadData);


/*
equation index: 203
type: SIMPLE_ASSIGN
d[7].ctrl.Trusty = d[7].ctrl.prm.m * (d[7].ctrl.ky1 * (d[7].ctrl.y - $PRE.d[7].ctrl.destY) + d[7].ctrl.ky2 * d[7].d.Vy)
*/
void System_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  (data->localData[0]->realVars[179]/* d[7].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1929]/* d[7].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1075]/* d[7].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[221]/* d[7].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[783]/* d[7].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[1082]/* d[7].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[13]/* d[7].d.Vy STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_826(DATA *data, threadData_t *threadData);


/*
equation index: 205
type: SIMPLE_ASSIGN
d[7].ctrl.destX = 0.0
*/
void System_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  (data->localData[0]->realVars[776]/* d[7].ctrl.destX DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
$PRE.d[7].ctrl.destX = d[7].ctrl.destX
*/
void System_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  (data->simulationInfo->realVarsPre[776]/* d[7].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[776]/* d[7].ctrl.destX DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
d[7].d.Vx = 0.0
*/
void System_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  (data->localData[0]->realVars[6]/* d[7].d.Vx STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_532(DATA *data, threadData_t *threadData);


/*
equation index: 209
type: SIMPLE_ASSIGN
d[7].d.x = d[7].d.p.docking_bay[1]
*/
void System_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  (data->localData[0]->realVars[27]/* d[7].d.x STATE(1,d[7].d.Vx) */)  = (data->simulationInfo->realParameter[2809]/* d[7].d.p.docking_bay[1] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_827(DATA *data, threadData_t *threadData);


/*
equation index: 211
type: SIMPLE_ASSIGN
d[7].ctrl.Trustx = d[7].ctrl.prm.m * (d[7].ctrl.kx1 * (d[7].ctrl.x - $PRE.d[7].ctrl.destX) + d[7].ctrl.kx2 * d[7].d.Vx)
*/
void System_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  (data->localData[0]->realVars[172]/* d[7].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1929]/* d[7].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1061]/* d[7].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[214]/* d[7].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[776]/* d[7].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[1068]/* d[7].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[6]/* d[7].d.Vx STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_829(DATA *data, threadData_t *threadData);


/*
equation index: 213
type: SIMPLE_ASSIGN
$PRE.d[6].d.battery = $START.d[6].d.battery
*/
void System_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  (data->simulationInfo->realVarsPre[796]/* d[6].d.battery DISCRETE */)  = (data->modelData->realVarsData[796]/* d[6].d.battery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 214
type: SIMPLE_ASSIGN
$PRE.d[6].d.droneState = $START.d[6].d.droneState
*/
void System_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  (data->simulationInfo->integerVarsPre[62]/* d[6].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[62]/* d[6].d.droneState DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 215
type: ALGORITHM

  d[6].d.droneDead := $START.d[6].d.droneDead;
  d[6].d.droneState := $START.d[6].d.droneState;
  d[6].d.battery := $START.d[6].d.battery;
  $whenCondition55 := $START.$whenCondition55;
  $whenCondition54 := $START.$whenCondition54;
  $whenCondition54 := abs($PRE.d[6].d.battery) < 0.01;
  $whenCondition55 := false;
  d[6].d.battery := d[6].d.p.capacity;
  d[6].d.droneState := 1;
  d[6].d.droneDead := false;
*/
void System_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  modelica_boolean tmp114;
  (data->localData[0]->booleanVars[214]/* d[6].d.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[214]/* d[6].d.droneDead DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[62]/* d[6].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[62]/* d[6].d.droneState DISCRETE */).attribute .start;

  (data->localData[0]->realVars[796]/* d[6].d.battery DISCRETE */)  = (data->modelData->realVarsData[796]/* d[6].d.battery DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[50]/* $whenCondition55 DISCRETE */)  = (data->modelData->booleanVarsData[50]/* $whenCondition55 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[49]/* $whenCondition54 DISCRETE */)  = (data->modelData->booleanVarsData[49]/* $whenCondition54 DISCRETE */).attribute .start;

  tmp114 = Less(fabs((data->simulationInfo->realVarsPre[796]/* d[6].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[49]/* $whenCondition54 DISCRETE */)  = tmp114;

  (data->localData[0]->booleanVars[50]/* $whenCondition55 DISCRETE */)  = 0;

  (data->localData[0]->realVars[796]/* d[6].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[2740]/* d[6].d.p.capacity PARAM */) ;

  (data->localData[0]->integerVars[62]/* d[6].d.droneState DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->booleanVars[214]/* d[6].d.droneDead DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_698(DATA *data, threadData_t *threadData);

extern void System_eqFunction_697(DATA *data, threadData_t *threadData);


/*
equation index: 218
type: SIMPLE_ASSIGN
d[6].ctrl.destZ = 0.0
*/
void System_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  (data->localData[0]->realVars[789]/* d[6].ctrl.destZ DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
$PRE.d[6].ctrl.destZ = d[6].ctrl.destZ
*/
void System_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  (data->simulationInfo->realVarsPre[789]/* d[6].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[789]/* d[6].ctrl.destZ DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
d[6].d.Vz = 0.0
*/
void System_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  (data->localData[0]->realVars[19]/* d[6].d.Vz STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_535(DATA *data, threadData_t *threadData);


/*
equation index: 222
type: SIMPLE_ASSIGN
d[6].d.z = d[6].d.p.docking_bay[3] + d[6].d.p.dDistance * (*Real*)(d[6].d.drone_id)
*/
void System_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  (data->localData[0]->realVars[40]/* d[6].d.z STATE(1,d[6].d.Vz) */)  = (data->simulationInfo->realParameter[2808]/* d[6].d.p.docking_bay[3] PARAM */)  + ((data->simulationInfo->realParameter[2768]/* d[6].d.p.dDistance PARAM */) ) * (((modelica_real)(data->simulationInfo->integerParameter[65]/* d[6].d.drone_id PARAM */) ));
  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
d[6].ctrl.Trustz = d[6].ctrl.prm.m * (9.81 + d[6].ctrl.kz1 * (d[6].d.z - $PRE.d[6].ctrl.destZ) + d[6].ctrl.kz2 * d[6].d.Vz)
*/
void System_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  (data->localData[0]->realVars[185]/* d[6].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1928]/* d[6].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[1088]/* d[6].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[40]/* d[6].d.z STATE(1,d[6].d.Vz) */)  - (data->simulationInfo->realVarsPre[789]/* d[6].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[1095]/* d[6].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[19]/* d[6].d.Vz STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_534(DATA *data, threadData_t *threadData);


/*
equation index: 225
type: SIMPLE_ASSIGN
d[6].ctrl.destY = 0.0
*/
void System_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  (data->localData[0]->realVars[782]/* d[6].ctrl.destY DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
$PRE.d[6].ctrl.destY = d[6].ctrl.destY
*/
void System_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  (data->simulationInfo->realVarsPre[782]/* d[6].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[782]/* d[6].ctrl.destY DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
d[6].d.Vy = 0.0
*/
void System_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  (data->localData[0]->realVars[12]/* d[6].d.Vy STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_536(DATA *data, threadData_t *threadData);


/*
equation index: 229
type: SIMPLE_ASSIGN
d[6].d.y = d[6].d.p.docking_bay[2]
*/
void System_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  (data->localData[0]->realVars[33]/* d[6].d.y STATE(1,d[6].d.Vy) */)  = (data->simulationInfo->realParameter[2807]/* d[6].d.p.docking_bay[2] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_830(DATA *data, threadData_t *threadData);


/*
equation index: 231
type: SIMPLE_ASSIGN
d[6].ctrl.Trusty = d[6].ctrl.prm.m * (d[6].ctrl.ky1 * (d[6].ctrl.y - $PRE.d[6].ctrl.destY) + d[6].ctrl.ky2 * d[6].d.Vy)
*/
void System_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  (data->localData[0]->realVars[178]/* d[6].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1928]/* d[6].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1074]/* d[6].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[220]/* d[6].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[782]/* d[6].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[1081]/* d[6].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[12]/* d[6].d.Vy STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_832(DATA *data, threadData_t *threadData);


/*
equation index: 233
type: SIMPLE_ASSIGN
d[6].ctrl.destX = 0.0
*/
void System_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  (data->localData[0]->realVars[775]/* d[6].ctrl.destX DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
$PRE.d[6].ctrl.destX = d[6].ctrl.destX
*/
void System_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  (data->simulationInfo->realVarsPre[775]/* d[6].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[775]/* d[6].ctrl.destX DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
d[6].d.Vx = 0.0
*/
void System_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  (data->localData[0]->realVars[5]/* d[6].d.Vx STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_537(DATA *data, threadData_t *threadData);


/*
equation index: 237
type: SIMPLE_ASSIGN
d[6].d.x = d[6].d.p.docking_bay[1]
*/
void System_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  (data->localData[0]->realVars[26]/* d[6].d.x STATE(1,d[6].d.Vx) */)  = (data->simulationInfo->realParameter[2806]/* d[6].d.p.docking_bay[1] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_833(DATA *data, threadData_t *threadData);


/*
equation index: 239
type: SIMPLE_ASSIGN
d[6].ctrl.Trustx = d[6].ctrl.prm.m * (d[6].ctrl.kx1 * (d[6].ctrl.x - $PRE.d[6].ctrl.destX) + d[6].ctrl.kx2 * d[6].d.Vx)
*/
void System_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  (data->localData[0]->realVars[171]/* d[6].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1928]/* d[6].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1060]/* d[6].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[213]/* d[6].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[775]/* d[6].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[1067]/* d[6].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[5]/* d[6].d.Vx STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_835(DATA *data, threadData_t *threadData);


/*
equation index: 241
type: SIMPLE_ASSIGN
$PRE.d[5].d.battery = $START.d[5].d.battery
*/
void System_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  (data->simulationInfo->realVarsPre[795]/* d[5].d.battery DISCRETE */)  = (data->modelData->realVarsData[795]/* d[5].d.battery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
$PRE.d[5].d.droneState = $START.d[5].d.droneState
*/
void System_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  (data->simulationInfo->integerVarsPre[61]/* d[5].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[61]/* d[5].d.droneState DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 243
type: ALGORITHM

  d[5].d.droneDead := $START.d[5].d.droneDead;
  d[5].d.droneState := $START.d[5].d.droneState;
  d[5].d.battery := $START.d[5].d.battery;
  $whenCondition60 := $START.$whenCondition60;
  $whenCondition59 := $START.$whenCondition59;
  $whenCondition59 := abs($PRE.d[5].d.battery) < 0.01;
  $whenCondition60 := false;
  d[5].d.battery := d[5].d.p.capacity;
  d[5].d.droneState := 1;
  d[5].d.droneDead := false;
*/
void System_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  modelica_boolean tmp115;
  (data->localData[0]->booleanVars[213]/* d[5].d.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[213]/* d[5].d.droneDead DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[61]/* d[5].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[61]/* d[5].d.droneState DISCRETE */).attribute .start;

  (data->localData[0]->realVars[795]/* d[5].d.battery DISCRETE */)  = (data->modelData->realVarsData[795]/* d[5].d.battery DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[56]/* $whenCondition60 DISCRETE */)  = (data->modelData->booleanVarsData[56]/* $whenCondition60 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[54]/* $whenCondition59 DISCRETE */)  = (data->modelData->booleanVarsData[54]/* $whenCondition59 DISCRETE */).attribute .start;

  tmp115 = Less(fabs((data->simulationInfo->realVarsPre[795]/* d[5].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[54]/* $whenCondition59 DISCRETE */)  = tmp115;

  (data->localData[0]->booleanVars[56]/* $whenCondition60 DISCRETE */)  = 0;

  (data->localData[0]->realVars[795]/* d[5].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[2739]/* d[5].d.p.capacity PARAM */) ;

  (data->localData[0]->integerVars[61]/* d[5].d.droneState DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->booleanVars[213]/* d[5].d.droneDead DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_723(DATA *data, threadData_t *threadData);

extern void System_eqFunction_722(DATA *data, threadData_t *threadData);


/*
equation index: 246
type: SIMPLE_ASSIGN
d[5].ctrl.destZ = 0.0
*/
void System_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  (data->localData[0]->realVars[788]/* d[5].ctrl.destZ DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
$PRE.d[5].ctrl.destZ = d[5].ctrl.destZ
*/
void System_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  (data->simulationInfo->realVarsPre[788]/* d[5].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[788]/* d[5].ctrl.destZ DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
d[5].d.Vz = 0.0
*/
void System_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  (data->localData[0]->realVars[18]/* d[5].d.Vz STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_540(DATA *data, threadData_t *threadData);


/*
equation index: 250
type: SIMPLE_ASSIGN
d[5].d.z = d[5].d.p.docking_bay[3] + d[5].d.p.dDistance * (*Real*)(d[5].d.drone_id)
*/
void System_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  (data->localData[0]->realVars[39]/* d[5].d.z STATE(1,d[5].d.Vz) */)  = (data->simulationInfo->realParameter[2805]/* d[5].d.p.docking_bay[3] PARAM */)  + ((data->simulationInfo->realParameter[2767]/* d[5].d.p.dDistance PARAM */) ) * (((modelica_real)(data->simulationInfo->integerParameter[64]/* d[5].d.drone_id PARAM */) ));
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
d[5].ctrl.Trustz = d[5].ctrl.prm.m * (9.81 + d[5].ctrl.kz1 * (d[5].d.z - $PRE.d[5].ctrl.destZ) + d[5].ctrl.kz2 * d[5].d.Vz)
*/
void System_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  (data->localData[0]->realVars[184]/* d[5].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1927]/* d[5].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[1087]/* d[5].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[39]/* d[5].d.z STATE(1,d[5].d.Vz) */)  - (data->simulationInfo->realVarsPre[788]/* d[5].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[1094]/* d[5].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[18]/* d[5].d.Vz STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_539(DATA *data, threadData_t *threadData);


/*
equation index: 253
type: SIMPLE_ASSIGN
d[5].ctrl.destY = 0.0
*/
void System_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  (data->localData[0]->realVars[781]/* d[5].ctrl.destY DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
$PRE.d[5].ctrl.destY = d[5].ctrl.destY
*/
void System_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  (data->simulationInfo->realVarsPre[781]/* d[5].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[781]/* d[5].ctrl.destY DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
d[5].d.Vy = 0.0
*/
void System_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  (data->localData[0]->realVars[11]/* d[5].d.Vy STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_541(DATA *data, threadData_t *threadData);


/*
equation index: 257
type: SIMPLE_ASSIGN
d[5].d.y = d[5].d.p.docking_bay[2]
*/
void System_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  (data->localData[0]->realVars[32]/* d[5].d.y STATE(1,d[5].d.Vy) */)  = (data->simulationInfo->realParameter[2804]/* d[5].d.p.docking_bay[2] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_836(DATA *data, threadData_t *threadData);


/*
equation index: 259
type: SIMPLE_ASSIGN
d[5].ctrl.Trusty = d[5].ctrl.prm.m * (d[5].ctrl.ky1 * (d[5].ctrl.y - $PRE.d[5].ctrl.destY) + d[5].ctrl.ky2 * d[5].d.Vy)
*/
void System_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  (data->localData[0]->realVars[177]/* d[5].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1927]/* d[5].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1073]/* d[5].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[219]/* d[5].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[781]/* d[5].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[1080]/* d[5].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[11]/* d[5].d.Vy STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_838(DATA *data, threadData_t *threadData);


/*
equation index: 261
type: SIMPLE_ASSIGN
d[5].ctrl.destX = 0.0
*/
void System_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  (data->localData[0]->realVars[774]/* d[5].ctrl.destX DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
$PRE.d[5].ctrl.destX = d[5].ctrl.destX
*/
void System_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  (data->simulationInfo->realVarsPre[774]/* d[5].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[774]/* d[5].ctrl.destX DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
d[5].d.Vx = 0.0
*/
void System_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  (data->localData[0]->realVars[4]/* d[5].d.Vx STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_542(DATA *data, threadData_t *threadData);


/*
equation index: 265
type: SIMPLE_ASSIGN
d[5].d.x = d[5].d.p.docking_bay[1]
*/
void System_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  (data->localData[0]->realVars[25]/* d[5].d.x STATE(1,d[5].d.Vx) */)  = (data->simulationInfo->realParameter[2803]/* d[5].d.p.docking_bay[1] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_839(DATA *data, threadData_t *threadData);


/*
equation index: 267
type: SIMPLE_ASSIGN
d[5].ctrl.Trustx = d[5].ctrl.prm.m * (d[5].ctrl.kx1 * (d[5].ctrl.x - $PRE.d[5].ctrl.destX) + d[5].ctrl.kx2 * d[5].d.Vx)
*/
void System_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  (data->localData[0]->realVars[170]/* d[5].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1927]/* d[5].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1059]/* d[5].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[212]/* d[5].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[774]/* d[5].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[1066]/* d[5].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[4]/* d[5].d.Vx STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_841(DATA *data, threadData_t *threadData);


/*
equation index: 269
type: SIMPLE_ASSIGN
$PRE.d[4].d.battery = $START.d[4].d.battery
*/
void System_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  (data->simulationInfo->realVarsPre[794]/* d[4].d.battery DISCRETE */)  = (data->modelData->realVarsData[794]/* d[4].d.battery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
$PRE.d[4].d.droneState = $START.d[4].d.droneState
*/
void System_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  (data->simulationInfo->integerVarsPre[60]/* d[4].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[60]/* d[4].d.droneState DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 271
type: ALGORITHM

  d[4].d.droneDead := $START.d[4].d.droneDead;
  d[4].d.droneState := $START.d[4].d.droneState;
  d[4].d.battery := $START.d[4].d.battery;
  $whenCondition65 := $START.$whenCondition65;
  $whenCondition64 := $START.$whenCondition64;
  $whenCondition64 := abs($PRE.d[4].d.battery) < 0.01;
  $whenCondition65 := false;
  d[4].d.battery := d[4].d.p.capacity;
  d[4].d.droneState := 1;
  d[4].d.droneDead := false;
*/
void System_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  modelica_boolean tmp116;
  (data->localData[0]->booleanVars[212]/* d[4].d.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[212]/* d[4].d.droneDead DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[60]/* d[4].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[60]/* d[4].d.droneState DISCRETE */).attribute .start;

  (data->localData[0]->realVars[794]/* d[4].d.battery DISCRETE */)  = (data->modelData->realVarsData[794]/* d[4].d.battery DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[61]/* $whenCondition65 DISCRETE */)  = (data->modelData->booleanVarsData[61]/* $whenCondition65 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[60]/* $whenCondition64 DISCRETE */)  = (data->modelData->booleanVarsData[60]/* $whenCondition64 DISCRETE */).attribute .start;

  tmp116 = Less(fabs((data->simulationInfo->realVarsPre[794]/* d[4].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[60]/* $whenCondition64 DISCRETE */)  = tmp116;

  (data->localData[0]->booleanVars[61]/* $whenCondition65 DISCRETE */)  = 0;

  (data->localData[0]->realVars[794]/* d[4].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[2738]/* d[4].d.p.capacity PARAM */) ;

  (data->localData[0]->integerVars[60]/* d[4].d.droneState DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->booleanVars[212]/* d[4].d.droneDead DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_748(DATA *data, threadData_t *threadData);

extern void System_eqFunction_747(DATA *data, threadData_t *threadData);


/*
equation index: 274
type: SIMPLE_ASSIGN
d[4].ctrl.destZ = 0.0
*/
void System_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  (data->localData[0]->realVars[787]/* d[4].ctrl.destZ DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
$PRE.d[4].ctrl.destZ = d[4].ctrl.destZ
*/
void System_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  (data->simulationInfo->realVarsPre[787]/* d[4].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[787]/* d[4].ctrl.destZ DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
d[4].d.Vz = 0.0
*/
void System_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  (data->localData[0]->realVars[17]/* d[4].d.Vz STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_545(DATA *data, threadData_t *threadData);


/*
equation index: 278
type: SIMPLE_ASSIGN
d[4].d.z = d[4].d.p.docking_bay[3] + d[4].d.p.dDistance * (*Real*)(d[4].d.drone_id)
*/
void System_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  (data->localData[0]->realVars[38]/* d[4].d.z STATE(1,d[4].d.Vz) */)  = (data->simulationInfo->realParameter[2802]/* d[4].d.p.docking_bay[3] PARAM */)  + ((data->simulationInfo->realParameter[2766]/* d[4].d.p.dDistance PARAM */) ) * (((modelica_real)(data->simulationInfo->integerParameter[63]/* d[4].d.drone_id PARAM */) ));
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
d[4].ctrl.Trustz = d[4].ctrl.prm.m * (9.81 + d[4].ctrl.kz1 * (d[4].d.z - $PRE.d[4].ctrl.destZ) + d[4].ctrl.kz2 * d[4].d.Vz)
*/
void System_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  (data->localData[0]->realVars[183]/* d[4].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1926]/* d[4].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[1086]/* d[4].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[38]/* d[4].d.z STATE(1,d[4].d.Vz) */)  - (data->simulationInfo->realVarsPre[787]/* d[4].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[1093]/* d[4].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[17]/* d[4].d.Vz STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_544(DATA *data, threadData_t *threadData);


/*
equation index: 281
type: SIMPLE_ASSIGN
d[4].ctrl.destY = 0.0
*/
void System_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  (data->localData[0]->realVars[780]/* d[4].ctrl.destY DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
$PRE.d[4].ctrl.destY = d[4].ctrl.destY
*/
void System_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  (data->simulationInfo->realVarsPre[780]/* d[4].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[780]/* d[4].ctrl.destY DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
d[4].d.Vy = 0.0
*/
void System_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  (data->localData[0]->realVars[10]/* d[4].d.Vy STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_546(DATA *data, threadData_t *threadData);


/*
equation index: 285
type: SIMPLE_ASSIGN
d[4].d.y = d[4].d.p.docking_bay[2]
*/
void System_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  (data->localData[0]->realVars[31]/* d[4].d.y STATE(1,d[4].d.Vy) */)  = (data->simulationInfo->realParameter[2801]/* d[4].d.p.docking_bay[2] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_842(DATA *data, threadData_t *threadData);


/*
equation index: 287
type: SIMPLE_ASSIGN
d[4].ctrl.Trusty = d[4].ctrl.prm.m * (d[4].ctrl.ky1 * (d[4].ctrl.y - $PRE.d[4].ctrl.destY) + d[4].ctrl.ky2 * d[4].d.Vy)
*/
void System_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  (data->localData[0]->realVars[176]/* d[4].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1926]/* d[4].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1072]/* d[4].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[218]/* d[4].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[780]/* d[4].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[1079]/* d[4].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[10]/* d[4].d.Vy STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_844(DATA *data, threadData_t *threadData);


/*
equation index: 289
type: SIMPLE_ASSIGN
d[4].ctrl.destX = 0.0
*/
void System_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  (data->localData[0]->realVars[773]/* d[4].ctrl.destX DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
$PRE.d[4].ctrl.destX = d[4].ctrl.destX
*/
void System_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  (data->simulationInfo->realVarsPre[773]/* d[4].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[773]/* d[4].ctrl.destX DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
d[4].d.Vx = 0.0
*/
void System_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  (data->localData[0]->realVars[3]/* d[4].d.Vx STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_547(DATA *data, threadData_t *threadData);


/*
equation index: 293
type: SIMPLE_ASSIGN
d[4].d.x = d[4].d.p.docking_bay[1]
*/
void System_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  (data->localData[0]->realVars[24]/* d[4].d.x STATE(1,d[4].d.Vx) */)  = (data->simulationInfo->realParameter[2800]/* d[4].d.p.docking_bay[1] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_845(DATA *data, threadData_t *threadData);


/*
equation index: 295
type: SIMPLE_ASSIGN
d[4].ctrl.Trustx = d[4].ctrl.prm.m * (d[4].ctrl.kx1 * (d[4].ctrl.x - $PRE.d[4].ctrl.destX) + d[4].ctrl.kx2 * d[4].d.Vx)
*/
void System_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  (data->localData[0]->realVars[169]/* d[4].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1926]/* d[4].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1058]/* d[4].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[211]/* d[4].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[773]/* d[4].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[1065]/* d[4].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[3]/* d[4].d.Vx STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_847(DATA *data, threadData_t *threadData);


/*
equation index: 297
type: SIMPLE_ASSIGN
$PRE.d[3].d.battery = $START.d[3].d.battery
*/
void System_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  (data->simulationInfo->realVarsPre[793]/* d[3].d.battery DISCRETE */)  = (data->modelData->realVarsData[793]/* d[3].d.battery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
$PRE.d[3].d.droneState = $START.d[3].d.droneState
*/
void System_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  (data->simulationInfo->integerVarsPre[59]/* d[3].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[59]/* d[3].d.droneState DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 299
type: ALGORITHM

  d[3].d.droneDead := $START.d[3].d.droneDead;
  d[3].d.droneState := $START.d[3].d.droneState;
  d[3].d.battery := $START.d[3].d.battery;
  $whenCondition70 := $START.$whenCondition70;
  $whenCondition69 := $START.$whenCondition69;
  $whenCondition69 := abs($PRE.d[3].d.battery) < 0.01;
  $whenCondition70 := false;
  d[3].d.battery := d[3].d.p.capacity;
  d[3].d.droneState := 1;
  d[3].d.droneDead := false;
*/
void System_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  modelica_boolean tmp117;
  (data->localData[0]->booleanVars[211]/* d[3].d.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[211]/* d[3].d.droneDead DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[59]/* d[3].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[59]/* d[3].d.droneState DISCRETE */).attribute .start;

  (data->localData[0]->realVars[793]/* d[3].d.battery DISCRETE */)  = (data->modelData->realVarsData[793]/* d[3].d.battery DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[67]/* $whenCondition70 DISCRETE */)  = (data->modelData->booleanVarsData[67]/* $whenCondition70 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[65]/* $whenCondition69 DISCRETE */)  = (data->modelData->booleanVarsData[65]/* $whenCondition69 DISCRETE */).attribute .start;

  tmp117 = Less(fabs((data->simulationInfo->realVarsPre[793]/* d[3].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[65]/* $whenCondition69 DISCRETE */)  = tmp117;

  (data->localData[0]->booleanVars[67]/* $whenCondition70 DISCRETE */)  = 0;

  (data->localData[0]->realVars[793]/* d[3].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[2737]/* d[3].d.p.capacity PARAM */) ;

  (data->localData[0]->integerVars[59]/* d[3].d.droneState DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->booleanVars[211]/* d[3].d.droneDead DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_751(DATA *data, threadData_t *threadData);

extern void System_eqFunction_773(DATA *data, threadData_t *threadData);


/*
equation index: 302
type: SIMPLE_ASSIGN
d[3].ctrl.destZ = 0.0
*/
void System_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  (data->localData[0]->realVars[786]/* d[3].ctrl.destZ DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
$PRE.d[3].ctrl.destZ = d[3].ctrl.destZ
*/
void System_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  (data->simulationInfo->realVarsPre[786]/* d[3].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[786]/* d[3].ctrl.destZ DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
d[3].d.Vz = 0.0
*/
void System_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  (data->localData[0]->realVars[16]/* d[3].d.Vz STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_550(DATA *data, threadData_t *threadData);


/*
equation index: 306
type: SIMPLE_ASSIGN
d[3].d.z = d[3].d.p.docking_bay[3] + d[3].d.p.dDistance * (*Real*)(d[3].d.drone_id)
*/
void System_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  (data->localData[0]->realVars[37]/* d[3].d.z STATE(1,d[3].d.Vz) */)  = (data->simulationInfo->realParameter[2799]/* d[3].d.p.docking_bay[3] PARAM */)  + ((data->simulationInfo->realParameter[2765]/* d[3].d.p.dDistance PARAM */) ) * (((modelica_real)(data->simulationInfo->integerParameter[62]/* d[3].d.drone_id PARAM */) ));
  TRACE_POP
}

/*
equation index: 307
type: SIMPLE_ASSIGN
d[3].ctrl.Trustz = d[3].ctrl.prm.m * (9.81 + d[3].ctrl.kz1 * (d[3].d.z - $PRE.d[3].ctrl.destZ) + d[3].ctrl.kz2 * d[3].d.Vz)
*/
void System_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  (data->localData[0]->realVars[182]/* d[3].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1925]/* d[3].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[1085]/* d[3].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[37]/* d[3].d.z STATE(1,d[3].d.Vz) */)  - (data->simulationInfo->realVarsPre[786]/* d[3].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[1092]/* d[3].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[16]/* d[3].d.Vz STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_549(DATA *data, threadData_t *threadData);


/*
equation index: 309
type: SIMPLE_ASSIGN
d[3].ctrl.destY = 0.0
*/
void System_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  (data->localData[0]->realVars[779]/* d[3].ctrl.destY DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
$PRE.d[3].ctrl.destY = d[3].ctrl.destY
*/
void System_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  (data->simulationInfo->realVarsPre[779]/* d[3].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[779]/* d[3].ctrl.destY DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
d[3].d.Vy = 0.0
*/
void System_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  (data->localData[0]->realVars[9]/* d[3].d.Vy STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_551(DATA *data, threadData_t *threadData);


/*
equation index: 313
type: SIMPLE_ASSIGN
d[3].d.y = d[3].d.p.docking_bay[2]
*/
void System_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  (data->localData[0]->realVars[30]/* d[3].d.y STATE(1,d[3].d.Vy) */)  = (data->simulationInfo->realParameter[2798]/* d[3].d.p.docking_bay[2] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_848(DATA *data, threadData_t *threadData);


/*
equation index: 315
type: SIMPLE_ASSIGN
d[3].ctrl.Trusty = d[3].ctrl.prm.m * (d[3].ctrl.ky1 * (d[3].ctrl.y - $PRE.d[3].ctrl.destY) + d[3].ctrl.ky2 * d[3].d.Vy)
*/
void System_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  (data->localData[0]->realVars[175]/* d[3].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1925]/* d[3].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1071]/* d[3].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[217]/* d[3].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[779]/* d[3].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[1078]/* d[3].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[9]/* d[3].d.Vy STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_850(DATA *data, threadData_t *threadData);


/*
equation index: 317
type: SIMPLE_ASSIGN
d[3].ctrl.destX = 0.0
*/
void System_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  (data->localData[0]->realVars[772]/* d[3].ctrl.destX DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
$PRE.d[3].ctrl.destX = d[3].ctrl.destX
*/
void System_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  (data->simulationInfo->realVarsPre[772]/* d[3].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[772]/* d[3].ctrl.destX DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 319
type: SIMPLE_ASSIGN
d[3].d.Vx = 0.0
*/
void System_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  (data->localData[0]->realVars[2]/* d[3].d.Vx STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_552(DATA *data, threadData_t *threadData);


/*
equation index: 321
type: SIMPLE_ASSIGN
d[3].d.x = d[3].d.p.docking_bay[1]
*/
void System_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  (data->localData[0]->realVars[23]/* d[3].d.x STATE(1,d[3].d.Vx) */)  = (data->simulationInfo->realParameter[2797]/* d[3].d.p.docking_bay[1] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_851(DATA *data, threadData_t *threadData);


/*
equation index: 323
type: SIMPLE_ASSIGN
d[3].ctrl.Trustx = d[3].ctrl.prm.m * (d[3].ctrl.kx1 * (d[3].ctrl.x - $PRE.d[3].ctrl.destX) + d[3].ctrl.kx2 * d[3].d.Vx)
*/
void System_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  (data->localData[0]->realVars[168]/* d[3].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1925]/* d[3].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1057]/* d[3].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[210]/* d[3].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[772]/* d[3].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[1064]/* d[3].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[2]/* d[3].d.Vx STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_853(DATA *data, threadData_t *threadData);


/*
equation index: 325
type: SIMPLE_ASSIGN
$PRE.d[2].d.battery = $START.d[2].d.battery
*/
void System_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  (data->simulationInfo->realVarsPre[792]/* d[2].d.battery DISCRETE */)  = (data->modelData->realVarsData[792]/* d[2].d.battery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
$PRE.d[2].d.droneState = $START.d[2].d.droneState
*/
void System_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  (data->simulationInfo->integerVarsPre[58]/* d[2].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[58]/* d[2].d.droneState DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 327
type: ALGORITHM

  d[2].d.droneDead := $START.d[2].d.droneDead;
  d[2].d.droneState := $START.d[2].d.droneState;
  d[2].d.battery := $START.d[2].d.battery;
  $whenCondition75 := $START.$whenCondition75;
  $whenCondition74 := $START.$whenCondition74;
  $whenCondition74 := abs($PRE.d[2].d.battery) < 0.01;
  $whenCondition75 := false;
  d[2].d.battery := d[2].d.p.capacity;
  d[2].d.droneState := 1;
  d[2].d.droneDead := false;
*/
void System_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  modelica_boolean tmp118;
  (data->localData[0]->booleanVars[210]/* d[2].d.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[210]/* d[2].d.droneDead DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[58]/* d[2].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[58]/* d[2].d.droneState DISCRETE */).attribute .start;

  (data->localData[0]->realVars[792]/* d[2].d.battery DISCRETE */)  = (data->modelData->realVarsData[792]/* d[2].d.battery DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[72]/* $whenCondition75 DISCRETE */)  = (data->modelData->booleanVarsData[72]/* $whenCondition75 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[71]/* $whenCondition74 DISCRETE */)  = (data->modelData->booleanVarsData[71]/* $whenCondition74 DISCRETE */).attribute .start;

  tmp118 = Less(fabs((data->simulationInfo->realVarsPre[792]/* d[2].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[71]/* $whenCondition74 DISCRETE */)  = tmp118;

  (data->localData[0]->booleanVars[72]/* $whenCondition75 DISCRETE */)  = 0;

  (data->localData[0]->realVars[792]/* d[2].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[2736]/* d[2].d.p.capacity PARAM */) ;

  (data->localData[0]->integerVars[58]/* d[2].d.droneState DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->booleanVars[210]/* d[2].d.droneDead DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_776(DATA *data, threadData_t *threadData);

extern void System_eqFunction_798(DATA *data, threadData_t *threadData);


/*
equation index: 330
type: SIMPLE_ASSIGN
d[2].ctrl.destZ = 0.0
*/
void System_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  (data->localData[0]->realVars[785]/* d[2].ctrl.destZ DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
$PRE.d[2].ctrl.destZ = d[2].ctrl.destZ
*/
void System_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  (data->simulationInfo->realVarsPre[785]/* d[2].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[785]/* d[2].ctrl.destZ DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
d[2].d.Vz = 0.0
*/
void System_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  (data->localData[0]->realVars[15]/* d[2].d.Vz STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_555(DATA *data, threadData_t *threadData);


/*
equation index: 334
type: SIMPLE_ASSIGN
d[2].d.z = d[2].d.p.docking_bay[3] + d[2].d.p.dDistance * (*Real*)(d[2].d.drone_id)
*/
void System_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  (data->localData[0]->realVars[36]/* d[2].d.z STATE(1,d[2].d.Vz) */)  = (data->simulationInfo->realParameter[2796]/* d[2].d.p.docking_bay[3] PARAM */)  + ((data->simulationInfo->realParameter[2764]/* d[2].d.p.dDistance PARAM */) ) * (((modelica_real)(data->simulationInfo->integerParameter[61]/* d[2].d.drone_id PARAM */) ));
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
d[2].ctrl.Trustz = d[2].ctrl.prm.m * (9.81 + d[2].ctrl.kz1 * (d[2].d.z - $PRE.d[2].ctrl.destZ) + d[2].ctrl.kz2 * d[2].d.Vz)
*/
void System_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  (data->localData[0]->realVars[181]/* d[2].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1924]/* d[2].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[1084]/* d[2].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[36]/* d[2].d.z STATE(1,d[2].d.Vz) */)  - (data->simulationInfo->realVarsPre[785]/* d[2].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[1091]/* d[2].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[15]/* d[2].d.Vz STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_554(DATA *data, threadData_t *threadData);


/*
equation index: 337
type: SIMPLE_ASSIGN
d[2].ctrl.destY = 0.0
*/
void System_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  (data->localData[0]->realVars[778]/* d[2].ctrl.destY DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
$PRE.d[2].ctrl.destY = d[2].ctrl.destY
*/
void System_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  (data->simulationInfo->realVarsPre[778]/* d[2].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[778]/* d[2].ctrl.destY DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
d[2].d.Vy = 0.0
*/
void System_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  (data->localData[0]->realVars[8]/* d[2].d.Vy STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_556(DATA *data, threadData_t *threadData);


/*
equation index: 341
type: SIMPLE_ASSIGN
d[2].d.y = d[2].d.p.docking_bay[2]
*/
void System_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  (data->localData[0]->realVars[29]/* d[2].d.y STATE(1,d[2].d.Vy) */)  = (data->simulationInfo->realParameter[2795]/* d[2].d.p.docking_bay[2] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_854(DATA *data, threadData_t *threadData);


/*
equation index: 343
type: SIMPLE_ASSIGN
d[2].ctrl.Trusty = d[2].ctrl.prm.m * (d[2].ctrl.ky1 * (d[2].ctrl.y - $PRE.d[2].ctrl.destY) + d[2].ctrl.ky2 * d[2].d.Vy)
*/
void System_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  (data->localData[0]->realVars[174]/* d[2].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1924]/* d[2].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1070]/* d[2].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[216]/* d[2].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[778]/* d[2].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[1077]/* d[2].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[8]/* d[2].d.Vy STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_856(DATA *data, threadData_t *threadData);


/*
equation index: 345
type: SIMPLE_ASSIGN
d[2].ctrl.destX = 0.0
*/
void System_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  (data->localData[0]->realVars[771]/* d[2].ctrl.destX DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
$PRE.d[2].ctrl.destX = d[2].ctrl.destX
*/
void System_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  (data->simulationInfo->realVarsPre[771]/* d[2].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[771]/* d[2].ctrl.destX DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
d[2].d.Vx = 0.0
*/
void System_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  (data->localData[0]->realVars[1]/* d[2].d.Vx STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_557(DATA *data, threadData_t *threadData);


/*
equation index: 349
type: SIMPLE_ASSIGN
d[2].d.x = d[2].d.p.docking_bay[1]
*/
void System_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  (data->localData[0]->realVars[22]/* d[2].d.x STATE(1,d[2].d.Vx) */)  = (data->simulationInfo->realParameter[2794]/* d[2].d.p.docking_bay[1] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_857(DATA *data, threadData_t *threadData);


/*
equation index: 351
type: SIMPLE_ASSIGN
d[2].ctrl.Trustx = d[2].ctrl.prm.m * (d[2].ctrl.kx1 * (d[2].ctrl.x - $PRE.d[2].ctrl.destX) + d[2].ctrl.kx2 * d[2].d.Vx)
*/
void System_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  (data->localData[0]->realVars[167]/* d[2].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1924]/* d[2].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1056]/* d[2].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[209]/* d[2].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[771]/* d[2].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[1063]/* d[2].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[1]/* d[2].d.Vx STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_859(DATA *data, threadData_t *threadData);


/*
equation index: 353
type: SIMPLE_ASSIGN
$PRE.d[1].d.battery = $START.d[1].d.battery
*/
void System_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  (data->simulationInfo->realVarsPre[791]/* d[1].d.battery DISCRETE */)  = (data->modelData->realVarsData[791]/* d[1].d.battery DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
$PRE.d[1].d.droneState = $START.d[1].d.droneState
*/
void System_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  (data->simulationInfo->integerVarsPre[57]/* d[1].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[57]/* d[1].d.droneState DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 355
type: ALGORITHM

  d[1].d.droneDead := $START.d[1].d.droneDead;
  d[1].d.droneState := $START.d[1].d.droneState;
  d[1].d.battery := $START.d[1].d.battery;
  $whenCondition80 := $START.$whenCondition80;
  $whenCondition79 := $START.$whenCondition79;
  $whenCondition79 := abs($PRE.d[1].d.battery) < 0.01;
  $whenCondition80 := false;
  d[1].d.battery := d[1].d.p.capacity;
  d[1].d.droneState := 1;
  d[1].d.droneDead := false;
*/
void System_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  modelica_boolean tmp119;
  (data->localData[0]->booleanVars[209]/* d[1].d.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[209]/* d[1].d.droneDead DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[57]/* d[1].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[57]/* d[1].d.droneState DISCRETE */).attribute .start;

  (data->localData[0]->realVars[791]/* d[1].d.battery DISCRETE */)  = (data->modelData->realVarsData[791]/* d[1].d.battery DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[78]/* $whenCondition80 DISCRETE */)  = (data->modelData->booleanVarsData[78]/* $whenCondition80 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[76]/* $whenCondition79 DISCRETE */)  = (data->modelData->booleanVarsData[76]/* $whenCondition79 DISCRETE */).attribute .start;

  tmp119 = Less(fabs((data->simulationInfo->realVarsPre[791]/* d[1].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[76]/* $whenCondition79 DISCRETE */)  = tmp119;

  (data->localData[0]->booleanVars[78]/* $whenCondition80 DISCRETE */)  = 0;

  (data->localData[0]->realVars[791]/* d[1].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[2735]/* d[1].d.p.capacity PARAM */) ;

  (data->localData[0]->integerVars[57]/* d[1].d.droneState DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->booleanVars[209]/* d[1].d.droneDead DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_823(DATA *data, threadData_t *threadData);

extern void System_eqFunction_822(DATA *data, threadData_t *threadData);


/*
equation index: 358
type: SIMPLE_ASSIGN
d[1].ctrl.destZ = 0.0
*/
void System_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  (data->localData[0]->realVars[784]/* d[1].ctrl.destZ DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.destZ = d[1].ctrl.destZ
*/
void System_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  (data->simulationInfo->realVarsPre[784]/* d[1].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[784]/* d[1].ctrl.destZ DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
d[1].d.Vz = 0.0
*/
void System_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  (data->localData[0]->realVars[14]/* d[1].d.Vz STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_560(DATA *data, threadData_t *threadData);


/*
equation index: 362
type: SIMPLE_ASSIGN
d[1].d.z = d[1].d.p.docking_bay[3] + d[1].d.p.dDistance * (*Real*)(d[1].d.drone_id)
*/
void System_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  (data->localData[0]->realVars[35]/* d[1].d.z STATE(1,d[1].d.Vz) */)  = (data->simulationInfo->realParameter[2793]/* d[1].d.p.docking_bay[3] PARAM */)  + ((data->simulationInfo->realParameter[2763]/* d[1].d.p.dDistance PARAM */) ) * (((modelica_real)(data->simulationInfo->integerParameter[60]/* d[1].d.drone_id PARAM */) ));
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
d[1].ctrl.Trustz = d[1].ctrl.prm.m * (9.81 + d[1].ctrl.kz1 * (d[1].d.z - $PRE.d[1].ctrl.destZ) + d[1].ctrl.kz2 * d[1].d.Vz)
*/
void System_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  (data->localData[0]->realVars[180]/* d[1].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1923]/* d[1].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[1083]/* d[1].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[35]/* d[1].d.z STATE(1,d[1].d.Vz) */)  - (data->simulationInfo->realVarsPre[784]/* d[1].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[1090]/* d[1].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[14]/* d[1].d.Vz STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_559(DATA *data, threadData_t *threadData);


/*
equation index: 365
type: SIMPLE_ASSIGN
d[1].ctrl.destY = 0.0
*/
void System_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  (data->localData[0]->realVars[777]/* d[1].ctrl.destY DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.destY = d[1].ctrl.destY
*/
void System_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  (data->simulationInfo->realVarsPre[777]/* d[1].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[777]/* d[1].ctrl.destY DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
d[1].d.Vy = 0.0
*/
void System_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  (data->localData[0]->realVars[7]/* d[1].d.Vy STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_561(DATA *data, threadData_t *threadData);


/*
equation index: 369
type: SIMPLE_ASSIGN
d[1].d.y = d[1].d.p.docking_bay[2]
*/
void System_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  (data->localData[0]->realVars[28]/* d[1].d.y STATE(1,d[1].d.Vy) */)  = (data->simulationInfo->realParameter[2792]/* d[1].d.p.docking_bay[2] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_860(DATA *data, threadData_t *threadData);


/*
equation index: 371
type: SIMPLE_ASSIGN
d[1].ctrl.Trusty = d[1].ctrl.prm.m * (d[1].ctrl.ky1 * (d[1].ctrl.y - $PRE.d[1].ctrl.destY) + d[1].ctrl.ky2 * d[1].d.Vy)
*/
void System_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  (data->localData[0]->realVars[173]/* d[1].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1923]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1069]/* d[1].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[215]/* d[1].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[777]/* d[1].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[1076]/* d[1].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[7]/* d[1].d.Vy STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_862(DATA *data, threadData_t *threadData);


/*
equation index: 373
type: SIMPLE_ASSIGN
d[1].ctrl.destX = 0.0
*/
void System_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  (data->localData[0]->realVars[770]/* d[1].ctrl.destX DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.destX = d[1].ctrl.destX
*/
void System_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  (data->simulationInfo->realVarsPre[770]/* d[1].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[770]/* d[1].ctrl.destX DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
d[1].d.Vx = 0.0
*/
void System_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  (data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_562(DATA *data, threadData_t *threadData);


/*
equation index: 377
type: SIMPLE_ASSIGN
d[1].d.x = d[1].d.p.docking_bay[1]
*/
void System_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  (data->localData[0]->realVars[21]/* d[1].d.x STATE(1,d[1].d.Vx) */)  = (data->simulationInfo->realParameter[2791]/* d[1].d.p.docking_bay[1] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_863(DATA *data, threadData_t *threadData);


/*
equation index: 379
type: SIMPLE_ASSIGN
d[1].ctrl.Trustx = d[1].ctrl.prm.m * (d[1].ctrl.kx1 * (d[1].ctrl.x - $PRE.d[1].ctrl.destX) + d[1].ctrl.kx2 * d[1].d.Vx)
*/
void System_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  (data->localData[0]->realVars[166]/* d[1].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1923]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1055]/* d[1].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[208]/* d[1].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[770]/* d[1].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[1062]/* d[1].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */) ));
  TRACE_POP
}
extern void System_eqFunction_865(DATA *data, threadData_t *threadData);


/*
equation index: 381
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[7].writesigint = $START.drone_to_cc[7].writesigint
*/
void System_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  (data->simulationInfo->booleanVarsPre[278]/* drone_to_cc[7].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[278]/* drone_to_cc[7].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[7].readsigint = $START.drone_to_cc[7].readsigint
*/
void System_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  (data->simulationInfo->booleanVarsPre[257]/* drone_to_cc[7].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[257]/* drone_to_cc[7].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[7].fifosize = $START.drone_to_cc[7].fifosize
*/
void System_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  (data->simulationInfo->integerVarsPre[84]/* drone_to_cc[7].fifosize DISCRETE */)  = (data->modelData->integerVarsData[84]/* drone_to_cc[7].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 384
type: ALGORITHM

  drone_to_cc[7].newest := $START.drone_to_cc[7].newest;
  drone_to_cc[7].oldest := $START.drone_to_cc[7].oldest;
  drone_to_cc[7].fifosize := $START.drone_to_cc[7].fifosize;
  drone_to_cc[7].fifo[10,5] := $START.drone_to_cc[7].fifo[10,5];
  drone_to_cc[7].fifo[10,4] := $START.drone_to_cc[7].fifo[10,4];
  drone_to_cc[7].fifo[10,3] := $START.drone_to_cc[7].fifo[10,3];
  drone_to_cc[7].fifo[10,2] := $START.drone_to_cc[7].fifo[10,2];
  drone_to_cc[7].fifo[10,1] := $START.drone_to_cc[7].fifo[10,1];
  drone_to_cc[7].fifo[9,5] := $START.drone_to_cc[7].fifo[9,5];
  drone_to_cc[7].fifo[9,4] := $START.drone_to_cc[7].fifo[9,4];
  drone_to_cc[7].fifo[9,3] := $START.drone_to_cc[7].fifo[9,3];
  drone_to_cc[7].fifo[9,2] := $START.drone_to_cc[7].fifo[9,2];
  drone_to_cc[7].fifo[9,1] := $START.drone_to_cc[7].fifo[9,1];
  drone_to_cc[7].fifo[8,5] := $START.drone_to_cc[7].fifo[8,5];
  drone_to_cc[7].fifo[8,4] := $START.drone_to_cc[7].fifo[8,4];
  drone_to_cc[7].fifo[8,3] := $START.drone_to_cc[7].fifo[8,3];
  drone_to_cc[7].fifo[8,2] := $START.drone_to_cc[7].fifo[8,2];
  drone_to_cc[7].fifo[8,1] := $START.drone_to_cc[7].fifo[8,1];
  drone_to_cc[7].fifo[7,5] := $START.drone_to_cc[7].fifo[7,5];
  drone_to_cc[7].fifo[7,4] := $START.drone_to_cc[7].fifo[7,4];
  drone_to_cc[7].fifo[7,3] := $START.drone_to_cc[7].fifo[7,3];
  drone_to_cc[7].fifo[7,2] := $START.drone_to_cc[7].fifo[7,2];
  drone_to_cc[7].fifo[7,1] := $START.drone_to_cc[7].fifo[7,1];
  drone_to_cc[7].fifo[6,5] := $START.drone_to_cc[7].fifo[6,5];
  drone_to_cc[7].fifo[6,4] := $START.drone_to_cc[7].fifo[6,4];
  drone_to_cc[7].fifo[6,3] := $START.drone_to_cc[7].fifo[6,3];
  drone_to_cc[7].fifo[6,2] := $START.drone_to_cc[7].fifo[6,2];
  drone_to_cc[7].fifo[6,1] := $START.drone_to_cc[7].fifo[6,1];
  drone_to_cc[7].fifo[5,5] := $START.drone_to_cc[7].fifo[5,5];
  drone_to_cc[7].fifo[5,4] := $START.drone_to_cc[7].fifo[5,4];
  drone_to_cc[7].fifo[5,3] := $START.drone_to_cc[7].fifo[5,3];
  drone_to_cc[7].fifo[5,2] := $START.drone_to_cc[7].fifo[5,2];
  drone_to_cc[7].fifo[5,1] := $START.drone_to_cc[7].fifo[5,1];
  drone_to_cc[7].fifo[4,5] := $START.drone_to_cc[7].fifo[4,5];
  drone_to_cc[7].fifo[4,4] := $START.drone_to_cc[7].fifo[4,4];
  drone_to_cc[7].fifo[4,3] := $START.drone_to_cc[7].fifo[4,3];
  drone_to_cc[7].fifo[4,2] := $START.drone_to_cc[7].fifo[4,2];
  drone_to_cc[7].fifo[4,1] := $START.drone_to_cc[7].fifo[4,1];
  drone_to_cc[7].fifo[3,5] := $START.drone_to_cc[7].fifo[3,5];
  drone_to_cc[7].fifo[3,4] := $START.drone_to_cc[7].fifo[3,4];
  drone_to_cc[7].fifo[3,3] := $START.drone_to_cc[7].fifo[3,3];
  drone_to_cc[7].fifo[3,2] := $START.drone_to_cc[7].fifo[3,2];
  drone_to_cc[7].fifo[3,1] := $START.drone_to_cc[7].fifo[3,1];
  drone_to_cc[7].fifo[2,5] := $START.drone_to_cc[7].fifo[2,5];
  drone_to_cc[7].fifo[2,4] := $START.drone_to_cc[7].fifo[2,4];
  drone_to_cc[7].fifo[2,3] := $START.drone_to_cc[7].fifo[2,3];
  drone_to_cc[7].fifo[2,2] := $START.drone_to_cc[7].fifo[2,2];
  drone_to_cc[7].fifo[2,1] := $START.drone_to_cc[7].fifo[2,1];
  drone_to_cc[7].fifo[1,5] := $START.drone_to_cc[7].fifo[1,5];
  drone_to_cc[7].fifo[1,4] := $START.drone_to_cc[7].fifo[1,4];
  drone_to_cc[7].fifo[1,3] := $START.drone_to_cc[7].fifo[1,3];
  drone_to_cc[7].fifo[1,2] := $START.drone_to_cc[7].fifo[1,2];
  drone_to_cc[7].fifo[1,1] := $START.drone_to_cc[7].fifo[1,1];
  drone_to_cc[7].spaceavailable := $START.drone_to_cc[7].spaceavailable;
  drone_to_cc[7].outputdata[5] := $START.drone_to_cc[7].outputdata[5];
  drone_to_cc[7].outputdata[4] := $START.drone_to_cc[7].outputdata[4];
  drone_to_cc[7].outputdata[3] := $START.drone_to_cc[7].outputdata[3];
  drone_to_cc[7].outputdata[2] := $START.drone_to_cc[7].outputdata[2];
  drone_to_cc[7].outputdata[1] := $START.drone_to_cc[7].outputdata[1];
  drone_to_cc[7].datavailable := $START.drone_to_cc[7].datavailable;
  $whenCondition3 := $START.$whenCondition3;
  $whenCondition2 := $START.$whenCondition2;
  $whenCondition1 := $START.$whenCondition1;
  $whenCondition1 := $PRE.drone_to_cc[7].readsigint and $PRE.drone_to_cc[7].writesigint;
  $whenCondition2 := $PRE.drone_to_cc[7].readsigint and not $PRE.drone_to_cc[7].writesigint and $PRE.drone_to_cc[7].fifosize >= 1;
  $whenCondition3 := not $PRE.drone_to_cc[7].readsigint and $PRE.drone_to_cc[7].writesigint and $PRE.drone_to_cc[7].fifosize < 10;
  drone_to_cc[7].datavailable := false;
  for j in 1:5 loop
    drone_to_cc[7].outputdata[j] := 0.0;
  end for;
  drone_to_cc[7].spaceavailable := true;
  for i in 1:10 loop
    for j in 1:5 loop
      drone_to_cc[7].fifo[i,j] := 0.0;
    end for;
  end for;
  drone_to_cc[7].fifosize := 0;
  drone_to_cc[7].oldest := 1;
  drone_to_cc[7].newest := 1;
*/
void System_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  modelica_integer tmp122;
  modelica_integer tmp123;
  modelica_integer tmp124;
  modelica_integer tmp125;
  modelica_integer tmp126;
  modelica_integer tmp127;
  modelica_integer tmp128;
  modelica_integer tmp129;
  modelica_integer tmp130;
  (data->localData[0]->integerVars[91]/* drone_to_cc[7].newest DISCRETE */)  = (data->modelData->integerVarsData[91]/* drone_to_cc[7].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[98]/* drone_to_cc[7].oldest DISCRETE */)  = (data->modelData->integerVarsData[98]/* drone_to_cc[7].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[84]/* drone_to_cc[7].fifosize DISCRETE */)  = (data->modelData->integerVarsData[84]/* drone_to_cc[7].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1203]/* drone_to_cc[7].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[1203]/* drone_to_cc[7].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1202]/* drone_to_cc[7].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[1202]/* drone_to_cc[7].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1201]/* drone_to_cc[7].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[1201]/* drone_to_cc[7].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1200]/* drone_to_cc[7].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[1200]/* drone_to_cc[7].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1199]/* drone_to_cc[7].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[1199]/* drone_to_cc[7].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1198]/* drone_to_cc[7].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[1198]/* drone_to_cc[7].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1197]/* drone_to_cc[7].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[1197]/* drone_to_cc[7].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1196]/* drone_to_cc[7].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[1196]/* drone_to_cc[7].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1195]/* drone_to_cc[7].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[1195]/* drone_to_cc[7].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1194]/* drone_to_cc[7].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[1194]/* drone_to_cc[7].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1193]/* drone_to_cc[7].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[1193]/* drone_to_cc[7].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1192]/* drone_to_cc[7].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[1192]/* drone_to_cc[7].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1191]/* drone_to_cc[7].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[1191]/* drone_to_cc[7].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1190]/* drone_to_cc[7].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[1190]/* drone_to_cc[7].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1189]/* drone_to_cc[7].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[1189]/* drone_to_cc[7].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1188]/* drone_to_cc[7].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[1188]/* drone_to_cc[7].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1187]/* drone_to_cc[7].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[1187]/* drone_to_cc[7].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1186]/* drone_to_cc[7].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[1186]/* drone_to_cc[7].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1185]/* drone_to_cc[7].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[1185]/* drone_to_cc[7].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1184]/* drone_to_cc[7].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[1184]/* drone_to_cc[7].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1183]/* drone_to_cc[7].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[1183]/* drone_to_cc[7].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1182]/* drone_to_cc[7].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[1182]/* drone_to_cc[7].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1181]/* drone_to_cc[7].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[1181]/* drone_to_cc[7].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1180]/* drone_to_cc[7].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[1180]/* drone_to_cc[7].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1179]/* drone_to_cc[7].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[1179]/* drone_to_cc[7].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1178]/* drone_to_cc[7].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[1178]/* drone_to_cc[7].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1177]/* drone_to_cc[7].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[1177]/* drone_to_cc[7].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1176]/* drone_to_cc[7].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[1176]/* drone_to_cc[7].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1175]/* drone_to_cc[7].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[1175]/* drone_to_cc[7].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1174]/* drone_to_cc[7].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[1174]/* drone_to_cc[7].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1173]/* drone_to_cc[7].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[1173]/* drone_to_cc[7].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1172]/* drone_to_cc[7].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[1172]/* drone_to_cc[7].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1171]/* drone_to_cc[7].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[1171]/* drone_to_cc[7].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1170]/* drone_to_cc[7].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[1170]/* drone_to_cc[7].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1169]/* drone_to_cc[7].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[1169]/* drone_to_cc[7].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1168]/* drone_to_cc[7].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[1168]/* drone_to_cc[7].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1167]/* drone_to_cc[7].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[1167]/* drone_to_cc[7].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1166]/* drone_to_cc[7].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[1166]/* drone_to_cc[7].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1165]/* drone_to_cc[7].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[1165]/* drone_to_cc[7].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1164]/* drone_to_cc[7].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[1164]/* drone_to_cc[7].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1163]/* drone_to_cc[7].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[1163]/* drone_to_cc[7].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1162]/* drone_to_cc[7].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[1162]/* drone_to_cc[7].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1161]/* drone_to_cc[7].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[1161]/* drone_to_cc[7].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1160]/* drone_to_cc[7].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[1160]/* drone_to_cc[7].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1159]/* drone_to_cc[7].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[1159]/* drone_to_cc[7].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1158]/* drone_to_cc[7].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[1158]/* drone_to_cc[7].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1157]/* drone_to_cc[7].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[1157]/* drone_to_cc[7].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1156]/* drone_to_cc[7].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[1156]/* drone_to_cc[7].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1155]/* drone_to_cc[7].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[1155]/* drone_to_cc[7].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1154]/* drone_to_cc[7].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[1154]/* drone_to_cc[7].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[271]/* drone_to_cc[7].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[271]/* drone_to_cc[7].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1238]/* drone_to_cc[7].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[1238]/* drone_to_cc[7].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1237]/* drone_to_cc[7].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[1237]/* drone_to_cc[7].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1236]/* drone_to_cc[7].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[1236]/* drone_to_cc[7].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1235]/* drone_to_cc[7].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[1235]/* drone_to_cc[7].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1234]/* drone_to_cc[7].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[1234]/* drone_to_cc[7].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[250]/* drone_to_cc[7].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[250]/* drone_to_cc[7].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[22]/* $whenCondition3 DISCRETE */)  = (data->modelData->booleanVarsData[22]/* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[11]/* $whenCondition2 DISCRETE */)  = (data->modelData->booleanVarsData[11]/* $whenCondition2 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = (data->modelData->booleanVarsData[0]/* $whenCondition1 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[257]/* drone_to_cc[7].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[278]/* drone_to_cc[7].writesigint DISCRETE */) );

  tmp120 = GreaterEq((data->simulationInfo->integerVarsPre[84]/* drone_to_cc[7].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[11]/* $whenCondition2 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[257]/* drone_to_cc[7].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[278]/* drone_to_cc[7].writesigint DISCRETE */) )) && tmp120);

  tmp121 = Less((data->simulationInfo->integerVarsPre[84]/* drone_to_cc[7].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[22]/* $whenCondition3 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[257]/* drone_to_cc[7].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[278]/* drone_to_cc[7].writesigint DISCRETE */) ) && tmp121);

  (data->localData[0]->booleanVars[250]/* drone_to_cc[7].datavailable DISCRETE */)  = 0;

  tmp122 = ((modelica_integer) 1); tmp123 = 1; tmp124 = ((modelica_integer) 5);
  if(!(((tmp123 > 0) && (tmp122 > tmp124)) || ((tmp123 < 0) && (tmp122 < tmp124))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp122, tmp124); j += tmp123)
    {
      (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 7) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[271]/* drone_to_cc[7].spaceavailable DISCRETE */)  = 1;

  tmp128 = ((modelica_integer) 1); tmp129 = 1; tmp130 = ((modelica_integer) 10);
  if(!(((tmp129 > 0) && (tmp128 > tmp130)) || ((tmp129 < 0) && (tmp128 < tmp130))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp128, tmp130); i += tmp129)
    {
      tmp125 = ((modelica_integer) 1); tmp126 = 1; tmp127 = ((modelica_integer) 5);
      if(!(((tmp126 > 0) && (tmp125 > tmp127)) || ((tmp126 < 0) && (tmp125 < tmp127))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp125, tmp127); j += tmp126)
        {
          (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 7) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[84]/* drone_to_cc[7].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[98]/* drone_to_cc[7].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[91]/* drone_to_cc[7].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_669(DATA *data, threadData_t *threadData);

extern void System_eqFunction_671(DATA *data, threadData_t *threadData);

extern void System_eqFunction_668(DATA *data, threadData_t *threadData);

extern void System_eqFunction_665(DATA *data, threadData_t *threadData);

extern void System_eqFunction_667(DATA *data, threadData_t *threadData);

extern void System_eqFunction_666(DATA *data, threadData_t *threadData);

extern void System_eqFunction_670(DATA *data, threadData_t *threadData);


/*
equation index: 392
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[6].writesigint = $START.drone_to_cc[6].writesigint
*/
void System_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  (data->simulationInfo->booleanVarsPre[277]/* drone_to_cc[6].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[277]/* drone_to_cc[6].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[6].readsigint = $START.drone_to_cc[6].readsigint
*/
void System_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  (data->simulationInfo->booleanVarsPre[256]/* drone_to_cc[6].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[256]/* drone_to_cc[6].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[6].fifosize = $START.drone_to_cc[6].fifosize
*/
void System_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  (data->simulationInfo->integerVarsPre[83]/* drone_to_cc[6].fifosize DISCRETE */)  = (data->modelData->integerVarsData[83]/* drone_to_cc[6].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 395
type: ALGORITHM

  drone_to_cc[6].newest := $START.drone_to_cc[6].newest;
  drone_to_cc[6].oldest := $START.drone_to_cc[6].oldest;
  drone_to_cc[6].fifosize := $START.drone_to_cc[6].fifosize;
  drone_to_cc[6].fifo[10,5] := $START.drone_to_cc[6].fifo[10,5];
  drone_to_cc[6].fifo[10,4] := $START.drone_to_cc[6].fifo[10,4];
  drone_to_cc[6].fifo[10,3] := $START.drone_to_cc[6].fifo[10,3];
  drone_to_cc[6].fifo[10,2] := $START.drone_to_cc[6].fifo[10,2];
  drone_to_cc[6].fifo[10,1] := $START.drone_to_cc[6].fifo[10,1];
  drone_to_cc[6].fifo[9,5] := $START.drone_to_cc[6].fifo[9,5];
  drone_to_cc[6].fifo[9,4] := $START.drone_to_cc[6].fifo[9,4];
  drone_to_cc[6].fifo[9,3] := $START.drone_to_cc[6].fifo[9,3];
  drone_to_cc[6].fifo[9,2] := $START.drone_to_cc[6].fifo[9,2];
  drone_to_cc[6].fifo[9,1] := $START.drone_to_cc[6].fifo[9,1];
  drone_to_cc[6].fifo[8,5] := $START.drone_to_cc[6].fifo[8,5];
  drone_to_cc[6].fifo[8,4] := $START.drone_to_cc[6].fifo[8,4];
  drone_to_cc[6].fifo[8,3] := $START.drone_to_cc[6].fifo[8,3];
  drone_to_cc[6].fifo[8,2] := $START.drone_to_cc[6].fifo[8,2];
  drone_to_cc[6].fifo[8,1] := $START.drone_to_cc[6].fifo[8,1];
  drone_to_cc[6].fifo[7,5] := $START.drone_to_cc[6].fifo[7,5];
  drone_to_cc[6].fifo[7,4] := $START.drone_to_cc[6].fifo[7,4];
  drone_to_cc[6].fifo[7,3] := $START.drone_to_cc[6].fifo[7,3];
  drone_to_cc[6].fifo[7,2] := $START.drone_to_cc[6].fifo[7,2];
  drone_to_cc[6].fifo[7,1] := $START.drone_to_cc[6].fifo[7,1];
  drone_to_cc[6].fifo[6,5] := $START.drone_to_cc[6].fifo[6,5];
  drone_to_cc[6].fifo[6,4] := $START.drone_to_cc[6].fifo[6,4];
  drone_to_cc[6].fifo[6,3] := $START.drone_to_cc[6].fifo[6,3];
  drone_to_cc[6].fifo[6,2] := $START.drone_to_cc[6].fifo[6,2];
  drone_to_cc[6].fifo[6,1] := $START.drone_to_cc[6].fifo[6,1];
  drone_to_cc[6].fifo[5,5] := $START.drone_to_cc[6].fifo[5,5];
  drone_to_cc[6].fifo[5,4] := $START.drone_to_cc[6].fifo[5,4];
  drone_to_cc[6].fifo[5,3] := $START.drone_to_cc[6].fifo[5,3];
  drone_to_cc[6].fifo[5,2] := $START.drone_to_cc[6].fifo[5,2];
  drone_to_cc[6].fifo[5,1] := $START.drone_to_cc[6].fifo[5,1];
  drone_to_cc[6].fifo[4,5] := $START.drone_to_cc[6].fifo[4,5];
  drone_to_cc[6].fifo[4,4] := $START.drone_to_cc[6].fifo[4,4];
  drone_to_cc[6].fifo[4,3] := $START.drone_to_cc[6].fifo[4,3];
  drone_to_cc[6].fifo[4,2] := $START.drone_to_cc[6].fifo[4,2];
  drone_to_cc[6].fifo[4,1] := $START.drone_to_cc[6].fifo[4,1];
  drone_to_cc[6].fifo[3,5] := $START.drone_to_cc[6].fifo[3,5];
  drone_to_cc[6].fifo[3,4] := $START.drone_to_cc[6].fifo[3,4];
  drone_to_cc[6].fifo[3,3] := $START.drone_to_cc[6].fifo[3,3];
  drone_to_cc[6].fifo[3,2] := $START.drone_to_cc[6].fifo[3,2];
  drone_to_cc[6].fifo[3,1] := $START.drone_to_cc[6].fifo[3,1];
  drone_to_cc[6].fifo[2,5] := $START.drone_to_cc[6].fifo[2,5];
  drone_to_cc[6].fifo[2,4] := $START.drone_to_cc[6].fifo[2,4];
  drone_to_cc[6].fifo[2,3] := $START.drone_to_cc[6].fifo[2,3];
  drone_to_cc[6].fifo[2,2] := $START.drone_to_cc[6].fifo[2,2];
  drone_to_cc[6].fifo[2,1] := $START.drone_to_cc[6].fifo[2,1];
  drone_to_cc[6].fifo[1,5] := $START.drone_to_cc[6].fifo[1,5];
  drone_to_cc[6].fifo[1,4] := $START.drone_to_cc[6].fifo[1,4];
  drone_to_cc[6].fifo[1,3] := $START.drone_to_cc[6].fifo[1,3];
  drone_to_cc[6].fifo[1,2] := $START.drone_to_cc[6].fifo[1,2];
  drone_to_cc[6].fifo[1,1] := $START.drone_to_cc[6].fifo[1,1];
  drone_to_cc[6].spaceavailable := $START.drone_to_cc[6].spaceavailable;
  drone_to_cc[6].outputdata[5] := $START.drone_to_cc[6].outputdata[5];
  drone_to_cc[6].outputdata[4] := $START.drone_to_cc[6].outputdata[4];
  drone_to_cc[6].outputdata[3] := $START.drone_to_cc[6].outputdata[3];
  drone_to_cc[6].outputdata[2] := $START.drone_to_cc[6].outputdata[2];
  drone_to_cc[6].outputdata[1] := $START.drone_to_cc[6].outputdata[1];
  drone_to_cc[6].datavailable := $START.drone_to_cc[6].datavailable;
  $whenCondition6 := $START.$whenCondition6;
  $whenCondition5 := $START.$whenCondition5;
  $whenCondition4 := $START.$whenCondition4;
  $whenCondition4 := $PRE.drone_to_cc[6].readsigint and $PRE.drone_to_cc[6].writesigint;
  $whenCondition5 := $PRE.drone_to_cc[6].readsigint and not $PRE.drone_to_cc[6].writesigint and $PRE.drone_to_cc[6].fifosize >= 1;
  $whenCondition6 := not $PRE.drone_to_cc[6].readsigint and $PRE.drone_to_cc[6].writesigint and $PRE.drone_to_cc[6].fifosize < 10;
  drone_to_cc[6].datavailable := false;
  for j in 1:5 loop
    drone_to_cc[6].outputdata[j] := 0.0;
  end for;
  drone_to_cc[6].spaceavailable := true;
  for i in 1:10 loop
    for j in 1:5 loop
      drone_to_cc[6].fifo[i,j] := 0.0;
    end for;
  end for;
  drone_to_cc[6].fifosize := 0;
  drone_to_cc[6].oldest := 1;
  drone_to_cc[6].newest := 1;
*/
void System_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  modelica_boolean tmp131;
  modelica_boolean tmp132;
  modelica_integer tmp133;
  modelica_integer tmp134;
  modelica_integer tmp135;
  modelica_integer tmp136;
  modelica_integer tmp137;
  modelica_integer tmp138;
  modelica_integer tmp139;
  modelica_integer tmp140;
  modelica_integer tmp141;
  (data->localData[0]->integerVars[90]/* drone_to_cc[6].newest DISCRETE */)  = (data->modelData->integerVarsData[90]/* drone_to_cc[6].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[97]/* drone_to_cc[6].oldest DISCRETE */)  = (data->modelData->integerVarsData[97]/* drone_to_cc[6].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[83]/* drone_to_cc[6].fifosize DISCRETE */)  = (data->modelData->integerVarsData[83]/* drone_to_cc[6].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1153]/* drone_to_cc[6].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[1153]/* drone_to_cc[6].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1152]/* drone_to_cc[6].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[1152]/* drone_to_cc[6].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1151]/* drone_to_cc[6].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[1151]/* drone_to_cc[6].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1150]/* drone_to_cc[6].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[1150]/* drone_to_cc[6].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1149]/* drone_to_cc[6].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[1149]/* drone_to_cc[6].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1148]/* drone_to_cc[6].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[1148]/* drone_to_cc[6].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1147]/* drone_to_cc[6].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[1147]/* drone_to_cc[6].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1146]/* drone_to_cc[6].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[1146]/* drone_to_cc[6].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1145]/* drone_to_cc[6].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[1145]/* drone_to_cc[6].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1144]/* drone_to_cc[6].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[1144]/* drone_to_cc[6].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1143]/* drone_to_cc[6].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[1143]/* drone_to_cc[6].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1142]/* drone_to_cc[6].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[1142]/* drone_to_cc[6].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1141]/* drone_to_cc[6].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[1141]/* drone_to_cc[6].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1140]/* drone_to_cc[6].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[1140]/* drone_to_cc[6].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1139]/* drone_to_cc[6].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[1139]/* drone_to_cc[6].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1138]/* drone_to_cc[6].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[1138]/* drone_to_cc[6].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1137]/* drone_to_cc[6].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[1137]/* drone_to_cc[6].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1136]/* drone_to_cc[6].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[1136]/* drone_to_cc[6].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1135]/* drone_to_cc[6].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[1135]/* drone_to_cc[6].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1134]/* drone_to_cc[6].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[1134]/* drone_to_cc[6].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1133]/* drone_to_cc[6].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[1133]/* drone_to_cc[6].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1132]/* drone_to_cc[6].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[1132]/* drone_to_cc[6].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1131]/* drone_to_cc[6].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[1131]/* drone_to_cc[6].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1130]/* drone_to_cc[6].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[1130]/* drone_to_cc[6].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1129]/* drone_to_cc[6].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[1129]/* drone_to_cc[6].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1128]/* drone_to_cc[6].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[1128]/* drone_to_cc[6].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1127]/* drone_to_cc[6].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[1127]/* drone_to_cc[6].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1126]/* drone_to_cc[6].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[1126]/* drone_to_cc[6].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1125]/* drone_to_cc[6].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[1125]/* drone_to_cc[6].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1124]/* drone_to_cc[6].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[1124]/* drone_to_cc[6].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1123]/* drone_to_cc[6].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[1123]/* drone_to_cc[6].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1122]/* drone_to_cc[6].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[1122]/* drone_to_cc[6].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1121]/* drone_to_cc[6].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[1121]/* drone_to_cc[6].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1120]/* drone_to_cc[6].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[1120]/* drone_to_cc[6].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1119]/* drone_to_cc[6].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[1119]/* drone_to_cc[6].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1118]/* drone_to_cc[6].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[1118]/* drone_to_cc[6].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1117]/* drone_to_cc[6].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[1117]/* drone_to_cc[6].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1116]/* drone_to_cc[6].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[1116]/* drone_to_cc[6].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1115]/* drone_to_cc[6].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[1115]/* drone_to_cc[6].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1114]/* drone_to_cc[6].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[1114]/* drone_to_cc[6].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1113]/* drone_to_cc[6].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[1113]/* drone_to_cc[6].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1112]/* drone_to_cc[6].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[1112]/* drone_to_cc[6].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1111]/* drone_to_cc[6].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[1111]/* drone_to_cc[6].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1110]/* drone_to_cc[6].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[1110]/* drone_to_cc[6].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1109]/* drone_to_cc[6].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[1109]/* drone_to_cc[6].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1108]/* drone_to_cc[6].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[1108]/* drone_to_cc[6].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1107]/* drone_to_cc[6].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[1107]/* drone_to_cc[6].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1106]/* drone_to_cc[6].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[1106]/* drone_to_cc[6].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1105]/* drone_to_cc[6].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[1105]/* drone_to_cc[6].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1104]/* drone_to_cc[6].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[1104]/* drone_to_cc[6].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[270]/* drone_to_cc[6].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[270]/* drone_to_cc[6].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1233]/* drone_to_cc[6].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[1233]/* drone_to_cc[6].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1232]/* drone_to_cc[6].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[1232]/* drone_to_cc[6].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1231]/* drone_to_cc[6].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[1231]/* drone_to_cc[6].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1230]/* drone_to_cc[6].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[1230]/* drone_to_cc[6].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1229]/* drone_to_cc[6].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[1229]/* drone_to_cc[6].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[249]/* drone_to_cc[6].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[249]/* drone_to_cc[6].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[55]/* $whenCondition6 DISCRETE */)  = (data->modelData->booleanVarsData[55]/* $whenCondition6 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[44]/* $whenCondition5 DISCRETE */)  = (data->modelData->booleanVarsData[44]/* $whenCondition5 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[33]/* $whenCondition4 DISCRETE */)  = (data->modelData->booleanVarsData[33]/* $whenCondition4 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[33]/* $whenCondition4 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[256]/* drone_to_cc[6].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[277]/* drone_to_cc[6].writesigint DISCRETE */) );

  tmp131 = GreaterEq((data->simulationInfo->integerVarsPre[83]/* drone_to_cc[6].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[44]/* $whenCondition5 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[256]/* drone_to_cc[6].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[277]/* drone_to_cc[6].writesigint DISCRETE */) )) && tmp131);

  tmp132 = Less((data->simulationInfo->integerVarsPre[83]/* drone_to_cc[6].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[55]/* $whenCondition6 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[256]/* drone_to_cc[6].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[277]/* drone_to_cc[6].writesigint DISCRETE */) ) && tmp132);

  (data->localData[0]->booleanVars[249]/* drone_to_cc[6].datavailable DISCRETE */)  = 0;

  tmp133 = ((modelica_integer) 1); tmp134 = 1; tmp135 = ((modelica_integer) 5);
  if(!(((tmp134 > 0) && (tmp133 > tmp135)) || ((tmp134 < 0) && (tmp133 < tmp135))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp133, tmp135); j += tmp134)
    {
      (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 6) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[270]/* drone_to_cc[6].spaceavailable DISCRETE */)  = 1;

  tmp139 = ((modelica_integer) 1); tmp140 = 1; tmp141 = ((modelica_integer) 10);
  if(!(((tmp140 > 0) && (tmp139 > tmp141)) || ((tmp140 < 0) && (tmp139 < tmp141))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp139, tmp141); i += tmp140)
    {
      tmp136 = ((modelica_integer) 1); tmp137 = 1; tmp138 = ((modelica_integer) 5);
      if(!(((tmp137 > 0) && (tmp136 > tmp138)) || ((tmp137 < 0) && (tmp136 < tmp138))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp136, tmp138); j += tmp137)
        {
          (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 6) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[83]/* drone_to_cc[6].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[97]/* drone_to_cc[6].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[90]/* drone_to_cc[6].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_696(DATA *data, threadData_t *threadData);

extern void System_eqFunction_690(DATA *data, threadData_t *threadData);

extern void System_eqFunction_691(DATA *data, threadData_t *threadData);

extern void System_eqFunction_694(DATA *data, threadData_t *threadData);

extern void System_eqFunction_695(DATA *data, threadData_t *threadData);

extern void System_eqFunction_693(DATA *data, threadData_t *threadData);

extern void System_eqFunction_692(DATA *data, threadData_t *threadData);


/*
equation index: 403
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[5].writesigint = $START.drone_to_cc[5].writesigint
*/
void System_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  (data->simulationInfo->booleanVarsPre[276]/* drone_to_cc[5].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[276]/* drone_to_cc[5].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[5].readsigint = $START.drone_to_cc[5].readsigint
*/
void System_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  (data->simulationInfo->booleanVarsPre[255]/* drone_to_cc[5].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[255]/* drone_to_cc[5].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[5].fifosize = $START.drone_to_cc[5].fifosize
*/
void System_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  (data->simulationInfo->integerVarsPre[82]/* drone_to_cc[5].fifosize DISCRETE */)  = (data->modelData->integerVarsData[82]/* drone_to_cc[5].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 406
type: ALGORITHM

  drone_to_cc[5].newest := $START.drone_to_cc[5].newest;
  drone_to_cc[5].oldest := $START.drone_to_cc[5].oldest;
  drone_to_cc[5].fifosize := $START.drone_to_cc[5].fifosize;
  drone_to_cc[5].fifo[10,5] := $START.drone_to_cc[5].fifo[10,5];
  drone_to_cc[5].fifo[10,4] := $START.drone_to_cc[5].fifo[10,4];
  drone_to_cc[5].fifo[10,3] := $START.drone_to_cc[5].fifo[10,3];
  drone_to_cc[5].fifo[10,2] := $START.drone_to_cc[5].fifo[10,2];
  drone_to_cc[5].fifo[10,1] := $START.drone_to_cc[5].fifo[10,1];
  drone_to_cc[5].fifo[9,5] := $START.drone_to_cc[5].fifo[9,5];
  drone_to_cc[5].fifo[9,4] := $START.drone_to_cc[5].fifo[9,4];
  drone_to_cc[5].fifo[9,3] := $START.drone_to_cc[5].fifo[9,3];
  drone_to_cc[5].fifo[9,2] := $START.drone_to_cc[5].fifo[9,2];
  drone_to_cc[5].fifo[9,1] := $START.drone_to_cc[5].fifo[9,1];
  drone_to_cc[5].fifo[8,5] := $START.drone_to_cc[5].fifo[8,5];
  drone_to_cc[5].fifo[8,4] := $START.drone_to_cc[5].fifo[8,4];
  drone_to_cc[5].fifo[8,3] := $START.drone_to_cc[5].fifo[8,3];
  drone_to_cc[5].fifo[8,2] := $START.drone_to_cc[5].fifo[8,2];
  drone_to_cc[5].fifo[8,1] := $START.drone_to_cc[5].fifo[8,1];
  drone_to_cc[5].fifo[7,5] := $START.drone_to_cc[5].fifo[7,5];
  drone_to_cc[5].fifo[7,4] := $START.drone_to_cc[5].fifo[7,4];
  drone_to_cc[5].fifo[7,3] := $START.drone_to_cc[5].fifo[7,3];
  drone_to_cc[5].fifo[7,2] := $START.drone_to_cc[5].fifo[7,2];
  drone_to_cc[5].fifo[7,1] := $START.drone_to_cc[5].fifo[7,1];
  drone_to_cc[5].fifo[6,5] := $START.drone_to_cc[5].fifo[6,5];
  drone_to_cc[5].fifo[6,4] := $START.drone_to_cc[5].fifo[6,4];
  drone_to_cc[5].fifo[6,3] := $START.drone_to_cc[5].fifo[6,3];
  drone_to_cc[5].fifo[6,2] := $START.drone_to_cc[5].fifo[6,2];
  drone_to_cc[5].fifo[6,1] := $START.drone_to_cc[5].fifo[6,1];
  drone_to_cc[5].fifo[5,5] := $START.drone_to_cc[5].fifo[5,5];
  drone_to_cc[5].fifo[5,4] := $START.drone_to_cc[5].fifo[5,4];
  drone_to_cc[5].fifo[5,3] := $START.drone_to_cc[5].fifo[5,3];
  drone_to_cc[5].fifo[5,2] := $START.drone_to_cc[5].fifo[5,2];
  drone_to_cc[5].fifo[5,1] := $START.drone_to_cc[5].fifo[5,1];
  drone_to_cc[5].fifo[4,5] := $START.drone_to_cc[5].fifo[4,5];
  drone_to_cc[5].fifo[4,4] := $START.drone_to_cc[5].fifo[4,4];
  drone_to_cc[5].fifo[4,3] := $START.drone_to_cc[5].fifo[4,3];
  drone_to_cc[5].fifo[4,2] := $START.drone_to_cc[5].fifo[4,2];
  drone_to_cc[5].fifo[4,1] := $START.drone_to_cc[5].fifo[4,1];
  drone_to_cc[5].fifo[3,5] := $START.drone_to_cc[5].fifo[3,5];
  drone_to_cc[5].fifo[3,4] := $START.drone_to_cc[5].fifo[3,4];
  drone_to_cc[5].fifo[3,3] := $START.drone_to_cc[5].fifo[3,3];
  drone_to_cc[5].fifo[3,2] := $START.drone_to_cc[5].fifo[3,2];
  drone_to_cc[5].fifo[3,1] := $START.drone_to_cc[5].fifo[3,1];
  drone_to_cc[5].fifo[2,5] := $START.drone_to_cc[5].fifo[2,5];
  drone_to_cc[5].fifo[2,4] := $START.drone_to_cc[5].fifo[2,4];
  drone_to_cc[5].fifo[2,3] := $START.drone_to_cc[5].fifo[2,3];
  drone_to_cc[5].fifo[2,2] := $START.drone_to_cc[5].fifo[2,2];
  drone_to_cc[5].fifo[2,1] := $START.drone_to_cc[5].fifo[2,1];
  drone_to_cc[5].fifo[1,5] := $START.drone_to_cc[5].fifo[1,5];
  drone_to_cc[5].fifo[1,4] := $START.drone_to_cc[5].fifo[1,4];
  drone_to_cc[5].fifo[1,3] := $START.drone_to_cc[5].fifo[1,3];
  drone_to_cc[5].fifo[1,2] := $START.drone_to_cc[5].fifo[1,2];
  drone_to_cc[5].fifo[1,1] := $START.drone_to_cc[5].fifo[1,1];
  drone_to_cc[5].spaceavailable := $START.drone_to_cc[5].spaceavailable;
  drone_to_cc[5].outputdata[5] := $START.drone_to_cc[5].outputdata[5];
  drone_to_cc[5].outputdata[4] := $START.drone_to_cc[5].outputdata[4];
  drone_to_cc[5].outputdata[3] := $START.drone_to_cc[5].outputdata[3];
  drone_to_cc[5].outputdata[2] := $START.drone_to_cc[5].outputdata[2];
  drone_to_cc[5].outputdata[1] := $START.drone_to_cc[5].outputdata[1];
  drone_to_cc[5].datavailable := $START.drone_to_cc[5].datavailable;
  $whenCondition9 := $START.$whenCondition9;
  $whenCondition8 := $START.$whenCondition8;
  $whenCondition7 := $START.$whenCondition7;
  $whenCondition7 := $PRE.drone_to_cc[5].readsigint and $PRE.drone_to_cc[5].writesigint;
  $whenCondition8 := $PRE.drone_to_cc[5].readsigint and not $PRE.drone_to_cc[5].writesigint and $PRE.drone_to_cc[5].fifosize >= 1;
  $whenCondition9 := not $PRE.drone_to_cc[5].readsigint and $PRE.drone_to_cc[5].writesigint and $PRE.drone_to_cc[5].fifosize < 10;
  drone_to_cc[5].datavailable := false;
  for j in 1:5 loop
    drone_to_cc[5].outputdata[j] := 0.0;
  end for;
  drone_to_cc[5].spaceavailable := true;
  for i in 1:10 loop
    for j in 1:5 loop
      drone_to_cc[5].fifo[i,j] := 0.0;
    end for;
  end for;
  drone_to_cc[5].fifosize := 0;
  drone_to_cc[5].oldest := 1;
  drone_to_cc[5].newest := 1;
*/
void System_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  modelica_boolean tmp142;
  modelica_boolean tmp143;
  modelica_integer tmp144;
  modelica_integer tmp145;
  modelica_integer tmp146;
  modelica_integer tmp147;
  modelica_integer tmp148;
  modelica_integer tmp149;
  modelica_integer tmp150;
  modelica_integer tmp151;
  modelica_integer tmp152;
  (data->localData[0]->integerVars[89]/* drone_to_cc[5].newest DISCRETE */)  = (data->modelData->integerVarsData[89]/* drone_to_cc[5].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[96]/* drone_to_cc[5].oldest DISCRETE */)  = (data->modelData->integerVarsData[96]/* drone_to_cc[5].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[82]/* drone_to_cc[5].fifosize DISCRETE */)  = (data->modelData->integerVarsData[82]/* drone_to_cc[5].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1103]/* drone_to_cc[5].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[1103]/* drone_to_cc[5].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1102]/* drone_to_cc[5].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[1102]/* drone_to_cc[5].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1101]/* drone_to_cc[5].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[1101]/* drone_to_cc[5].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1100]/* drone_to_cc[5].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[1100]/* drone_to_cc[5].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1099]/* drone_to_cc[5].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[1099]/* drone_to_cc[5].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1098]/* drone_to_cc[5].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[1098]/* drone_to_cc[5].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1097]/* drone_to_cc[5].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[1097]/* drone_to_cc[5].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1096]/* drone_to_cc[5].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[1096]/* drone_to_cc[5].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1095]/* drone_to_cc[5].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[1095]/* drone_to_cc[5].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1094]/* drone_to_cc[5].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[1094]/* drone_to_cc[5].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1093]/* drone_to_cc[5].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[1093]/* drone_to_cc[5].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1092]/* drone_to_cc[5].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[1092]/* drone_to_cc[5].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1091]/* drone_to_cc[5].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[1091]/* drone_to_cc[5].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1090]/* drone_to_cc[5].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[1090]/* drone_to_cc[5].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1089]/* drone_to_cc[5].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[1089]/* drone_to_cc[5].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1088]/* drone_to_cc[5].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[1088]/* drone_to_cc[5].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1087]/* drone_to_cc[5].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[1087]/* drone_to_cc[5].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1086]/* drone_to_cc[5].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[1086]/* drone_to_cc[5].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1085]/* drone_to_cc[5].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[1085]/* drone_to_cc[5].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1084]/* drone_to_cc[5].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[1084]/* drone_to_cc[5].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1083]/* drone_to_cc[5].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[1083]/* drone_to_cc[5].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1082]/* drone_to_cc[5].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[1082]/* drone_to_cc[5].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1081]/* drone_to_cc[5].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[1081]/* drone_to_cc[5].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1080]/* drone_to_cc[5].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[1080]/* drone_to_cc[5].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1079]/* drone_to_cc[5].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[1079]/* drone_to_cc[5].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1078]/* drone_to_cc[5].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[1078]/* drone_to_cc[5].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1077]/* drone_to_cc[5].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[1077]/* drone_to_cc[5].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1076]/* drone_to_cc[5].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[1076]/* drone_to_cc[5].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1075]/* drone_to_cc[5].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[1075]/* drone_to_cc[5].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1074]/* drone_to_cc[5].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[1074]/* drone_to_cc[5].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1073]/* drone_to_cc[5].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[1073]/* drone_to_cc[5].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1072]/* drone_to_cc[5].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[1072]/* drone_to_cc[5].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1071]/* drone_to_cc[5].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[1071]/* drone_to_cc[5].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1070]/* drone_to_cc[5].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[1070]/* drone_to_cc[5].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1069]/* drone_to_cc[5].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[1069]/* drone_to_cc[5].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1068]/* drone_to_cc[5].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[1068]/* drone_to_cc[5].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1067]/* drone_to_cc[5].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[1067]/* drone_to_cc[5].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1066]/* drone_to_cc[5].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[1066]/* drone_to_cc[5].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1065]/* drone_to_cc[5].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[1065]/* drone_to_cc[5].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1064]/* drone_to_cc[5].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[1064]/* drone_to_cc[5].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1063]/* drone_to_cc[5].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[1063]/* drone_to_cc[5].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1062]/* drone_to_cc[5].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[1062]/* drone_to_cc[5].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1061]/* drone_to_cc[5].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[1061]/* drone_to_cc[5].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1060]/* drone_to_cc[5].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[1060]/* drone_to_cc[5].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1059]/* drone_to_cc[5].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[1059]/* drone_to_cc[5].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1058]/* drone_to_cc[5].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[1058]/* drone_to_cc[5].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1057]/* drone_to_cc[5].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[1057]/* drone_to_cc[5].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1056]/* drone_to_cc[5].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[1056]/* drone_to_cc[5].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1055]/* drone_to_cc[5].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[1055]/* drone_to_cc[5].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1054]/* drone_to_cc[5].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[1054]/* drone_to_cc[5].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[269]/* drone_to_cc[5].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[269]/* drone_to_cc[5].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1228]/* drone_to_cc[5].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[1228]/* drone_to_cc[5].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1227]/* drone_to_cc[5].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[1227]/* drone_to_cc[5].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1226]/* drone_to_cc[5].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[1226]/* drone_to_cc[5].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1225]/* drone_to_cc[5].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[1225]/* drone_to_cc[5].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1224]/* drone_to_cc[5].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[1224]/* drone_to_cc[5].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[248]/* drone_to_cc[5].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[248]/* drone_to_cc[5].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[79]/* $whenCondition9 DISCRETE */)  = (data->modelData->booleanVarsData[79]/* $whenCondition9 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[77]/* $whenCondition8 DISCRETE */)  = (data->modelData->booleanVarsData[77]/* $whenCondition8 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[66]/* $whenCondition7 DISCRETE */)  = (data->modelData->booleanVarsData[66]/* $whenCondition7 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[66]/* $whenCondition7 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[255]/* drone_to_cc[5].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[276]/* drone_to_cc[5].writesigint DISCRETE */) );

  tmp142 = GreaterEq((data->simulationInfo->integerVarsPre[82]/* drone_to_cc[5].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[77]/* $whenCondition8 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[255]/* drone_to_cc[5].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[276]/* drone_to_cc[5].writesigint DISCRETE */) )) && tmp142);

  tmp143 = Less((data->simulationInfo->integerVarsPre[82]/* drone_to_cc[5].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[79]/* $whenCondition9 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[255]/* drone_to_cc[5].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[276]/* drone_to_cc[5].writesigint DISCRETE */) ) && tmp143);

  (data->localData[0]->booleanVars[248]/* drone_to_cc[5].datavailable DISCRETE */)  = 0;

  tmp144 = ((modelica_integer) 1); tmp145 = 1; tmp146 = ((modelica_integer) 5);
  if(!(((tmp145 > 0) && (tmp144 > tmp146)) || ((tmp145 < 0) && (tmp144 < tmp146))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp144, tmp146); j += tmp145)
    {
      (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 5) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[269]/* drone_to_cc[5].spaceavailable DISCRETE */)  = 1;

  tmp150 = ((modelica_integer) 1); tmp151 = 1; tmp152 = ((modelica_integer) 10);
  if(!(((tmp151 > 0) && (tmp150 > tmp152)) || ((tmp151 < 0) && (tmp150 < tmp152))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp150, tmp152); i += tmp151)
    {
      tmp147 = ((modelica_integer) 1); tmp148 = 1; tmp149 = ((modelica_integer) 5);
      if(!(((tmp148 > 0) && (tmp147 > tmp149)) || ((tmp148 < 0) && (tmp147 < tmp149))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp147, tmp149); j += tmp148)
        {
          (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 5) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[82]/* drone_to_cc[5].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[96]/* drone_to_cc[5].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[89]/* drone_to_cc[5].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_714(DATA *data, threadData_t *threadData);

extern void System_eqFunction_713(DATA *data, threadData_t *threadData);

extern void System_eqFunction_716(DATA *data, threadData_t *threadData);

extern void System_eqFunction_718(DATA *data, threadData_t *threadData);

extern void System_eqFunction_715(DATA *data, threadData_t *threadData);

extern void System_eqFunction_717(DATA *data, threadData_t *threadData);

extern void System_eqFunction_719(DATA *data, threadData_t *threadData);


/*
equation index: 414
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[4].writesigint = $START.drone_to_cc[4].writesigint
*/
void System_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  (data->simulationInfo->booleanVarsPre[275]/* drone_to_cc[4].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[275]/* drone_to_cc[4].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[4].readsigint = $START.drone_to_cc[4].readsigint
*/
void System_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  (data->simulationInfo->booleanVarsPre[254]/* drone_to_cc[4].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[254]/* drone_to_cc[4].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[4].fifosize = $START.drone_to_cc[4].fifosize
*/
void System_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  (data->simulationInfo->integerVarsPre[81]/* drone_to_cc[4].fifosize DISCRETE */)  = (data->modelData->integerVarsData[81]/* drone_to_cc[4].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 417
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
  $whenCondition12 := $START.$whenCondition12;
  $whenCondition11 := $START.$whenCondition11;
  $whenCondition10 := $START.$whenCondition10;
  $whenCondition10 := $PRE.drone_to_cc[4].readsigint and $PRE.drone_to_cc[4].writesigint;
  $whenCondition11 := $PRE.drone_to_cc[4].readsigint and not $PRE.drone_to_cc[4].writesigint and $PRE.drone_to_cc[4].fifosize >= 1;
  $whenCondition12 := not $PRE.drone_to_cc[4].readsigint and $PRE.drone_to_cc[4].writesigint and $PRE.drone_to_cc[4].fifosize < 10;
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
void System_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  modelica_boolean tmp153;
  modelica_boolean tmp154;
  modelica_integer tmp155;
  modelica_integer tmp156;
  modelica_integer tmp157;
  modelica_integer tmp158;
  modelica_integer tmp159;
  modelica_integer tmp160;
  modelica_integer tmp161;
  modelica_integer tmp162;
  modelica_integer tmp163;
  (data->localData[0]->integerVars[88]/* drone_to_cc[4].newest DISCRETE */)  = (data->modelData->integerVarsData[88]/* drone_to_cc[4].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[95]/* drone_to_cc[4].oldest DISCRETE */)  = (data->modelData->integerVarsData[95]/* drone_to_cc[4].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[81]/* drone_to_cc[4].fifosize DISCRETE */)  = (data->modelData->integerVarsData[81]/* drone_to_cc[4].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1053]/* drone_to_cc[4].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[1053]/* drone_to_cc[4].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1052]/* drone_to_cc[4].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[1052]/* drone_to_cc[4].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1051]/* drone_to_cc[4].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[1051]/* drone_to_cc[4].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1050]/* drone_to_cc[4].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[1050]/* drone_to_cc[4].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1049]/* drone_to_cc[4].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[1049]/* drone_to_cc[4].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1048]/* drone_to_cc[4].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[1048]/* drone_to_cc[4].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1047]/* drone_to_cc[4].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[1047]/* drone_to_cc[4].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1046]/* drone_to_cc[4].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[1046]/* drone_to_cc[4].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1045]/* drone_to_cc[4].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[1045]/* drone_to_cc[4].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1044]/* drone_to_cc[4].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[1044]/* drone_to_cc[4].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1043]/* drone_to_cc[4].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[1043]/* drone_to_cc[4].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1042]/* drone_to_cc[4].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[1042]/* drone_to_cc[4].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1041]/* drone_to_cc[4].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[1041]/* drone_to_cc[4].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1040]/* drone_to_cc[4].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[1040]/* drone_to_cc[4].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1039]/* drone_to_cc[4].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[1039]/* drone_to_cc[4].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1038]/* drone_to_cc[4].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[1038]/* drone_to_cc[4].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1037]/* drone_to_cc[4].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[1037]/* drone_to_cc[4].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1036]/* drone_to_cc[4].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[1036]/* drone_to_cc[4].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1035]/* drone_to_cc[4].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[1035]/* drone_to_cc[4].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1034]/* drone_to_cc[4].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[1034]/* drone_to_cc[4].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1033]/* drone_to_cc[4].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[1033]/* drone_to_cc[4].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1032]/* drone_to_cc[4].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[1032]/* drone_to_cc[4].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1031]/* drone_to_cc[4].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[1031]/* drone_to_cc[4].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1030]/* drone_to_cc[4].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[1030]/* drone_to_cc[4].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1029]/* drone_to_cc[4].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[1029]/* drone_to_cc[4].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1028]/* drone_to_cc[4].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[1028]/* drone_to_cc[4].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1027]/* drone_to_cc[4].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[1027]/* drone_to_cc[4].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1026]/* drone_to_cc[4].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[1026]/* drone_to_cc[4].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1025]/* drone_to_cc[4].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[1025]/* drone_to_cc[4].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1024]/* drone_to_cc[4].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[1024]/* drone_to_cc[4].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1023]/* drone_to_cc[4].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[1023]/* drone_to_cc[4].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1022]/* drone_to_cc[4].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[1022]/* drone_to_cc[4].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1021]/* drone_to_cc[4].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[1021]/* drone_to_cc[4].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1020]/* drone_to_cc[4].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[1020]/* drone_to_cc[4].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1019]/* drone_to_cc[4].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[1019]/* drone_to_cc[4].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1018]/* drone_to_cc[4].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[1018]/* drone_to_cc[4].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1017]/* drone_to_cc[4].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[1017]/* drone_to_cc[4].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1016]/* drone_to_cc[4].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[1016]/* drone_to_cc[4].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1015]/* drone_to_cc[4].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[1015]/* drone_to_cc[4].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1014]/* drone_to_cc[4].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[1014]/* drone_to_cc[4].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1013]/* drone_to_cc[4].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[1013]/* drone_to_cc[4].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1012]/* drone_to_cc[4].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[1012]/* drone_to_cc[4].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1011]/* drone_to_cc[4].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[1011]/* drone_to_cc[4].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1010]/* drone_to_cc[4].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[1010]/* drone_to_cc[4].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1009]/* drone_to_cc[4].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[1009]/* drone_to_cc[4].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1008]/* drone_to_cc[4].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[1008]/* drone_to_cc[4].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1007]/* drone_to_cc[4].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[1007]/* drone_to_cc[4].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1006]/* drone_to_cc[4].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[1006]/* drone_to_cc[4].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1005]/* drone_to_cc[4].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[1005]/* drone_to_cc[4].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1004]/* drone_to_cc[4].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[1004]/* drone_to_cc[4].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[268]/* drone_to_cc[4].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[268]/* drone_to_cc[4].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1223]/* drone_to_cc[4].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[1223]/* drone_to_cc[4].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1222]/* drone_to_cc[4].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[1222]/* drone_to_cc[4].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1221]/* drone_to_cc[4].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[1221]/* drone_to_cc[4].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1220]/* drone_to_cc[4].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[1220]/* drone_to_cc[4].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1219]/* drone_to_cc[4].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[1219]/* drone_to_cc[4].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[247]/* drone_to_cc[4].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[247]/* drone_to_cc[4].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = (data->modelData->booleanVarsData[3]/* $whenCondition12 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (data->modelData->booleanVarsData[2]/* $whenCondition11 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = (data->modelData->booleanVarsData[1]/* $whenCondition10 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[254]/* drone_to_cc[4].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[275]/* drone_to_cc[4].writesigint DISCRETE */) );

  tmp153 = GreaterEq((data->simulationInfo->integerVarsPre[81]/* drone_to_cc[4].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[254]/* drone_to_cc[4].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[275]/* drone_to_cc[4].writesigint DISCRETE */) )) && tmp153);

  tmp154 = Less((data->simulationInfo->integerVarsPre[81]/* drone_to_cc[4].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[254]/* drone_to_cc[4].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[275]/* drone_to_cc[4].writesigint DISCRETE */) ) && tmp154);

  (data->localData[0]->booleanVars[247]/* drone_to_cc[4].datavailable DISCRETE */)  = 0;

  tmp155 = ((modelica_integer) 1); tmp156 = 1; tmp157 = ((modelica_integer) 5);
  if(!(((tmp156 > 0) && (tmp155 > tmp157)) || ((tmp156 < 0) && (tmp155 < tmp157))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp155, tmp157); j += tmp156)
    {
      (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[268]/* drone_to_cc[4].spaceavailable DISCRETE */)  = 1;

  tmp161 = ((modelica_integer) 1); tmp162 = 1; tmp163 = ((modelica_integer) 10);
  if(!(((tmp162 > 0) && (tmp161 > tmp163)) || ((tmp162 < 0) && (tmp161 < tmp163))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp161, tmp163); i += tmp162)
    {
      tmp158 = ((modelica_integer) 1); tmp159 = 1; tmp160 = ((modelica_integer) 5);
      if(!(((tmp159 > 0) && (tmp158 > tmp160)) || ((tmp159 < 0) && (tmp158 < tmp160))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp158, tmp160); j += tmp159)
        {
          (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[81]/* drone_to_cc[4].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[95]/* drone_to_cc[4].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[88]/* drone_to_cc[4].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_741(DATA *data, threadData_t *threadData);

extern void System_eqFunction_737(DATA *data, threadData_t *threadData);

extern void System_eqFunction_740(DATA *data, threadData_t *threadData);

extern void System_eqFunction_742(DATA *data, threadData_t *threadData);

extern void System_eqFunction_738(DATA *data, threadData_t *threadData);

extern void System_eqFunction_743(DATA *data, threadData_t *threadData);

extern void System_eqFunction_739(DATA *data, threadData_t *threadData);


/*
equation index: 425
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[3].writesigint = $START.drone_to_cc[3].writesigint
*/
void System_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  (data->simulationInfo->booleanVarsPre[274]/* drone_to_cc[3].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[274]/* drone_to_cc[3].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[3].readsigint = $START.drone_to_cc[3].readsigint
*/
void System_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  (data->simulationInfo->booleanVarsPre[253]/* drone_to_cc[3].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[253]/* drone_to_cc[3].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[3].fifosize = $START.drone_to_cc[3].fifosize
*/
void System_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  (data->simulationInfo->integerVarsPre[80]/* drone_to_cc[3].fifosize DISCRETE */)  = (data->modelData->integerVarsData[80]/* drone_to_cc[3].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 428
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
  $whenCondition15 := $START.$whenCondition15;
  $whenCondition14 := $START.$whenCondition14;
  $whenCondition13 := $START.$whenCondition13;
  $whenCondition13 := $PRE.drone_to_cc[3].readsigint and $PRE.drone_to_cc[3].writesigint;
  $whenCondition14 := $PRE.drone_to_cc[3].readsigint and not $PRE.drone_to_cc[3].writesigint and $PRE.drone_to_cc[3].fifosize >= 1;
  $whenCondition15 := not $PRE.drone_to_cc[3].readsigint and $PRE.drone_to_cc[3].writesigint and $PRE.drone_to_cc[3].fifosize < 10;
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
void System_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  modelica_boolean tmp164;
  modelica_boolean tmp165;
  modelica_integer tmp166;
  modelica_integer tmp167;
  modelica_integer tmp168;
  modelica_integer tmp169;
  modelica_integer tmp170;
  modelica_integer tmp171;
  modelica_integer tmp172;
  modelica_integer tmp173;
  modelica_integer tmp174;
  (data->localData[0]->integerVars[87]/* drone_to_cc[3].newest DISCRETE */)  = (data->modelData->integerVarsData[87]/* drone_to_cc[3].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[94]/* drone_to_cc[3].oldest DISCRETE */)  = (data->modelData->integerVarsData[94]/* drone_to_cc[3].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[80]/* drone_to_cc[3].fifosize DISCRETE */)  = (data->modelData->integerVarsData[80]/* drone_to_cc[3].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1003]/* drone_to_cc[3].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[1003]/* drone_to_cc[3].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1002]/* drone_to_cc[3].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[1002]/* drone_to_cc[3].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1001]/* drone_to_cc[3].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[1001]/* drone_to_cc[3].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1000]/* drone_to_cc[3].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[1000]/* drone_to_cc[3].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[999]/* drone_to_cc[3].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[999]/* drone_to_cc[3].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[998]/* drone_to_cc[3].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[998]/* drone_to_cc[3].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[997]/* drone_to_cc[3].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[997]/* drone_to_cc[3].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[996]/* drone_to_cc[3].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[996]/* drone_to_cc[3].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[995]/* drone_to_cc[3].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[995]/* drone_to_cc[3].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[994]/* drone_to_cc[3].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[994]/* drone_to_cc[3].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[993]/* drone_to_cc[3].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[993]/* drone_to_cc[3].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[992]/* drone_to_cc[3].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[992]/* drone_to_cc[3].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[991]/* drone_to_cc[3].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[991]/* drone_to_cc[3].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[990]/* drone_to_cc[3].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[990]/* drone_to_cc[3].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[989]/* drone_to_cc[3].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[989]/* drone_to_cc[3].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[988]/* drone_to_cc[3].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[988]/* drone_to_cc[3].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[987]/* drone_to_cc[3].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[987]/* drone_to_cc[3].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[986]/* drone_to_cc[3].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[986]/* drone_to_cc[3].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[985]/* drone_to_cc[3].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[985]/* drone_to_cc[3].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[984]/* drone_to_cc[3].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[984]/* drone_to_cc[3].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[983]/* drone_to_cc[3].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[983]/* drone_to_cc[3].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[982]/* drone_to_cc[3].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[982]/* drone_to_cc[3].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[981]/* drone_to_cc[3].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[981]/* drone_to_cc[3].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[980]/* drone_to_cc[3].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[980]/* drone_to_cc[3].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[979]/* drone_to_cc[3].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[979]/* drone_to_cc[3].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[978]/* drone_to_cc[3].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[978]/* drone_to_cc[3].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[977]/* drone_to_cc[3].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[977]/* drone_to_cc[3].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[976]/* drone_to_cc[3].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[976]/* drone_to_cc[3].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[975]/* drone_to_cc[3].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[975]/* drone_to_cc[3].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[974]/* drone_to_cc[3].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[974]/* drone_to_cc[3].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[973]/* drone_to_cc[3].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[973]/* drone_to_cc[3].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[972]/* drone_to_cc[3].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[972]/* drone_to_cc[3].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[971]/* drone_to_cc[3].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[971]/* drone_to_cc[3].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[970]/* drone_to_cc[3].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[970]/* drone_to_cc[3].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[969]/* drone_to_cc[3].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[969]/* drone_to_cc[3].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[968]/* drone_to_cc[3].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[968]/* drone_to_cc[3].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[967]/* drone_to_cc[3].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[967]/* drone_to_cc[3].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[966]/* drone_to_cc[3].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[966]/* drone_to_cc[3].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[965]/* drone_to_cc[3].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[965]/* drone_to_cc[3].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[964]/* drone_to_cc[3].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[964]/* drone_to_cc[3].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[963]/* drone_to_cc[3].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[963]/* drone_to_cc[3].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[962]/* drone_to_cc[3].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[962]/* drone_to_cc[3].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[961]/* drone_to_cc[3].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[961]/* drone_to_cc[3].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[960]/* drone_to_cc[3].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[960]/* drone_to_cc[3].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[959]/* drone_to_cc[3].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[959]/* drone_to_cc[3].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[958]/* drone_to_cc[3].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[958]/* drone_to_cc[3].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[957]/* drone_to_cc[3].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[957]/* drone_to_cc[3].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[956]/* drone_to_cc[3].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[956]/* drone_to_cc[3].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[955]/* drone_to_cc[3].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[955]/* drone_to_cc[3].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[954]/* drone_to_cc[3].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[954]/* drone_to_cc[3].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[267]/* drone_to_cc[3].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[267]/* drone_to_cc[3].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1218]/* drone_to_cc[3].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[1218]/* drone_to_cc[3].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1217]/* drone_to_cc[3].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[1217]/* drone_to_cc[3].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1216]/* drone_to_cc[3].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[1216]/* drone_to_cc[3].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1215]/* drone_to_cc[3].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[1215]/* drone_to_cc[3].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1214]/* drone_to_cc[3].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[1214]/* drone_to_cc[3].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[246]/* drone_to_cc[3].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[246]/* drone_to_cc[3].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  = (data->modelData->booleanVarsData[6]/* $whenCondition15 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (data->modelData->booleanVarsData[5]/* $whenCondition14 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = (data->modelData->booleanVarsData[4]/* $whenCondition13 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[253]/* drone_to_cc[3].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[274]/* drone_to_cc[3].writesigint DISCRETE */) );

  tmp164 = GreaterEq((data->simulationInfo->integerVarsPre[80]/* drone_to_cc[3].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[253]/* drone_to_cc[3].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[274]/* drone_to_cc[3].writesigint DISCRETE */) )) && tmp164);

  tmp165 = Less((data->simulationInfo->integerVarsPre[80]/* drone_to_cc[3].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[253]/* drone_to_cc[3].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[274]/* drone_to_cc[3].writesigint DISCRETE */) ) && tmp165);

  (data->localData[0]->booleanVars[246]/* drone_to_cc[3].datavailable DISCRETE */)  = 0;

  tmp166 = ((modelica_integer) 1); tmp167 = 1; tmp168 = ((modelica_integer) 5);
  if(!(((tmp167 > 0) && (tmp166 > tmp168)) || ((tmp167 < 0) && (tmp166 < tmp168))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp166, tmp168); j += tmp167)
    {
      (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[267]/* drone_to_cc[3].spaceavailable DISCRETE */)  = 1;

  tmp172 = ((modelica_integer) 1); tmp173 = 1; tmp174 = ((modelica_integer) 10);
  if(!(((tmp173 > 0) && (tmp172 > tmp174)) || ((tmp173 < 0) && (tmp172 < tmp174))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp172, tmp174); i += tmp173)
    {
      tmp169 = ((modelica_integer) 1); tmp170 = 1; tmp171 = ((modelica_integer) 5);
      if(!(((tmp170 > 0) && (tmp169 > tmp171)) || ((tmp170 < 0) && (tmp169 < tmp171))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp169, tmp171); j += tmp170)
        {
          (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[80]/* drone_to_cc[3].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[94]/* drone_to_cc[3].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[87]/* drone_to_cc[3].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_771(DATA *data, threadData_t *threadData);

extern void System_eqFunction_770(DATA *data, threadData_t *threadData);

extern void System_eqFunction_766(DATA *data, threadData_t *threadData);

extern void System_eqFunction_767(DATA *data, threadData_t *threadData);

extern void System_eqFunction_772(DATA *data, threadData_t *threadData);

extern void System_eqFunction_769(DATA *data, threadData_t *threadData);

extern void System_eqFunction_768(DATA *data, threadData_t *threadData);


/*
equation index: 436
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[2].writesigint = $START.drone_to_cc[2].writesigint
*/
void System_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  (data->simulationInfo->booleanVarsPre[273]/* drone_to_cc[2].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[273]/* drone_to_cc[2].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[2].readsigint = $START.drone_to_cc[2].readsigint
*/
void System_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  (data->simulationInfo->booleanVarsPre[252]/* drone_to_cc[2].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[252]/* drone_to_cc[2].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[2].fifosize = $START.drone_to_cc[2].fifosize
*/
void System_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  (data->simulationInfo->integerVarsPre[79]/* drone_to_cc[2].fifosize DISCRETE */)  = (data->modelData->integerVarsData[79]/* drone_to_cc[2].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 439
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
  $whenCondition18 := $START.$whenCondition18;
  $whenCondition17 := $START.$whenCondition17;
  $whenCondition16 := $START.$whenCondition16;
  $whenCondition16 := $PRE.drone_to_cc[2].readsigint and $PRE.drone_to_cc[2].writesigint;
  $whenCondition17 := $PRE.drone_to_cc[2].readsigint and not $PRE.drone_to_cc[2].writesigint and $PRE.drone_to_cc[2].fifosize >= 1;
  $whenCondition18 := not $PRE.drone_to_cc[2].readsigint and $PRE.drone_to_cc[2].writesigint and $PRE.drone_to_cc[2].fifosize < 10;
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
void System_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  modelica_boolean tmp175;
  modelica_boolean tmp176;
  modelica_integer tmp177;
  modelica_integer tmp178;
  modelica_integer tmp179;
  modelica_integer tmp180;
  modelica_integer tmp181;
  modelica_integer tmp182;
  modelica_integer tmp183;
  modelica_integer tmp184;
  modelica_integer tmp185;
  (data->localData[0]->integerVars[86]/* drone_to_cc[2].newest DISCRETE */)  = (data->modelData->integerVarsData[86]/* drone_to_cc[2].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[93]/* drone_to_cc[2].oldest DISCRETE */)  = (data->modelData->integerVarsData[93]/* drone_to_cc[2].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[79]/* drone_to_cc[2].fifosize DISCRETE */)  = (data->modelData->integerVarsData[79]/* drone_to_cc[2].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[953]/* drone_to_cc[2].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[953]/* drone_to_cc[2].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[952]/* drone_to_cc[2].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[952]/* drone_to_cc[2].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[951]/* drone_to_cc[2].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[951]/* drone_to_cc[2].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[950]/* drone_to_cc[2].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[950]/* drone_to_cc[2].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[949]/* drone_to_cc[2].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[949]/* drone_to_cc[2].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[948]/* drone_to_cc[2].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[948]/* drone_to_cc[2].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[947]/* drone_to_cc[2].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[947]/* drone_to_cc[2].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[946]/* drone_to_cc[2].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[946]/* drone_to_cc[2].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[945]/* drone_to_cc[2].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[945]/* drone_to_cc[2].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[944]/* drone_to_cc[2].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[944]/* drone_to_cc[2].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[943]/* drone_to_cc[2].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[943]/* drone_to_cc[2].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[942]/* drone_to_cc[2].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[942]/* drone_to_cc[2].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[941]/* drone_to_cc[2].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[941]/* drone_to_cc[2].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[940]/* drone_to_cc[2].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[940]/* drone_to_cc[2].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[939]/* drone_to_cc[2].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[939]/* drone_to_cc[2].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[938]/* drone_to_cc[2].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[938]/* drone_to_cc[2].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[937]/* drone_to_cc[2].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[937]/* drone_to_cc[2].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[936]/* drone_to_cc[2].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[936]/* drone_to_cc[2].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[935]/* drone_to_cc[2].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[935]/* drone_to_cc[2].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[934]/* drone_to_cc[2].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[934]/* drone_to_cc[2].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[933]/* drone_to_cc[2].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[933]/* drone_to_cc[2].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[932]/* drone_to_cc[2].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[932]/* drone_to_cc[2].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[931]/* drone_to_cc[2].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[931]/* drone_to_cc[2].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[930]/* drone_to_cc[2].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[930]/* drone_to_cc[2].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[929]/* drone_to_cc[2].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[929]/* drone_to_cc[2].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[928]/* drone_to_cc[2].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[928]/* drone_to_cc[2].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[927]/* drone_to_cc[2].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[927]/* drone_to_cc[2].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[926]/* drone_to_cc[2].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[926]/* drone_to_cc[2].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[925]/* drone_to_cc[2].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[925]/* drone_to_cc[2].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[924]/* drone_to_cc[2].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[924]/* drone_to_cc[2].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[923]/* drone_to_cc[2].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[923]/* drone_to_cc[2].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[922]/* drone_to_cc[2].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[922]/* drone_to_cc[2].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[921]/* drone_to_cc[2].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[921]/* drone_to_cc[2].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[920]/* drone_to_cc[2].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[920]/* drone_to_cc[2].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[919]/* drone_to_cc[2].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[919]/* drone_to_cc[2].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[918]/* drone_to_cc[2].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[918]/* drone_to_cc[2].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[917]/* drone_to_cc[2].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[917]/* drone_to_cc[2].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[916]/* drone_to_cc[2].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[916]/* drone_to_cc[2].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[915]/* drone_to_cc[2].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[915]/* drone_to_cc[2].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[914]/* drone_to_cc[2].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[914]/* drone_to_cc[2].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[913]/* drone_to_cc[2].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[913]/* drone_to_cc[2].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[912]/* drone_to_cc[2].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[912]/* drone_to_cc[2].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[911]/* drone_to_cc[2].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[911]/* drone_to_cc[2].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[910]/* drone_to_cc[2].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[910]/* drone_to_cc[2].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[909]/* drone_to_cc[2].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[909]/* drone_to_cc[2].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[908]/* drone_to_cc[2].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[908]/* drone_to_cc[2].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[907]/* drone_to_cc[2].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[907]/* drone_to_cc[2].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[906]/* drone_to_cc[2].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[906]/* drone_to_cc[2].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[905]/* drone_to_cc[2].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[905]/* drone_to_cc[2].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[904]/* drone_to_cc[2].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[904]/* drone_to_cc[2].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[266]/* drone_to_cc[2].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[266]/* drone_to_cc[2].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1213]/* drone_to_cc[2].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[1213]/* drone_to_cc[2].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1212]/* drone_to_cc[2].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[1212]/* drone_to_cc[2].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1211]/* drone_to_cc[2].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[1211]/* drone_to_cc[2].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1210]/* drone_to_cc[2].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[1210]/* drone_to_cc[2].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1209]/* drone_to_cc[2].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[1209]/* drone_to_cc[2].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[245]/* drone_to_cc[2].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[245]/* drone_to_cc[2].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[9]/* $whenCondition18 DISCRETE */)  = (data->modelData->booleanVarsData[9]/* $whenCondition18 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[8]/* $whenCondition17 DISCRETE */)  = (data->modelData->booleanVarsData[8]/* $whenCondition17 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[7]/* $whenCondition16 DISCRETE */)  = (data->modelData->booleanVarsData[7]/* $whenCondition16 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[7]/* $whenCondition16 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[252]/* drone_to_cc[2].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[273]/* drone_to_cc[2].writesigint DISCRETE */) );

  tmp175 = GreaterEq((data->simulationInfo->integerVarsPre[79]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[8]/* $whenCondition17 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[252]/* drone_to_cc[2].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[273]/* drone_to_cc[2].writesigint DISCRETE */) )) && tmp175);

  tmp176 = Less((data->simulationInfo->integerVarsPre[79]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[9]/* $whenCondition18 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[252]/* drone_to_cc[2].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[273]/* drone_to_cc[2].writesigint DISCRETE */) ) && tmp176);

  (data->localData[0]->booleanVars[245]/* drone_to_cc[2].datavailable DISCRETE */)  = 0;

  tmp177 = ((modelica_integer) 1); tmp178 = 1; tmp179 = ((modelica_integer) 5);
  if(!(((tmp178 > 0) && (tmp177 > tmp179)) || ((tmp178 < 0) && (tmp177 < tmp179))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp177, tmp179); j += tmp178)
    {
      (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[266]/* drone_to_cc[2].spaceavailable DISCRETE */)  = 1;

  tmp183 = ((modelica_integer) 1); tmp184 = 1; tmp185 = ((modelica_integer) 10);
  if(!(((tmp184 > 0) && (tmp183 > tmp185)) || ((tmp184 < 0) && (tmp183 < tmp185))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp183, tmp185); i += tmp184)
    {
      tmp180 = ((modelica_integer) 1); tmp181 = 1; tmp182 = ((modelica_integer) 5);
      if(!(((tmp181 > 0) && (tmp180 > tmp182)) || ((tmp181 < 0) && (tmp180 < tmp182))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp180, tmp182); j += tmp181)
        {
          (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[79]/* drone_to_cc[2].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[93]/* drone_to_cc[2].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[86]/* drone_to_cc[2].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_793(DATA *data, threadData_t *threadData);

extern void System_eqFunction_794(DATA *data, threadData_t *threadData);

extern void System_eqFunction_797(DATA *data, threadData_t *threadData);

extern void System_eqFunction_792(DATA *data, threadData_t *threadData);

extern void System_eqFunction_795(DATA *data, threadData_t *threadData);

extern void System_eqFunction_791(DATA *data, threadData_t *threadData);

extern void System_eqFunction_796(DATA *data, threadData_t *threadData);


/*
equation index: 447
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].writesigint = $START.drone_to_cc[1].writesigint
*/
void System_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  (data->simulationInfo->booleanVarsPre[272]/* drone_to_cc[1].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[272]/* drone_to_cc[1].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].readsigint = $START.drone_to_cc[1].readsigint
*/
void System_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  (data->simulationInfo->booleanVarsPre[251]/* drone_to_cc[1].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[251]/* drone_to_cc[1].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
$PRE.drone_to_cc[1].fifosize = $START.drone_to_cc[1].fifosize
*/
void System_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  (data->simulationInfo->integerVarsPre[78]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->modelData->integerVarsData[78]/* drone_to_cc[1].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 450
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
  $whenCondition21 := $START.$whenCondition21;
  $whenCondition20 := $START.$whenCondition20;
  $whenCondition19 := $START.$whenCondition19;
  $whenCondition19 := $PRE.drone_to_cc[1].readsigint and $PRE.drone_to_cc[1].writesigint;
  $whenCondition20 := $PRE.drone_to_cc[1].readsigint and not $PRE.drone_to_cc[1].writesigint and $PRE.drone_to_cc[1].fifosize >= 1;
  $whenCondition21 := not $PRE.drone_to_cc[1].readsigint and $PRE.drone_to_cc[1].writesigint and $PRE.drone_to_cc[1].fifosize < 10;
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
void System_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  modelica_boolean tmp186;
  modelica_boolean tmp187;
  modelica_integer tmp188;
  modelica_integer tmp189;
  modelica_integer tmp190;
  modelica_integer tmp191;
  modelica_integer tmp192;
  modelica_integer tmp193;
  modelica_integer tmp194;
  modelica_integer tmp195;
  modelica_integer tmp196;
  (data->localData[0]->integerVars[85]/* drone_to_cc[1].newest DISCRETE */)  = (data->modelData->integerVarsData[85]/* drone_to_cc[1].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[92]/* drone_to_cc[1].oldest DISCRETE */)  = (data->modelData->integerVarsData[92]/* drone_to_cc[1].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[78]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->modelData->integerVarsData[78]/* drone_to_cc[1].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[903]/* drone_to_cc[1].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[903]/* drone_to_cc[1].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[902]/* drone_to_cc[1].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[902]/* drone_to_cc[1].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[901]/* drone_to_cc[1].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[901]/* drone_to_cc[1].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[900]/* drone_to_cc[1].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[900]/* drone_to_cc[1].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[899]/* drone_to_cc[1].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[899]/* drone_to_cc[1].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[898]/* drone_to_cc[1].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[898]/* drone_to_cc[1].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[897]/* drone_to_cc[1].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[897]/* drone_to_cc[1].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[896]/* drone_to_cc[1].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[896]/* drone_to_cc[1].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[895]/* drone_to_cc[1].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[895]/* drone_to_cc[1].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[894]/* drone_to_cc[1].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[894]/* drone_to_cc[1].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[893]/* drone_to_cc[1].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[893]/* drone_to_cc[1].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[892]/* drone_to_cc[1].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[892]/* drone_to_cc[1].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[891]/* drone_to_cc[1].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[891]/* drone_to_cc[1].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[890]/* drone_to_cc[1].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[890]/* drone_to_cc[1].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[889]/* drone_to_cc[1].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[889]/* drone_to_cc[1].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[888]/* drone_to_cc[1].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[888]/* drone_to_cc[1].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[887]/* drone_to_cc[1].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[887]/* drone_to_cc[1].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[886]/* drone_to_cc[1].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[886]/* drone_to_cc[1].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[885]/* drone_to_cc[1].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[885]/* drone_to_cc[1].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[884]/* drone_to_cc[1].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[884]/* drone_to_cc[1].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[883]/* drone_to_cc[1].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[883]/* drone_to_cc[1].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[882]/* drone_to_cc[1].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[882]/* drone_to_cc[1].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[881]/* drone_to_cc[1].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[881]/* drone_to_cc[1].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[880]/* drone_to_cc[1].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[880]/* drone_to_cc[1].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[879]/* drone_to_cc[1].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[879]/* drone_to_cc[1].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[878]/* drone_to_cc[1].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[878]/* drone_to_cc[1].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[877]/* drone_to_cc[1].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[877]/* drone_to_cc[1].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[876]/* drone_to_cc[1].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[876]/* drone_to_cc[1].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[875]/* drone_to_cc[1].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[875]/* drone_to_cc[1].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[874]/* drone_to_cc[1].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[874]/* drone_to_cc[1].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[873]/* drone_to_cc[1].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[873]/* drone_to_cc[1].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[872]/* drone_to_cc[1].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[872]/* drone_to_cc[1].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[871]/* drone_to_cc[1].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[871]/* drone_to_cc[1].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[870]/* drone_to_cc[1].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[870]/* drone_to_cc[1].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[869]/* drone_to_cc[1].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[869]/* drone_to_cc[1].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[868]/* drone_to_cc[1].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[868]/* drone_to_cc[1].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[867]/* drone_to_cc[1].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[867]/* drone_to_cc[1].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[866]/* drone_to_cc[1].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[866]/* drone_to_cc[1].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[865]/* drone_to_cc[1].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[865]/* drone_to_cc[1].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[864]/* drone_to_cc[1].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[864]/* drone_to_cc[1].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[863]/* drone_to_cc[1].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[863]/* drone_to_cc[1].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[862]/* drone_to_cc[1].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[862]/* drone_to_cc[1].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[861]/* drone_to_cc[1].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[861]/* drone_to_cc[1].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[860]/* drone_to_cc[1].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[860]/* drone_to_cc[1].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[859]/* drone_to_cc[1].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[859]/* drone_to_cc[1].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[858]/* drone_to_cc[1].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[858]/* drone_to_cc[1].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[857]/* drone_to_cc[1].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[857]/* drone_to_cc[1].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[856]/* drone_to_cc[1].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[856]/* drone_to_cc[1].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[855]/* drone_to_cc[1].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[855]/* drone_to_cc[1].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[265]/* drone_to_cc[1].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[265]/* drone_to_cc[1].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1208]/* drone_to_cc[1].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[1208]/* drone_to_cc[1].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1207]/* drone_to_cc[1].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[1207]/* drone_to_cc[1].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1206]/* drone_to_cc[1].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[1206]/* drone_to_cc[1].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1205]/* drone_to_cc[1].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[1205]/* drone_to_cc[1].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[244]/* drone_to_cc[1].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[244]/* drone_to_cc[1].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[13]/* $whenCondition21 DISCRETE */)  = (data->modelData->booleanVarsData[13]/* $whenCondition21 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[12]/* $whenCondition20 DISCRETE */)  = (data->modelData->booleanVarsData[12]/* $whenCondition20 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[10]/* $whenCondition19 DISCRETE */)  = (data->modelData->booleanVarsData[10]/* $whenCondition19 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[10]/* $whenCondition19 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[251]/* drone_to_cc[1].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[272]/* drone_to_cc[1].writesigint DISCRETE */) );

  tmp186 = GreaterEq((data->simulationInfo->integerVarsPre[78]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[12]/* $whenCondition20 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[251]/* drone_to_cc[1].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[272]/* drone_to_cc[1].writesigint DISCRETE */) )) && tmp186);

  tmp187 = Less((data->simulationInfo->integerVarsPre[78]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[13]/* $whenCondition21 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[251]/* drone_to_cc[1].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[272]/* drone_to_cc[1].writesigint DISCRETE */) ) && tmp187);

  (data->localData[0]->booleanVars[244]/* drone_to_cc[1].datavailable DISCRETE */)  = 0;

  tmp188 = ((modelica_integer) 1); tmp189 = 1; tmp190 = ((modelica_integer) 5);
  if(!(((tmp189 > 0) && (tmp188 > tmp190)) || ((tmp189 < 0) && (tmp188 < tmp190))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp188, tmp190); j += tmp189)
    {
      (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[265]/* drone_to_cc[1].spaceavailable DISCRETE */)  = 1;

  tmp194 = ((modelica_integer) 1); tmp195 = 1; tmp196 = ((modelica_integer) 10);
  if(!(((tmp195 > 0) && (tmp194 > tmp196)) || ((tmp195 < 0) && (tmp194 < tmp196))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp194, tmp196); i += tmp195)
    {
      tmp191 = ((modelica_integer) 1); tmp192 = 1; tmp193 = ((modelica_integer) 5);
      if(!(((tmp192 > 0) && (tmp191 > tmp193)) || ((tmp192 < 0) && (tmp191 < tmp193))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp191, tmp193); j += tmp192)
        {
          (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[78]/* drone_to_cc[1].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[92]/* drone_to_cc[1].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[85]/* drone_to_cc[1].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_819(DATA *data, threadData_t *threadData);

extern void System_eqFunction_818(DATA *data, threadData_t *threadData);

extern void System_eqFunction_817(DATA *data, threadData_t *threadData);

extern void System_eqFunction_813(DATA *data, threadData_t *threadData);

extern void System_eqFunction_814(DATA *data, threadData_t *threadData);

extern void System_eqFunction_816(DATA *data, threadData_t *threadData);

extern void System_eqFunction_815(DATA *data, threadData_t *threadData);


/*
equation index: 458
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[7].writesigint = $START.cc_to_drone[7].writesigint
*/
void System_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  (data->simulationInfo->booleanVarsPre[194]/* cc_to_drone[7].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[194]/* cc_to_drone[7].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[7].readsigint = $START.cc_to_drone[7].readsigint
*/
void System_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  (data->simulationInfo->booleanVarsPre[173]/* cc_to_drone[7].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[173]/* cc_to_drone[7].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[7].fifosize = $START.cc_to_drone[7].fifosize
*/
void System_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  (data->simulationInfo->integerVarsPre[35]/* cc_to_drone[7].fifosize DISCRETE */)  = (data->modelData->integerVarsData[35]/* cc_to_drone[7].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 461
type: ALGORITHM

  cc_to_drone[7].newest := $START.cc_to_drone[7].newest;
  cc_to_drone[7].oldest := $START.cc_to_drone[7].oldest;
  cc_to_drone[7].fifosize := $START.cc_to_drone[7].fifosize;
  cc_to_drone[7].fifo[10,5] := $START.cc_to_drone[7].fifo[10,5];
  cc_to_drone[7].fifo[10,4] := $START.cc_to_drone[7].fifo[10,4];
  cc_to_drone[7].fifo[10,3] := $START.cc_to_drone[7].fifo[10,3];
  cc_to_drone[7].fifo[10,2] := $START.cc_to_drone[7].fifo[10,2];
  cc_to_drone[7].fifo[10,1] := $START.cc_to_drone[7].fifo[10,1];
  cc_to_drone[7].fifo[9,5] := $START.cc_to_drone[7].fifo[9,5];
  cc_to_drone[7].fifo[9,4] := $START.cc_to_drone[7].fifo[9,4];
  cc_to_drone[7].fifo[9,3] := $START.cc_to_drone[7].fifo[9,3];
  cc_to_drone[7].fifo[9,2] := $START.cc_to_drone[7].fifo[9,2];
  cc_to_drone[7].fifo[9,1] := $START.cc_to_drone[7].fifo[9,1];
  cc_to_drone[7].fifo[8,5] := $START.cc_to_drone[7].fifo[8,5];
  cc_to_drone[7].fifo[8,4] := $START.cc_to_drone[7].fifo[8,4];
  cc_to_drone[7].fifo[8,3] := $START.cc_to_drone[7].fifo[8,3];
  cc_to_drone[7].fifo[8,2] := $START.cc_to_drone[7].fifo[8,2];
  cc_to_drone[7].fifo[8,1] := $START.cc_to_drone[7].fifo[8,1];
  cc_to_drone[7].fifo[7,5] := $START.cc_to_drone[7].fifo[7,5];
  cc_to_drone[7].fifo[7,4] := $START.cc_to_drone[7].fifo[7,4];
  cc_to_drone[7].fifo[7,3] := $START.cc_to_drone[7].fifo[7,3];
  cc_to_drone[7].fifo[7,2] := $START.cc_to_drone[7].fifo[7,2];
  cc_to_drone[7].fifo[7,1] := $START.cc_to_drone[7].fifo[7,1];
  cc_to_drone[7].fifo[6,5] := $START.cc_to_drone[7].fifo[6,5];
  cc_to_drone[7].fifo[6,4] := $START.cc_to_drone[7].fifo[6,4];
  cc_to_drone[7].fifo[6,3] := $START.cc_to_drone[7].fifo[6,3];
  cc_to_drone[7].fifo[6,2] := $START.cc_to_drone[7].fifo[6,2];
  cc_to_drone[7].fifo[6,1] := $START.cc_to_drone[7].fifo[6,1];
  cc_to_drone[7].fifo[5,5] := $START.cc_to_drone[7].fifo[5,5];
  cc_to_drone[7].fifo[5,4] := $START.cc_to_drone[7].fifo[5,4];
  cc_to_drone[7].fifo[5,3] := $START.cc_to_drone[7].fifo[5,3];
  cc_to_drone[7].fifo[5,2] := $START.cc_to_drone[7].fifo[5,2];
  cc_to_drone[7].fifo[5,1] := $START.cc_to_drone[7].fifo[5,1];
  cc_to_drone[7].fifo[4,5] := $START.cc_to_drone[7].fifo[4,5];
  cc_to_drone[7].fifo[4,4] := $START.cc_to_drone[7].fifo[4,4];
  cc_to_drone[7].fifo[4,3] := $START.cc_to_drone[7].fifo[4,3];
  cc_to_drone[7].fifo[4,2] := $START.cc_to_drone[7].fifo[4,2];
  cc_to_drone[7].fifo[4,1] := $START.cc_to_drone[7].fifo[4,1];
  cc_to_drone[7].fifo[3,5] := $START.cc_to_drone[7].fifo[3,5];
  cc_to_drone[7].fifo[3,4] := $START.cc_to_drone[7].fifo[3,4];
  cc_to_drone[7].fifo[3,3] := $START.cc_to_drone[7].fifo[3,3];
  cc_to_drone[7].fifo[3,2] := $START.cc_to_drone[7].fifo[3,2];
  cc_to_drone[7].fifo[3,1] := $START.cc_to_drone[7].fifo[3,1];
  cc_to_drone[7].fifo[2,5] := $START.cc_to_drone[7].fifo[2,5];
  cc_to_drone[7].fifo[2,4] := $START.cc_to_drone[7].fifo[2,4];
  cc_to_drone[7].fifo[2,3] := $START.cc_to_drone[7].fifo[2,3];
  cc_to_drone[7].fifo[2,2] := $START.cc_to_drone[7].fifo[2,2];
  cc_to_drone[7].fifo[2,1] := $START.cc_to_drone[7].fifo[2,1];
  cc_to_drone[7].fifo[1,5] := $START.cc_to_drone[7].fifo[1,5];
  cc_to_drone[7].fifo[1,4] := $START.cc_to_drone[7].fifo[1,4];
  cc_to_drone[7].fifo[1,3] := $START.cc_to_drone[7].fifo[1,3];
  cc_to_drone[7].fifo[1,2] := $START.cc_to_drone[7].fifo[1,2];
  cc_to_drone[7].fifo[1,1] := $START.cc_to_drone[7].fifo[1,1];
  cc_to_drone[7].spaceavailable := $START.cc_to_drone[7].spaceavailable;
  cc_to_drone[7].outputdata[5] := $START.cc_to_drone[7].outputdata[5];
  cc_to_drone[7].outputdata[4] := $START.cc_to_drone[7].outputdata[4];
  cc_to_drone[7].outputdata[3] := $START.cc_to_drone[7].outputdata[3];
  cc_to_drone[7].outputdata[2] := $START.cc_to_drone[7].outputdata[2];
  cc_to_drone[7].outputdata[1] := $START.cc_to_drone[7].outputdata[1];
  cc_to_drone[7].datavailable := $START.cc_to_drone[7].datavailable;
  $whenCondition24 := $START.$whenCondition24;
  $whenCondition23 := $START.$whenCondition23;
  $whenCondition22 := $START.$whenCondition22;
  $whenCondition22 := $PRE.cc_to_drone[7].readsigint and $PRE.cc_to_drone[7].writesigint;
  $whenCondition23 := $PRE.cc_to_drone[7].readsigint and not $PRE.cc_to_drone[7].writesigint and $PRE.cc_to_drone[7].fifosize >= 1;
  $whenCondition24 := not $PRE.cc_to_drone[7].readsigint and $PRE.cc_to_drone[7].writesigint and $PRE.cc_to_drone[7].fifosize < 10;
  cc_to_drone[7].datavailable := false;
  for j in 1:5 loop
    cc_to_drone[7].outputdata[j] := 0.0;
  end for;
  cc_to_drone[7].spaceavailable := true;
  for i in 1:10 loop
    for j in 1:5 loop
      cc_to_drone[7].fifo[i,j] := 0.0;
    end for;
  end for;
  cc_to_drone[7].fifosize := 0;
  cc_to_drone[7].oldest := 1;
  cc_to_drone[7].newest := 1;
*/
void System_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  modelica_boolean tmp197;
  modelica_boolean tmp198;
  modelica_integer tmp199;
  modelica_integer tmp200;
  modelica_integer tmp201;
  modelica_integer tmp202;
  modelica_integer tmp203;
  modelica_integer tmp204;
  modelica_integer tmp205;
  modelica_integer tmp206;
  modelica_integer tmp207;
  (data->localData[0]->integerVars[42]/* cc_to_drone[7].newest DISCRETE */)  = (data->modelData->integerVarsData[42]/* cc_to_drone[7].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[49]/* cc_to_drone[7].oldest DISCRETE */)  = (data->modelData->integerVarsData[49]/* cc_to_drone[7].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[35]/* cc_to_drone[7].fifosize DISCRETE */)  = (data->modelData->integerVarsData[35]/* cc_to_drone[7].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[734]/* cc_to_drone[7].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[734]/* cc_to_drone[7].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[733]/* cc_to_drone[7].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[733]/* cc_to_drone[7].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[732]/* cc_to_drone[7].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[732]/* cc_to_drone[7].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[731]/* cc_to_drone[7].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[731]/* cc_to_drone[7].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[730]/* cc_to_drone[7].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[730]/* cc_to_drone[7].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[729]/* cc_to_drone[7].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[729]/* cc_to_drone[7].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[728]/* cc_to_drone[7].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[728]/* cc_to_drone[7].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[727]/* cc_to_drone[7].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[727]/* cc_to_drone[7].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[726]/* cc_to_drone[7].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[726]/* cc_to_drone[7].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[725]/* cc_to_drone[7].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[725]/* cc_to_drone[7].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[724]/* cc_to_drone[7].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[724]/* cc_to_drone[7].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[723]/* cc_to_drone[7].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[723]/* cc_to_drone[7].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[722]/* cc_to_drone[7].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[722]/* cc_to_drone[7].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[721]/* cc_to_drone[7].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[721]/* cc_to_drone[7].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[720]/* cc_to_drone[7].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[720]/* cc_to_drone[7].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[719]/* cc_to_drone[7].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[719]/* cc_to_drone[7].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[718]/* cc_to_drone[7].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[718]/* cc_to_drone[7].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[717]/* cc_to_drone[7].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[717]/* cc_to_drone[7].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[716]/* cc_to_drone[7].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[716]/* cc_to_drone[7].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[715]/* cc_to_drone[7].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[715]/* cc_to_drone[7].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[714]/* cc_to_drone[7].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[714]/* cc_to_drone[7].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[713]/* cc_to_drone[7].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[713]/* cc_to_drone[7].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[712]/* cc_to_drone[7].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[712]/* cc_to_drone[7].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[711]/* cc_to_drone[7].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[711]/* cc_to_drone[7].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[710]/* cc_to_drone[7].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[710]/* cc_to_drone[7].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[709]/* cc_to_drone[7].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[709]/* cc_to_drone[7].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[708]/* cc_to_drone[7].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[708]/* cc_to_drone[7].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[707]/* cc_to_drone[7].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[707]/* cc_to_drone[7].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[706]/* cc_to_drone[7].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[706]/* cc_to_drone[7].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[705]/* cc_to_drone[7].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[705]/* cc_to_drone[7].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[704]/* cc_to_drone[7].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[704]/* cc_to_drone[7].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[703]/* cc_to_drone[7].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[703]/* cc_to_drone[7].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[702]/* cc_to_drone[7].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[702]/* cc_to_drone[7].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[701]/* cc_to_drone[7].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[701]/* cc_to_drone[7].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[700]/* cc_to_drone[7].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[700]/* cc_to_drone[7].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[699]/* cc_to_drone[7].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[699]/* cc_to_drone[7].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[698]/* cc_to_drone[7].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[698]/* cc_to_drone[7].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[697]/* cc_to_drone[7].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[697]/* cc_to_drone[7].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[696]/* cc_to_drone[7].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[696]/* cc_to_drone[7].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[695]/* cc_to_drone[7].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[695]/* cc_to_drone[7].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[694]/* cc_to_drone[7].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[694]/* cc_to_drone[7].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[693]/* cc_to_drone[7].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[693]/* cc_to_drone[7].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[692]/* cc_to_drone[7].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[692]/* cc_to_drone[7].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[691]/* cc_to_drone[7].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[691]/* cc_to_drone[7].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[690]/* cc_to_drone[7].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[690]/* cc_to_drone[7].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[689]/* cc_to_drone[7].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[689]/* cc_to_drone[7].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[688]/* cc_to_drone[7].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[688]/* cc_to_drone[7].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[687]/* cc_to_drone[7].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[687]/* cc_to_drone[7].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[686]/* cc_to_drone[7].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[686]/* cc_to_drone[7].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[685]/* cc_to_drone[7].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[685]/* cc_to_drone[7].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[187]/* cc_to_drone[7].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[187]/* cc_to_drone[7].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[769]/* cc_to_drone[7].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[769]/* cc_to_drone[7].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[768]/* cc_to_drone[7].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[768]/* cc_to_drone[7].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[767]/* cc_to_drone[7].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[767]/* cc_to_drone[7].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[766]/* cc_to_drone[7].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[766]/* cc_to_drone[7].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[765]/* cc_to_drone[7].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[765]/* cc_to_drone[7].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[166]/* cc_to_drone[7].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[166]/* cc_to_drone[7].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[16]/* $whenCondition24 DISCRETE */)  = (data->modelData->booleanVarsData[16]/* $whenCondition24 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[15]/* $whenCondition23 DISCRETE */)  = (data->modelData->booleanVarsData[15]/* $whenCondition23 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[14]/* $whenCondition22 DISCRETE */)  = (data->modelData->booleanVarsData[14]/* $whenCondition22 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[14]/* $whenCondition22 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[173]/* cc_to_drone[7].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[194]/* cc_to_drone[7].writesigint DISCRETE */) );

  tmp197 = GreaterEq((data->simulationInfo->integerVarsPre[35]/* cc_to_drone[7].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[15]/* $whenCondition23 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[173]/* cc_to_drone[7].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[194]/* cc_to_drone[7].writesigint DISCRETE */) )) && tmp197);

  tmp198 = Less((data->simulationInfo->integerVarsPre[35]/* cc_to_drone[7].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[16]/* $whenCondition24 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[173]/* cc_to_drone[7].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[194]/* cc_to_drone[7].writesigint DISCRETE */) ) && tmp198);

  (data->localData[0]->booleanVars[166]/* cc_to_drone[7].datavailable DISCRETE */)  = 0;

  tmp199 = ((modelica_integer) 1); tmp200 = 1; tmp201 = ((modelica_integer) 5);
  if(!(((tmp200 > 0) && (tmp199 > tmp201)) || ((tmp200 < 0) && (tmp199 < tmp201))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp199, tmp201); j += tmp200)
    {
      (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 7) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[187]/* cc_to_drone[7].spaceavailable DISCRETE */)  = 1;

  tmp205 = ((modelica_integer) 1); tmp206 = 1; tmp207 = ((modelica_integer) 10);
  if(!(((tmp206 > 0) && (tmp205 > tmp207)) || ((tmp206 < 0) && (tmp205 < tmp207))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp205, tmp207); i += tmp206)
    {
      tmp202 = ((modelica_integer) 1); tmp203 = 1; tmp204 = ((modelica_integer) 5);
      if(!(((tmp203 > 0) && (tmp202 > tmp204)) || ((tmp203 < 0) && (tmp202 < tmp204))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp202, tmp204); j += tmp203)
        {
          (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 7) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[35]/* cc_to_drone[7].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[49]/* cc_to_drone[7].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[42]/* cc_to_drone[7].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_629(DATA *data, threadData_t *threadData);

extern void System_eqFunction_630(DATA *data, threadData_t *threadData);


/*
equation index: 464
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[6].writesigint = $START.cc_to_drone[6].writesigint
*/
void System_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  (data->simulationInfo->booleanVarsPre[193]/* cc_to_drone[6].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[193]/* cc_to_drone[6].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[6].readsigint = $START.cc_to_drone[6].readsigint
*/
void System_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  (data->simulationInfo->booleanVarsPre[172]/* cc_to_drone[6].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[172]/* cc_to_drone[6].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[6].fifosize = $START.cc_to_drone[6].fifosize
*/
void System_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  (data->simulationInfo->integerVarsPre[34]/* cc_to_drone[6].fifosize DISCRETE */)  = (data->modelData->integerVarsData[34]/* cc_to_drone[6].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 467
type: ALGORITHM

  cc_to_drone[6].newest := $START.cc_to_drone[6].newest;
  cc_to_drone[6].oldest := $START.cc_to_drone[6].oldest;
  cc_to_drone[6].fifosize := $START.cc_to_drone[6].fifosize;
  cc_to_drone[6].fifo[10,5] := $START.cc_to_drone[6].fifo[10,5];
  cc_to_drone[6].fifo[10,4] := $START.cc_to_drone[6].fifo[10,4];
  cc_to_drone[6].fifo[10,3] := $START.cc_to_drone[6].fifo[10,3];
  cc_to_drone[6].fifo[10,2] := $START.cc_to_drone[6].fifo[10,2];
  cc_to_drone[6].fifo[10,1] := $START.cc_to_drone[6].fifo[10,1];
  cc_to_drone[6].fifo[9,5] := $START.cc_to_drone[6].fifo[9,5];
  cc_to_drone[6].fifo[9,4] := $START.cc_to_drone[6].fifo[9,4];
  cc_to_drone[6].fifo[9,3] := $START.cc_to_drone[6].fifo[9,3];
  cc_to_drone[6].fifo[9,2] := $START.cc_to_drone[6].fifo[9,2];
  cc_to_drone[6].fifo[9,1] := $START.cc_to_drone[6].fifo[9,1];
  cc_to_drone[6].fifo[8,5] := $START.cc_to_drone[6].fifo[8,5];
  cc_to_drone[6].fifo[8,4] := $START.cc_to_drone[6].fifo[8,4];
  cc_to_drone[6].fifo[8,3] := $START.cc_to_drone[6].fifo[8,3];
  cc_to_drone[6].fifo[8,2] := $START.cc_to_drone[6].fifo[8,2];
  cc_to_drone[6].fifo[8,1] := $START.cc_to_drone[6].fifo[8,1];
  cc_to_drone[6].fifo[7,5] := $START.cc_to_drone[6].fifo[7,5];
  cc_to_drone[6].fifo[7,4] := $START.cc_to_drone[6].fifo[7,4];
  cc_to_drone[6].fifo[7,3] := $START.cc_to_drone[6].fifo[7,3];
  cc_to_drone[6].fifo[7,2] := $START.cc_to_drone[6].fifo[7,2];
  cc_to_drone[6].fifo[7,1] := $START.cc_to_drone[6].fifo[7,1];
  cc_to_drone[6].fifo[6,5] := $START.cc_to_drone[6].fifo[6,5];
  cc_to_drone[6].fifo[6,4] := $START.cc_to_drone[6].fifo[6,4];
  cc_to_drone[6].fifo[6,3] := $START.cc_to_drone[6].fifo[6,3];
  cc_to_drone[6].fifo[6,2] := $START.cc_to_drone[6].fifo[6,2];
  cc_to_drone[6].fifo[6,1] := $START.cc_to_drone[6].fifo[6,1];
  cc_to_drone[6].fifo[5,5] := $START.cc_to_drone[6].fifo[5,5];
  cc_to_drone[6].fifo[5,4] := $START.cc_to_drone[6].fifo[5,4];
  cc_to_drone[6].fifo[5,3] := $START.cc_to_drone[6].fifo[5,3];
  cc_to_drone[6].fifo[5,2] := $START.cc_to_drone[6].fifo[5,2];
  cc_to_drone[6].fifo[5,1] := $START.cc_to_drone[6].fifo[5,1];
  cc_to_drone[6].fifo[4,5] := $START.cc_to_drone[6].fifo[4,5];
  cc_to_drone[6].fifo[4,4] := $START.cc_to_drone[6].fifo[4,4];
  cc_to_drone[6].fifo[4,3] := $START.cc_to_drone[6].fifo[4,3];
  cc_to_drone[6].fifo[4,2] := $START.cc_to_drone[6].fifo[4,2];
  cc_to_drone[6].fifo[4,1] := $START.cc_to_drone[6].fifo[4,1];
  cc_to_drone[6].fifo[3,5] := $START.cc_to_drone[6].fifo[3,5];
  cc_to_drone[6].fifo[3,4] := $START.cc_to_drone[6].fifo[3,4];
  cc_to_drone[6].fifo[3,3] := $START.cc_to_drone[6].fifo[3,3];
  cc_to_drone[6].fifo[3,2] := $START.cc_to_drone[6].fifo[3,2];
  cc_to_drone[6].fifo[3,1] := $START.cc_to_drone[6].fifo[3,1];
  cc_to_drone[6].fifo[2,5] := $START.cc_to_drone[6].fifo[2,5];
  cc_to_drone[6].fifo[2,4] := $START.cc_to_drone[6].fifo[2,4];
  cc_to_drone[6].fifo[2,3] := $START.cc_to_drone[6].fifo[2,3];
  cc_to_drone[6].fifo[2,2] := $START.cc_to_drone[6].fifo[2,2];
  cc_to_drone[6].fifo[2,1] := $START.cc_to_drone[6].fifo[2,1];
  cc_to_drone[6].fifo[1,5] := $START.cc_to_drone[6].fifo[1,5];
  cc_to_drone[6].fifo[1,4] := $START.cc_to_drone[6].fifo[1,4];
  cc_to_drone[6].fifo[1,3] := $START.cc_to_drone[6].fifo[1,3];
  cc_to_drone[6].fifo[1,2] := $START.cc_to_drone[6].fifo[1,2];
  cc_to_drone[6].fifo[1,1] := $START.cc_to_drone[6].fifo[1,1];
  cc_to_drone[6].spaceavailable := $START.cc_to_drone[6].spaceavailable;
  cc_to_drone[6].outputdata[5] := $START.cc_to_drone[6].outputdata[5];
  cc_to_drone[6].outputdata[4] := $START.cc_to_drone[6].outputdata[4];
  cc_to_drone[6].outputdata[3] := $START.cc_to_drone[6].outputdata[3];
  cc_to_drone[6].outputdata[2] := $START.cc_to_drone[6].outputdata[2];
  cc_to_drone[6].outputdata[1] := $START.cc_to_drone[6].outputdata[1];
  cc_to_drone[6].datavailable := $START.cc_to_drone[6].datavailable;
  $whenCondition27 := $START.$whenCondition27;
  $whenCondition26 := $START.$whenCondition26;
  $whenCondition25 := $START.$whenCondition25;
  $whenCondition25 := $PRE.cc_to_drone[6].readsigint and $PRE.cc_to_drone[6].writesigint;
  $whenCondition26 := $PRE.cc_to_drone[6].readsigint and not $PRE.cc_to_drone[6].writesigint and $PRE.cc_to_drone[6].fifosize >= 1;
  $whenCondition27 := not $PRE.cc_to_drone[6].readsigint and $PRE.cc_to_drone[6].writesigint and $PRE.cc_to_drone[6].fifosize < 10;
  cc_to_drone[6].datavailable := false;
  for j in 1:5 loop
    cc_to_drone[6].outputdata[j] := 0.0;
  end for;
  cc_to_drone[6].spaceavailable := true;
  for i in 1:10 loop
    for j in 1:5 loop
      cc_to_drone[6].fifo[i,j] := 0.0;
    end for;
  end for;
  cc_to_drone[6].fifosize := 0;
  cc_to_drone[6].oldest := 1;
  cc_to_drone[6].newest := 1;
*/
void System_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  modelica_boolean tmp208;
  modelica_boolean tmp209;
  modelica_integer tmp210;
  modelica_integer tmp211;
  modelica_integer tmp212;
  modelica_integer tmp213;
  modelica_integer tmp214;
  modelica_integer tmp215;
  modelica_integer tmp216;
  modelica_integer tmp217;
  modelica_integer tmp218;
  (data->localData[0]->integerVars[41]/* cc_to_drone[6].newest DISCRETE */)  = (data->modelData->integerVarsData[41]/* cc_to_drone[6].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[48]/* cc_to_drone[6].oldest DISCRETE */)  = (data->modelData->integerVarsData[48]/* cc_to_drone[6].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[34]/* cc_to_drone[6].fifosize DISCRETE */)  = (data->modelData->integerVarsData[34]/* cc_to_drone[6].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[684]/* cc_to_drone[6].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[684]/* cc_to_drone[6].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[683]/* cc_to_drone[6].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[683]/* cc_to_drone[6].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[682]/* cc_to_drone[6].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[682]/* cc_to_drone[6].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[681]/* cc_to_drone[6].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[681]/* cc_to_drone[6].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[680]/* cc_to_drone[6].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[680]/* cc_to_drone[6].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[679]/* cc_to_drone[6].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[679]/* cc_to_drone[6].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[678]/* cc_to_drone[6].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[678]/* cc_to_drone[6].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[677]/* cc_to_drone[6].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[677]/* cc_to_drone[6].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[676]/* cc_to_drone[6].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[676]/* cc_to_drone[6].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[675]/* cc_to_drone[6].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[675]/* cc_to_drone[6].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[674]/* cc_to_drone[6].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[674]/* cc_to_drone[6].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[673]/* cc_to_drone[6].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[673]/* cc_to_drone[6].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[672]/* cc_to_drone[6].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[672]/* cc_to_drone[6].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[671]/* cc_to_drone[6].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[671]/* cc_to_drone[6].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[670]/* cc_to_drone[6].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[670]/* cc_to_drone[6].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[669]/* cc_to_drone[6].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[669]/* cc_to_drone[6].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[668]/* cc_to_drone[6].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[668]/* cc_to_drone[6].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[667]/* cc_to_drone[6].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[667]/* cc_to_drone[6].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[666]/* cc_to_drone[6].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[666]/* cc_to_drone[6].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[665]/* cc_to_drone[6].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[665]/* cc_to_drone[6].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[664]/* cc_to_drone[6].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[664]/* cc_to_drone[6].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[663]/* cc_to_drone[6].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[663]/* cc_to_drone[6].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[662]/* cc_to_drone[6].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[662]/* cc_to_drone[6].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[661]/* cc_to_drone[6].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[661]/* cc_to_drone[6].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[660]/* cc_to_drone[6].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[660]/* cc_to_drone[6].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[659]/* cc_to_drone[6].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[659]/* cc_to_drone[6].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[658]/* cc_to_drone[6].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[658]/* cc_to_drone[6].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[657]/* cc_to_drone[6].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[657]/* cc_to_drone[6].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[656]/* cc_to_drone[6].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[656]/* cc_to_drone[6].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[655]/* cc_to_drone[6].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[655]/* cc_to_drone[6].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[654]/* cc_to_drone[6].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[654]/* cc_to_drone[6].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[653]/* cc_to_drone[6].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[653]/* cc_to_drone[6].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[652]/* cc_to_drone[6].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[652]/* cc_to_drone[6].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[651]/* cc_to_drone[6].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[651]/* cc_to_drone[6].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[650]/* cc_to_drone[6].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[650]/* cc_to_drone[6].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[649]/* cc_to_drone[6].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[649]/* cc_to_drone[6].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[648]/* cc_to_drone[6].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[648]/* cc_to_drone[6].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[647]/* cc_to_drone[6].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[647]/* cc_to_drone[6].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[646]/* cc_to_drone[6].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[646]/* cc_to_drone[6].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[645]/* cc_to_drone[6].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[645]/* cc_to_drone[6].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[644]/* cc_to_drone[6].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[644]/* cc_to_drone[6].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[643]/* cc_to_drone[6].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[643]/* cc_to_drone[6].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[642]/* cc_to_drone[6].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[642]/* cc_to_drone[6].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[641]/* cc_to_drone[6].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[641]/* cc_to_drone[6].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[640]/* cc_to_drone[6].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[640]/* cc_to_drone[6].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[639]/* cc_to_drone[6].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[639]/* cc_to_drone[6].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[638]/* cc_to_drone[6].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[638]/* cc_to_drone[6].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[637]/* cc_to_drone[6].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[637]/* cc_to_drone[6].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[636]/* cc_to_drone[6].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[636]/* cc_to_drone[6].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[635]/* cc_to_drone[6].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[635]/* cc_to_drone[6].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[186]/* cc_to_drone[6].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[186]/* cc_to_drone[6].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[764]/* cc_to_drone[6].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[764]/* cc_to_drone[6].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[763]/* cc_to_drone[6].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[763]/* cc_to_drone[6].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[762]/* cc_to_drone[6].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[762]/* cc_to_drone[6].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[761]/* cc_to_drone[6].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[761]/* cc_to_drone[6].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[760]/* cc_to_drone[6].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[760]/* cc_to_drone[6].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[165]/* cc_to_drone[6].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[165]/* cc_to_drone[6].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[19]/* $whenCondition27 DISCRETE */)  = (data->modelData->booleanVarsData[19]/* $whenCondition27 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[18]/* $whenCondition26 DISCRETE */)  = (data->modelData->booleanVarsData[18]/* $whenCondition26 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[17]/* $whenCondition25 DISCRETE */)  = (data->modelData->booleanVarsData[17]/* $whenCondition25 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[17]/* $whenCondition25 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[172]/* cc_to_drone[6].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[193]/* cc_to_drone[6].writesigint DISCRETE */) );

  tmp208 = GreaterEq((data->simulationInfo->integerVarsPre[34]/* cc_to_drone[6].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[18]/* $whenCondition26 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[172]/* cc_to_drone[6].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[193]/* cc_to_drone[6].writesigint DISCRETE */) )) && tmp208);

  tmp209 = Less((data->simulationInfo->integerVarsPre[34]/* cc_to_drone[6].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[19]/* $whenCondition27 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[172]/* cc_to_drone[6].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[193]/* cc_to_drone[6].writesigint DISCRETE */) ) && tmp209);

  (data->localData[0]->booleanVars[165]/* cc_to_drone[6].datavailable DISCRETE */)  = 0;

  tmp210 = ((modelica_integer) 1); tmp211 = 1; tmp212 = ((modelica_integer) 5);
  if(!(((tmp211 > 0) && (tmp210 > tmp212)) || ((tmp211 < 0) && (tmp210 < tmp212))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp210, tmp212); j += tmp211)
    {
      (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 6) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[186]/* cc_to_drone[6].spaceavailable DISCRETE */)  = 1;

  tmp216 = ((modelica_integer) 1); tmp217 = 1; tmp218 = ((modelica_integer) 10);
  if(!(((tmp217 > 0) && (tmp216 > tmp218)) || ((tmp217 < 0) && (tmp216 < tmp218))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp216, tmp218); i += tmp217)
    {
      tmp213 = ((modelica_integer) 1); tmp214 = 1; tmp215 = ((modelica_integer) 5);
      if(!(((tmp214 > 0) && (tmp213 > tmp215)) || ((tmp214 < 0) && (tmp213 < tmp215))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp213, tmp215); j += tmp214)
        {
          (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 6) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[34]/* cc_to_drone[6].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[48]/* cc_to_drone[6].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[41]/* cc_to_drone[6].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_644(DATA *data, threadData_t *threadData);

extern void System_eqFunction_643(DATA *data, threadData_t *threadData);


/*
equation index: 470
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[5].writesigint = $START.cc_to_drone[5].writesigint
*/
void System_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  (data->simulationInfo->booleanVarsPre[192]/* cc_to_drone[5].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[192]/* cc_to_drone[5].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[5].readsigint = $START.cc_to_drone[5].readsigint
*/
void System_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  (data->simulationInfo->booleanVarsPre[171]/* cc_to_drone[5].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[171]/* cc_to_drone[5].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[5].fifosize = $START.cc_to_drone[5].fifosize
*/
void System_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  (data->simulationInfo->integerVarsPre[33]/* cc_to_drone[5].fifosize DISCRETE */)  = (data->modelData->integerVarsData[33]/* cc_to_drone[5].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 473
type: ALGORITHM

  cc_to_drone[5].newest := $START.cc_to_drone[5].newest;
  cc_to_drone[5].oldest := $START.cc_to_drone[5].oldest;
  cc_to_drone[5].fifosize := $START.cc_to_drone[5].fifosize;
  cc_to_drone[5].fifo[10,5] := $START.cc_to_drone[5].fifo[10,5];
  cc_to_drone[5].fifo[10,4] := $START.cc_to_drone[5].fifo[10,4];
  cc_to_drone[5].fifo[10,3] := $START.cc_to_drone[5].fifo[10,3];
  cc_to_drone[5].fifo[10,2] := $START.cc_to_drone[5].fifo[10,2];
  cc_to_drone[5].fifo[10,1] := $START.cc_to_drone[5].fifo[10,1];
  cc_to_drone[5].fifo[9,5] := $START.cc_to_drone[5].fifo[9,5];
  cc_to_drone[5].fifo[9,4] := $START.cc_to_drone[5].fifo[9,4];
  cc_to_drone[5].fifo[9,3] := $START.cc_to_drone[5].fifo[9,3];
  cc_to_drone[5].fifo[9,2] := $START.cc_to_drone[5].fifo[9,2];
  cc_to_drone[5].fifo[9,1] := $START.cc_to_drone[5].fifo[9,1];
  cc_to_drone[5].fifo[8,5] := $START.cc_to_drone[5].fifo[8,5];
  cc_to_drone[5].fifo[8,4] := $START.cc_to_drone[5].fifo[8,4];
  cc_to_drone[5].fifo[8,3] := $START.cc_to_drone[5].fifo[8,3];
  cc_to_drone[5].fifo[8,2] := $START.cc_to_drone[5].fifo[8,2];
  cc_to_drone[5].fifo[8,1] := $START.cc_to_drone[5].fifo[8,1];
  cc_to_drone[5].fifo[7,5] := $START.cc_to_drone[5].fifo[7,5];
  cc_to_drone[5].fifo[7,4] := $START.cc_to_drone[5].fifo[7,4];
  cc_to_drone[5].fifo[7,3] := $START.cc_to_drone[5].fifo[7,3];
  cc_to_drone[5].fifo[7,2] := $START.cc_to_drone[5].fifo[7,2];
  cc_to_drone[5].fifo[7,1] := $START.cc_to_drone[5].fifo[7,1];
  cc_to_drone[5].fifo[6,5] := $START.cc_to_drone[5].fifo[6,5];
  cc_to_drone[5].fifo[6,4] := $START.cc_to_drone[5].fifo[6,4];
  cc_to_drone[5].fifo[6,3] := $START.cc_to_drone[5].fifo[6,3];
  cc_to_drone[5].fifo[6,2] := $START.cc_to_drone[5].fifo[6,2];
  cc_to_drone[5].fifo[6,1] := $START.cc_to_drone[5].fifo[6,1];
  cc_to_drone[5].fifo[5,5] := $START.cc_to_drone[5].fifo[5,5];
  cc_to_drone[5].fifo[5,4] := $START.cc_to_drone[5].fifo[5,4];
  cc_to_drone[5].fifo[5,3] := $START.cc_to_drone[5].fifo[5,3];
  cc_to_drone[5].fifo[5,2] := $START.cc_to_drone[5].fifo[5,2];
  cc_to_drone[5].fifo[5,1] := $START.cc_to_drone[5].fifo[5,1];
  cc_to_drone[5].fifo[4,5] := $START.cc_to_drone[5].fifo[4,5];
  cc_to_drone[5].fifo[4,4] := $START.cc_to_drone[5].fifo[4,4];
  cc_to_drone[5].fifo[4,3] := $START.cc_to_drone[5].fifo[4,3];
  cc_to_drone[5].fifo[4,2] := $START.cc_to_drone[5].fifo[4,2];
  cc_to_drone[5].fifo[4,1] := $START.cc_to_drone[5].fifo[4,1];
  cc_to_drone[5].fifo[3,5] := $START.cc_to_drone[5].fifo[3,5];
  cc_to_drone[5].fifo[3,4] := $START.cc_to_drone[5].fifo[3,4];
  cc_to_drone[5].fifo[3,3] := $START.cc_to_drone[5].fifo[3,3];
  cc_to_drone[5].fifo[3,2] := $START.cc_to_drone[5].fifo[3,2];
  cc_to_drone[5].fifo[3,1] := $START.cc_to_drone[5].fifo[3,1];
  cc_to_drone[5].fifo[2,5] := $START.cc_to_drone[5].fifo[2,5];
  cc_to_drone[5].fifo[2,4] := $START.cc_to_drone[5].fifo[2,4];
  cc_to_drone[5].fifo[2,3] := $START.cc_to_drone[5].fifo[2,3];
  cc_to_drone[5].fifo[2,2] := $START.cc_to_drone[5].fifo[2,2];
  cc_to_drone[5].fifo[2,1] := $START.cc_to_drone[5].fifo[2,1];
  cc_to_drone[5].fifo[1,5] := $START.cc_to_drone[5].fifo[1,5];
  cc_to_drone[5].fifo[1,4] := $START.cc_to_drone[5].fifo[1,4];
  cc_to_drone[5].fifo[1,3] := $START.cc_to_drone[5].fifo[1,3];
  cc_to_drone[5].fifo[1,2] := $START.cc_to_drone[5].fifo[1,2];
  cc_to_drone[5].fifo[1,1] := $START.cc_to_drone[5].fifo[1,1];
  cc_to_drone[5].spaceavailable := $START.cc_to_drone[5].spaceavailable;
  cc_to_drone[5].outputdata[5] := $START.cc_to_drone[5].outputdata[5];
  cc_to_drone[5].outputdata[4] := $START.cc_to_drone[5].outputdata[4];
  cc_to_drone[5].outputdata[3] := $START.cc_to_drone[5].outputdata[3];
  cc_to_drone[5].outputdata[2] := $START.cc_to_drone[5].outputdata[2];
  cc_to_drone[5].outputdata[1] := $START.cc_to_drone[5].outputdata[1];
  cc_to_drone[5].datavailable := $START.cc_to_drone[5].datavailable;
  $whenCondition30 := $START.$whenCondition30;
  $whenCondition29 := $START.$whenCondition29;
  $whenCondition28 := $START.$whenCondition28;
  $whenCondition28 := $PRE.cc_to_drone[5].readsigint and $PRE.cc_to_drone[5].writesigint;
  $whenCondition29 := $PRE.cc_to_drone[5].readsigint and not $PRE.cc_to_drone[5].writesigint and $PRE.cc_to_drone[5].fifosize >= 1;
  $whenCondition30 := not $PRE.cc_to_drone[5].readsigint and $PRE.cc_to_drone[5].writesigint and $PRE.cc_to_drone[5].fifosize < 10;
  cc_to_drone[5].datavailable := false;
  for j in 1:5 loop
    cc_to_drone[5].outputdata[j] := 0.0;
  end for;
  cc_to_drone[5].spaceavailable := true;
  for i in 1:10 loop
    for j in 1:5 loop
      cc_to_drone[5].fifo[i,j] := 0.0;
    end for;
  end for;
  cc_to_drone[5].fifosize := 0;
  cc_to_drone[5].oldest := 1;
  cc_to_drone[5].newest := 1;
*/
void System_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  modelica_boolean tmp219;
  modelica_boolean tmp220;
  modelica_integer tmp221;
  modelica_integer tmp222;
  modelica_integer tmp223;
  modelica_integer tmp224;
  modelica_integer tmp225;
  modelica_integer tmp226;
  modelica_integer tmp227;
  modelica_integer tmp228;
  modelica_integer tmp229;
  (data->localData[0]->integerVars[40]/* cc_to_drone[5].newest DISCRETE */)  = (data->modelData->integerVarsData[40]/* cc_to_drone[5].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[47]/* cc_to_drone[5].oldest DISCRETE */)  = (data->modelData->integerVarsData[47]/* cc_to_drone[5].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[33]/* cc_to_drone[5].fifosize DISCRETE */)  = (data->modelData->integerVarsData[33]/* cc_to_drone[5].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[634]/* cc_to_drone[5].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[634]/* cc_to_drone[5].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[633]/* cc_to_drone[5].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[633]/* cc_to_drone[5].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[632]/* cc_to_drone[5].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[632]/* cc_to_drone[5].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[631]/* cc_to_drone[5].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[631]/* cc_to_drone[5].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[630]/* cc_to_drone[5].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[630]/* cc_to_drone[5].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[629]/* cc_to_drone[5].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[629]/* cc_to_drone[5].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[628]/* cc_to_drone[5].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[628]/* cc_to_drone[5].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[627]/* cc_to_drone[5].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[627]/* cc_to_drone[5].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[626]/* cc_to_drone[5].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[626]/* cc_to_drone[5].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[625]/* cc_to_drone[5].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[625]/* cc_to_drone[5].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[624]/* cc_to_drone[5].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[624]/* cc_to_drone[5].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[623]/* cc_to_drone[5].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[623]/* cc_to_drone[5].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[622]/* cc_to_drone[5].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[622]/* cc_to_drone[5].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[621]/* cc_to_drone[5].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[621]/* cc_to_drone[5].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[620]/* cc_to_drone[5].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[620]/* cc_to_drone[5].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[619]/* cc_to_drone[5].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[619]/* cc_to_drone[5].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[618]/* cc_to_drone[5].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[618]/* cc_to_drone[5].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[617]/* cc_to_drone[5].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[617]/* cc_to_drone[5].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[616]/* cc_to_drone[5].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[616]/* cc_to_drone[5].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[615]/* cc_to_drone[5].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[615]/* cc_to_drone[5].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[614]/* cc_to_drone[5].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[614]/* cc_to_drone[5].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[613]/* cc_to_drone[5].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[613]/* cc_to_drone[5].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[612]/* cc_to_drone[5].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[612]/* cc_to_drone[5].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[611]/* cc_to_drone[5].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[611]/* cc_to_drone[5].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[610]/* cc_to_drone[5].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[610]/* cc_to_drone[5].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[609]/* cc_to_drone[5].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[609]/* cc_to_drone[5].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[608]/* cc_to_drone[5].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[608]/* cc_to_drone[5].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[607]/* cc_to_drone[5].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[607]/* cc_to_drone[5].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[606]/* cc_to_drone[5].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[606]/* cc_to_drone[5].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[605]/* cc_to_drone[5].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[605]/* cc_to_drone[5].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[604]/* cc_to_drone[5].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[604]/* cc_to_drone[5].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[603]/* cc_to_drone[5].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[603]/* cc_to_drone[5].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[602]/* cc_to_drone[5].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[602]/* cc_to_drone[5].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[601]/* cc_to_drone[5].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[601]/* cc_to_drone[5].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[600]/* cc_to_drone[5].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[600]/* cc_to_drone[5].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[599]/* cc_to_drone[5].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[599]/* cc_to_drone[5].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[598]/* cc_to_drone[5].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[598]/* cc_to_drone[5].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[597]/* cc_to_drone[5].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[597]/* cc_to_drone[5].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[596]/* cc_to_drone[5].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[596]/* cc_to_drone[5].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[595]/* cc_to_drone[5].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[595]/* cc_to_drone[5].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[594]/* cc_to_drone[5].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[594]/* cc_to_drone[5].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[593]/* cc_to_drone[5].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[593]/* cc_to_drone[5].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[592]/* cc_to_drone[5].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[592]/* cc_to_drone[5].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[591]/* cc_to_drone[5].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[591]/* cc_to_drone[5].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[590]/* cc_to_drone[5].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[590]/* cc_to_drone[5].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[589]/* cc_to_drone[5].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[589]/* cc_to_drone[5].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[588]/* cc_to_drone[5].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[588]/* cc_to_drone[5].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[587]/* cc_to_drone[5].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[587]/* cc_to_drone[5].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[586]/* cc_to_drone[5].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[586]/* cc_to_drone[5].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[585]/* cc_to_drone[5].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[585]/* cc_to_drone[5].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[185]/* cc_to_drone[5].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[185]/* cc_to_drone[5].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[759]/* cc_to_drone[5].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[759]/* cc_to_drone[5].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[758]/* cc_to_drone[5].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[758]/* cc_to_drone[5].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[757]/* cc_to_drone[5].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[757]/* cc_to_drone[5].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[756]/* cc_to_drone[5].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[756]/* cc_to_drone[5].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[755]/* cc_to_drone[5].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[755]/* cc_to_drone[5].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[164]/* cc_to_drone[5].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[164]/* cc_to_drone[5].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[23]/* $whenCondition30 DISCRETE */)  = (data->modelData->booleanVarsData[23]/* $whenCondition30 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[21]/* $whenCondition29 DISCRETE */)  = (data->modelData->booleanVarsData[21]/* $whenCondition29 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[20]/* $whenCondition28 DISCRETE */)  = (data->modelData->booleanVarsData[20]/* $whenCondition28 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[20]/* $whenCondition28 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[171]/* cc_to_drone[5].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[192]/* cc_to_drone[5].writesigint DISCRETE */) );

  tmp219 = GreaterEq((data->simulationInfo->integerVarsPre[33]/* cc_to_drone[5].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[21]/* $whenCondition29 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[171]/* cc_to_drone[5].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[192]/* cc_to_drone[5].writesigint DISCRETE */) )) && tmp219);

  tmp220 = Less((data->simulationInfo->integerVarsPre[33]/* cc_to_drone[5].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[23]/* $whenCondition30 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[171]/* cc_to_drone[5].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[192]/* cc_to_drone[5].writesigint DISCRETE */) ) && tmp220);

  (data->localData[0]->booleanVars[164]/* cc_to_drone[5].datavailable DISCRETE */)  = 0;

  tmp221 = ((modelica_integer) 1); tmp222 = 1; tmp223 = ((modelica_integer) 5);
  if(!(((tmp222 > 0) && (tmp221 > tmp223)) || ((tmp222 < 0) && (tmp221 < tmp223))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp221, tmp223); j += tmp222)
    {
      (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 5) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[185]/* cc_to_drone[5].spaceavailable DISCRETE */)  = 1;

  tmp227 = ((modelica_integer) 1); tmp228 = 1; tmp229 = ((modelica_integer) 10);
  if(!(((tmp228 > 0) && (tmp227 > tmp229)) || ((tmp228 < 0) && (tmp227 < tmp229))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp227, tmp229); i += tmp228)
    {
      tmp224 = ((modelica_integer) 1); tmp225 = 1; tmp226 = ((modelica_integer) 5);
      if(!(((tmp225 > 0) && (tmp224 > tmp226)) || ((tmp225 < 0) && (tmp224 < tmp226))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp224, tmp226); j += tmp225)
        {
          (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 5) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[33]/* cc_to_drone[5].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[47]/* cc_to_drone[5].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[40]/* cc_to_drone[5].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_589(DATA *data, threadData_t *threadData);

extern void System_eqFunction_588(DATA *data, threadData_t *threadData);


/*
equation index: 476
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[4].writesigint = $START.cc_to_drone[4].writesigint
*/
void System_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  (data->simulationInfo->booleanVarsPre[191]/* cc_to_drone[4].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[191]/* cc_to_drone[4].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[4].readsigint = $START.cc_to_drone[4].readsigint
*/
void System_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  (data->simulationInfo->booleanVarsPre[170]/* cc_to_drone[4].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[170]/* cc_to_drone[4].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[4].fifosize = $START.cc_to_drone[4].fifosize
*/
void System_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  (data->simulationInfo->integerVarsPre[32]/* cc_to_drone[4].fifosize DISCRETE */)  = (data->modelData->integerVarsData[32]/* cc_to_drone[4].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 479
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
  $whenCondition33 := $START.$whenCondition33;
  $whenCondition32 := $START.$whenCondition32;
  $whenCondition31 := $START.$whenCondition31;
  $whenCondition31 := $PRE.cc_to_drone[4].readsigint and $PRE.cc_to_drone[4].writesigint;
  $whenCondition32 := $PRE.cc_to_drone[4].readsigint and not $PRE.cc_to_drone[4].writesigint and $PRE.cc_to_drone[4].fifosize >= 1;
  $whenCondition33 := not $PRE.cc_to_drone[4].readsigint and $PRE.cc_to_drone[4].writesigint and $PRE.cc_to_drone[4].fifosize < 10;
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
void System_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  modelica_boolean tmp230;
  modelica_boolean tmp231;
  modelica_integer tmp232;
  modelica_integer tmp233;
  modelica_integer tmp234;
  modelica_integer tmp235;
  modelica_integer tmp236;
  modelica_integer tmp237;
  modelica_integer tmp238;
  modelica_integer tmp239;
  modelica_integer tmp240;
  (data->localData[0]->integerVars[39]/* cc_to_drone[4].newest DISCRETE */)  = (data->modelData->integerVarsData[39]/* cc_to_drone[4].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[46]/* cc_to_drone[4].oldest DISCRETE */)  = (data->modelData->integerVarsData[46]/* cc_to_drone[4].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[32]/* cc_to_drone[4].fifosize DISCRETE */)  = (data->modelData->integerVarsData[32]/* cc_to_drone[4].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[584]/* cc_to_drone[4].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[584]/* cc_to_drone[4].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[583]/* cc_to_drone[4].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[583]/* cc_to_drone[4].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[582]/* cc_to_drone[4].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[582]/* cc_to_drone[4].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[581]/* cc_to_drone[4].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[581]/* cc_to_drone[4].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[580]/* cc_to_drone[4].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[580]/* cc_to_drone[4].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[579]/* cc_to_drone[4].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[579]/* cc_to_drone[4].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[578]/* cc_to_drone[4].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[578]/* cc_to_drone[4].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[577]/* cc_to_drone[4].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[577]/* cc_to_drone[4].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[576]/* cc_to_drone[4].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[576]/* cc_to_drone[4].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[575]/* cc_to_drone[4].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[575]/* cc_to_drone[4].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[574]/* cc_to_drone[4].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[574]/* cc_to_drone[4].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[573]/* cc_to_drone[4].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[573]/* cc_to_drone[4].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[572]/* cc_to_drone[4].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[572]/* cc_to_drone[4].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[571]/* cc_to_drone[4].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[571]/* cc_to_drone[4].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[570]/* cc_to_drone[4].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[570]/* cc_to_drone[4].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[569]/* cc_to_drone[4].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[569]/* cc_to_drone[4].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[568]/* cc_to_drone[4].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[568]/* cc_to_drone[4].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[567]/* cc_to_drone[4].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[567]/* cc_to_drone[4].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[566]/* cc_to_drone[4].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[566]/* cc_to_drone[4].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[565]/* cc_to_drone[4].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[565]/* cc_to_drone[4].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[564]/* cc_to_drone[4].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[564]/* cc_to_drone[4].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[563]/* cc_to_drone[4].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[563]/* cc_to_drone[4].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[562]/* cc_to_drone[4].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[562]/* cc_to_drone[4].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[561]/* cc_to_drone[4].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[561]/* cc_to_drone[4].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[560]/* cc_to_drone[4].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[560]/* cc_to_drone[4].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[559]/* cc_to_drone[4].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[559]/* cc_to_drone[4].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[558]/* cc_to_drone[4].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[558]/* cc_to_drone[4].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[557]/* cc_to_drone[4].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[557]/* cc_to_drone[4].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[556]/* cc_to_drone[4].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[556]/* cc_to_drone[4].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[555]/* cc_to_drone[4].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[555]/* cc_to_drone[4].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[554]/* cc_to_drone[4].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[554]/* cc_to_drone[4].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[553]/* cc_to_drone[4].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[553]/* cc_to_drone[4].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[552]/* cc_to_drone[4].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[552]/* cc_to_drone[4].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[551]/* cc_to_drone[4].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[551]/* cc_to_drone[4].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[550]/* cc_to_drone[4].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[550]/* cc_to_drone[4].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[549]/* cc_to_drone[4].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[549]/* cc_to_drone[4].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[548]/* cc_to_drone[4].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[548]/* cc_to_drone[4].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[547]/* cc_to_drone[4].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[547]/* cc_to_drone[4].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[546]/* cc_to_drone[4].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[546]/* cc_to_drone[4].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[545]/* cc_to_drone[4].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[545]/* cc_to_drone[4].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[544]/* cc_to_drone[4].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[544]/* cc_to_drone[4].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[543]/* cc_to_drone[4].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[543]/* cc_to_drone[4].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[542]/* cc_to_drone[4].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[542]/* cc_to_drone[4].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[541]/* cc_to_drone[4].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[541]/* cc_to_drone[4].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[540]/* cc_to_drone[4].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[540]/* cc_to_drone[4].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[539]/* cc_to_drone[4].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[539]/* cc_to_drone[4].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[538]/* cc_to_drone[4].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[538]/* cc_to_drone[4].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[537]/* cc_to_drone[4].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[537]/* cc_to_drone[4].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[536]/* cc_to_drone[4].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[536]/* cc_to_drone[4].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[535]/* cc_to_drone[4].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[535]/* cc_to_drone[4].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[184]/* cc_to_drone[4].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[184]/* cc_to_drone[4].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[754]/* cc_to_drone[4].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[754]/* cc_to_drone[4].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[753]/* cc_to_drone[4].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[753]/* cc_to_drone[4].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[752]/* cc_to_drone[4].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[752]/* cc_to_drone[4].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[751]/* cc_to_drone[4].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[751]/* cc_to_drone[4].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[750]/* cc_to_drone[4].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[750]/* cc_to_drone[4].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[163]/* cc_to_drone[4].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[163]/* cc_to_drone[4].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[26]/* $whenCondition33 DISCRETE */)  = (data->modelData->booleanVarsData[26]/* $whenCondition33 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[25]/* $whenCondition32 DISCRETE */)  = (data->modelData->booleanVarsData[25]/* $whenCondition32 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[24]/* $whenCondition31 DISCRETE */)  = (data->modelData->booleanVarsData[24]/* $whenCondition31 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[24]/* $whenCondition31 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[170]/* cc_to_drone[4].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[191]/* cc_to_drone[4].writesigint DISCRETE */) );

  tmp230 = GreaterEq((data->simulationInfo->integerVarsPre[32]/* cc_to_drone[4].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[25]/* $whenCondition32 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[170]/* cc_to_drone[4].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[191]/* cc_to_drone[4].writesigint DISCRETE */) )) && tmp230);

  tmp231 = Less((data->simulationInfo->integerVarsPre[32]/* cc_to_drone[4].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[26]/* $whenCondition33 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[170]/* cc_to_drone[4].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[191]/* cc_to_drone[4].writesigint DISCRETE */) ) && tmp231);

  (data->localData[0]->booleanVars[163]/* cc_to_drone[4].datavailable DISCRETE */)  = 0;

  tmp232 = ((modelica_integer) 1); tmp233 = 1; tmp234 = ((modelica_integer) 5);
  if(!(((tmp233 > 0) && (tmp232 > tmp234)) || ((tmp233 < 0) && (tmp232 < tmp234))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp232, tmp234); j += tmp233)
    {
      (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[184]/* cc_to_drone[4].spaceavailable DISCRETE */)  = 1;

  tmp238 = ((modelica_integer) 1); tmp239 = 1; tmp240 = ((modelica_integer) 10);
  if(!(((tmp239 > 0) && (tmp238 > tmp240)) || ((tmp239 < 0) && (tmp238 < tmp240))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp238, tmp240); i += tmp239)
    {
      tmp235 = ((modelica_integer) 1); tmp236 = 1; tmp237 = ((modelica_integer) 5);
      if(!(((tmp236 > 0) && (tmp235 > tmp237)) || ((tmp236 < 0) && (tmp235 < tmp237))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp235, tmp237); j += tmp236)
        {
          (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[32]/* cc_to_drone[4].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[46]/* cc_to_drone[4].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[39]/* cc_to_drone[4].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_614(DATA *data, threadData_t *threadData);

extern void System_eqFunction_613(DATA *data, threadData_t *threadData);


/*
equation index: 482
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[3].writesigint = $START.cc_to_drone[3].writesigint
*/
void System_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  (data->simulationInfo->booleanVarsPre[190]/* cc_to_drone[3].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[190]/* cc_to_drone[3].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[3].readsigint = $START.cc_to_drone[3].readsigint
*/
void System_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  (data->simulationInfo->booleanVarsPre[169]/* cc_to_drone[3].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[169]/* cc_to_drone[3].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[3].fifosize = $START.cc_to_drone[3].fifosize
*/
void System_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  (data->simulationInfo->integerVarsPre[31]/* cc_to_drone[3].fifosize DISCRETE */)  = (data->modelData->integerVarsData[31]/* cc_to_drone[3].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 485
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
  $whenCondition36 := $START.$whenCondition36;
  $whenCondition35 := $START.$whenCondition35;
  $whenCondition34 := $START.$whenCondition34;
  $whenCondition34 := $PRE.cc_to_drone[3].readsigint and $PRE.cc_to_drone[3].writesigint;
  $whenCondition35 := $PRE.cc_to_drone[3].readsigint and not $PRE.cc_to_drone[3].writesigint and $PRE.cc_to_drone[3].fifosize >= 1;
  $whenCondition36 := not $PRE.cc_to_drone[3].readsigint and $PRE.cc_to_drone[3].writesigint and $PRE.cc_to_drone[3].fifosize < 10;
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
void System_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  modelica_boolean tmp241;
  modelica_boolean tmp242;
  modelica_integer tmp243;
  modelica_integer tmp244;
  modelica_integer tmp245;
  modelica_integer tmp246;
  modelica_integer tmp247;
  modelica_integer tmp248;
  modelica_integer tmp249;
  modelica_integer tmp250;
  modelica_integer tmp251;
  (data->localData[0]->integerVars[38]/* cc_to_drone[3].newest DISCRETE */)  = (data->modelData->integerVarsData[38]/* cc_to_drone[3].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[45]/* cc_to_drone[3].oldest DISCRETE */)  = (data->modelData->integerVarsData[45]/* cc_to_drone[3].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[31]/* cc_to_drone[3].fifosize DISCRETE */)  = (data->modelData->integerVarsData[31]/* cc_to_drone[3].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[534]/* cc_to_drone[3].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[534]/* cc_to_drone[3].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[533]/* cc_to_drone[3].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[533]/* cc_to_drone[3].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[532]/* cc_to_drone[3].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[532]/* cc_to_drone[3].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[531]/* cc_to_drone[3].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[531]/* cc_to_drone[3].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[530]/* cc_to_drone[3].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[530]/* cc_to_drone[3].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[529]/* cc_to_drone[3].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[529]/* cc_to_drone[3].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[528]/* cc_to_drone[3].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[528]/* cc_to_drone[3].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[527]/* cc_to_drone[3].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[527]/* cc_to_drone[3].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[526]/* cc_to_drone[3].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[526]/* cc_to_drone[3].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[525]/* cc_to_drone[3].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[525]/* cc_to_drone[3].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[524]/* cc_to_drone[3].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[524]/* cc_to_drone[3].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[523]/* cc_to_drone[3].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[523]/* cc_to_drone[3].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[522]/* cc_to_drone[3].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[522]/* cc_to_drone[3].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[521]/* cc_to_drone[3].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[521]/* cc_to_drone[3].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[520]/* cc_to_drone[3].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[520]/* cc_to_drone[3].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[519]/* cc_to_drone[3].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[519]/* cc_to_drone[3].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[518]/* cc_to_drone[3].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[518]/* cc_to_drone[3].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[517]/* cc_to_drone[3].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[517]/* cc_to_drone[3].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[516]/* cc_to_drone[3].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[516]/* cc_to_drone[3].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[515]/* cc_to_drone[3].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[515]/* cc_to_drone[3].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[514]/* cc_to_drone[3].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[514]/* cc_to_drone[3].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[513]/* cc_to_drone[3].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[513]/* cc_to_drone[3].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[512]/* cc_to_drone[3].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[512]/* cc_to_drone[3].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[511]/* cc_to_drone[3].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[511]/* cc_to_drone[3].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[510]/* cc_to_drone[3].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[510]/* cc_to_drone[3].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[509]/* cc_to_drone[3].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[509]/* cc_to_drone[3].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[508]/* cc_to_drone[3].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[508]/* cc_to_drone[3].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[507]/* cc_to_drone[3].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[507]/* cc_to_drone[3].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[506]/* cc_to_drone[3].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[506]/* cc_to_drone[3].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[505]/* cc_to_drone[3].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[505]/* cc_to_drone[3].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[504]/* cc_to_drone[3].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[504]/* cc_to_drone[3].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[503]/* cc_to_drone[3].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[503]/* cc_to_drone[3].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[502]/* cc_to_drone[3].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[502]/* cc_to_drone[3].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[501]/* cc_to_drone[3].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[501]/* cc_to_drone[3].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[500]/* cc_to_drone[3].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[500]/* cc_to_drone[3].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[499]/* cc_to_drone[3].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[499]/* cc_to_drone[3].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[498]/* cc_to_drone[3].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[498]/* cc_to_drone[3].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[497]/* cc_to_drone[3].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[497]/* cc_to_drone[3].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[496]/* cc_to_drone[3].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[496]/* cc_to_drone[3].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[495]/* cc_to_drone[3].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[495]/* cc_to_drone[3].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[494]/* cc_to_drone[3].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[494]/* cc_to_drone[3].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[493]/* cc_to_drone[3].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[493]/* cc_to_drone[3].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[492]/* cc_to_drone[3].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[492]/* cc_to_drone[3].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[491]/* cc_to_drone[3].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[491]/* cc_to_drone[3].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[490]/* cc_to_drone[3].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[490]/* cc_to_drone[3].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[489]/* cc_to_drone[3].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[489]/* cc_to_drone[3].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[488]/* cc_to_drone[3].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[488]/* cc_to_drone[3].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[487]/* cc_to_drone[3].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[487]/* cc_to_drone[3].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[486]/* cc_to_drone[3].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[486]/* cc_to_drone[3].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[485]/* cc_to_drone[3].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[485]/* cc_to_drone[3].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[183]/* cc_to_drone[3].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[183]/* cc_to_drone[3].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[749]/* cc_to_drone[3].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[749]/* cc_to_drone[3].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[748]/* cc_to_drone[3].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[748]/* cc_to_drone[3].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[747]/* cc_to_drone[3].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[747]/* cc_to_drone[3].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[746]/* cc_to_drone[3].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[746]/* cc_to_drone[3].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[745]/* cc_to_drone[3].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[745]/* cc_to_drone[3].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[162]/* cc_to_drone[3].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[162]/* cc_to_drone[3].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[29]/* $whenCondition36 DISCRETE */)  = (data->modelData->booleanVarsData[29]/* $whenCondition36 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[28]/* $whenCondition35 DISCRETE */)  = (data->modelData->booleanVarsData[28]/* $whenCondition35 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[27]/* $whenCondition34 DISCRETE */)  = (data->modelData->booleanVarsData[27]/* $whenCondition34 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[27]/* $whenCondition34 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[169]/* cc_to_drone[3].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[190]/* cc_to_drone[3].writesigint DISCRETE */) );

  tmp241 = GreaterEq((data->simulationInfo->integerVarsPre[31]/* cc_to_drone[3].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[28]/* $whenCondition35 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[169]/* cc_to_drone[3].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[190]/* cc_to_drone[3].writesigint DISCRETE */) )) && tmp241);

  tmp242 = Less((data->simulationInfo->integerVarsPre[31]/* cc_to_drone[3].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[29]/* $whenCondition36 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[169]/* cc_to_drone[3].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[190]/* cc_to_drone[3].writesigint DISCRETE */) ) && tmp242);

  (data->localData[0]->booleanVars[162]/* cc_to_drone[3].datavailable DISCRETE */)  = 0;

  tmp243 = ((modelica_integer) 1); tmp244 = 1; tmp245 = ((modelica_integer) 5);
  if(!(((tmp244 > 0) && (tmp243 > tmp245)) || ((tmp244 < 0) && (tmp243 < tmp245))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp243, tmp245); j += tmp244)
    {
      (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[183]/* cc_to_drone[3].spaceavailable DISCRETE */)  = 1;

  tmp249 = ((modelica_integer) 1); tmp250 = 1; tmp251 = ((modelica_integer) 10);
  if(!(((tmp250 > 0) && (tmp249 > tmp251)) || ((tmp250 < 0) && (tmp249 < tmp251))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp249, tmp251); i += tmp250)
    {
      tmp246 = ((modelica_integer) 1); tmp247 = 1; tmp248 = ((modelica_integer) 5);
      if(!(((tmp247 > 0) && (tmp246 > tmp248)) || ((tmp247 < 0) && (tmp246 < tmp248))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp246, tmp248); j += tmp247)
        {
          (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[31]/* cc_to_drone[3].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[45]/* cc_to_drone[3].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[38]/* cc_to_drone[3].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_625(DATA *data, threadData_t *threadData);

extern void System_eqFunction_626(DATA *data, threadData_t *threadData);


/*
equation index: 488
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[2].writesigint = $START.cc_to_drone[2].writesigint
*/
void System_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  (data->simulationInfo->booleanVarsPre[189]/* cc_to_drone[2].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[189]/* cc_to_drone[2].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[2].readsigint = $START.cc_to_drone[2].readsigint
*/
void System_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  (data->simulationInfo->booleanVarsPre[168]/* cc_to_drone[2].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[168]/* cc_to_drone[2].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[2].fifosize = $START.cc_to_drone[2].fifosize
*/
void System_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  (data->simulationInfo->integerVarsPre[30]/* cc_to_drone[2].fifosize DISCRETE */)  = (data->modelData->integerVarsData[30]/* cc_to_drone[2].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 491
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
  $whenCondition39 := $START.$whenCondition39;
  $whenCondition38 := $START.$whenCondition38;
  $whenCondition37 := $START.$whenCondition37;
  $whenCondition37 := $PRE.cc_to_drone[2].readsigint and $PRE.cc_to_drone[2].writesigint;
  $whenCondition38 := $PRE.cc_to_drone[2].readsigint and not $PRE.cc_to_drone[2].writesigint and $PRE.cc_to_drone[2].fifosize >= 1;
  $whenCondition39 := not $PRE.cc_to_drone[2].readsigint and $PRE.cc_to_drone[2].writesigint and $PRE.cc_to_drone[2].fifosize < 10;
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
void System_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  modelica_boolean tmp252;
  modelica_boolean tmp253;
  modelica_integer tmp254;
  modelica_integer tmp255;
  modelica_integer tmp256;
  modelica_integer tmp257;
  modelica_integer tmp258;
  modelica_integer tmp259;
  modelica_integer tmp260;
  modelica_integer tmp261;
  modelica_integer tmp262;
  (data->localData[0]->integerVars[37]/* cc_to_drone[2].newest DISCRETE */)  = (data->modelData->integerVarsData[37]/* cc_to_drone[2].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[44]/* cc_to_drone[2].oldest DISCRETE */)  = (data->modelData->integerVarsData[44]/* cc_to_drone[2].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[30]/* cc_to_drone[2].fifosize DISCRETE */)  = (data->modelData->integerVarsData[30]/* cc_to_drone[2].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[484]/* cc_to_drone[2].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[484]/* cc_to_drone[2].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[483]/* cc_to_drone[2].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[483]/* cc_to_drone[2].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[482]/* cc_to_drone[2].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[482]/* cc_to_drone[2].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[481]/* cc_to_drone[2].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[481]/* cc_to_drone[2].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[480]/* cc_to_drone[2].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[480]/* cc_to_drone[2].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[479]/* cc_to_drone[2].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[479]/* cc_to_drone[2].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[478]/* cc_to_drone[2].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[478]/* cc_to_drone[2].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[477]/* cc_to_drone[2].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[477]/* cc_to_drone[2].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[476]/* cc_to_drone[2].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[476]/* cc_to_drone[2].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[475]/* cc_to_drone[2].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[475]/* cc_to_drone[2].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[474]/* cc_to_drone[2].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[474]/* cc_to_drone[2].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[473]/* cc_to_drone[2].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[473]/* cc_to_drone[2].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[472]/* cc_to_drone[2].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[472]/* cc_to_drone[2].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[471]/* cc_to_drone[2].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[471]/* cc_to_drone[2].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[470]/* cc_to_drone[2].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[470]/* cc_to_drone[2].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[469]/* cc_to_drone[2].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[469]/* cc_to_drone[2].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[468]/* cc_to_drone[2].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[468]/* cc_to_drone[2].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[467]/* cc_to_drone[2].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[467]/* cc_to_drone[2].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[466]/* cc_to_drone[2].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[466]/* cc_to_drone[2].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[465]/* cc_to_drone[2].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[465]/* cc_to_drone[2].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[464]/* cc_to_drone[2].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[464]/* cc_to_drone[2].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[463]/* cc_to_drone[2].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[463]/* cc_to_drone[2].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[462]/* cc_to_drone[2].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[462]/* cc_to_drone[2].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[461]/* cc_to_drone[2].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[461]/* cc_to_drone[2].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[460]/* cc_to_drone[2].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[460]/* cc_to_drone[2].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[459]/* cc_to_drone[2].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[459]/* cc_to_drone[2].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[458]/* cc_to_drone[2].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[458]/* cc_to_drone[2].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[457]/* cc_to_drone[2].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[457]/* cc_to_drone[2].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[456]/* cc_to_drone[2].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[456]/* cc_to_drone[2].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[455]/* cc_to_drone[2].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[455]/* cc_to_drone[2].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[454]/* cc_to_drone[2].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[454]/* cc_to_drone[2].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[453]/* cc_to_drone[2].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[453]/* cc_to_drone[2].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[452]/* cc_to_drone[2].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[452]/* cc_to_drone[2].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[451]/* cc_to_drone[2].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[451]/* cc_to_drone[2].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[450]/* cc_to_drone[2].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[450]/* cc_to_drone[2].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[449]/* cc_to_drone[2].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[449]/* cc_to_drone[2].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[448]/* cc_to_drone[2].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[448]/* cc_to_drone[2].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[447]/* cc_to_drone[2].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[447]/* cc_to_drone[2].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[446]/* cc_to_drone[2].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[446]/* cc_to_drone[2].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[445]/* cc_to_drone[2].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[445]/* cc_to_drone[2].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[444]/* cc_to_drone[2].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[444]/* cc_to_drone[2].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[443]/* cc_to_drone[2].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[443]/* cc_to_drone[2].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[442]/* cc_to_drone[2].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[442]/* cc_to_drone[2].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[441]/* cc_to_drone[2].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[441]/* cc_to_drone[2].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[440]/* cc_to_drone[2].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[440]/* cc_to_drone[2].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[439]/* cc_to_drone[2].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[439]/* cc_to_drone[2].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[438]/* cc_to_drone[2].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[438]/* cc_to_drone[2].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[437]/* cc_to_drone[2].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[437]/* cc_to_drone[2].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[436]/* cc_to_drone[2].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[436]/* cc_to_drone[2].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[435]/* cc_to_drone[2].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[435]/* cc_to_drone[2].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[182]/* cc_to_drone[2].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[182]/* cc_to_drone[2].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[744]/* cc_to_drone[2].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[744]/* cc_to_drone[2].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[743]/* cc_to_drone[2].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[743]/* cc_to_drone[2].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[742]/* cc_to_drone[2].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[742]/* cc_to_drone[2].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[741]/* cc_to_drone[2].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[741]/* cc_to_drone[2].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[740]/* cc_to_drone[2].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[740]/* cc_to_drone[2].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[161]/* cc_to_drone[2].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[161]/* cc_to_drone[2].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[32]/* $whenCondition39 DISCRETE */)  = (data->modelData->booleanVarsData[32]/* $whenCondition39 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[31]/* $whenCondition38 DISCRETE */)  = (data->modelData->booleanVarsData[31]/* $whenCondition38 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[30]/* $whenCondition37 DISCRETE */)  = (data->modelData->booleanVarsData[30]/* $whenCondition37 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[30]/* $whenCondition37 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[168]/* cc_to_drone[2].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[189]/* cc_to_drone[2].writesigint DISCRETE */) );

  tmp252 = GreaterEq((data->simulationInfo->integerVarsPre[30]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[31]/* $whenCondition38 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[168]/* cc_to_drone[2].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[189]/* cc_to_drone[2].writesigint DISCRETE */) )) && tmp252);

  tmp253 = Less((data->simulationInfo->integerVarsPre[30]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[32]/* $whenCondition39 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[168]/* cc_to_drone[2].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[189]/* cc_to_drone[2].writesigint DISCRETE */) ) && tmp253);

  (data->localData[0]->booleanVars[161]/* cc_to_drone[2].datavailable DISCRETE */)  = 0;

  tmp254 = ((modelica_integer) 1); tmp255 = 1; tmp256 = ((modelica_integer) 5);
  if(!(((tmp255 > 0) && (tmp254 > tmp256)) || ((tmp255 < 0) && (tmp254 < tmp256))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp254, tmp256); j += tmp255)
    {
      (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[182]/* cc_to_drone[2].spaceavailable DISCRETE */)  = 1;

  tmp260 = ((modelica_integer) 1); tmp261 = 1; tmp262 = ((modelica_integer) 10);
  if(!(((tmp261 > 0) && (tmp260 > tmp262)) || ((tmp261 < 0) && (tmp260 < tmp262))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp260, tmp262); i += tmp261)
    {
      tmp257 = ((modelica_integer) 1); tmp258 = 1; tmp259 = ((modelica_integer) 5);
      if(!(((tmp258 > 0) && (tmp257 > tmp259)) || ((tmp258 < 0) && (tmp257 < tmp259))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp257, tmp259); j += tmp258)
        {
          (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[30]/* cc_to_drone[2].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[44]/* cc_to_drone[2].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[37]/* cc_to_drone[2].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_617(DATA *data, threadData_t *threadData);

extern void System_eqFunction_618(DATA *data, threadData_t *threadData);


/*
equation index: 494
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].writesigint = $START.cc_to_drone[1].writesigint
*/
void System_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  (data->simulationInfo->booleanVarsPre[188]/* cc_to_drone[1].writesigint DISCRETE */)  = (data->modelData->booleanVarsData[188]/* cc_to_drone[1].writesigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].readsigint = $START.cc_to_drone[1].readsigint
*/
void System_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  (data->simulationInfo->booleanVarsPre[167]/* cc_to_drone[1].readsigint DISCRETE */)  = (data->modelData->booleanVarsData[167]/* cc_to_drone[1].readsigint DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
$PRE.cc_to_drone[1].fifosize = $START.cc_to_drone[1].fifosize
*/
void System_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  (data->simulationInfo->integerVarsPre[29]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->modelData->integerVarsData[29]/* cc_to_drone[1].fifosize DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 497
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
  $whenCondition42 := $START.$whenCondition42;
  $whenCondition41 := $START.$whenCondition41;
  $whenCondition40 := $START.$whenCondition40;
  $whenCondition40 := $PRE.cc_to_drone[1].readsigint and $PRE.cc_to_drone[1].writesigint;
  $whenCondition41 := $PRE.cc_to_drone[1].readsigint and not $PRE.cc_to_drone[1].writesigint and $PRE.cc_to_drone[1].fifosize >= 1;
  $whenCondition42 := not $PRE.cc_to_drone[1].readsigint and $PRE.cc_to_drone[1].writesigint and $PRE.cc_to_drone[1].fifosize < 10;
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
void System_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  modelica_boolean tmp263;
  modelica_boolean tmp264;
  modelica_integer tmp265;
  modelica_integer tmp266;
  modelica_integer tmp267;
  modelica_integer tmp268;
  modelica_integer tmp269;
  modelica_integer tmp270;
  modelica_integer tmp271;
  modelica_integer tmp272;
  modelica_integer tmp273;
  (data->localData[0]->integerVars[36]/* cc_to_drone[1].newest DISCRETE */)  = (data->modelData->integerVarsData[36]/* cc_to_drone[1].newest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[43]/* cc_to_drone[1].oldest DISCRETE */)  = (data->modelData->integerVarsData[43]/* cc_to_drone[1].oldest DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[29]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->modelData->integerVarsData[29]/* cc_to_drone[1].fifosize DISCRETE */).attribute .start;

  (data->localData[0]->realVars[434]/* cc_to_drone[1].fifo[10,5] DISCRETE */)  = (data->modelData->realVarsData[434]/* cc_to_drone[1].fifo[10,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[433]/* cc_to_drone[1].fifo[10,4] DISCRETE */)  = (data->modelData->realVarsData[433]/* cc_to_drone[1].fifo[10,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[432]/* cc_to_drone[1].fifo[10,3] DISCRETE */)  = (data->modelData->realVarsData[432]/* cc_to_drone[1].fifo[10,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[431]/* cc_to_drone[1].fifo[10,2] DISCRETE */)  = (data->modelData->realVarsData[431]/* cc_to_drone[1].fifo[10,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[430]/* cc_to_drone[1].fifo[10,1] DISCRETE */)  = (data->modelData->realVarsData[430]/* cc_to_drone[1].fifo[10,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[429]/* cc_to_drone[1].fifo[9,5] DISCRETE */)  = (data->modelData->realVarsData[429]/* cc_to_drone[1].fifo[9,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[428]/* cc_to_drone[1].fifo[9,4] DISCRETE */)  = (data->modelData->realVarsData[428]/* cc_to_drone[1].fifo[9,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[427]/* cc_to_drone[1].fifo[9,3] DISCRETE */)  = (data->modelData->realVarsData[427]/* cc_to_drone[1].fifo[9,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[426]/* cc_to_drone[1].fifo[9,2] DISCRETE */)  = (data->modelData->realVarsData[426]/* cc_to_drone[1].fifo[9,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[425]/* cc_to_drone[1].fifo[9,1] DISCRETE */)  = (data->modelData->realVarsData[425]/* cc_to_drone[1].fifo[9,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[424]/* cc_to_drone[1].fifo[8,5] DISCRETE */)  = (data->modelData->realVarsData[424]/* cc_to_drone[1].fifo[8,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[423]/* cc_to_drone[1].fifo[8,4] DISCRETE */)  = (data->modelData->realVarsData[423]/* cc_to_drone[1].fifo[8,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[422]/* cc_to_drone[1].fifo[8,3] DISCRETE */)  = (data->modelData->realVarsData[422]/* cc_to_drone[1].fifo[8,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[421]/* cc_to_drone[1].fifo[8,2] DISCRETE */)  = (data->modelData->realVarsData[421]/* cc_to_drone[1].fifo[8,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[420]/* cc_to_drone[1].fifo[8,1] DISCRETE */)  = (data->modelData->realVarsData[420]/* cc_to_drone[1].fifo[8,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[419]/* cc_to_drone[1].fifo[7,5] DISCRETE */)  = (data->modelData->realVarsData[419]/* cc_to_drone[1].fifo[7,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[418]/* cc_to_drone[1].fifo[7,4] DISCRETE */)  = (data->modelData->realVarsData[418]/* cc_to_drone[1].fifo[7,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[417]/* cc_to_drone[1].fifo[7,3] DISCRETE */)  = (data->modelData->realVarsData[417]/* cc_to_drone[1].fifo[7,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[416]/* cc_to_drone[1].fifo[7,2] DISCRETE */)  = (data->modelData->realVarsData[416]/* cc_to_drone[1].fifo[7,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[415]/* cc_to_drone[1].fifo[7,1] DISCRETE */)  = (data->modelData->realVarsData[415]/* cc_to_drone[1].fifo[7,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[414]/* cc_to_drone[1].fifo[6,5] DISCRETE */)  = (data->modelData->realVarsData[414]/* cc_to_drone[1].fifo[6,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[413]/* cc_to_drone[1].fifo[6,4] DISCRETE */)  = (data->modelData->realVarsData[413]/* cc_to_drone[1].fifo[6,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[412]/* cc_to_drone[1].fifo[6,3] DISCRETE */)  = (data->modelData->realVarsData[412]/* cc_to_drone[1].fifo[6,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[411]/* cc_to_drone[1].fifo[6,2] DISCRETE */)  = (data->modelData->realVarsData[411]/* cc_to_drone[1].fifo[6,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[410]/* cc_to_drone[1].fifo[6,1] DISCRETE */)  = (data->modelData->realVarsData[410]/* cc_to_drone[1].fifo[6,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[409]/* cc_to_drone[1].fifo[5,5] DISCRETE */)  = (data->modelData->realVarsData[409]/* cc_to_drone[1].fifo[5,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[408]/* cc_to_drone[1].fifo[5,4] DISCRETE */)  = (data->modelData->realVarsData[408]/* cc_to_drone[1].fifo[5,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[407]/* cc_to_drone[1].fifo[5,3] DISCRETE */)  = (data->modelData->realVarsData[407]/* cc_to_drone[1].fifo[5,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[406]/* cc_to_drone[1].fifo[5,2] DISCRETE */)  = (data->modelData->realVarsData[406]/* cc_to_drone[1].fifo[5,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[405]/* cc_to_drone[1].fifo[5,1] DISCRETE */)  = (data->modelData->realVarsData[405]/* cc_to_drone[1].fifo[5,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[404]/* cc_to_drone[1].fifo[4,5] DISCRETE */)  = (data->modelData->realVarsData[404]/* cc_to_drone[1].fifo[4,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[403]/* cc_to_drone[1].fifo[4,4] DISCRETE */)  = (data->modelData->realVarsData[403]/* cc_to_drone[1].fifo[4,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[402]/* cc_to_drone[1].fifo[4,3] DISCRETE */)  = (data->modelData->realVarsData[402]/* cc_to_drone[1].fifo[4,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[401]/* cc_to_drone[1].fifo[4,2] DISCRETE */)  = (data->modelData->realVarsData[401]/* cc_to_drone[1].fifo[4,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[400]/* cc_to_drone[1].fifo[4,1] DISCRETE */)  = (data->modelData->realVarsData[400]/* cc_to_drone[1].fifo[4,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[399]/* cc_to_drone[1].fifo[3,5] DISCRETE */)  = (data->modelData->realVarsData[399]/* cc_to_drone[1].fifo[3,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[398]/* cc_to_drone[1].fifo[3,4] DISCRETE */)  = (data->modelData->realVarsData[398]/* cc_to_drone[1].fifo[3,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[397]/* cc_to_drone[1].fifo[3,3] DISCRETE */)  = (data->modelData->realVarsData[397]/* cc_to_drone[1].fifo[3,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[396]/* cc_to_drone[1].fifo[3,2] DISCRETE */)  = (data->modelData->realVarsData[396]/* cc_to_drone[1].fifo[3,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[395]/* cc_to_drone[1].fifo[3,1] DISCRETE */)  = (data->modelData->realVarsData[395]/* cc_to_drone[1].fifo[3,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[394]/* cc_to_drone[1].fifo[2,5] DISCRETE */)  = (data->modelData->realVarsData[394]/* cc_to_drone[1].fifo[2,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[393]/* cc_to_drone[1].fifo[2,4] DISCRETE */)  = (data->modelData->realVarsData[393]/* cc_to_drone[1].fifo[2,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[392]/* cc_to_drone[1].fifo[2,3] DISCRETE */)  = (data->modelData->realVarsData[392]/* cc_to_drone[1].fifo[2,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[391]/* cc_to_drone[1].fifo[2,2] DISCRETE */)  = (data->modelData->realVarsData[391]/* cc_to_drone[1].fifo[2,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[390]/* cc_to_drone[1].fifo[2,1] DISCRETE */)  = (data->modelData->realVarsData[390]/* cc_to_drone[1].fifo[2,1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[389]/* cc_to_drone[1].fifo[1,5] DISCRETE */)  = (data->modelData->realVarsData[389]/* cc_to_drone[1].fifo[1,5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[388]/* cc_to_drone[1].fifo[1,4] DISCRETE */)  = (data->modelData->realVarsData[388]/* cc_to_drone[1].fifo[1,4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[387]/* cc_to_drone[1].fifo[1,3] DISCRETE */)  = (data->modelData->realVarsData[387]/* cc_to_drone[1].fifo[1,3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[386]/* cc_to_drone[1].fifo[1,2] DISCRETE */)  = (data->modelData->realVarsData[386]/* cc_to_drone[1].fifo[1,2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)  = (data->modelData->realVarsData[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[181]/* cc_to_drone[1].spaceavailable DISCRETE */)  = (data->modelData->booleanVarsData[181]/* cc_to_drone[1].spaceavailable DISCRETE */).attribute .start;

  (data->localData[0]->realVars[739]/* cc_to_drone[1].outputdata[5] DISCRETE */)  = (data->modelData->realVarsData[739]/* cc_to_drone[1].outputdata[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[738]/* cc_to_drone[1].outputdata[4] DISCRETE */)  = (data->modelData->realVarsData[738]/* cc_to_drone[1].outputdata[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[737]/* cc_to_drone[1].outputdata[3] DISCRETE */)  = (data->modelData->realVarsData[737]/* cc_to_drone[1].outputdata[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[736]/* cc_to_drone[1].outputdata[2] DISCRETE */)  = (data->modelData->realVarsData[736]/* cc_to_drone[1].outputdata[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */)  = (data->modelData->realVarsData[735]/* cc_to_drone[1].outputdata[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[160]/* cc_to_drone[1].datavailable DISCRETE */)  = (data->modelData->booleanVarsData[160]/* cc_to_drone[1].datavailable DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[36]/* $whenCondition42 DISCRETE */)  = (data->modelData->booleanVarsData[36]/* $whenCondition42 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[35]/* $whenCondition41 DISCRETE */)  = (data->modelData->booleanVarsData[35]/* $whenCondition41 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[34]/* $whenCondition40 DISCRETE */)  = (data->modelData->booleanVarsData[34]/* $whenCondition40 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[34]/* $whenCondition40 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[167]/* cc_to_drone[1].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[188]/* cc_to_drone[1].writesigint DISCRETE */) );

  tmp263 = GreaterEq((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[35]/* $whenCondition41 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[167]/* cc_to_drone[1].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[188]/* cc_to_drone[1].writesigint DISCRETE */) )) && tmp263);

  tmp264 = Less((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[36]/* $whenCondition42 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[167]/* cc_to_drone[1].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[188]/* cc_to_drone[1].writesigint DISCRETE */) ) && tmp264);

  (data->localData[0]->booleanVars[160]/* cc_to_drone[1].datavailable DISCRETE */)  = 0;

  tmp265 = ((modelica_integer) 1); tmp266 = 1; tmp267 = ((modelica_integer) 5);
  if(!(((tmp266 > 0) && (tmp265 > tmp267)) || ((tmp266 < 0) && (tmp265 < tmp267))))
  {
    modelica_integer j;
    for(j = ((modelica_integer) 1); in_range_integer(j, tmp265, tmp267); j += tmp266)
    {
      (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = 0.0;
    }
  }

  (data->localData[0]->booleanVars[181]/* cc_to_drone[1].spaceavailable DISCRETE */)  = 1;

  tmp271 = ((modelica_integer) 1); tmp272 = 1; tmp273 = ((modelica_integer) 10);
  if(!(((tmp272 > 0) && (tmp271 > tmp273)) || ((tmp272 < 0) && (tmp271 < tmp273))))
  {
    modelica_integer i;
    for(i = ((modelica_integer) 1); in_range_integer(i, tmp271, tmp273); i += tmp272)
    {
      tmp268 = ((modelica_integer) 1); tmp269 = 1; tmp270 = ((modelica_integer) 5);
      if(!(((tmp269 > 0) && (tmp268 > tmp270)) || ((tmp269 < 0) && (tmp268 < tmp270))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp268, tmp270); j += tmp269)
        {
          (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
        }
      }
    }
  }

  (data->localData[0]->integerVars[29]/* cc_to_drone[1].fifosize DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[43]/* cc_to_drone[1].oldest DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->integerVars[36]/* cc_to_drone[1].newest DISCRETE */)  = ((modelica_integer) 1);
  TRACE_POP
}
extern void System_eqFunction_633(DATA *data, threadData_t *threadData);

extern void System_eqFunction_634(DATA *data, threadData_t *threadData);


/*
equation index: 500
type: SIMPLE_ASSIGN
$PRE.d[7].ctrl.droneDead = $START.d[7].ctrl.droneDead
*/
void System_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  (data->simulationInfo->booleanVarsPre[208]/* d[7].ctrl.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[208]/* d[7].ctrl.droneDead DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 501
type: ALGORITHM

  $whenCondition48 := $START.$whenCondition48;
  $whenCondition47 := $START.$whenCondition47;
  $whenCondition47 := false;
  $whenCondition48 := false;
*/
void System_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  (data->localData[0]->booleanVars[42]/* $whenCondition48 DISCRETE */)  = (data->modelData->booleanVarsData[42]/* $whenCondition48 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[41]/* $whenCondition47 DISCRETE */)  = (data->modelData->booleanVarsData[41]/* $whenCondition47 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[41]/* $whenCondition47 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[42]/* $whenCondition48 DISCRETE */)  = 0;
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
$PRE.d[6].ctrl.droneDead = $START.d[6].ctrl.droneDead
*/
void System_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  (data->simulationInfo->booleanVarsPre[207]/* d[6].ctrl.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[207]/* d[6].ctrl.droneDead DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 503
type: ALGORITHM

  $whenCondition53 := $START.$whenCondition53;
  $whenCondition52 := $START.$whenCondition52;
  $whenCondition52 := false;
  $whenCondition53 := false;
*/
void System_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  (data->localData[0]->booleanVars[48]/* $whenCondition53 DISCRETE */)  = (data->modelData->booleanVarsData[48]/* $whenCondition53 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[47]/* $whenCondition52 DISCRETE */)  = (data->modelData->booleanVarsData[47]/* $whenCondition52 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[47]/* $whenCondition52 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[48]/* $whenCondition53 DISCRETE */)  = 0;
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
$PRE.d[5].ctrl.droneDead = $START.d[5].ctrl.droneDead
*/
void System_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  (data->simulationInfo->booleanVarsPre[206]/* d[5].ctrl.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[206]/* d[5].ctrl.droneDead DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 505
type: ALGORITHM

  $whenCondition58 := $START.$whenCondition58;
  $whenCondition57 := $START.$whenCondition57;
  $whenCondition57 := false;
  $whenCondition58 := false;
*/
void System_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  (data->localData[0]->booleanVars[53]/* $whenCondition58 DISCRETE */)  = (data->modelData->booleanVarsData[53]/* $whenCondition58 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[52]/* $whenCondition57 DISCRETE */)  = (data->modelData->booleanVarsData[52]/* $whenCondition57 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[52]/* $whenCondition57 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[53]/* $whenCondition58 DISCRETE */)  = 0;
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
$PRE.d[4].ctrl.droneDead = $START.d[4].ctrl.droneDead
*/
void System_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  (data->simulationInfo->booleanVarsPre[205]/* d[4].ctrl.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[205]/* d[4].ctrl.droneDead DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 507
type: ALGORITHM

  $whenCondition63 := $START.$whenCondition63;
  $whenCondition62 := $START.$whenCondition62;
  $whenCondition62 := false;
  $whenCondition63 := false;
*/
void System_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  (data->localData[0]->booleanVars[59]/* $whenCondition63 DISCRETE */)  = (data->modelData->booleanVarsData[59]/* $whenCondition63 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[58]/* $whenCondition62 DISCRETE */)  = (data->modelData->booleanVarsData[58]/* $whenCondition62 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[58]/* $whenCondition62 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[59]/* $whenCondition63 DISCRETE */)  = 0;
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
$PRE.d[3].ctrl.droneDead = $START.d[3].ctrl.droneDead
*/
void System_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  (data->simulationInfo->booleanVarsPre[204]/* d[3].ctrl.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[204]/* d[3].ctrl.droneDead DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 509
type: ALGORITHM

  $whenCondition68 := $START.$whenCondition68;
  $whenCondition67 := $START.$whenCondition67;
  $whenCondition67 := false;
  $whenCondition68 := false;
*/
void System_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  (data->localData[0]->booleanVars[64]/* $whenCondition68 DISCRETE */)  = (data->modelData->booleanVarsData[64]/* $whenCondition68 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[63]/* $whenCondition67 DISCRETE */)  = (data->modelData->booleanVarsData[63]/* $whenCondition67 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[63]/* $whenCondition67 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[64]/* $whenCondition68 DISCRETE */)  = 0;
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
$PRE.d[2].ctrl.droneDead = $START.d[2].ctrl.droneDead
*/
void System_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  (data->simulationInfo->booleanVarsPre[203]/* d[2].ctrl.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[203]/* d[2].ctrl.droneDead DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 511
type: ALGORITHM

  $whenCondition73 := $START.$whenCondition73;
  $whenCondition72 := $START.$whenCondition72;
  $whenCondition72 := false;
  $whenCondition73 := false;
*/
void System_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  (data->localData[0]->booleanVars[70]/* $whenCondition73 DISCRETE */)  = (data->modelData->booleanVarsData[70]/* $whenCondition73 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[69]/* $whenCondition72 DISCRETE */)  = (data->modelData->booleanVarsData[69]/* $whenCondition72 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[69]/* $whenCondition72 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[70]/* $whenCondition73 DISCRETE */)  = 0;
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.droneDead = $START.d[1].ctrl.droneDead
*/
void System_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  (data->simulationInfo->booleanVarsPre[202]/* d[1].ctrl.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[202]/* d[1].ctrl.droneDead DISCRETE */).attribute .start;
  TRACE_POP
}

/*
equation index: 513
type: ALGORITHM

  $whenCondition78 := $START.$whenCondition78;
  $whenCondition77 := $START.$whenCondition77;
  $whenCondition77 := false;
  $whenCondition78 := false;
*/
void System_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  (data->localData[0]->booleanVars[75]/* $whenCondition78 DISCRETE */)  = (data->modelData->booleanVarsData[75]/* $whenCondition78 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[74]/* $whenCondition77 DISCRETE */)  = (data->modelData->booleanVarsData[74]/* $whenCondition77 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[74]/* $whenCondition77 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[75]/* $whenCondition78 DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_527(DATA *data, threadData_t *threadData);

extern void System_eqFunction_526(DATA *data, threadData_t *threadData);

extern void System_eqFunction_525(DATA *data, threadData_t *threadData);

extern void System_eqFunction_524(DATA *data, threadData_t *threadData);

extern void System_eqFunction_523(DATA *data, threadData_t *threadData);

extern void System_eqFunction_522(DATA *data, threadData_t *threadData);

extern void System_eqFunction_521(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void System_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  System_eqFunction_1(data, threadData);
  System_eqFunction_663(data, threadData);
  System_eqFunction_655(data, threadData);
  System_eqFunction_658(data, threadData);
  System_eqFunction_662(data, threadData);
  System_eqFunction_659(data, threadData);
  System_eqFunction_656(data, threadData);
  System_eqFunction_660(data, threadData);
  System_eqFunction_654(data, threadData);
  System_eqFunction_653(data, threadData);
  System_eqFunction_672(data, threadData);
  System_eqFunction_12(data, threadData);
  System_eqFunction_13(data, threadData);
  System_eqFunction_14(data, threadData);
  System_eqFunction_15(data, threadData);
  System_eqFunction_16(data, threadData);
  System_eqFunction_17(data, threadData);
  System_eqFunction_635(data, threadData);
  System_eqFunction_568(data, threadData);
  System_eqFunction_564(data, threadData);
  System_eqFunction_627(data, threadData);
  System_eqFunction_591(data, threadData);
  System_eqFunction_565(data, threadData);
  System_eqFunction_578(data, threadData);
  System_eqFunction_645(data, threadData);
  System_eqFunction_621(data, threadData);
  System_eqFunction_569(data, threadData);
  System_eqFunction_641(data, threadData);
  System_eqFunction_567(data, threadData);
  System_eqFunction_570(data, threadData);
  System_eqFunction_592(data, threadData);
  System_eqFunction_576(data, threadData);
  System_eqFunction_582(data, threadData);
  System_eqFunction_583(data, threadData);
  System_eqFunction_584(data, threadData);
  System_eqFunction_571(data, threadData);
  System_eqFunction_586(data, threadData);
  System_eqFunction_639(data, threadData);
  System_eqFunction_600(data, threadData);
  System_eqFunction_590(data, threadData);
  System_eqFunction_594(data, threadData);
  System_eqFunction_585(data, threadData);
  System_eqFunction_595(data, threadData);
  System_eqFunction_611(data, threadData);
  System_eqFunction_596(data, threadData);
  System_eqFunction_647(data, threadData);
  System_eqFunction_619(data, threadData);
  System_eqFunction_623(data, threadData);
  System_eqFunction_604(data, threadData);
  System_eqFunction_566(data, threadData);
  System_eqFunction_605(data, threadData);
  System_eqFunction_598(data, threadData);
  System_eqFunction_573(data, threadData);
  System_eqFunction_607(data, threadData);
  System_eqFunction_606(data, threadData);
  System_eqFunction_608(data, threadData);
  System_eqFunction_615(data, threadData);
  System_eqFunction_609(data, threadData);
  System_eqFunction_637(data, threadData);
  System_eqFunction_580(data, threadData);
  System_eqFunction_575(data, threadData);
  System_eqFunction_631(data, threadData);
  System_eqFunction_620(data, threadData);
  System_eqFunction_622(data, threadData);
  System_eqFunction_572(data, threadData);
  System_eqFunction_602(data, threadData);
  System_eqFunction_67(data, threadData);
  System_eqFunction_68(data, threadData);
  System_eqFunction_69(data, threadData);
  System_eqFunction_70(data, threadData);
  System_eqFunction_71(data, threadData);
  System_eqFunction_72(data, threadData);
  System_eqFunction_73(data, threadData);
  System_eqFunction_74(data, threadData);
  System_eqFunction_75(data, threadData);
  System_eqFunction_76(data, threadData);
  System_eqFunction_77(data, threadData);
  System_eqFunction_78(data, threadData);
  System_eqFunction_79(data, threadData);
  System_eqFunction_80(data, threadData);
  System_eqFunction_81(data, threadData);
  System_eqFunction_82(data, threadData);
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
  System_eqFunction_681(data, threadData);
  System_eqFunction_688(data, threadData);
  System_eqFunction_677(data, threadData);
  System_eqFunction_678(data, threadData);
  System_eqFunction_679(data, threadData);
  System_eqFunction_685(data, threadData);
  System_eqFunction_683(data, threadData);
  System_eqFunction_687(data, threadData);
  System_eqFunction_680(data, threadData);
  System_eqFunction_682(data, threadData);
  System_eqFunction_106(data, threadData);
  System_eqFunction_107(data, threadData);
  System_eqFunction_108(data, threadData);
  System_eqFunction_109(data, threadData);
  System_eqFunction_110(data, threadData);
  System_eqFunction_710(data, threadData);
  System_eqFunction_711(data, threadData);
  System_eqFunction_707(data, threadData);
  System_eqFunction_702(data, threadData);
  System_eqFunction_703(data, threadData);
  System_eqFunction_708(data, threadData);
  System_eqFunction_720(data, threadData);
  System_eqFunction_705(data, threadData);
  System_eqFunction_706(data, threadData);
  System_eqFunction_704(data, threadData);
  System_eqFunction_121(data, threadData);
  System_eqFunction_122(data, threadData);
  System_eqFunction_123(data, threadData);
  System_eqFunction_124(data, threadData);
  System_eqFunction_125(data, threadData);
  System_eqFunction_730(data, threadData);
  System_eqFunction_733(data, threadData);
  System_eqFunction_735(data, threadData);
  System_eqFunction_729(data, threadData);
  System_eqFunction_734(data, threadData);
  System_eqFunction_727(data, threadData);
  System_eqFunction_731(data, threadData);
  System_eqFunction_746(data, threadData);
  System_eqFunction_744(data, threadData);
  System_eqFunction_745(data, threadData);
  System_eqFunction_136(data, threadData);
  System_eqFunction_137(data, threadData);
  System_eqFunction_138(data, threadData);
  System_eqFunction_139(data, threadData);
  System_eqFunction_140(data, threadData);
  System_eqFunction_753(data, threadData);
  System_eqFunction_764(data, threadData);
  System_eqFunction_760(data, threadData);
  System_eqFunction_759(data, threadData);
  System_eqFunction_763(data, threadData);
  System_eqFunction_761(data, threadData);
  System_eqFunction_755(data, threadData);
  System_eqFunction_757(data, threadData);
  System_eqFunction_754(data, threadData);
  System_eqFunction_758(data, threadData);
  System_eqFunction_151(data, threadData);
  System_eqFunction_152(data, threadData);
  System_eqFunction_153(data, threadData);
  System_eqFunction_154(data, threadData);
  System_eqFunction_155(data, threadData);
  System_eqFunction_786(data, threadData);
  System_eqFunction_784(data, threadData);
  System_eqFunction_782(data, threadData);
  System_eqFunction_785(data, threadData);
  System_eqFunction_789(data, threadData);
  System_eqFunction_787(data, threadData);
  System_eqFunction_779(data, threadData);
  System_eqFunction_783(data, threadData);
  System_eqFunction_781(data, threadData);
  System_eqFunction_778(data, threadData);
  System_eqFunction_166(data, threadData);
  System_eqFunction_167(data, threadData);
  System_eqFunction_168(data, threadData);
  System_eqFunction_169(data, threadData);
  System_eqFunction_170(data, threadData);
  System_eqFunction_806(data, threadData);
  System_eqFunction_804(data, threadData);
  System_eqFunction_811(data, threadData);
  System_eqFunction_803(data, threadData);
  System_eqFunction_805(data, threadData);
  System_eqFunction_820(data, threadData);
  System_eqFunction_809(data, threadData);
  System_eqFunction_807(data, threadData);
  System_eqFunction_802(data, threadData);
  System_eqFunction_808(data, threadData);
  System_eqFunction_181(data, threadData);
  System_eqFunction_182(data, threadData);
  System_eqFunction_183(data, threadData);
  System_eqFunction_184(data, threadData);
  System_eqFunction_185(data, threadData);
  System_eqFunction_186(data, threadData);
  System_eqFunction_187(data, threadData);
  System_eqFunction_651(data, threadData);
  System_eqFunction_673(data, threadData);
  System_eqFunction_190(data, threadData);
  System_eqFunction_191(data, threadData);
  System_eqFunction_192(data, threadData);
  System_eqFunction_530(data, threadData);
  System_eqFunction_194(data, threadData);
  System_eqFunction_195(data, threadData);
  System_eqFunction_529(data, threadData);
  System_eqFunction_197(data, threadData);
  System_eqFunction_198(data, threadData);
  System_eqFunction_199(data, threadData);
  System_eqFunction_531(data, threadData);
  System_eqFunction_201(data, threadData);
  System_eqFunction_824(data, threadData);
  System_eqFunction_203(data, threadData);
  System_eqFunction_826(data, threadData);
  System_eqFunction_205(data, threadData);
  System_eqFunction_206(data, threadData);
  System_eqFunction_207(data, threadData);
  System_eqFunction_532(data, threadData);
  System_eqFunction_209(data, threadData);
  System_eqFunction_827(data, threadData);
  System_eqFunction_211(data, threadData);
  System_eqFunction_829(data, threadData);
  System_eqFunction_213(data, threadData);
  System_eqFunction_214(data, threadData);
  System_eqFunction_215(data, threadData);
  System_eqFunction_698(data, threadData);
  System_eqFunction_697(data, threadData);
  System_eqFunction_218(data, threadData);
  System_eqFunction_219(data, threadData);
  System_eqFunction_220(data, threadData);
  System_eqFunction_535(data, threadData);
  System_eqFunction_222(data, threadData);
  System_eqFunction_223(data, threadData);
  System_eqFunction_534(data, threadData);
  System_eqFunction_225(data, threadData);
  System_eqFunction_226(data, threadData);
  System_eqFunction_227(data, threadData);
  System_eqFunction_536(data, threadData);
  System_eqFunction_229(data, threadData);
  System_eqFunction_830(data, threadData);
  System_eqFunction_231(data, threadData);
  System_eqFunction_832(data, threadData);
  System_eqFunction_233(data, threadData);
  System_eqFunction_234(data, threadData);
  System_eqFunction_235(data, threadData);
  System_eqFunction_537(data, threadData);
  System_eqFunction_237(data, threadData);
  System_eqFunction_833(data, threadData);
  System_eqFunction_239(data, threadData);
  System_eqFunction_835(data, threadData);
  System_eqFunction_241(data, threadData);
  System_eqFunction_242(data, threadData);
  System_eqFunction_243(data, threadData);
  System_eqFunction_723(data, threadData);
  System_eqFunction_722(data, threadData);
  System_eqFunction_246(data, threadData);
  System_eqFunction_247(data, threadData);
  System_eqFunction_248(data, threadData);
  System_eqFunction_540(data, threadData);
  System_eqFunction_250(data, threadData);
  System_eqFunction_251(data, threadData);
  System_eqFunction_539(data, threadData);
  System_eqFunction_253(data, threadData);
  System_eqFunction_254(data, threadData);
  System_eqFunction_255(data, threadData);
  System_eqFunction_541(data, threadData);
  System_eqFunction_257(data, threadData);
  System_eqFunction_836(data, threadData);
  System_eqFunction_259(data, threadData);
  System_eqFunction_838(data, threadData);
  System_eqFunction_261(data, threadData);
  System_eqFunction_262(data, threadData);
  System_eqFunction_263(data, threadData);
  System_eqFunction_542(data, threadData);
  System_eqFunction_265(data, threadData);
  System_eqFunction_839(data, threadData);
  System_eqFunction_267(data, threadData);
  System_eqFunction_841(data, threadData);
  System_eqFunction_269(data, threadData);
  System_eqFunction_270(data, threadData);
  System_eqFunction_271(data, threadData);
  System_eqFunction_748(data, threadData);
  System_eqFunction_747(data, threadData);
  System_eqFunction_274(data, threadData);
  System_eqFunction_275(data, threadData);
  System_eqFunction_276(data, threadData);
  System_eqFunction_545(data, threadData);
  System_eqFunction_278(data, threadData);
  System_eqFunction_279(data, threadData);
  System_eqFunction_544(data, threadData);
  System_eqFunction_281(data, threadData);
  System_eqFunction_282(data, threadData);
  System_eqFunction_283(data, threadData);
  System_eqFunction_546(data, threadData);
  System_eqFunction_285(data, threadData);
  System_eqFunction_842(data, threadData);
  System_eqFunction_287(data, threadData);
  System_eqFunction_844(data, threadData);
  System_eqFunction_289(data, threadData);
  System_eqFunction_290(data, threadData);
  System_eqFunction_291(data, threadData);
  System_eqFunction_547(data, threadData);
  System_eqFunction_293(data, threadData);
  System_eqFunction_845(data, threadData);
  System_eqFunction_295(data, threadData);
  System_eqFunction_847(data, threadData);
  System_eqFunction_297(data, threadData);
  System_eqFunction_298(data, threadData);
  System_eqFunction_299(data, threadData);
  System_eqFunction_751(data, threadData);
  System_eqFunction_773(data, threadData);
  System_eqFunction_302(data, threadData);
  System_eqFunction_303(data, threadData);
  System_eqFunction_304(data, threadData);
  System_eqFunction_550(data, threadData);
  System_eqFunction_306(data, threadData);
  System_eqFunction_307(data, threadData);
  System_eqFunction_549(data, threadData);
  System_eqFunction_309(data, threadData);
  System_eqFunction_310(data, threadData);
  System_eqFunction_311(data, threadData);
  System_eqFunction_551(data, threadData);
  System_eqFunction_313(data, threadData);
  System_eqFunction_848(data, threadData);
  System_eqFunction_315(data, threadData);
  System_eqFunction_850(data, threadData);
  System_eqFunction_317(data, threadData);
  System_eqFunction_318(data, threadData);
  System_eqFunction_319(data, threadData);
  System_eqFunction_552(data, threadData);
  System_eqFunction_321(data, threadData);
  System_eqFunction_851(data, threadData);
  System_eqFunction_323(data, threadData);
  System_eqFunction_853(data, threadData);
  System_eqFunction_325(data, threadData);
  System_eqFunction_326(data, threadData);
  System_eqFunction_327(data, threadData);
  System_eqFunction_776(data, threadData);
  System_eqFunction_798(data, threadData);
  System_eqFunction_330(data, threadData);
  System_eqFunction_331(data, threadData);
  System_eqFunction_332(data, threadData);
  System_eqFunction_555(data, threadData);
  System_eqFunction_334(data, threadData);
  System_eqFunction_335(data, threadData);
  System_eqFunction_554(data, threadData);
  System_eqFunction_337(data, threadData);
  System_eqFunction_338(data, threadData);
  System_eqFunction_339(data, threadData);
  System_eqFunction_556(data, threadData);
  System_eqFunction_341(data, threadData);
  System_eqFunction_854(data, threadData);
  System_eqFunction_343(data, threadData);
  System_eqFunction_856(data, threadData);
  System_eqFunction_345(data, threadData);
  System_eqFunction_346(data, threadData);
  System_eqFunction_347(data, threadData);
  System_eqFunction_557(data, threadData);
  System_eqFunction_349(data, threadData);
  System_eqFunction_857(data, threadData);
  System_eqFunction_351(data, threadData);
  System_eqFunction_859(data, threadData);
  System_eqFunction_353(data, threadData);
  System_eqFunction_354(data, threadData);
  System_eqFunction_355(data, threadData);
  System_eqFunction_823(data, threadData);
  System_eqFunction_822(data, threadData);
  System_eqFunction_358(data, threadData);
  System_eqFunction_359(data, threadData);
  System_eqFunction_360(data, threadData);
  System_eqFunction_560(data, threadData);
  System_eqFunction_362(data, threadData);
  System_eqFunction_363(data, threadData);
  System_eqFunction_559(data, threadData);
  System_eqFunction_365(data, threadData);
  System_eqFunction_366(data, threadData);
  System_eqFunction_367(data, threadData);
  System_eqFunction_561(data, threadData);
  System_eqFunction_369(data, threadData);
  System_eqFunction_860(data, threadData);
  System_eqFunction_371(data, threadData);
  System_eqFunction_862(data, threadData);
  System_eqFunction_373(data, threadData);
  System_eqFunction_374(data, threadData);
  System_eqFunction_375(data, threadData);
  System_eqFunction_562(data, threadData);
  System_eqFunction_377(data, threadData);
  System_eqFunction_863(data, threadData);
  System_eqFunction_379(data, threadData);
  System_eqFunction_865(data, threadData);
  System_eqFunction_381(data, threadData);
  System_eqFunction_382(data, threadData);
  System_eqFunction_383(data, threadData);
  System_eqFunction_384(data, threadData);
  System_eqFunction_669(data, threadData);
  System_eqFunction_671(data, threadData);
  System_eqFunction_668(data, threadData);
  System_eqFunction_665(data, threadData);
  System_eqFunction_667(data, threadData);
  System_eqFunction_666(data, threadData);
  System_eqFunction_670(data, threadData);
  System_eqFunction_392(data, threadData);
  System_eqFunction_393(data, threadData);
  System_eqFunction_394(data, threadData);
  System_eqFunction_395(data, threadData);
  System_eqFunction_696(data, threadData);
  System_eqFunction_690(data, threadData);
  System_eqFunction_691(data, threadData);
  System_eqFunction_694(data, threadData);
  System_eqFunction_695(data, threadData);
  System_eqFunction_693(data, threadData);
  System_eqFunction_692(data, threadData);
  System_eqFunction_403(data, threadData);
  System_eqFunction_404(data, threadData);
  System_eqFunction_405(data, threadData);
  System_eqFunction_406(data, threadData);
  System_eqFunction_714(data, threadData);
  System_eqFunction_713(data, threadData);
  System_eqFunction_716(data, threadData);
  System_eqFunction_718(data, threadData);
  System_eqFunction_715(data, threadData);
  System_eqFunction_717(data, threadData);
  System_eqFunction_719(data, threadData);
  System_eqFunction_414(data, threadData);
  System_eqFunction_415(data, threadData);
  System_eqFunction_416(data, threadData);
  System_eqFunction_417(data, threadData);
  System_eqFunction_741(data, threadData);
  System_eqFunction_737(data, threadData);
  System_eqFunction_740(data, threadData);
  System_eqFunction_742(data, threadData);
  System_eqFunction_738(data, threadData);
  System_eqFunction_743(data, threadData);
  System_eqFunction_739(data, threadData);
  System_eqFunction_425(data, threadData);
  System_eqFunction_426(data, threadData);
  System_eqFunction_427(data, threadData);
  System_eqFunction_428(data, threadData);
  System_eqFunction_771(data, threadData);
  System_eqFunction_770(data, threadData);
  System_eqFunction_766(data, threadData);
  System_eqFunction_767(data, threadData);
  System_eqFunction_772(data, threadData);
  System_eqFunction_769(data, threadData);
  System_eqFunction_768(data, threadData);
  System_eqFunction_436(data, threadData);
  System_eqFunction_437(data, threadData);
  System_eqFunction_438(data, threadData);
  System_eqFunction_439(data, threadData);
  System_eqFunction_793(data, threadData);
  System_eqFunction_794(data, threadData);
  System_eqFunction_797(data, threadData);
  System_eqFunction_792(data, threadData);
  System_eqFunction_795(data, threadData);
  System_eqFunction_791(data, threadData);
  System_eqFunction_796(data, threadData);
  System_eqFunction_447(data, threadData);
  System_eqFunction_448(data, threadData);
  System_eqFunction_449(data, threadData);
  System_eqFunction_450(data, threadData);
  System_eqFunction_819(data, threadData);
  System_eqFunction_818(data, threadData);
  System_eqFunction_817(data, threadData);
  System_eqFunction_813(data, threadData);
  System_eqFunction_814(data, threadData);
  System_eqFunction_816(data, threadData);
  System_eqFunction_815(data, threadData);
  System_eqFunction_458(data, threadData);
  System_eqFunction_459(data, threadData);
  System_eqFunction_460(data, threadData);
  System_eqFunction_461(data, threadData);
  System_eqFunction_629(data, threadData);
  System_eqFunction_630(data, threadData);
  System_eqFunction_464(data, threadData);
  System_eqFunction_465(data, threadData);
  System_eqFunction_466(data, threadData);
  System_eqFunction_467(data, threadData);
  System_eqFunction_644(data, threadData);
  System_eqFunction_643(data, threadData);
  System_eqFunction_470(data, threadData);
  System_eqFunction_471(data, threadData);
  System_eqFunction_472(data, threadData);
  System_eqFunction_473(data, threadData);
  System_eqFunction_589(data, threadData);
  System_eqFunction_588(data, threadData);
  System_eqFunction_476(data, threadData);
  System_eqFunction_477(data, threadData);
  System_eqFunction_478(data, threadData);
  System_eqFunction_479(data, threadData);
  System_eqFunction_614(data, threadData);
  System_eqFunction_613(data, threadData);
  System_eqFunction_482(data, threadData);
  System_eqFunction_483(data, threadData);
  System_eqFunction_484(data, threadData);
  System_eqFunction_485(data, threadData);
  System_eqFunction_625(data, threadData);
  System_eqFunction_626(data, threadData);
  System_eqFunction_488(data, threadData);
  System_eqFunction_489(data, threadData);
  System_eqFunction_490(data, threadData);
  System_eqFunction_491(data, threadData);
  System_eqFunction_617(data, threadData);
  System_eqFunction_618(data, threadData);
  System_eqFunction_494(data, threadData);
  System_eqFunction_495(data, threadData);
  System_eqFunction_496(data, threadData);
  System_eqFunction_497(data, threadData);
  System_eqFunction_633(data, threadData);
  System_eqFunction_634(data, threadData);
  System_eqFunction_500(data, threadData);
  System_eqFunction_501(data, threadData);
  System_eqFunction_502(data, threadData);
  System_eqFunction_503(data, threadData);
  System_eqFunction_504(data, threadData);
  System_eqFunction_505(data, threadData);
  System_eqFunction_506(data, threadData);
  System_eqFunction_507(data, threadData);
  System_eqFunction_508(data, threadData);
  System_eqFunction_509(data, threadData);
  System_eqFunction_510(data, threadData);
  System_eqFunction_511(data, threadData);
  System_eqFunction_512(data, threadData);
  System_eqFunction_513(data, threadData);
  System_eqFunction_527(data, threadData);
  System_eqFunction_526(data, threadData);
  System_eqFunction_525(data, threadData);
  System_eqFunction_524(data, threadData);
  System_eqFunction_523(data, threadData);
  System_eqFunction_522(data, threadData);
  System_eqFunction_521(data, threadData);
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

