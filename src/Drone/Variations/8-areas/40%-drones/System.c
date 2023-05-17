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

  data->simulationInfo->outputVars[0] = (data->localData[0]->realVars[48]/* Tcc variable */) ;
  data->simulationInfo->outputVars[1] = (data->localData[0]->realVars[49]/* arrivalThreshold variable */) ;
  data->simulationInfo->outputVars[2] = (data->localData[0]->realVars[50]/* arrival_timeout variable */) ;
  data->simulationInfo->outputVars[3] = (data->localData[0]->realVars[71]/* cc_choice variable */) ;
  data->simulationInfo->outputVars[4] = (data->localData[0]->realVars[92]/* comm_timeout variable */) ;
  data->simulationInfo->outputVars[5] = (data->localData[0]->realVars[149]/* p_recharge variable */) ;
  data->simulationInfo->outputVars[6] = (data->localData[0]->realVars[150]/* p_worst variable */) ;
  
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
equation index: 302
type: SIMPLE_ASSIGN
p_recharge = p.p_recharge
*/
void System_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  (data->localData[0]->realVars[149]/* p_recharge variable */)  = (data->simulationInfo->realParameter[1936]/* p.p_recharge PARAM */) ;
  TRACE_POP
}
/*
equation index: 303
type: SIMPLE_ASSIGN
arrivalThreshold = p.arrivalThreshold
*/
void System_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  (data->localData[0]->realVars[49]/* arrivalThreshold variable */)  = (data->simulationInfo->realParameter[1912]/* p.arrivalThreshold PARAM */) ;
  TRACE_POP
}
/*
equation index: 304
type: SIMPLE_ASSIGN
arrival_timeout = p.arrival_timeout
*/
void System_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  (data->localData[0]->realVars[50]/* arrival_timeout variable */)  = (data->simulationInfo->realParameter[1913]/* p.arrival_timeout PARAM */) ;
  TRACE_POP
}
/*
equation index: 305
type: SIMPLE_ASSIGN
p_worst = p.p_worst
*/
void System_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  (data->localData[0]->realVars[150]/* p_worst variable */)  = (data->simulationInfo->realParameter[1937]/* p.p_worst PARAM */) ;
  TRACE_POP
}
/*
equation index: 306
type: SIMPLE_ASSIGN
comm_timeout = p.comm_timeout
*/
void System_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  (data->localData[0]->realVars[92]/* comm_timeout variable */)  = (data->simulationInfo->realParameter[1918]/* p.comm_timeout PARAM */) ;
  TRACE_POP
}
/*
equation index: 307
type: SIMPLE_ASSIGN
Tcc = p.Tcc
*/
void System_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  (data->localData[0]->realVars[48]/* Tcc variable */)  = (data->simulationInfo->realParameter[1861]/* p.Tcc PARAM */) ;
  TRACE_POP
}
/*
equation index: 308
type: SIMPLE_ASSIGN
cc_choice = p.cc_choice
*/
void System_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  (data->localData[0]->realVars[71]/* cc_choice variable */)  = (data->simulationInfo->realParameter[1916]/* p.cc_choice PARAM */) ;
  TRACE_POP
}
/*
equation index: 309
type: SIMPLE_ASSIGN
d[4].ctrl.Trustz = d[4].ctrl.prm.m * (9.81 + d[4].ctrl.kz1 * (d[4].d.z - pre(d[4].ctrl.destZ)) + d[4].ctrl.kz2 * d[4].d.Vz)
*/
void System_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  (data->localData[0]->realVars[108]/* d[4].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[729]/* d[4].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[441]/* d[4].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[23]/* d[4].d.z STATE(1,d[4].d.Vz) */)  - (data->simulationInfo->realVarsPre[458]/* d[4].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[445]/* d[4].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[11]/* d[4].d.Vz STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 310
type: SIMPLE_ASSIGN
$DER.d[4].d.Vz = -9.81 + d[4].ctrl.Trustz / d[4].d.p.m
*/
void System_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  (data->localData[0]->realVars[35]/* der(d[4].d.Vz) STATE_DER */)  = -9.81 + DIVISION_SIM((data->localData[0]->realVars[108]/* d[4].ctrl.Trustz variable */) ,(data->simulationInfo->realParameter[1061]/* d[4].d.p.m PARAM */) ,"d[4].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 311
type: SIMPLE_ASSIGN
$DER.d[4].d.z = d[4].d.Vz
*/
void System_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  (data->localData[0]->realVars[47]/* der(d[4].d.z) STATE_DER */)  = (data->localData[0]->realVars[11]/* d[4].d.Vz STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 312
type: SIMPLE_ASSIGN
$DER.d[4].d.y = d[4].d.Vy
*/
void System_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  (data->localData[0]->realVars[43]/* der(d[4].d.y) STATE_DER */)  = (data->localData[0]->realVars[7]/* d[4].d.Vy STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 313
type: SIMPLE_ASSIGN
$DER.d[4].d.x = d[4].d.Vx
*/
void System_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  (data->localData[0]->realVars[39]/* der(d[4].d.x) STATE_DER */)  = (data->localData[0]->realVars[3]/* d[4].d.Vx STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 314
type: SIMPLE_ASSIGN
d[3].ctrl.Trustz = d[3].ctrl.prm.m * (9.81 + d[3].ctrl.kz1 * (d[3].d.z - pre(d[3].ctrl.destZ)) + d[3].ctrl.kz2 * d[3].d.Vz)
*/
void System_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  (data->localData[0]->realVars[107]/* d[3].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[728]/* d[3].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[440]/* d[3].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[22]/* d[3].d.z STATE(1,d[3].d.Vz) */)  - (data->simulationInfo->realVarsPre[457]/* d[3].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[444]/* d[3].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[10]/* d[3].d.Vz STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 315
type: SIMPLE_ASSIGN
$DER.d[3].d.Vz = -9.81 + d[3].ctrl.Trustz / d[3].d.p.m
*/
void System_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  (data->localData[0]->realVars[34]/* der(d[3].d.Vz) STATE_DER */)  = -9.81 + DIVISION_SIM((data->localData[0]->realVars[107]/* d[3].ctrl.Trustz variable */) ,(data->simulationInfo->realParameter[1060]/* d[3].d.p.m PARAM */) ,"d[3].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 316
type: SIMPLE_ASSIGN
$DER.d[3].d.z = d[3].d.Vz
*/
void System_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  (data->localData[0]->realVars[46]/* der(d[3].d.z) STATE_DER */)  = (data->localData[0]->realVars[10]/* d[3].d.Vz STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 317
type: SIMPLE_ASSIGN
$DER.d[3].d.y = d[3].d.Vy
*/
void System_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  (data->localData[0]->realVars[42]/* der(d[3].d.y) STATE_DER */)  = (data->localData[0]->realVars[6]/* d[3].d.Vy STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 318
type: SIMPLE_ASSIGN
$DER.d[3].d.x = d[3].d.Vx
*/
void System_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  (data->localData[0]->realVars[38]/* der(d[3].d.x) STATE_DER */)  = (data->localData[0]->realVars[2]/* d[3].d.Vx STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 319
type: SIMPLE_ASSIGN
d[2].ctrl.Trustz = d[2].ctrl.prm.m * (9.81 + d[2].ctrl.kz1 * (d[2].d.z - pre(d[2].ctrl.destZ)) + d[2].ctrl.kz2 * d[2].d.Vz)
*/
void System_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  (data->localData[0]->realVars[106]/* d[2].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[727]/* d[2].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[439]/* d[2].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[21]/* d[2].d.z STATE(1,d[2].d.Vz) */)  - (data->simulationInfo->realVarsPre[456]/* d[2].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[443]/* d[2].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[9]/* d[2].d.Vz STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 320
type: SIMPLE_ASSIGN
$DER.d[2].d.Vz = -9.81 + d[2].ctrl.Trustz / d[2].d.p.m
*/
void System_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  (data->localData[0]->realVars[33]/* der(d[2].d.Vz) STATE_DER */)  = -9.81 + DIVISION_SIM((data->localData[0]->realVars[106]/* d[2].ctrl.Trustz variable */) ,(data->simulationInfo->realParameter[1059]/* d[2].d.p.m PARAM */) ,"d[2].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 321
type: SIMPLE_ASSIGN
$DER.d[2].d.z = d[2].d.Vz
*/
void System_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  (data->localData[0]->realVars[45]/* der(d[2].d.z) STATE_DER */)  = (data->localData[0]->realVars[9]/* d[2].d.Vz STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 322
type: SIMPLE_ASSIGN
$DER.d[2].d.y = d[2].d.Vy
*/
void System_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  (data->localData[0]->realVars[41]/* der(d[2].d.y) STATE_DER */)  = (data->localData[0]->realVars[5]/* d[2].d.Vy STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 323
type: SIMPLE_ASSIGN
$DER.d[2].d.x = d[2].d.Vx
*/
void System_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  (data->localData[0]->realVars[37]/* der(d[2].d.x) STATE_DER */)  = (data->localData[0]->realVars[1]/* d[2].d.Vx STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 324
type: SIMPLE_ASSIGN
d[1].ctrl.Trustz = d[1].ctrl.prm.m * (9.81 + d[1].ctrl.kz1 * (d[1].d.z - pre(d[1].ctrl.destZ)) + d[1].ctrl.kz2 * d[1].d.Vz)
*/
void System_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  (data->localData[0]->realVars[105]/* d[1].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[726]/* d[1].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[438]/* d[1].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[20]/* d[1].d.z STATE(1,d[1].d.Vz) */)  - (data->simulationInfo->realVarsPre[455]/* d[1].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[442]/* d[1].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[8]/* d[1].d.Vz STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 325
type: SIMPLE_ASSIGN
$DER.d[1].d.Vz = -9.81 + d[1].ctrl.Trustz / d[1].d.p.m
*/
void System_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  (data->localData[0]->realVars[32]/* der(d[1].d.Vz) STATE_DER */)  = -9.81 + DIVISION_SIM((data->localData[0]->realVars[105]/* d[1].ctrl.Trustz variable */) ,(data->simulationInfo->realParameter[1058]/* d[1].d.p.m PARAM */) ,"d[1].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 326
type: SIMPLE_ASSIGN
$DER.d[1].d.z = d[1].d.Vz
*/
void System_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  (data->localData[0]->realVars[44]/* der(d[1].d.z) STATE_DER */)  = (data->localData[0]->realVars[8]/* d[1].d.Vz STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 327
type: SIMPLE_ASSIGN
$DER.d[1].d.y = d[1].d.Vy
*/
void System_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  (data->localData[0]->realVars[40]/* der(d[1].d.y) STATE_DER */)  = (data->localData[0]->realVars[4]/* d[1].d.Vy STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 328
type: SIMPLE_ASSIGN
$DER.d[1].d.x = d[1].d.Vx
*/
void System_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  (data->localData[0]->realVars[36]/* der(d[1].d.x) STATE_DER */)  = (data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 329
type: ALGORITHM

  cc.endSimulation := pre(cc.endSimulation);
  cc.setpointChanged[4] := pre(cc.setpointChanged[4]);
  cc.setpointChanged[3] := pre(cc.setpointChanged[3]);
  cc.setpointChanged[2] := pre(cc.setpointChanged[2]);
  cc.setpointChanged[1] := pre(cc.setpointChanged[1]);
  cc.comm_done[4] := pre(cc.comm_done[4]);
  cc.comm_done[3] := pre(cc.comm_done[3]);
  cc.comm_done[2] := pre(cc.comm_done[2]);
  cc.comm_done[1] := pre(cc.comm_done[1]);
  cc.state := pre(cc.state);
  cc.fifox[4] := pre(cc.fifox[4]);
  cc.fifox[3] := pre(cc.fifox[3]);
  cc.fifox[2] := pre(cc.fifox[2]);
  cc.fifox[1] := pre(cc.fifox[1]);
  cc.pos[4,3] := pre(cc.pos[4,3]);
  cc.pos[4,2] := pre(cc.pos[4,2]);
  cc.pos[4,1] := pre(cc.pos[4,1]);
  cc.pos[3,3] := pre(cc.pos[3,3]);
  cc.pos[3,2] := pre(cc.pos[3,2]);
  cc.pos[3,1] := pre(cc.pos[3,1]);
  cc.pos[2,3] := pre(cc.pos[2,3]);
  cc.pos[2,2] := pre(cc.pos[2,2]);
  cc.pos[2,1] := pre(cc.pos[2,1]);
  cc.pos[1,3] := pre(cc.pos[1,3]);
  cc.pos[1,2] := pre(cc.pos[1,2]);
  cc.pos[1,1] := pre(cc.pos[1,1]);
  cc.msg_to_drone[4,5] := pre(cc.msg_to_drone[4,5]);
  cc.msg_to_drone[4,4] := pre(cc.msg_to_drone[4,4]);
  cc.msg_to_drone[4,3] := pre(cc.msg_to_drone[4,3]);
  cc.msg_to_drone[4,2] := pre(cc.msg_to_drone[4,2]);
  cc.msg_to_drone[4,1] := pre(cc.msg_to_drone[4,1]);
  cc.msg_to_drone[3,5] := pre(cc.msg_to_drone[3,5]);
  cc.msg_to_drone[3,4] := pre(cc.msg_to_drone[3,4]);
  cc.msg_to_drone[3,3] := pre(cc.msg_to_drone[3,3]);
  cc.msg_to_drone[3,2] := pre(cc.msg_to_drone[3,2]);
  cc.msg_to_drone[3,1] := pre(cc.msg_to_drone[3,1]);
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
  cc.writesignal[4] := pre(cc.writesignal[4]);
  cc.writesignal[3] := pre(cc.writesignal[3]);
  cc.writesignal[2] := pre(cc.writesignal[2]);
  cc.writesignal[1] := pre(cc.writesignal[1]);
  cc.readsignal[4] := pre(cc.readsignal[4]);
  cc.readsignal[3] := pre(cc.readsignal[3]);
  cc.readsignal[2] := pre(cc.readsignal[2]);
  cc.readsignal[1] := pre(cc.readsignal[1]);
  cc.setpointChangeTime[4] := pre(cc.setpointChangeTime[4]);
  cc.setpointChangeTime[3] := pre(cc.setpointChangeTime[3]);
  cc.setpointChangeTime[2] := pre(cc.setpointChangeTime[2]);
  cc.setpointChangeTime[1] := pre(cc.setpointChangeTime[1]);
  cc.lastAnswered[4] := pre(cc.lastAnswered[4]);
  cc.lastAnswered[3] := pre(cc.lastAnswered[3]);
  cc.lastAnswered[2] := pre(cc.lastAnswered[2]);
  cc.lastAnswered[1] := pre(cc.lastAnswered[1]);
  cc.isDead[4] := pre(cc.isDead[4]);
  cc.isDead[3] := pre(cc.isDead[3]);
  cc.isDead[2] := pre(cc.isDead[2]);
  cc.isDead[1] := pre(cc.isDead[1]);
  cc.rechargingDrones := pre(cc.rechargingDrones);
  cc.isRecharging[4] := pre(cc.isRecharging[4]);
  cc.isRecharging[3] := pre(cc.isRecharging[3]);
  cc.isRecharging[2] := pre(cc.isRecharging[2]);
  cc.isRecharging[1] := pre(cc.isRecharging[1]);
  cc.battery[4] := pre(cc.battery[4]);
  cc.battery[3] := pre(cc.battery[3]);
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
  cc.isBusy[4] := pre(cc.isBusy[4]);
  cc.isBusy[3] := pre(cc.isBusy[3]);
  cc.isBusy[2] := pre(cc.isBusy[2]);
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
  cc.setz[4] := pre(cc.setz[4]);
  cc.setz[3] := pre(cc.setz[3]);
  cc.setz[2] := pre(cc.setz[2]);
  cc.setz[1] := pre(cc.setz[1]);
  cc.sety[4] := pre(cc.sety[4]);
  cc.sety[3] := pre(cc.sety[3]);
  cc.sety[2] := pre(cc.sety[2]);
  cc.sety[1] := pre(cc.sety[1]);
  cc.setx[4] := pre(cc.setx[4]);
  cc.setx[3] := pre(cc.setx[3]);
  cc.setx[2] := pre(cc.setx[2]);
  cc.setx[1] := pre(cc.setx[1]);
  cc.aliveDrones := pre(cc.aliveDrones);
  cc.z := pre(cc.z);
  cc.err := pre(cc.err);
  $whenCondition27 := pre($whenCondition27);
  $whenCondition27 := sample(13, 0.0, p.Tcc);
  when false then
    cc.err := 0.0;
    cc.z := 0;
    cc.aliveDrones := 4;
    cc.setx := {cc.p.flyZone[1], cc.p.flyZone[1], cc.p.flyZone[1], cc.p.flyZone[1]};
    cc.sety := {cc.p.flyZone[2], cc.p.flyZone[2], cc.p.flyZone[2], cc.p.flyZone[2]};
    cc.setz := {cc.p.flyZone[3], cc.p.flyZone[3], cc.p.flyZone[3], cc.p.flyZone[3]};
    cc.hasBeenVisited := {false, false, false, false, false, false, false, false};
    cc.lastVisited := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    cc.isBusy := {false, false, false, false};
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
    setup_areas(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 4, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 8, cc.p.areas));
    setup_drones(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 4, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 8, cc.p.areas));
  elsewhen $whenCondition27 then
    if pre(cc.state) == 0 then
      for drone in 1:4 loop
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
      for drone in 1:4 loop
        if not pre(cc.isDead[drone]) and not pre(cc.comm_done[drone]) then
          (cc.writesignal[drone], cc.fifox[drone]) := WriteToFIFO(pre(cc.fifox[drone]), pre(cc.writesignal[drone]), pre(cc.spaceavailable[drone]));
          if FifoIODone(cc.fifox[drone]) then
            cc.comm_done[drone] := true;
            cc.fifox[drone] := 0;
          end if;
        end if;
      end for;
      cc.z := 0;
      for drone in 1:4 loop
        if not pre(cc.isDead[drone]) then
          if not pre(cc.comm_done[drone]) then
            cc.z := 100;
            break;
          end if;
        end if;
      end for;
      if cc.z == 0 then
        cc.state := 15;
        cc.comm_done := {false, false, false, false};
      end if;
    elseif pre(cc.state) == 15 then
      for drone in 1:4 loop
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
      for drone in 1:4 loop
        if not pre(cc.isDead[drone]) then
          if not pre(cc.comm_done[drone]) then
            cc.z := 100;
            break;
          end if;
        end if;
      end for;
      if cc.z == 0 then
        cc.state := 20;
        cc.comm_done := {false, false, false, false};
      end if;
    elseif pre(cc.state) == 20 then
      for drone in 1:4 loop
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
      for drone in 1:4 loop
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
      for drone in 1:4 loop
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
              (cc.area_x, cc.area_y, cc.area_z) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 4, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 8, cc.p.areas), area);
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
                (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 4, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 8, cc.p.areas), cc.tmp_area_1);
                cc.hasBeenSelected[cc.tmp_area_1] := drone;
              else
                (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 4, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 8, cc.p.areas), cc.tmp_area_2);
                cc.hasBeenSelected[cc.tmp_area_2] := drone;
              end if;
            else
              if myrandom() > p.p_worst then
                (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 4, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 8, cc.p.areas), cc.tmp_area_2);
                cc.hasBeenSelected[cc.tmp_area_2] := drone;
              else
                (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 4, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 8, cc.p.areas), cc.tmp_area_1);
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
      for drone in 1:4 loop
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
            elseif (*Real*)(pre(cc.rechargingDrones)) < 1.4 then
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
      for drone in 1:4 loop
        if pre(cc.setpointChanged[drone]) then
          cc.state := 30;
          break;
        else
          cc.state := 0;
        end if;
      end for;
    elseif pre(cc.state) == 30 then
      for drone in 1:4 loop
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
      for drone in 1:4 loop
        if not pre(cc.comm_done[drone]) then
          (cc.writesignal[drone], cc.fifox[drone]) := WriteToFIFO(pre(cc.fifox[drone]), pre(cc.writesignal[drone]), pre(cc.spaceavailable[drone]));
          if FifoIODone(cc.fifox[drone]) then
            cc.comm_done[drone] := true;
            cc.fifox[drone] := 0;
          end if;
        end if;
      end for;
      cc.z := 0;
      for drone in 1:4 loop
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
void System_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
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
  (data->localData[0]->booleanVars[55]/* cc.endSimulation DISCRETE */)  = (data->simulationInfo->booleanVarsPre[55]/* cc.endSimulation DISCRETE */) ;

  (data->localData[0]->booleanVars[83]/* cc.setpointChanged[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[83]/* cc.setpointChanged[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[82]/* cc.setpointChanged[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[82]/* cc.setpointChanged[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[81]/* cc.setpointChanged[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[81]/* cc.setpointChanged[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[80]/* cc.setpointChanged[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[80]/* cc.setpointChanged[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[50]/* cc.comm_done[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[50]/* cc.comm_done[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[49]/* cc.comm_done[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[49]/* cc.comm_done[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[48]/* cc.comm_done[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[48]/* cc.comm_done[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[47]/* cc.comm_done[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[47]/* cc.comm_done[1] DISCRETE */) ;

  (data->localData[0]->integerVars[14]/* cc.state DISCRETE */)  = (data->simulationInfo->integerVarsPre[14]/* cc.state DISCRETE */) ;

  (data->localData[0]->integerVars[4]/* cc.fifox[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[4]/* cc.fifox[4] DISCRETE */) ;

  (data->localData[0]->integerVars[3]/* cc.fifox[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[3]/* cc.fifox[3] DISCRETE */) ;

  (data->localData[0]->integerVars[2]/* cc.fifox[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[2]/* cc.fifox[2] DISCRETE */) ;

  (data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[1]/* cc.fifox[1] DISCRETE */) ;

  (data->localData[0]->realVars[206]/* cc.pos[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[206]/* cc.pos[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[205]/* cc.pos[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[205]/* cc.pos[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[204]/* cc.pos[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[204]/* cc.pos[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[203]/* cc.pos[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[203]/* cc.pos[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[202]/* cc.pos[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[202]/* cc.pos[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[201]/* cc.pos[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[201]/* cc.pos[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[200]/* cc.pos[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[200]/* cc.pos[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[199]/* cc.pos[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[199]/* cc.pos[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[198]/* cc.pos[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[198]/* cc.pos[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[197]/* cc.pos[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[197]/* cc.pos[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[196]/* cc.pos[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[196]/* cc.pos[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[195]/* cc.pos[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[195]/* cc.pos[1,1] DISCRETE */) ;

  (data->localData[0]->realVars[194]/* cc.msg_to_drone[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[194]/* cc.msg_to_drone[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[193]/* cc.msg_to_drone[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[193]/* cc.msg_to_drone[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[192]/* cc.msg_to_drone[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[192]/* cc.msg_to_drone[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[191]/* cc.msg_to_drone[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[191]/* cc.msg_to_drone[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[190]/* cc.msg_to_drone[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[190]/* cc.msg_to_drone[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[189]/* cc.msg_to_drone[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[189]/* cc.msg_to_drone[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[188]/* cc.msg_to_drone[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[188]/* cc.msg_to_drone[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[187]/* cc.msg_to_drone[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[187]/* cc.msg_to_drone[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[186]/* cc.msg_to_drone[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[186]/* cc.msg_to_drone[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[185]/* cc.msg_to_drone[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[185]/* cc.msg_to_drone[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[184]/* cc.msg_to_drone[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[184]/* cc.msg_to_drone[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[183]/* cc.msg_to_drone[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[183]/* cc.msg_to_drone[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[182]/* cc.msg_to_drone[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[182]/* cc.msg_to_drone[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[181]/* cc.msg_to_drone[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[181]/* cc.msg_to_drone[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[180]/* cc.msg_to_drone[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[180]/* cc.msg_to_drone[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[179]/* cc.msg_to_drone[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[179]/* cc.msg_to_drone[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[178]/* cc.msg_to_drone[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[178]/* cc.msg_to_drone[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[177]/* cc.msg_to_drone[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[177]/* cc.msg_to_drone[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[176]/* cc.msg_to_drone[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[176]/* cc.msg_to_drone[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[175]/* cc.msg_to_drone[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[175]/* cc.msg_to_drone[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[91]/* cc.writesignal[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[91]/* cc.writesignal[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[90]/* cc.writesignal[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[90]/* cc.writesignal[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[89]/* cc.writesignal[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[89]/* cc.writesignal[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[88]/* cc.writesignal[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[88]/* cc.writesignal[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[79]/* cc.readsignal[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[79]/* cc.readsignal[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[78]/* cc.readsignal[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[78]/* cc.readsignal[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[77]/* cc.readsignal[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[77]/* cc.readsignal[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[76]/* cc.readsignal[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[76]/* cc.readsignal[1] DISCRETE */) ;

  (data->localData[0]->realVars[210]/* cc.setpointChangeTime[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[210]/* cc.setpointChangeTime[4] DISCRETE */) ;

  (data->localData[0]->realVars[209]/* cc.setpointChangeTime[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[209]/* cc.setpointChangeTime[3] DISCRETE */) ;

  (data->localData[0]->realVars[208]/* cc.setpointChangeTime[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[208]/* cc.setpointChangeTime[2] DISCRETE */) ;

  (data->localData[0]->realVars[207]/* cc.setpointChangeTime[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[207]/* cc.setpointChangeTime[1] DISCRETE */) ;

  (data->localData[0]->realVars[164]/* cc.lastAnswered[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[164]/* cc.lastAnswered[4] DISCRETE */) ;

  (data->localData[0]->realVars[163]/* cc.lastAnswered[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[163]/* cc.lastAnswered[3] DISCRETE */) ;

  (data->localData[0]->realVars[162]/* cc.lastAnswered[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[162]/* cc.lastAnswered[2] DISCRETE */) ;

  (data->localData[0]->realVars[161]/* cc.lastAnswered[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[161]/* cc.lastAnswered[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[71]/* cc.isDead[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[71]/* cc.isDead[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[70]/* cc.isDead[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[70]/* cc.isDead[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[69]/* cc.isDead[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[69]/* cc.isDead[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[68]/* cc.isDead[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[68]/* cc.isDead[1] DISCRETE */) ;

  (data->localData[0]->integerVars[13]/* cc.rechargingDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[13]/* cc.rechargingDrones DISCRETE */) ;

  (data->localData[0]->booleanVars[75]/* cc.isRecharging[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[75]/* cc.isRecharging[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[74]/* cc.isRecharging[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[74]/* cc.isRecharging[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[73]/* cc.isRecharging[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[73]/* cc.isRecharging[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[72]/* cc.isRecharging[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[72]/* cc.isRecharging[1] DISCRETE */) ;

  (data->localData[0]->realVars[157]/* cc.battery[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[157]/* cc.battery[4] DISCRETE */) ;

  (data->localData[0]->realVars[156]/* cc.battery[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[156]/* cc.battery[3] DISCRETE */) ;

  (data->localData[0]->realVars[155]/* cc.battery[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[155]/* cc.battery[2] DISCRETE */) ;

  (data->localData[0]->realVars[154]/* cc.battery[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[154]/* cc.battery[1] DISCRETE */) ;

  (data->localData[0]->realVars[226]/* cc.tmp_time DISCRETE */)  = (data->simulationInfo->realVarsPre[226]/* cc.tmp_time DISCRETE */) ;

  (data->localData[0]->realVars[173]/* cc.max_time DISCRETE */)  = (data->simulationInfo->realVarsPre[173]/* cc.max_time DISCRETE */) ;

  (data->localData[0]->realVars[153]/* cc.area_z DISCRETE */)  = (data->simulationInfo->realVarsPre[153]/* cc.area_z DISCRETE */) ;

  (data->localData[0]->realVars[152]/* cc.area_y DISCRETE */)  = (data->simulationInfo->realVarsPre[152]/* cc.area_y DISCRETE */) ;

  (data->localData[0]->realVars[151]/* cc.area_x DISCRETE */)  = (data->simulationInfo->realVarsPre[151]/* cc.area_x DISCRETE */) ;

  (data->localData[0]->realVars[159]/* cc.choice_value_2 DISCRETE */)  = (data->simulationInfo->realVarsPre[159]/* cc.choice_value_2 DISCRETE */) ;

  (data->localData[0]->realVars[158]/* cc.choice_value_1 DISCRETE */)  = (data->simulationInfo->realVarsPre[158]/* cc.choice_value_1 DISCRETE */) ;

  (data->localData[0]->integerVars[16]/* cc.tmp_area_2 DISCRETE */)  = (data->simulationInfo->integerVarsPre[16]/* cc.tmp_area_2 DISCRETE */) ;

  (data->localData[0]->integerVars[15]/* cc.tmp_area_1 DISCRETE */)  = (data->simulationInfo->integerVarsPre[15]/* cc.tmp_area_1 DISCRETE */) ;

  (data->localData[0]->realVars[225]/* cc.tmp_distance DISCRETE */)  = (data->simulationInfo->realVarsPre[225]/* cc.tmp_distance DISCRETE */) ;

  (data->localData[0]->realVars[174]/* cc.min_distance DISCRETE */)  = (data->simulationInfo->realVarsPre[174]/* cc.min_distance DISCRETE */) ;

  (data->localData[0]->integerVars[12]/* cc.hasBeenSelected[8] DISCRETE */)  = (data->simulationInfo->integerVarsPre[12]/* cc.hasBeenSelected[8] DISCRETE */) ;

  (data->localData[0]->integerVars[11]/* cc.hasBeenSelected[7] DISCRETE */)  = (data->simulationInfo->integerVarsPre[11]/* cc.hasBeenSelected[7] DISCRETE */) ;

  (data->localData[0]->integerVars[10]/* cc.hasBeenSelected[6] DISCRETE */)  = (data->simulationInfo->integerVarsPre[10]/* cc.hasBeenSelected[6] DISCRETE */) ;

  (data->localData[0]->integerVars[9]/* cc.hasBeenSelected[5] DISCRETE */)  = (data->simulationInfo->integerVarsPre[9]/* cc.hasBeenSelected[5] DISCRETE */) ;

  (data->localData[0]->integerVars[8]/* cc.hasBeenSelected[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[8]/* cc.hasBeenSelected[4] DISCRETE */) ;

  (data->localData[0]->integerVars[7]/* cc.hasBeenSelected[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[7]/* cc.hasBeenSelected[3] DISCRETE */) ;

  (data->localData[0]->integerVars[6]/* cc.hasBeenSelected[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[6]/* cc.hasBeenSelected[2] DISCRETE */) ;

  (data->localData[0]->integerVars[5]/* cc.hasBeenSelected[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[5]/* cc.hasBeenSelected[1] DISCRETE */) ;

  (data->localData[0]->realVars[223]/* cc.time_passed_since_last_loop DISCRETE */)  = (data->simulationInfo->realVarsPre[223]/* cc.time_passed_since_last_loop DISCRETE */) ;

  (data->localData[0]->realVars[224]/* cc.time_span DISCRETE */)  = (data->simulationInfo->realVarsPre[224]/* cc.time_span DISCRETE */) ;

  (data->localData[0]->booleanVars[67]/* cc.isBusy[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[67]/* cc.isBusy[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[66]/* cc.isBusy[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[66]/* cc.isBusy[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[65]/* cc.isBusy[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[65]/* cc.isBusy[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[64]/* cc.isBusy[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[64]/* cc.isBusy[1] DISCRETE */) ;

  (data->localData[0]->realVars[172]/* cc.lastVisited[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[172]/* cc.lastVisited[8] DISCRETE */) ;

  (data->localData[0]->realVars[171]/* cc.lastVisited[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[171]/* cc.lastVisited[7] DISCRETE */) ;

  (data->localData[0]->realVars[170]/* cc.lastVisited[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[170]/* cc.lastVisited[6] DISCRETE */) ;

  (data->localData[0]->realVars[169]/* cc.lastVisited[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[169]/* cc.lastVisited[5] DISCRETE */) ;

  (data->localData[0]->realVars[168]/* cc.lastVisited[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[168]/* cc.lastVisited[4] DISCRETE */) ;

  (data->localData[0]->realVars[167]/* cc.lastVisited[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[167]/* cc.lastVisited[3] DISCRETE */) ;

  (data->localData[0]->realVars[166]/* cc.lastVisited[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[166]/* cc.lastVisited[2] DISCRETE */) ;

  (data->localData[0]->realVars[165]/* cc.lastVisited[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[165]/* cc.lastVisited[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[63]/* cc.hasBeenVisited[8] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[63]/* cc.hasBeenVisited[8] DISCRETE */) ;

  (data->localData[0]->booleanVars[62]/* cc.hasBeenVisited[7] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[62]/* cc.hasBeenVisited[7] DISCRETE */) ;

  (data->localData[0]->booleanVars[61]/* cc.hasBeenVisited[6] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[61]/* cc.hasBeenVisited[6] DISCRETE */) ;

  (data->localData[0]->booleanVars[60]/* cc.hasBeenVisited[5] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[60]/* cc.hasBeenVisited[5] DISCRETE */) ;

  (data->localData[0]->booleanVars[59]/* cc.hasBeenVisited[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[59]/* cc.hasBeenVisited[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[58]/* cc.hasBeenVisited[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[58]/* cc.hasBeenVisited[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[57]/* cc.hasBeenVisited[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[57]/* cc.hasBeenVisited[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[56]/* cc.hasBeenVisited[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[56]/* cc.hasBeenVisited[1] DISCRETE */) ;

  (data->localData[0]->realVars[222]/* cc.setz[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[222]/* cc.setz[4] DISCRETE */) ;

  (data->localData[0]->realVars[221]/* cc.setz[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[221]/* cc.setz[3] DISCRETE */) ;

  (data->localData[0]->realVars[220]/* cc.setz[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[220]/* cc.setz[2] DISCRETE */) ;

  (data->localData[0]->realVars[219]/* cc.setz[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[219]/* cc.setz[1] DISCRETE */) ;

  (data->localData[0]->realVars[218]/* cc.sety[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[218]/* cc.sety[4] DISCRETE */) ;

  (data->localData[0]->realVars[217]/* cc.sety[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[217]/* cc.sety[3] DISCRETE */) ;

  (data->localData[0]->realVars[216]/* cc.sety[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[216]/* cc.sety[2] DISCRETE */) ;

  (data->localData[0]->realVars[215]/* cc.sety[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[215]/* cc.sety[1] DISCRETE */) ;

  (data->localData[0]->realVars[214]/* cc.setx[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[214]/* cc.setx[4] DISCRETE */) ;

  (data->localData[0]->realVars[213]/* cc.setx[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[213]/* cc.setx[3] DISCRETE */) ;

  (data->localData[0]->realVars[212]/* cc.setx[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[212]/* cc.setx[2] DISCRETE */) ;

  (data->localData[0]->realVars[211]/* cc.setx[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[211]/* cc.setx[1] DISCRETE */) ;

  (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[0]/* cc.aliveDrones DISCRETE */) ;

  (data->localData[0]->integerVars[17]/* cc.z DISCRETE */)  = (data->simulationInfo->integerVarsPre[17]/* cc.z DISCRETE */) ;

  (data->localData[0]->realVars[160]/* cc.err DISCRETE */)  = (data->simulationInfo->realVarsPre[160]/* cc.err DISCRETE */) ;

  (data->localData[0]->booleanVars[19]/* $whenCondition27 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[19]/* $whenCondition27 DISCRETE */) ;

  (data->localData[0]->booleanVars[19]/* $whenCondition27 DISCRETE */)  = data->simulationInfo->samples[12];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[160]/* cc.err DISCRETE */)  = 0.0;

      (data->localData[0]->integerVars[17]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = ((modelica_integer) 4);

      array_alloc_scalar_real_array(&tmp3, 4, (modelica_real)(data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
      real_array_create(&tmp4, ((modelica_real*)&((&(data->localData[0]->realVars[211]/* cc.setx[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
      real_array_copy_data(tmp3, tmp4);

      array_alloc_scalar_real_array(&tmp5, 4, (modelica_real)(data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
      real_array_create(&tmp6, ((modelica_real*)&((&(data->localData[0]->realVars[215]/* cc.sety[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
      real_array_copy_data(tmp5, tmp6);

      array_alloc_scalar_real_array(&tmp7, 4, (modelica_real)(data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
      real_array_create(&tmp8, ((modelica_real*)&((&(data->localData[0]->realVars[219]/* cc.setz[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
      real_array_copy_data(tmp7, tmp8);

      array_alloc_scalar_boolean_array(&tmp9, 8, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp10, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[56]/* cc.hasBeenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      boolean_array_copy_data(tmp9, tmp10);

      array_alloc_scalar_real_array(&tmp11, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp12, ((modelica_real*)&((&(data->localData[0]->realVars[165]/* cc.lastVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp11, tmp12);

      array_alloc_scalar_boolean_array(&tmp13, 4, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp14, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[64]/* cc.isBusy[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
      boolean_array_copy_data(tmp13, tmp14);

      (data->localData[0]->realVars[224]/* cc.time_span DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[223]/* cc.time_passed_since_last_loop DISCRETE */)  = 0.0;

      array_alloc_scalar_integer_array(&tmp15, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp16, ((modelica_integer*)&((&(data->localData[0]->integerVars[5]/* cc.hasBeenSelected[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      integer_array_copy_data(tmp15, tmp16);

      real_array_create(&tmp17, ((modelica_real*)&((&data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
      tmp18 = max_real_array(tmp17);
      (data->localData[0]->realVars[174]/* cc.min_distance DISCRETE */)  = tmp18;

      (data->localData[0]->realVars[225]/* cc.tmp_distance DISCRETE */)  = 0.0;

      (data->localData[0]->integerVars[15]/* cc.tmp_area_1 DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[16]/* cc.tmp_area_2 DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->realVars[158]/* cc.choice_value_1 DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[159]/* cc.choice_value_2 DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[151]/* cc.area_x DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[152]/* cc.area_y DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[153]/* cc.area_z DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[173]/* cc.max_time DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[226]/* cc.tmp_time DISCRETE */)  = 0.0;

      array_alloc_scalar_real_array(&tmp19, 4, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp20, ((modelica_real*)&((&(data->localData[0]->realVars[154]/* cc.battery[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
      real_array_copy_data(tmp19, tmp20);

      array_alloc_scalar_boolean_array(&tmp21, 4, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp22, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[72]/* cc.isRecharging[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
      boolean_array_copy_data(tmp21, tmp22);

      (data->localData[0]->integerVars[13]/* cc.rechargingDrones DISCRETE */)  = ((modelica_integer) 0);

      array_alloc_scalar_boolean_array(&tmp23, 4, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp24, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[68]/* cc.isDead[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
      boolean_array_copy_data(tmp23, tmp24);

      array_alloc_scalar_real_array(&tmp25, 4, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp26, ((modelica_real*)&((&(data->localData[0]->realVars[161]/* cc.lastAnswered[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
      real_array_copy_data(tmp25, tmp26);

      array_alloc_scalar_real_array(&tmp27, 4, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp28, ((modelica_real*)&((&(data->localData[0]->realVars[207]/* cc.setpointChangeTime[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
      real_array_copy_data(tmp27, tmp28);

      array_alloc_scalar_boolean_array(&tmp29, 4, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp30, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[76]/* cc.readsignal[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
      boolean_array_copy_data(tmp29, tmp30);

      array_alloc_scalar_boolean_array(&tmp31, 4, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp32, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[88]/* cc.writesignal[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
      boolean_array_copy_data(tmp31, tmp32);

      tmp36 = ((modelica_integer) 1); tmp37 = 1; tmp38 = ((modelica_integer) 4);
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
              (&(data->localData[0]->realVars[175]/* cc.msg_to_drone[1,1] DISCRETE */) )[(i - 1) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      tmp42 = ((modelica_integer) 1); tmp43 = 1; tmp44 = ((modelica_integer) 4);
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
              (&(data->localData[0]->realVars[195]/* cc.pos[1,1] DISCRETE */) )[(i - 1) * 3 + (j-1)] = 0.0;
            }
          }
        }
      }

      array_alloc_scalar_integer_array(&tmp45, 4, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp46, ((modelica_integer*)&((&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
      integer_array_copy_data(tmp45, tmp46);

      (data->localData[0]->integerVars[14]/* cc.state DISCRETE */)  = ((modelica_integer) 0);

      array_alloc_scalar_boolean_array(&tmp47, 4, (modelica_boolean)1, (modelica_boolean)1, (modelica_boolean)1, (modelica_boolean)1);
      boolean_array_create(&tmp48, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[47]/* cc.comm_done[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
      boolean_array_copy_data(tmp47, tmp48);

      array_alloc_scalar_boolean_array(&tmp49, 4, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp50, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[80]/* cc.setpointChanged[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
      boolean_array_copy_data(tmp49, tmp50);

      (data->localData[0]->booleanVars[55]/* cc.endSimulation DISCRETE */)  = 0;

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
      tmp51._nDrones = ((modelica_integer) 4);
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
      tmp55._nDrones = ((modelica_integer) 4);
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
    else if(((data->localData[0]->booleanVars[19]/* $whenCondition27 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[19]/* $whenCondition27 DISCRETE */)  /* edge */))
    {
      if(((data->simulationInfo->integerVarsPre[14]/* cc.state DISCRETE */)  == ((modelica_integer) 0)))
      {
        tmp60 = ((modelica_integer) 1); tmp61 = 1; tmp62 = ((modelica_integer) 4);
        if(!(((tmp61 > 0) && (tmp60 > tmp62)) || ((tmp61 < 0) && (tmp60 < tmp62))))
        {
          modelica_integer drone;
          for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp60, tmp62); drone += tmp61)
          {
            if((!(&(data->simulationInfo->booleanVarsPre[68]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
            {
              (&(data->localData[0]->realVars[175]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 1)-1)] = 1.0;

              (&(data->localData[0]->realVars[175]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 2)-1)] = 0.0;

              (&(data->localData[0]->realVars[175]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 3)-1)] = 0.0;

              (&(data->localData[0]->realVars[175]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 4)-1)] = 0.0;

              (&(data->localData[0]->booleanVars[47]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 0;
            }
            else
            {
              (&(data->localData[0]->booleanVars[47]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;
            }
          }
        }

        (data->localData[0]->integerVars[14]/* cc.state DISCRETE */)  = ((modelica_integer) 10);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[14]/* cc.state DISCRETE */)  == ((modelica_integer) 10)))
        {
          tmp64 = ((modelica_integer) 1); tmp65 = 1; tmp66 = ((modelica_integer) 4);
          if(!(((tmp65 > 0) && (tmp64 > tmp66)) || ((tmp65 < 0) && (tmp64 < tmp66))))
          {
            modelica_integer drone;
            for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp64, tmp66); drone += tmp65)
            {
              if(((!(&(data->simulationInfo->booleanVarsPre[68]/* cc.isDead[1] DISCRETE */) )[drone - 1]) && (!(&(data->simulationInfo->booleanVarsPre[47]/* cc.comm_done[1] DISCRETE */) )[drone - 1])))
              {
                (&(data->localData[0]->booleanVars[88]/* cc.writesignal[1] DISCRETE */) )[drone - 1] = omc_WriteToFIFO(threadData, (&(data->simulationInfo->integerVarsPre[1]/* cc.fifox[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[88]/* cc.writesignal[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[84]/* cc.spaceavailable[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1]);

                if(omc_FifoIODone(threadData, (&data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)[drone - 1] ))
                {
                  (&(data->localData[0]->booleanVars[47]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;

                  (&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1] = ((modelica_integer) 0);
                }
              }
            }
          }

          (data->localData[0]->integerVars[17]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

          tmp67 = ((modelica_integer) 1); tmp68 = 1; tmp69 = ((modelica_integer) 4);
          if(!(((tmp68 > 0) && (tmp67 > tmp69)) || ((tmp68 < 0) && (tmp67 < tmp69))))
          {
            modelica_integer drone;
            for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp67, tmp69); drone += tmp68)
            {
              if((!(&(data->simulationInfo->booleanVarsPre[68]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
              {
                if((!(&(data->simulationInfo->booleanVarsPre[47]/* cc.comm_done[1] DISCRETE */) )[drone - 1]))
                {
                  (data->localData[0]->integerVars[17]/* cc.z DISCRETE */)  = ((modelica_integer) 100);

                  break;
                }
              }
            }
          }

          if(((data->localData[0]->integerVars[17]/* cc.z DISCRETE */)  == ((modelica_integer) 0)))
          {
            (data->localData[0]->integerVars[14]/* cc.state DISCRETE */)  = ((modelica_integer) 15);

            array_alloc_scalar_boolean_array(&tmp71, 4, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
            boolean_array_create(&tmp72, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[47]/* cc.comm_done[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
            boolean_array_copy_data(tmp71, tmp72);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[14]/* cc.state DISCRETE */)  == ((modelica_integer) 15)))
          {
            tmp81 = ((modelica_integer) 1); tmp82 = 1; tmp83 = ((modelica_integer) 4);
            if(!(((tmp82 > 0) && (tmp81 > tmp83)) || ((tmp82 < 0) && (tmp81 < tmp83))))
            {
              modelica_integer drone;
              for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp81, tmp83); drone += tmp82)
              {
                if(((!(&(data->simulationInfo->booleanVarsPre[68]/* cc.isDead[1] DISCRETE */) )[drone - 1]) && (!(&(data->simulationInfo->booleanVarsPre[47]/* cc.comm_done[1] DISCRETE */) )[drone - 1])))
                {
                  tmp74 = Greater(data->localData[0]->timeValue - (&(data->simulationInfo->realVarsPre[161]/* cc.lastAnswered[1] DISCRETE */) )[drone - 1],(data->simulationInfo->realParameter[1918]/* p.comm_timeout PARAM */) );
                  if(tmp74)
                  {
                    (&(data->localData[0]->booleanVars[47]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;

                    (&(data->localData[0]->booleanVars[68]/* cc.isDead[1] DISCRETE */) )[drone - 1] = 1;

                    (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[0]/* cc.aliveDrones DISCRETE */)  - ((modelica_integer) 1);

                    tmp76 = ((modelica_integer) 1); tmp77 = 1; tmp78 = ((modelica_integer) 8);
                    if(!(((tmp77 > 0) && (tmp76 > tmp78)) || ((tmp77 < 0) && (tmp76 < tmp78))))
                    {
                      modelica_integer area;
                      for(area = ((modelica_integer) 1); in_range_integer(area, tmp76, tmp78); area += tmp77)
                      {
                        if(((&(data->simulationInfo->integerVarsPre[5]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] == drone))
                        {
                          (&(data->localData[0]->integerVars[5]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);
                        }
                      }
                    }
                  }
                  else
                  {
                    tmp79 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[79]/* cc.p.p_comm_error PARAM */) );
                    if(tmp79)
                    {
                      (&(data->localData[0]->booleanVars[76]/* cc.readsignal[1] DISCRETE */) )[drone - 1] = omc_ReadFromFIFO(threadData, (&(data->simulationInfo->integerVarsPre[1]/* cc.fifox[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[51]/* cc.datavailable[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[76]/* cc.readsignal[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1]);

                      if(omc_FifoIODone(threadData, (&data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)[drone - 1] ))
                      {
                        (&(data->localData[0]->realVars[195]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 1)-1)] = (&(data->simulationInfo->realVarsPre[51]/* cc.msg_from_drone[1,1] variable */) )[(drone - 1) * 5 + (((modelica_integer) 2)-1)];

                        (&(data->localData[0]->realVars[195]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 2)-1)] = (&(data->simulationInfo->realVarsPre[51]/* cc.msg_from_drone[1,1] variable */) )[(drone - 1) * 5 + (((modelica_integer) 3)-1)];

                        (&(data->localData[0]->realVars[195]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 3)-1)] = (&(data->simulationInfo->realVarsPre[51]/* cc.msg_from_drone[1,1] variable */) )[(drone - 1) * 5 + (((modelica_integer) 4)-1)];

                        (&(data->localData[0]->realVars[154]/* cc.battery[1] DISCRETE */) )[drone - 1] = (&(data->simulationInfo->realVarsPre[51]/* cc.msg_from_drone[1,1] variable */) )[(drone - 1) * 5 + (((modelica_integer) 5)-1)];

                        tmp80 = Less(fabs((&data->localData[0]->realVars[154]/* cc.battery[1] DISCRETE */)[drone - 1]  - (data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ),0.1);
                        if(tmp80)
                        {
                          (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[0]/* cc.aliveDrones DISCRETE */)  - ((modelica_integer) 1);
                        }

                        (&(data->localData[0]->realVars[161]/* cc.lastAnswered[1] DISCRETE */) )[drone - 1] = data->localData[0]->timeValue;

                        (&(data->localData[0]->booleanVars[47]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;

                        (&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1] = ((modelica_integer) 0);
                      }
                    }
                  }
                }
              }
            }

            (data->localData[0]->integerVars[17]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

            tmp84 = ((modelica_integer) 1); tmp85 = 1; tmp86 = ((modelica_integer) 4);
            if(!(((tmp85 > 0) && (tmp84 > tmp86)) || ((tmp85 < 0) && (tmp84 < tmp86))))
            {
              modelica_integer drone;
              for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp84, tmp86); drone += tmp85)
              {
                if((!(&(data->simulationInfo->booleanVarsPre[68]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
                {
                  if((!(&(data->simulationInfo->booleanVarsPre[47]/* cc.comm_done[1] DISCRETE */) )[drone - 1]))
                  {
                    (data->localData[0]->integerVars[17]/* cc.z DISCRETE */)  = ((modelica_integer) 100);

                    break;
                  }
                }
              }
            }

            if(((data->localData[0]->integerVars[17]/* cc.z DISCRETE */)  == ((modelica_integer) 0)))
            {
              (data->localData[0]->integerVars[14]/* cc.state DISCRETE */)  = ((modelica_integer) 20);

              array_alloc_scalar_boolean_array(&tmp88, 4, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
              boolean_array_create(&tmp89, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[47]/* cc.comm_done[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)4);
              boolean_array_copy_data(tmp88, tmp89);
            }
          }
          else
          {
            if(((data->simulationInfo->integerVarsPre[14]/* cc.state DISCRETE */)  == ((modelica_integer) 20)))
            {
              tmp104 = ((modelica_integer) 1); tmp105 = 1; tmp106 = ((modelica_integer) 4);
              if(!(((tmp105 > 0) && (tmp104 > tmp106)) || ((tmp105 < 0) && (tmp104 < tmp106))))
              {
                modelica_integer drone;
                for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp104, tmp106); drone += tmp105)
                {
                  tmp91 = (&(data->simulationInfo->realVarsPre[195]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 1)-1)] - (&(data->simulationInfo->realVarsPre[211]/* cc.setx[1] DISCRETE */) )[drone - 1];
                  tmp92 = (&(data->simulationInfo->realVarsPre[195]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 2)-1)] - (&(data->simulationInfo->realVarsPre[215]/* cc.sety[1] DISCRETE */) )[drone - 1];
                  tmp93 = (&(data->simulationInfo->realVarsPre[195]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 3)-1)] - (&(data->simulationInfo->realVarsPre[219]/* cc.setz[1] DISCRETE */) )[drone - 1];
                  tmp94 = Less(sqrt((tmp91 * tmp91) + (tmp92 * tmp92) + (tmp93 * tmp93)),(data->simulationInfo->realParameter[1912]/* p.arrivalThreshold PARAM */) );
                  if(((&(data->simulationInfo->booleanVarsPre[64]/* cc.isBusy[1] DISCRETE */) )[drone - 1] && tmp94))
                  {
                    (&(data->localData[0]->booleanVars[64]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 0;

                    tmp96 = ((modelica_integer) 1); tmp97 = 1; tmp98 = ((modelica_integer) 8);
                    if(!(((tmp97 > 0) && (tmp96 > tmp98)) || ((tmp97 < 0) && (tmp96 < tmp98))))
                    {
                      modelica_integer area;
                      for(area = ((modelica_integer) 1); in_range_integer(area, tmp96, tmp98); area += tmp97)
                      {
                        if(((&(data->simulationInfo->integerVarsPre[5]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] == drone))
                        {
                          (&(data->localData[0]->integerVars[5]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);

                          (&(data->localData[0]->booleanVars[56]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1] = 1;

                          (&(data->localData[0]->realVars[165]/* cc.lastVisited[1] DISCRETE */) )[area - 1] = data->localData[0]->timeValue;

                          break;
                        }
                      }
                    }
                  }
                  else
                  {
                    if((&(data->simulationInfo->booleanVarsPre[64]/* cc.isBusy[1] DISCRETE */) )[drone - 1])
                    {
                      tmp99 = Greater(fabs(data->localData[0]->timeValue - (&(data->simulationInfo->realVarsPre[207]/* cc.setpointChangeTime[1] DISCRETE */) )[drone - 1]),(data->simulationInfo->realParameter[1913]/* p.arrival_timeout PARAM */) );
                      if(tmp99)
                      {
                        (&(data->localData[0]->booleanVars[64]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 0;

                        tmp101 = ((modelica_integer) 1); tmp102 = 1; tmp103 = ((modelica_integer) 8);
                        if(!(((tmp102 > 0) && (tmp101 > tmp103)) || ((tmp102 < 0) && (tmp101 < tmp103))))
                        {
                          modelica_integer area;
                          for(area = ((modelica_integer) 1); in_range_integer(area, tmp101, tmp103); area += tmp102)
                          {
                            if(((&(data->simulationInfo->integerVarsPre[5]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] == drone))
                            {
                              (&(data->localData[0]->integerVars[5]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }

              tmp108 = ((modelica_integer) 1); tmp109 = 1; tmp110 = ((modelica_integer) 4);
              if(!(((tmp109 > 0) && (tmp108 > tmp110)) || ((tmp109 < 0) && (tmp108 < tmp110))))
              {
                modelica_integer drone;
                for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp108, tmp110); drone += tmp109)
                {
                  if((!(&(data->simulationInfo->booleanVarsPre[68]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
                  {
                    real_array_create(&tmp107, ((modelica_real*)&((&(data->simulationInfo->realVarsPre[195]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 1)-1)])), 1, (_index_t)3);
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
                  tmp111 = Greater(omc_how__many__drones__in__area(threadData, area, (data->simulationInfo->realVarsPre[224]/* cc.time_span DISCRETE */) ),((modelica_integer) 0));
                  if(tmp111)
                  {
                    (&(data->localData[0]->booleanVars[56]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1] = 1;

                    (&(data->localData[0]->realVars[165]/* cc.lastVisited[1] DISCRETE */) )[area - 1] = data->localData[0]->timeValue;
                  }
                }
              }

              (data->localData[0]->realVars[160]/* cc.err DISCRETE */)  = 0.0;

              tmp115 = ((modelica_integer) 1); tmp116 = 1; tmp117 = ((modelica_integer) 8);
              if(!(((tmp116 > 0) && (tmp115 > tmp117)) || ((tmp116 < 0) && (tmp115 < tmp117))))
              {
                modelica_integer area;
                for(area = ((modelica_integer) 1); in_range_integer(area, tmp115, tmp117); area += tmp116)
                {
                  if((!(&(data->simulationInfo->booleanVarsPre[56]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1]))
                  {
                    (data->localData[0]->realVars[160]/* cc.err DISCRETE */)  = 100.0;

                    break;
                  }
                }
              }

              tmp118 = Less((data->simulationInfo->realVarsPre[160]/* cc.err DISCRETE */) ,1.0);
              if(tmp118)
              {
                (data->localData[0]->realVars[223]/* cc.time_passed_since_last_loop DISCRETE */)  = data->localData[0]->timeValue - (data->simulationInfo->realVarsPre[224]/* cc.time_span DISCRETE */) ;

                (data->localData[0]->realVars[224]/* cc.time_span DISCRETE */)  = data->localData[0]->timeValue;

                array_alloc_scalar_boolean_array(&tmp119, 8, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
                boolean_array_create(&tmp120, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[56]/* cc.hasBeenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
                boolean_array_copy_data(tmp119, tmp120);

                array_alloc_scalar_integer_array(&tmp121, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
                integer_array_create(&tmp122, ((modelica_integer*)&((&(data->localData[0]->integerVars[5]/* cc.hasBeenSelected[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
                integer_array_copy_data(tmp121, tmp122);
              }

              tmp123 = LessEq((data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */) ,((modelica_integer) 0));
              if(tmp123)
              {
                omc_disconnect__from__db(threadData);

                (data->localData[0]->booleanVars[55]/* cc.endSimulation DISCRETE */)  = 1;
              }

              (data->localData[0]->integerVars[14]/* cc.state DISCRETE */)  = ((modelica_integer) 25);
            }
            else
            {
              if(((data->simulationInfo->integerVarsPre[14]/* cc.state DISCRETE */)  == ((modelica_integer) 25)))
              {
                tmp161 = ((modelica_integer) 1); tmp162 = 1; tmp163 = ((modelica_integer) 4);
                if(!(((tmp162 > 0) && (tmp161 > tmp163)) || ((tmp162 < 0) && (tmp161 < tmp163))))
                {
                  modelica_integer drone;
                  for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp161, tmp163); drone += tmp162)
                  {
                    (&(data->localData[0]->booleanVars[80]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 0;

                    real_array_create(&tmp125, ((modelica_real*)&((&data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                    tmp126 = max_real_array(tmp125);
                    (data->localData[0]->realVars[174]/* cc.min_distance DISCRETE */)  = tmp126;

                    (data->localData[0]->realVars[225]/* cc.tmp_distance DISCRETE */)  = 0.0;

                    (data->localData[0]->integerVars[15]/* cc.tmp_area_1 DISCRETE */)  = ((modelica_integer) 0);

                    (data->localData[0]->integerVars[16]/* cc.tmp_area_2 DISCRETE */)  = ((modelica_integer) 0);

                    (data->localData[0]->realVars[158]/* cc.choice_value_1 DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[159]/* cc.choice_value_2 DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[151]/* cc.area_x DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[152]/* cc.area_y DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[153]/* cc.area_z DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[173]/* cc.max_time DISCRETE */)  = 0.0;

                    (data->localData[0]->realVars[226]/* cc.tmp_time DISCRETE */)  = 0.0;

                    if(((!(&(data->simulationInfo->booleanVarsPre[64]/* cc.isBusy[1] DISCRETE */) )[drone - 1]) && (!(&(data->simulationInfo->booleanVarsPre[68]/* cc.isDead[1] DISCRETE */) )[drone - 1])))
                    {
                      tmp137 = ((modelica_integer) 1); tmp138 = 1; tmp139 = ((modelica_integer) 8);
                      if(!(((tmp138 > 0) && (tmp137 > tmp139)) || ((tmp138 < 0) && (tmp137 < tmp139))))
                      {
                        modelica_integer area;
                        for(area = ((modelica_integer) 1); in_range_integer(area, tmp137, tmp139); area += tmp138)
                        {
                          if(((!(&(data->simulationInfo->booleanVarsPre[56]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1]) && ((&(data->simulationInfo->integerVarsPre[5]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] == ((modelica_integer) 0))))
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
                            tmp128._nDrones = ((modelica_integer) 4);
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
                            (data->localData[0]->realVars[151]/* cc.area_x DISCRETE */)  = omc_areaCenter(threadData, tmp128, area ,&(data->localData[0]->realVars[152]/* cc.area_y DISCRETE */)  ,&(data->localData[0]->realVars[153]/* cc.area_z DISCRETE */) );

                            tmp132 = (&(data->simulationInfo->realVarsPre[195]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 1)-1)] - (data->localData[0]->realVars[151]/* cc.area_x DISCRETE */) ;
                            tmp133 = (&(data->simulationInfo->realVarsPre[195]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 2)-1)] - (data->localData[0]->realVars[152]/* cc.area_y DISCRETE */) ;
                            tmp134 = (&(data->simulationInfo->realVarsPre[195]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 3)-1)] - (data->localData[0]->realVars[153]/* cc.area_z DISCRETE */) ;
                            (data->localData[0]->realVars[225]/* cc.tmp_distance DISCRETE */)  = sqrt((tmp132 * tmp132) + (tmp133 * tmp133) + (tmp134 * tmp134));

                            tmp135 = Less((data->localData[0]->realVars[225]/* cc.tmp_distance DISCRETE */) ,(data->localData[0]->realVars[174]/* cc.min_distance DISCRETE */) );
                            if(tmp135)
                            {
                              (data->localData[0]->realVars[174]/* cc.min_distance DISCRETE */)  = (data->localData[0]->realVars[225]/* cc.tmp_distance DISCRETE */) ;

                              (data->localData[0]->integerVars[15]/* cc.tmp_area_1 DISCRETE */)  = area;
                            }

                            (data->localData[0]->realVars[226]/* cc.tmp_time DISCRETE */)  = data->localData[0]->timeValue - (&(data->simulationInfo->realVarsPre[165]/* cc.lastVisited[1] DISCRETE */) )[area - 1];

                            tmp136 = Greater((data->localData[0]->realVars[226]/* cc.tmp_time DISCRETE */) ,(data->localData[0]->realVars[173]/* cc.max_time DISCRETE */) );
                            if(tmp136)
                            {
                              (data->localData[0]->realVars[173]/* cc.max_time DISCRETE */)  = (data->localData[0]->realVars[226]/* cc.tmp_time DISCRETE */) ;

                              (data->localData[0]->integerVars[16]/* cc.tmp_area_2 DISCRETE */)  = area;
                            }
                          }
                        }
                      }

                      if(((!((data->localData[0]->integerVars[15]/* cc.tmp_area_1 DISCRETE */)  == ((modelica_integer) 0))) && (!((data->localData[0]->integerVars[16]/* cc.tmp_area_2 DISCRETE */)  == ((modelica_integer) 0)))))
                      {
                        (data->localData[0]->realVars[158]/* cc.choice_value_1 DISCRETE */)  = ((data->localData[0]->realVars[174]/* cc.min_distance DISCRETE */) ) * ((data->simulationInfo->realParameter[1916]/* p.cc_choice PARAM */) );

                        (data->localData[0]->realVars[159]/* cc.choice_value_2 DISCRETE */)  = ((data->localData[0]->realVars[173]/* cc.max_time DISCRETE */) ) * (1.0 - (data->simulationInfo->realParameter[1916]/* p.cc_choice PARAM */) );

                        (&(data->localData[0]->booleanVars[80]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                        (&(data->localData[0]->realVars[207]/* cc.setpointChangeTime[1] DISCRETE */) )[drone - 1] = data->localData[0]->timeValue;

                        (&(data->localData[0]->booleanVars[64]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                        tmp142 = Greater((data->localData[0]->realVars[158]/* cc.choice_value_1 DISCRETE */) ,(data->localData[0]->realVars[159]/* cc.choice_value_2 DISCRETE */) );
                        if(tmp142)
                        {
                          tmp143 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[1937]/* p.p_worst PARAM */) );
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
                            tmp144._nDrones = ((modelica_integer) 4);
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
                            (&(data->localData[0]->realVars[211]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp144, (data->localData[0]->integerVars[15]/* cc.tmp_area_1 DISCRETE */)  ,&(&(data->localData[0]->realVars[215]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[219]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                            (&(data->localData[0]->integerVars[5]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[15]/* cc.tmp_area_1 DISCRETE */)  - 1] = drone;
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
                            tmp148._nDrones = ((modelica_integer) 4);
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
                            (&(data->localData[0]->realVars[211]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp148, (data->localData[0]->integerVars[16]/* cc.tmp_area_2 DISCRETE */)  ,&(&(data->localData[0]->realVars[215]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[219]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                            (&(data->localData[0]->integerVars[5]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[16]/* cc.tmp_area_2 DISCRETE */)  - 1] = drone;
                          }
                        }
                        else
                        {
                          tmp152 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[1937]/* p.p_worst PARAM */) );
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
                            tmp153._nDrones = ((modelica_integer) 4);
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
                            (&(data->localData[0]->realVars[211]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp153, (data->localData[0]->integerVars[16]/* cc.tmp_area_2 DISCRETE */)  ,&(&(data->localData[0]->realVars[215]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[219]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                            (&(data->localData[0]->integerVars[5]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[16]/* cc.tmp_area_2 DISCRETE */)  - 1] = drone;
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
                            tmp157._nDrones = ((modelica_integer) 4);
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
                            (&(data->localData[0]->realVars[211]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp157, (data->localData[0]->integerVars[15]/* cc.tmp_area_1 DISCRETE */)  ,&(&(data->localData[0]->realVars[215]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[219]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                            (&(data->localData[0]->integerVars[5]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[15]/* cc.tmp_area_1 DISCRETE */)  - 1] = drone;
                          }
                        }
                      }
                      else
                      {
                        (&(data->localData[0]->booleanVars[80]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                        (&(data->localData[0]->realVars[207]/* cc.setpointChangeTime[1] DISCRETE */) )[drone - 1] = data->localData[0]->timeValue;

                        (&(data->localData[0]->booleanVars[64]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                        (&(data->localData[0]->realVars[211]/* cc.setx[1] DISCRETE */) )[drone - 1] = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );

                        (&(data->localData[0]->realVars[215]/* cc.sety[1] DISCRETE */) )[drone - 1] = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );

                        (&(data->localData[0]->realVars[219]/* cc.setz[1] DISCRETE */) )[drone - 1] = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
                      }
                    }
                  }
                }

                tmp169 = ((modelica_integer) 1); tmp170 = 1; tmp171 = ((modelica_integer) 4);
                if(!(((tmp170 > 0) && (tmp169 > tmp171)) || ((tmp170 < 0) && (tmp169 < tmp171))))
                {
                  modelica_integer drone;
                  for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp169, tmp171); drone += tmp170)
                  {
                    if((!(&(data->simulationInfo->booleanVarsPre[68]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
                    {
                      if((&(data->simulationInfo->booleanVarsPre[72]/* cc.isRecharging[1] DISCRETE */) )[drone - 1])
                      {
                        tmp164 = Greater((&data->localData[0]->realVars[154]/* cc.battery[1] DISCRETE */)[drone - 1] ,(data->simulationInfo->realParameter[84]/* cc.p.rechargedThreshold PARAM */) );
                        if(tmp164)
                        {
                          (&(data->localData[0]->booleanVars[72]/* cc.isRecharging[1] DISCRETE */) )[drone - 1] = 0;

                          (data->localData[0]->integerVars[13]/* cc.rechargingDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[13]/* cc.rechargingDrones DISCRETE */)  - ((modelica_integer) 1);
                        }
                        else
                        {
                          tmp165 = Less((&data->localData[0]->realVars[154]/* cc.battery[1] DISCRETE */)[drone - 1] ,(data->simulationInfo->realParameter[84]/* cc.p.rechargedThreshold PARAM */) );
                          if(tmp165)
                          {
                            (&(data->localData[0]->booleanVars[72]/* cc.isRecharging[1] DISCRETE */) )[drone - 1] = 1;

                            (&(data->localData[0]->realVars[211]/* cc.setx[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[67]/* cc.p.docking_bay[1] PARAM */) ;

                            (&(data->localData[0]->realVars[215]/* cc.sety[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[68]/* cc.p.docking_bay[2] PARAM */) ;

                            (&(data->localData[0]->realVars[219]/* cc.setz[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[69]/* cc.p.docking_bay[3] PARAM */) ;
                          }
                        }
                      }
                      else
                      {
                        tmp166 = Less((&data->localData[0]->realVars[154]/* cc.battery[1] DISCRETE */)[drone - 1] ,(data->simulationInfo->realParameter[65]/* cc.p.dangerousBatteryLevel PARAM */) );
                        if(tmp166)
                        {
                          (data->localData[0]->integerVars[13]/* cc.rechargingDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[13]/* cc.rechargingDrones DISCRETE */)  + ((modelica_integer) 1);

                          (&(data->localData[0]->booleanVars[72]/* cc.isRecharging[1] DISCRETE */) )[drone - 1] = 1;

                          (&(data->localData[0]->booleanVars[80]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                          (&(data->localData[0]->booleanVars[64]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                          (&(data->localData[0]->realVars[211]/* cc.setx[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[67]/* cc.p.docking_bay[1] PARAM */) ;

                          (&(data->localData[0]->realVars[215]/* cc.sety[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[68]/* cc.p.docking_bay[2] PARAM */) ;

                          (&(data->localData[0]->realVars[219]/* cc.setz[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[69]/* cc.p.docking_bay[3] PARAM */) ;
                        }
                        else
                        {
                          tmp167 = Less(((modelica_real)(data->simulationInfo->integerVarsPre[13]/* cc.rechargingDrones DISCRETE */) ),1.4);
                          if(tmp167)
                          {
                            tmp168 = Less(omc_myrandom(threadData),((data->simulationInfo->realParameter[1936]/* p.p_recharge PARAM */) ) * (1.0 - (DIVISION_SIM((&data->localData[0]->realVars[154]/* cc.battery[1] DISCRETE */)[drone - 1] ,(data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ,"cc.p.capacity",equationIndexes))));
                            if(tmp168)
                            {
                              (&(data->localData[0]->booleanVars[72]/* cc.isRecharging[1] DISCRETE */) )[drone - 1] = 1;

                              (data->localData[0]->integerVars[13]/* cc.rechargingDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[13]/* cc.rechargingDrones DISCRETE */)  + ((modelica_integer) 1);

                              (&(data->localData[0]->booleanVars[80]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                              (&(data->localData[0]->booleanVars[64]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                              (&(data->localData[0]->realVars[211]/* cc.setx[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[67]/* cc.p.docking_bay[1] PARAM */) ;

                              (&(data->localData[0]->realVars[215]/* cc.sety[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[68]/* cc.p.docking_bay[2] PARAM */) ;

                              (&(data->localData[0]->realVars[219]/* cc.setz[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[69]/* cc.p.docking_bay[3] PARAM */) ;
                            }
                          }
                        }
                      }
                    }
                  }
                }

                tmp172 = ((modelica_integer) 1); tmp173 = 1; tmp174 = ((modelica_integer) 4);
                if(!(((tmp173 > 0) && (tmp172 > tmp174)) || ((tmp173 < 0) && (tmp172 < tmp174))))
                {
                  modelica_integer drone;
                  for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp172, tmp174); drone += tmp173)
                  {
                    if((&(data->simulationInfo->booleanVarsPre[80]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1])
                    {
                      (data->localData[0]->integerVars[14]/* cc.state DISCRETE */)  = ((modelica_integer) 30);

                      break;
                    }
                    else
                    {
                      (data->localData[0]->integerVars[14]/* cc.state DISCRETE */)  = ((modelica_integer) 0);
                    }
                  }
                }
              }
              else
              {
                if(((data->simulationInfo->integerVarsPre[14]/* cc.state DISCRETE */)  == ((modelica_integer) 30)))
                {
                  tmp176 = ((modelica_integer) 1); tmp177 = 1; tmp178 = ((modelica_integer) 4);
                  if(!(((tmp177 > 0) && (tmp176 > tmp178)) || ((tmp177 < 0) && (tmp176 < tmp178))))
                  {
                    modelica_integer drone;
                    for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp176, tmp178); drone += tmp177)
                    {
                      if((!(&data->localData[0]->booleanVars[68]/* cc.isDead[1] DISCRETE */)[drone - 1] ))
                      {
                        (&(data->localData[0]->realVars[175]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 1)-1)] = 2.0;

                        (&(data->localData[0]->realVars[175]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 2)-1)] = (&data->localData[0]->realVars[211]/* cc.setx[1] DISCRETE */)[drone - 1] ;

                        (&(data->localData[0]->realVars[175]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 3)-1)] = (&data->localData[0]->realVars[215]/* cc.sety[1] DISCRETE */)[drone - 1] ;

                        (&(data->localData[0]->realVars[175]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 4)-1)] = (&data->localData[0]->realVars[219]/* cc.setz[1] DISCRETE */)[drone - 1] ;

                        (&(data->localData[0]->booleanVars[47]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 0;

                        (&(data->localData[0]->booleanVars[80]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 0;
                      }
                      else
                      {
                        (&(data->localData[0]->booleanVars[47]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;
                      }
                    }
                  }

                  (data->localData[0]->integerVars[14]/* cc.state DISCRETE */)  = ((modelica_integer) 40);
                }
                else
                {
                  if(((data->simulationInfo->integerVarsPre[14]/* cc.state DISCRETE */)  == ((modelica_integer) 40)))
                  {
                    tmp180 = ((modelica_integer) 1); tmp181 = 1; tmp182 = ((modelica_integer) 4);
                    if(!(((tmp181 > 0) && (tmp180 > tmp182)) || ((tmp181 < 0) && (tmp180 < tmp182))))
                    {
                      modelica_integer drone;
                      for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp180, tmp182); drone += tmp181)
                      {
                        if((!(&(data->simulationInfo->booleanVarsPre[47]/* cc.comm_done[1] DISCRETE */) )[drone - 1]))
                        {
                          (&(data->localData[0]->booleanVars[88]/* cc.writesignal[1] DISCRETE */) )[drone - 1] = omc_WriteToFIFO(threadData, (&(data->simulationInfo->integerVarsPre[1]/* cc.fifox[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[88]/* cc.writesignal[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[84]/* cc.spaceavailable[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1]);

                          if(omc_FifoIODone(threadData, (&data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)[drone - 1] ))
                          {
                            (&(data->localData[0]->booleanVars[47]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;

                            (&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1] = ((modelica_integer) 0);
                          }
                        }
                      }
                    }

                    (data->localData[0]->integerVars[17]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

                    tmp183 = ((modelica_integer) 1); tmp184 = 1; tmp185 = ((modelica_integer) 4);
                    if(!(((tmp184 > 0) && (tmp183 > tmp185)) || ((tmp184 < 0) && (tmp183 < tmp185))))
                    {
                      modelica_integer drone;
                      for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp183, tmp185); drone += tmp184)
                      {
                        if((!(&(data->simulationInfo->booleanVarsPre[68]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
                        {
                          if((!(&(data->simulationInfo->booleanVarsPre[47]/* cc.comm_done[1] DISCRETE */) )[drone - 1]))
                          {
                            (data->localData[0]->integerVars[17]/* cc.z DISCRETE */)  = ((modelica_integer) 100);

                            break;
                          }
                        }
                      }
                    }

                    if(((data->localData[0]->integerVars[17]/* cc.z DISCRETE */)  == ((modelica_integer) 0)))
                    {
                      (data->localData[0]->integerVars[14]/* cc.state DISCRETE */)  = ((modelica_integer) 0);
                    }
                  }
                  else
                  {
                    (data->localData[0]->integerVars[14]/* cc.state DISCRETE */)  = (data->simulationInfo->integerVarsPre[14]/* cc.state DISCRETE */) ;
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
equation index: 330
type: SIMPLE_ASSIGN
cc_to_drone[3].inputdata[1] = cc.msg_to_drone[3,1]
*/
void System_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  (data->localData[0]->realVars[82]/* cc_to_drone[3].inputdata[1] variable */)  = (data->localData[0]->realVars[185]/* cc.msg_to_drone[3,1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 331
type: SIMPLE_ASSIGN
cc_to_drone[4].inputdata[5] = cc.msg_to_drone[4,5]
*/
void System_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  (data->localData[0]->realVars[91]/* cc_to_drone[4].inputdata[5] variable */)  = (data->localData[0]->realVars[194]/* cc.msg_to_drone[4,5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 332
type: SIMPLE_ASSIGN
cc_to_drone[4].inputdata[4] = cc.msg_to_drone[4,4]
*/
void System_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  (data->localData[0]->realVars[90]/* cc_to_drone[4].inputdata[4] variable */)  = (data->localData[0]->realVars[193]/* cc.msg_to_drone[4,4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 333
type: SIMPLE_ASSIGN
cc_to_drone[4].inputdata[3] = cc.msg_to_drone[4,3]
*/
void System_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  (data->localData[0]->realVars[89]/* cc_to_drone[4].inputdata[3] variable */)  = (data->localData[0]->realVars[192]/* cc.msg_to_drone[4,3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 334
type: SIMPLE_ASSIGN
cc_to_drone[1].writesignal = cc.writesignal[1]
*/
void System_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  (data->localData[0]->booleanVars[112]/* cc_to_drone[1].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[88]/* cc.writesignal[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 335
type: SIMPLE_ASSIGN
cc_to_drone[1].writesigint = not pre(cc_to_drone[1].writesignal) == cc_to_drone[1].writesignal
*/
void System_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  (data->localData[0]->booleanVars[108]/* cc_to_drone[1].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[112]/* cc_to_drone[1].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[112]/* cc_to_drone[1].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[112]/* cc_to_drone[1].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[112]/* cc_to_drone[1].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 336
type: SIMPLE_ASSIGN
cc_to_drone[4].inputdata[1] = cc.msg_to_drone[4,1]
*/
void System_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  (data->localData[0]->realVars[87]/* cc_to_drone[4].inputdata[1] variable */)  = (data->localData[0]->realVars[190]/* cc.msg_to_drone[4,1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 337
type: SIMPLE_ASSIGN
drone_to_cc[2].readsignal = cc.readsignal[2]
*/
void System_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  (data->localData[0]->booleanVars[149]/* drone_to_cc[2].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[77]/* cc.readsignal[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 338
type: SIMPLE_ASSIGN
drone_to_cc[2].readsigint = not pre(drone_to_cc[2].readsignal) == drone_to_cc[2].readsignal
*/
void System_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  (data->localData[0]->booleanVars[145]/* drone_to_cc[2].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[149]/* drone_to_cc[2].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[149]/* drone_to_cc[2].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[149]/* drone_to_cc[2].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[149]/* drone_to_cc[2].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 339
type: SIMPLE_ASSIGN
cc_to_drone[3].inputdata[4] = cc.msg_to_drone[3,4]
*/
void System_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  (data->localData[0]->realVars[85]/* cc_to_drone[3].inputdata[4] variable */)  = (data->localData[0]->realVars[188]/* cc.msg_to_drone[3,4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 340
type: SIMPLE_ASSIGN
cc_to_drone[2].writesignal = cc.writesignal[2]
*/
void System_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  (data->localData[0]->booleanVars[113]/* cc_to_drone[2].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[89]/* cc.writesignal[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 341
type: SIMPLE_ASSIGN
cc_to_drone[2].writesigint = not pre(cc_to_drone[2].writesignal) == cc_to_drone[2].writesignal
*/
void System_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  (data->localData[0]->booleanVars[109]/* cc_to_drone[2].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[113]/* cc_to_drone[2].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[113]/* cc_to_drone[2].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[113]/* cc_to_drone[2].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[113]/* cc_to_drone[2].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 342
type: SIMPLE_ASSIGN
drone_to_cc[3].readsignal = cc.readsignal[3]
*/
void System_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  (data->localData[0]->booleanVars[150]/* drone_to_cc[3].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[78]/* cc.readsignal[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 343
type: SIMPLE_ASSIGN
drone_to_cc[3].readsigint = not pre(drone_to_cc[3].readsignal) == drone_to_cc[3].readsignal
*/
void System_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  (data->localData[0]->booleanVars[146]/* drone_to_cc[3].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[150]/* drone_to_cc[3].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[150]/* drone_to_cc[3].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[150]/* drone_to_cc[3].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[150]/* drone_to_cc[3].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 344
type: SIMPLE_ASSIGN
cc_to_drone[3].inputdata[5] = cc.msg_to_drone[3,5]
*/
void System_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  (data->localData[0]->realVars[86]/* cc_to_drone[3].inputdata[5] variable */)  = (data->localData[0]->realVars[189]/* cc.msg_to_drone[3,5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 345
type: SIMPLE_ASSIGN
cc_to_drone[3].inputdata[2] = cc.msg_to_drone[3,2]
*/
void System_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  (data->localData[0]->realVars[83]/* cc_to_drone[3].inputdata[2] variable */)  = (data->localData[0]->realVars[186]/* cc.msg_to_drone[3,2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 346
type: SIMPLE_ASSIGN
cc_to_drone[3].inputdata[3] = cc.msg_to_drone[3,3]
*/
void System_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  (data->localData[0]->realVars[84]/* cc_to_drone[3].inputdata[3] variable */)  = (data->localData[0]->realVars[187]/* cc.msg_to_drone[3,3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 347
type: ALGORITHM

  cc_to_drone[3].newest := pre(cc_to_drone[3].newest);
  cc_to_drone[3].oldest := pre(cc_to_drone[3].oldest);
  cc_to_drone[3].fifosize := pre(cc_to_drone[3].fifosize);
  cc_to_drone[3].fifo[10,5] := pre(cc_to_drone[3].fifo[10,5]);
  cc_to_drone[3].fifo[10,4] := pre(cc_to_drone[3].fifo[10,4]);
  cc_to_drone[3].fifo[10,3] := pre(cc_to_drone[3].fifo[10,3]);
  cc_to_drone[3].fifo[10,2] := pre(cc_to_drone[3].fifo[10,2]);
  cc_to_drone[3].fifo[10,1] := pre(cc_to_drone[3].fifo[10,1]);
  cc_to_drone[3].fifo[9,5] := pre(cc_to_drone[3].fifo[9,5]);
  cc_to_drone[3].fifo[9,4] := pre(cc_to_drone[3].fifo[9,4]);
  cc_to_drone[3].fifo[9,3] := pre(cc_to_drone[3].fifo[9,3]);
  cc_to_drone[3].fifo[9,2] := pre(cc_to_drone[3].fifo[9,2]);
  cc_to_drone[3].fifo[9,1] := pre(cc_to_drone[3].fifo[9,1]);
  cc_to_drone[3].fifo[8,5] := pre(cc_to_drone[3].fifo[8,5]);
  cc_to_drone[3].fifo[8,4] := pre(cc_to_drone[3].fifo[8,4]);
  cc_to_drone[3].fifo[8,3] := pre(cc_to_drone[3].fifo[8,3]);
  cc_to_drone[3].fifo[8,2] := pre(cc_to_drone[3].fifo[8,2]);
  cc_to_drone[3].fifo[8,1] := pre(cc_to_drone[3].fifo[8,1]);
  cc_to_drone[3].fifo[7,5] := pre(cc_to_drone[3].fifo[7,5]);
  cc_to_drone[3].fifo[7,4] := pre(cc_to_drone[3].fifo[7,4]);
  cc_to_drone[3].fifo[7,3] := pre(cc_to_drone[3].fifo[7,3]);
  cc_to_drone[3].fifo[7,2] := pre(cc_to_drone[3].fifo[7,2]);
  cc_to_drone[3].fifo[7,1] := pre(cc_to_drone[3].fifo[7,1]);
  cc_to_drone[3].fifo[6,5] := pre(cc_to_drone[3].fifo[6,5]);
  cc_to_drone[3].fifo[6,4] := pre(cc_to_drone[3].fifo[6,4]);
  cc_to_drone[3].fifo[6,3] := pre(cc_to_drone[3].fifo[6,3]);
  cc_to_drone[3].fifo[6,2] := pre(cc_to_drone[3].fifo[6,2]);
  cc_to_drone[3].fifo[6,1] := pre(cc_to_drone[3].fifo[6,1]);
  cc_to_drone[3].fifo[5,5] := pre(cc_to_drone[3].fifo[5,5]);
  cc_to_drone[3].fifo[5,4] := pre(cc_to_drone[3].fifo[5,4]);
  cc_to_drone[3].fifo[5,3] := pre(cc_to_drone[3].fifo[5,3]);
  cc_to_drone[3].fifo[5,2] := pre(cc_to_drone[3].fifo[5,2]);
  cc_to_drone[3].fifo[5,1] := pre(cc_to_drone[3].fifo[5,1]);
  cc_to_drone[3].fifo[4,5] := pre(cc_to_drone[3].fifo[4,5]);
  cc_to_drone[3].fifo[4,4] := pre(cc_to_drone[3].fifo[4,4]);
  cc_to_drone[3].fifo[4,3] := pre(cc_to_drone[3].fifo[4,3]);
  cc_to_drone[3].fifo[4,2] := pre(cc_to_drone[3].fifo[4,2]);
  cc_to_drone[3].fifo[4,1] := pre(cc_to_drone[3].fifo[4,1]);
  cc_to_drone[3].fifo[3,5] := pre(cc_to_drone[3].fifo[3,5]);
  cc_to_drone[3].fifo[3,4] := pre(cc_to_drone[3].fifo[3,4]);
  cc_to_drone[3].fifo[3,3] := pre(cc_to_drone[3].fifo[3,3]);
  cc_to_drone[3].fifo[3,2] := pre(cc_to_drone[3].fifo[3,2]);
  cc_to_drone[3].fifo[3,1] := pre(cc_to_drone[3].fifo[3,1]);
  cc_to_drone[3].fifo[2,5] := pre(cc_to_drone[3].fifo[2,5]);
  cc_to_drone[3].fifo[2,4] := pre(cc_to_drone[3].fifo[2,4]);
  cc_to_drone[3].fifo[2,3] := pre(cc_to_drone[3].fifo[2,3]);
  cc_to_drone[3].fifo[2,2] := pre(cc_to_drone[3].fifo[2,2]);
  cc_to_drone[3].fifo[2,1] := pre(cc_to_drone[3].fifo[2,1]);
  cc_to_drone[3].fifo[1,5] := pre(cc_to_drone[3].fifo[1,5]);
  cc_to_drone[3].fifo[1,4] := pre(cc_to_drone[3].fifo[1,4]);
  cc_to_drone[3].fifo[1,3] := pre(cc_to_drone[3].fifo[1,3]);
  cc_to_drone[3].fifo[1,2] := pre(cc_to_drone[3].fifo[1,2]);
  cc_to_drone[3].fifo[1,1] := pre(cc_to_drone[3].fifo[1,1]);
  cc_to_drone[3].spaceavailable := pre(cc_to_drone[3].spaceavailable);
  cc_to_drone[3].outputdata[5] := pre(cc_to_drone[3].outputdata[5]);
  cc_to_drone[3].outputdata[4] := pre(cc_to_drone[3].outputdata[4]);
  cc_to_drone[3].outputdata[3] := pre(cc_to_drone[3].outputdata[3]);
  cc_to_drone[3].outputdata[2] := pre(cc_to_drone[3].outputdata[2]);
  cc_to_drone[3].outputdata[1] := pre(cc_to_drone[3].outputdata[1]);
  cc_to_drone[3].datavailable := pre(cc_to_drone[3].datavailable);
  $whenCondition18 := pre($whenCondition18);
  $whenCondition17 := pre($whenCondition17);
  $whenCondition16 := pre($whenCondition16);
  $whenCondition16 := pre(cc_to_drone[3].readsigint) and pre(cc_to_drone[3].writesigint);
  $whenCondition17 := pre(cc_to_drone[3].readsigint) and not pre(cc_to_drone[3].writesigint) and pre(cc_to_drone[3].fifosize) >= 1;
  $whenCondition18 := not pre(cc_to_drone[3].readsigint) and pre(cc_to_drone[3].writesigint) and pre(cc_to_drone[3].fifosize) < 10;
  when false then
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
  elsewhen $whenCondition16 then
    if pre(cc_to_drone[3].fifosize) < 10 then
      for j in 1:5 loop
        cc_to_drone[3].fifo[pre(cc_to_drone[3].newest),j] := cc_to_drone[3].inputdata[j];
      end for;
      cc_to_drone[3].newest := mod(pre(cc_to_drone[3].newest), 10) + 1;
      for j in 1:5 loop
        cc_to_drone[3].outputdata[j] := cc_to_drone[3].fifo[pre(cc_to_drone[3].oldest),j];
      end for;
      cc_to_drone[3].oldest := mod(pre(cc_to_drone[3].oldest), 10) + 1;
    else
      for j in 1:5 loop
        cc_to_drone[3].outputdata[j] := cc_to_drone[3].fifo[pre(cc_to_drone[3].oldest),j];
      end for;
      cc_to_drone[3].oldest := mod(pre(cc_to_drone[3].oldest), 10) + 1;
      for j in 1:5 loop
        cc_to_drone[3].fifo[pre(cc_to_drone[3].newest),j] := cc_to_drone[3].inputdata[j];
      end for;
      cc_to_drone[3].newest := mod(pre(cc_to_drone[3].newest), 10) + 1;
    end if;
  elsewhen $whenCondition17 then
    for j in 1:5 loop
      cc_to_drone[3].outputdata[j] := cc_to_drone[3].fifo[pre(cc_to_drone[3].oldest),j];
    end for;
    cc_to_drone[3].oldest := mod(pre(cc_to_drone[3].oldest), 10) + 1;
    cc_to_drone[3].fifosize := pre(cc_to_drone[3].fifosize) - 1;
    cc_to_drone[3].datavailable := cc_to_drone[3].fifosize >= 1;
    cc_to_drone[3].spaceavailable := true;
  elsewhen $whenCondition18 then
    for j in 1:5 loop
      cc_to_drone[3].fifo[pre(cc_to_drone[3].newest),j] := cc_to_drone[3].inputdata[j];
    end for;
    cc_to_drone[3].newest := mod(pre(cc_to_drone[3].newest), 10) + 1;
    cc_to_drone[3].fifosize := pre(cc_to_drone[3].fifosize) + 1;
    cc_to_drone[3].datavailable := true;
    cc_to_drone[3].spaceavailable := pre(cc_to_drone[3].fifosize) < 10;
    for j in 1:5 loop
      cc_to_drone[3].outputdata[j] := cc_to_drone[3].fifo[pre(cc_to_drone[3].oldest),j];
    end for;
  end when;
*/
void System_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  modelica_boolean tmp191;
  modelica_boolean tmp192;
  modelica_integer tmp193;
  modelica_integer tmp194;
  modelica_integer tmp195;
  modelica_integer tmp196;
  modelica_integer tmp197;
  modelica_integer tmp198;
  modelica_integer tmp199;
  modelica_integer tmp200;
  modelica_integer tmp201;
  modelica_boolean tmp202;
  modelica_integer tmp203;
  modelica_integer tmp204;
  modelica_integer tmp205;
  modelica_integer tmp206;
  modelica_integer tmp207;
  modelica_integer tmp208;
  modelica_integer tmp209;
  modelica_integer tmp210;
  modelica_integer tmp211;
  modelica_integer tmp212;
  modelica_integer tmp213;
  modelica_integer tmp214;
  modelica_integer tmp215;
  modelica_integer tmp216;
  modelica_integer tmp217;
  modelica_integer tmp218;
  modelica_integer tmp219;
  modelica_integer tmp220;
  modelica_integer tmp221;
  modelica_integer tmp222;
  modelica_boolean tmp223;
  modelica_integer tmp224;
  modelica_integer tmp225;
  modelica_integer tmp226;
  modelica_integer tmp227;
  modelica_boolean tmp228;
  modelica_integer tmp229;
  modelica_integer tmp230;
  modelica_integer tmp231;
  (data->localData[0]->integerVars[24]/* cc_to_drone[3].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[24]/* cc_to_drone[3].newest DISCRETE */) ;

  (data->localData[0]->integerVars[28]/* cc_to_drone[3].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[28]/* cc_to_drone[3].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[20]/* cc_to_drone[3].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[20]/* cc_to_drone[3].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[376]/* cc_to_drone[3].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[376]/* cc_to_drone[3].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[375]/* cc_to_drone[3].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[375]/* cc_to_drone[3].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[374]/* cc_to_drone[3].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[374]/* cc_to_drone[3].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[373]/* cc_to_drone[3].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[373]/* cc_to_drone[3].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[372]/* cc_to_drone[3].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[372]/* cc_to_drone[3].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[371]/* cc_to_drone[3].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[371]/* cc_to_drone[3].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[370]/* cc_to_drone[3].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[370]/* cc_to_drone[3].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[369]/* cc_to_drone[3].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[369]/* cc_to_drone[3].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[368]/* cc_to_drone[3].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[368]/* cc_to_drone[3].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[367]/* cc_to_drone[3].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[367]/* cc_to_drone[3].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[366]/* cc_to_drone[3].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[366]/* cc_to_drone[3].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[365]/* cc_to_drone[3].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[365]/* cc_to_drone[3].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[364]/* cc_to_drone[3].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[364]/* cc_to_drone[3].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[363]/* cc_to_drone[3].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[363]/* cc_to_drone[3].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[362]/* cc_to_drone[3].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[362]/* cc_to_drone[3].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[361]/* cc_to_drone[3].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[361]/* cc_to_drone[3].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[360]/* cc_to_drone[3].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[360]/* cc_to_drone[3].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[359]/* cc_to_drone[3].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[359]/* cc_to_drone[3].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[358]/* cc_to_drone[3].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[358]/* cc_to_drone[3].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[357]/* cc_to_drone[3].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[357]/* cc_to_drone[3].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[356]/* cc_to_drone[3].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[356]/* cc_to_drone[3].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[355]/* cc_to_drone[3].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[355]/* cc_to_drone[3].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[354]/* cc_to_drone[3].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[354]/* cc_to_drone[3].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[353]/* cc_to_drone[3].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[353]/* cc_to_drone[3].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[352]/* cc_to_drone[3].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[352]/* cc_to_drone[3].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[351]/* cc_to_drone[3].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[351]/* cc_to_drone[3].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[350]/* cc_to_drone[3].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[350]/* cc_to_drone[3].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[349]/* cc_to_drone[3].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[349]/* cc_to_drone[3].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[348]/* cc_to_drone[3].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[348]/* cc_to_drone[3].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[347]/* cc_to_drone[3].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[347]/* cc_to_drone[3].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[346]/* cc_to_drone[3].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[346]/* cc_to_drone[3].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[345]/* cc_to_drone[3].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[345]/* cc_to_drone[3].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[344]/* cc_to_drone[3].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[344]/* cc_to_drone[3].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[343]/* cc_to_drone[3].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[343]/* cc_to_drone[3].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[342]/* cc_to_drone[3].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[342]/* cc_to_drone[3].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[341]/* cc_to_drone[3].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[341]/* cc_to_drone[3].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[340]/* cc_to_drone[3].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[340]/* cc_to_drone[3].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[339]/* cc_to_drone[3].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[339]/* cc_to_drone[3].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[338]/* cc_to_drone[3].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[338]/* cc_to_drone[3].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[337]/* cc_to_drone[3].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[337]/* cc_to_drone[3].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[336]/* cc_to_drone[3].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[336]/* cc_to_drone[3].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[335]/* cc_to_drone[3].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[335]/* cc_to_drone[3].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[334]/* cc_to_drone[3].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[334]/* cc_to_drone[3].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[333]/* cc_to_drone[3].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[333]/* cc_to_drone[3].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[332]/* cc_to_drone[3].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[332]/* cc_to_drone[3].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[331]/* cc_to_drone[3].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[331]/* cc_to_drone[3].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[330]/* cc_to_drone[3].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[330]/* cc_to_drone[3].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[329]/* cc_to_drone[3].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[329]/* cc_to_drone[3].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[328]/* cc_to_drone[3].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[328]/* cc_to_drone[3].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[327]/* cc_to_drone[3].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[327]/* cc_to_drone[3].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[106]/* cc_to_drone[3].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[106]/* cc_to_drone[3].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[441]/* cc_to_drone[3].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[441]/* cc_to_drone[3].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[440]/* cc_to_drone[3].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[440]/* cc_to_drone[3].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[439]/* cc_to_drone[3].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[439]/* cc_to_drone[3].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[438]/* cc_to_drone[3].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[438]/* cc_to_drone[3].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[437]/* cc_to_drone[3].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[437]/* cc_to_drone[3].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[94]/* cc_to_drone[3].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[94]/* cc_to_drone[3].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[9]/* $whenCondition18 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[9]/* $whenCondition18 DISCRETE */) ;

  (data->localData[0]->booleanVars[8]/* $whenCondition17 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[8]/* $whenCondition17 DISCRETE */) ;

  (data->localData[0]->booleanVars[7]/* $whenCondition16 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[7]/* $whenCondition16 DISCRETE */) ;

  (data->localData[0]->booleanVars[7]/* $whenCondition16 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[98]/* cc_to_drone[3].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[110]/* cc_to_drone[3].writesigint DISCRETE */) );

  tmp191 = GreaterEq((data->simulationInfo->integerVarsPre[20]/* cc_to_drone[3].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[8]/* $whenCondition17 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[98]/* cc_to_drone[3].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[110]/* cc_to_drone[3].writesigint DISCRETE */) )) && tmp191);

  tmp192 = Less((data->simulationInfo->integerVarsPre[20]/* cc_to_drone[3].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[9]/* $whenCondition18 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[98]/* cc_to_drone[3].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[110]/* cc_to_drone[3].writesigint DISCRETE */) ) && tmp192);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[94]/* cc_to_drone[3].datavailable DISCRETE */)  = 0;

      tmp193 = ((modelica_integer) 1); tmp194 = 1; tmp195 = ((modelica_integer) 5);
      if(!(((tmp194 > 0) && (tmp193 > tmp195)) || ((tmp194 < 0) && (tmp193 < tmp195))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp193, tmp195); j += tmp194)
        {
          (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[106]/* cc_to_drone[3].spaceavailable DISCRETE */)  = 1;

      tmp199 = ((modelica_integer) 1); tmp200 = 1; tmp201 = ((modelica_integer) 10);
      if(!(((tmp200 > 0) && (tmp199 > tmp201)) || ((tmp200 < 0) && (tmp199 < tmp201))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp199, tmp201); i += tmp200)
        {
          tmp196 = ((modelica_integer) 1); tmp197 = 1; tmp198 = ((modelica_integer) 5);
          if(!(((tmp197 > 0) && (tmp196 > tmp198)) || ((tmp197 < 0) && (tmp196 < tmp198))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp196, tmp198); j += tmp197)
            {
              (&(data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[20]/* cc_to_drone[3].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[28]/* cc_to_drone[3].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[24]/* cc_to_drone[3].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[7]/* $whenCondition16 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[7]/* $whenCondition16 DISCRETE */)  /* edge */))
    {
      tmp202 = Less((data->simulationInfo->integerVarsPre[20]/* cc_to_drone[3].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp202)
      {
        tmp203 = ((modelica_integer) 1); tmp204 = 1; tmp205 = ((modelica_integer) 5);
        if(!(((tmp204 > 0) && (tmp203 > tmp205)) || ((tmp204 < 0) && (tmp203 < tmp205))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp203, tmp205); j += tmp204)
          {
            (&(data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[24]/* cc_to_drone[3].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[72]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 3) - 1) * 5 + (j-1)] ;
          }
        }

        tmp206 = ((modelica_integer) 10);
        if (tmp206 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[3].newest), 10)");}
        (data->localData[0]->integerVars[24]/* cc_to_drone[3].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[24]/* cc_to_drone[3].newest DISCRETE */) , tmp206) + ((modelica_integer) 1);

        tmp207 = ((modelica_integer) 1); tmp208 = 1; tmp209 = ((modelica_integer) 5);
        if(!(((tmp208 > 0) && (tmp207 > tmp209)) || ((tmp208 < 0) && (tmp207 < tmp209))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp207, tmp209); j += tmp208)
          {
            (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[28]/* cc_to_drone[3].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp210 = ((modelica_integer) 10);
        if (tmp210 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[3].oldest), 10)");}
        (data->localData[0]->integerVars[28]/* cc_to_drone[3].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[28]/* cc_to_drone[3].oldest DISCRETE */) , tmp210) + ((modelica_integer) 1);
      }
      else
      {
        tmp211 = ((modelica_integer) 1); tmp212 = 1; tmp213 = ((modelica_integer) 5);
        if(!(((tmp212 > 0) && (tmp211 > tmp213)) || ((tmp212 < 0) && (tmp211 < tmp213))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp211, tmp213); j += tmp212)
          {
            (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[28]/* cc_to_drone[3].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp214 = ((modelica_integer) 10);
        if (tmp214 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[3].oldest), 10)");}
        (data->localData[0]->integerVars[28]/* cc_to_drone[3].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[28]/* cc_to_drone[3].oldest DISCRETE */) , tmp214) + ((modelica_integer) 1);

        tmp215 = ((modelica_integer) 1); tmp216 = 1; tmp217 = ((modelica_integer) 5);
        if(!(((tmp216 > 0) && (tmp215 > tmp217)) || ((tmp216 < 0) && (tmp215 < tmp217))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp215, tmp217); j += tmp216)
          {
            (&(data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[24]/* cc_to_drone[3].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[72]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 3) - 1) * 5 + (j-1)] ;
          }
        }

        tmp218 = ((modelica_integer) 10);
        if (tmp218 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[3].newest), 10)");}
        (data->localData[0]->integerVars[24]/* cc_to_drone[3].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[24]/* cc_to_drone[3].newest DISCRETE */) , tmp218) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[8]/* $whenCondition17 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[8]/* $whenCondition17 DISCRETE */)  /* edge */))
    {
      tmp219 = ((modelica_integer) 1); tmp220 = 1; tmp221 = ((modelica_integer) 5);
      if(!(((tmp220 > 0) && (tmp219 > tmp221)) || ((tmp220 < 0) && (tmp219 < tmp221))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp219, tmp221); j += tmp220)
        {
          (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[28]/* cc_to_drone[3].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp222 = ((modelica_integer) 10);
      if (tmp222 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[3].oldest), 10)");}
      (data->localData[0]->integerVars[28]/* cc_to_drone[3].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[28]/* cc_to_drone[3].oldest DISCRETE */) , tmp222) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[20]/* cc_to_drone[3].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[20]/* cc_to_drone[3].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp223 = GreaterEq((data->localData[0]->integerVars[20]/* cc_to_drone[3].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[94]/* cc_to_drone[3].datavailable DISCRETE */)  = tmp223;

      (data->localData[0]->booleanVars[106]/* cc_to_drone[3].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[9]/* $whenCondition18 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[9]/* $whenCondition18 DISCRETE */)  /* edge */))
    {
      tmp224 = ((modelica_integer) 1); tmp225 = 1; tmp226 = ((modelica_integer) 5);
      if(!(((tmp225 > 0) && (tmp224 > tmp226)) || ((tmp225 < 0) && (tmp224 < tmp226))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp224, tmp226); j += tmp225)
        {
          (&(data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[24]/* cc_to_drone[3].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[72]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 3) - 1) * 5 + (j-1)] ;
        }
      }

      tmp227 = ((modelica_integer) 10);
      if (tmp227 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[3].newest), 10)");}
      (data->localData[0]->integerVars[24]/* cc_to_drone[3].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[24]/* cc_to_drone[3].newest DISCRETE */) , tmp227) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[20]/* cc_to_drone[3].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[20]/* cc_to_drone[3].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[94]/* cc_to_drone[3].datavailable DISCRETE */)  = 1;

      tmp228 = Less((data->simulationInfo->integerVarsPre[20]/* cc_to_drone[3].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[106]/* cc_to_drone[3].spaceavailable DISCRETE */)  = tmp228;

      tmp229 = ((modelica_integer) 1); tmp230 = 1; tmp231 = ((modelica_integer) 5);
      if(!(((tmp230 > 0) && (tmp229 > tmp231)) || ((tmp230 < 0) && (tmp229 < tmp231))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp229, tmp231); j += tmp230)
        {
          (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[28]/* cc_to_drone[3].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 348
type: SIMPLE_ASSIGN
d[3].datavailable = cc_to_drone[3].datavailable
*/
void System_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  (data->localData[0]->booleanVars[126]/* d[3].datavailable DISCRETE */)  = (data->localData[0]->booleanVars[94]/* cc_to_drone[3].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 349
type: SIMPLE_ASSIGN
cc.spaceavailable[3] = cc_to_drone[3].spaceavailable
*/
void System_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  (data->localData[0]->booleanVars[86]/* cc.spaceavailable[3] DISCRETE */)  = (data->localData[0]->booleanVars[106]/* cc_to_drone[3].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 350
type: SIMPLE_ASSIGN
cc_to_drone[4].inputdata[2] = cc.msg_to_drone[4,2]
*/
void System_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  (data->localData[0]->realVars[88]/* cc_to_drone[4].inputdata[2] variable */)  = (data->localData[0]->realVars[191]/* cc.msg_to_drone[4,2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 351
type: ALGORITHM

  cc_to_drone[4].newest := pre(cc_to_drone[4].newest);
  cc_to_drone[4].oldest := pre(cc_to_drone[4].oldest);
  cc_to_drone[4].fifosize := pre(cc_to_drone[4].fifosize);
  cc_to_drone[4].fifo[10,5] := pre(cc_to_drone[4].fifo[10,5]);
  cc_to_drone[4].fifo[10,4] := pre(cc_to_drone[4].fifo[10,4]);
  cc_to_drone[4].fifo[10,3] := pre(cc_to_drone[4].fifo[10,3]);
  cc_to_drone[4].fifo[10,2] := pre(cc_to_drone[4].fifo[10,2]);
  cc_to_drone[4].fifo[10,1] := pre(cc_to_drone[4].fifo[10,1]);
  cc_to_drone[4].fifo[9,5] := pre(cc_to_drone[4].fifo[9,5]);
  cc_to_drone[4].fifo[9,4] := pre(cc_to_drone[4].fifo[9,4]);
  cc_to_drone[4].fifo[9,3] := pre(cc_to_drone[4].fifo[9,3]);
  cc_to_drone[4].fifo[9,2] := pre(cc_to_drone[4].fifo[9,2]);
  cc_to_drone[4].fifo[9,1] := pre(cc_to_drone[4].fifo[9,1]);
  cc_to_drone[4].fifo[8,5] := pre(cc_to_drone[4].fifo[8,5]);
  cc_to_drone[4].fifo[8,4] := pre(cc_to_drone[4].fifo[8,4]);
  cc_to_drone[4].fifo[8,3] := pre(cc_to_drone[4].fifo[8,3]);
  cc_to_drone[4].fifo[8,2] := pre(cc_to_drone[4].fifo[8,2]);
  cc_to_drone[4].fifo[8,1] := pre(cc_to_drone[4].fifo[8,1]);
  cc_to_drone[4].fifo[7,5] := pre(cc_to_drone[4].fifo[7,5]);
  cc_to_drone[4].fifo[7,4] := pre(cc_to_drone[4].fifo[7,4]);
  cc_to_drone[4].fifo[7,3] := pre(cc_to_drone[4].fifo[7,3]);
  cc_to_drone[4].fifo[7,2] := pre(cc_to_drone[4].fifo[7,2]);
  cc_to_drone[4].fifo[7,1] := pre(cc_to_drone[4].fifo[7,1]);
  cc_to_drone[4].fifo[6,5] := pre(cc_to_drone[4].fifo[6,5]);
  cc_to_drone[4].fifo[6,4] := pre(cc_to_drone[4].fifo[6,4]);
  cc_to_drone[4].fifo[6,3] := pre(cc_to_drone[4].fifo[6,3]);
  cc_to_drone[4].fifo[6,2] := pre(cc_to_drone[4].fifo[6,2]);
  cc_to_drone[4].fifo[6,1] := pre(cc_to_drone[4].fifo[6,1]);
  cc_to_drone[4].fifo[5,5] := pre(cc_to_drone[4].fifo[5,5]);
  cc_to_drone[4].fifo[5,4] := pre(cc_to_drone[4].fifo[5,4]);
  cc_to_drone[4].fifo[5,3] := pre(cc_to_drone[4].fifo[5,3]);
  cc_to_drone[4].fifo[5,2] := pre(cc_to_drone[4].fifo[5,2]);
  cc_to_drone[4].fifo[5,1] := pre(cc_to_drone[4].fifo[5,1]);
  cc_to_drone[4].fifo[4,5] := pre(cc_to_drone[4].fifo[4,5]);
  cc_to_drone[4].fifo[4,4] := pre(cc_to_drone[4].fifo[4,4]);
  cc_to_drone[4].fifo[4,3] := pre(cc_to_drone[4].fifo[4,3]);
  cc_to_drone[4].fifo[4,2] := pre(cc_to_drone[4].fifo[4,2]);
  cc_to_drone[4].fifo[4,1] := pre(cc_to_drone[4].fifo[4,1]);
  cc_to_drone[4].fifo[3,5] := pre(cc_to_drone[4].fifo[3,5]);
  cc_to_drone[4].fifo[3,4] := pre(cc_to_drone[4].fifo[3,4]);
  cc_to_drone[4].fifo[3,3] := pre(cc_to_drone[4].fifo[3,3]);
  cc_to_drone[4].fifo[3,2] := pre(cc_to_drone[4].fifo[3,2]);
  cc_to_drone[4].fifo[3,1] := pre(cc_to_drone[4].fifo[3,1]);
  cc_to_drone[4].fifo[2,5] := pre(cc_to_drone[4].fifo[2,5]);
  cc_to_drone[4].fifo[2,4] := pre(cc_to_drone[4].fifo[2,4]);
  cc_to_drone[4].fifo[2,3] := pre(cc_to_drone[4].fifo[2,3]);
  cc_to_drone[4].fifo[2,2] := pre(cc_to_drone[4].fifo[2,2]);
  cc_to_drone[4].fifo[2,1] := pre(cc_to_drone[4].fifo[2,1]);
  cc_to_drone[4].fifo[1,5] := pre(cc_to_drone[4].fifo[1,5]);
  cc_to_drone[4].fifo[1,4] := pre(cc_to_drone[4].fifo[1,4]);
  cc_to_drone[4].fifo[1,3] := pre(cc_to_drone[4].fifo[1,3]);
  cc_to_drone[4].fifo[1,2] := pre(cc_to_drone[4].fifo[1,2]);
  cc_to_drone[4].fifo[1,1] := pre(cc_to_drone[4].fifo[1,1]);
  cc_to_drone[4].spaceavailable := pre(cc_to_drone[4].spaceavailable);
  cc_to_drone[4].outputdata[5] := pre(cc_to_drone[4].outputdata[5]);
  cc_to_drone[4].outputdata[4] := pre(cc_to_drone[4].outputdata[4]);
  cc_to_drone[4].outputdata[3] := pre(cc_to_drone[4].outputdata[3]);
  cc_to_drone[4].outputdata[2] := pre(cc_to_drone[4].outputdata[2]);
  cc_to_drone[4].outputdata[1] := pre(cc_to_drone[4].outputdata[1]);
  cc_to_drone[4].datavailable := pre(cc_to_drone[4].datavailable);
  $whenCondition15 := pre($whenCondition15);
  $whenCondition14 := pre($whenCondition14);
  $whenCondition13 := pre($whenCondition13);
  $whenCondition13 := pre(cc_to_drone[4].readsigint) and pre(cc_to_drone[4].writesigint);
  $whenCondition14 := pre(cc_to_drone[4].readsigint) and not pre(cc_to_drone[4].writesigint) and pre(cc_to_drone[4].fifosize) >= 1;
  $whenCondition15 := not pre(cc_to_drone[4].readsigint) and pre(cc_to_drone[4].writesigint) and pre(cc_to_drone[4].fifosize) < 10;
  when false then
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
  elsewhen $whenCondition13 then
    if pre(cc_to_drone[4].fifosize) < 10 then
      for j in 1:5 loop
        cc_to_drone[4].fifo[pre(cc_to_drone[4].newest),j] := cc_to_drone[4].inputdata[j];
      end for;
      cc_to_drone[4].newest := mod(pre(cc_to_drone[4].newest), 10) + 1;
      for j in 1:5 loop
        cc_to_drone[4].outputdata[j] := cc_to_drone[4].fifo[pre(cc_to_drone[4].oldest),j];
      end for;
      cc_to_drone[4].oldest := mod(pre(cc_to_drone[4].oldest), 10) + 1;
    else
      for j in 1:5 loop
        cc_to_drone[4].outputdata[j] := cc_to_drone[4].fifo[pre(cc_to_drone[4].oldest),j];
      end for;
      cc_to_drone[4].oldest := mod(pre(cc_to_drone[4].oldest), 10) + 1;
      for j in 1:5 loop
        cc_to_drone[4].fifo[pre(cc_to_drone[4].newest),j] := cc_to_drone[4].inputdata[j];
      end for;
      cc_to_drone[4].newest := mod(pre(cc_to_drone[4].newest), 10) + 1;
    end if;
  elsewhen $whenCondition14 then
    for j in 1:5 loop
      cc_to_drone[4].outputdata[j] := cc_to_drone[4].fifo[pre(cc_to_drone[4].oldest),j];
    end for;
    cc_to_drone[4].oldest := mod(pre(cc_to_drone[4].oldest), 10) + 1;
    cc_to_drone[4].fifosize := pre(cc_to_drone[4].fifosize) - 1;
    cc_to_drone[4].datavailable := cc_to_drone[4].fifosize >= 1;
    cc_to_drone[4].spaceavailable := true;
  elsewhen $whenCondition15 then
    for j in 1:5 loop
      cc_to_drone[4].fifo[pre(cc_to_drone[4].newest),j] := cc_to_drone[4].inputdata[j];
    end for;
    cc_to_drone[4].newest := mod(pre(cc_to_drone[4].newest), 10) + 1;
    cc_to_drone[4].fifosize := pre(cc_to_drone[4].fifosize) + 1;
    cc_to_drone[4].datavailable := true;
    cc_to_drone[4].spaceavailable := pre(cc_to_drone[4].fifosize) < 10;
    for j in 1:5 loop
      cc_to_drone[4].outputdata[j] := cc_to_drone[4].fifo[pre(cc_to_drone[4].oldest),j];
    end for;
  end when;
*/
void System_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  modelica_boolean tmp232;
  modelica_boolean tmp233;
  modelica_integer tmp234;
  modelica_integer tmp235;
  modelica_integer tmp236;
  modelica_integer tmp237;
  modelica_integer tmp238;
  modelica_integer tmp239;
  modelica_integer tmp240;
  modelica_integer tmp241;
  modelica_integer tmp242;
  modelica_boolean tmp243;
  modelica_integer tmp244;
  modelica_integer tmp245;
  modelica_integer tmp246;
  modelica_integer tmp247;
  modelica_integer tmp248;
  modelica_integer tmp249;
  modelica_integer tmp250;
  modelica_integer tmp251;
  modelica_integer tmp252;
  modelica_integer tmp253;
  modelica_integer tmp254;
  modelica_integer tmp255;
  modelica_integer tmp256;
  modelica_integer tmp257;
  modelica_integer tmp258;
  modelica_integer tmp259;
  modelica_integer tmp260;
  modelica_integer tmp261;
  modelica_integer tmp262;
  modelica_integer tmp263;
  modelica_boolean tmp264;
  modelica_integer tmp265;
  modelica_integer tmp266;
  modelica_integer tmp267;
  modelica_integer tmp268;
  modelica_boolean tmp269;
  modelica_integer tmp270;
  modelica_integer tmp271;
  modelica_integer tmp272;
  (data->localData[0]->integerVars[25]/* cc_to_drone[4].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[25]/* cc_to_drone[4].newest DISCRETE */) ;

  (data->localData[0]->integerVars[29]/* cc_to_drone[4].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[29]/* cc_to_drone[4].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[21]/* cc_to_drone[4].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[21]/* cc_to_drone[4].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[426]/* cc_to_drone[4].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[426]/* cc_to_drone[4].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[425]/* cc_to_drone[4].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[425]/* cc_to_drone[4].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[424]/* cc_to_drone[4].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[424]/* cc_to_drone[4].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[423]/* cc_to_drone[4].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[423]/* cc_to_drone[4].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[422]/* cc_to_drone[4].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[422]/* cc_to_drone[4].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[421]/* cc_to_drone[4].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[421]/* cc_to_drone[4].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[420]/* cc_to_drone[4].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[420]/* cc_to_drone[4].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[419]/* cc_to_drone[4].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[419]/* cc_to_drone[4].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[418]/* cc_to_drone[4].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[418]/* cc_to_drone[4].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[417]/* cc_to_drone[4].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[417]/* cc_to_drone[4].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[416]/* cc_to_drone[4].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[416]/* cc_to_drone[4].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[415]/* cc_to_drone[4].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[415]/* cc_to_drone[4].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[414]/* cc_to_drone[4].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[414]/* cc_to_drone[4].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[413]/* cc_to_drone[4].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[413]/* cc_to_drone[4].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[412]/* cc_to_drone[4].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[412]/* cc_to_drone[4].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[411]/* cc_to_drone[4].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[411]/* cc_to_drone[4].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[410]/* cc_to_drone[4].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[410]/* cc_to_drone[4].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[409]/* cc_to_drone[4].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[409]/* cc_to_drone[4].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[408]/* cc_to_drone[4].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[408]/* cc_to_drone[4].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[407]/* cc_to_drone[4].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[407]/* cc_to_drone[4].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[406]/* cc_to_drone[4].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[406]/* cc_to_drone[4].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[405]/* cc_to_drone[4].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[405]/* cc_to_drone[4].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[404]/* cc_to_drone[4].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[404]/* cc_to_drone[4].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[403]/* cc_to_drone[4].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[403]/* cc_to_drone[4].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[402]/* cc_to_drone[4].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[402]/* cc_to_drone[4].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[401]/* cc_to_drone[4].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[401]/* cc_to_drone[4].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[400]/* cc_to_drone[4].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[400]/* cc_to_drone[4].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[399]/* cc_to_drone[4].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[399]/* cc_to_drone[4].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[398]/* cc_to_drone[4].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[398]/* cc_to_drone[4].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[397]/* cc_to_drone[4].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[397]/* cc_to_drone[4].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[396]/* cc_to_drone[4].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[396]/* cc_to_drone[4].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[395]/* cc_to_drone[4].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[395]/* cc_to_drone[4].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[394]/* cc_to_drone[4].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[394]/* cc_to_drone[4].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[393]/* cc_to_drone[4].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[393]/* cc_to_drone[4].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[392]/* cc_to_drone[4].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[392]/* cc_to_drone[4].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[391]/* cc_to_drone[4].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[391]/* cc_to_drone[4].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[390]/* cc_to_drone[4].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[390]/* cc_to_drone[4].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[389]/* cc_to_drone[4].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[389]/* cc_to_drone[4].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[388]/* cc_to_drone[4].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[388]/* cc_to_drone[4].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[387]/* cc_to_drone[4].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[387]/* cc_to_drone[4].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[386]/* cc_to_drone[4].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[386]/* cc_to_drone[4].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[385]/* cc_to_drone[4].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[385]/* cc_to_drone[4].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[384]/* cc_to_drone[4].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[384]/* cc_to_drone[4].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[383]/* cc_to_drone[4].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[383]/* cc_to_drone[4].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[382]/* cc_to_drone[4].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[382]/* cc_to_drone[4].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[381]/* cc_to_drone[4].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[381]/* cc_to_drone[4].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[380]/* cc_to_drone[4].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[380]/* cc_to_drone[4].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[379]/* cc_to_drone[4].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[379]/* cc_to_drone[4].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[378]/* cc_to_drone[4].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[378]/* cc_to_drone[4].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[377]/* cc_to_drone[4].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[377]/* cc_to_drone[4].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[107]/* cc_to_drone[4].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[107]/* cc_to_drone[4].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[446]/* cc_to_drone[4].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[446]/* cc_to_drone[4].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[445]/* cc_to_drone[4].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[445]/* cc_to_drone[4].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[444]/* cc_to_drone[4].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[444]/* cc_to_drone[4].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[443]/* cc_to_drone[4].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[443]/* cc_to_drone[4].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[442]/* cc_to_drone[4].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[442]/* cc_to_drone[4].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[95]/* cc_to_drone[4].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[95]/* cc_to_drone[4].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[6]/* $whenCondition15 DISCRETE */) ;

  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[5]/* $whenCondition14 DISCRETE */) ;

  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[4]/* $whenCondition13 DISCRETE */) ;

  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[99]/* cc_to_drone[4].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[111]/* cc_to_drone[4].writesigint DISCRETE */) );

  tmp232 = GreaterEq((data->simulationInfo->integerVarsPre[21]/* cc_to_drone[4].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[99]/* cc_to_drone[4].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[111]/* cc_to_drone[4].writesigint DISCRETE */) )) && tmp232);

  tmp233 = Less((data->simulationInfo->integerVarsPre[21]/* cc_to_drone[4].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[99]/* cc_to_drone[4].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[111]/* cc_to_drone[4].writesigint DISCRETE */) ) && tmp233);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[95]/* cc_to_drone[4].datavailable DISCRETE */)  = 0;

      tmp234 = ((modelica_integer) 1); tmp235 = 1; tmp236 = ((modelica_integer) 5);
      if(!(((tmp235 > 0) && (tmp234 > tmp236)) || ((tmp235 < 0) && (tmp234 < tmp236))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp234, tmp236); j += tmp235)
        {
          (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[107]/* cc_to_drone[4].spaceavailable DISCRETE */)  = 1;

      tmp240 = ((modelica_integer) 1); tmp241 = 1; tmp242 = ((modelica_integer) 10);
      if(!(((tmp241 > 0) && (tmp240 > tmp242)) || ((tmp241 < 0) && (tmp240 < tmp242))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp240, tmp242); i += tmp241)
        {
          tmp237 = ((modelica_integer) 1); tmp238 = 1; tmp239 = ((modelica_integer) 5);
          if(!(((tmp238 > 0) && (tmp237 > tmp239)) || ((tmp238 < 0) && (tmp237 < tmp239))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp237, tmp239); j += tmp238)
            {
              (&(data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[21]/* cc_to_drone[4].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[29]/* cc_to_drone[4].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[25]/* cc_to_drone[4].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[4]/* $whenCondition13 DISCRETE */)  /* edge */))
    {
      tmp243 = Less((data->simulationInfo->integerVarsPre[21]/* cc_to_drone[4].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp243)
      {
        tmp244 = ((modelica_integer) 1); tmp245 = 1; tmp246 = ((modelica_integer) 5);
        if(!(((tmp245 > 0) && (tmp244 > tmp246)) || ((tmp245 < 0) && (tmp244 < tmp246))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp244, tmp246); j += tmp245)
          {
            (&(data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[25]/* cc_to_drone[4].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[72]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 4) - 1) * 5 + (j-1)] ;
          }
        }

        tmp247 = ((modelica_integer) 10);
        if (tmp247 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[4].newest), 10)");}
        (data->localData[0]->integerVars[25]/* cc_to_drone[4].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[25]/* cc_to_drone[4].newest DISCRETE */) , tmp247) + ((modelica_integer) 1);

        tmp248 = ((modelica_integer) 1); tmp249 = 1; tmp250 = ((modelica_integer) 5);
        if(!(((tmp249 > 0) && (tmp248 > tmp250)) || ((tmp249 < 0) && (tmp248 < tmp250))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp248, tmp250); j += tmp249)
          {
            (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[4].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp251 = ((modelica_integer) 10);
        if (tmp251 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[4].oldest), 10)");}
        (data->localData[0]->integerVars[29]/* cc_to_drone[4].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[4].oldest DISCRETE */) , tmp251) + ((modelica_integer) 1);
      }
      else
      {
        tmp252 = ((modelica_integer) 1); tmp253 = 1; tmp254 = ((modelica_integer) 5);
        if(!(((tmp253 > 0) && (tmp252 > tmp254)) || ((tmp253 < 0) && (tmp252 < tmp254))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp252, tmp254); j += tmp253)
          {
            (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[4].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp255 = ((modelica_integer) 10);
        if (tmp255 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[4].oldest), 10)");}
        (data->localData[0]->integerVars[29]/* cc_to_drone[4].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[4].oldest DISCRETE */) , tmp255) + ((modelica_integer) 1);

        tmp256 = ((modelica_integer) 1); tmp257 = 1; tmp258 = ((modelica_integer) 5);
        if(!(((tmp257 > 0) && (tmp256 > tmp258)) || ((tmp257 < 0) && (tmp256 < tmp258))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp256, tmp258); j += tmp257)
          {
            (&(data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[25]/* cc_to_drone[4].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[72]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 4) - 1) * 5 + (j-1)] ;
          }
        }

        tmp259 = ((modelica_integer) 10);
        if (tmp259 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[4].newest), 10)");}
        (data->localData[0]->integerVars[25]/* cc_to_drone[4].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[25]/* cc_to_drone[4].newest DISCRETE */) , tmp259) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[5]/* $whenCondition14 DISCRETE */)  /* edge */))
    {
      tmp260 = ((modelica_integer) 1); tmp261 = 1; tmp262 = ((modelica_integer) 5);
      if(!(((tmp261 > 0) && (tmp260 > tmp262)) || ((tmp261 < 0) && (tmp260 < tmp262))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp260, tmp262); j += tmp261)
        {
          (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[4].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp263 = ((modelica_integer) 10);
      if (tmp263 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[4].oldest), 10)");}
      (data->localData[0]->integerVars[29]/* cc_to_drone[4].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[4].oldest DISCRETE */) , tmp263) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[21]/* cc_to_drone[4].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[21]/* cc_to_drone[4].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp264 = GreaterEq((data->localData[0]->integerVars[21]/* cc_to_drone[4].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[95]/* cc_to_drone[4].datavailable DISCRETE */)  = tmp264;

      (data->localData[0]->booleanVars[107]/* cc_to_drone[4].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[6]/* $whenCondition15 DISCRETE */)  /* edge */))
    {
      tmp265 = ((modelica_integer) 1); tmp266 = 1; tmp267 = ((modelica_integer) 5);
      if(!(((tmp266 > 0) && (tmp265 > tmp267)) || ((tmp266 < 0) && (tmp265 < tmp267))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp265, tmp267); j += tmp266)
        {
          (&(data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[25]/* cc_to_drone[4].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[72]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 4) - 1) * 5 + (j-1)] ;
        }
      }

      tmp268 = ((modelica_integer) 10);
      if (tmp268 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[4].newest), 10)");}
      (data->localData[0]->integerVars[25]/* cc_to_drone[4].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[25]/* cc_to_drone[4].newest DISCRETE */) , tmp268) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[21]/* cc_to_drone[4].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[21]/* cc_to_drone[4].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[95]/* cc_to_drone[4].datavailable DISCRETE */)  = 1;

      tmp269 = Less((data->simulationInfo->integerVarsPre[21]/* cc_to_drone[4].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[107]/* cc_to_drone[4].spaceavailable DISCRETE */)  = tmp269;

      tmp270 = ((modelica_integer) 1); tmp271 = 1; tmp272 = ((modelica_integer) 5);
      if(!(((tmp271 > 0) && (tmp270 > tmp272)) || ((tmp271 < 0) && (tmp270 < tmp272))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp270, tmp272); j += tmp271)
        {
          (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[4].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 352
type: SIMPLE_ASSIGN
d[4].datavailable = cc_to_drone[4].datavailable
*/
void System_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  (data->localData[0]->booleanVars[127]/* d[4].datavailable DISCRETE */)  = (data->localData[0]->booleanVars[95]/* cc_to_drone[4].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 353
type: SIMPLE_ASSIGN
cc.spaceavailable[4] = cc_to_drone[4].spaceavailable
*/
void System_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  (data->localData[0]->booleanVars[87]/* cc.spaceavailable[4] DISCRETE */)  = (data->localData[0]->booleanVars[107]/* cc_to_drone[4].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 354
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[5] = cc.msg_to_drone[1,5]
*/
void System_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  (data->localData[0]->realVars[76]/* cc_to_drone[1].inputdata[5] variable */)  = (data->localData[0]->realVars[179]/* cc.msg_to_drone[1,5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 355
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[4] = cc.msg_to_drone[1,4]
*/
void System_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  (data->localData[0]->realVars[75]/* cc_to_drone[1].inputdata[4] variable */)  = (data->localData[0]->realVars[178]/* cc.msg_to_drone[1,4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 356
type: SIMPLE_ASSIGN
cc_to_drone[2].inputdata[1] = cc.msg_to_drone[2,1]
*/
void System_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  (data->localData[0]->realVars[77]/* cc_to_drone[2].inputdata[1] variable */)  = (data->localData[0]->realVars[180]/* cc.msg_to_drone[2,1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 357
type: SIMPLE_ASSIGN
cc_to_drone[3].writesignal = cc.writesignal[3]
*/
void System_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  (data->localData[0]->booleanVars[114]/* cc_to_drone[3].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[90]/* cc.writesignal[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 358
type: SIMPLE_ASSIGN
cc_to_drone[3].writesigint = not pre(cc_to_drone[3].writesignal) == cc_to_drone[3].writesignal
*/
void System_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  (data->localData[0]->booleanVars[110]/* cc_to_drone[3].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[114]/* cc_to_drone[3].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[114]/* cc_to_drone[3].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[114]/* cc_to_drone[3].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[114]/* cc_to_drone[3].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 359
type: SIMPLE_ASSIGN
cc_to_drone[2].inputdata[3] = cc.msg_to_drone[2,3]
*/
void System_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  (data->localData[0]->realVars[79]/* cc_to_drone[2].inputdata[3] variable */)  = (data->localData[0]->realVars[182]/* cc.msg_to_drone[2,3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 360
type: SIMPLE_ASSIGN
cc_to_drone[2].inputdata[5] = cc.msg_to_drone[2,5]
*/
void System_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  (data->localData[0]->realVars[81]/* cc_to_drone[2].inputdata[5] variable */)  = (data->localData[0]->realVars[184]/* cc.msg_to_drone[2,5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 361
type: SIMPLE_ASSIGN
drone_to_cc[4].readsignal = cc.readsignal[4]
*/
void System_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  (data->localData[0]->booleanVars[151]/* drone_to_cc[4].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[79]/* cc.readsignal[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 362
type: SIMPLE_ASSIGN
drone_to_cc[4].readsigint = not pre(drone_to_cc[4].readsignal) == drone_to_cc[4].readsignal
*/
void System_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  (data->localData[0]->booleanVars[147]/* drone_to_cc[4].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[151]/* drone_to_cc[4].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[151]/* drone_to_cc[4].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[151]/* drone_to_cc[4].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[151]/* drone_to_cc[4].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 363
type: SIMPLE_ASSIGN
cc_to_drone[2].inputdata[2] = cc.msg_to_drone[2,2]
*/
void System_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  (data->localData[0]->realVars[78]/* cc_to_drone[2].inputdata[2] variable */)  = (data->localData[0]->realVars[181]/* cc.msg_to_drone[2,2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 364
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[3] = cc.msg_to_drone[1,3]
*/
void System_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  (data->localData[0]->realVars[74]/* cc_to_drone[1].inputdata[3] variable */)  = (data->localData[0]->realVars[177]/* cc.msg_to_drone[1,3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 365
type: SIMPLE_ASSIGN
drone_to_cc[1].readsignal = cc.readsignal[1]
*/
void System_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  (data->localData[0]->booleanVars[148]/* drone_to_cc[1].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[76]/* cc.readsignal[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 366
type: SIMPLE_ASSIGN
drone_to_cc[1].readsigint = not pre(drone_to_cc[1].readsignal) == drone_to_cc[1].readsignal
*/
void System_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  (data->localData[0]->booleanVars[144]/* drone_to_cc[1].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[148]/* drone_to_cc[1].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[148]/* drone_to_cc[1].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[148]/* drone_to_cc[1].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[148]/* drone_to_cc[1].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 367
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
  $whenCondition26 := pre($whenCondition26);
  $whenCondition25 := pre($whenCondition25);
  $whenCondition25 := sample(14, m.p.monitor_start, m.p.Tm);
  $whenCondition26 := time > m.p.stop_simulation or cc.endSimulation;
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
  elsewhen $whenCondition25 then
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
  elsewhen $whenCondition26 then
    Modelica.Utilities.Files.remove("outputs.txt");
    Modelica.Utilities.Streams.print("AvgDrones AvgNoDrone MaxNoDrone PrDrones StdDev ( time = " + String(time, 6, 0, true) + "s = " + String(time / 3600.0, 6, 0, true) + "h )", "outputs.txt");
    Modelica.Utilities.Streams.print(String(m.avg_drones_all_areas, 6, 0, true) + "  " + String(m.avg_no_drone_time_all_areas, 6, 0, true) + "  " + String(m.max_no_drone_time, 6, 0, true) + "  " + String(m.p_drones_all_areas, 6, 0, true) + "  " + String(m.std_dev_all_areas, 6, 0, true), "outputs.txt");
    disconnect_from_db();
    terminate("Simulation limit reached. Go home now.");
  end when;
*/
void System_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  modelica_boolean tmp276;
  integer_array tmp277;
  integer_array tmp278;
  real_array tmp279;
  real_array tmp280;
  integer_array tmp281;
  integer_array tmp282;
  real_array tmp283;
  real_array tmp284;
  real_array tmp285;
  real_array tmp286;
  real_array tmp287;
  real_array tmp288;
  real_array tmp289;
  real_array tmp290;
  modelica_boolean tmp291;
  modelica_real tmp292;
  modelica_real tmp293;
  modelica_integer tmp294;
  modelica_integer tmp295;
  modelica_integer tmp296;
  real_array tmp297;
  modelica_real tmp298;
  modelica_boolean tmp299;
  real_array tmp300;
  modelica_real tmp301;
  modelica_real tmp302;
  static const MMC_DEFSTRINGLIT(tmp303,11,"outputs.txt");
  static const MMC_DEFSTRINGLIT(tmp304,57,"AvgDrones AvgNoDrone MaxNoDrone PrDrones StdDev ( time = ");
  modelica_string tmp305;
  modelica_metatype tmpMeta306;
  static const MMC_DEFSTRINGLIT(tmp307,4,"s = ");
  modelica_metatype tmpMeta308;
  modelica_string tmp309;
  modelica_metatype tmpMeta310;
  static const MMC_DEFSTRINGLIT(tmp311,3,"h )");
  modelica_metatype tmpMeta312;
  static const MMC_DEFSTRINGLIT(tmp313,11,"outputs.txt");
  modelica_string tmp314;
  static const MMC_DEFSTRINGLIT(tmp315,2,"  ");
  modelica_metatype tmpMeta316;
  modelica_string tmp317;
  modelica_metatype tmpMeta318;
  static const MMC_DEFSTRINGLIT(tmp319,2,"  ");
  modelica_metatype tmpMeta320;
  modelica_string tmp321;
  modelica_metatype tmpMeta322;
  static const MMC_DEFSTRINGLIT(tmp323,2,"  ");
  modelica_metatype tmpMeta324;
  modelica_string tmp325;
  modelica_metatype tmpMeta326;
  static const MMC_DEFSTRINGLIT(tmp327,2,"  ");
  modelica_metatype tmpMeta328;
  modelica_string tmp329;
  modelica_metatype tmpMeta330;
  static const MMC_DEFSTRINGLIT(tmp331,11,"outputs.txt");
  static const MMC_DEFSTRINGLIT(tmp332,38,"Simulation limit reached. Go home now.");
  (data->localData[0]->realVars[742]/* m.old_avg_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[742]/* m.old_avg_drones_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[760]/* m.std_dev_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[760]/* m.std_dev_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[759]/* m.std_dev[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[759]/* m.std_dev[8] DISCRETE */) ;

  (data->localData[0]->realVars[758]/* m.std_dev[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[758]/* m.std_dev[7] DISCRETE */) ;

  (data->localData[0]->realVars[757]/* m.std_dev[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[757]/* m.std_dev[6] DISCRETE */) ;

  (data->localData[0]->realVars[756]/* m.std_dev[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[756]/* m.std_dev[5] DISCRETE */) ;

  (data->localData[0]->realVars[755]/* m.std_dev[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[755]/* m.std_dev[4] DISCRETE */) ;

  (data->localData[0]->realVars[754]/* m.std_dev[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[754]/* m.std_dev[3] DISCRETE */) ;

  (data->localData[0]->realVars[753]/* m.std_dev[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[753]/* m.std_dev[2] DISCRETE */) ;

  (data->localData[0]->realVars[752]/* m.std_dev[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[752]/* m.std_dev[1] DISCRETE */) ;

  (data->localData[0]->realVars[733]/* m.max_no_drone_time DISCRETE */)  = (data->simulationInfo->realVarsPre[733]/* m.max_no_drone_time DISCRETE */) ;

  (data->localData[0]->realVars[732]/* m.avg_no_drone_time_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[732]/* m.avg_no_drone_time_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[731]/* m.avg_no_drone_time[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[731]/* m.avg_no_drone_time[8] DISCRETE */) ;

  (data->localData[0]->realVars[730]/* m.avg_no_drone_time[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[730]/* m.avg_no_drone_time[7] DISCRETE */) ;

  (data->localData[0]->realVars[729]/* m.avg_no_drone_time[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[729]/* m.avg_no_drone_time[6] DISCRETE */) ;

  (data->localData[0]->realVars[728]/* m.avg_no_drone_time[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[728]/* m.avg_no_drone_time[5] DISCRETE */) ;

  (data->localData[0]->realVars[727]/* m.avg_no_drone_time[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[727]/* m.avg_no_drone_time[4] DISCRETE */) ;

  (data->localData[0]->realVars[726]/* m.avg_no_drone_time[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[726]/* m.avg_no_drone_time[3] DISCRETE */) ;

  (data->localData[0]->realVars[725]/* m.avg_no_drone_time[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[725]/* m.avg_no_drone_time[2] DISCRETE */) ;

  (data->localData[0]->realVars[724]/* m.avg_no_drone_time[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[724]/* m.avg_no_drone_time[1] DISCRETE */) ;

  (data->localData[0]->realVars[741]/* m.no_drone_time[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[741]/* m.no_drone_time[8] DISCRETE */) ;

  (data->localData[0]->realVars[740]/* m.no_drone_time[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[740]/* m.no_drone_time[7] DISCRETE */) ;

  (data->localData[0]->realVars[739]/* m.no_drone_time[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[739]/* m.no_drone_time[6] DISCRETE */) ;

  (data->localData[0]->realVars[738]/* m.no_drone_time[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[738]/* m.no_drone_time[5] DISCRETE */) ;

  (data->localData[0]->realVars[737]/* m.no_drone_time[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[737]/* m.no_drone_time[4] DISCRETE */) ;

  (data->localData[0]->realVars[736]/* m.no_drone_time[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[736]/* m.no_drone_time[3] DISCRETE */) ;

  (data->localData[0]->realVars[735]/* m.no_drone_time[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[735]/* m.no_drone_time[2] DISCRETE */) ;

  (data->localData[0]->realVars[734]/* m.no_drone_time[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[734]/* m.no_drone_time[1] DISCRETE */) ;

  (data->localData[0]->realVars[751]/* m.p_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[751]/* m.p_drones_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[750]/* m.p_drones[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[750]/* m.p_drones[8] DISCRETE */) ;

  (data->localData[0]->realVars[749]/* m.p_drones[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[749]/* m.p_drones[7] DISCRETE */) ;

  (data->localData[0]->realVars[748]/* m.p_drones[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[748]/* m.p_drones[6] DISCRETE */) ;

  (data->localData[0]->realVars[747]/* m.p_drones[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[747]/* m.p_drones[5] DISCRETE */) ;

  (data->localData[0]->realVars[746]/* m.p_drones[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[746]/* m.p_drones[4] DISCRETE */) ;

  (data->localData[0]->realVars[745]/* m.p_drones[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[745]/* m.p_drones[3] DISCRETE */) ;

  (data->localData[0]->realVars[744]/* m.p_drones[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[744]/* m.p_drones[2] DISCRETE */) ;

  (data->localData[0]->realVars[743]/* m.p_drones[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[743]/* m.p_drones[1] DISCRETE */) ;

  (data->localData[0]->integerVars[65]/* m.beenVisited[8] DISCRETE */)  = (data->simulationInfo->integerVarsPre[65]/* m.beenVisited[8] DISCRETE */) ;

  (data->localData[0]->integerVars[64]/* m.beenVisited[7] DISCRETE */)  = (data->simulationInfo->integerVarsPre[64]/* m.beenVisited[7] DISCRETE */) ;

  (data->localData[0]->integerVars[63]/* m.beenVisited[6] DISCRETE */)  = (data->simulationInfo->integerVarsPre[63]/* m.beenVisited[6] DISCRETE */) ;

  (data->localData[0]->integerVars[62]/* m.beenVisited[5] DISCRETE */)  = (data->simulationInfo->integerVarsPre[62]/* m.beenVisited[5] DISCRETE */) ;

  (data->localData[0]->integerVars[61]/* m.beenVisited[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[61]/* m.beenVisited[4] DISCRETE */) ;

  (data->localData[0]->integerVars[60]/* m.beenVisited[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[60]/* m.beenVisited[3] DISCRETE */) ;

  (data->localData[0]->integerVars[59]/* m.beenVisited[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[59]/* m.beenVisited[2] DISCRETE */) ;

  (data->localData[0]->integerVars[58]/* m.beenVisited[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[58]/* m.beenVisited[1] DISCRETE */) ;

  (data->localData[0]->realVars[723]/* m.avg_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[723]/* m.avg_drones_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[722]/* m.avg_drones[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[722]/* m.avg_drones[8] DISCRETE */) ;

  (data->localData[0]->realVars[721]/* m.avg_drones[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[721]/* m.avg_drones[7] DISCRETE */) ;

  (data->localData[0]->realVars[720]/* m.avg_drones[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[720]/* m.avg_drones[6] DISCRETE */) ;

  (data->localData[0]->realVars[719]/* m.avg_drones[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[719]/* m.avg_drones[5] DISCRETE */) ;

  (data->localData[0]->realVars[718]/* m.avg_drones[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[718]/* m.avg_drones[4] DISCRETE */) ;

  (data->localData[0]->realVars[717]/* m.avg_drones[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[717]/* m.avg_drones[3] DISCRETE */) ;

  (data->localData[0]->realVars[716]/* m.avg_drones[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[716]/* m.avg_drones[2] DISCRETE */) ;

  (data->localData[0]->realVars[715]/* m.avg_drones[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[715]/* m.avg_drones[1] DISCRETE */) ;

  (data->localData[0]->integerVars[73]/* m.current_drones[8] DISCRETE */)  = (data->simulationInfo->integerVarsPre[73]/* m.current_drones[8] DISCRETE */) ;

  (data->localData[0]->integerVars[72]/* m.current_drones[7] DISCRETE */)  = (data->simulationInfo->integerVarsPre[72]/* m.current_drones[7] DISCRETE */) ;

  (data->localData[0]->integerVars[71]/* m.current_drones[6] DISCRETE */)  = (data->simulationInfo->integerVarsPre[71]/* m.current_drones[6] DISCRETE */) ;

  (data->localData[0]->integerVars[70]/* m.current_drones[5] DISCRETE */)  = (data->simulationInfo->integerVarsPre[70]/* m.current_drones[5] DISCRETE */) ;

  (data->localData[0]->integerVars[69]/* m.current_drones[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[69]/* m.current_drones[4] DISCRETE */) ;

  (data->localData[0]->integerVars[68]/* m.current_drones[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[68]/* m.current_drones[3] DISCRETE */) ;

  (data->localData[0]->integerVars[67]/* m.current_drones[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[67]/* m.current_drones[2] DISCRETE */) ;

  (data->localData[0]->integerVars[66]/* m.current_drones[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[66]/* m.current_drones[1] DISCRETE */) ;

  (data->localData[0]->integerVars[74]/* m.samples DISCRETE */)  = (data->simulationInfo->integerVarsPre[74]/* m.samples DISCRETE */) ;

  (data->localData[0]->integerVars[75]/* m.z DISCRETE */)  = (data->simulationInfo->integerVarsPre[75]/* m.z DISCRETE */) ;

  (data->localData[0]->booleanVars[18]/* $whenCondition26 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[18]/* $whenCondition26 DISCRETE */) ;

  (data->localData[0]->booleanVars[17]/* $whenCondition25 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[17]/* $whenCondition25 DISCRETE */) ;

  (data->localData[0]->booleanVars[17]/* $whenCondition25 DISCRETE */)  = data->simulationInfo->samples[13];

  relationhysteresis(data, &tmp276, data->localData[0]->timeValue, (data->simulationInfo->realParameter[1858]/* m.p.stop_simulation PARAM */) , 0, Greater, GreaterZC);
  (data->localData[0]->booleanVars[18]/* $whenCondition26 DISCRETE */)  = (tmp276 || (data->localData[0]->booleanVars[55]/* cc.endSimulation DISCRETE */) );

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->integerVars[75]/* m.z DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[74]/* m.samples DISCRETE */)  = ((modelica_integer) 0);

      array_alloc_scalar_integer_array(&tmp277, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp278, ((modelica_integer*)&((&(data->localData[0]->integerVars[66]/* m.current_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      integer_array_copy_data(tmp277, tmp278);

      array_alloc_scalar_real_array(&tmp279, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp280, ((modelica_real*)&((&(data->localData[0]->realVars[715]/* m.avg_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp279, tmp280);

      (data->localData[0]->realVars[723]/* m.avg_drones_all_areas DISCRETE */)  = 0.0;

      array_alloc_scalar_integer_array(&tmp281, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp282, ((modelica_integer*)&((&(data->localData[0]->integerVars[58]/* m.beenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      integer_array_copy_data(tmp281, tmp282);

      array_alloc_scalar_real_array(&tmp283, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp284, ((modelica_real*)&((&(data->localData[0]->realVars[743]/* m.p_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp283, tmp284);

      (data->localData[0]->realVars[751]/* m.p_drones_all_areas DISCRETE */)  = 0.0;

      array_alloc_scalar_real_array(&tmp285, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp286, ((modelica_real*)&((&(data->localData[0]->realVars[734]/* m.no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp285, tmp286);

      array_alloc_scalar_real_array(&tmp287, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp288, ((modelica_real*)&((&(data->localData[0]->realVars[724]/* m.avg_no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp287, tmp288);

      (data->localData[0]->realVars[732]/* m.avg_no_drone_time_all_areas DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[733]/* m.max_no_drone_time DISCRETE */)  = 0.0;

      array_alloc_scalar_real_array(&tmp289, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp290, ((modelica_real*)&((&(data->localData[0]->realVars[752]/* m.std_dev[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp289, tmp290);

      (data->localData[0]->realVars[760]/* m.std_dev_all_areas DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[742]/* m.old_avg_drones_all_areas DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[17]/* $whenCondition25 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[17]/* $whenCondition25 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->integerVars[74]/* m.samples DISCRETE */)  = (data->simulationInfo->integerVarsPre[74]/* m.samples DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->realVars[742]/* m.old_avg_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[723]/* m.avg_drones_all_areas DISCRETE */) ;

      tmp294 = ((modelica_integer) 1); tmp295 = 1; tmp296 = ((modelica_integer) 8);
      if(!(((tmp295 > 0) && (tmp294 > tmp296)) || ((tmp295 < 0) && (tmp294 < tmp296))))
      {
        modelica_integer area;
        for(area = ((modelica_integer) 1); in_range_integer(area, tmp294, tmp296); area += tmp295)
        {
          (data->localData[0]->integerVars[75]/* m.z DISCRETE */)  = omc_how__many__drones__in__area(threadData, area, data->localData[0]->timeValue - ((data->simulationInfo->realParameter[1780]/* m.p.Tm PARAM */)  + 1.0));

          tmp291 = Greater((data->localData[0]->integerVars[75]/* m.z DISCRETE */) ,((modelica_integer) 0));
          if(tmp291)
          {
            (&(data->localData[0]->integerVars[66]/* m.current_drones[1] DISCRETE */) )[area - 1] = (data->localData[0]->integerVars[75]/* m.z DISCRETE */) ;

            (&(data->localData[0]->integerVars[58]/* m.beenVisited[1] DISCRETE */) )[area - 1] = ((modelica_integer) 1);

            (&(data->localData[0]->realVars[734]/* m.no_drone_time[1] DISCRETE */) )[area - 1] = 0.0;
          }
          else
          {
            (&(data->localData[0]->realVars[734]/* m.no_drone_time[1] DISCRETE */) )[area - 1] = (data->localData[0]->realVars[223]/* cc.time_passed_since_last_loop DISCRETE */) ;

            (&(data->localData[0]->integerVars[66]/* m.current_drones[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);

            (&(data->localData[0]->integerVars[58]/* m.beenVisited[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);
          }

          (&(data->localData[0]->realVars[715]/* m.avg_drones[1] DISCRETE */) )[area - 1] = ((&(data->simulationInfo->realVarsPre[715]/* m.avg_drones[1] DISCRETE */) )[area - 1]) * (DIVISION_SIM(((modelica_real)(data->simulationInfo->integerVarsPre[74]/* m.samples DISCRETE */) ),((modelica_real)(data->simulationInfo->integerVarsPre[74]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes)) + DIVISION_SIM(((modelica_real)(&(data->simulationInfo->integerVarsPre[66]/* m.current_drones[1] DISCRETE */) )[area - 1]),((modelica_real)(data->simulationInfo->integerVarsPre[74]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes);

          (&(data->localData[0]->realVars[743]/* m.p_drones[1] DISCRETE */) )[area - 1] = ((&(data->simulationInfo->realVarsPre[743]/* m.p_drones[1] DISCRETE */) )[area - 1]) * (DIVISION_SIM(((modelica_real)(data->simulationInfo->integerVarsPre[74]/* m.samples DISCRETE */) ),((modelica_real)(data->simulationInfo->integerVarsPre[74]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes)) + DIVISION_SIM(((modelica_real)(&(data->simulationInfo->integerVarsPre[58]/* m.beenVisited[1] DISCRETE */) )[area - 1]),((modelica_real)(data->simulationInfo->integerVarsPre[74]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes);

          (&(data->localData[0]->realVars[724]/* m.avg_no_drone_time[1] DISCRETE */) )[area - 1] = ((&(data->simulationInfo->realVarsPre[724]/* m.avg_no_drone_time[1] DISCRETE */) )[area - 1]) * (DIVISION_SIM(((modelica_real)(data->simulationInfo->integerVarsPre[74]/* m.samples DISCRETE */) ),((modelica_real)(data->simulationInfo->integerVarsPre[74]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes)) + DIVISION_SIM((&(data->simulationInfo->realVarsPre[734]/* m.no_drone_time[1] DISCRETE */) )[area - 1],((modelica_real)(data->simulationInfo->integerVarsPre[74]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes);

          tmp292 = (&data->localData[0]->realVars[715]/* m.avg_drones[1] DISCRETE */)[area - 1] ;
          tmp293 = ((modelica_real)(&data->localData[0]->integerVars[66]/* m.current_drones[1] DISCRETE */)[area - 1] ) - ((tmp292 * tmp292));
          if(!(tmp293 >= 0.0))
          {
            if (data->simulationInfo->noThrowAsserts) {
              infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
              data->simulationInfo->needToReThrow = 1;
            } else {
              FILE_INFO info = {"",0,0,0,0,0};
              omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
              throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(/*Real*/(m.current_drones[area]) - m.avg_drones[area] ^ 2.0) was %g should be >= 0", tmp293);
            }
          }
          (&(data->localData[0]->realVars[752]/* m.std_dev[1] DISCRETE */) )[area - 1] = sqrt(tmp293);
        }
      }

      (data->localData[0]->realVars[723]/* m.avg_drones_all_areas DISCRETE */)  = (0.125) * ((data->simulationInfo->realVarsPre[715]/* m.avg_drones[1] DISCRETE */)  + (data->simulationInfo->realVarsPre[716]/* m.avg_drones[2] DISCRETE */)  + (data->simulationInfo->realVarsPre[717]/* m.avg_drones[3] DISCRETE */)  + (data->simulationInfo->realVarsPre[718]/* m.avg_drones[4] DISCRETE */)  + (data->simulationInfo->realVarsPre[719]/* m.avg_drones[5] DISCRETE */)  + (data->simulationInfo->realVarsPre[720]/* m.avg_drones[6] DISCRETE */)  + (data->simulationInfo->realVarsPre[721]/* m.avg_drones[7] DISCRETE */)  + (data->simulationInfo->realVarsPre[722]/* m.avg_drones[8] DISCRETE */) );

      (data->localData[0]->realVars[751]/* m.p_drones_all_areas DISCRETE */)  = (0.125) * ((data->simulationInfo->realVarsPre[743]/* m.p_drones[1] DISCRETE */)  + (data->simulationInfo->realVarsPre[744]/* m.p_drones[2] DISCRETE */)  + (data->simulationInfo->realVarsPre[745]/* m.p_drones[3] DISCRETE */)  + (data->simulationInfo->realVarsPre[746]/* m.p_drones[4] DISCRETE */)  + (data->simulationInfo->realVarsPre[747]/* m.p_drones[5] DISCRETE */)  + (data->simulationInfo->realVarsPre[748]/* m.p_drones[6] DISCRETE */)  + (data->simulationInfo->realVarsPre[749]/* m.p_drones[7] DISCRETE */)  + (data->simulationInfo->realVarsPre[750]/* m.p_drones[8] DISCRETE */) );

      (data->localData[0]->realVars[732]/* m.avg_no_drone_time_all_areas DISCRETE */)  = (0.125) * ((data->simulationInfo->realVarsPre[734]/* m.no_drone_time[1] DISCRETE */)  + (data->simulationInfo->realVarsPre[735]/* m.no_drone_time[2] DISCRETE */)  + (data->simulationInfo->realVarsPre[736]/* m.no_drone_time[3] DISCRETE */)  + (data->simulationInfo->realVarsPre[737]/* m.no_drone_time[4] DISCRETE */)  + (data->simulationInfo->realVarsPre[738]/* m.no_drone_time[5] DISCRETE */)  + (data->simulationInfo->realVarsPre[739]/* m.no_drone_time[6] DISCRETE */)  + (data->simulationInfo->realVarsPre[740]/* m.no_drone_time[7] DISCRETE */)  + (data->simulationInfo->realVarsPre[741]/* m.no_drone_time[8] DISCRETE */) );

      real_array_create(&tmp297, ((modelica_real*)&((&data->localData[0]->realVars[734]/* m.no_drone_time[1] DISCRETE */)[((modelica_integer) 1) - 1] )), 1, (_index_t)8);
      tmp298 = max_real_array(tmp297);
      tmp299 = Less((data->simulationInfo->realVarsPre[733]/* m.max_no_drone_time DISCRETE */) ,tmp298);
      if(tmp299)
      {
        real_array_create(&tmp300, ((modelica_real*)&((&data->localData[0]->realVars[734]/* m.no_drone_time[1] DISCRETE */)[((modelica_integer) 1) - 1] )), 1, (_index_t)8);
        tmp301 = max_real_array(tmp300);
        (data->localData[0]->realVars[733]/* m.max_no_drone_time DISCRETE */)  = tmp301;
      }

      tmp302 = (data->simulationInfo->realVarsPre[742]/* m.old_avg_drones_all_areas DISCRETE */) ;
      (data->localData[0]->realVars[760]/* m.std_dev_all_areas DISCRETE */)  = sqrt(fabs((data->simulationInfo->realVarsPre[723]/* m.avg_drones_all_areas DISCRETE */)  - ((tmp302 * tmp302))));
    }
    else if(((data->localData[0]->booleanVars[18]/* $whenCondition26 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[18]/* $whenCondition26 DISCRETE */)  /* edge */))
    {
      omc_Modelica_Utilities_Files_remove(threadData, MMC_REFSTRINGLIT(tmp303));

      tmp305 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta306 = stringAppend(MMC_REFSTRINGLIT(tmp304),tmp305);
      tmpMeta308 = stringAppend(tmpMeta306,MMC_REFSTRINGLIT(tmp307));
      tmp309 = modelica_real_to_modelica_string(DIVISION_SIM(data->localData[0]->timeValue,3600.0,"3600.0",equationIndexes), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta310 = stringAppend(tmpMeta308,tmp309);
      tmpMeta312 = stringAppend(tmpMeta310,MMC_REFSTRINGLIT(tmp311));
      omc_Modelica_Utilities_Streams_print(threadData, tmpMeta312, MMC_REFSTRINGLIT(tmp313));

      tmp314 = modelica_real_to_modelica_string((data->localData[0]->realVars[723]/* m.avg_drones_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta316 = stringAppend(tmp314,MMC_REFSTRINGLIT(tmp315));
      tmp317 = modelica_real_to_modelica_string((data->localData[0]->realVars[732]/* m.avg_no_drone_time_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta318 = stringAppend(tmpMeta316,tmp317);
      tmpMeta320 = stringAppend(tmpMeta318,MMC_REFSTRINGLIT(tmp319));
      tmp321 = modelica_real_to_modelica_string((data->localData[0]->realVars[733]/* m.max_no_drone_time DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta322 = stringAppend(tmpMeta320,tmp321);
      tmpMeta324 = stringAppend(tmpMeta322,MMC_REFSTRINGLIT(tmp323));
      tmp325 = modelica_real_to_modelica_string((data->localData[0]->realVars[751]/* m.p_drones_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta326 = stringAppend(tmpMeta324,tmp325);
      tmpMeta328 = stringAppend(tmpMeta326,MMC_REFSTRINGLIT(tmp327));
      tmp329 = modelica_real_to_modelica_string((data->localData[0]->realVars[760]/* m.std_dev_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta330 = stringAppend(tmpMeta328,tmp329);
      omc_Modelica_Utilities_Streams_print(threadData, tmpMeta330, MMC_REFSTRINGLIT(tmp331));

      omc_disconnect__from__db(threadData);

      {
        FILE_INFO info = {"/home/parallels/Desktop/Tesi/Drone/Variations/8-areas/source-code/monitor.mo",145,2,145,53,0};
        omc_terminate(info, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp332)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 368
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[2] = cc.msg_to_drone[1,2]
*/
void System_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  (data->localData[0]->realVars[73]/* cc_to_drone[1].inputdata[2] variable */)  = (data->localData[0]->realVars[176]/* cc.msg_to_drone[1,2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 369
type: SIMPLE_ASSIGN
cc_to_drone[2].inputdata[4] = cc.msg_to_drone[2,4]
*/
void System_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  (data->localData[0]->realVars[80]/* cc_to_drone[2].inputdata[4] variable */)  = (data->localData[0]->realVars[183]/* cc.msg_to_drone[2,4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 370
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
  $whenCondition21 := pre($whenCondition21);
  $whenCondition20 := pre($whenCondition20);
  $whenCondition19 := pre($whenCondition19);
  $whenCondition19 := pre(cc_to_drone[2].readsigint) and pre(cc_to_drone[2].writesigint);
  $whenCondition20 := pre(cc_to_drone[2].readsigint) and not pre(cc_to_drone[2].writesigint) and pre(cc_to_drone[2].fifosize) >= 1;
  $whenCondition21 := not pre(cc_to_drone[2].readsigint) and pre(cc_to_drone[2].writesigint) and pre(cc_to_drone[2].fifosize) < 10;
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
  elsewhen $whenCondition19 then
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
  elsewhen $whenCondition20 then
    for j in 1:5 loop
      cc_to_drone[2].outputdata[j] := cc_to_drone[2].fifo[pre(cc_to_drone[2].oldest),j];
    end for;
    cc_to_drone[2].oldest := mod(pre(cc_to_drone[2].oldest), 10) + 1;
    cc_to_drone[2].fifosize := pre(cc_to_drone[2].fifosize) - 1;
    cc_to_drone[2].datavailable := cc_to_drone[2].fifosize >= 1;
    cc_to_drone[2].spaceavailable := true;
  elsewhen $whenCondition21 then
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
void System_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  modelica_boolean tmp333;
  modelica_boolean tmp334;
  modelica_integer tmp335;
  modelica_integer tmp336;
  modelica_integer tmp337;
  modelica_integer tmp338;
  modelica_integer tmp339;
  modelica_integer tmp340;
  modelica_integer tmp341;
  modelica_integer tmp342;
  modelica_integer tmp343;
  modelica_boolean tmp344;
  modelica_integer tmp345;
  modelica_integer tmp346;
  modelica_integer tmp347;
  modelica_integer tmp348;
  modelica_integer tmp349;
  modelica_integer tmp350;
  modelica_integer tmp351;
  modelica_integer tmp352;
  modelica_integer tmp353;
  modelica_integer tmp354;
  modelica_integer tmp355;
  modelica_integer tmp356;
  modelica_integer tmp357;
  modelica_integer tmp358;
  modelica_integer tmp359;
  modelica_integer tmp360;
  modelica_integer tmp361;
  modelica_integer tmp362;
  modelica_integer tmp363;
  modelica_integer tmp364;
  modelica_boolean tmp365;
  modelica_integer tmp366;
  modelica_integer tmp367;
  modelica_integer tmp368;
  modelica_integer tmp369;
  modelica_boolean tmp370;
  modelica_integer tmp371;
  modelica_integer tmp372;
  modelica_integer tmp373;
  (data->localData[0]->integerVars[23]/* cc_to_drone[2].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[23]/* cc_to_drone[2].newest DISCRETE */) ;

  (data->localData[0]->integerVars[27]/* cc_to_drone[2].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[19]/* cc_to_drone[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[19]/* cc_to_drone[2].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[326]/* cc_to_drone[2].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[326]/* cc_to_drone[2].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[325]/* cc_to_drone[2].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[325]/* cc_to_drone[2].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[324]/* cc_to_drone[2].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[324]/* cc_to_drone[2].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[323]/* cc_to_drone[2].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[323]/* cc_to_drone[2].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[322]/* cc_to_drone[2].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[322]/* cc_to_drone[2].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[321]/* cc_to_drone[2].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[321]/* cc_to_drone[2].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[320]/* cc_to_drone[2].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[320]/* cc_to_drone[2].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[319]/* cc_to_drone[2].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[319]/* cc_to_drone[2].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[318]/* cc_to_drone[2].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[318]/* cc_to_drone[2].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[317]/* cc_to_drone[2].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[317]/* cc_to_drone[2].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[316]/* cc_to_drone[2].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[316]/* cc_to_drone[2].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[315]/* cc_to_drone[2].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[315]/* cc_to_drone[2].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[314]/* cc_to_drone[2].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[314]/* cc_to_drone[2].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[313]/* cc_to_drone[2].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[313]/* cc_to_drone[2].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[312]/* cc_to_drone[2].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[312]/* cc_to_drone[2].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[311]/* cc_to_drone[2].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[311]/* cc_to_drone[2].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[310]/* cc_to_drone[2].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[310]/* cc_to_drone[2].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[309]/* cc_to_drone[2].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[309]/* cc_to_drone[2].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[308]/* cc_to_drone[2].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[308]/* cc_to_drone[2].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[307]/* cc_to_drone[2].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[307]/* cc_to_drone[2].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[306]/* cc_to_drone[2].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[306]/* cc_to_drone[2].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[305]/* cc_to_drone[2].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[305]/* cc_to_drone[2].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[304]/* cc_to_drone[2].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[304]/* cc_to_drone[2].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[303]/* cc_to_drone[2].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[303]/* cc_to_drone[2].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[302]/* cc_to_drone[2].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[302]/* cc_to_drone[2].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[301]/* cc_to_drone[2].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[301]/* cc_to_drone[2].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[300]/* cc_to_drone[2].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[300]/* cc_to_drone[2].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[299]/* cc_to_drone[2].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[299]/* cc_to_drone[2].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[298]/* cc_to_drone[2].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[298]/* cc_to_drone[2].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[297]/* cc_to_drone[2].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[297]/* cc_to_drone[2].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[296]/* cc_to_drone[2].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[296]/* cc_to_drone[2].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[295]/* cc_to_drone[2].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[295]/* cc_to_drone[2].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[294]/* cc_to_drone[2].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[294]/* cc_to_drone[2].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[293]/* cc_to_drone[2].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[293]/* cc_to_drone[2].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[292]/* cc_to_drone[2].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[292]/* cc_to_drone[2].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[291]/* cc_to_drone[2].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[291]/* cc_to_drone[2].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[290]/* cc_to_drone[2].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[290]/* cc_to_drone[2].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[289]/* cc_to_drone[2].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[289]/* cc_to_drone[2].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[288]/* cc_to_drone[2].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[288]/* cc_to_drone[2].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[287]/* cc_to_drone[2].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[287]/* cc_to_drone[2].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[286]/* cc_to_drone[2].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[286]/* cc_to_drone[2].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[285]/* cc_to_drone[2].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[285]/* cc_to_drone[2].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[284]/* cc_to_drone[2].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[284]/* cc_to_drone[2].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[283]/* cc_to_drone[2].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[283]/* cc_to_drone[2].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[282]/* cc_to_drone[2].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[282]/* cc_to_drone[2].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[281]/* cc_to_drone[2].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[281]/* cc_to_drone[2].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[280]/* cc_to_drone[2].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[280]/* cc_to_drone[2].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[279]/* cc_to_drone[2].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[279]/* cc_to_drone[2].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[278]/* cc_to_drone[2].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[278]/* cc_to_drone[2].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[277]/* cc_to_drone[2].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[277]/* cc_to_drone[2].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[105]/* cc_to_drone[2].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[105]/* cc_to_drone[2].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[436]/* cc_to_drone[2].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[436]/* cc_to_drone[2].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[435]/* cc_to_drone[2].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[435]/* cc_to_drone[2].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[434]/* cc_to_drone[2].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[434]/* cc_to_drone[2].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[433]/* cc_to_drone[2].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[433]/* cc_to_drone[2].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[432]/* cc_to_drone[2].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[432]/* cc_to_drone[2].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[93]/* cc_to_drone[2].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[93]/* cc_to_drone[2].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[13]/* $whenCondition21 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[13]/* $whenCondition21 DISCRETE */) ;

  (data->localData[0]->booleanVars[12]/* $whenCondition20 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[12]/* $whenCondition20 DISCRETE */) ;

  (data->localData[0]->booleanVars[10]/* $whenCondition19 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[10]/* $whenCondition19 DISCRETE */) ;

  (data->localData[0]->booleanVars[10]/* $whenCondition19 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[97]/* cc_to_drone[2].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[109]/* cc_to_drone[2].writesigint DISCRETE */) );

  tmp333 = GreaterEq((data->simulationInfo->integerVarsPre[19]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[12]/* $whenCondition20 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[97]/* cc_to_drone[2].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[109]/* cc_to_drone[2].writesigint DISCRETE */) )) && tmp333);

  tmp334 = Less((data->simulationInfo->integerVarsPre[19]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[13]/* $whenCondition21 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[97]/* cc_to_drone[2].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[109]/* cc_to_drone[2].writesigint DISCRETE */) ) && tmp334);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[93]/* cc_to_drone[2].datavailable DISCRETE */)  = 0;

      tmp335 = ((modelica_integer) 1); tmp336 = 1; tmp337 = ((modelica_integer) 5);
      if(!(((tmp336 > 0) && (tmp335 > tmp337)) || ((tmp336 < 0) && (tmp335 < tmp337))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp335, tmp337); j += tmp336)
        {
          (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[105]/* cc_to_drone[2].spaceavailable DISCRETE */)  = 1;

      tmp341 = ((modelica_integer) 1); tmp342 = 1; tmp343 = ((modelica_integer) 10);
      if(!(((tmp342 > 0) && (tmp341 > tmp343)) || ((tmp342 < 0) && (tmp341 < tmp343))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp341, tmp343); i += tmp342)
        {
          tmp338 = ((modelica_integer) 1); tmp339 = 1; tmp340 = ((modelica_integer) 5);
          if(!(((tmp339 > 0) && (tmp338 > tmp340)) || ((tmp339 < 0) && (tmp338 < tmp340))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp338, tmp340); j += tmp339)
            {
              (&(data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[19]/* cc_to_drone[2].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[27]/* cc_to_drone[2].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[23]/* cc_to_drone[2].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[10]/* $whenCondition19 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[10]/* $whenCondition19 DISCRETE */)  /* edge */))
    {
      tmp344 = Less((data->simulationInfo->integerVarsPre[19]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp344)
      {
        tmp345 = ((modelica_integer) 1); tmp346 = 1; tmp347 = ((modelica_integer) 5);
        if(!(((tmp346 > 0) && (tmp345 > tmp347)) || ((tmp346 < 0) && (tmp345 < tmp347))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp345, tmp347); j += tmp346)
          {
            (&(data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[23]/* cc_to_drone[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[72]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
          }
        }

        tmp348 = ((modelica_integer) 10);
        if (tmp348 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].newest), 10)");}
        (data->localData[0]->integerVars[23]/* cc_to_drone[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[23]/* cc_to_drone[2].newest DISCRETE */) , tmp348) + ((modelica_integer) 1);

        tmp349 = ((modelica_integer) 1); tmp350 = 1; tmp351 = ((modelica_integer) 5);
        if(!(((tmp350 > 0) && (tmp349 > tmp351)) || ((tmp350 < 0) && (tmp349 < tmp351))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp349, tmp351); j += tmp350)
          {
            (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp352 = ((modelica_integer) 10);
        if (tmp352 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].oldest), 10)");}
        (data->localData[0]->integerVars[27]/* cc_to_drone[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].oldest DISCRETE */) , tmp352) + ((modelica_integer) 1);
      }
      else
      {
        tmp353 = ((modelica_integer) 1); tmp354 = 1; tmp355 = ((modelica_integer) 5);
        if(!(((tmp354 > 0) && (tmp353 > tmp355)) || ((tmp354 < 0) && (tmp353 < tmp355))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp353, tmp355); j += tmp354)
          {
            (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp356 = ((modelica_integer) 10);
        if (tmp356 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].oldest), 10)");}
        (data->localData[0]->integerVars[27]/* cc_to_drone[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].oldest DISCRETE */) , tmp356) + ((modelica_integer) 1);

        tmp357 = ((modelica_integer) 1); tmp358 = 1; tmp359 = ((modelica_integer) 5);
        if(!(((tmp358 > 0) && (tmp357 > tmp359)) || ((tmp358 < 0) && (tmp357 < tmp359))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp357, tmp359); j += tmp358)
          {
            (&(data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[23]/* cc_to_drone[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[72]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
          }
        }

        tmp360 = ((modelica_integer) 10);
        if (tmp360 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].newest), 10)");}
        (data->localData[0]->integerVars[23]/* cc_to_drone[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[23]/* cc_to_drone[2].newest DISCRETE */) , tmp360) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[12]/* $whenCondition20 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[12]/* $whenCondition20 DISCRETE */)  /* edge */))
    {
      tmp361 = ((modelica_integer) 1); tmp362 = 1; tmp363 = ((modelica_integer) 5);
      if(!(((tmp362 > 0) && (tmp361 > tmp363)) || ((tmp362 < 0) && (tmp361 < tmp363))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp361, tmp363); j += tmp362)
        {
          (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp364 = ((modelica_integer) 10);
      if (tmp364 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].oldest), 10)");}
      (data->localData[0]->integerVars[27]/* cc_to_drone[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].oldest DISCRETE */) , tmp364) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[19]/* cc_to_drone[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[19]/* cc_to_drone[2].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp365 = GreaterEq((data->localData[0]->integerVars[19]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[93]/* cc_to_drone[2].datavailable DISCRETE */)  = tmp365;

      (data->localData[0]->booleanVars[105]/* cc_to_drone[2].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[13]/* $whenCondition21 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[13]/* $whenCondition21 DISCRETE */)  /* edge */))
    {
      tmp366 = ((modelica_integer) 1); tmp367 = 1; tmp368 = ((modelica_integer) 5);
      if(!(((tmp367 > 0) && (tmp366 > tmp368)) || ((tmp367 < 0) && (tmp366 < tmp368))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp366, tmp368); j += tmp367)
        {
          (&(data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[23]/* cc_to_drone[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[72]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
        }
      }

      tmp369 = ((modelica_integer) 10);
      if (tmp369 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].newest), 10)");}
      (data->localData[0]->integerVars[23]/* cc_to_drone[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[23]/* cc_to_drone[2].newest DISCRETE */) , tmp369) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[19]/* cc_to_drone[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[19]/* cc_to_drone[2].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[93]/* cc_to_drone[2].datavailable DISCRETE */)  = 1;

      tmp370 = Less((data->simulationInfo->integerVarsPre[19]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[105]/* cc_to_drone[2].spaceavailable DISCRETE */)  = tmp370;

      tmp371 = ((modelica_integer) 1); tmp372 = 1; tmp373 = ((modelica_integer) 5);
      if(!(((tmp372 > 0) && (tmp371 > tmp373)) || ((tmp372 < 0) && (tmp371 < tmp373))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp371, tmp373); j += tmp372)
        {
          (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[27]/* cc_to_drone[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 371
type: SIMPLE_ASSIGN
d[2].datavailable = cc_to_drone[2].datavailable
*/
void System_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  (data->localData[0]->booleanVars[125]/* d[2].datavailable DISCRETE */)  = (data->localData[0]->booleanVars[93]/* cc_to_drone[2].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 372
type: SIMPLE_ASSIGN
cc.spaceavailable[2] = cc_to_drone[2].spaceavailable
*/
void System_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  (data->localData[0]->booleanVars[85]/* cc.spaceavailable[2] DISCRETE */)  = (data->localData[0]->booleanVars[105]/* cc_to_drone[2].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 373
type: SIMPLE_ASSIGN
cc_to_drone[4].writesignal = cc.writesignal[4]
*/
void System_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  (data->localData[0]->booleanVars[115]/* cc_to_drone[4].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[91]/* cc.writesignal[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 374
type: SIMPLE_ASSIGN
cc_to_drone[4].writesigint = not pre(cc_to_drone[4].writesignal) == cc_to_drone[4].writesignal
*/
void System_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  (data->localData[0]->booleanVars[111]/* cc_to_drone[4].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[115]/* cc_to_drone[4].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[115]/* cc_to_drone[4].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[115]/* cc_to_drone[4].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[115]/* cc_to_drone[4].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 375
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[1] = cc.msg_to_drone[1,1]
*/
void System_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  (data->localData[0]->realVars[72]/* cc_to_drone[1].inputdata[1] variable */)  = (data->localData[0]->realVars[175]/* cc.msg_to_drone[1,1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 376
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
  $whenCondition24 := pre($whenCondition24);
  $whenCondition23 := pre($whenCondition23);
  $whenCondition22 := pre($whenCondition22);
  $whenCondition22 := pre(cc_to_drone[1].readsigint) and pre(cc_to_drone[1].writesigint);
  $whenCondition23 := pre(cc_to_drone[1].readsigint) and not pre(cc_to_drone[1].writesigint) and pre(cc_to_drone[1].fifosize) >= 1;
  $whenCondition24 := not pre(cc_to_drone[1].readsigint) and pre(cc_to_drone[1].writesigint) and pre(cc_to_drone[1].fifosize) < 10;
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
  elsewhen $whenCondition22 then
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
  elsewhen $whenCondition23 then
    for j in 1:5 loop
      cc_to_drone[1].outputdata[j] := cc_to_drone[1].fifo[pre(cc_to_drone[1].oldest),j];
    end for;
    cc_to_drone[1].oldest := mod(pre(cc_to_drone[1].oldest), 10) + 1;
    cc_to_drone[1].fifosize := pre(cc_to_drone[1].fifosize) - 1;
    cc_to_drone[1].datavailable := cc_to_drone[1].fifosize >= 1;
    cc_to_drone[1].spaceavailable := true;
  elsewhen $whenCondition24 then
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
void System_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  modelica_boolean tmp375;
  modelica_boolean tmp376;
  modelica_integer tmp377;
  modelica_integer tmp378;
  modelica_integer tmp379;
  modelica_integer tmp380;
  modelica_integer tmp381;
  modelica_integer tmp382;
  modelica_integer tmp383;
  modelica_integer tmp384;
  modelica_integer tmp385;
  modelica_boolean tmp386;
  modelica_integer tmp387;
  modelica_integer tmp388;
  modelica_integer tmp389;
  modelica_integer tmp390;
  modelica_integer tmp391;
  modelica_integer tmp392;
  modelica_integer tmp393;
  modelica_integer tmp394;
  modelica_integer tmp395;
  modelica_integer tmp396;
  modelica_integer tmp397;
  modelica_integer tmp398;
  modelica_integer tmp399;
  modelica_integer tmp400;
  modelica_integer tmp401;
  modelica_integer tmp402;
  modelica_integer tmp403;
  modelica_integer tmp404;
  modelica_integer tmp405;
  modelica_integer tmp406;
  modelica_boolean tmp407;
  modelica_integer tmp408;
  modelica_integer tmp409;
  modelica_integer tmp410;
  modelica_integer tmp411;
  modelica_boolean tmp412;
  modelica_integer tmp413;
  modelica_integer tmp414;
  modelica_integer tmp415;
  (data->localData[0]->integerVars[22]/* cc_to_drone[1].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[22]/* cc_to_drone[1].newest DISCRETE */) ;

  (data->localData[0]->integerVars[26]/* cc_to_drone[1].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[18]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[18]/* cc_to_drone[1].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[276]/* cc_to_drone[1].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[276]/* cc_to_drone[1].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[275]/* cc_to_drone[1].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[275]/* cc_to_drone[1].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[274]/* cc_to_drone[1].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[274]/* cc_to_drone[1].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[273]/* cc_to_drone[1].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[273]/* cc_to_drone[1].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[272]/* cc_to_drone[1].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[272]/* cc_to_drone[1].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[271]/* cc_to_drone[1].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[271]/* cc_to_drone[1].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[270]/* cc_to_drone[1].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[270]/* cc_to_drone[1].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[269]/* cc_to_drone[1].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[269]/* cc_to_drone[1].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[268]/* cc_to_drone[1].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[268]/* cc_to_drone[1].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[267]/* cc_to_drone[1].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[267]/* cc_to_drone[1].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[266]/* cc_to_drone[1].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[266]/* cc_to_drone[1].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[265]/* cc_to_drone[1].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[265]/* cc_to_drone[1].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[264]/* cc_to_drone[1].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[264]/* cc_to_drone[1].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[263]/* cc_to_drone[1].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[263]/* cc_to_drone[1].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[262]/* cc_to_drone[1].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[262]/* cc_to_drone[1].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[261]/* cc_to_drone[1].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[261]/* cc_to_drone[1].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[260]/* cc_to_drone[1].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[260]/* cc_to_drone[1].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[259]/* cc_to_drone[1].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[259]/* cc_to_drone[1].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[258]/* cc_to_drone[1].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[258]/* cc_to_drone[1].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[257]/* cc_to_drone[1].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[257]/* cc_to_drone[1].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[256]/* cc_to_drone[1].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[256]/* cc_to_drone[1].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[255]/* cc_to_drone[1].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[255]/* cc_to_drone[1].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[254]/* cc_to_drone[1].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[254]/* cc_to_drone[1].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[253]/* cc_to_drone[1].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[253]/* cc_to_drone[1].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[252]/* cc_to_drone[1].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[252]/* cc_to_drone[1].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[251]/* cc_to_drone[1].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[251]/* cc_to_drone[1].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[250]/* cc_to_drone[1].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[250]/* cc_to_drone[1].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[249]/* cc_to_drone[1].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[249]/* cc_to_drone[1].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[248]/* cc_to_drone[1].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[248]/* cc_to_drone[1].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[247]/* cc_to_drone[1].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[247]/* cc_to_drone[1].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[246]/* cc_to_drone[1].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[246]/* cc_to_drone[1].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[245]/* cc_to_drone[1].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[245]/* cc_to_drone[1].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[244]/* cc_to_drone[1].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[244]/* cc_to_drone[1].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[243]/* cc_to_drone[1].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[243]/* cc_to_drone[1].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[242]/* cc_to_drone[1].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[242]/* cc_to_drone[1].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[241]/* cc_to_drone[1].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[241]/* cc_to_drone[1].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[240]/* cc_to_drone[1].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[240]/* cc_to_drone[1].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[239]/* cc_to_drone[1].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[239]/* cc_to_drone[1].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[238]/* cc_to_drone[1].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[238]/* cc_to_drone[1].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[237]/* cc_to_drone[1].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[237]/* cc_to_drone[1].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[236]/* cc_to_drone[1].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[236]/* cc_to_drone[1].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[235]/* cc_to_drone[1].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[235]/* cc_to_drone[1].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[234]/* cc_to_drone[1].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[234]/* cc_to_drone[1].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[233]/* cc_to_drone[1].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[233]/* cc_to_drone[1].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[232]/* cc_to_drone[1].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[232]/* cc_to_drone[1].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[231]/* cc_to_drone[1].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[231]/* cc_to_drone[1].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[230]/* cc_to_drone[1].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[230]/* cc_to_drone[1].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[229]/* cc_to_drone[1].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[229]/* cc_to_drone[1].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[228]/* cc_to_drone[1].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[228]/* cc_to_drone[1].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[104]/* cc_to_drone[1].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[104]/* cc_to_drone[1].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[431]/* cc_to_drone[1].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[431]/* cc_to_drone[1].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[430]/* cc_to_drone[1].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[430]/* cc_to_drone[1].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[429]/* cc_to_drone[1].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[429]/* cc_to_drone[1].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[428]/* cc_to_drone[1].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[428]/* cc_to_drone[1].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[92]/* cc_to_drone[1].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[92]/* cc_to_drone[1].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[16]/* $whenCondition24 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[16]/* $whenCondition24 DISCRETE */) ;

  (data->localData[0]->booleanVars[15]/* $whenCondition23 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[15]/* $whenCondition23 DISCRETE */) ;

  (data->localData[0]->booleanVars[14]/* $whenCondition22 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[14]/* $whenCondition22 DISCRETE */) ;

  (data->localData[0]->booleanVars[14]/* $whenCondition22 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[96]/* cc_to_drone[1].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[108]/* cc_to_drone[1].writesigint DISCRETE */) );

  tmp375 = GreaterEq((data->simulationInfo->integerVarsPre[18]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[15]/* $whenCondition23 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[96]/* cc_to_drone[1].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[108]/* cc_to_drone[1].writesigint DISCRETE */) )) && tmp375);

  tmp376 = Less((data->simulationInfo->integerVarsPre[18]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[16]/* $whenCondition24 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[96]/* cc_to_drone[1].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[108]/* cc_to_drone[1].writesigint DISCRETE */) ) && tmp376);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[92]/* cc_to_drone[1].datavailable DISCRETE */)  = 0;

      tmp377 = ((modelica_integer) 1); tmp378 = 1; tmp379 = ((modelica_integer) 5);
      if(!(((tmp378 > 0) && (tmp377 > tmp379)) || ((tmp378 < 0) && (tmp377 < tmp379))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp377, tmp379); j += tmp378)
        {
          (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[104]/* cc_to_drone[1].spaceavailable DISCRETE */)  = 1;

      tmp383 = ((modelica_integer) 1); tmp384 = 1; tmp385 = ((modelica_integer) 10);
      if(!(((tmp384 > 0) && (tmp383 > tmp385)) || ((tmp384 < 0) && (tmp383 < tmp385))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp383, tmp385); i += tmp384)
        {
          tmp380 = ((modelica_integer) 1); tmp381 = 1; tmp382 = ((modelica_integer) 5);
          if(!(((tmp381 > 0) && (tmp380 > tmp382)) || ((tmp381 < 0) && (tmp380 < tmp382))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp380, tmp382); j += tmp381)
            {
              (&(data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[18]/* cc_to_drone[1].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[26]/* cc_to_drone[1].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[22]/* cc_to_drone[1].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[14]/* $whenCondition22 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[14]/* $whenCondition22 DISCRETE */)  /* edge */))
    {
      tmp386 = Less((data->simulationInfo->integerVarsPre[18]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp386)
      {
        tmp387 = ((modelica_integer) 1); tmp388 = 1; tmp389 = ((modelica_integer) 5);
        if(!(((tmp388 > 0) && (tmp387 > tmp389)) || ((tmp388 < 0) && (tmp387 < tmp389))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp387, tmp389); j += tmp388)
          {
            (&(data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[22]/* cc_to_drone[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[72]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
          }
        }

        tmp390 = ((modelica_integer) 10);
        if (tmp390 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].newest), 10)");}
        (data->localData[0]->integerVars[22]/* cc_to_drone[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[22]/* cc_to_drone[1].newest DISCRETE */) , tmp390) + ((modelica_integer) 1);

        tmp391 = ((modelica_integer) 1); tmp392 = 1; tmp393 = ((modelica_integer) 5);
        if(!(((tmp392 > 0) && (tmp391 > tmp393)) || ((tmp392 < 0) && (tmp391 < tmp393))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp391, tmp393); j += tmp392)
          {
            (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp394 = ((modelica_integer) 10);
        if (tmp394 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].oldest), 10)");}
        (data->localData[0]->integerVars[26]/* cc_to_drone[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].oldest DISCRETE */) , tmp394) + ((modelica_integer) 1);
      }
      else
      {
        tmp395 = ((modelica_integer) 1); tmp396 = 1; tmp397 = ((modelica_integer) 5);
        if(!(((tmp396 > 0) && (tmp395 > tmp397)) || ((tmp396 < 0) && (tmp395 < tmp397))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp395, tmp397); j += tmp396)
          {
            (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp398 = ((modelica_integer) 10);
        if (tmp398 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].oldest), 10)");}
        (data->localData[0]->integerVars[26]/* cc_to_drone[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].oldest DISCRETE */) , tmp398) + ((modelica_integer) 1);

        tmp399 = ((modelica_integer) 1); tmp400 = 1; tmp401 = ((modelica_integer) 5);
        if(!(((tmp400 > 0) && (tmp399 > tmp401)) || ((tmp400 < 0) && (tmp399 < tmp401))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp399, tmp401); j += tmp400)
          {
            (&(data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[22]/* cc_to_drone[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[72]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
          }
        }

        tmp402 = ((modelica_integer) 10);
        if (tmp402 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].newest), 10)");}
        (data->localData[0]->integerVars[22]/* cc_to_drone[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[22]/* cc_to_drone[1].newest DISCRETE */) , tmp402) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[15]/* $whenCondition23 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[15]/* $whenCondition23 DISCRETE */)  /* edge */))
    {
      tmp403 = ((modelica_integer) 1); tmp404 = 1; tmp405 = ((modelica_integer) 5);
      if(!(((tmp404 > 0) && (tmp403 > tmp405)) || ((tmp404 < 0) && (tmp403 < tmp405))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp403, tmp405); j += tmp404)
        {
          (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp406 = ((modelica_integer) 10);
      if (tmp406 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].oldest), 10)");}
      (data->localData[0]->integerVars[26]/* cc_to_drone[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].oldest DISCRETE */) , tmp406) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[18]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[18]/* cc_to_drone[1].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp407 = GreaterEq((data->localData[0]->integerVars[18]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[92]/* cc_to_drone[1].datavailable DISCRETE */)  = tmp407;

      (data->localData[0]->booleanVars[104]/* cc_to_drone[1].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[16]/* $whenCondition24 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[16]/* $whenCondition24 DISCRETE */)  /* edge */))
    {
      tmp408 = ((modelica_integer) 1); tmp409 = 1; tmp410 = ((modelica_integer) 5);
      if(!(((tmp409 > 0) && (tmp408 > tmp410)) || ((tmp409 < 0) && (tmp408 < tmp410))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp408, tmp410); j += tmp409)
        {
          (&(data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[22]/* cc_to_drone[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[72]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
        }
      }

      tmp411 = ((modelica_integer) 10);
      if (tmp411 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].newest), 10)");}
      (data->localData[0]->integerVars[22]/* cc_to_drone[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[22]/* cc_to_drone[1].newest DISCRETE */) , tmp411) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[18]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[18]/* cc_to_drone[1].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[92]/* cc_to_drone[1].datavailable DISCRETE */)  = 1;

      tmp412 = Less((data->simulationInfo->integerVarsPre[18]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[104]/* cc_to_drone[1].spaceavailable DISCRETE */)  = tmp412;

      tmp413 = ((modelica_integer) 1); tmp414 = 1; tmp415 = ((modelica_integer) 5);
      if(!(((tmp414 > 0) && (tmp413 > tmp415)) || ((tmp414 < 0) && (tmp413 < tmp415))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp413, tmp415); j += tmp414)
        {
          (&(data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[227]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[26]/* cc_to_drone[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 377
type: SIMPLE_ASSIGN
d[1].datavailable = cc_to_drone[1].datavailable
*/
void System_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  (data->localData[0]->booleanVars[124]/* d[1].datavailable DISCRETE */)  = (data->localData[0]->booleanVars[92]/* cc_to_drone[1].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 378
type: SIMPLE_ASSIGN
cc.spaceavailable[1] = cc_to_drone[1].spaceavailable
*/
void System_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  (data->localData[0]->booleanVars[84]/* cc.spaceavailable[1] DISCRETE */)  = (data->localData[0]->booleanVars[104]/* cc_to_drone[1].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 379
type: ALGORITHM

  d[4].ctrl.destZ := pre(d[4].ctrl.destZ);
  d[4].ctrl.destY := pre(d[4].ctrl.destY);
  d[4].ctrl.destX := pre(d[4].ctrl.destX);
  $whenCondition30 := pre($whenCondition30);
  $whenCondition29 := pre($whenCondition29);
  $whenCondition29 := sample(11, 0.0, d[4].ctrl.prm.Tdrone) and pre(d[4].ctrl.droneDead);
  $whenCondition30 := sample(11, 0.0, d[4].ctrl.prm.Tdrone);
  when $whenCondition29 then
    d[4].ctrl.destX := pre(d[4].ctrl.x);
    d[4].ctrl.destY := pre(d[4].ctrl.y);
    d[4].ctrl.destZ := 0.0;
  elsewhen $whenCondition30 then
    d[4].ctrl.destX := pre(d[4].ctrl.setx);
    d[4].ctrl.destY := pre(d[4].ctrl.sety);
    d[4].ctrl.destZ := pre(d[4].ctrl.setz);
  end when;
*/
void System_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  (data->localData[0]->realVars[458]/* d[4].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[458]/* d[4].ctrl.destZ DISCRETE */) ;

  (data->localData[0]->realVars[454]/* d[4].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[454]/* d[4].ctrl.destY DISCRETE */) ;

  (data->localData[0]->realVars[450]/* d[4].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[450]/* d[4].ctrl.destX DISCRETE */) ;

  (data->localData[0]->booleanVars[23]/* $whenCondition30 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[23]/* $whenCondition30 DISCRETE */) ;

  (data->localData[0]->booleanVars[21]/* $whenCondition29 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[21]/* $whenCondition29 DISCRETE */) ;

  (data->localData[0]->booleanVars[21]/* $whenCondition29 DISCRETE */)  = (data->simulationInfo->samples[10] && (data->simulationInfo->booleanVarsPre[119]/* d[4].ctrl.droneDead DISCRETE */) );

  (data->localData[0]->booleanVars[23]/* $whenCondition30 DISCRETE */)  = data->simulationInfo->samples[10];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[21]/* $whenCondition29 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[21]/* $whenCondition29 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[450]/* d[4].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[124]/* d[4].ctrl.x variable */) ;

      (data->localData[0]->realVars[454]/* d[4].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[128]/* d[4].ctrl.y variable */) ;

      (data->localData[0]->realVars[458]/* d[4].ctrl.destZ DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[23]/* $whenCondition30 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[23]/* $whenCondition30 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[450]/* d[4].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[112]/* d[4].ctrl.setx variable */) ;

      (data->localData[0]->realVars[454]/* d[4].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[116]/* d[4].ctrl.sety variable */) ;

      (data->localData[0]->realVars[458]/* d[4].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[120]/* d[4].ctrl.setz variable */) ;
    }
  }
  TRACE_POP
}
/*
equation index: 380
type: ALGORITHM

  d[4].d.droneDead := pre(d[4].d.droneDead);
  d[4].d.droneState := pre(d[4].d.droneState);
  d[4].d.battery := pre(d[4].d.battery);
  $whenCondition32 := pre($whenCondition32);
  $whenCondition31 := pre($whenCondition31);
  $whenCondition31 := abs(pre(d[4].d.battery)) < 0.01;
  $whenCondition32 := sample(10, 0.0, d[4].d.p.Tdrone) and pre(d[4].d.droneState) == 1;
  when false then
    d[4].d.battery := d[4].d.p.capacity;
    d[4].d.droneState := 1;
    d[4].d.droneDead := false;
  elsewhen $whenCondition31 then
    d[4].d.droneDead := true;
  elsewhen $whenCondition32 then
    if returnedHome(d[4].d.p, pre(d[4].d.x), pre(d[4].d.y), pre(d[4].d.z)) then
      d[4].d.battery := charging(d[4].d.p, pre(d[4].d.battery));
    else
      d[4].d.battery := batteryMonitor(pre(d[4].d.battery), d[4].d.p.batteryDischarge);
    end if;
  end when;
*/
void System_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  modelica_boolean tmp416;
  real_array tmp418;
  real_array tmp419;
  real_array tmp420;
  real_array tmp421;
  real_array tmp422;
  real_array tmp423;
  (data->localData[0]->booleanVars[123]/* d[4].d.droneDead DISCRETE */)  = (data->simulationInfo->booleanVarsPre[123]/* d[4].d.droneDead DISCRETE */) ;

  (data->localData[0]->integerVars[37]/* d[4].d.droneState DISCRETE */)  = (data->simulationInfo->integerVarsPre[37]/* d[4].d.droneState DISCRETE */) ;

  (data->localData[0]->realVars[462]/* d[4].d.battery DISCRETE */)  = (data->simulationInfo->realVarsPre[462]/* d[4].d.battery DISCRETE */) ;

  (data->localData[0]->booleanVars[25]/* $whenCondition32 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[25]/* $whenCondition32 DISCRETE */) ;

  (data->localData[0]->booleanVars[24]/* $whenCondition31 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[24]/* $whenCondition31 DISCRETE */) ;

  tmp416 = Less(fabs((data->simulationInfo->realVarsPre[462]/* d[4].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[24]/* $whenCondition31 DISCRETE */)  = tmp416;

  (data->localData[0]->booleanVars[25]/* $whenCondition32 DISCRETE */)  = (data->simulationInfo->samples[9] && ((data->simulationInfo->integerVarsPre[37]/* d[4].d.droneState DISCRETE */)  == ((modelica_integer) 1)));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[462]/* d[4].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[1001]/* d[4].d.p.capacity PARAM */) ;

      (data->localData[0]->integerVars[37]/* d[4].d.droneState DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->booleanVars[123]/* d[4].d.droneDead DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[24]/* $whenCondition31 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[24]/* $whenCondition31 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->booleanVars[123]/* d[4].d.droneDead DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[25]/* $whenCondition32 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[25]/* $whenCondition32 DISCRETE */)  /* edge */))
    {
      real_array_create(&tmp418, ((modelica_real*)&((&data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 4) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp419, ((modelica_real*)&((&data->simulationInfo->realParameter[1030]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 4) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp420, ((modelica_real*)&((&data->simulationInfo->realParameter[794]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 4) - 1) * 8 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
      if(omc_returnedHome(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[1105]/* d[4].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[43]/* d[4].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[47]/* d[4].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[789]/* d[4].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[785]/* d[4].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[793]/* d[4].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[1077]/* d[4].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[55]/* d[4].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[1005]/* d[4].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[1089]/* d[4].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[1085]/* d[4].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[1013]/* d[4].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[1081]/* d[4].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[993]/* d[4].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[1017]/* d[4].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[989]/* d[4].d.p.arrivalThreshold PARAM */) , tmp418, tmp419, (data->simulationInfo->realParameter[1061]/* d[4].d.p.m PARAM */) , (data->simulationInfo->realParameter[1069]/* d[4].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[1057]/* d[4].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[1113]/* d[4].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[1065]/* d[4].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[1073]/* d[4].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[1021]/* d[4].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[1109]/* d[4].d.p.unita PARAM */) , (data->simulationInfo->realParameter[1001]/* d[4].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[997]/* d[4].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[1009]/* d[4].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[1093]/* d[4].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[1029]/* d[4].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[1025]/* d[4].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[1097]/* d[4].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[1101]/* d[4].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[51]/* d[4].d.p.nAreas PARAM */) , tmp420), (data->simulationInfo->realVarsPre[15]/* d[4].d.x STATE(1,d[4].d.Vx) */) , (data->simulationInfo->realVarsPre[19]/* d[4].d.y STATE(1,d[4].d.Vy) */) , (data->simulationInfo->realVarsPre[23]/* d[4].d.z STATE(1,d[4].d.Vz) */) ))
      {
        real_array_create(&tmp421, ((modelica_real*)&((&data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 4) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp422, ((modelica_real*)&((&data->simulationInfo->realParameter[1030]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 4) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp423, ((modelica_real*)&((&data->simulationInfo->realParameter[794]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 4) - 1) * 8 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
        (data->localData[0]->realVars[462]/* d[4].d.battery DISCRETE */)  = omc_charging(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[1105]/* d[4].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[43]/* d[4].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[47]/* d[4].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[789]/* d[4].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[785]/* d[4].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[793]/* d[4].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[1077]/* d[4].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[55]/* d[4].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[1005]/* d[4].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[1089]/* d[4].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[1085]/* d[4].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[1013]/* d[4].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[1081]/* d[4].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[993]/* d[4].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[1017]/* d[4].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[989]/* d[4].d.p.arrivalThreshold PARAM */) , tmp421, tmp422, (data->simulationInfo->realParameter[1061]/* d[4].d.p.m PARAM */) , (data->simulationInfo->realParameter[1069]/* d[4].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[1057]/* d[4].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[1113]/* d[4].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[1065]/* d[4].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[1073]/* d[4].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[1021]/* d[4].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[1109]/* d[4].d.p.unita PARAM */) , (data->simulationInfo->realParameter[1001]/* d[4].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[997]/* d[4].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[1009]/* d[4].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[1093]/* d[4].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[1029]/* d[4].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[1025]/* d[4].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[1097]/* d[4].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[1101]/* d[4].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[51]/* d[4].d.p.nAreas PARAM */) , tmp423), (data->simulationInfo->realVarsPre[462]/* d[4].d.battery DISCRETE */) );
      }
      else
      {
        (data->localData[0]->realVars[462]/* d[4].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[462]/* d[4].d.battery DISCRETE */) , (data->simulationInfo->realParameter[997]/* d[4].d.p.batteryDischarge PARAM */) );
      }
    }
  }
  TRACE_POP
}
/*
equation index: 381
type: ALGORITHM

  d[4].comm_state := pre(d[4].comm_state);
  d[4].fifox := pre(d[4].fifox);
  d[4].writesignal := pre(d[4].writesignal);
  d[4].readsignal := pre(d[4].readsignal);
  d[4].flag := pre(d[4].flag);
  d[4].setz := pre(d[4].setz);
  d[4].sety := pre(d[4].sety);
  d[4].setx := pre(d[4].setx);
  d[4].msg_to_cc[5] := pre(d[4].msg_to_cc[5]);
  d[4].msg_to_cc[4] := pre(d[4].msg_to_cc[4]);
  d[4].msg_to_cc[3] := pre(d[4].msg_to_cc[3]);
  d[4].msg_to_cc[2] := pre(d[4].msg_to_cc[2]);
  d[4].msg_to_cc[1] := pre(d[4].msg_to_cc[1]);
  $whenCondition28 := pre($whenCondition28);
  $whenCondition28 := sample(12, 0.0, d[4].p.Tdrone);
  when false then
    d[4].msg_to_cc := {0.0, 0.0, 0.0, 0.0, 0.0};
    d[4].setx := myrandom() * d[4].p.flyZone[1];
    d[4].sety := myrandom() * d[4].p.flyZone[2];
    d[4].setz := myrandom() * d[4].p.flyZone[3];
    d[4].flag := 0;
    d[4].readsignal := false;
    d[4].writesignal := false;
    d[4].fifox := 0;
    d[4].comm_state := 10;
  elsewhen $whenCondition28 then
    if pre(d[4].d.droneDead) then
      d[4].comm_state := 0;
    elseif pre(d[4].comm_state) == 10 then
      (d[4].readsignal, d[4].fifox) := ReadFromFIFO(pre(d[4].fifox), pre(d[4].datavailable), pre(d[4].readsignal));
      if FifoIODone(d[4].fifox) then
        d[4].flag := integer(cc_to_drone[4].outputdata[1]);
        if d[4].flag == 1 then
          d[4].msg_to_cc[1] := 2.0;
          d[4].msg_to_cc[2] := d[4].d.x;
          d[4].msg_to_cc[3] := d[4].d.y;
          d[4].msg_to_cc[4] := d[4].d.z;
          d[4].msg_to_cc[5] := d[4].d.battery;
          d[4].comm_state := 20;
        elseif d[4].flag == 2 then
          d[4].setx := cc_to_drone[4].outputdata[2];
          d[4].sety := cc_to_drone[4].outputdata[3];
          d[4].setz := cc_to_drone[4].outputdata[4];
          d[4].comm_state := pre(d[4].comm_state);
        end if;
        d[4].fifox := 0;
      end if;
    elseif pre(d[4].comm_state) == 20 then
      (d[4].writesignal, d[4].fifox) := WriteToFIFO(pre(d[4].fifox), pre(d[4].writesignal), pre(d[4].spaceavailable));
      if FifoIODone(d[4].fifox) then
        d[4].comm_state := 10;
        d[4].fifox := 0;
      end if;
    else
      d[4].comm_state := pre(d[4].comm_state);
    end if;
  end when;
*/
void System_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  real_array tmp424;
  real_array tmp425;
  (data->localData[0]->integerVars[33]/* d[4].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[33]/* d[4].comm_state DISCRETE */) ;

  (data->localData[0]->integerVars[41]/* d[4].fifox DISCRETE */)  = (data->simulationInfo->integerVarsPre[41]/* d[4].fifox DISCRETE */) ;

  (data->localData[0]->booleanVars[139]/* d[4].writesignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[139]/* d[4].writesignal DISCRETE */) ;

  (data->localData[0]->booleanVars[131]/* d[4].readsignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[131]/* d[4].readsignal DISCRETE */) ;

  (data->localData[0]->integerVars[45]/* d[4].flag DISCRETE */)  = (data->simulationInfo->integerVarsPre[45]/* d[4].flag DISCRETE */) ;

  (data->localData[0]->realVars[494]/* d[4].setz DISCRETE */)  = (data->simulationInfo->realVarsPre[494]/* d[4].setz DISCRETE */) ;

  (data->localData[0]->realVars[490]/* d[4].sety DISCRETE */)  = (data->simulationInfo->realVarsPre[490]/* d[4].sety DISCRETE */) ;

  (data->localData[0]->realVars[486]/* d[4].setx DISCRETE */)  = (data->simulationInfo->realVarsPre[486]/* d[4].setx DISCRETE */) ;

  (data->localData[0]->realVars[482]/* d[4].msg_to_cc[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[482]/* d[4].msg_to_cc[5] DISCRETE */) ;

  (data->localData[0]->realVars[481]/* d[4].msg_to_cc[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[481]/* d[4].msg_to_cc[4] DISCRETE */) ;

  (data->localData[0]->realVars[480]/* d[4].msg_to_cc[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[480]/* d[4].msg_to_cc[3] DISCRETE */) ;

  (data->localData[0]->realVars[479]/* d[4].msg_to_cc[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[479]/* d[4].msg_to_cc[2] DISCRETE */) ;

  (data->localData[0]->realVars[478]/* d[4].msg_to_cc[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[478]/* d[4].msg_to_cc[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[20]/* $whenCondition28 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[20]/* $whenCondition28 DISCRETE */) ;

  (data->localData[0]->booleanVars[20]/* $whenCondition28 DISCRETE */)  = data->simulationInfo->samples[11];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      array_alloc_scalar_real_array(&tmp424, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp425, ((modelica_real*)&((&(data->localData[0]->realVars[463]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
      real_array_copy_data(tmp424, tmp425);

      (data->localData[0]->realVars[486]/* d[4].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1383]/* d[4].p.flyZone[1] PARAM */) );

      (data->localData[0]->realVars[490]/* d[4].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1384]/* d[4].p.flyZone[2] PARAM */) );

      (data->localData[0]->realVars[494]/* d[4].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1385]/* d[4].p.flyZone[3] PARAM */) );

      (data->localData[0]->integerVars[45]/* d[4].flag DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->booleanVars[131]/* d[4].readsignal DISCRETE */)  = 0;

      (data->localData[0]->booleanVars[139]/* d[4].writesignal DISCRETE */)  = 0;

      (data->localData[0]->integerVars[41]/* d[4].fifox DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[33]/* d[4].comm_state DISCRETE */)  = ((modelica_integer) 10);
    }
    else if(((data->localData[0]->booleanVars[20]/* $whenCondition28 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[20]/* $whenCondition28 DISCRETE */)  /* edge */))
    {
      if((data->simulationInfo->booleanVarsPre[123]/* d[4].d.droneDead DISCRETE */) )
      {
        (data->localData[0]->integerVars[33]/* d[4].comm_state DISCRETE */)  = ((modelica_integer) 0);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[33]/* d[4].comm_state DISCRETE */)  == ((modelica_integer) 10)))
        {
          (data->localData[0]->booleanVars[131]/* d[4].readsignal DISCRETE */)  = omc_ReadFromFIFO(threadData, (data->simulationInfo->integerVarsPre[41]/* d[4].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[127]/* d[4].datavailable DISCRETE */) , (data->simulationInfo->booleanVarsPre[131]/* d[4].readsignal DISCRETE */)  ,&(data->localData[0]->integerVars[41]/* d[4].fifox DISCRETE */) );

          if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[41]/* d[4].fifox DISCRETE */) ))
          {
            (data->localData[0]->integerVars[45]/* d[4].flag DISCRETE */)  = ((modelica_integer)floor((data->localData[0]->realVars[442]/* cc_to_drone[4].outputdata[1] DISCRETE */) ));

            if(((data->localData[0]->integerVars[45]/* d[4].flag DISCRETE */)  == ((modelica_integer) 1)))
            {
              (data->localData[0]->realVars[478]/* d[4].msg_to_cc[1] DISCRETE */)  = 2.0;

              (data->localData[0]->realVars[479]/* d[4].msg_to_cc[2] DISCRETE */)  = (data->localData[0]->realVars[15]/* d[4].d.x STATE(1,d[4].d.Vx) */) ;

              (data->localData[0]->realVars[480]/* d[4].msg_to_cc[3] DISCRETE */)  = (data->localData[0]->realVars[19]/* d[4].d.y STATE(1,d[4].d.Vy) */) ;

              (data->localData[0]->realVars[481]/* d[4].msg_to_cc[4] DISCRETE */)  = (data->localData[0]->realVars[23]/* d[4].d.z STATE(1,d[4].d.Vz) */) ;

              (data->localData[0]->realVars[482]/* d[4].msg_to_cc[5] DISCRETE */)  = (data->localData[0]->realVars[462]/* d[4].d.battery DISCRETE */) ;

              (data->localData[0]->integerVars[33]/* d[4].comm_state DISCRETE */)  = ((modelica_integer) 20);
            }
            else
            {
              if(((data->localData[0]->integerVars[45]/* d[4].flag DISCRETE */)  == ((modelica_integer) 2)))
              {
                (data->localData[0]->realVars[486]/* d[4].setx DISCRETE */)  = (data->localData[0]->realVars[443]/* cc_to_drone[4].outputdata[2] DISCRETE */) ;

                (data->localData[0]->realVars[490]/* d[4].sety DISCRETE */)  = (data->localData[0]->realVars[444]/* cc_to_drone[4].outputdata[3] DISCRETE */) ;

                (data->localData[0]->realVars[494]/* d[4].setz DISCRETE */)  = (data->localData[0]->realVars[445]/* cc_to_drone[4].outputdata[4] DISCRETE */) ;

                (data->localData[0]->integerVars[33]/* d[4].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[33]/* d[4].comm_state DISCRETE */) ;
              }
            }

            (data->localData[0]->integerVars[41]/* d[4].fifox DISCRETE */)  = ((modelica_integer) 0);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[33]/* d[4].comm_state DISCRETE */)  == ((modelica_integer) 20)))
          {
            (data->localData[0]->booleanVars[139]/* d[4].writesignal DISCRETE */)  = omc_WriteToFIFO(threadData, (data->simulationInfo->integerVarsPre[41]/* d[4].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[139]/* d[4].writesignal DISCRETE */) , (data->simulationInfo->booleanVarsPre[135]/* d[4].spaceavailable DISCRETE */)  ,&(data->localData[0]->integerVars[41]/* d[4].fifox DISCRETE */) );

            if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[41]/* d[4].fifox DISCRETE */) ))
            {
              (data->localData[0]->integerVars[33]/* d[4].comm_state DISCRETE */)  = ((modelica_integer) 10);

              (data->localData[0]->integerVars[41]/* d[4].fifox DISCRETE */)  = ((modelica_integer) 0);
            }
          }
          else
          {
            (data->localData[0]->integerVars[33]/* d[4].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[33]/* d[4].comm_state DISCRETE */) ;
          }
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 382
type: SIMPLE_ASSIGN
drone_to_cc[4].inputdata[4] = d[4].msg_to_cc[4]
*/
void System_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  (data->localData[0]->realVars[147]/* drone_to_cc[4].inputdata[4] variable */)  = (data->localData[0]->realVars[481]/* d[4].msg_to_cc[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 383
type: SIMPLE_ASSIGN
drone_to_cc[4].writesignal = d[4].writesignal
*/
void System_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  (data->localData[0]->booleanVars[163]/* drone_to_cc[4].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[139]/* d[4].writesignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 384
type: SIMPLE_ASSIGN
drone_to_cc[4].writesigint = not pre(drone_to_cc[4].writesignal) == drone_to_cc[4].writesignal
*/
void System_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  (data->localData[0]->booleanVars[159]/* drone_to_cc[4].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[163]/* drone_to_cc[4].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[163]/* drone_to_cc[4].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[163]/* drone_to_cc[4].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[163]/* drone_to_cc[4].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 385
type: SIMPLE_ASSIGN
d[4].ctrl.setz = d[4].setz
*/
void System_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  (data->localData[0]->realVars[120]/* d[4].ctrl.setz variable */)  = (data->localData[0]->realVars[494]/* d[4].setz DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 386
type: SIMPLE_ASSIGN
d[4].ctrl.setx = d[4].setx
*/
void System_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  (data->localData[0]->realVars[112]/* d[4].ctrl.setx variable */)  = (data->localData[0]->realVars[486]/* d[4].setx DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 387
type: SIMPLE_ASSIGN
drone_to_cc[4].inputdata[5] = d[4].msg_to_cc[5]
*/
void System_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  (data->localData[0]->realVars[148]/* drone_to_cc[4].inputdata[5] variable */)  = (data->localData[0]->realVars[482]/* d[4].msg_to_cc[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 388
type: SIMPLE_ASSIGN
drone_to_cc[4].inputdata[1] = d[4].msg_to_cc[1]
*/
void System_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  (data->localData[0]->realVars[144]/* drone_to_cc[4].inputdata[1] variable */)  = (data->localData[0]->realVars[478]/* d[4].msg_to_cc[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 389
type: SIMPLE_ASSIGN
drone_to_cc[4].inputdata[2] = d[4].msg_to_cc[2]
*/
void System_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  (data->localData[0]->realVars[145]/* drone_to_cc[4].inputdata[2] variable */)  = (data->localData[0]->realVars[479]/* d[4].msg_to_cc[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 390
type: SIMPLE_ASSIGN
cc_to_drone[4].readsignal = d[4].readsignal
*/
void System_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  (data->localData[0]->booleanVars[103]/* cc_to_drone[4].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[131]/* d[4].readsignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 391
type: SIMPLE_ASSIGN
cc_to_drone[4].readsigint = not pre(cc_to_drone[4].readsignal) == cc_to_drone[4].readsignal
*/
void System_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  (data->localData[0]->booleanVars[99]/* cc_to_drone[4].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[103]/* cc_to_drone[4].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[103]/* cc_to_drone[4].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[103]/* cc_to_drone[4].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[103]/* cc_to_drone[4].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 392
type: SIMPLE_ASSIGN
drone_to_cc[4].inputdata[3] = d[4].msg_to_cc[3]
*/
void System_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  (data->localData[0]->realVars[146]/* drone_to_cc[4].inputdata[3] variable */)  = (data->localData[0]->realVars[480]/* d[4].msg_to_cc[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 393
type: ALGORITHM

  drone_to_cc[4].newest := pre(drone_to_cc[4].newest);
  drone_to_cc[4].oldest := pre(drone_to_cc[4].oldest);
  drone_to_cc[4].fifosize := pre(drone_to_cc[4].fifosize);
  drone_to_cc[4].fifo[10,5] := pre(drone_to_cc[4].fifo[10,5]);
  drone_to_cc[4].fifo[10,4] := pre(drone_to_cc[4].fifo[10,4]);
  drone_to_cc[4].fifo[10,3] := pre(drone_to_cc[4].fifo[10,3]);
  drone_to_cc[4].fifo[10,2] := pre(drone_to_cc[4].fifo[10,2]);
  drone_to_cc[4].fifo[10,1] := pre(drone_to_cc[4].fifo[10,1]);
  drone_to_cc[4].fifo[9,5] := pre(drone_to_cc[4].fifo[9,5]);
  drone_to_cc[4].fifo[9,4] := pre(drone_to_cc[4].fifo[9,4]);
  drone_to_cc[4].fifo[9,3] := pre(drone_to_cc[4].fifo[9,3]);
  drone_to_cc[4].fifo[9,2] := pre(drone_to_cc[4].fifo[9,2]);
  drone_to_cc[4].fifo[9,1] := pre(drone_to_cc[4].fifo[9,1]);
  drone_to_cc[4].fifo[8,5] := pre(drone_to_cc[4].fifo[8,5]);
  drone_to_cc[4].fifo[8,4] := pre(drone_to_cc[4].fifo[8,4]);
  drone_to_cc[4].fifo[8,3] := pre(drone_to_cc[4].fifo[8,3]);
  drone_to_cc[4].fifo[8,2] := pre(drone_to_cc[4].fifo[8,2]);
  drone_to_cc[4].fifo[8,1] := pre(drone_to_cc[4].fifo[8,1]);
  drone_to_cc[4].fifo[7,5] := pre(drone_to_cc[4].fifo[7,5]);
  drone_to_cc[4].fifo[7,4] := pre(drone_to_cc[4].fifo[7,4]);
  drone_to_cc[4].fifo[7,3] := pre(drone_to_cc[4].fifo[7,3]);
  drone_to_cc[4].fifo[7,2] := pre(drone_to_cc[4].fifo[7,2]);
  drone_to_cc[4].fifo[7,1] := pre(drone_to_cc[4].fifo[7,1]);
  drone_to_cc[4].fifo[6,5] := pre(drone_to_cc[4].fifo[6,5]);
  drone_to_cc[4].fifo[6,4] := pre(drone_to_cc[4].fifo[6,4]);
  drone_to_cc[4].fifo[6,3] := pre(drone_to_cc[4].fifo[6,3]);
  drone_to_cc[4].fifo[6,2] := pre(drone_to_cc[4].fifo[6,2]);
  drone_to_cc[4].fifo[6,1] := pre(drone_to_cc[4].fifo[6,1]);
  drone_to_cc[4].fifo[5,5] := pre(drone_to_cc[4].fifo[5,5]);
  drone_to_cc[4].fifo[5,4] := pre(drone_to_cc[4].fifo[5,4]);
  drone_to_cc[4].fifo[5,3] := pre(drone_to_cc[4].fifo[5,3]);
  drone_to_cc[4].fifo[5,2] := pre(drone_to_cc[4].fifo[5,2]);
  drone_to_cc[4].fifo[5,1] := pre(drone_to_cc[4].fifo[5,1]);
  drone_to_cc[4].fifo[4,5] := pre(drone_to_cc[4].fifo[4,5]);
  drone_to_cc[4].fifo[4,4] := pre(drone_to_cc[4].fifo[4,4]);
  drone_to_cc[4].fifo[4,3] := pre(drone_to_cc[4].fifo[4,3]);
  drone_to_cc[4].fifo[4,2] := pre(drone_to_cc[4].fifo[4,2]);
  drone_to_cc[4].fifo[4,1] := pre(drone_to_cc[4].fifo[4,1]);
  drone_to_cc[4].fifo[3,5] := pre(drone_to_cc[4].fifo[3,5]);
  drone_to_cc[4].fifo[3,4] := pre(drone_to_cc[4].fifo[3,4]);
  drone_to_cc[4].fifo[3,3] := pre(drone_to_cc[4].fifo[3,3]);
  drone_to_cc[4].fifo[3,2] := pre(drone_to_cc[4].fifo[3,2]);
  drone_to_cc[4].fifo[3,1] := pre(drone_to_cc[4].fifo[3,1]);
  drone_to_cc[4].fifo[2,5] := pre(drone_to_cc[4].fifo[2,5]);
  drone_to_cc[4].fifo[2,4] := pre(drone_to_cc[4].fifo[2,4]);
  drone_to_cc[4].fifo[2,3] := pre(drone_to_cc[4].fifo[2,3]);
  drone_to_cc[4].fifo[2,2] := pre(drone_to_cc[4].fifo[2,2]);
  drone_to_cc[4].fifo[2,1] := pre(drone_to_cc[4].fifo[2,1]);
  drone_to_cc[4].fifo[1,5] := pre(drone_to_cc[4].fifo[1,5]);
  drone_to_cc[4].fifo[1,4] := pre(drone_to_cc[4].fifo[1,4]);
  drone_to_cc[4].fifo[1,3] := pre(drone_to_cc[4].fifo[1,3]);
  drone_to_cc[4].fifo[1,2] := pre(drone_to_cc[4].fifo[1,2]);
  drone_to_cc[4].fifo[1,1] := pre(drone_to_cc[4].fifo[1,1]);
  drone_to_cc[4].spaceavailable := pre(drone_to_cc[4].spaceavailable);
  drone_to_cc[4].outputdata[5] := pre(drone_to_cc[4].outputdata[5]);
  drone_to_cc[4].outputdata[4] := pre(drone_to_cc[4].outputdata[4]);
  drone_to_cc[4].outputdata[3] := pre(drone_to_cc[4].outputdata[3]);
  drone_to_cc[4].outputdata[2] := pre(drone_to_cc[4].outputdata[2]);
  drone_to_cc[4].outputdata[1] := pre(drone_to_cc[4].outputdata[1]);
  drone_to_cc[4].datavailable := pre(drone_to_cc[4].datavailable);
  $whenCondition3 := pre($whenCondition3);
  $whenCondition2 := pre($whenCondition2);
  $whenCondition1 := pre($whenCondition1);
  $whenCondition1 := pre(drone_to_cc[4].readsigint) and pre(drone_to_cc[4].writesigint);
  $whenCondition2 := pre(drone_to_cc[4].readsigint) and not pre(drone_to_cc[4].writesigint) and pre(drone_to_cc[4].fifosize) >= 1;
  $whenCondition3 := not pre(drone_to_cc[4].readsigint) and pre(drone_to_cc[4].writesigint) and pre(drone_to_cc[4].fifosize) < 10;
  when false then
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
  elsewhen $whenCondition1 then
    if pre(drone_to_cc[4].fifosize) < 10 then
      for j in 1:5 loop
        drone_to_cc[4].fifo[pre(drone_to_cc[4].newest),j] := drone_to_cc[4].inputdata[j];
      end for;
      drone_to_cc[4].newest := mod(pre(drone_to_cc[4].newest), 10) + 1;
      for j in 1:5 loop
        drone_to_cc[4].outputdata[j] := drone_to_cc[4].fifo[pre(drone_to_cc[4].oldest),j];
      end for;
      drone_to_cc[4].oldest := mod(pre(drone_to_cc[4].oldest), 10) + 1;
    else
      for j in 1:5 loop
        drone_to_cc[4].outputdata[j] := drone_to_cc[4].fifo[pre(drone_to_cc[4].oldest),j];
      end for;
      drone_to_cc[4].oldest := mod(pre(drone_to_cc[4].oldest), 10) + 1;
      for j in 1:5 loop
        drone_to_cc[4].fifo[pre(drone_to_cc[4].newest),j] := drone_to_cc[4].inputdata[j];
      end for;
      drone_to_cc[4].newest := mod(pre(drone_to_cc[4].newest), 10) + 1;
    end if;
  elsewhen $whenCondition2 then
    for j in 1:5 loop
      drone_to_cc[4].outputdata[j] := drone_to_cc[4].fifo[pre(drone_to_cc[4].oldest),j];
    end for;
    drone_to_cc[4].oldest := mod(pre(drone_to_cc[4].oldest), 10) + 1;
    drone_to_cc[4].fifosize := pre(drone_to_cc[4].fifosize) - 1;
    drone_to_cc[4].datavailable := drone_to_cc[4].fifosize >= 1;
    drone_to_cc[4].spaceavailable := true;
  elsewhen $whenCondition3 then
    for j in 1:5 loop
      drone_to_cc[4].fifo[pre(drone_to_cc[4].newest),j] := drone_to_cc[4].inputdata[j];
    end for;
    drone_to_cc[4].newest := mod(pre(drone_to_cc[4].newest), 10) + 1;
    drone_to_cc[4].fifosize := pre(drone_to_cc[4].fifosize) + 1;
    drone_to_cc[4].datavailable := true;
    drone_to_cc[4].spaceavailable := pre(drone_to_cc[4].fifosize) < 10;
    for j in 1:5 loop
      drone_to_cc[4].outputdata[j] := drone_to_cc[4].fifo[pre(drone_to_cc[4].oldest),j];
    end for;
  end when;
*/
void System_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  modelica_boolean tmp432;
  modelica_boolean tmp433;
  modelica_integer tmp434;
  modelica_integer tmp435;
  modelica_integer tmp436;
  modelica_integer tmp437;
  modelica_integer tmp438;
  modelica_integer tmp439;
  modelica_integer tmp440;
  modelica_integer tmp441;
  modelica_integer tmp442;
  modelica_boolean tmp443;
  modelica_integer tmp444;
  modelica_integer tmp445;
  modelica_integer tmp446;
  modelica_integer tmp447;
  modelica_integer tmp448;
  modelica_integer tmp449;
  modelica_integer tmp450;
  modelica_integer tmp451;
  modelica_integer tmp452;
  modelica_integer tmp453;
  modelica_integer tmp454;
  modelica_integer tmp455;
  modelica_integer tmp456;
  modelica_integer tmp457;
  modelica_integer tmp458;
  modelica_integer tmp459;
  modelica_integer tmp460;
  modelica_integer tmp461;
  modelica_integer tmp462;
  modelica_integer tmp463;
  modelica_boolean tmp464;
  modelica_integer tmp465;
  modelica_integer tmp466;
  modelica_integer tmp467;
  modelica_integer tmp468;
  modelica_boolean tmp469;
  modelica_integer tmp470;
  modelica_integer tmp471;
  modelica_integer tmp472;
  (data->localData[0]->integerVars[53]/* drone_to_cc[4].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[53]/* drone_to_cc[4].newest DISCRETE */) ;

  (data->localData[0]->integerVars[57]/* drone_to_cc[4].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[57]/* drone_to_cc[4].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[49]/* drone_to_cc[4].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[49]/* drone_to_cc[4].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[694]/* drone_to_cc[4].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[694]/* drone_to_cc[4].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[693]/* drone_to_cc[4].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[693]/* drone_to_cc[4].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[692]/* drone_to_cc[4].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[692]/* drone_to_cc[4].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[691]/* drone_to_cc[4].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[691]/* drone_to_cc[4].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[690]/* drone_to_cc[4].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[690]/* drone_to_cc[4].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[689]/* drone_to_cc[4].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[689]/* drone_to_cc[4].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[688]/* drone_to_cc[4].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[688]/* drone_to_cc[4].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[687]/* drone_to_cc[4].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[687]/* drone_to_cc[4].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[686]/* drone_to_cc[4].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[686]/* drone_to_cc[4].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[685]/* drone_to_cc[4].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[685]/* drone_to_cc[4].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[684]/* drone_to_cc[4].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[684]/* drone_to_cc[4].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[683]/* drone_to_cc[4].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[683]/* drone_to_cc[4].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[682]/* drone_to_cc[4].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[682]/* drone_to_cc[4].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[681]/* drone_to_cc[4].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[681]/* drone_to_cc[4].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[680]/* drone_to_cc[4].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[680]/* drone_to_cc[4].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[679]/* drone_to_cc[4].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[679]/* drone_to_cc[4].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[678]/* drone_to_cc[4].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[678]/* drone_to_cc[4].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[677]/* drone_to_cc[4].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[677]/* drone_to_cc[4].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[676]/* drone_to_cc[4].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[676]/* drone_to_cc[4].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[675]/* drone_to_cc[4].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[675]/* drone_to_cc[4].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[674]/* drone_to_cc[4].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[674]/* drone_to_cc[4].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[673]/* drone_to_cc[4].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[673]/* drone_to_cc[4].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[672]/* drone_to_cc[4].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[672]/* drone_to_cc[4].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[671]/* drone_to_cc[4].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[671]/* drone_to_cc[4].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[670]/* drone_to_cc[4].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[670]/* drone_to_cc[4].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[669]/* drone_to_cc[4].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[669]/* drone_to_cc[4].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[668]/* drone_to_cc[4].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[668]/* drone_to_cc[4].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[667]/* drone_to_cc[4].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[667]/* drone_to_cc[4].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[666]/* drone_to_cc[4].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[666]/* drone_to_cc[4].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[665]/* drone_to_cc[4].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[665]/* drone_to_cc[4].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[664]/* drone_to_cc[4].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[664]/* drone_to_cc[4].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[663]/* drone_to_cc[4].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[663]/* drone_to_cc[4].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[662]/* drone_to_cc[4].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[662]/* drone_to_cc[4].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[661]/* drone_to_cc[4].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[661]/* drone_to_cc[4].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[660]/* drone_to_cc[4].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[660]/* drone_to_cc[4].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[659]/* drone_to_cc[4].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[659]/* drone_to_cc[4].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[658]/* drone_to_cc[4].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[658]/* drone_to_cc[4].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[657]/* drone_to_cc[4].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[657]/* drone_to_cc[4].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[656]/* drone_to_cc[4].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[656]/* drone_to_cc[4].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[655]/* drone_to_cc[4].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[655]/* drone_to_cc[4].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[654]/* drone_to_cc[4].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[654]/* drone_to_cc[4].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[653]/* drone_to_cc[4].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[653]/* drone_to_cc[4].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[652]/* drone_to_cc[4].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[652]/* drone_to_cc[4].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[651]/* drone_to_cc[4].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[651]/* drone_to_cc[4].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[650]/* drone_to_cc[4].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[650]/* drone_to_cc[4].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[649]/* drone_to_cc[4].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[649]/* drone_to_cc[4].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[648]/* drone_to_cc[4].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[648]/* drone_to_cc[4].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[647]/* drone_to_cc[4].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[647]/* drone_to_cc[4].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[646]/* drone_to_cc[4].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[646]/* drone_to_cc[4].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[645]/* drone_to_cc[4].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[645]/* drone_to_cc[4].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[155]/* drone_to_cc[4].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[155]/* drone_to_cc[4].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[714]/* drone_to_cc[4].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[714]/* drone_to_cc[4].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[713]/* drone_to_cc[4].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[713]/* drone_to_cc[4].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[712]/* drone_to_cc[4].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[712]/* drone_to_cc[4].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[711]/* drone_to_cc[4].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[711]/* drone_to_cc[4].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[710]/* drone_to_cc[4].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[710]/* drone_to_cc[4].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[143]/* drone_to_cc[4].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[143]/* drone_to_cc[4].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[22]/* $whenCondition3 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[22]/* $whenCondition3 DISCRETE */) ;

  (data->localData[0]->booleanVars[11]/* $whenCondition2 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[11]/* $whenCondition2 DISCRETE */) ;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[0]/* $whenCondition1 DISCRETE */) ;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[147]/* drone_to_cc[4].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[159]/* drone_to_cc[4].writesigint DISCRETE */) );

  tmp432 = GreaterEq((data->simulationInfo->integerVarsPre[49]/* drone_to_cc[4].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[11]/* $whenCondition2 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[147]/* drone_to_cc[4].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[159]/* drone_to_cc[4].writesigint DISCRETE */) )) && tmp432);

  tmp433 = Less((data->simulationInfo->integerVarsPre[49]/* drone_to_cc[4].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[22]/* $whenCondition3 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[147]/* drone_to_cc[4].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[159]/* drone_to_cc[4].writesigint DISCRETE */) ) && tmp433);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[143]/* drone_to_cc[4].datavailable DISCRETE */)  = 0;

      tmp434 = ((modelica_integer) 1); tmp435 = 1; tmp436 = ((modelica_integer) 5);
      if(!(((tmp435 > 0) && (tmp434 > tmp436)) || ((tmp435 < 0) && (tmp434 < tmp436))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp434, tmp436); j += tmp435)
        {
          (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[155]/* drone_to_cc[4].spaceavailable DISCRETE */)  = 1;

      tmp440 = ((modelica_integer) 1); tmp441 = 1; tmp442 = ((modelica_integer) 10);
      if(!(((tmp441 > 0) && (tmp440 > tmp442)) || ((tmp441 < 0) && (tmp440 < tmp442))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp440, tmp442); i += tmp441)
        {
          tmp437 = ((modelica_integer) 1); tmp438 = 1; tmp439 = ((modelica_integer) 5);
          if(!(((tmp438 > 0) && (tmp437 > tmp439)) || ((tmp438 < 0) && (tmp437 < tmp439))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp437, tmp439); j += tmp438)
            {
              (&(data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[49]/* drone_to_cc[4].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[57]/* drone_to_cc[4].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[53]/* drone_to_cc[4].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[0]/* $whenCondition1 DISCRETE */)  /* edge */))
    {
      tmp443 = Less((data->simulationInfo->integerVarsPre[49]/* drone_to_cc[4].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp443)
      {
        tmp444 = ((modelica_integer) 1); tmp445 = 1; tmp446 = ((modelica_integer) 5);
        if(!(((tmp445 > 0) && (tmp444 > tmp446)) || ((tmp445 < 0) && (tmp444 < tmp446))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp444, tmp446); j += tmp445)
          {
            (&(data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[53]/* drone_to_cc[4].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[129]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 4) - 1) * 5 + (j-1)] ;
          }
        }

        tmp447 = ((modelica_integer) 10);
        if (tmp447 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[4].newest), 10)");}
        (data->localData[0]->integerVars[53]/* drone_to_cc[4].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[53]/* drone_to_cc[4].newest DISCRETE */) , tmp447) + ((modelica_integer) 1);

        tmp448 = ((modelica_integer) 1); tmp449 = 1; tmp450 = ((modelica_integer) 5);
        if(!(((tmp449 > 0) && (tmp448 > tmp450)) || ((tmp449 < 0) && (tmp448 < tmp450))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp448, tmp450); j += tmp449)
          {
            (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[57]/* drone_to_cc[4].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp451 = ((modelica_integer) 10);
        if (tmp451 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[4].oldest), 10)");}
        (data->localData[0]->integerVars[57]/* drone_to_cc[4].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[57]/* drone_to_cc[4].oldest DISCRETE */) , tmp451) + ((modelica_integer) 1);
      }
      else
      {
        tmp452 = ((modelica_integer) 1); tmp453 = 1; tmp454 = ((modelica_integer) 5);
        if(!(((tmp453 > 0) && (tmp452 > tmp454)) || ((tmp453 < 0) && (tmp452 < tmp454))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp452, tmp454); j += tmp453)
          {
            (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[57]/* drone_to_cc[4].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp455 = ((modelica_integer) 10);
        if (tmp455 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[4].oldest), 10)");}
        (data->localData[0]->integerVars[57]/* drone_to_cc[4].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[57]/* drone_to_cc[4].oldest DISCRETE */) , tmp455) + ((modelica_integer) 1);

        tmp456 = ((modelica_integer) 1); tmp457 = 1; tmp458 = ((modelica_integer) 5);
        if(!(((tmp457 > 0) && (tmp456 > tmp458)) || ((tmp457 < 0) && (tmp456 < tmp458))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp456, tmp458); j += tmp457)
          {
            (&(data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[53]/* drone_to_cc[4].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[129]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 4) - 1) * 5 + (j-1)] ;
          }
        }

        tmp459 = ((modelica_integer) 10);
        if (tmp459 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[4].newest), 10)");}
        (data->localData[0]->integerVars[53]/* drone_to_cc[4].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[53]/* drone_to_cc[4].newest DISCRETE */) , tmp459) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[11]/* $whenCondition2 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[11]/* $whenCondition2 DISCRETE */)  /* edge */))
    {
      tmp460 = ((modelica_integer) 1); tmp461 = 1; tmp462 = ((modelica_integer) 5);
      if(!(((tmp461 > 0) && (tmp460 > tmp462)) || ((tmp461 < 0) && (tmp460 < tmp462))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp460, tmp462); j += tmp461)
        {
          (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[57]/* drone_to_cc[4].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp463 = ((modelica_integer) 10);
      if (tmp463 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[4].oldest), 10)");}
      (data->localData[0]->integerVars[57]/* drone_to_cc[4].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[57]/* drone_to_cc[4].oldest DISCRETE */) , tmp463) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[49]/* drone_to_cc[4].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[49]/* drone_to_cc[4].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp464 = GreaterEq((data->localData[0]->integerVars[49]/* drone_to_cc[4].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[143]/* drone_to_cc[4].datavailable DISCRETE */)  = tmp464;

      (data->localData[0]->booleanVars[155]/* drone_to_cc[4].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[22]/* $whenCondition3 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[22]/* $whenCondition3 DISCRETE */)  /* edge */))
    {
      tmp465 = ((modelica_integer) 1); tmp466 = 1; tmp467 = ((modelica_integer) 5);
      if(!(((tmp466 > 0) && (tmp465 > tmp467)) || ((tmp466 < 0) && (tmp465 < tmp467))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp465, tmp467); j += tmp466)
        {
          (&(data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[53]/* drone_to_cc[4].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[129]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 4) - 1) * 5 + (j-1)] ;
        }
      }

      tmp468 = ((modelica_integer) 10);
      if (tmp468 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[4].newest), 10)");}
      (data->localData[0]->integerVars[53]/* drone_to_cc[4].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[53]/* drone_to_cc[4].newest DISCRETE */) , tmp468) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[49]/* drone_to_cc[4].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[49]/* drone_to_cc[4].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[143]/* drone_to_cc[4].datavailable DISCRETE */)  = 1;

      tmp469 = Less((data->simulationInfo->integerVarsPre[49]/* drone_to_cc[4].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[155]/* drone_to_cc[4].spaceavailable DISCRETE */)  = tmp469;

      tmp470 = ((modelica_integer) 1); tmp471 = 1; tmp472 = ((modelica_integer) 5);
      if(!(((tmp471 > 0) && (tmp470 > tmp472)) || ((tmp471 < 0) && (tmp470 < tmp472))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp470, tmp472); j += tmp471)
        {
          (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[57]/* drone_to_cc[4].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 394
type: SIMPLE_ASSIGN
cc.msg_from_drone[4,5] = drone_to_cc[4].outputdata[5]
*/
void System_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  (data->localData[0]->realVars[70]/* cc.msg_from_drone[4,5] variable */)  = (data->localData[0]->realVars[714]/* drone_to_cc[4].outputdata[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 395
type: SIMPLE_ASSIGN
d[4].spaceavailable = drone_to_cc[4].spaceavailable
*/
void System_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  (data->localData[0]->booleanVars[135]/* d[4].spaceavailable DISCRETE */)  = (data->localData[0]->booleanVars[155]/* drone_to_cc[4].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 396
type: SIMPLE_ASSIGN
cc.msg_from_drone[4,2] = drone_to_cc[4].outputdata[2]
*/
void System_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  (data->localData[0]->realVars[67]/* cc.msg_from_drone[4,2] variable */)  = (data->localData[0]->realVars[711]/* drone_to_cc[4].outputdata[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 397
type: SIMPLE_ASSIGN
cc.msg_from_drone[4,3] = drone_to_cc[4].outputdata[3]
*/
void System_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  (data->localData[0]->realVars[68]/* cc.msg_from_drone[4,3] variable */)  = (data->localData[0]->realVars[712]/* drone_to_cc[4].outputdata[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 398
type: SIMPLE_ASSIGN
cc.datavailable[4] = drone_to_cc[4].datavailable
*/
void System_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  (data->localData[0]->booleanVars[54]/* cc.datavailable[4] DISCRETE */)  = (data->localData[0]->booleanVars[143]/* drone_to_cc[4].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 399
type: SIMPLE_ASSIGN
cc.msg_from_drone[4,4] = drone_to_cc[4].outputdata[4]
*/
void System_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  (data->localData[0]->realVars[69]/* cc.msg_from_drone[4,4] variable */)  = (data->localData[0]->realVars[713]/* drone_to_cc[4].outputdata[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 400
type: SIMPLE_ASSIGN
cc.msg_from_drone[4,1] = drone_to_cc[4].outputdata[1]
*/
void System_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  (data->localData[0]->realVars[66]/* cc.msg_from_drone[4,1] variable */)  = (data->localData[0]->realVars[710]/* drone_to_cc[4].outputdata[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 401
type: SIMPLE_ASSIGN
d[4].ctrl.sety = d[4].sety
*/
void System_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  (data->localData[0]->realVars[116]/* d[4].ctrl.sety variable */)  = (data->localData[0]->realVars[490]/* d[4].sety DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 402
type: SIMPLE_ASSIGN
d[4].batteryPercentage = 100.0 * d[4].d.battery / d[4].p.capacity
*/
void System_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  (data->localData[0]->realVars[96]/* d[4].batteryPercentage variable */)  = (100.0) * (DIVISION_SIM((data->localData[0]->realVars[462]/* d[4].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[1333]/* d[4].p.capacity PARAM */) ,"d[4].p.capacity",equationIndexes));
  TRACE_POP
}
/*
equation index: 403
type: SIMPLE_ASSIGN
d[4].ctrl.droneDead = d[4].d.droneDead
*/
void System_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  (data->localData[0]->booleanVars[119]/* d[4].ctrl.droneDead DISCRETE */)  = (data->localData[0]->booleanVars[123]/* d[4].d.droneDead DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 404
type: ALGORITHM

  d[3].ctrl.destZ := pre(d[3].ctrl.destZ);
  d[3].ctrl.destY := pre(d[3].ctrl.destY);
  d[3].ctrl.destX := pre(d[3].ctrl.destX);
  $whenCondition35 := pre($whenCondition35);
  $whenCondition34 := pre($whenCondition34);
  $whenCondition34 := sample(8, 0.0, d[3].ctrl.prm.Tdrone) and pre(d[3].ctrl.droneDead);
  $whenCondition35 := sample(8, 0.0, d[3].ctrl.prm.Tdrone);
  when $whenCondition34 then
    d[3].ctrl.destX := pre(d[3].ctrl.x);
    d[3].ctrl.destY := pre(d[3].ctrl.y);
    d[3].ctrl.destZ := 0.0;
  elsewhen $whenCondition35 then
    d[3].ctrl.destX := pre(d[3].ctrl.setx);
    d[3].ctrl.destY := pre(d[3].ctrl.sety);
    d[3].ctrl.destZ := pre(d[3].ctrl.setz);
  end when;
*/
void System_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  (data->localData[0]->realVars[457]/* d[3].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[457]/* d[3].ctrl.destZ DISCRETE */) ;

  (data->localData[0]->realVars[453]/* d[3].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[453]/* d[3].ctrl.destY DISCRETE */) ;

  (data->localData[0]->realVars[449]/* d[3].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[449]/* d[3].ctrl.destX DISCRETE */) ;

  (data->localData[0]->booleanVars[28]/* $whenCondition35 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[28]/* $whenCondition35 DISCRETE */) ;

  (data->localData[0]->booleanVars[27]/* $whenCondition34 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[27]/* $whenCondition34 DISCRETE */) ;

  (data->localData[0]->booleanVars[27]/* $whenCondition34 DISCRETE */)  = (data->simulationInfo->samples[7] && (data->simulationInfo->booleanVarsPre[118]/* d[3].ctrl.droneDead DISCRETE */) );

  (data->localData[0]->booleanVars[28]/* $whenCondition35 DISCRETE */)  = data->simulationInfo->samples[7];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[27]/* $whenCondition34 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[27]/* $whenCondition34 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[449]/* d[3].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[123]/* d[3].ctrl.x variable */) ;

      (data->localData[0]->realVars[453]/* d[3].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[127]/* d[3].ctrl.y variable */) ;

      (data->localData[0]->realVars[457]/* d[3].ctrl.destZ DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[28]/* $whenCondition35 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[28]/* $whenCondition35 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[449]/* d[3].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[111]/* d[3].ctrl.setx variable */) ;

      (data->localData[0]->realVars[453]/* d[3].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[115]/* d[3].ctrl.sety variable */) ;

      (data->localData[0]->realVars[457]/* d[3].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[119]/* d[3].ctrl.setz variable */) ;
    }
  }
  TRACE_POP
}
/*
equation index: 405
type: ALGORITHM

  d[3].d.droneDead := pre(d[3].d.droneDead);
  d[3].d.droneState := pre(d[3].d.droneState);
  d[3].d.battery := pre(d[3].d.battery);
  $whenCondition37 := pre($whenCondition37);
  $whenCondition36 := pre($whenCondition36);
  $whenCondition36 := abs(pre(d[3].d.battery)) < 0.01;
  $whenCondition37 := sample(7, 0.0, d[3].d.p.Tdrone) and pre(d[3].d.droneState) == 1;
  when false then
    d[3].d.battery := d[3].d.p.capacity;
    d[3].d.droneState := 1;
    d[3].d.droneDead := false;
  elsewhen $whenCondition36 then
    d[3].d.droneDead := true;
  elsewhen $whenCondition37 then
    if returnedHome(d[3].d.p, pre(d[3].d.x), pre(d[3].d.y), pre(d[3].d.z)) then
      d[3].d.battery := charging(d[3].d.p, pre(d[3].d.battery));
    else
      d[3].d.battery := batteryMonitor(pre(d[3].d.battery), d[3].d.p.batteryDischarge);
    end if;
  end when;
*/
void System_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  modelica_boolean tmp473;
  real_array tmp475;
  real_array tmp476;
  real_array tmp477;
  real_array tmp478;
  real_array tmp479;
  real_array tmp480;
  (data->localData[0]->booleanVars[122]/* d[3].d.droneDead DISCRETE */)  = (data->simulationInfo->booleanVarsPre[122]/* d[3].d.droneDead DISCRETE */) ;

  (data->localData[0]->integerVars[36]/* d[3].d.droneState DISCRETE */)  = (data->simulationInfo->integerVarsPre[36]/* d[3].d.droneState DISCRETE */) ;

  (data->localData[0]->realVars[461]/* d[3].d.battery DISCRETE */)  = (data->simulationInfo->realVarsPre[461]/* d[3].d.battery DISCRETE */) ;

  (data->localData[0]->booleanVars[30]/* $whenCondition37 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[30]/* $whenCondition37 DISCRETE */) ;

  (data->localData[0]->booleanVars[29]/* $whenCondition36 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[29]/* $whenCondition36 DISCRETE */) ;

  tmp473 = Less(fabs((data->simulationInfo->realVarsPre[461]/* d[3].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[29]/* $whenCondition36 DISCRETE */)  = tmp473;

  (data->localData[0]->booleanVars[30]/* $whenCondition37 DISCRETE */)  = (data->simulationInfo->samples[6] && ((data->simulationInfo->integerVarsPre[36]/* d[3].d.droneState DISCRETE */)  == ((modelica_integer) 1)));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[461]/* d[3].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[1000]/* d[3].d.p.capacity PARAM */) ;

      (data->localData[0]->integerVars[36]/* d[3].d.droneState DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->booleanVars[122]/* d[3].d.droneDead DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[29]/* $whenCondition36 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[29]/* $whenCondition36 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->booleanVars[122]/* d[3].d.droneDead DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[30]/* $whenCondition37 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[30]/* $whenCondition37 DISCRETE */)  /* edge */))
    {
      real_array_create(&tmp475, ((modelica_real*)&((&data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 3) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp476, ((modelica_real*)&((&data->simulationInfo->realParameter[1030]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 3) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp477, ((modelica_real*)&((&data->simulationInfo->realParameter[794]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 3) - 1) * 8 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
      if(omc_returnedHome(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[1104]/* d[3].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[42]/* d[3].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[46]/* d[3].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[788]/* d[3].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[784]/* d[3].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[792]/* d[3].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[1076]/* d[3].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[54]/* d[3].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[1004]/* d[3].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[1088]/* d[3].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[1084]/* d[3].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[1012]/* d[3].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[1080]/* d[3].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[992]/* d[3].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[1016]/* d[3].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[988]/* d[3].d.p.arrivalThreshold PARAM */) , tmp475, tmp476, (data->simulationInfo->realParameter[1060]/* d[3].d.p.m PARAM */) , (data->simulationInfo->realParameter[1068]/* d[3].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[1056]/* d[3].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[1112]/* d[3].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[1064]/* d[3].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[1072]/* d[3].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[1020]/* d[3].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[1108]/* d[3].d.p.unita PARAM */) , (data->simulationInfo->realParameter[1000]/* d[3].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[996]/* d[3].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[1008]/* d[3].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[1092]/* d[3].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[1028]/* d[3].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[1024]/* d[3].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[1096]/* d[3].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[1100]/* d[3].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[50]/* d[3].d.p.nAreas PARAM */) , tmp477), (data->simulationInfo->realVarsPre[14]/* d[3].d.x STATE(1,d[3].d.Vx) */) , (data->simulationInfo->realVarsPre[18]/* d[3].d.y STATE(1,d[3].d.Vy) */) , (data->simulationInfo->realVarsPre[22]/* d[3].d.z STATE(1,d[3].d.Vz) */) ))
      {
        real_array_create(&tmp478, ((modelica_real*)&((&data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 3) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp479, ((modelica_real*)&((&data->simulationInfo->realParameter[1030]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 3) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp480, ((modelica_real*)&((&data->simulationInfo->realParameter[794]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 3) - 1) * 8 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
        (data->localData[0]->realVars[461]/* d[3].d.battery DISCRETE */)  = omc_charging(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[1104]/* d[3].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[42]/* d[3].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[46]/* d[3].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[788]/* d[3].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[784]/* d[3].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[792]/* d[3].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[1076]/* d[3].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[54]/* d[3].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[1004]/* d[3].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[1088]/* d[3].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[1084]/* d[3].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[1012]/* d[3].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[1080]/* d[3].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[992]/* d[3].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[1016]/* d[3].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[988]/* d[3].d.p.arrivalThreshold PARAM */) , tmp478, tmp479, (data->simulationInfo->realParameter[1060]/* d[3].d.p.m PARAM */) , (data->simulationInfo->realParameter[1068]/* d[3].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[1056]/* d[3].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[1112]/* d[3].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[1064]/* d[3].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[1072]/* d[3].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[1020]/* d[3].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[1108]/* d[3].d.p.unita PARAM */) , (data->simulationInfo->realParameter[1000]/* d[3].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[996]/* d[3].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[1008]/* d[3].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[1092]/* d[3].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[1028]/* d[3].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[1024]/* d[3].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[1096]/* d[3].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[1100]/* d[3].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[50]/* d[3].d.p.nAreas PARAM */) , tmp480), (data->simulationInfo->realVarsPre[461]/* d[3].d.battery DISCRETE */) );
      }
      else
      {
        (data->localData[0]->realVars[461]/* d[3].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[461]/* d[3].d.battery DISCRETE */) , (data->simulationInfo->realParameter[996]/* d[3].d.p.batteryDischarge PARAM */) );
      }
    }
  }
  TRACE_POP
}
/*
equation index: 406
type: SIMPLE_ASSIGN
d[3].ctrl.droneDead = d[3].d.droneDead
*/
void System_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  (data->localData[0]->booleanVars[118]/* d[3].ctrl.droneDead DISCRETE */)  = (data->localData[0]->booleanVars[122]/* d[3].d.droneDead DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 407
type: ALGORITHM

  d[3].comm_state := pre(d[3].comm_state);
  d[3].fifox := pre(d[3].fifox);
  d[3].writesignal := pre(d[3].writesignal);
  d[3].readsignal := pre(d[3].readsignal);
  d[3].flag := pre(d[3].flag);
  d[3].setz := pre(d[3].setz);
  d[3].sety := pre(d[3].sety);
  d[3].setx := pre(d[3].setx);
  d[3].msg_to_cc[5] := pre(d[3].msg_to_cc[5]);
  d[3].msg_to_cc[4] := pre(d[3].msg_to_cc[4]);
  d[3].msg_to_cc[3] := pre(d[3].msg_to_cc[3]);
  d[3].msg_to_cc[2] := pre(d[3].msg_to_cc[2]);
  d[3].msg_to_cc[1] := pre(d[3].msg_to_cc[1]);
  $whenCondition33 := pre($whenCondition33);
  $whenCondition33 := sample(9, 0.0, d[3].p.Tdrone);
  when false then
    d[3].msg_to_cc := {0.0, 0.0, 0.0, 0.0, 0.0};
    d[3].setx := myrandom() * d[3].p.flyZone[1];
    d[3].sety := myrandom() * d[3].p.flyZone[2];
    d[3].setz := myrandom() * d[3].p.flyZone[3];
    d[3].flag := 0;
    d[3].readsignal := false;
    d[3].writesignal := false;
    d[3].fifox := 0;
    d[3].comm_state := 10;
  elsewhen $whenCondition33 then
    if pre(d[3].d.droneDead) then
      d[3].comm_state := 0;
    elseif pre(d[3].comm_state) == 10 then
      (d[3].readsignal, d[3].fifox) := ReadFromFIFO(pre(d[3].fifox), pre(d[3].datavailable), pre(d[3].readsignal));
      if FifoIODone(d[3].fifox) then
        d[3].flag := integer(cc_to_drone[3].outputdata[1]);
        if d[3].flag == 1 then
          d[3].msg_to_cc[1] := 2.0;
          d[3].msg_to_cc[2] := d[3].d.x;
          d[3].msg_to_cc[3] := d[3].d.y;
          d[3].msg_to_cc[4] := d[3].d.z;
          d[3].msg_to_cc[5] := d[3].d.battery;
          d[3].comm_state := 20;
        elseif d[3].flag == 2 then
          d[3].setx := cc_to_drone[3].outputdata[2];
          d[3].sety := cc_to_drone[3].outputdata[3];
          d[3].setz := cc_to_drone[3].outputdata[4];
          d[3].comm_state := pre(d[3].comm_state);
        end if;
        d[3].fifox := 0;
      end if;
    elseif pre(d[3].comm_state) == 20 then
      (d[3].writesignal, d[3].fifox) := WriteToFIFO(pre(d[3].fifox), pre(d[3].writesignal), pre(d[3].spaceavailable));
      if FifoIODone(d[3].fifox) then
        d[3].comm_state := 10;
        d[3].fifox := 0;
      end if;
    else
      d[3].comm_state := pre(d[3].comm_state);
    end if;
  end when;
*/
void System_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  real_array tmp481;
  real_array tmp482;
  (data->localData[0]->integerVars[32]/* d[3].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[32]/* d[3].comm_state DISCRETE */) ;

  (data->localData[0]->integerVars[40]/* d[3].fifox DISCRETE */)  = (data->simulationInfo->integerVarsPre[40]/* d[3].fifox DISCRETE */) ;

  (data->localData[0]->booleanVars[138]/* d[3].writesignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[138]/* d[3].writesignal DISCRETE */) ;

  (data->localData[0]->booleanVars[130]/* d[3].readsignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[130]/* d[3].readsignal DISCRETE */) ;

  (data->localData[0]->integerVars[44]/* d[3].flag DISCRETE */)  = (data->simulationInfo->integerVarsPre[44]/* d[3].flag DISCRETE */) ;

  (data->localData[0]->realVars[493]/* d[3].setz DISCRETE */)  = (data->simulationInfo->realVarsPre[493]/* d[3].setz DISCRETE */) ;

  (data->localData[0]->realVars[489]/* d[3].sety DISCRETE */)  = (data->simulationInfo->realVarsPre[489]/* d[3].sety DISCRETE */) ;

  (data->localData[0]->realVars[485]/* d[3].setx DISCRETE */)  = (data->simulationInfo->realVarsPre[485]/* d[3].setx DISCRETE */) ;

  (data->localData[0]->realVars[477]/* d[3].msg_to_cc[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[477]/* d[3].msg_to_cc[5] DISCRETE */) ;

  (data->localData[0]->realVars[476]/* d[3].msg_to_cc[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[476]/* d[3].msg_to_cc[4] DISCRETE */) ;

  (data->localData[0]->realVars[475]/* d[3].msg_to_cc[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[475]/* d[3].msg_to_cc[3] DISCRETE */) ;

  (data->localData[0]->realVars[474]/* d[3].msg_to_cc[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[474]/* d[3].msg_to_cc[2] DISCRETE */) ;

  (data->localData[0]->realVars[473]/* d[3].msg_to_cc[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[473]/* d[3].msg_to_cc[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[26]/* $whenCondition33 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[26]/* $whenCondition33 DISCRETE */) ;

  (data->localData[0]->booleanVars[26]/* $whenCondition33 DISCRETE */)  = data->simulationInfo->samples[8];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      array_alloc_scalar_real_array(&tmp481, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp482, ((modelica_real*)&((&(data->localData[0]->realVars[463]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
      real_array_copy_data(tmp481, tmp482);

      (data->localData[0]->realVars[485]/* d[3].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1380]/* d[3].p.flyZone[1] PARAM */) );

      (data->localData[0]->realVars[489]/* d[3].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1381]/* d[3].p.flyZone[2] PARAM */) );

      (data->localData[0]->realVars[493]/* d[3].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1382]/* d[3].p.flyZone[3] PARAM */) );

      (data->localData[0]->integerVars[44]/* d[3].flag DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->booleanVars[130]/* d[3].readsignal DISCRETE */)  = 0;

      (data->localData[0]->booleanVars[138]/* d[3].writesignal DISCRETE */)  = 0;

      (data->localData[0]->integerVars[40]/* d[3].fifox DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[32]/* d[3].comm_state DISCRETE */)  = ((modelica_integer) 10);
    }
    else if(((data->localData[0]->booleanVars[26]/* $whenCondition33 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[26]/* $whenCondition33 DISCRETE */)  /* edge */))
    {
      if((data->simulationInfo->booleanVarsPre[122]/* d[3].d.droneDead DISCRETE */) )
      {
        (data->localData[0]->integerVars[32]/* d[3].comm_state DISCRETE */)  = ((modelica_integer) 0);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[32]/* d[3].comm_state DISCRETE */)  == ((modelica_integer) 10)))
        {
          (data->localData[0]->booleanVars[130]/* d[3].readsignal DISCRETE */)  = omc_ReadFromFIFO(threadData, (data->simulationInfo->integerVarsPre[40]/* d[3].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[126]/* d[3].datavailable DISCRETE */) , (data->simulationInfo->booleanVarsPre[130]/* d[3].readsignal DISCRETE */)  ,&(data->localData[0]->integerVars[40]/* d[3].fifox DISCRETE */) );

          if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[40]/* d[3].fifox DISCRETE */) ))
          {
            (data->localData[0]->integerVars[44]/* d[3].flag DISCRETE */)  = ((modelica_integer)floor((data->localData[0]->realVars[437]/* cc_to_drone[3].outputdata[1] DISCRETE */) ));

            if(((data->localData[0]->integerVars[44]/* d[3].flag DISCRETE */)  == ((modelica_integer) 1)))
            {
              (data->localData[0]->realVars[473]/* d[3].msg_to_cc[1] DISCRETE */)  = 2.0;

              (data->localData[0]->realVars[474]/* d[3].msg_to_cc[2] DISCRETE */)  = (data->localData[0]->realVars[14]/* d[3].d.x STATE(1,d[3].d.Vx) */) ;

              (data->localData[0]->realVars[475]/* d[3].msg_to_cc[3] DISCRETE */)  = (data->localData[0]->realVars[18]/* d[3].d.y STATE(1,d[3].d.Vy) */) ;

              (data->localData[0]->realVars[476]/* d[3].msg_to_cc[4] DISCRETE */)  = (data->localData[0]->realVars[22]/* d[3].d.z STATE(1,d[3].d.Vz) */) ;

              (data->localData[0]->realVars[477]/* d[3].msg_to_cc[5] DISCRETE */)  = (data->localData[0]->realVars[461]/* d[3].d.battery DISCRETE */) ;

              (data->localData[0]->integerVars[32]/* d[3].comm_state DISCRETE */)  = ((modelica_integer) 20);
            }
            else
            {
              if(((data->localData[0]->integerVars[44]/* d[3].flag DISCRETE */)  == ((modelica_integer) 2)))
              {
                (data->localData[0]->realVars[485]/* d[3].setx DISCRETE */)  = (data->localData[0]->realVars[438]/* cc_to_drone[3].outputdata[2] DISCRETE */) ;

                (data->localData[0]->realVars[489]/* d[3].sety DISCRETE */)  = (data->localData[0]->realVars[439]/* cc_to_drone[3].outputdata[3] DISCRETE */) ;

                (data->localData[0]->realVars[493]/* d[3].setz DISCRETE */)  = (data->localData[0]->realVars[440]/* cc_to_drone[3].outputdata[4] DISCRETE */) ;

                (data->localData[0]->integerVars[32]/* d[3].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[32]/* d[3].comm_state DISCRETE */) ;
              }
            }

            (data->localData[0]->integerVars[40]/* d[3].fifox DISCRETE */)  = ((modelica_integer) 0);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[32]/* d[3].comm_state DISCRETE */)  == ((modelica_integer) 20)))
          {
            (data->localData[0]->booleanVars[138]/* d[3].writesignal DISCRETE */)  = omc_WriteToFIFO(threadData, (data->simulationInfo->integerVarsPre[40]/* d[3].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[138]/* d[3].writesignal DISCRETE */) , (data->simulationInfo->booleanVarsPre[134]/* d[3].spaceavailable DISCRETE */)  ,&(data->localData[0]->integerVars[40]/* d[3].fifox DISCRETE */) );

            if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[40]/* d[3].fifox DISCRETE */) ))
            {
              (data->localData[0]->integerVars[32]/* d[3].comm_state DISCRETE */)  = ((modelica_integer) 10);

              (data->localData[0]->integerVars[40]/* d[3].fifox DISCRETE */)  = ((modelica_integer) 0);
            }
          }
          else
          {
            (data->localData[0]->integerVars[32]/* d[3].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[32]/* d[3].comm_state DISCRETE */) ;
          }
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 408
type: SIMPLE_ASSIGN
d[3].ctrl.setz = d[3].setz
*/
void System_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  (data->localData[0]->realVars[119]/* d[3].ctrl.setz variable */)  = (data->localData[0]->realVars[493]/* d[3].setz DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 409
type: SIMPLE_ASSIGN
cc_to_drone[3].readsignal = d[3].readsignal
*/
void System_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  (data->localData[0]->booleanVars[102]/* cc_to_drone[3].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[130]/* d[3].readsignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 410
type: SIMPLE_ASSIGN
cc_to_drone[3].readsigint = not pre(cc_to_drone[3].readsignal) == cc_to_drone[3].readsignal
*/
void System_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  (data->localData[0]->booleanVars[98]/* cc_to_drone[3].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[102]/* cc_to_drone[3].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[102]/* cc_to_drone[3].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[102]/* cc_to_drone[3].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[102]/* cc_to_drone[3].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 411
type: SIMPLE_ASSIGN
drone_to_cc[3].writesignal = d[3].writesignal
*/
void System_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  (data->localData[0]->booleanVars[162]/* drone_to_cc[3].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[138]/* d[3].writesignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 412
type: SIMPLE_ASSIGN
drone_to_cc[3].writesigint = not pre(drone_to_cc[3].writesignal) == drone_to_cc[3].writesignal
*/
void System_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  (data->localData[0]->booleanVars[158]/* drone_to_cc[3].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[162]/* drone_to_cc[3].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[162]/* drone_to_cc[3].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[162]/* drone_to_cc[3].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[162]/* drone_to_cc[3].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 413
type: SIMPLE_ASSIGN
d[3].ctrl.sety = d[3].sety
*/
void System_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  (data->localData[0]->realVars[115]/* d[3].ctrl.sety variable */)  = (data->localData[0]->realVars[489]/* d[3].sety DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 414
type: SIMPLE_ASSIGN
drone_to_cc[3].inputdata[5] = d[3].msg_to_cc[5]
*/
void System_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  (data->localData[0]->realVars[143]/* drone_to_cc[3].inputdata[5] variable */)  = (data->localData[0]->realVars[477]/* d[3].msg_to_cc[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 415
type: SIMPLE_ASSIGN
drone_to_cc[3].inputdata[1] = d[3].msg_to_cc[1]
*/
void System_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  (data->localData[0]->realVars[139]/* drone_to_cc[3].inputdata[1] variable */)  = (data->localData[0]->realVars[473]/* d[3].msg_to_cc[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 416
type: SIMPLE_ASSIGN
drone_to_cc[3].inputdata[4] = d[3].msg_to_cc[4]
*/
void System_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  (data->localData[0]->realVars[142]/* drone_to_cc[3].inputdata[4] variable */)  = (data->localData[0]->realVars[476]/* d[3].msg_to_cc[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 417
type: SIMPLE_ASSIGN
drone_to_cc[3].inputdata[3] = d[3].msg_to_cc[3]
*/
void System_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  (data->localData[0]->realVars[141]/* drone_to_cc[3].inputdata[3] variable */)  = (data->localData[0]->realVars[475]/* d[3].msg_to_cc[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 418
type: SIMPLE_ASSIGN
d[3].ctrl.setx = d[3].setx
*/
void System_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  (data->localData[0]->realVars[111]/* d[3].ctrl.setx variable */)  = (data->localData[0]->realVars[485]/* d[3].setx DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 419
type: SIMPLE_ASSIGN
drone_to_cc[3].inputdata[2] = d[3].msg_to_cc[2]
*/
void System_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  (data->localData[0]->realVars[140]/* drone_to_cc[3].inputdata[2] variable */)  = (data->localData[0]->realVars[474]/* d[3].msg_to_cc[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 420
type: ALGORITHM

  drone_to_cc[3].newest := pre(drone_to_cc[3].newest);
  drone_to_cc[3].oldest := pre(drone_to_cc[3].oldest);
  drone_to_cc[3].fifosize := pre(drone_to_cc[3].fifosize);
  drone_to_cc[3].fifo[10,5] := pre(drone_to_cc[3].fifo[10,5]);
  drone_to_cc[3].fifo[10,4] := pre(drone_to_cc[3].fifo[10,4]);
  drone_to_cc[3].fifo[10,3] := pre(drone_to_cc[3].fifo[10,3]);
  drone_to_cc[3].fifo[10,2] := pre(drone_to_cc[3].fifo[10,2]);
  drone_to_cc[3].fifo[10,1] := pre(drone_to_cc[3].fifo[10,1]);
  drone_to_cc[3].fifo[9,5] := pre(drone_to_cc[3].fifo[9,5]);
  drone_to_cc[3].fifo[9,4] := pre(drone_to_cc[3].fifo[9,4]);
  drone_to_cc[3].fifo[9,3] := pre(drone_to_cc[3].fifo[9,3]);
  drone_to_cc[3].fifo[9,2] := pre(drone_to_cc[3].fifo[9,2]);
  drone_to_cc[3].fifo[9,1] := pre(drone_to_cc[3].fifo[9,1]);
  drone_to_cc[3].fifo[8,5] := pre(drone_to_cc[3].fifo[8,5]);
  drone_to_cc[3].fifo[8,4] := pre(drone_to_cc[3].fifo[8,4]);
  drone_to_cc[3].fifo[8,3] := pre(drone_to_cc[3].fifo[8,3]);
  drone_to_cc[3].fifo[8,2] := pre(drone_to_cc[3].fifo[8,2]);
  drone_to_cc[3].fifo[8,1] := pre(drone_to_cc[3].fifo[8,1]);
  drone_to_cc[3].fifo[7,5] := pre(drone_to_cc[3].fifo[7,5]);
  drone_to_cc[3].fifo[7,4] := pre(drone_to_cc[3].fifo[7,4]);
  drone_to_cc[3].fifo[7,3] := pre(drone_to_cc[3].fifo[7,3]);
  drone_to_cc[3].fifo[7,2] := pre(drone_to_cc[3].fifo[7,2]);
  drone_to_cc[3].fifo[7,1] := pre(drone_to_cc[3].fifo[7,1]);
  drone_to_cc[3].fifo[6,5] := pre(drone_to_cc[3].fifo[6,5]);
  drone_to_cc[3].fifo[6,4] := pre(drone_to_cc[3].fifo[6,4]);
  drone_to_cc[3].fifo[6,3] := pre(drone_to_cc[3].fifo[6,3]);
  drone_to_cc[3].fifo[6,2] := pre(drone_to_cc[3].fifo[6,2]);
  drone_to_cc[3].fifo[6,1] := pre(drone_to_cc[3].fifo[6,1]);
  drone_to_cc[3].fifo[5,5] := pre(drone_to_cc[3].fifo[5,5]);
  drone_to_cc[3].fifo[5,4] := pre(drone_to_cc[3].fifo[5,4]);
  drone_to_cc[3].fifo[5,3] := pre(drone_to_cc[3].fifo[5,3]);
  drone_to_cc[3].fifo[5,2] := pre(drone_to_cc[3].fifo[5,2]);
  drone_to_cc[3].fifo[5,1] := pre(drone_to_cc[3].fifo[5,1]);
  drone_to_cc[3].fifo[4,5] := pre(drone_to_cc[3].fifo[4,5]);
  drone_to_cc[3].fifo[4,4] := pre(drone_to_cc[3].fifo[4,4]);
  drone_to_cc[3].fifo[4,3] := pre(drone_to_cc[3].fifo[4,3]);
  drone_to_cc[3].fifo[4,2] := pre(drone_to_cc[3].fifo[4,2]);
  drone_to_cc[3].fifo[4,1] := pre(drone_to_cc[3].fifo[4,1]);
  drone_to_cc[3].fifo[3,5] := pre(drone_to_cc[3].fifo[3,5]);
  drone_to_cc[3].fifo[3,4] := pre(drone_to_cc[3].fifo[3,4]);
  drone_to_cc[3].fifo[3,3] := pre(drone_to_cc[3].fifo[3,3]);
  drone_to_cc[3].fifo[3,2] := pre(drone_to_cc[3].fifo[3,2]);
  drone_to_cc[3].fifo[3,1] := pre(drone_to_cc[3].fifo[3,1]);
  drone_to_cc[3].fifo[2,5] := pre(drone_to_cc[3].fifo[2,5]);
  drone_to_cc[3].fifo[2,4] := pre(drone_to_cc[3].fifo[2,4]);
  drone_to_cc[3].fifo[2,3] := pre(drone_to_cc[3].fifo[2,3]);
  drone_to_cc[3].fifo[2,2] := pre(drone_to_cc[3].fifo[2,2]);
  drone_to_cc[3].fifo[2,1] := pre(drone_to_cc[3].fifo[2,1]);
  drone_to_cc[3].fifo[1,5] := pre(drone_to_cc[3].fifo[1,5]);
  drone_to_cc[3].fifo[1,4] := pre(drone_to_cc[3].fifo[1,4]);
  drone_to_cc[3].fifo[1,3] := pre(drone_to_cc[3].fifo[1,3]);
  drone_to_cc[3].fifo[1,2] := pre(drone_to_cc[3].fifo[1,2]);
  drone_to_cc[3].fifo[1,1] := pre(drone_to_cc[3].fifo[1,1]);
  drone_to_cc[3].spaceavailable := pre(drone_to_cc[3].spaceavailable);
  drone_to_cc[3].outputdata[5] := pre(drone_to_cc[3].outputdata[5]);
  drone_to_cc[3].outputdata[4] := pre(drone_to_cc[3].outputdata[4]);
  drone_to_cc[3].outputdata[3] := pre(drone_to_cc[3].outputdata[3]);
  drone_to_cc[3].outputdata[2] := pre(drone_to_cc[3].outputdata[2]);
  drone_to_cc[3].outputdata[1] := pre(drone_to_cc[3].outputdata[1]);
  drone_to_cc[3].datavailable := pre(drone_to_cc[3].datavailable);
  $whenCondition6 := pre($whenCondition6);
  $whenCondition5 := pre($whenCondition5);
  $whenCondition4 := pre($whenCondition4);
  $whenCondition4 := pre(drone_to_cc[3].readsigint) and pre(drone_to_cc[3].writesigint);
  $whenCondition5 := pre(drone_to_cc[3].readsigint) and not pre(drone_to_cc[3].writesigint) and pre(drone_to_cc[3].fifosize) >= 1;
  $whenCondition6 := not pre(drone_to_cc[3].readsigint) and pre(drone_to_cc[3].writesigint) and pre(drone_to_cc[3].fifosize) < 10;
  when false then
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
  elsewhen $whenCondition4 then
    if pre(drone_to_cc[3].fifosize) < 10 then
      for j in 1:5 loop
        drone_to_cc[3].fifo[pre(drone_to_cc[3].newest),j] := drone_to_cc[3].inputdata[j];
      end for;
      drone_to_cc[3].newest := mod(pre(drone_to_cc[3].newest), 10) + 1;
      for j in 1:5 loop
        drone_to_cc[3].outputdata[j] := drone_to_cc[3].fifo[pre(drone_to_cc[3].oldest),j];
      end for;
      drone_to_cc[3].oldest := mod(pre(drone_to_cc[3].oldest), 10) + 1;
    else
      for j in 1:5 loop
        drone_to_cc[3].outputdata[j] := drone_to_cc[3].fifo[pre(drone_to_cc[3].oldest),j];
      end for;
      drone_to_cc[3].oldest := mod(pre(drone_to_cc[3].oldest), 10) + 1;
      for j in 1:5 loop
        drone_to_cc[3].fifo[pre(drone_to_cc[3].newest),j] := drone_to_cc[3].inputdata[j];
      end for;
      drone_to_cc[3].newest := mod(pre(drone_to_cc[3].newest), 10) + 1;
    end if;
  elsewhen $whenCondition5 then
    for j in 1:5 loop
      drone_to_cc[3].outputdata[j] := drone_to_cc[3].fifo[pre(drone_to_cc[3].oldest),j];
    end for;
    drone_to_cc[3].oldest := mod(pre(drone_to_cc[3].oldest), 10) + 1;
    drone_to_cc[3].fifosize := pre(drone_to_cc[3].fifosize) - 1;
    drone_to_cc[3].datavailable := drone_to_cc[3].fifosize >= 1;
    drone_to_cc[3].spaceavailable := true;
  elsewhen $whenCondition6 then
    for j in 1:5 loop
      drone_to_cc[3].fifo[pre(drone_to_cc[3].newest),j] := drone_to_cc[3].inputdata[j];
    end for;
    drone_to_cc[3].newest := mod(pre(drone_to_cc[3].newest), 10) + 1;
    drone_to_cc[3].fifosize := pre(drone_to_cc[3].fifosize) + 1;
    drone_to_cc[3].datavailable := true;
    drone_to_cc[3].spaceavailable := pre(drone_to_cc[3].fifosize) < 10;
    for j in 1:5 loop
      drone_to_cc[3].outputdata[j] := drone_to_cc[3].fifo[pre(drone_to_cc[3].oldest),j];
    end for;
  end when;
*/
void System_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  modelica_boolean tmp489;
  modelica_boolean tmp490;
  modelica_integer tmp491;
  modelica_integer tmp492;
  modelica_integer tmp493;
  modelica_integer tmp494;
  modelica_integer tmp495;
  modelica_integer tmp496;
  modelica_integer tmp497;
  modelica_integer tmp498;
  modelica_integer tmp499;
  modelica_boolean tmp500;
  modelica_integer tmp501;
  modelica_integer tmp502;
  modelica_integer tmp503;
  modelica_integer tmp504;
  modelica_integer tmp505;
  modelica_integer tmp506;
  modelica_integer tmp507;
  modelica_integer tmp508;
  modelica_integer tmp509;
  modelica_integer tmp510;
  modelica_integer tmp511;
  modelica_integer tmp512;
  modelica_integer tmp513;
  modelica_integer tmp514;
  modelica_integer tmp515;
  modelica_integer tmp516;
  modelica_integer tmp517;
  modelica_integer tmp518;
  modelica_integer tmp519;
  modelica_integer tmp520;
  modelica_boolean tmp521;
  modelica_integer tmp522;
  modelica_integer tmp523;
  modelica_integer tmp524;
  modelica_integer tmp525;
  modelica_boolean tmp526;
  modelica_integer tmp527;
  modelica_integer tmp528;
  modelica_integer tmp529;
  (data->localData[0]->integerVars[52]/* drone_to_cc[3].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[52]/* drone_to_cc[3].newest DISCRETE */) ;

  (data->localData[0]->integerVars[56]/* drone_to_cc[3].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[56]/* drone_to_cc[3].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[48]/* drone_to_cc[3].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[48]/* drone_to_cc[3].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[644]/* drone_to_cc[3].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[644]/* drone_to_cc[3].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[643]/* drone_to_cc[3].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[643]/* drone_to_cc[3].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[642]/* drone_to_cc[3].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[642]/* drone_to_cc[3].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[641]/* drone_to_cc[3].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[641]/* drone_to_cc[3].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[640]/* drone_to_cc[3].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[640]/* drone_to_cc[3].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[639]/* drone_to_cc[3].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[639]/* drone_to_cc[3].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[638]/* drone_to_cc[3].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[638]/* drone_to_cc[3].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[637]/* drone_to_cc[3].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[637]/* drone_to_cc[3].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[636]/* drone_to_cc[3].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[636]/* drone_to_cc[3].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[635]/* drone_to_cc[3].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[635]/* drone_to_cc[3].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[634]/* drone_to_cc[3].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[634]/* drone_to_cc[3].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[633]/* drone_to_cc[3].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[633]/* drone_to_cc[3].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[632]/* drone_to_cc[3].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[632]/* drone_to_cc[3].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[631]/* drone_to_cc[3].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[631]/* drone_to_cc[3].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[630]/* drone_to_cc[3].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[630]/* drone_to_cc[3].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[629]/* drone_to_cc[3].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[629]/* drone_to_cc[3].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[628]/* drone_to_cc[3].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[628]/* drone_to_cc[3].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[627]/* drone_to_cc[3].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[627]/* drone_to_cc[3].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[626]/* drone_to_cc[3].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[626]/* drone_to_cc[3].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[625]/* drone_to_cc[3].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[625]/* drone_to_cc[3].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[624]/* drone_to_cc[3].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[624]/* drone_to_cc[3].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[623]/* drone_to_cc[3].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[623]/* drone_to_cc[3].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[622]/* drone_to_cc[3].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[622]/* drone_to_cc[3].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[621]/* drone_to_cc[3].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[621]/* drone_to_cc[3].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[620]/* drone_to_cc[3].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[620]/* drone_to_cc[3].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[619]/* drone_to_cc[3].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[619]/* drone_to_cc[3].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[618]/* drone_to_cc[3].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[618]/* drone_to_cc[3].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[617]/* drone_to_cc[3].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[617]/* drone_to_cc[3].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[616]/* drone_to_cc[3].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[616]/* drone_to_cc[3].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[615]/* drone_to_cc[3].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[615]/* drone_to_cc[3].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[614]/* drone_to_cc[3].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[614]/* drone_to_cc[3].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[613]/* drone_to_cc[3].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[613]/* drone_to_cc[3].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[612]/* drone_to_cc[3].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[612]/* drone_to_cc[3].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[611]/* drone_to_cc[3].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[611]/* drone_to_cc[3].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[610]/* drone_to_cc[3].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[610]/* drone_to_cc[3].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[609]/* drone_to_cc[3].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[609]/* drone_to_cc[3].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[608]/* drone_to_cc[3].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[608]/* drone_to_cc[3].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[607]/* drone_to_cc[3].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[607]/* drone_to_cc[3].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[606]/* drone_to_cc[3].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[606]/* drone_to_cc[3].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[605]/* drone_to_cc[3].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[605]/* drone_to_cc[3].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[604]/* drone_to_cc[3].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[604]/* drone_to_cc[3].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[603]/* drone_to_cc[3].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[603]/* drone_to_cc[3].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[602]/* drone_to_cc[3].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[602]/* drone_to_cc[3].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[601]/* drone_to_cc[3].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[601]/* drone_to_cc[3].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[600]/* drone_to_cc[3].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[600]/* drone_to_cc[3].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[599]/* drone_to_cc[3].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[599]/* drone_to_cc[3].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[598]/* drone_to_cc[3].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[598]/* drone_to_cc[3].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[597]/* drone_to_cc[3].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[597]/* drone_to_cc[3].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[596]/* drone_to_cc[3].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[596]/* drone_to_cc[3].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[595]/* drone_to_cc[3].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[595]/* drone_to_cc[3].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[154]/* drone_to_cc[3].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[154]/* drone_to_cc[3].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[709]/* drone_to_cc[3].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[709]/* drone_to_cc[3].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[708]/* drone_to_cc[3].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[708]/* drone_to_cc[3].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[707]/* drone_to_cc[3].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[707]/* drone_to_cc[3].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[706]/* drone_to_cc[3].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[706]/* drone_to_cc[3].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[705]/* drone_to_cc[3].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[705]/* drone_to_cc[3].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[142]/* drone_to_cc[3].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[142]/* drone_to_cc[3].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[43]/* $whenCondition6 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[43]/* $whenCondition6 DISCRETE */) ;

  (data->localData[0]->booleanVars[42]/* $whenCondition5 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[42]/* $whenCondition5 DISCRETE */) ;

  (data->localData[0]->booleanVars[33]/* $whenCondition4 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[33]/* $whenCondition4 DISCRETE */) ;

  (data->localData[0]->booleanVars[33]/* $whenCondition4 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[146]/* drone_to_cc[3].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[158]/* drone_to_cc[3].writesigint DISCRETE */) );

  tmp489 = GreaterEq((data->simulationInfo->integerVarsPre[48]/* drone_to_cc[3].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[42]/* $whenCondition5 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[146]/* drone_to_cc[3].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[158]/* drone_to_cc[3].writesigint DISCRETE */) )) && tmp489);

  tmp490 = Less((data->simulationInfo->integerVarsPre[48]/* drone_to_cc[3].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[43]/* $whenCondition6 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[146]/* drone_to_cc[3].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[158]/* drone_to_cc[3].writesigint DISCRETE */) ) && tmp490);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[142]/* drone_to_cc[3].datavailable DISCRETE */)  = 0;

      tmp491 = ((modelica_integer) 1); tmp492 = 1; tmp493 = ((modelica_integer) 5);
      if(!(((tmp492 > 0) && (tmp491 > tmp493)) || ((tmp492 < 0) && (tmp491 < tmp493))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp491, tmp493); j += tmp492)
        {
          (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[154]/* drone_to_cc[3].spaceavailable DISCRETE */)  = 1;

      tmp497 = ((modelica_integer) 1); tmp498 = 1; tmp499 = ((modelica_integer) 10);
      if(!(((tmp498 > 0) && (tmp497 > tmp499)) || ((tmp498 < 0) && (tmp497 < tmp499))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp497, tmp499); i += tmp498)
        {
          tmp494 = ((modelica_integer) 1); tmp495 = 1; tmp496 = ((modelica_integer) 5);
          if(!(((tmp495 > 0) && (tmp494 > tmp496)) || ((tmp495 < 0) && (tmp494 < tmp496))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp494, tmp496); j += tmp495)
            {
              (&(data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[48]/* drone_to_cc[3].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[56]/* drone_to_cc[3].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[52]/* drone_to_cc[3].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[33]/* $whenCondition4 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[33]/* $whenCondition4 DISCRETE */)  /* edge */))
    {
      tmp500 = Less((data->simulationInfo->integerVarsPre[48]/* drone_to_cc[3].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp500)
      {
        tmp501 = ((modelica_integer) 1); tmp502 = 1; tmp503 = ((modelica_integer) 5);
        if(!(((tmp502 > 0) && (tmp501 > tmp503)) || ((tmp502 < 0) && (tmp501 < tmp503))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp501, tmp503); j += tmp502)
          {
            (&(data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[52]/* drone_to_cc[3].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[129]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 3) - 1) * 5 + (j-1)] ;
          }
        }

        tmp504 = ((modelica_integer) 10);
        if (tmp504 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[3].newest), 10)");}
        (data->localData[0]->integerVars[52]/* drone_to_cc[3].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[52]/* drone_to_cc[3].newest DISCRETE */) , tmp504) + ((modelica_integer) 1);

        tmp505 = ((modelica_integer) 1); tmp506 = 1; tmp507 = ((modelica_integer) 5);
        if(!(((tmp506 > 0) && (tmp505 > tmp507)) || ((tmp506 < 0) && (tmp505 < tmp507))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp505, tmp507); j += tmp506)
          {
            (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[56]/* drone_to_cc[3].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp508 = ((modelica_integer) 10);
        if (tmp508 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[3].oldest), 10)");}
        (data->localData[0]->integerVars[56]/* drone_to_cc[3].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[56]/* drone_to_cc[3].oldest DISCRETE */) , tmp508) + ((modelica_integer) 1);
      }
      else
      {
        tmp509 = ((modelica_integer) 1); tmp510 = 1; tmp511 = ((modelica_integer) 5);
        if(!(((tmp510 > 0) && (tmp509 > tmp511)) || ((tmp510 < 0) && (tmp509 < tmp511))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp509, tmp511); j += tmp510)
          {
            (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[56]/* drone_to_cc[3].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp512 = ((modelica_integer) 10);
        if (tmp512 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[3].oldest), 10)");}
        (data->localData[0]->integerVars[56]/* drone_to_cc[3].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[56]/* drone_to_cc[3].oldest DISCRETE */) , tmp512) + ((modelica_integer) 1);

        tmp513 = ((modelica_integer) 1); tmp514 = 1; tmp515 = ((modelica_integer) 5);
        if(!(((tmp514 > 0) && (tmp513 > tmp515)) || ((tmp514 < 0) && (tmp513 < tmp515))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp513, tmp515); j += tmp514)
          {
            (&(data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[52]/* drone_to_cc[3].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[129]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 3) - 1) * 5 + (j-1)] ;
          }
        }

        tmp516 = ((modelica_integer) 10);
        if (tmp516 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[3].newest), 10)");}
        (data->localData[0]->integerVars[52]/* drone_to_cc[3].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[52]/* drone_to_cc[3].newest DISCRETE */) , tmp516) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[42]/* $whenCondition5 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[42]/* $whenCondition5 DISCRETE */)  /* edge */))
    {
      tmp517 = ((modelica_integer) 1); tmp518 = 1; tmp519 = ((modelica_integer) 5);
      if(!(((tmp518 > 0) && (tmp517 > tmp519)) || ((tmp518 < 0) && (tmp517 < tmp519))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp517, tmp519); j += tmp518)
        {
          (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[56]/* drone_to_cc[3].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp520 = ((modelica_integer) 10);
      if (tmp520 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[3].oldest), 10)");}
      (data->localData[0]->integerVars[56]/* drone_to_cc[3].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[56]/* drone_to_cc[3].oldest DISCRETE */) , tmp520) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[48]/* drone_to_cc[3].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[48]/* drone_to_cc[3].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp521 = GreaterEq((data->localData[0]->integerVars[48]/* drone_to_cc[3].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[142]/* drone_to_cc[3].datavailable DISCRETE */)  = tmp521;

      (data->localData[0]->booleanVars[154]/* drone_to_cc[3].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[43]/* $whenCondition6 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[43]/* $whenCondition6 DISCRETE */)  /* edge */))
    {
      tmp522 = ((modelica_integer) 1); tmp523 = 1; tmp524 = ((modelica_integer) 5);
      if(!(((tmp523 > 0) && (tmp522 > tmp524)) || ((tmp523 < 0) && (tmp522 < tmp524))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp522, tmp524); j += tmp523)
        {
          (&(data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[52]/* drone_to_cc[3].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[129]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 3) - 1) * 5 + (j-1)] ;
        }
      }

      tmp525 = ((modelica_integer) 10);
      if (tmp525 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[3].newest), 10)");}
      (data->localData[0]->integerVars[52]/* drone_to_cc[3].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[52]/* drone_to_cc[3].newest DISCRETE */) , tmp525) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[48]/* drone_to_cc[3].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[48]/* drone_to_cc[3].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[142]/* drone_to_cc[3].datavailable DISCRETE */)  = 1;

      tmp526 = Less((data->simulationInfo->integerVarsPre[48]/* drone_to_cc[3].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[154]/* drone_to_cc[3].spaceavailable DISCRETE */)  = tmp526;

      tmp527 = ((modelica_integer) 1); tmp528 = 1; tmp529 = ((modelica_integer) 5);
      if(!(((tmp528 > 0) && (tmp527 > tmp529)) || ((tmp528 < 0) && (tmp527 < tmp529))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp527, tmp529); j += tmp528)
        {
          (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[56]/* drone_to_cc[3].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 421
type: SIMPLE_ASSIGN
cc.msg_from_drone[3,4] = drone_to_cc[3].outputdata[4]
*/
void System_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  (data->localData[0]->realVars[64]/* cc.msg_from_drone[3,4] variable */)  = (data->localData[0]->realVars[708]/* drone_to_cc[3].outputdata[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 422
type: SIMPLE_ASSIGN
d[3].spaceavailable = drone_to_cc[3].spaceavailable
*/
void System_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  (data->localData[0]->booleanVars[134]/* d[3].spaceavailable DISCRETE */)  = (data->localData[0]->booleanVars[154]/* drone_to_cc[3].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 423
type: SIMPLE_ASSIGN
cc.datavailable[3] = drone_to_cc[3].datavailable
*/
void System_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  (data->localData[0]->booleanVars[53]/* cc.datavailable[3] DISCRETE */)  = (data->localData[0]->booleanVars[142]/* drone_to_cc[3].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 424
type: SIMPLE_ASSIGN
cc.msg_from_drone[3,3] = drone_to_cc[3].outputdata[3]
*/
void System_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  (data->localData[0]->realVars[63]/* cc.msg_from_drone[3,3] variable */)  = (data->localData[0]->realVars[707]/* drone_to_cc[3].outputdata[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 425
type: SIMPLE_ASSIGN
cc.msg_from_drone[3,2] = drone_to_cc[3].outputdata[2]
*/
void System_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  (data->localData[0]->realVars[62]/* cc.msg_from_drone[3,2] variable */)  = (data->localData[0]->realVars[706]/* drone_to_cc[3].outputdata[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 426
type: SIMPLE_ASSIGN
cc.msg_from_drone[3,1] = drone_to_cc[3].outputdata[1]
*/
void System_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  (data->localData[0]->realVars[61]/* cc.msg_from_drone[3,1] variable */)  = (data->localData[0]->realVars[705]/* drone_to_cc[3].outputdata[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 427
type: SIMPLE_ASSIGN
cc.msg_from_drone[3,5] = drone_to_cc[3].outputdata[5]
*/
void System_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  (data->localData[0]->realVars[65]/* cc.msg_from_drone[3,5] variable */)  = (data->localData[0]->realVars[709]/* drone_to_cc[3].outputdata[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 428
type: SIMPLE_ASSIGN
d[3].batteryPercentage = 100.0 * d[3].d.battery / d[3].p.capacity
*/
void System_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  (data->localData[0]->realVars[95]/* d[3].batteryPercentage variable */)  = (100.0) * (DIVISION_SIM((data->localData[0]->realVars[461]/* d[3].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[1332]/* d[3].p.capacity PARAM */) ,"d[3].p.capacity",equationIndexes));
  TRACE_POP
}
/*
equation index: 429
type: ALGORITHM

  d[2].ctrl.destZ := pre(d[2].ctrl.destZ);
  d[2].ctrl.destY := pre(d[2].ctrl.destY);
  d[2].ctrl.destX := pre(d[2].ctrl.destX);
  $whenCondition40 := pre($whenCondition40);
  $whenCondition39 := pre($whenCondition39);
  $whenCondition39 := sample(5, 0.0, d[2].ctrl.prm.Tdrone) and pre(d[2].ctrl.droneDead);
  $whenCondition40 := sample(5, 0.0, d[2].ctrl.prm.Tdrone);
  when $whenCondition39 then
    d[2].ctrl.destX := pre(d[2].ctrl.x);
    d[2].ctrl.destY := pre(d[2].ctrl.y);
    d[2].ctrl.destZ := 0.0;
  elsewhen $whenCondition40 then
    d[2].ctrl.destX := pre(d[2].ctrl.setx);
    d[2].ctrl.destY := pre(d[2].ctrl.sety);
    d[2].ctrl.destZ := pre(d[2].ctrl.setz);
  end when;
*/
void System_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  (data->localData[0]->realVars[456]/* d[2].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[456]/* d[2].ctrl.destZ DISCRETE */) ;

  (data->localData[0]->realVars[452]/* d[2].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[452]/* d[2].ctrl.destY DISCRETE */) ;

  (data->localData[0]->realVars[448]/* d[2].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[448]/* d[2].ctrl.destX DISCRETE */) ;

  (data->localData[0]->booleanVars[34]/* $whenCondition40 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[34]/* $whenCondition40 DISCRETE */) ;

  (data->localData[0]->booleanVars[32]/* $whenCondition39 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[32]/* $whenCondition39 DISCRETE */) ;

  (data->localData[0]->booleanVars[32]/* $whenCondition39 DISCRETE */)  = (data->simulationInfo->samples[4] && (data->simulationInfo->booleanVarsPre[117]/* d[2].ctrl.droneDead DISCRETE */) );

  (data->localData[0]->booleanVars[34]/* $whenCondition40 DISCRETE */)  = data->simulationInfo->samples[4];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[32]/* $whenCondition39 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[32]/* $whenCondition39 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[448]/* d[2].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[122]/* d[2].ctrl.x variable */) ;

      (data->localData[0]->realVars[452]/* d[2].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[126]/* d[2].ctrl.y variable */) ;

      (data->localData[0]->realVars[456]/* d[2].ctrl.destZ DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[34]/* $whenCondition40 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[34]/* $whenCondition40 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[448]/* d[2].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[110]/* d[2].ctrl.setx variable */) ;

      (data->localData[0]->realVars[452]/* d[2].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[114]/* d[2].ctrl.sety variable */) ;

      (data->localData[0]->realVars[456]/* d[2].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[118]/* d[2].ctrl.setz variable */) ;
    }
  }
  TRACE_POP
}
/*
equation index: 430
type: ALGORITHM

  d[2].d.droneDead := pre(d[2].d.droneDead);
  d[2].d.droneState := pre(d[2].d.droneState);
  d[2].d.battery := pre(d[2].d.battery);
  $whenCondition42 := pre($whenCondition42);
  $whenCondition41 := pre($whenCondition41);
  $whenCondition41 := abs(pre(d[2].d.battery)) < 0.01;
  $whenCondition42 := sample(4, 0.0, d[2].d.p.Tdrone) and pre(d[2].d.droneState) == 1;
  when false then
    d[2].d.battery := d[2].d.p.capacity;
    d[2].d.droneState := 1;
    d[2].d.droneDead := false;
  elsewhen $whenCondition41 then
    d[2].d.droneDead := true;
  elsewhen $whenCondition42 then
    if returnedHome(d[2].d.p, pre(d[2].d.x), pre(d[2].d.y), pre(d[2].d.z)) then
      d[2].d.battery := charging(d[2].d.p, pre(d[2].d.battery));
    else
      d[2].d.battery := batteryMonitor(pre(d[2].d.battery), d[2].d.p.batteryDischarge);
    end if;
  end when;
*/
void System_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  modelica_boolean tmp530;
  real_array tmp532;
  real_array tmp533;
  real_array tmp534;
  real_array tmp535;
  real_array tmp536;
  real_array tmp537;
  (data->localData[0]->booleanVars[121]/* d[2].d.droneDead DISCRETE */)  = (data->simulationInfo->booleanVarsPre[121]/* d[2].d.droneDead DISCRETE */) ;

  (data->localData[0]->integerVars[35]/* d[2].d.droneState DISCRETE */)  = (data->simulationInfo->integerVarsPre[35]/* d[2].d.droneState DISCRETE */) ;

  (data->localData[0]->realVars[460]/* d[2].d.battery DISCRETE */)  = (data->simulationInfo->realVarsPre[460]/* d[2].d.battery DISCRETE */) ;

  (data->localData[0]->booleanVars[36]/* $whenCondition42 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[36]/* $whenCondition42 DISCRETE */) ;

  (data->localData[0]->booleanVars[35]/* $whenCondition41 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[35]/* $whenCondition41 DISCRETE */) ;

  tmp530 = Less(fabs((data->simulationInfo->realVarsPre[460]/* d[2].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[35]/* $whenCondition41 DISCRETE */)  = tmp530;

  (data->localData[0]->booleanVars[36]/* $whenCondition42 DISCRETE */)  = (data->simulationInfo->samples[3] && ((data->simulationInfo->integerVarsPre[35]/* d[2].d.droneState DISCRETE */)  == ((modelica_integer) 1)));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[460]/* d[2].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[999]/* d[2].d.p.capacity PARAM */) ;

      (data->localData[0]->integerVars[35]/* d[2].d.droneState DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->booleanVars[121]/* d[2].d.droneDead DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[35]/* $whenCondition41 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[35]/* $whenCondition41 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->booleanVars[121]/* d[2].d.droneDead DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[36]/* $whenCondition42 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[36]/* $whenCondition42 DISCRETE */)  /* edge */))
    {
      real_array_create(&tmp532, ((modelica_real*)&((&data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 2) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp533, ((modelica_real*)&((&data->simulationInfo->realParameter[1030]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 2) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp534, ((modelica_real*)&((&data->simulationInfo->realParameter[794]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 2) - 1) * 8 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
      if(omc_returnedHome(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[1103]/* d[2].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[41]/* d[2].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[45]/* d[2].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[787]/* d[2].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[783]/* d[2].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[791]/* d[2].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[1075]/* d[2].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[53]/* d[2].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[1003]/* d[2].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[1087]/* d[2].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[1083]/* d[2].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[1011]/* d[2].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[1079]/* d[2].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[991]/* d[2].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[1015]/* d[2].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[987]/* d[2].d.p.arrivalThreshold PARAM */) , tmp532, tmp533, (data->simulationInfo->realParameter[1059]/* d[2].d.p.m PARAM */) , (data->simulationInfo->realParameter[1067]/* d[2].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[1055]/* d[2].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[1111]/* d[2].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[1063]/* d[2].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[1071]/* d[2].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[1019]/* d[2].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[1107]/* d[2].d.p.unita PARAM */) , (data->simulationInfo->realParameter[999]/* d[2].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[995]/* d[2].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[1007]/* d[2].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[1091]/* d[2].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[1027]/* d[2].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[1023]/* d[2].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[1095]/* d[2].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[1099]/* d[2].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[49]/* d[2].d.p.nAreas PARAM */) , tmp534), (data->simulationInfo->realVarsPre[13]/* d[2].d.x STATE(1,d[2].d.Vx) */) , (data->simulationInfo->realVarsPre[17]/* d[2].d.y STATE(1,d[2].d.Vy) */) , (data->simulationInfo->realVarsPre[21]/* d[2].d.z STATE(1,d[2].d.Vz) */) ))
      {
        real_array_create(&tmp535, ((modelica_real*)&((&data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 2) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp536, ((modelica_real*)&((&data->simulationInfo->realParameter[1030]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 2) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp537, ((modelica_real*)&((&data->simulationInfo->realParameter[794]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 2) - 1) * 8 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
        (data->localData[0]->realVars[460]/* d[2].d.battery DISCRETE */)  = omc_charging(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[1103]/* d[2].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[41]/* d[2].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[45]/* d[2].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[787]/* d[2].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[783]/* d[2].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[791]/* d[2].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[1075]/* d[2].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[53]/* d[2].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[1003]/* d[2].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[1087]/* d[2].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[1083]/* d[2].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[1011]/* d[2].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[1079]/* d[2].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[991]/* d[2].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[1015]/* d[2].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[987]/* d[2].d.p.arrivalThreshold PARAM */) , tmp535, tmp536, (data->simulationInfo->realParameter[1059]/* d[2].d.p.m PARAM */) , (data->simulationInfo->realParameter[1067]/* d[2].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[1055]/* d[2].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[1111]/* d[2].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[1063]/* d[2].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[1071]/* d[2].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[1019]/* d[2].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[1107]/* d[2].d.p.unita PARAM */) , (data->simulationInfo->realParameter[999]/* d[2].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[995]/* d[2].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[1007]/* d[2].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[1091]/* d[2].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[1027]/* d[2].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[1023]/* d[2].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[1095]/* d[2].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[1099]/* d[2].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[49]/* d[2].d.p.nAreas PARAM */) , tmp537), (data->simulationInfo->realVarsPre[460]/* d[2].d.battery DISCRETE */) );
      }
      else
      {
        (data->localData[0]->realVars[460]/* d[2].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[460]/* d[2].d.battery DISCRETE */) , (data->simulationInfo->realParameter[995]/* d[2].d.p.batteryDischarge PARAM */) );
      }
    }
  }
  TRACE_POP
}
/*
equation index: 431
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
  $whenCondition38 := pre($whenCondition38);
  $whenCondition38 := sample(6, 0.0, d[2].p.Tdrone);
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
  elsewhen $whenCondition38 then
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
void System_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  real_array tmp538;
  real_array tmp539;
  (data->localData[0]->integerVars[31]/* d[2].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[31]/* d[2].comm_state DISCRETE */) ;

  (data->localData[0]->integerVars[39]/* d[2].fifox DISCRETE */)  = (data->simulationInfo->integerVarsPre[39]/* d[2].fifox DISCRETE */) ;

  (data->localData[0]->booleanVars[137]/* d[2].writesignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[137]/* d[2].writesignal DISCRETE */) ;

  (data->localData[0]->booleanVars[129]/* d[2].readsignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[129]/* d[2].readsignal DISCRETE */) ;

  (data->localData[0]->integerVars[43]/* d[2].flag DISCRETE */)  = (data->simulationInfo->integerVarsPre[43]/* d[2].flag DISCRETE */) ;

  (data->localData[0]->realVars[492]/* d[2].setz DISCRETE */)  = (data->simulationInfo->realVarsPre[492]/* d[2].setz DISCRETE */) ;

  (data->localData[0]->realVars[488]/* d[2].sety DISCRETE */)  = (data->simulationInfo->realVarsPre[488]/* d[2].sety DISCRETE */) ;

  (data->localData[0]->realVars[484]/* d[2].setx DISCRETE */)  = (data->simulationInfo->realVarsPre[484]/* d[2].setx DISCRETE */) ;

  (data->localData[0]->realVars[472]/* d[2].msg_to_cc[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[472]/* d[2].msg_to_cc[5] DISCRETE */) ;

  (data->localData[0]->realVars[471]/* d[2].msg_to_cc[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[471]/* d[2].msg_to_cc[4] DISCRETE */) ;

  (data->localData[0]->realVars[470]/* d[2].msg_to_cc[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[470]/* d[2].msg_to_cc[3] DISCRETE */) ;

  (data->localData[0]->realVars[469]/* d[2].msg_to_cc[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[469]/* d[2].msg_to_cc[2] DISCRETE */) ;

  (data->localData[0]->realVars[468]/* d[2].msg_to_cc[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[468]/* d[2].msg_to_cc[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[31]/* $whenCondition38 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[31]/* $whenCondition38 DISCRETE */) ;

  (data->localData[0]->booleanVars[31]/* $whenCondition38 DISCRETE */)  = data->simulationInfo->samples[5];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      array_alloc_scalar_real_array(&tmp538, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp539, ((modelica_real*)&((&(data->localData[0]->realVars[463]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
      real_array_copy_data(tmp538, tmp539);

      (data->localData[0]->realVars[484]/* d[2].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1377]/* d[2].p.flyZone[1] PARAM */) );

      (data->localData[0]->realVars[488]/* d[2].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1378]/* d[2].p.flyZone[2] PARAM */) );

      (data->localData[0]->realVars[492]/* d[2].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1379]/* d[2].p.flyZone[3] PARAM */) );

      (data->localData[0]->integerVars[43]/* d[2].flag DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->booleanVars[129]/* d[2].readsignal DISCRETE */)  = 0;

      (data->localData[0]->booleanVars[137]/* d[2].writesignal DISCRETE */)  = 0;

      (data->localData[0]->integerVars[39]/* d[2].fifox DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[31]/* d[2].comm_state DISCRETE */)  = ((modelica_integer) 10);
    }
    else if(((data->localData[0]->booleanVars[31]/* $whenCondition38 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[31]/* $whenCondition38 DISCRETE */)  /* edge */))
    {
      if((data->simulationInfo->booleanVarsPre[121]/* d[2].d.droneDead DISCRETE */) )
      {
        (data->localData[0]->integerVars[31]/* d[2].comm_state DISCRETE */)  = ((modelica_integer) 0);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[31]/* d[2].comm_state DISCRETE */)  == ((modelica_integer) 10)))
        {
          (data->localData[0]->booleanVars[129]/* d[2].readsignal DISCRETE */)  = omc_ReadFromFIFO(threadData, (data->simulationInfo->integerVarsPre[39]/* d[2].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[125]/* d[2].datavailable DISCRETE */) , (data->simulationInfo->booleanVarsPre[129]/* d[2].readsignal DISCRETE */)  ,&(data->localData[0]->integerVars[39]/* d[2].fifox DISCRETE */) );

          if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[39]/* d[2].fifox DISCRETE */) ))
          {
            (data->localData[0]->integerVars[43]/* d[2].flag DISCRETE */)  = ((modelica_integer)floor((data->localData[0]->realVars[432]/* cc_to_drone[2].outputdata[1] DISCRETE */) ));

            if(((data->localData[0]->integerVars[43]/* d[2].flag DISCRETE */)  == ((modelica_integer) 1)))
            {
              (data->localData[0]->realVars[468]/* d[2].msg_to_cc[1] DISCRETE */)  = 2.0;

              (data->localData[0]->realVars[469]/* d[2].msg_to_cc[2] DISCRETE */)  = (data->localData[0]->realVars[13]/* d[2].d.x STATE(1,d[2].d.Vx) */) ;

              (data->localData[0]->realVars[470]/* d[2].msg_to_cc[3] DISCRETE */)  = (data->localData[0]->realVars[17]/* d[2].d.y STATE(1,d[2].d.Vy) */) ;

              (data->localData[0]->realVars[471]/* d[2].msg_to_cc[4] DISCRETE */)  = (data->localData[0]->realVars[21]/* d[2].d.z STATE(1,d[2].d.Vz) */) ;

              (data->localData[0]->realVars[472]/* d[2].msg_to_cc[5] DISCRETE */)  = (data->localData[0]->realVars[460]/* d[2].d.battery DISCRETE */) ;

              (data->localData[0]->integerVars[31]/* d[2].comm_state DISCRETE */)  = ((modelica_integer) 20);
            }
            else
            {
              if(((data->localData[0]->integerVars[43]/* d[2].flag DISCRETE */)  == ((modelica_integer) 2)))
              {
                (data->localData[0]->realVars[484]/* d[2].setx DISCRETE */)  = (data->localData[0]->realVars[433]/* cc_to_drone[2].outputdata[2] DISCRETE */) ;

                (data->localData[0]->realVars[488]/* d[2].sety DISCRETE */)  = (data->localData[0]->realVars[434]/* cc_to_drone[2].outputdata[3] DISCRETE */) ;

                (data->localData[0]->realVars[492]/* d[2].setz DISCRETE */)  = (data->localData[0]->realVars[435]/* cc_to_drone[2].outputdata[4] DISCRETE */) ;

                (data->localData[0]->integerVars[31]/* d[2].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[31]/* d[2].comm_state DISCRETE */) ;
              }
            }

            (data->localData[0]->integerVars[39]/* d[2].fifox DISCRETE */)  = ((modelica_integer) 0);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[31]/* d[2].comm_state DISCRETE */)  == ((modelica_integer) 20)))
          {
            (data->localData[0]->booleanVars[137]/* d[2].writesignal DISCRETE */)  = omc_WriteToFIFO(threadData, (data->simulationInfo->integerVarsPre[39]/* d[2].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[137]/* d[2].writesignal DISCRETE */) , (data->simulationInfo->booleanVarsPre[133]/* d[2].spaceavailable DISCRETE */)  ,&(data->localData[0]->integerVars[39]/* d[2].fifox DISCRETE */) );

            if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[39]/* d[2].fifox DISCRETE */) ))
            {
              (data->localData[0]->integerVars[31]/* d[2].comm_state DISCRETE */)  = ((modelica_integer) 10);

              (data->localData[0]->integerVars[39]/* d[2].fifox DISCRETE */)  = ((modelica_integer) 0);
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
equation index: 432
type: SIMPLE_ASSIGN
d[2].ctrl.sety = d[2].sety
*/
void System_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  (data->localData[0]->realVars[114]/* d[2].ctrl.sety variable */)  = (data->localData[0]->realVars[488]/* d[2].sety DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 433
type: SIMPLE_ASSIGN
drone_to_cc[2].inputdata[5] = d[2].msg_to_cc[5]
*/
void System_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  (data->localData[0]->realVars[138]/* drone_to_cc[2].inputdata[5] variable */)  = (data->localData[0]->realVars[472]/* d[2].msg_to_cc[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 434
type: SIMPLE_ASSIGN
d[2].ctrl.setz = d[2].setz
*/
void System_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  (data->localData[0]->realVars[118]/* d[2].ctrl.setz variable */)  = (data->localData[0]->realVars[492]/* d[2].setz DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 435
type: SIMPLE_ASSIGN
drone_to_cc[2].writesignal = d[2].writesignal
*/
void System_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  (data->localData[0]->booleanVars[161]/* drone_to_cc[2].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[137]/* d[2].writesignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 436
type: SIMPLE_ASSIGN
drone_to_cc[2].writesigint = not pre(drone_to_cc[2].writesignal) == drone_to_cc[2].writesignal
*/
void System_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  (data->localData[0]->booleanVars[157]/* drone_to_cc[2].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[161]/* drone_to_cc[2].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[161]/* drone_to_cc[2].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[161]/* drone_to_cc[2].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[161]/* drone_to_cc[2].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 437
type: SIMPLE_ASSIGN
drone_to_cc[2].inputdata[3] = d[2].msg_to_cc[3]
*/
void System_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  (data->localData[0]->realVars[136]/* drone_to_cc[2].inputdata[3] variable */)  = (data->localData[0]->realVars[470]/* d[2].msg_to_cc[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 438
type: SIMPLE_ASSIGN
drone_to_cc[2].inputdata[2] = d[2].msg_to_cc[2]
*/
void System_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  (data->localData[0]->realVars[135]/* drone_to_cc[2].inputdata[2] variable */)  = (data->localData[0]->realVars[469]/* d[2].msg_to_cc[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 439
type: SIMPLE_ASSIGN
cc_to_drone[2].readsignal = d[2].readsignal
*/
void System_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  (data->localData[0]->booleanVars[101]/* cc_to_drone[2].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[129]/* d[2].readsignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 440
type: SIMPLE_ASSIGN
cc_to_drone[2].readsigint = not pre(cc_to_drone[2].readsignal) == cc_to_drone[2].readsignal
*/
void System_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  (data->localData[0]->booleanVars[97]/* cc_to_drone[2].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[101]/* cc_to_drone[2].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[101]/* cc_to_drone[2].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[101]/* cc_to_drone[2].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[101]/* cc_to_drone[2].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 441
type: SIMPLE_ASSIGN
drone_to_cc[2].inputdata[4] = d[2].msg_to_cc[4]
*/
void System_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  (data->localData[0]->realVars[137]/* drone_to_cc[2].inputdata[4] variable */)  = (data->localData[0]->realVars[471]/* d[2].msg_to_cc[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 442
type: SIMPLE_ASSIGN
d[2].ctrl.setx = d[2].setx
*/
void System_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  (data->localData[0]->realVars[110]/* d[2].ctrl.setx variable */)  = (data->localData[0]->realVars[484]/* d[2].setx DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 443
type: SIMPLE_ASSIGN
drone_to_cc[2].inputdata[1] = d[2].msg_to_cc[1]
*/
void System_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  (data->localData[0]->realVars[134]/* drone_to_cc[2].inputdata[1] variable */)  = (data->localData[0]->realVars[468]/* d[2].msg_to_cc[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 444
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
  $whenCondition9 := pre($whenCondition9);
  $whenCondition8 := pre($whenCondition8);
  $whenCondition7 := pre($whenCondition7);
  $whenCondition7 := pre(drone_to_cc[2].readsigint) and pre(drone_to_cc[2].writesigint);
  $whenCondition8 := pre(drone_to_cc[2].readsigint) and not pre(drone_to_cc[2].writesigint) and pre(drone_to_cc[2].fifosize) >= 1;
  $whenCondition9 := not pre(drone_to_cc[2].readsigint) and pre(drone_to_cc[2].writesigint) and pre(drone_to_cc[2].fifosize) < 10;
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
  elsewhen $whenCondition7 then
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
  elsewhen $whenCondition8 then
    for j in 1:5 loop
      drone_to_cc[2].outputdata[j] := drone_to_cc[2].fifo[pre(drone_to_cc[2].oldest),j];
    end for;
    drone_to_cc[2].oldest := mod(pre(drone_to_cc[2].oldest), 10) + 1;
    drone_to_cc[2].fifosize := pre(drone_to_cc[2].fifosize) - 1;
    drone_to_cc[2].datavailable := drone_to_cc[2].fifosize >= 1;
    drone_to_cc[2].spaceavailable := true;
  elsewhen $whenCondition9 then
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
void System_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  modelica_boolean tmp546;
  modelica_boolean tmp547;
  modelica_integer tmp548;
  modelica_integer tmp549;
  modelica_integer tmp550;
  modelica_integer tmp551;
  modelica_integer tmp552;
  modelica_integer tmp553;
  modelica_integer tmp554;
  modelica_integer tmp555;
  modelica_integer tmp556;
  modelica_boolean tmp557;
  modelica_integer tmp558;
  modelica_integer tmp559;
  modelica_integer tmp560;
  modelica_integer tmp561;
  modelica_integer tmp562;
  modelica_integer tmp563;
  modelica_integer tmp564;
  modelica_integer tmp565;
  modelica_integer tmp566;
  modelica_integer tmp567;
  modelica_integer tmp568;
  modelica_integer tmp569;
  modelica_integer tmp570;
  modelica_integer tmp571;
  modelica_integer tmp572;
  modelica_integer tmp573;
  modelica_integer tmp574;
  modelica_integer tmp575;
  modelica_integer tmp576;
  modelica_integer tmp577;
  modelica_boolean tmp578;
  modelica_integer tmp579;
  modelica_integer tmp580;
  modelica_integer tmp581;
  modelica_integer tmp582;
  modelica_boolean tmp583;
  modelica_integer tmp584;
  modelica_integer tmp585;
  modelica_integer tmp586;
  (data->localData[0]->integerVars[51]/* drone_to_cc[2].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[51]/* drone_to_cc[2].newest DISCRETE */) ;

  (data->localData[0]->integerVars[55]/* drone_to_cc[2].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[55]/* drone_to_cc[2].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[47]/* drone_to_cc[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[47]/* drone_to_cc[2].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[594]/* drone_to_cc[2].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[594]/* drone_to_cc[2].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[593]/* drone_to_cc[2].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[593]/* drone_to_cc[2].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[592]/* drone_to_cc[2].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[592]/* drone_to_cc[2].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[591]/* drone_to_cc[2].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[591]/* drone_to_cc[2].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[590]/* drone_to_cc[2].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[590]/* drone_to_cc[2].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[589]/* drone_to_cc[2].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[589]/* drone_to_cc[2].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[588]/* drone_to_cc[2].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[588]/* drone_to_cc[2].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[587]/* drone_to_cc[2].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[587]/* drone_to_cc[2].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[586]/* drone_to_cc[2].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[586]/* drone_to_cc[2].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[585]/* drone_to_cc[2].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[585]/* drone_to_cc[2].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[584]/* drone_to_cc[2].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[584]/* drone_to_cc[2].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[583]/* drone_to_cc[2].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[583]/* drone_to_cc[2].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[582]/* drone_to_cc[2].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[582]/* drone_to_cc[2].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[581]/* drone_to_cc[2].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[581]/* drone_to_cc[2].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[580]/* drone_to_cc[2].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[580]/* drone_to_cc[2].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[579]/* drone_to_cc[2].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[579]/* drone_to_cc[2].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[578]/* drone_to_cc[2].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[578]/* drone_to_cc[2].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[577]/* drone_to_cc[2].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[577]/* drone_to_cc[2].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[576]/* drone_to_cc[2].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[576]/* drone_to_cc[2].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[575]/* drone_to_cc[2].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[575]/* drone_to_cc[2].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[574]/* drone_to_cc[2].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[574]/* drone_to_cc[2].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[573]/* drone_to_cc[2].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[573]/* drone_to_cc[2].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[572]/* drone_to_cc[2].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[572]/* drone_to_cc[2].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[571]/* drone_to_cc[2].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[571]/* drone_to_cc[2].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[570]/* drone_to_cc[2].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[570]/* drone_to_cc[2].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[569]/* drone_to_cc[2].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[569]/* drone_to_cc[2].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[568]/* drone_to_cc[2].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[568]/* drone_to_cc[2].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[567]/* drone_to_cc[2].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[567]/* drone_to_cc[2].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[566]/* drone_to_cc[2].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[566]/* drone_to_cc[2].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[565]/* drone_to_cc[2].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[565]/* drone_to_cc[2].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[564]/* drone_to_cc[2].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[564]/* drone_to_cc[2].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[563]/* drone_to_cc[2].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[563]/* drone_to_cc[2].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[562]/* drone_to_cc[2].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[562]/* drone_to_cc[2].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[561]/* drone_to_cc[2].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[561]/* drone_to_cc[2].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[560]/* drone_to_cc[2].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[560]/* drone_to_cc[2].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[559]/* drone_to_cc[2].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[559]/* drone_to_cc[2].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[558]/* drone_to_cc[2].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[558]/* drone_to_cc[2].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[557]/* drone_to_cc[2].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[557]/* drone_to_cc[2].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[556]/* drone_to_cc[2].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[556]/* drone_to_cc[2].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[555]/* drone_to_cc[2].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[555]/* drone_to_cc[2].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[554]/* drone_to_cc[2].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[554]/* drone_to_cc[2].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[553]/* drone_to_cc[2].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[553]/* drone_to_cc[2].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[552]/* drone_to_cc[2].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[552]/* drone_to_cc[2].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[551]/* drone_to_cc[2].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[551]/* drone_to_cc[2].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[550]/* drone_to_cc[2].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[550]/* drone_to_cc[2].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[549]/* drone_to_cc[2].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[549]/* drone_to_cc[2].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[548]/* drone_to_cc[2].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[548]/* drone_to_cc[2].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[547]/* drone_to_cc[2].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[547]/* drone_to_cc[2].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[546]/* drone_to_cc[2].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[546]/* drone_to_cc[2].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[545]/* drone_to_cc[2].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[545]/* drone_to_cc[2].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[153]/* drone_to_cc[2].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[153]/* drone_to_cc[2].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[704]/* drone_to_cc[2].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[704]/* drone_to_cc[2].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[703]/* drone_to_cc[2].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[703]/* drone_to_cc[2].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[702]/* drone_to_cc[2].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[702]/* drone_to_cc[2].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[701]/* drone_to_cc[2].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[701]/* drone_to_cc[2].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[700]/* drone_to_cc[2].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[700]/* drone_to_cc[2].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[141]/* drone_to_cc[2].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[141]/* drone_to_cc[2].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[46]/* $whenCondition9 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[46]/* $whenCondition9 DISCRETE */) ;

  (data->localData[0]->booleanVars[45]/* $whenCondition8 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[45]/* $whenCondition8 DISCRETE */) ;

  (data->localData[0]->booleanVars[44]/* $whenCondition7 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[44]/* $whenCondition7 DISCRETE */) ;

  (data->localData[0]->booleanVars[44]/* $whenCondition7 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[145]/* drone_to_cc[2].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[157]/* drone_to_cc[2].writesigint DISCRETE */) );

  tmp546 = GreaterEq((data->simulationInfo->integerVarsPre[47]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[45]/* $whenCondition8 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[145]/* drone_to_cc[2].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[157]/* drone_to_cc[2].writesigint DISCRETE */) )) && tmp546);

  tmp547 = Less((data->simulationInfo->integerVarsPre[47]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[46]/* $whenCondition9 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[145]/* drone_to_cc[2].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[157]/* drone_to_cc[2].writesigint DISCRETE */) ) && tmp547);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[141]/* drone_to_cc[2].datavailable DISCRETE */)  = 0;

      tmp548 = ((modelica_integer) 1); tmp549 = 1; tmp550 = ((modelica_integer) 5);
      if(!(((tmp549 > 0) && (tmp548 > tmp550)) || ((tmp549 < 0) && (tmp548 < tmp550))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp548, tmp550); j += tmp549)
        {
          (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[153]/* drone_to_cc[2].spaceavailable DISCRETE */)  = 1;

      tmp554 = ((modelica_integer) 1); tmp555 = 1; tmp556 = ((modelica_integer) 10);
      if(!(((tmp555 > 0) && (tmp554 > tmp556)) || ((tmp555 < 0) && (tmp554 < tmp556))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp554, tmp556); i += tmp555)
        {
          tmp551 = ((modelica_integer) 1); tmp552 = 1; tmp553 = ((modelica_integer) 5);
          if(!(((tmp552 > 0) && (tmp551 > tmp553)) || ((tmp552 < 0) && (tmp551 < tmp553))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp551, tmp553); j += tmp552)
            {
              (&(data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[47]/* drone_to_cc[2].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[55]/* drone_to_cc[2].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[51]/* drone_to_cc[2].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[44]/* $whenCondition7 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[44]/* $whenCondition7 DISCRETE */)  /* edge */))
    {
      tmp557 = Less((data->simulationInfo->integerVarsPre[47]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp557)
      {
        tmp558 = ((modelica_integer) 1); tmp559 = 1; tmp560 = ((modelica_integer) 5);
        if(!(((tmp559 > 0) && (tmp558 > tmp560)) || ((tmp559 < 0) && (tmp558 < tmp560))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp558, tmp560); j += tmp559)
          {
            (&(data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[51]/* drone_to_cc[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[129]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
          }
        }

        tmp561 = ((modelica_integer) 10);
        if (tmp561 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].newest), 10)");}
        (data->localData[0]->integerVars[51]/* drone_to_cc[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[51]/* drone_to_cc[2].newest DISCRETE */) , tmp561) + ((modelica_integer) 1);

        tmp562 = ((modelica_integer) 1); tmp563 = 1; tmp564 = ((modelica_integer) 5);
        if(!(((tmp563 > 0) && (tmp562 > tmp564)) || ((tmp563 < 0) && (tmp562 < tmp564))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp562, tmp564); j += tmp563)
          {
            (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[55]/* drone_to_cc[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp565 = ((modelica_integer) 10);
        if (tmp565 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].oldest), 10)");}
        (data->localData[0]->integerVars[55]/* drone_to_cc[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[55]/* drone_to_cc[2].oldest DISCRETE */) , tmp565) + ((modelica_integer) 1);
      }
      else
      {
        tmp566 = ((modelica_integer) 1); tmp567 = 1; tmp568 = ((modelica_integer) 5);
        if(!(((tmp567 > 0) && (tmp566 > tmp568)) || ((tmp567 < 0) && (tmp566 < tmp568))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp566, tmp568); j += tmp567)
          {
            (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[55]/* drone_to_cc[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp569 = ((modelica_integer) 10);
        if (tmp569 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].oldest), 10)");}
        (data->localData[0]->integerVars[55]/* drone_to_cc[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[55]/* drone_to_cc[2].oldest DISCRETE */) , tmp569) + ((modelica_integer) 1);

        tmp570 = ((modelica_integer) 1); tmp571 = 1; tmp572 = ((modelica_integer) 5);
        if(!(((tmp571 > 0) && (tmp570 > tmp572)) || ((tmp571 < 0) && (tmp570 < tmp572))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp570, tmp572); j += tmp571)
          {
            (&(data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[51]/* drone_to_cc[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[129]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
          }
        }

        tmp573 = ((modelica_integer) 10);
        if (tmp573 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].newest), 10)");}
        (data->localData[0]->integerVars[51]/* drone_to_cc[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[51]/* drone_to_cc[2].newest DISCRETE */) , tmp573) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[45]/* $whenCondition8 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[45]/* $whenCondition8 DISCRETE */)  /* edge */))
    {
      tmp574 = ((modelica_integer) 1); tmp575 = 1; tmp576 = ((modelica_integer) 5);
      if(!(((tmp575 > 0) && (tmp574 > tmp576)) || ((tmp575 < 0) && (tmp574 < tmp576))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp574, tmp576); j += tmp575)
        {
          (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[55]/* drone_to_cc[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp577 = ((modelica_integer) 10);
      if (tmp577 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].oldest), 10)");}
      (data->localData[0]->integerVars[55]/* drone_to_cc[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[55]/* drone_to_cc[2].oldest DISCRETE */) , tmp577) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[47]/* drone_to_cc[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[47]/* drone_to_cc[2].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp578 = GreaterEq((data->localData[0]->integerVars[47]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[141]/* drone_to_cc[2].datavailable DISCRETE */)  = tmp578;

      (data->localData[0]->booleanVars[153]/* drone_to_cc[2].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[46]/* $whenCondition9 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[46]/* $whenCondition9 DISCRETE */)  /* edge */))
    {
      tmp579 = ((modelica_integer) 1); tmp580 = 1; tmp581 = ((modelica_integer) 5);
      if(!(((tmp580 > 0) && (tmp579 > tmp581)) || ((tmp580 < 0) && (tmp579 < tmp581))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp579, tmp581); j += tmp580)
        {
          (&(data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[51]/* drone_to_cc[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[129]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
        }
      }

      tmp582 = ((modelica_integer) 10);
      if (tmp582 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].newest), 10)");}
      (data->localData[0]->integerVars[51]/* drone_to_cc[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[51]/* drone_to_cc[2].newest DISCRETE */) , tmp582) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[47]/* drone_to_cc[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[47]/* drone_to_cc[2].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[141]/* drone_to_cc[2].datavailable DISCRETE */)  = 1;

      tmp583 = Less((data->simulationInfo->integerVarsPre[47]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[153]/* drone_to_cc[2].spaceavailable DISCRETE */)  = tmp583;

      tmp584 = ((modelica_integer) 1); tmp585 = 1; tmp586 = ((modelica_integer) 5);
      if(!(((tmp585 > 0) && (tmp584 > tmp586)) || ((tmp585 < 0) && (tmp584 < tmp586))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp584, tmp586); j += tmp585)
        {
          (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[55]/* drone_to_cc[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 445
type: SIMPLE_ASSIGN
cc.msg_from_drone[2,5] = drone_to_cc[2].outputdata[5]
*/
void System_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  (data->localData[0]->realVars[60]/* cc.msg_from_drone[2,5] variable */)  = (data->localData[0]->realVars[704]/* drone_to_cc[2].outputdata[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 446
type: SIMPLE_ASSIGN
cc.datavailable[2] = drone_to_cc[2].datavailable
*/
void System_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  (data->localData[0]->booleanVars[52]/* cc.datavailable[2] DISCRETE */)  = (data->localData[0]->booleanVars[141]/* drone_to_cc[2].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 447
type: SIMPLE_ASSIGN
cc.msg_from_drone[2,3] = drone_to_cc[2].outputdata[3]
*/
void System_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  (data->localData[0]->realVars[58]/* cc.msg_from_drone[2,3] variable */)  = (data->localData[0]->realVars[702]/* drone_to_cc[2].outputdata[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 448
type: SIMPLE_ASSIGN
cc.msg_from_drone[2,4] = drone_to_cc[2].outputdata[4]
*/
void System_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  (data->localData[0]->realVars[59]/* cc.msg_from_drone[2,4] variable */)  = (data->localData[0]->realVars[703]/* drone_to_cc[2].outputdata[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 449
type: SIMPLE_ASSIGN
cc.msg_from_drone[2,1] = drone_to_cc[2].outputdata[1]
*/
void System_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  (data->localData[0]->realVars[56]/* cc.msg_from_drone[2,1] variable */)  = (data->localData[0]->realVars[700]/* drone_to_cc[2].outputdata[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 450
type: SIMPLE_ASSIGN
cc.msg_from_drone[2,2] = drone_to_cc[2].outputdata[2]
*/
void System_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  (data->localData[0]->realVars[57]/* cc.msg_from_drone[2,2] variable */)  = (data->localData[0]->realVars[701]/* drone_to_cc[2].outputdata[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 451
type: SIMPLE_ASSIGN
d[2].spaceavailable = drone_to_cc[2].spaceavailable
*/
void System_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  (data->localData[0]->booleanVars[133]/* d[2].spaceavailable DISCRETE */)  = (data->localData[0]->booleanVars[153]/* drone_to_cc[2].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 452
type: SIMPLE_ASSIGN
d[2].batteryPercentage = 100.0 * d[2].d.battery / d[2].p.capacity
*/
void System_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  (data->localData[0]->realVars[94]/* d[2].batteryPercentage variable */)  = (100.0) * (DIVISION_SIM((data->localData[0]->realVars[460]/* d[2].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[1331]/* d[2].p.capacity PARAM */) ,"d[2].p.capacity",equationIndexes));
  TRACE_POP
}
/*
equation index: 453
type: SIMPLE_ASSIGN
d[2].ctrl.droneDead = d[2].d.droneDead
*/
void System_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  (data->localData[0]->booleanVars[117]/* d[2].ctrl.droneDead DISCRETE */)  = (data->localData[0]->booleanVars[121]/* d[2].d.droneDead DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 454
type: ALGORITHM

  d[1].ctrl.destZ := pre(d[1].ctrl.destZ);
  d[1].ctrl.destY := pre(d[1].ctrl.destY);
  d[1].ctrl.destX := pre(d[1].ctrl.destX);
  $whenCondition45 := pre($whenCondition45);
  $whenCondition44 := pre($whenCondition44);
  $whenCondition44 := sample(2, 0.0, d[1].ctrl.prm.Tdrone) and pre(d[1].ctrl.droneDead);
  $whenCondition45 := sample(2, 0.0, d[1].ctrl.prm.Tdrone);
  when $whenCondition44 then
    d[1].ctrl.destX := pre(d[1].ctrl.x);
    d[1].ctrl.destY := pre(d[1].ctrl.y);
    d[1].ctrl.destZ := 0.0;
  elsewhen $whenCondition45 then
    d[1].ctrl.destX := pre(d[1].ctrl.setx);
    d[1].ctrl.destY := pre(d[1].ctrl.sety);
    d[1].ctrl.destZ := pre(d[1].ctrl.setz);
  end when;
*/
void System_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  (data->localData[0]->realVars[455]/* d[1].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[455]/* d[1].ctrl.destZ DISCRETE */) ;

  (data->localData[0]->realVars[451]/* d[1].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[451]/* d[1].ctrl.destY DISCRETE */) ;

  (data->localData[0]->realVars[447]/* d[1].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[447]/* d[1].ctrl.destX DISCRETE */) ;

  (data->localData[0]->booleanVars[39]/* $whenCondition45 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[39]/* $whenCondition45 DISCRETE */) ;

  (data->localData[0]->booleanVars[38]/* $whenCondition44 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[38]/* $whenCondition44 DISCRETE */) ;

  (data->localData[0]->booleanVars[38]/* $whenCondition44 DISCRETE */)  = (data->simulationInfo->samples[1] && (data->simulationInfo->booleanVarsPre[116]/* d[1].ctrl.droneDead DISCRETE */) );

  (data->localData[0]->booleanVars[39]/* $whenCondition45 DISCRETE */)  = data->simulationInfo->samples[1];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[38]/* $whenCondition44 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[38]/* $whenCondition44 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[447]/* d[1].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[121]/* d[1].ctrl.x variable */) ;

      (data->localData[0]->realVars[451]/* d[1].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[125]/* d[1].ctrl.y variable */) ;

      (data->localData[0]->realVars[455]/* d[1].ctrl.destZ DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[39]/* $whenCondition45 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[39]/* $whenCondition45 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[447]/* d[1].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[109]/* d[1].ctrl.setx variable */) ;

      (data->localData[0]->realVars[451]/* d[1].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[113]/* d[1].ctrl.sety variable */) ;

      (data->localData[0]->realVars[455]/* d[1].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[117]/* d[1].ctrl.setz variable */) ;
    }
  }
  TRACE_POP
}
/*
equation index: 455
type: ALGORITHM

  d[1].d.droneDead := pre(d[1].d.droneDead);
  d[1].d.droneState := pre(d[1].d.droneState);
  d[1].d.battery := pre(d[1].d.battery);
  $whenCondition47 := pre($whenCondition47);
  $whenCondition46 := pre($whenCondition46);
  $whenCondition46 := abs(pre(d[1].d.battery)) < 0.01;
  $whenCondition47 := sample(1, 0.0, d[1].d.p.Tdrone) and pre(d[1].d.droneState) == 1;
  when false then
    d[1].d.battery := d[1].d.p.capacity;
    d[1].d.droneState := 1;
    d[1].d.droneDead := false;
  elsewhen $whenCondition46 then
    d[1].d.droneDead := true;
  elsewhen $whenCondition47 then
    if returnedHome(d[1].d.p, pre(d[1].d.x), pre(d[1].d.y), pre(d[1].d.z)) then
      d[1].d.battery := charging(d[1].d.p, pre(d[1].d.battery));
    else
      d[1].d.battery := batteryMonitor(pre(d[1].d.battery), d[1].d.p.batteryDischarge);
    end if;
  end when;
*/
void System_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  modelica_boolean tmp587;
  real_array tmp589;
  real_array tmp590;
  real_array tmp591;
  real_array tmp592;
  real_array tmp593;
  real_array tmp594;
  (data->localData[0]->booleanVars[120]/* d[1].d.droneDead DISCRETE */)  = (data->simulationInfo->booleanVarsPre[120]/* d[1].d.droneDead DISCRETE */) ;

  (data->localData[0]->integerVars[34]/* d[1].d.droneState DISCRETE */)  = (data->simulationInfo->integerVarsPre[34]/* d[1].d.droneState DISCRETE */) ;

  (data->localData[0]->realVars[459]/* d[1].d.battery DISCRETE */)  = (data->simulationInfo->realVarsPre[459]/* d[1].d.battery DISCRETE */) ;

  (data->localData[0]->booleanVars[41]/* $whenCondition47 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[41]/* $whenCondition47 DISCRETE */) ;

  (data->localData[0]->booleanVars[40]/* $whenCondition46 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[40]/* $whenCondition46 DISCRETE */) ;

  tmp587 = Less(fabs((data->simulationInfo->realVarsPre[459]/* d[1].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[40]/* $whenCondition46 DISCRETE */)  = tmp587;

  (data->localData[0]->booleanVars[41]/* $whenCondition47 DISCRETE */)  = (data->simulationInfo->samples[0] && ((data->simulationInfo->integerVarsPre[34]/* d[1].d.droneState DISCRETE */)  == ((modelica_integer) 1)));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[459]/* d[1].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[998]/* d[1].d.p.capacity PARAM */) ;

      (data->localData[0]->integerVars[34]/* d[1].d.droneState DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->booleanVars[120]/* d[1].d.droneDead DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[40]/* $whenCondition46 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[40]/* $whenCondition46 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->booleanVars[120]/* d[1].d.droneDead DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[41]/* $whenCondition47 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[41]/* $whenCondition47 DISCRETE */)  /* edge */))
    {
      real_array_create(&tmp589, ((modelica_real*)&((&data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp590, ((modelica_real*)&((&data->simulationInfo->realParameter[1030]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp591, ((modelica_real*)&((&data->simulationInfo->realParameter[794]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 1) - 1) * 8 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
      if(omc_returnedHome(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[1102]/* d[1].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[40]/* d[1].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[44]/* d[1].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[786]/* d[1].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[782]/* d[1].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[790]/* d[1].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[1074]/* d[1].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[52]/* d[1].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[1002]/* d[1].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[1086]/* d[1].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[1082]/* d[1].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[1010]/* d[1].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[1078]/* d[1].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[990]/* d[1].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[1014]/* d[1].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[986]/* d[1].d.p.arrivalThreshold PARAM */) , tmp589, tmp590, (data->simulationInfo->realParameter[1058]/* d[1].d.p.m PARAM */) , (data->simulationInfo->realParameter[1066]/* d[1].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[1054]/* d[1].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[1110]/* d[1].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[1062]/* d[1].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[1070]/* d[1].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[1018]/* d[1].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[1106]/* d[1].d.p.unita PARAM */) , (data->simulationInfo->realParameter[998]/* d[1].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[994]/* d[1].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[1006]/* d[1].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[1090]/* d[1].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[1026]/* d[1].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[1022]/* d[1].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[1094]/* d[1].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[1098]/* d[1].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[48]/* d[1].d.p.nAreas PARAM */) , tmp591), (data->simulationInfo->realVarsPre[12]/* d[1].d.x STATE(1,d[1].d.Vx) */) , (data->simulationInfo->realVarsPre[16]/* d[1].d.y STATE(1,d[1].d.Vy) */) , (data->simulationInfo->realVarsPre[20]/* d[1].d.z STATE(1,d[1].d.Vz) */) ))
      {
        real_array_create(&tmp592, ((modelica_real*)&((&data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp593, ((modelica_real*)&((&data->simulationInfo->realParameter[1030]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp594, ((modelica_real*)&((&data->simulationInfo->realParameter[794]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 1) - 1) * 8 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)8, (_index_t)6);
        (data->localData[0]->realVars[459]/* d[1].d.battery DISCRETE */)  = omc_charging(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[1102]/* d[1].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[40]/* d[1].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[44]/* d[1].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[786]/* d[1].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[782]/* d[1].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[790]/* d[1].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[1074]/* d[1].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[52]/* d[1].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[1002]/* d[1].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[1086]/* d[1].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[1082]/* d[1].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[1010]/* d[1].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[1078]/* d[1].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[990]/* d[1].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[1014]/* d[1].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[986]/* d[1].d.p.arrivalThreshold PARAM */) , tmp592, tmp593, (data->simulationInfo->realParameter[1058]/* d[1].d.p.m PARAM */) , (data->simulationInfo->realParameter[1066]/* d[1].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[1054]/* d[1].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[1110]/* d[1].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[1062]/* d[1].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[1070]/* d[1].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[1018]/* d[1].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[1106]/* d[1].d.p.unita PARAM */) , (data->simulationInfo->realParameter[998]/* d[1].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[994]/* d[1].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[1006]/* d[1].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[1090]/* d[1].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[1026]/* d[1].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[1022]/* d[1].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[1094]/* d[1].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[1098]/* d[1].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[48]/* d[1].d.p.nAreas PARAM */) , tmp594), (data->simulationInfo->realVarsPre[459]/* d[1].d.battery DISCRETE */) );
      }
      else
      {
        (data->localData[0]->realVars[459]/* d[1].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[459]/* d[1].d.battery DISCRETE */) , (data->simulationInfo->realParameter[994]/* d[1].d.p.batteryDischarge PARAM */) );
      }
    }
  }
  TRACE_POP
}
/*
equation index: 456
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
  $whenCondition43 := pre($whenCondition43);
  $whenCondition43 := sample(3, 0.0, d[1].p.Tdrone);
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
  elsewhen $whenCondition43 then
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
void System_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  real_array tmp595;
  real_array tmp596;
  (data->localData[0]->integerVars[30]/* d[1].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[30]/* d[1].comm_state DISCRETE */) ;

  (data->localData[0]->integerVars[38]/* d[1].fifox DISCRETE */)  = (data->simulationInfo->integerVarsPre[38]/* d[1].fifox DISCRETE */) ;

  (data->localData[0]->booleanVars[136]/* d[1].writesignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[136]/* d[1].writesignal DISCRETE */) ;

  (data->localData[0]->booleanVars[128]/* d[1].readsignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[128]/* d[1].readsignal DISCRETE */) ;

  (data->localData[0]->integerVars[42]/* d[1].flag DISCRETE */)  = (data->simulationInfo->integerVarsPre[42]/* d[1].flag DISCRETE */) ;

  (data->localData[0]->realVars[491]/* d[1].setz DISCRETE */)  = (data->simulationInfo->realVarsPre[491]/* d[1].setz DISCRETE */) ;

  (data->localData[0]->realVars[487]/* d[1].sety DISCRETE */)  = (data->simulationInfo->realVarsPre[487]/* d[1].sety DISCRETE */) ;

  (data->localData[0]->realVars[483]/* d[1].setx DISCRETE */)  = (data->simulationInfo->realVarsPre[483]/* d[1].setx DISCRETE */) ;

  (data->localData[0]->realVars[467]/* d[1].msg_to_cc[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[467]/* d[1].msg_to_cc[5] DISCRETE */) ;

  (data->localData[0]->realVars[466]/* d[1].msg_to_cc[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[466]/* d[1].msg_to_cc[4] DISCRETE */) ;

  (data->localData[0]->realVars[465]/* d[1].msg_to_cc[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[465]/* d[1].msg_to_cc[3] DISCRETE */) ;

  (data->localData[0]->realVars[464]/* d[1].msg_to_cc[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[464]/* d[1].msg_to_cc[2] DISCRETE */) ;

  (data->localData[0]->realVars[463]/* d[1].msg_to_cc[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[463]/* d[1].msg_to_cc[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[37]/* $whenCondition43 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[37]/* $whenCondition43 DISCRETE */) ;

  (data->localData[0]->booleanVars[37]/* $whenCondition43 DISCRETE */)  = data->simulationInfo->samples[2];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      array_alloc_scalar_real_array(&tmp595, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp596, ((modelica_real*)&((&(data->localData[0]->realVars[463]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
      real_array_copy_data(tmp595, tmp596);

      (data->localData[0]->realVars[483]/* d[1].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1374]/* d[1].p.flyZone[1] PARAM */) );

      (data->localData[0]->realVars[487]/* d[1].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1375]/* d[1].p.flyZone[2] PARAM */) );

      (data->localData[0]->realVars[491]/* d[1].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[1376]/* d[1].p.flyZone[3] PARAM */) );

      (data->localData[0]->integerVars[42]/* d[1].flag DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->booleanVars[128]/* d[1].readsignal DISCRETE */)  = 0;

      (data->localData[0]->booleanVars[136]/* d[1].writesignal DISCRETE */)  = 0;

      (data->localData[0]->integerVars[38]/* d[1].fifox DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[30]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 10);
    }
    else if(((data->localData[0]->booleanVars[37]/* $whenCondition43 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[37]/* $whenCondition43 DISCRETE */)  /* edge */))
    {
      if((data->simulationInfo->booleanVarsPre[120]/* d[1].d.droneDead DISCRETE */) )
      {
        (data->localData[0]->integerVars[30]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 0);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[30]/* d[1].comm_state DISCRETE */)  == ((modelica_integer) 10)))
        {
          (data->localData[0]->booleanVars[128]/* d[1].readsignal DISCRETE */)  = omc_ReadFromFIFO(threadData, (data->simulationInfo->integerVarsPre[38]/* d[1].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[124]/* d[1].datavailable DISCRETE */) , (data->simulationInfo->booleanVarsPre[128]/* d[1].readsignal DISCRETE */)  ,&(data->localData[0]->integerVars[38]/* d[1].fifox DISCRETE */) );

          if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[38]/* d[1].fifox DISCRETE */) ))
          {
            (data->localData[0]->integerVars[42]/* d[1].flag DISCRETE */)  = ((modelica_integer)floor((data->localData[0]->realVars[427]/* cc_to_drone[1].outputdata[1] DISCRETE */) ));

            if(((data->localData[0]->integerVars[42]/* d[1].flag DISCRETE */)  == ((modelica_integer) 1)))
            {
              (data->localData[0]->realVars[463]/* d[1].msg_to_cc[1] DISCRETE */)  = 2.0;

              (data->localData[0]->realVars[464]/* d[1].msg_to_cc[2] DISCRETE */)  = (data->localData[0]->realVars[12]/* d[1].d.x STATE(1,d[1].d.Vx) */) ;

              (data->localData[0]->realVars[465]/* d[1].msg_to_cc[3] DISCRETE */)  = (data->localData[0]->realVars[16]/* d[1].d.y STATE(1,d[1].d.Vy) */) ;

              (data->localData[0]->realVars[466]/* d[1].msg_to_cc[4] DISCRETE */)  = (data->localData[0]->realVars[20]/* d[1].d.z STATE(1,d[1].d.Vz) */) ;

              (data->localData[0]->realVars[467]/* d[1].msg_to_cc[5] DISCRETE */)  = (data->localData[0]->realVars[459]/* d[1].d.battery DISCRETE */) ;

              (data->localData[0]->integerVars[30]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 20);
            }
            else
            {
              if(((data->localData[0]->integerVars[42]/* d[1].flag DISCRETE */)  == ((modelica_integer) 2)))
              {
                (data->localData[0]->realVars[483]/* d[1].setx DISCRETE */)  = (data->localData[0]->realVars[428]/* cc_to_drone[1].outputdata[2] DISCRETE */) ;

                (data->localData[0]->realVars[487]/* d[1].sety DISCRETE */)  = (data->localData[0]->realVars[429]/* cc_to_drone[1].outputdata[3] DISCRETE */) ;

                (data->localData[0]->realVars[491]/* d[1].setz DISCRETE */)  = (data->localData[0]->realVars[430]/* cc_to_drone[1].outputdata[4] DISCRETE */) ;

                (data->localData[0]->integerVars[30]/* d[1].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[30]/* d[1].comm_state DISCRETE */) ;
              }
            }

            (data->localData[0]->integerVars[38]/* d[1].fifox DISCRETE */)  = ((modelica_integer) 0);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[30]/* d[1].comm_state DISCRETE */)  == ((modelica_integer) 20)))
          {
            (data->localData[0]->booleanVars[136]/* d[1].writesignal DISCRETE */)  = omc_WriteToFIFO(threadData, (data->simulationInfo->integerVarsPre[38]/* d[1].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[136]/* d[1].writesignal DISCRETE */) , (data->simulationInfo->booleanVarsPre[132]/* d[1].spaceavailable DISCRETE */)  ,&(data->localData[0]->integerVars[38]/* d[1].fifox DISCRETE */) );

            if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[38]/* d[1].fifox DISCRETE */) ))
            {
              (data->localData[0]->integerVars[30]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 10);

              (data->localData[0]->integerVars[38]/* d[1].fifox DISCRETE */)  = ((modelica_integer) 0);
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
equation index: 457
type: SIMPLE_ASSIGN
d[1].ctrl.setz = d[1].setz
*/
void System_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  (data->localData[0]->realVars[117]/* d[1].ctrl.setz variable */)  = (data->localData[0]->realVars[491]/* d[1].setz DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 458
type: SIMPLE_ASSIGN
d[1].ctrl.sety = d[1].sety
*/
void System_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  (data->localData[0]->realVars[113]/* d[1].ctrl.sety variable */)  = (data->localData[0]->realVars[487]/* d[1].sety DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 459
type: SIMPLE_ASSIGN
drone_to_cc[1].writesignal = d[1].writesignal
*/
void System_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  (data->localData[0]->booleanVars[160]/* drone_to_cc[1].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[136]/* d[1].writesignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 460
type: SIMPLE_ASSIGN
drone_to_cc[1].writesigint = not pre(drone_to_cc[1].writesignal) == drone_to_cc[1].writesignal
*/
void System_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  (data->localData[0]->booleanVars[156]/* drone_to_cc[1].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[160]/* drone_to_cc[1].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[160]/* drone_to_cc[1].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[160]/* drone_to_cc[1].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[160]/* drone_to_cc[1].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 461
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[1] = d[1].msg_to_cc[1]
*/
void System_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  (data->localData[0]->realVars[129]/* drone_to_cc[1].inputdata[1] variable */)  = (data->localData[0]->realVars[463]/* d[1].msg_to_cc[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 462
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[4] = d[1].msg_to_cc[4]
*/
void System_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  (data->localData[0]->realVars[132]/* drone_to_cc[1].inputdata[4] variable */)  = (data->localData[0]->realVars[466]/* d[1].msg_to_cc[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 463
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[3] = d[1].msg_to_cc[3]
*/
void System_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  (data->localData[0]->realVars[131]/* drone_to_cc[1].inputdata[3] variable */)  = (data->localData[0]->realVars[465]/* d[1].msg_to_cc[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 464
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[5] = d[1].msg_to_cc[5]
*/
void System_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  (data->localData[0]->realVars[133]/* drone_to_cc[1].inputdata[5] variable */)  = (data->localData[0]->realVars[467]/* d[1].msg_to_cc[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 465
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[2] = d[1].msg_to_cc[2]
*/
void System_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  (data->localData[0]->realVars[130]/* drone_to_cc[1].inputdata[2] variable */)  = (data->localData[0]->realVars[464]/* d[1].msg_to_cc[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 466
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
  $whenCondition12 := pre($whenCondition12);
  $whenCondition11 := pre($whenCondition11);
  $whenCondition10 := pre($whenCondition10);
  $whenCondition10 := pre(drone_to_cc[1].readsigint) and pre(drone_to_cc[1].writesigint);
  $whenCondition11 := pre(drone_to_cc[1].readsigint) and not pre(drone_to_cc[1].writesigint) and pre(drone_to_cc[1].fifosize) >= 1;
  $whenCondition12 := not pre(drone_to_cc[1].readsigint) and pre(drone_to_cc[1].writesigint) and pre(drone_to_cc[1].fifosize) < 10;
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
  elsewhen $whenCondition10 then
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
  elsewhen $whenCondition11 then
    for j in 1:5 loop
      drone_to_cc[1].outputdata[j] := drone_to_cc[1].fifo[pre(drone_to_cc[1].oldest),j];
    end for;
    drone_to_cc[1].oldest := mod(pre(drone_to_cc[1].oldest), 10) + 1;
    drone_to_cc[1].fifosize := pre(drone_to_cc[1].fifosize) - 1;
    drone_to_cc[1].datavailable := drone_to_cc[1].fifosize >= 1;
    drone_to_cc[1].spaceavailable := true;
  elsewhen $whenCondition12 then
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
void System_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  modelica_boolean tmp602;
  modelica_boolean tmp603;
  modelica_integer tmp604;
  modelica_integer tmp605;
  modelica_integer tmp606;
  modelica_integer tmp607;
  modelica_integer tmp608;
  modelica_integer tmp609;
  modelica_integer tmp610;
  modelica_integer tmp611;
  modelica_integer tmp612;
  modelica_boolean tmp613;
  modelica_integer tmp614;
  modelica_integer tmp615;
  modelica_integer tmp616;
  modelica_integer tmp617;
  modelica_integer tmp618;
  modelica_integer tmp619;
  modelica_integer tmp620;
  modelica_integer tmp621;
  modelica_integer tmp622;
  modelica_integer tmp623;
  modelica_integer tmp624;
  modelica_integer tmp625;
  modelica_integer tmp626;
  modelica_integer tmp627;
  modelica_integer tmp628;
  modelica_integer tmp629;
  modelica_integer tmp630;
  modelica_integer tmp631;
  modelica_integer tmp632;
  modelica_integer tmp633;
  modelica_boolean tmp634;
  modelica_integer tmp635;
  modelica_integer tmp636;
  modelica_integer tmp637;
  modelica_integer tmp638;
  modelica_boolean tmp639;
  modelica_integer tmp640;
  modelica_integer tmp641;
  modelica_integer tmp642;
  (data->localData[0]->integerVars[50]/* drone_to_cc[1].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[50]/* drone_to_cc[1].newest DISCRETE */) ;

  (data->localData[0]->integerVars[54]/* drone_to_cc[1].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[54]/* drone_to_cc[1].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[46]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[46]/* drone_to_cc[1].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[544]/* drone_to_cc[1].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[544]/* drone_to_cc[1].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[543]/* drone_to_cc[1].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[543]/* drone_to_cc[1].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[542]/* drone_to_cc[1].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[542]/* drone_to_cc[1].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[541]/* drone_to_cc[1].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[541]/* drone_to_cc[1].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[540]/* drone_to_cc[1].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[540]/* drone_to_cc[1].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[539]/* drone_to_cc[1].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[539]/* drone_to_cc[1].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[538]/* drone_to_cc[1].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[538]/* drone_to_cc[1].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[537]/* drone_to_cc[1].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[537]/* drone_to_cc[1].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[536]/* drone_to_cc[1].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[536]/* drone_to_cc[1].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[535]/* drone_to_cc[1].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[535]/* drone_to_cc[1].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[534]/* drone_to_cc[1].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[534]/* drone_to_cc[1].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[533]/* drone_to_cc[1].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[533]/* drone_to_cc[1].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[532]/* drone_to_cc[1].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[532]/* drone_to_cc[1].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[531]/* drone_to_cc[1].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[531]/* drone_to_cc[1].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[530]/* drone_to_cc[1].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[530]/* drone_to_cc[1].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[529]/* drone_to_cc[1].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[529]/* drone_to_cc[1].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[528]/* drone_to_cc[1].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[528]/* drone_to_cc[1].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[527]/* drone_to_cc[1].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[527]/* drone_to_cc[1].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[526]/* drone_to_cc[1].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[526]/* drone_to_cc[1].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[525]/* drone_to_cc[1].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[525]/* drone_to_cc[1].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[524]/* drone_to_cc[1].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[524]/* drone_to_cc[1].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[523]/* drone_to_cc[1].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[523]/* drone_to_cc[1].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[522]/* drone_to_cc[1].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[522]/* drone_to_cc[1].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[521]/* drone_to_cc[1].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[521]/* drone_to_cc[1].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[520]/* drone_to_cc[1].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[520]/* drone_to_cc[1].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[519]/* drone_to_cc[1].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[519]/* drone_to_cc[1].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[518]/* drone_to_cc[1].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[518]/* drone_to_cc[1].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[517]/* drone_to_cc[1].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[517]/* drone_to_cc[1].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[516]/* drone_to_cc[1].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[516]/* drone_to_cc[1].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[515]/* drone_to_cc[1].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[515]/* drone_to_cc[1].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[514]/* drone_to_cc[1].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[514]/* drone_to_cc[1].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[513]/* drone_to_cc[1].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[513]/* drone_to_cc[1].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[512]/* drone_to_cc[1].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[512]/* drone_to_cc[1].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[511]/* drone_to_cc[1].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[511]/* drone_to_cc[1].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[510]/* drone_to_cc[1].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[510]/* drone_to_cc[1].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[509]/* drone_to_cc[1].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[509]/* drone_to_cc[1].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[508]/* drone_to_cc[1].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[508]/* drone_to_cc[1].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[507]/* drone_to_cc[1].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[507]/* drone_to_cc[1].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[506]/* drone_to_cc[1].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[506]/* drone_to_cc[1].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[505]/* drone_to_cc[1].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[505]/* drone_to_cc[1].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[504]/* drone_to_cc[1].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[504]/* drone_to_cc[1].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[503]/* drone_to_cc[1].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[503]/* drone_to_cc[1].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[502]/* drone_to_cc[1].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[502]/* drone_to_cc[1].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[501]/* drone_to_cc[1].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[501]/* drone_to_cc[1].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[500]/* drone_to_cc[1].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[500]/* drone_to_cc[1].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[499]/* drone_to_cc[1].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[499]/* drone_to_cc[1].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[498]/* drone_to_cc[1].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[498]/* drone_to_cc[1].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[497]/* drone_to_cc[1].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[497]/* drone_to_cc[1].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[496]/* drone_to_cc[1].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[496]/* drone_to_cc[1].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[152]/* drone_to_cc[1].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[152]/* drone_to_cc[1].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[699]/* drone_to_cc[1].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[699]/* drone_to_cc[1].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[698]/* drone_to_cc[1].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[698]/* drone_to_cc[1].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[697]/* drone_to_cc[1].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[697]/* drone_to_cc[1].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[696]/* drone_to_cc[1].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[696]/* drone_to_cc[1].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[140]/* drone_to_cc[1].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[140]/* drone_to_cc[1].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[3]/* $whenCondition12 DISCRETE */) ;

  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[2]/* $whenCondition11 DISCRETE */) ;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[1]/* $whenCondition10 DISCRETE */) ;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[144]/* drone_to_cc[1].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[156]/* drone_to_cc[1].writesigint DISCRETE */) );

  tmp602 = GreaterEq((data->simulationInfo->integerVarsPre[46]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[144]/* drone_to_cc[1].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[156]/* drone_to_cc[1].writesigint DISCRETE */) )) && tmp602);

  tmp603 = Less((data->simulationInfo->integerVarsPre[46]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[144]/* drone_to_cc[1].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[156]/* drone_to_cc[1].writesigint DISCRETE */) ) && tmp603);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[140]/* drone_to_cc[1].datavailable DISCRETE */)  = 0;

      tmp604 = ((modelica_integer) 1); tmp605 = 1; tmp606 = ((modelica_integer) 5);
      if(!(((tmp605 > 0) && (tmp604 > tmp606)) || ((tmp605 < 0) && (tmp604 < tmp606))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp604, tmp606); j += tmp605)
        {
          (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[152]/* drone_to_cc[1].spaceavailable DISCRETE */)  = 1;

      tmp610 = ((modelica_integer) 1); tmp611 = 1; tmp612 = ((modelica_integer) 10);
      if(!(((tmp611 > 0) && (tmp610 > tmp612)) || ((tmp611 < 0) && (tmp610 < tmp612))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp610, tmp612); i += tmp611)
        {
          tmp607 = ((modelica_integer) 1); tmp608 = 1; tmp609 = ((modelica_integer) 5);
          if(!(((tmp608 > 0) && (tmp607 > tmp609)) || ((tmp608 < 0) && (tmp607 < tmp609))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp607, tmp609); j += tmp608)
            {
              (&(data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[46]/* drone_to_cc[1].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[54]/* drone_to_cc[1].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[50]/* drone_to_cc[1].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[1]/* $whenCondition10 DISCRETE */)  /* edge */))
    {
      tmp613 = Less((data->simulationInfo->integerVarsPre[46]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp613)
      {
        tmp614 = ((modelica_integer) 1); tmp615 = 1; tmp616 = ((modelica_integer) 5);
        if(!(((tmp615 > 0) && (tmp614 > tmp616)) || ((tmp615 < 0) && (tmp614 < tmp616))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp614, tmp616); j += tmp615)
          {
            (&(data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[50]/* drone_to_cc[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[129]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
          }
        }

        tmp617 = ((modelica_integer) 10);
        if (tmp617 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].newest), 10)");}
        (data->localData[0]->integerVars[50]/* drone_to_cc[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[50]/* drone_to_cc[1].newest DISCRETE */) , tmp617) + ((modelica_integer) 1);

        tmp618 = ((modelica_integer) 1); tmp619 = 1; tmp620 = ((modelica_integer) 5);
        if(!(((tmp619 > 0) && (tmp618 > tmp620)) || ((tmp619 < 0) && (tmp618 < tmp620))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp618, tmp620); j += tmp619)
          {
            (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[54]/* drone_to_cc[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp621 = ((modelica_integer) 10);
        if (tmp621 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].oldest), 10)");}
        (data->localData[0]->integerVars[54]/* drone_to_cc[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[54]/* drone_to_cc[1].oldest DISCRETE */) , tmp621) + ((modelica_integer) 1);
      }
      else
      {
        tmp622 = ((modelica_integer) 1); tmp623 = 1; tmp624 = ((modelica_integer) 5);
        if(!(((tmp623 > 0) && (tmp622 > tmp624)) || ((tmp623 < 0) && (tmp622 < tmp624))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp622, tmp624); j += tmp623)
          {
            (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[54]/* drone_to_cc[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp625 = ((modelica_integer) 10);
        if (tmp625 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].oldest), 10)");}
        (data->localData[0]->integerVars[54]/* drone_to_cc[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[54]/* drone_to_cc[1].oldest DISCRETE */) , tmp625) + ((modelica_integer) 1);

        tmp626 = ((modelica_integer) 1); tmp627 = 1; tmp628 = ((modelica_integer) 5);
        if(!(((tmp627 > 0) && (tmp626 > tmp628)) || ((tmp627 < 0) && (tmp626 < tmp628))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp626, tmp628); j += tmp627)
          {
            (&(data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[50]/* drone_to_cc[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[129]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
          }
        }

        tmp629 = ((modelica_integer) 10);
        if (tmp629 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].newest), 10)");}
        (data->localData[0]->integerVars[50]/* drone_to_cc[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[50]/* drone_to_cc[1].newest DISCRETE */) , tmp629) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[2]/* $whenCondition11 DISCRETE */)  /* edge */))
    {
      tmp630 = ((modelica_integer) 1); tmp631 = 1; tmp632 = ((modelica_integer) 5);
      if(!(((tmp631 > 0) && (tmp630 > tmp632)) || ((tmp631 < 0) && (tmp630 < tmp632))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp630, tmp632); j += tmp631)
        {
          (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[54]/* drone_to_cc[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp633 = ((modelica_integer) 10);
      if (tmp633 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].oldest), 10)");}
      (data->localData[0]->integerVars[54]/* drone_to_cc[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[54]/* drone_to_cc[1].oldest DISCRETE */) , tmp633) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[46]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[46]/* drone_to_cc[1].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp634 = GreaterEq((data->localData[0]->integerVars[46]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[140]/* drone_to_cc[1].datavailable DISCRETE */)  = tmp634;

      (data->localData[0]->booleanVars[152]/* drone_to_cc[1].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[3]/* $whenCondition12 DISCRETE */)  /* edge */))
    {
      tmp635 = ((modelica_integer) 1); tmp636 = 1; tmp637 = ((modelica_integer) 5);
      if(!(((tmp636 > 0) && (tmp635 > tmp637)) || ((tmp636 < 0) && (tmp635 < tmp637))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp635, tmp637); j += tmp636)
        {
          (&(data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[50]/* drone_to_cc[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[129]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
        }
      }

      tmp638 = ((modelica_integer) 10);
      if (tmp638 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].newest), 10)");}
      (data->localData[0]->integerVars[50]/* drone_to_cc[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[50]/* drone_to_cc[1].newest DISCRETE */) , tmp638) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[46]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[46]/* drone_to_cc[1].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[140]/* drone_to_cc[1].datavailable DISCRETE */)  = 1;

      tmp639 = Less((data->simulationInfo->integerVarsPre[46]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[152]/* drone_to_cc[1].spaceavailable DISCRETE */)  = tmp639;

      tmp640 = ((modelica_integer) 1); tmp641 = 1; tmp642 = ((modelica_integer) 5);
      if(!(((tmp641 > 0) && (tmp640 > tmp642)) || ((tmp641 < 0) && (tmp640 < tmp642))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp640, tmp642); j += tmp641)
        {
          (&(data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[495]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[54]/* drone_to_cc[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 467
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,5] = drone_to_cc[1].outputdata[5]
*/
void System_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  (data->localData[0]->realVars[55]/* cc.msg_from_drone[1,5] variable */)  = (data->localData[0]->realVars[699]/* drone_to_cc[1].outputdata[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 468
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,4] = drone_to_cc[1].outputdata[4]
*/
void System_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  (data->localData[0]->realVars[54]/* cc.msg_from_drone[1,4] variable */)  = (data->localData[0]->realVars[698]/* drone_to_cc[1].outputdata[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 469
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,3] = drone_to_cc[1].outputdata[3]
*/
void System_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  (data->localData[0]->realVars[53]/* cc.msg_from_drone[1,3] variable */)  = (data->localData[0]->realVars[697]/* drone_to_cc[1].outputdata[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 470
type: SIMPLE_ASSIGN
cc.datavailable[1] = drone_to_cc[1].datavailable
*/
void System_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  (data->localData[0]->booleanVars[51]/* cc.datavailable[1] DISCRETE */)  = (data->localData[0]->booleanVars[140]/* drone_to_cc[1].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 471
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,2] = drone_to_cc[1].outputdata[2]
*/
void System_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  (data->localData[0]->realVars[52]/* cc.msg_from_drone[1,2] variable */)  = (data->localData[0]->realVars[696]/* drone_to_cc[1].outputdata[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 472
type: SIMPLE_ASSIGN
d[1].spaceavailable = drone_to_cc[1].spaceavailable
*/
void System_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  (data->localData[0]->booleanVars[132]/* d[1].spaceavailable DISCRETE */)  = (data->localData[0]->booleanVars[152]/* drone_to_cc[1].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 473
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,1] = drone_to_cc[1].outputdata[1]
*/
void System_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  (data->localData[0]->realVars[51]/* cc.msg_from_drone[1,1] variable */)  = (data->localData[0]->realVars[695]/* drone_to_cc[1].outputdata[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 474
type: SIMPLE_ASSIGN
d[1].ctrl.setx = d[1].setx
*/
void System_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  (data->localData[0]->realVars[109]/* d[1].ctrl.setx variable */)  = (data->localData[0]->realVars[483]/* d[1].setx DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 475
type: SIMPLE_ASSIGN
cc_to_drone[1].readsignal = d[1].readsignal
*/
void System_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  (data->localData[0]->booleanVars[100]/* cc_to_drone[1].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[128]/* d[1].readsignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 476
type: SIMPLE_ASSIGN
cc_to_drone[1].readsigint = not pre(cc_to_drone[1].readsignal) == cc_to_drone[1].readsignal
*/
void System_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  (data->localData[0]->booleanVars[96]/* cc_to_drone[1].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[100]/* cc_to_drone[1].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[100]/* cc_to_drone[1].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[100]/* cc_to_drone[1].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[100]/* cc_to_drone[1].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 477
type: SIMPLE_ASSIGN
d[1].batteryPercentage = 100.0 * d[1].d.battery / d[1].p.capacity
*/
void System_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  (data->localData[0]->realVars[93]/* d[1].batteryPercentage variable */)  = (100.0) * (DIVISION_SIM((data->localData[0]->realVars[459]/* d[1].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[1330]/* d[1].p.capacity PARAM */) ,"d[1].p.capacity",equationIndexes));
  TRACE_POP
}
/*
equation index: 478
type: SIMPLE_ASSIGN
d[1].ctrl.droneDead = d[1].d.droneDead
*/
void System_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  (data->localData[0]->booleanVars[116]/* d[1].ctrl.droneDead DISCRETE */)  = (data->localData[0]->booleanVars[120]/* d[1].d.droneDead DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 479
type: SIMPLE_ASSIGN
d[4].ctrl.y = d[4].d.y
*/
void System_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  (data->localData[0]->realVars[128]/* d[4].ctrl.y variable */)  = (data->localData[0]->realVars[19]/* d[4].d.y STATE(1,d[4].d.Vy) */) ;
  TRACE_POP
}
/*
equation index: 480
type: SIMPLE_ASSIGN
d[4].ctrl.Trusty = d[4].ctrl.prm.m * (d[4].ctrl.ky1 * (d[4].ctrl.y - pre(d[4].ctrl.destY)) + d[4].ctrl.ky2 * d[4].d.Vy)
*/
void System_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  (data->localData[0]->realVars[104]/* d[4].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[729]/* d[4].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[433]/* d[4].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[128]/* d[4].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[454]/* d[4].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[437]/* d[4].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[7]/* d[4].d.Vy STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 481
type: SIMPLE_ASSIGN
$DER.d[4].d.Vy = d[4].ctrl.Trusty / d[4].d.p.m
*/
void System_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  (data->localData[0]->realVars[31]/* der(d[4].d.Vy) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[104]/* d[4].ctrl.Trusty variable */) ,(data->simulationInfo->realParameter[1061]/* d[4].d.p.m PARAM */) ,"d[4].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 482
type: SIMPLE_ASSIGN
d[4].ctrl.x = d[4].d.x
*/
void System_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  (data->localData[0]->realVars[124]/* d[4].ctrl.x variable */)  = (data->localData[0]->realVars[15]/* d[4].d.x STATE(1,d[4].d.Vx) */) ;
  TRACE_POP
}
/*
equation index: 483
type: SIMPLE_ASSIGN
d[4].ctrl.Trustx = d[4].ctrl.prm.m * (d[4].ctrl.kx1 * (d[4].ctrl.x - pre(d[4].ctrl.destX)) + d[4].ctrl.kx2 * d[4].d.Vx)
*/
void System_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  (data->localData[0]->realVars[100]/* d[4].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[729]/* d[4].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[425]/* d[4].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[124]/* d[4].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[450]/* d[4].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[429]/* d[4].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[3]/* d[4].d.Vx STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 484
type: SIMPLE_ASSIGN
$DER.d[4].d.Vx = d[4].ctrl.Trustx / d[4].d.p.m
*/
void System_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  (data->localData[0]->realVars[27]/* der(d[4].d.Vx) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[100]/* d[4].ctrl.Trustx variable */) ,(data->simulationInfo->realParameter[1061]/* d[4].d.p.m PARAM */) ,"d[4].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 485
type: SIMPLE_ASSIGN
d[3].ctrl.y = d[3].d.y
*/
void System_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  (data->localData[0]->realVars[127]/* d[3].ctrl.y variable */)  = (data->localData[0]->realVars[18]/* d[3].d.y STATE(1,d[3].d.Vy) */) ;
  TRACE_POP
}
/*
equation index: 486
type: SIMPLE_ASSIGN
d[3].ctrl.Trusty = d[3].ctrl.prm.m * (d[3].ctrl.ky1 * (d[3].ctrl.y - pre(d[3].ctrl.destY)) + d[3].ctrl.ky2 * d[3].d.Vy)
*/
void System_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  (data->localData[0]->realVars[103]/* d[3].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[728]/* d[3].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[432]/* d[3].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[127]/* d[3].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[453]/* d[3].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[436]/* d[3].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[6]/* d[3].d.Vy STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 487
type: SIMPLE_ASSIGN
$DER.d[3].d.Vy = d[3].ctrl.Trusty / d[3].d.p.m
*/
void System_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  (data->localData[0]->realVars[30]/* der(d[3].d.Vy) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[103]/* d[3].ctrl.Trusty variable */) ,(data->simulationInfo->realParameter[1060]/* d[3].d.p.m PARAM */) ,"d[3].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 488
type: SIMPLE_ASSIGN
d[3].ctrl.x = d[3].d.x
*/
void System_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  (data->localData[0]->realVars[123]/* d[3].ctrl.x variable */)  = (data->localData[0]->realVars[14]/* d[3].d.x STATE(1,d[3].d.Vx) */) ;
  TRACE_POP
}
/*
equation index: 489
type: SIMPLE_ASSIGN
d[3].ctrl.Trustx = d[3].ctrl.prm.m * (d[3].ctrl.kx1 * (d[3].ctrl.x - pre(d[3].ctrl.destX)) + d[3].ctrl.kx2 * d[3].d.Vx)
*/
void System_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  (data->localData[0]->realVars[99]/* d[3].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[728]/* d[3].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[424]/* d[3].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[123]/* d[3].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[449]/* d[3].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[428]/* d[3].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[2]/* d[3].d.Vx STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 490
type: SIMPLE_ASSIGN
$DER.d[3].d.Vx = d[3].ctrl.Trustx / d[3].d.p.m
*/
void System_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  (data->localData[0]->realVars[26]/* der(d[3].d.Vx) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[99]/* d[3].ctrl.Trustx variable */) ,(data->simulationInfo->realParameter[1060]/* d[3].d.p.m PARAM */) ,"d[3].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 491
type: SIMPLE_ASSIGN
d[2].ctrl.y = d[2].d.y
*/
void System_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  (data->localData[0]->realVars[126]/* d[2].ctrl.y variable */)  = (data->localData[0]->realVars[17]/* d[2].d.y STATE(1,d[2].d.Vy) */) ;
  TRACE_POP
}
/*
equation index: 492
type: SIMPLE_ASSIGN
d[2].ctrl.Trusty = d[2].ctrl.prm.m * (d[2].ctrl.ky1 * (d[2].ctrl.y - pre(d[2].ctrl.destY)) + d[2].ctrl.ky2 * d[2].d.Vy)
*/
void System_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  (data->localData[0]->realVars[102]/* d[2].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[727]/* d[2].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[431]/* d[2].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[126]/* d[2].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[452]/* d[2].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[435]/* d[2].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[5]/* d[2].d.Vy STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 493
type: SIMPLE_ASSIGN
$DER.d[2].d.Vy = d[2].ctrl.Trusty / d[2].d.p.m
*/
void System_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  (data->localData[0]->realVars[29]/* der(d[2].d.Vy) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[102]/* d[2].ctrl.Trusty variable */) ,(data->simulationInfo->realParameter[1059]/* d[2].d.p.m PARAM */) ,"d[2].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 494
type: SIMPLE_ASSIGN
d[2].ctrl.x = d[2].d.x
*/
void System_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  (data->localData[0]->realVars[122]/* d[2].ctrl.x variable */)  = (data->localData[0]->realVars[13]/* d[2].d.x STATE(1,d[2].d.Vx) */) ;
  TRACE_POP
}
/*
equation index: 495
type: SIMPLE_ASSIGN
d[2].ctrl.Trustx = d[2].ctrl.prm.m * (d[2].ctrl.kx1 * (d[2].ctrl.x - pre(d[2].ctrl.destX)) + d[2].ctrl.kx2 * d[2].d.Vx)
*/
void System_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  (data->localData[0]->realVars[98]/* d[2].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[727]/* d[2].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[423]/* d[2].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[122]/* d[2].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[448]/* d[2].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[427]/* d[2].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[1]/* d[2].d.Vx STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 496
type: SIMPLE_ASSIGN
$DER.d[2].d.Vx = d[2].ctrl.Trustx / d[2].d.p.m
*/
void System_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  (data->localData[0]->realVars[25]/* der(d[2].d.Vx) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[98]/* d[2].ctrl.Trustx variable */) ,(data->simulationInfo->realParameter[1059]/* d[2].d.p.m PARAM */) ,"d[2].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 497
type: SIMPLE_ASSIGN
d[1].ctrl.y = d[1].d.y
*/
void System_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  (data->localData[0]->realVars[125]/* d[1].ctrl.y variable */)  = (data->localData[0]->realVars[16]/* d[1].d.y STATE(1,d[1].d.Vy) */) ;
  TRACE_POP
}
/*
equation index: 498
type: SIMPLE_ASSIGN
d[1].ctrl.Trusty = d[1].ctrl.prm.m * (d[1].ctrl.ky1 * (d[1].ctrl.y - pre(d[1].ctrl.destY)) + d[1].ctrl.ky2 * d[1].d.Vy)
*/
void System_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  (data->localData[0]->realVars[101]/* d[1].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[726]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[430]/* d[1].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[125]/* d[1].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[451]/* d[1].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[434]/* d[1].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[4]/* d[1].d.Vy STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 499
type: SIMPLE_ASSIGN
$DER.d[1].d.Vy = d[1].ctrl.Trusty / d[1].d.p.m
*/
void System_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  (data->localData[0]->realVars[28]/* der(d[1].d.Vy) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[101]/* d[1].ctrl.Trusty variable */) ,(data->simulationInfo->realParameter[1058]/* d[1].d.p.m PARAM */) ,"d[1].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 500
type: SIMPLE_ASSIGN
d[1].ctrl.x = d[1].d.x
*/
void System_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  (data->localData[0]->realVars[121]/* d[1].ctrl.x variable */)  = (data->localData[0]->realVars[12]/* d[1].d.x STATE(1,d[1].d.Vx) */) ;
  TRACE_POP
}
/*
equation index: 501
type: SIMPLE_ASSIGN
d[1].ctrl.Trustx = d[1].ctrl.prm.m * (d[1].ctrl.kx1 * (d[1].ctrl.x - pre(d[1].ctrl.destX)) + d[1].ctrl.kx2 * d[1].d.Vx)
*/
void System_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  (data->localData[0]->realVars[97]/* d[1].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[726]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[422]/* d[1].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[121]/* d[1].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[447]/* d[1].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[426]/* d[1].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 502
type: SIMPLE_ASSIGN
$DER.d[1].d.Vx = d[1].ctrl.Trustx / d[1].d.p.m
*/
void System_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  (data->localData[0]->realVars[24]/* der(d[1].d.Vx) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[97]/* d[1].ctrl.Trustx variable */) ,(data->simulationInfo->realParameter[1058]/* d[1].d.p.m PARAM */) ,"d[1].d.p.m",equationIndexes);
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
  System_eqFunction_302(data, threadData);

  System_eqFunction_303(data, threadData);

  System_eqFunction_304(data, threadData);

  System_eqFunction_305(data, threadData);

  System_eqFunction_306(data, threadData);

  System_eqFunction_307(data, threadData);

  System_eqFunction_308(data, threadData);

  System_eqFunction_309(data, threadData);

  System_eqFunction_310(data, threadData);

  System_eqFunction_311(data, threadData);

  System_eqFunction_312(data, threadData);

  System_eqFunction_313(data, threadData);

  System_eqFunction_314(data, threadData);

  System_eqFunction_315(data, threadData);

  System_eqFunction_316(data, threadData);

  System_eqFunction_317(data, threadData);

  System_eqFunction_318(data, threadData);

  System_eqFunction_319(data, threadData);

  System_eqFunction_320(data, threadData);

  System_eqFunction_321(data, threadData);

  System_eqFunction_322(data, threadData);

  System_eqFunction_323(data, threadData);

  System_eqFunction_324(data, threadData);

  System_eqFunction_325(data, threadData);

  System_eqFunction_326(data, threadData);

  System_eqFunction_327(data, threadData);

  System_eqFunction_328(data, threadData);

  System_eqFunction_329(data, threadData);

  System_eqFunction_330(data, threadData);

  System_eqFunction_331(data, threadData);

  System_eqFunction_332(data, threadData);

  System_eqFunction_333(data, threadData);

  System_eqFunction_334(data, threadData);

  System_eqFunction_335(data, threadData);

  System_eqFunction_336(data, threadData);

  System_eqFunction_337(data, threadData);

  System_eqFunction_338(data, threadData);

  System_eqFunction_339(data, threadData);

  System_eqFunction_340(data, threadData);

  System_eqFunction_341(data, threadData);

  System_eqFunction_342(data, threadData);

  System_eqFunction_343(data, threadData);

  System_eqFunction_344(data, threadData);

  System_eqFunction_345(data, threadData);

  System_eqFunction_346(data, threadData);

  System_eqFunction_347(data, threadData);

  System_eqFunction_348(data, threadData);

  System_eqFunction_349(data, threadData);

  System_eqFunction_350(data, threadData);

  System_eqFunction_351(data, threadData);

  System_eqFunction_352(data, threadData);

  System_eqFunction_353(data, threadData);

  System_eqFunction_354(data, threadData);

  System_eqFunction_355(data, threadData);

  System_eqFunction_356(data, threadData);

  System_eqFunction_357(data, threadData);

  System_eqFunction_358(data, threadData);

  System_eqFunction_359(data, threadData);

  System_eqFunction_360(data, threadData);

  System_eqFunction_361(data, threadData);

  System_eqFunction_362(data, threadData);

  System_eqFunction_363(data, threadData);

  System_eqFunction_364(data, threadData);

  System_eqFunction_365(data, threadData);

  System_eqFunction_366(data, threadData);

  System_eqFunction_367(data, threadData);

  System_eqFunction_368(data, threadData);

  System_eqFunction_369(data, threadData);

  System_eqFunction_370(data, threadData);

  System_eqFunction_371(data, threadData);

  System_eqFunction_372(data, threadData);

  System_eqFunction_373(data, threadData);

  System_eqFunction_374(data, threadData);

  System_eqFunction_375(data, threadData);

  System_eqFunction_376(data, threadData);

  System_eqFunction_377(data, threadData);

  System_eqFunction_378(data, threadData);

  System_eqFunction_379(data, threadData);

  System_eqFunction_380(data, threadData);

  System_eqFunction_381(data, threadData);

  System_eqFunction_382(data, threadData);

  System_eqFunction_383(data, threadData);

  System_eqFunction_384(data, threadData);

  System_eqFunction_385(data, threadData);

  System_eqFunction_386(data, threadData);

  System_eqFunction_387(data, threadData);

  System_eqFunction_388(data, threadData);

  System_eqFunction_389(data, threadData);

  System_eqFunction_390(data, threadData);

  System_eqFunction_391(data, threadData);

  System_eqFunction_392(data, threadData);

  System_eqFunction_393(data, threadData);

  System_eqFunction_394(data, threadData);

  System_eqFunction_395(data, threadData);

  System_eqFunction_396(data, threadData);

  System_eqFunction_397(data, threadData);

  System_eqFunction_398(data, threadData);

  System_eqFunction_399(data, threadData);

  System_eqFunction_400(data, threadData);

  System_eqFunction_401(data, threadData);

  System_eqFunction_402(data, threadData);

  System_eqFunction_403(data, threadData);

  System_eqFunction_404(data, threadData);

  System_eqFunction_405(data, threadData);

  System_eqFunction_406(data, threadData);

  System_eqFunction_407(data, threadData);

  System_eqFunction_408(data, threadData);

  System_eqFunction_409(data, threadData);

  System_eqFunction_410(data, threadData);

  System_eqFunction_411(data, threadData);

  System_eqFunction_412(data, threadData);

  System_eqFunction_413(data, threadData);

  System_eqFunction_414(data, threadData);

  System_eqFunction_415(data, threadData);

  System_eqFunction_416(data, threadData);

  System_eqFunction_417(data, threadData);

  System_eqFunction_418(data, threadData);

  System_eqFunction_419(data, threadData);

  System_eqFunction_420(data, threadData);

  System_eqFunction_421(data, threadData);

  System_eqFunction_422(data, threadData);

  System_eqFunction_423(data, threadData);

  System_eqFunction_424(data, threadData);

  System_eqFunction_425(data, threadData);

  System_eqFunction_426(data, threadData);

  System_eqFunction_427(data, threadData);

  System_eqFunction_428(data, threadData);

  System_eqFunction_429(data, threadData);

  System_eqFunction_430(data, threadData);

  System_eqFunction_431(data, threadData);

  System_eqFunction_432(data, threadData);

  System_eqFunction_433(data, threadData);

  System_eqFunction_434(data, threadData);

  System_eqFunction_435(data, threadData);

  System_eqFunction_436(data, threadData);

  System_eqFunction_437(data, threadData);

  System_eqFunction_438(data, threadData);

  System_eqFunction_439(data, threadData);

  System_eqFunction_440(data, threadData);

  System_eqFunction_441(data, threadData);

  System_eqFunction_442(data, threadData);

  System_eqFunction_443(data, threadData);

  System_eqFunction_444(data, threadData);

  System_eqFunction_445(data, threadData);

  System_eqFunction_446(data, threadData);

  System_eqFunction_447(data, threadData);

  System_eqFunction_448(data, threadData);

  System_eqFunction_449(data, threadData);

  System_eqFunction_450(data, threadData);

  System_eqFunction_451(data, threadData);

  System_eqFunction_452(data, threadData);

  System_eqFunction_453(data, threadData);

  System_eqFunction_454(data, threadData);

  System_eqFunction_455(data, threadData);

  System_eqFunction_456(data, threadData);

  System_eqFunction_457(data, threadData);

  System_eqFunction_458(data, threadData);

  System_eqFunction_459(data, threadData);

  System_eqFunction_460(data, threadData);

  System_eqFunction_461(data, threadData);

  System_eqFunction_462(data, threadData);

  System_eqFunction_463(data, threadData);

  System_eqFunction_464(data, threadData);

  System_eqFunction_465(data, threadData);

  System_eqFunction_466(data, threadData);

  System_eqFunction_467(data, threadData);

  System_eqFunction_468(data, threadData);

  System_eqFunction_469(data, threadData);

  System_eqFunction_470(data, threadData);

  System_eqFunction_471(data, threadData);

  System_eqFunction_472(data, threadData);

  System_eqFunction_473(data, threadData);

  System_eqFunction_474(data, threadData);

  System_eqFunction_475(data, threadData);

  System_eqFunction_476(data, threadData);

  System_eqFunction_477(data, threadData);

  System_eqFunction_478(data, threadData);

  System_eqFunction_479(data, threadData);

  System_eqFunction_480(data, threadData);

  System_eqFunction_481(data, threadData);

  System_eqFunction_482(data, threadData);

  System_eqFunction_483(data, threadData);

  System_eqFunction_484(data, threadData);

  System_eqFunction_485(data, threadData);

  System_eqFunction_486(data, threadData);

  System_eqFunction_487(data, threadData);

  System_eqFunction_488(data, threadData);

  System_eqFunction_489(data, threadData);

  System_eqFunction_490(data, threadData);

  System_eqFunction_491(data, threadData);

  System_eqFunction_492(data, threadData);

  System_eqFunction_493(data, threadData);

  System_eqFunction_494(data, threadData);

  System_eqFunction_495(data, threadData);

  System_eqFunction_496(data, threadData);

  System_eqFunction_497(data, threadData);

  System_eqFunction_498(data, threadData);

  System_eqFunction_499(data, threadData);

  System_eqFunction_500(data, threadData);

  System_eqFunction_501(data, threadData);

  System_eqFunction_502(data, threadData);
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
extern void System_eqFunction_309(DATA* data, threadData_t *threadData);
extern void System_eqFunction_310(DATA* data, threadData_t *threadData);
extern void System_eqFunction_311(DATA* data, threadData_t *threadData);
extern void System_eqFunction_312(DATA* data, threadData_t *threadData);
extern void System_eqFunction_313(DATA* data, threadData_t *threadData);
extern void System_eqFunction_314(DATA* data, threadData_t *threadData);
extern void System_eqFunction_315(DATA* data, threadData_t *threadData);
extern void System_eqFunction_316(DATA* data, threadData_t *threadData);
extern void System_eqFunction_317(DATA* data, threadData_t *threadData);
extern void System_eqFunction_318(DATA* data, threadData_t *threadData);
extern void System_eqFunction_319(DATA* data, threadData_t *threadData);
extern void System_eqFunction_320(DATA* data, threadData_t *threadData);
extern void System_eqFunction_321(DATA* data, threadData_t *threadData);
extern void System_eqFunction_322(DATA* data, threadData_t *threadData);
extern void System_eqFunction_323(DATA* data, threadData_t *threadData);
extern void System_eqFunction_324(DATA* data, threadData_t *threadData);
extern void System_eqFunction_325(DATA* data, threadData_t *threadData);
extern void System_eqFunction_326(DATA* data, threadData_t *threadData);
extern void System_eqFunction_327(DATA* data, threadData_t *threadData);
extern void System_eqFunction_328(DATA* data, threadData_t *threadData);
extern void System_eqFunction_479(DATA* data, threadData_t *threadData);
extern void System_eqFunction_480(DATA* data, threadData_t *threadData);
extern void System_eqFunction_481(DATA* data, threadData_t *threadData);
extern void System_eqFunction_482(DATA* data, threadData_t *threadData);
extern void System_eqFunction_483(DATA* data, threadData_t *threadData);
extern void System_eqFunction_484(DATA* data, threadData_t *threadData);
extern void System_eqFunction_485(DATA* data, threadData_t *threadData);
extern void System_eqFunction_486(DATA* data, threadData_t *threadData);
extern void System_eqFunction_487(DATA* data, threadData_t *threadData);
extern void System_eqFunction_488(DATA* data, threadData_t *threadData);
extern void System_eqFunction_489(DATA* data, threadData_t *threadData);
extern void System_eqFunction_490(DATA* data, threadData_t *threadData);
extern void System_eqFunction_491(DATA* data, threadData_t *threadData);
extern void System_eqFunction_492(DATA* data, threadData_t *threadData);
extern void System_eqFunction_493(DATA* data, threadData_t *threadData);
extern void System_eqFunction_494(DATA* data, threadData_t *threadData);
extern void System_eqFunction_495(DATA* data, threadData_t *threadData);
extern void System_eqFunction_496(DATA* data, threadData_t *threadData);
extern void System_eqFunction_497(DATA* data, threadData_t *threadData);
extern void System_eqFunction_498(DATA* data, threadData_t *threadData);
extern void System_eqFunction_499(DATA* data, threadData_t *threadData);
extern void System_eqFunction_500(DATA* data, threadData_t *threadData);
extern void System_eqFunction_501(DATA* data, threadData_t *threadData);
extern void System_eqFunction_502(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  {
    System_eqFunction_309(data, threadData);
    threadData->lastEquationSolved = 309;
  }
  {
    System_eqFunction_310(data, threadData);
    threadData->lastEquationSolved = 310;
  }
  {
    System_eqFunction_311(data, threadData);
    threadData->lastEquationSolved = 311;
  }
  {
    System_eqFunction_312(data, threadData);
    threadData->lastEquationSolved = 312;
  }
  {
    System_eqFunction_313(data, threadData);
    threadData->lastEquationSolved = 313;
  }
  {
    System_eqFunction_314(data, threadData);
    threadData->lastEquationSolved = 314;
  }
  {
    System_eqFunction_315(data, threadData);
    threadData->lastEquationSolved = 315;
  }
  {
    System_eqFunction_316(data, threadData);
    threadData->lastEquationSolved = 316;
  }
  {
    System_eqFunction_317(data, threadData);
    threadData->lastEquationSolved = 317;
  }
  {
    System_eqFunction_318(data, threadData);
    threadData->lastEquationSolved = 318;
  }
  {
    System_eqFunction_319(data, threadData);
    threadData->lastEquationSolved = 319;
  }
  {
    System_eqFunction_320(data, threadData);
    threadData->lastEquationSolved = 320;
  }
  {
    System_eqFunction_321(data, threadData);
    threadData->lastEquationSolved = 321;
  }
  {
    System_eqFunction_322(data, threadData);
    threadData->lastEquationSolved = 322;
  }
  {
    System_eqFunction_323(data, threadData);
    threadData->lastEquationSolved = 323;
  }
  {
    System_eqFunction_324(data, threadData);
    threadData->lastEquationSolved = 324;
  }
  {
    System_eqFunction_325(data, threadData);
    threadData->lastEquationSolved = 325;
  }
  {
    System_eqFunction_326(data, threadData);
    threadData->lastEquationSolved = 326;
  }
  {
    System_eqFunction_327(data, threadData);
    threadData->lastEquationSolved = 327;
  }
  {
    System_eqFunction_328(data, threadData);
    threadData->lastEquationSolved = 328;
  }
  {
    System_eqFunction_479(data, threadData);
    threadData->lastEquationSolved = 479;
  }
  {
    System_eqFunction_480(data, threadData);
    threadData->lastEquationSolved = 480;
  }
  {
    System_eqFunction_481(data, threadData);
    threadData->lastEquationSolved = 481;
  }
  {
    System_eqFunction_482(data, threadData);
    threadData->lastEquationSolved = 482;
  }
  {
    System_eqFunction_483(data, threadData);
    threadData->lastEquationSolved = 483;
  }
  {
    System_eqFunction_484(data, threadData);
    threadData->lastEquationSolved = 484;
  }
  {
    System_eqFunction_485(data, threadData);
    threadData->lastEquationSolved = 485;
  }
  {
    System_eqFunction_486(data, threadData);
    threadData->lastEquationSolved = 486;
  }
  {
    System_eqFunction_487(data, threadData);
    threadData->lastEquationSolved = 487;
  }
  {
    System_eqFunction_488(data, threadData);
    threadData->lastEquationSolved = 488;
  }
  {
    System_eqFunction_489(data, threadData);
    threadData->lastEquationSolved = 489;
  }
  {
    System_eqFunction_490(data, threadData);
    threadData->lastEquationSolved = 490;
  }
  {
    System_eqFunction_491(data, threadData);
    threadData->lastEquationSolved = 491;
  }
  {
    System_eqFunction_492(data, threadData);
    threadData->lastEquationSolved = 492;
  }
  {
    System_eqFunction_493(data, threadData);
    threadData->lastEquationSolved = 493;
  }
  {
    System_eqFunction_494(data, threadData);
    threadData->lastEquationSolved = 494;
  }
  {
    System_eqFunction_495(data, threadData);
    threadData->lastEquationSolved = 495;
  }
  {
    System_eqFunction_496(data, threadData);
    threadData->lastEquationSolved = 496;
  }
  {
    System_eqFunction_497(data, threadData);
    threadData->lastEquationSolved = 497;
  }
  {
    System_eqFunction_498(data, threadData);
    threadData->lastEquationSolved = 498;
  }
  {
    System_eqFunction_499(data, threadData);
    threadData->lastEquationSolved = 499;
  }
  {
    System_eqFunction_500(data, threadData);
    threadData->lastEquationSolved = 500;
  }
  {
    System_eqFunction_501(data, threadData);
    threadData->lastEquationSolved = 501;
  }
  {
    System_eqFunction_502(data, threadData);
    threadData->lastEquationSolved = 502;
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
  data->modelData->modelGUID = "{689221bd-06e8-47d6-bb33-bd9a9e97655d}";
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
  
  data->modelData->nStates = 24;
  data->modelData->nVariablesReal = 761;
  data->modelData->nDiscreteReal = 610;
  data->modelData->nVariablesInteger = 76;
  data->modelData->nVariablesBoolean = 164;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 1944;
  data->modelData->nParametersInteger = 96;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 7;
  
  data->modelData->nAliasReal = 65;
  data->modelData->nAliasInteger = 4;
  data->modelData->nAliasBoolean = 1;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 1;
  data->modelData->nSamples = 14;
  data->modelData->nRelations = 1;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "System_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 29;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1548;
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


