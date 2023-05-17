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

  data->simulationInfo->outputVars[0] = (data->localData[0]->realVars[84]/* Tcc variable */) ;
  data->simulationInfo->outputVars[1] = (data->localData[0]->realVars[85]/* arrivalThreshold variable */) ;
  data->simulationInfo->outputVars[2] = (data->localData[0]->realVars[86]/* arrival_timeout variable */) ;
  data->simulationInfo->outputVars[3] = (data->localData[0]->realVars[122]/* cc_choice variable */) ;
  data->simulationInfo->outputVars[4] = (data->localData[0]->realVars[158]/* comm_timeout variable */) ;
  data->simulationInfo->outputVars[5] = (data->localData[0]->realVars[257]/* p_recharge variable */) ;
  data->simulationInfo->outputVars[6] = (data->localData[0]->realVars[258]/* p_worst variable */) ;
  
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
equation index: 521
type: SIMPLE_ASSIGN
p_recharge = p.p_recharge
*/
void System_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  (data->localData[0]->realVars[257]/* p_recharge variable */)  = (data->simulationInfo->realParameter[5026]/* p.p_recharge PARAM */) ;
  TRACE_POP
}
/*
equation index: 522
type: SIMPLE_ASSIGN
arrivalThreshold = p.arrivalThreshold
*/
void System_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  (data->localData[0]->realVars[85]/* arrivalThreshold variable */)  = (data->simulationInfo->realParameter[5002]/* p.arrivalThreshold PARAM */) ;
  TRACE_POP
}
/*
equation index: 523
type: SIMPLE_ASSIGN
arrival_timeout = p.arrival_timeout
*/
void System_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  (data->localData[0]->realVars[86]/* arrival_timeout variable */)  = (data->simulationInfo->realParameter[5003]/* p.arrival_timeout PARAM */) ;
  TRACE_POP
}
/*
equation index: 524
type: SIMPLE_ASSIGN
p_worst = p.p_worst
*/
void System_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  (data->localData[0]->realVars[258]/* p_worst variable */)  = (data->simulationInfo->realParameter[5027]/* p.p_worst PARAM */) ;
  TRACE_POP
}
/*
equation index: 525
type: SIMPLE_ASSIGN
comm_timeout = p.comm_timeout
*/
void System_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  (data->localData[0]->realVars[158]/* comm_timeout variable */)  = (data->simulationInfo->realParameter[5008]/* p.comm_timeout PARAM */) ;
  TRACE_POP
}
/*
equation index: 526
type: SIMPLE_ASSIGN
Tcc = p.Tcc
*/
void System_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  (data->localData[0]->realVars[84]/* Tcc variable */)  = (data->simulationInfo->realParameter[4903]/* p.Tcc PARAM */) ;
  TRACE_POP
}
/*
equation index: 527
type: SIMPLE_ASSIGN
cc_choice = p.cc_choice
*/
void System_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  (data->localData[0]->realVars[122]/* cc_choice variable */)  = (data->simulationInfo->realParameter[5006]/* p.cc_choice PARAM */) ;
  TRACE_POP
}
/*
equation index: 528
type: SIMPLE_ASSIGN
d[7].ctrl.Trustz = d[7].ctrl.prm.m * (9.81 + d[7].ctrl.kz1 * (d[7].d.z - pre(d[7].ctrl.destZ)) + d[7].ctrl.kz2 * d[7].d.Vz)
*/
void System_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  (data->localData[0]->realVars[186]/* d[7].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1929]/* d[7].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[1089]/* d[7].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[41]/* d[7].d.z STATE(1,d[7].d.Vz) */)  - (data->simulationInfo->realVarsPre[790]/* d[7].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[1096]/* d[7].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[20]/* d[7].d.Vz STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 529
type: SIMPLE_ASSIGN
$DER.d[7].d.Vz = -9.81 + d[7].ctrl.Trustz / d[7].d.p.m
*/
void System_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  (data->localData[0]->realVars[62]/* der(d[7].d.Vz) STATE_DER */)  = -9.81 + DIVISION_SIM((data->localData[0]->realVars[186]/* d[7].ctrl.Trustz variable */) ,(data->simulationInfo->realParameter[2846]/* d[7].d.p.m PARAM */) ,"d[7].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 530
type: SIMPLE_ASSIGN
$DER.d[7].d.z = d[7].d.Vz
*/
void System_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  (data->localData[0]->realVars[83]/* der(d[7].d.z) STATE_DER */)  = (data->localData[0]->realVars[20]/* d[7].d.Vz STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 531
type: SIMPLE_ASSIGN
$DER.d[7].d.y = d[7].d.Vy
*/
void System_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  (data->localData[0]->realVars[76]/* der(d[7].d.y) STATE_DER */)  = (data->localData[0]->realVars[13]/* d[7].d.Vy STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 532
type: SIMPLE_ASSIGN
$DER.d[7].d.x = d[7].d.Vx
*/
void System_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  (data->localData[0]->realVars[69]/* der(d[7].d.x) STATE_DER */)  = (data->localData[0]->realVars[6]/* d[7].d.Vx STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 533
type: SIMPLE_ASSIGN
d[6].ctrl.Trustz = d[6].ctrl.prm.m * (9.81 + d[6].ctrl.kz1 * (d[6].d.z - pre(d[6].ctrl.destZ)) + d[6].ctrl.kz2 * d[6].d.Vz)
*/
void System_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  (data->localData[0]->realVars[185]/* d[6].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1928]/* d[6].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[1088]/* d[6].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[40]/* d[6].d.z STATE(1,d[6].d.Vz) */)  - (data->simulationInfo->realVarsPre[789]/* d[6].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[1095]/* d[6].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[19]/* d[6].d.Vz STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 534
type: SIMPLE_ASSIGN
$DER.d[6].d.Vz = -9.81 + d[6].ctrl.Trustz / d[6].d.p.m
*/
void System_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  (data->localData[0]->realVars[61]/* der(d[6].d.Vz) STATE_DER */)  = -9.81 + DIVISION_SIM((data->localData[0]->realVars[185]/* d[6].ctrl.Trustz variable */) ,(data->simulationInfo->realParameter[2845]/* d[6].d.p.m PARAM */) ,"d[6].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 535
type: SIMPLE_ASSIGN
$DER.d[6].d.z = d[6].d.Vz
*/
void System_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  (data->localData[0]->realVars[82]/* der(d[6].d.z) STATE_DER */)  = (data->localData[0]->realVars[19]/* d[6].d.Vz STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 536
type: SIMPLE_ASSIGN
$DER.d[6].d.y = d[6].d.Vy
*/
void System_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  (data->localData[0]->realVars[75]/* der(d[6].d.y) STATE_DER */)  = (data->localData[0]->realVars[12]/* d[6].d.Vy STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 537
type: SIMPLE_ASSIGN
$DER.d[6].d.x = d[6].d.Vx
*/
void System_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  (data->localData[0]->realVars[68]/* der(d[6].d.x) STATE_DER */)  = (data->localData[0]->realVars[5]/* d[6].d.Vx STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 538
type: SIMPLE_ASSIGN
d[5].ctrl.Trustz = d[5].ctrl.prm.m * (9.81 + d[5].ctrl.kz1 * (d[5].d.z - pre(d[5].ctrl.destZ)) + d[5].ctrl.kz2 * d[5].d.Vz)
*/
void System_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  (data->localData[0]->realVars[184]/* d[5].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1927]/* d[5].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[1087]/* d[5].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[39]/* d[5].d.z STATE(1,d[5].d.Vz) */)  - (data->simulationInfo->realVarsPre[788]/* d[5].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[1094]/* d[5].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[18]/* d[5].d.Vz STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 539
type: SIMPLE_ASSIGN
$DER.d[5].d.Vz = -9.81 + d[5].ctrl.Trustz / d[5].d.p.m
*/
void System_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  (data->localData[0]->realVars[60]/* der(d[5].d.Vz) STATE_DER */)  = -9.81 + DIVISION_SIM((data->localData[0]->realVars[184]/* d[5].ctrl.Trustz variable */) ,(data->simulationInfo->realParameter[2844]/* d[5].d.p.m PARAM */) ,"d[5].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 540
type: SIMPLE_ASSIGN
$DER.d[5].d.z = d[5].d.Vz
*/
void System_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  (data->localData[0]->realVars[81]/* der(d[5].d.z) STATE_DER */)  = (data->localData[0]->realVars[18]/* d[5].d.Vz STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 541
type: SIMPLE_ASSIGN
$DER.d[5].d.y = d[5].d.Vy
*/
void System_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  (data->localData[0]->realVars[74]/* der(d[5].d.y) STATE_DER */)  = (data->localData[0]->realVars[11]/* d[5].d.Vy STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 542
type: SIMPLE_ASSIGN
$DER.d[5].d.x = d[5].d.Vx
*/
void System_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  (data->localData[0]->realVars[67]/* der(d[5].d.x) STATE_DER */)  = (data->localData[0]->realVars[4]/* d[5].d.Vx STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 543
type: SIMPLE_ASSIGN
d[4].ctrl.Trustz = d[4].ctrl.prm.m * (9.81 + d[4].ctrl.kz1 * (d[4].d.z - pre(d[4].ctrl.destZ)) + d[4].ctrl.kz2 * d[4].d.Vz)
*/
void System_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  (data->localData[0]->realVars[183]/* d[4].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1926]/* d[4].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[1086]/* d[4].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[38]/* d[4].d.z STATE(1,d[4].d.Vz) */)  - (data->simulationInfo->realVarsPre[787]/* d[4].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[1093]/* d[4].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[17]/* d[4].d.Vz STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 544
type: SIMPLE_ASSIGN
$DER.d[4].d.Vz = -9.81 + d[4].ctrl.Trustz / d[4].d.p.m
*/
void System_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  (data->localData[0]->realVars[59]/* der(d[4].d.Vz) STATE_DER */)  = -9.81 + DIVISION_SIM((data->localData[0]->realVars[183]/* d[4].ctrl.Trustz variable */) ,(data->simulationInfo->realParameter[2843]/* d[4].d.p.m PARAM */) ,"d[4].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 545
type: SIMPLE_ASSIGN
$DER.d[4].d.z = d[4].d.Vz
*/
void System_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  (data->localData[0]->realVars[80]/* der(d[4].d.z) STATE_DER */)  = (data->localData[0]->realVars[17]/* d[4].d.Vz STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 546
type: SIMPLE_ASSIGN
$DER.d[4].d.y = d[4].d.Vy
*/
void System_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  (data->localData[0]->realVars[73]/* der(d[4].d.y) STATE_DER */)  = (data->localData[0]->realVars[10]/* d[4].d.Vy STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 547
type: SIMPLE_ASSIGN
$DER.d[4].d.x = d[4].d.Vx
*/
void System_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  (data->localData[0]->realVars[66]/* der(d[4].d.x) STATE_DER */)  = (data->localData[0]->realVars[3]/* d[4].d.Vx STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 548
type: SIMPLE_ASSIGN
d[3].ctrl.Trustz = d[3].ctrl.prm.m * (9.81 + d[3].ctrl.kz1 * (d[3].d.z - pre(d[3].ctrl.destZ)) + d[3].ctrl.kz2 * d[3].d.Vz)
*/
void System_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  (data->localData[0]->realVars[182]/* d[3].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1925]/* d[3].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[1085]/* d[3].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[37]/* d[3].d.z STATE(1,d[3].d.Vz) */)  - (data->simulationInfo->realVarsPre[786]/* d[3].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[1092]/* d[3].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[16]/* d[3].d.Vz STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 549
type: SIMPLE_ASSIGN
$DER.d[3].d.Vz = -9.81 + d[3].ctrl.Trustz / d[3].d.p.m
*/
void System_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  (data->localData[0]->realVars[58]/* der(d[3].d.Vz) STATE_DER */)  = -9.81 + DIVISION_SIM((data->localData[0]->realVars[182]/* d[3].ctrl.Trustz variable */) ,(data->simulationInfo->realParameter[2842]/* d[3].d.p.m PARAM */) ,"d[3].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 550
type: SIMPLE_ASSIGN
$DER.d[3].d.z = d[3].d.Vz
*/
void System_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  (data->localData[0]->realVars[79]/* der(d[3].d.z) STATE_DER */)  = (data->localData[0]->realVars[16]/* d[3].d.Vz STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 551
type: SIMPLE_ASSIGN
$DER.d[3].d.y = d[3].d.Vy
*/
void System_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  (data->localData[0]->realVars[72]/* der(d[3].d.y) STATE_DER */)  = (data->localData[0]->realVars[9]/* d[3].d.Vy STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 552
type: SIMPLE_ASSIGN
$DER.d[3].d.x = d[3].d.Vx
*/
void System_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  (data->localData[0]->realVars[65]/* der(d[3].d.x) STATE_DER */)  = (data->localData[0]->realVars[2]/* d[3].d.Vx STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 553
type: SIMPLE_ASSIGN
d[2].ctrl.Trustz = d[2].ctrl.prm.m * (9.81 + d[2].ctrl.kz1 * (d[2].d.z - pre(d[2].ctrl.destZ)) + d[2].ctrl.kz2 * d[2].d.Vz)
*/
void System_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  (data->localData[0]->realVars[181]/* d[2].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1924]/* d[2].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[1084]/* d[2].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[36]/* d[2].d.z STATE(1,d[2].d.Vz) */)  - (data->simulationInfo->realVarsPre[785]/* d[2].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[1091]/* d[2].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[15]/* d[2].d.Vz STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 554
type: SIMPLE_ASSIGN
$DER.d[2].d.Vz = -9.81 + d[2].ctrl.Trustz / d[2].d.p.m
*/
void System_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  (data->localData[0]->realVars[57]/* der(d[2].d.Vz) STATE_DER */)  = -9.81 + DIVISION_SIM((data->localData[0]->realVars[181]/* d[2].ctrl.Trustz variable */) ,(data->simulationInfo->realParameter[2841]/* d[2].d.p.m PARAM */) ,"d[2].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 555
type: SIMPLE_ASSIGN
$DER.d[2].d.z = d[2].d.Vz
*/
void System_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  (data->localData[0]->realVars[78]/* der(d[2].d.z) STATE_DER */)  = (data->localData[0]->realVars[15]/* d[2].d.Vz STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 556
type: SIMPLE_ASSIGN
$DER.d[2].d.y = d[2].d.Vy
*/
void System_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  (data->localData[0]->realVars[71]/* der(d[2].d.y) STATE_DER */)  = (data->localData[0]->realVars[8]/* d[2].d.Vy STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 557
type: SIMPLE_ASSIGN
$DER.d[2].d.x = d[2].d.Vx
*/
void System_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  (data->localData[0]->realVars[64]/* der(d[2].d.x) STATE_DER */)  = (data->localData[0]->realVars[1]/* d[2].d.Vx STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 558
type: SIMPLE_ASSIGN
d[1].ctrl.Trustz = d[1].ctrl.prm.m * (9.81 + d[1].ctrl.kz1 * (d[1].d.z - pre(d[1].ctrl.destZ)) + d[1].ctrl.kz2 * d[1].d.Vz)
*/
void System_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  (data->localData[0]->realVars[180]/* d[1].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[1923]/* d[1].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[1083]/* d[1].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[35]/* d[1].d.z STATE(1,d[1].d.Vz) */)  - (data->simulationInfo->realVarsPre[784]/* d[1].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[1090]/* d[1].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[14]/* d[1].d.Vz STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 559
type: SIMPLE_ASSIGN
$DER.d[1].d.Vz = -9.81 + d[1].ctrl.Trustz / d[1].d.p.m
*/
void System_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  (data->localData[0]->realVars[56]/* der(d[1].d.Vz) STATE_DER */)  = -9.81 + DIVISION_SIM((data->localData[0]->realVars[180]/* d[1].ctrl.Trustz variable */) ,(data->simulationInfo->realParameter[2840]/* d[1].d.p.m PARAM */) ,"d[1].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 560
type: SIMPLE_ASSIGN
$DER.d[1].d.z = d[1].d.Vz
*/
void System_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  (data->localData[0]->realVars[77]/* der(d[1].d.z) STATE_DER */)  = (data->localData[0]->realVars[14]/* d[1].d.Vz STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 561
type: SIMPLE_ASSIGN
$DER.d[1].d.y = d[1].d.Vy
*/
void System_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  (data->localData[0]->realVars[70]/* der(d[1].d.y) STATE_DER */)  = (data->localData[0]->realVars[7]/* d[1].d.Vy STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 562
type: SIMPLE_ASSIGN
$DER.d[1].d.x = d[1].d.Vx
*/
void System_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  (data->localData[0]->realVars[63]/* der(d[1].d.x) STATE_DER */)  = (data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 563
type: ALGORITHM

  cc.endSimulation := pre(cc.endSimulation);
  cc.setpointChanged[7] := pre(cc.setpointChanged[7]);
  cc.setpointChanged[6] := pre(cc.setpointChanged[6]);
  cc.setpointChanged[5] := pre(cc.setpointChanged[5]);
  cc.setpointChanged[4] := pre(cc.setpointChanged[4]);
  cc.setpointChanged[3] := pre(cc.setpointChanged[3]);
  cc.setpointChanged[2] := pre(cc.setpointChanged[2]);
  cc.setpointChanged[1] := pre(cc.setpointChanged[1]);
  cc.comm_done[7] := pre(cc.comm_done[7]);
  cc.comm_done[6] := pre(cc.comm_done[6]);
  cc.comm_done[5] := pre(cc.comm_done[5]);
  cc.comm_done[4] := pre(cc.comm_done[4]);
  cc.comm_done[3] := pre(cc.comm_done[3]);
  cc.comm_done[2] := pre(cc.comm_done[2]);
  cc.comm_done[1] := pre(cc.comm_done[1]);
  cc.state := pre(cc.state);
  cc.fifox[7] := pre(cc.fifox[7]);
  cc.fifox[6] := pre(cc.fifox[6]);
  cc.fifox[5] := pre(cc.fifox[5]);
  cc.fifox[4] := pre(cc.fifox[4]);
  cc.fifox[3] := pre(cc.fifox[3]);
  cc.fifox[2] := pre(cc.fifox[2]);
  cc.fifox[1] := pre(cc.fifox[1]);
  cc.pos[7,3] := pre(cc.pos[7,3]);
  cc.pos[7,2] := pre(cc.pos[7,2]);
  cc.pos[7,1] := pre(cc.pos[7,1]);
  cc.pos[6,3] := pre(cc.pos[6,3]);
  cc.pos[6,2] := pre(cc.pos[6,2]);
  cc.pos[6,1] := pre(cc.pos[6,1]);
  cc.pos[5,3] := pre(cc.pos[5,3]);
  cc.pos[5,2] := pre(cc.pos[5,2]);
  cc.pos[5,1] := pre(cc.pos[5,1]);
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
  cc.msg_to_drone[7,5] := pre(cc.msg_to_drone[7,5]);
  cc.msg_to_drone[7,4] := pre(cc.msg_to_drone[7,4]);
  cc.msg_to_drone[7,3] := pre(cc.msg_to_drone[7,3]);
  cc.msg_to_drone[7,2] := pre(cc.msg_to_drone[7,2]);
  cc.msg_to_drone[7,1] := pre(cc.msg_to_drone[7,1]);
  cc.msg_to_drone[6,5] := pre(cc.msg_to_drone[6,5]);
  cc.msg_to_drone[6,4] := pre(cc.msg_to_drone[6,4]);
  cc.msg_to_drone[6,3] := pre(cc.msg_to_drone[6,3]);
  cc.msg_to_drone[6,2] := pre(cc.msg_to_drone[6,2]);
  cc.msg_to_drone[6,1] := pre(cc.msg_to_drone[6,1]);
  cc.msg_to_drone[5,5] := pre(cc.msg_to_drone[5,5]);
  cc.msg_to_drone[5,4] := pre(cc.msg_to_drone[5,4]);
  cc.msg_to_drone[5,3] := pre(cc.msg_to_drone[5,3]);
  cc.msg_to_drone[5,2] := pre(cc.msg_to_drone[5,2]);
  cc.msg_to_drone[5,1] := pre(cc.msg_to_drone[5,1]);
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
  cc.writesignal[7] := pre(cc.writesignal[7]);
  cc.writesignal[6] := pre(cc.writesignal[6]);
  cc.writesignal[5] := pre(cc.writesignal[5]);
  cc.writesignal[4] := pre(cc.writesignal[4]);
  cc.writesignal[3] := pre(cc.writesignal[3]);
  cc.writesignal[2] := pre(cc.writesignal[2]);
  cc.writesignal[1] := pre(cc.writesignal[1]);
  cc.readsignal[7] := pre(cc.readsignal[7]);
  cc.readsignal[6] := pre(cc.readsignal[6]);
  cc.readsignal[5] := pre(cc.readsignal[5]);
  cc.readsignal[4] := pre(cc.readsignal[4]);
  cc.readsignal[3] := pre(cc.readsignal[3]);
  cc.readsignal[2] := pre(cc.readsignal[2]);
  cc.readsignal[1] := pre(cc.readsignal[1]);
  cc.setpointChangeTime[7] := pre(cc.setpointChangeTime[7]);
  cc.setpointChangeTime[6] := pre(cc.setpointChangeTime[6]);
  cc.setpointChangeTime[5] := pre(cc.setpointChangeTime[5]);
  cc.setpointChangeTime[4] := pre(cc.setpointChangeTime[4]);
  cc.setpointChangeTime[3] := pre(cc.setpointChangeTime[3]);
  cc.setpointChangeTime[2] := pre(cc.setpointChangeTime[2]);
  cc.setpointChangeTime[1] := pre(cc.setpointChangeTime[1]);
  cc.lastAnswered[7] := pre(cc.lastAnswered[7]);
  cc.lastAnswered[6] := pre(cc.lastAnswered[6]);
  cc.lastAnswered[5] := pre(cc.lastAnswered[5]);
  cc.lastAnswered[4] := pre(cc.lastAnswered[4]);
  cc.lastAnswered[3] := pre(cc.lastAnswered[3]);
  cc.lastAnswered[2] := pre(cc.lastAnswered[2]);
  cc.lastAnswered[1] := pre(cc.lastAnswered[1]);
  cc.isDead[7] := pre(cc.isDead[7]);
  cc.isDead[6] := pre(cc.isDead[6]);
  cc.isDead[5] := pre(cc.isDead[5]);
  cc.isDead[4] := pre(cc.isDead[4]);
  cc.isDead[3] := pre(cc.isDead[3]);
  cc.isDead[2] := pre(cc.isDead[2]);
  cc.isDead[1] := pre(cc.isDead[1]);
  cc.rechargingDrones := pre(cc.rechargingDrones);
  cc.isRecharging[7] := pre(cc.isRecharging[7]);
  cc.isRecharging[6] := pre(cc.isRecharging[6]);
  cc.isRecharging[5] := pre(cc.isRecharging[5]);
  cc.isRecharging[4] := pre(cc.isRecharging[4]);
  cc.isRecharging[3] := pre(cc.isRecharging[3]);
  cc.isRecharging[2] := pre(cc.isRecharging[2]);
  cc.isRecharging[1] := pre(cc.isRecharging[1]);
  cc.battery[7] := pre(cc.battery[7]);
  cc.battery[6] := pre(cc.battery[6]);
  cc.battery[5] := pre(cc.battery[5]);
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
  cc.isBusy[7] := pre(cc.isBusy[7]);
  cc.isBusy[6] := pre(cc.isBusy[6]);
  cc.isBusy[5] := pre(cc.isBusy[5]);
  cc.isBusy[4] := pre(cc.isBusy[4]);
  cc.isBusy[3] := pre(cc.isBusy[3]);
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
  cc.setz[7] := pre(cc.setz[7]);
  cc.setz[6] := pre(cc.setz[6]);
  cc.setz[5] := pre(cc.setz[5]);
  cc.setz[4] := pre(cc.setz[4]);
  cc.setz[3] := pre(cc.setz[3]);
  cc.setz[2] := pre(cc.setz[2]);
  cc.setz[1] := pre(cc.setz[1]);
  cc.sety[7] := pre(cc.sety[7]);
  cc.sety[6] := pre(cc.sety[6]);
  cc.sety[5] := pre(cc.sety[5]);
  cc.sety[4] := pre(cc.sety[4]);
  cc.sety[3] := pre(cc.sety[3]);
  cc.sety[2] := pre(cc.sety[2]);
  cc.sety[1] := pre(cc.sety[1]);
  cc.setx[7] := pre(cc.setx[7]);
  cc.setx[6] := pre(cc.setx[6]);
  cc.setx[5] := pre(cc.setx[5]);
  cc.setx[4] := pre(cc.setx[4]);
  cc.setx[3] := pre(cc.setx[3]);
  cc.setx[2] := pre(cc.setx[2]);
  cc.setx[1] := pre(cc.setx[1]);
  cc.aliveDrones := pre(cc.aliveDrones);
  cc.z := pre(cc.z);
  cc.err := pre(cc.err);
  $whenCondition45 := pre($whenCondition45);
  $whenCondition45 := sample(22, 0.0, p.Tcc);
  when false then
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
  elsewhen $whenCondition45 then
    if pre(cc.state) == 0 then
      for drone in 1:7 loop
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
      for drone in 1:7 loop
        if not pre(cc.isDead[drone]) and not pre(cc.comm_done[drone]) then
          (cc.writesignal[drone], cc.fifox[drone]) := WriteToFIFO(pre(cc.fifox[drone]), pre(cc.writesignal[drone]), pre(cc.spaceavailable[drone]));
          if FifoIODone(cc.fifox[drone]) then
            cc.comm_done[drone] := true;
            cc.fifox[drone] := 0;
          end if;
        end if;
      end for;
      cc.z := 0;
      for drone in 1:7 loop
        if not pre(cc.isDead[drone]) then
          if not pre(cc.comm_done[drone]) then
            cc.z := 100;
            break;
          end if;
        end if;
      end for;
      if cc.z == 0 then
        cc.state := 15;
        cc.comm_done := {false, false, false, false, false, false, false};
      end if;
    elseif pre(cc.state) == 15 then
      for drone in 1:7 loop
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
      for drone in 1:7 loop
        if not pre(cc.isDead[drone]) then
          if not pre(cc.comm_done[drone]) then
            cc.z := 100;
            break;
          end if;
        end if;
      end for;
      if cc.z == 0 then
        cc.state := 20;
        cc.comm_done := {false, false, false, false, false, false, false};
      end if;
    elseif pre(cc.state) == 20 then
      for drone in 1:7 loop
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
      for drone in 1:7 loop
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
      for drone in 1:7 loop
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
              (cc.area_x, cc.area_y, cc.area_z) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 7, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 16, cc.p.areas), area);
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
                (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 7, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 16, cc.p.areas), cc.tmp_area_1);
                cc.hasBeenSelected[cc.tmp_area_1] := drone;
              else
                (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 7, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 16, cc.p.areas), cc.tmp_area_2);
                cc.hasBeenSelected[cc.tmp_area_2] := drone;
              end if;
            else
              if myrandom() > p.p_worst then
                (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 7, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 16, cc.p.areas), cc.tmp_area_2);
                cc.hasBeenSelected[cc.tmp_area_2] := drone;
              else
                (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(Prm(cc.p.stop_simulation, cc.p.fifo_len, 5, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, 7, cc.p.cc_choice, cc.p.p_worst, cc.p.p_recharge, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.minDistanceFromObs, cc.p.dangerRadius, cc.p.unita, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryPercentage, cc.p.dangerousBatteryLevel, cc.p.rechargedPercentage, cc.p.rechargedThreshold, 16, cc.p.areas), cc.tmp_area_1);
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
      for drone in 1:7 loop
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
            elseif (*Real*)(pre(cc.rechargingDrones)) < 1.7 then
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
      for drone in 1:7 loop
        if pre(cc.setpointChanged[drone]) then
          cc.state := 30;
          break;
        else
          cc.state := 0;
        end if;
      end for;
    elseif pre(cc.state) == 30 then
      for drone in 1:7 loop
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
      for drone in 1:7 loop
        if not pre(cc.comm_done[drone]) then
          (cc.writesignal[drone], cc.fifox[drone]) := WriteToFIFO(pre(cc.fifox[drone]), pre(cc.writesignal[drone]), pre(cc.spaceavailable[drone]));
          if FifoIODone(cc.fifox[drone]) then
            cc.comm_done[drone] := true;
            cc.fifox[drone] := 0;
          end if;
        end if;
      end for;
      cc.z := 0;
      for drone in 1:7 loop
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
void System_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
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
  (data->localData[0]->booleanVars[94]/* cc.endSimulation DISCRETE */)  = (data->simulationInfo->booleanVarsPre[94]/* cc.endSimulation DISCRETE */) ;

  (data->localData[0]->booleanVars[145]/* cc.setpointChanged[7] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[145]/* cc.setpointChanged[7] DISCRETE */) ;

  (data->localData[0]->booleanVars[144]/* cc.setpointChanged[6] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[144]/* cc.setpointChanged[6] DISCRETE */) ;

  (data->localData[0]->booleanVars[143]/* cc.setpointChanged[5] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[143]/* cc.setpointChanged[5] DISCRETE */) ;

  (data->localData[0]->booleanVars[142]/* cc.setpointChanged[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[142]/* cc.setpointChanged[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[141]/* cc.setpointChanged[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[141]/* cc.setpointChanged[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[140]/* cc.setpointChanged[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[140]/* cc.setpointChanged[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[139]/* cc.setpointChanged[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[139]/* cc.setpointChanged[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[86]/* cc.comm_done[7] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[86]/* cc.comm_done[7] DISCRETE */) ;

  (data->localData[0]->booleanVars[85]/* cc.comm_done[6] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[85]/* cc.comm_done[6] DISCRETE */) ;

  (data->localData[0]->booleanVars[84]/* cc.comm_done[5] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[84]/* cc.comm_done[5] DISCRETE */) ;

  (data->localData[0]->booleanVars[83]/* cc.comm_done[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[83]/* cc.comm_done[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[82]/* cc.comm_done[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[82]/* cc.comm_done[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[81]/* cc.comm_done[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[81]/* cc.comm_done[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[80]/* cc.comm_done[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[80]/* cc.comm_done[1] DISCRETE */) ;

  (data->localData[0]->integerVars[25]/* cc.state DISCRETE */)  = (data->simulationInfo->integerVarsPre[25]/* cc.state DISCRETE */) ;

  (data->localData[0]->integerVars[7]/* cc.fifox[7] DISCRETE */)  = (data->simulationInfo->integerVarsPre[7]/* cc.fifox[7] DISCRETE */) ;

  (data->localData[0]->integerVars[6]/* cc.fifox[6] DISCRETE */)  = (data->simulationInfo->integerVarsPre[6]/* cc.fifox[6] DISCRETE */) ;

  (data->localData[0]->integerVars[5]/* cc.fifox[5] DISCRETE */)  = (data->simulationInfo->integerVarsPre[5]/* cc.fifox[5] DISCRETE */) ;

  (data->localData[0]->integerVars[4]/* cc.fifox[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[4]/* cc.fifox[4] DISCRETE */) ;

  (data->localData[0]->integerVars[3]/* cc.fifox[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[3]/* cc.fifox[3] DISCRETE */) ;

  (data->localData[0]->integerVars[2]/* cc.fifox[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[2]/* cc.fifox[2] DISCRETE */) ;

  (data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[1]/* cc.fifox[1] DISCRETE */) ;

  (data->localData[0]->realVars[352]/* cc.pos[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[352]/* cc.pos[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[351]/* cc.pos[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[351]/* cc.pos[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[350]/* cc.pos[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[350]/* cc.pos[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[349]/* cc.pos[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[349]/* cc.pos[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[348]/* cc.pos[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[348]/* cc.pos[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[347]/* cc.pos[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[347]/* cc.pos[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[346]/* cc.pos[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[346]/* cc.pos[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[345]/* cc.pos[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[345]/* cc.pos[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[344]/* cc.pos[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[344]/* cc.pos[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[343]/* cc.pos[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[343]/* cc.pos[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[342]/* cc.pos[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[342]/* cc.pos[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[341]/* cc.pos[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[341]/* cc.pos[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[340]/* cc.pos[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[340]/* cc.pos[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[339]/* cc.pos[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[339]/* cc.pos[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[338]/* cc.pos[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[338]/* cc.pos[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[337]/* cc.pos[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[337]/* cc.pos[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[336]/* cc.pos[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[336]/* cc.pos[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[335]/* cc.pos[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[335]/* cc.pos[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[334]/* cc.pos[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[334]/* cc.pos[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[333]/* cc.pos[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[333]/* cc.pos[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[332]/* cc.pos[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[332]/* cc.pos[1,1] DISCRETE */) ;

  (data->localData[0]->realVars[331]/* cc.msg_to_drone[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[331]/* cc.msg_to_drone[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[330]/* cc.msg_to_drone[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[330]/* cc.msg_to_drone[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[329]/* cc.msg_to_drone[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[329]/* cc.msg_to_drone[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[328]/* cc.msg_to_drone[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[328]/* cc.msg_to_drone[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[327]/* cc.msg_to_drone[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[327]/* cc.msg_to_drone[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[326]/* cc.msg_to_drone[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[326]/* cc.msg_to_drone[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[325]/* cc.msg_to_drone[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[325]/* cc.msg_to_drone[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[324]/* cc.msg_to_drone[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[324]/* cc.msg_to_drone[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[323]/* cc.msg_to_drone[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[323]/* cc.msg_to_drone[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[322]/* cc.msg_to_drone[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[322]/* cc.msg_to_drone[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[321]/* cc.msg_to_drone[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[321]/* cc.msg_to_drone[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[320]/* cc.msg_to_drone[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[320]/* cc.msg_to_drone[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[319]/* cc.msg_to_drone[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[319]/* cc.msg_to_drone[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[318]/* cc.msg_to_drone[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[318]/* cc.msg_to_drone[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[317]/* cc.msg_to_drone[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[317]/* cc.msg_to_drone[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[316]/* cc.msg_to_drone[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[316]/* cc.msg_to_drone[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[315]/* cc.msg_to_drone[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[315]/* cc.msg_to_drone[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[314]/* cc.msg_to_drone[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[314]/* cc.msg_to_drone[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[313]/* cc.msg_to_drone[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[313]/* cc.msg_to_drone[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[312]/* cc.msg_to_drone[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[312]/* cc.msg_to_drone[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[311]/* cc.msg_to_drone[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[311]/* cc.msg_to_drone[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[310]/* cc.msg_to_drone[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[310]/* cc.msg_to_drone[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[309]/* cc.msg_to_drone[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[309]/* cc.msg_to_drone[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[308]/* cc.msg_to_drone[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[308]/* cc.msg_to_drone[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[307]/* cc.msg_to_drone[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[307]/* cc.msg_to_drone[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[306]/* cc.msg_to_drone[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[306]/* cc.msg_to_drone[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[305]/* cc.msg_to_drone[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[305]/* cc.msg_to_drone[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[304]/* cc.msg_to_drone[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[304]/* cc.msg_to_drone[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[303]/* cc.msg_to_drone[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[303]/* cc.msg_to_drone[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[302]/* cc.msg_to_drone[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[302]/* cc.msg_to_drone[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[301]/* cc.msg_to_drone[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[301]/* cc.msg_to_drone[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[300]/* cc.msg_to_drone[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[300]/* cc.msg_to_drone[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[299]/* cc.msg_to_drone[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[299]/* cc.msg_to_drone[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[298]/* cc.msg_to_drone[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[298]/* cc.msg_to_drone[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[297]/* cc.msg_to_drone[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[297]/* cc.msg_to_drone[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[159]/* cc.writesignal[7] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[159]/* cc.writesignal[7] DISCRETE */) ;

  (data->localData[0]->booleanVars[158]/* cc.writesignal[6] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[158]/* cc.writesignal[6] DISCRETE */) ;

  (data->localData[0]->booleanVars[157]/* cc.writesignal[5] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[157]/* cc.writesignal[5] DISCRETE */) ;

  (data->localData[0]->booleanVars[156]/* cc.writesignal[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[156]/* cc.writesignal[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[155]/* cc.writesignal[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[155]/* cc.writesignal[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[154]/* cc.writesignal[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[154]/* cc.writesignal[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[153]/* cc.writesignal[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[153]/* cc.writesignal[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[138]/* cc.readsignal[7] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[138]/* cc.readsignal[7] DISCRETE */) ;

  (data->localData[0]->booleanVars[137]/* cc.readsignal[6] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[137]/* cc.readsignal[6] DISCRETE */) ;

  (data->localData[0]->booleanVars[136]/* cc.readsignal[5] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[136]/* cc.readsignal[5] DISCRETE */) ;

  (data->localData[0]->booleanVars[135]/* cc.readsignal[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[135]/* cc.readsignal[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[134]/* cc.readsignal[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[134]/* cc.readsignal[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[133]/* cc.readsignal[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[133]/* cc.readsignal[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[132]/* cc.readsignal[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[132]/* cc.readsignal[1] DISCRETE */) ;

  (data->localData[0]->realVars[359]/* cc.setpointChangeTime[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[359]/* cc.setpointChangeTime[7] DISCRETE */) ;

  (data->localData[0]->realVars[358]/* cc.setpointChangeTime[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[358]/* cc.setpointChangeTime[6] DISCRETE */) ;

  (data->localData[0]->realVars[357]/* cc.setpointChangeTime[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[357]/* cc.setpointChangeTime[5] DISCRETE */) ;

  (data->localData[0]->realVars[356]/* cc.setpointChangeTime[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[356]/* cc.setpointChangeTime[4] DISCRETE */) ;

  (data->localData[0]->realVars[355]/* cc.setpointChangeTime[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[355]/* cc.setpointChangeTime[3] DISCRETE */) ;

  (data->localData[0]->realVars[354]/* cc.setpointChangeTime[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[354]/* cc.setpointChangeTime[2] DISCRETE */) ;

  (data->localData[0]->realVars[353]/* cc.setpointChangeTime[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[353]/* cc.setpointChangeTime[1] DISCRETE */) ;

  (data->localData[0]->realVars[278]/* cc.lastAnswered[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[278]/* cc.lastAnswered[7] DISCRETE */) ;

  (data->localData[0]->realVars[277]/* cc.lastAnswered[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[277]/* cc.lastAnswered[6] DISCRETE */) ;

  (data->localData[0]->realVars[276]/* cc.lastAnswered[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[276]/* cc.lastAnswered[5] DISCRETE */) ;

  (data->localData[0]->realVars[275]/* cc.lastAnswered[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[275]/* cc.lastAnswered[4] DISCRETE */) ;

  (data->localData[0]->realVars[274]/* cc.lastAnswered[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[274]/* cc.lastAnswered[3] DISCRETE */) ;

  (data->localData[0]->realVars[273]/* cc.lastAnswered[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[273]/* cc.lastAnswered[2] DISCRETE */) ;

  (data->localData[0]->realVars[272]/* cc.lastAnswered[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[272]/* cc.lastAnswered[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[124]/* cc.isDead[7] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[124]/* cc.isDead[7] DISCRETE */) ;

  (data->localData[0]->booleanVars[123]/* cc.isDead[6] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[123]/* cc.isDead[6] DISCRETE */) ;

  (data->localData[0]->booleanVars[122]/* cc.isDead[5] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[122]/* cc.isDead[5] DISCRETE */) ;

  (data->localData[0]->booleanVars[121]/* cc.isDead[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[121]/* cc.isDead[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[120]/* cc.isDead[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[120]/* cc.isDead[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[119]/* cc.isDead[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[119]/* cc.isDead[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[118]/* cc.isDead[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[118]/* cc.isDead[1] DISCRETE */) ;

  (data->localData[0]->integerVars[24]/* cc.rechargingDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[24]/* cc.rechargingDrones DISCRETE */) ;

  (data->localData[0]->booleanVars[131]/* cc.isRecharging[7] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[131]/* cc.isRecharging[7] DISCRETE */) ;

  (data->localData[0]->booleanVars[130]/* cc.isRecharging[6] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[130]/* cc.isRecharging[6] DISCRETE */) ;

  (data->localData[0]->booleanVars[129]/* cc.isRecharging[5] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[129]/* cc.isRecharging[5] DISCRETE */) ;

  (data->localData[0]->booleanVars[128]/* cc.isRecharging[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[128]/* cc.isRecharging[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[127]/* cc.isRecharging[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[127]/* cc.isRecharging[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[126]/* cc.isRecharging[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[126]/* cc.isRecharging[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[125]/* cc.isRecharging[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[125]/* cc.isRecharging[1] DISCRETE */) ;

  (data->localData[0]->realVars[268]/* cc.battery[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[268]/* cc.battery[7] DISCRETE */) ;

  (data->localData[0]->realVars[267]/* cc.battery[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[267]/* cc.battery[6] DISCRETE */) ;

  (data->localData[0]->realVars[266]/* cc.battery[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[266]/* cc.battery[5] DISCRETE */) ;

  (data->localData[0]->realVars[265]/* cc.battery[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[265]/* cc.battery[4] DISCRETE */) ;

  (data->localData[0]->realVars[264]/* cc.battery[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[264]/* cc.battery[3] DISCRETE */) ;

  (data->localData[0]->realVars[263]/* cc.battery[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[263]/* cc.battery[2] DISCRETE */) ;

  (data->localData[0]->realVars[262]/* cc.battery[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[262]/* cc.battery[1] DISCRETE */) ;

  (data->localData[0]->realVars[384]/* cc.tmp_time DISCRETE */)  = (data->simulationInfo->realVarsPre[384]/* cc.tmp_time DISCRETE */) ;

  (data->localData[0]->realVars[295]/* cc.max_time DISCRETE */)  = (data->simulationInfo->realVarsPre[295]/* cc.max_time DISCRETE */) ;

  (data->localData[0]->realVars[261]/* cc.area_z DISCRETE */)  = (data->simulationInfo->realVarsPre[261]/* cc.area_z DISCRETE */) ;

  (data->localData[0]->realVars[260]/* cc.area_y DISCRETE */)  = (data->simulationInfo->realVarsPre[260]/* cc.area_y DISCRETE */) ;

  (data->localData[0]->realVars[259]/* cc.area_x DISCRETE */)  = (data->simulationInfo->realVarsPre[259]/* cc.area_x DISCRETE */) ;

  (data->localData[0]->realVars[270]/* cc.choice_value_2 DISCRETE */)  = (data->simulationInfo->realVarsPre[270]/* cc.choice_value_2 DISCRETE */) ;

  (data->localData[0]->realVars[269]/* cc.choice_value_1 DISCRETE */)  = (data->simulationInfo->realVarsPre[269]/* cc.choice_value_1 DISCRETE */) ;

  (data->localData[0]->integerVars[27]/* cc.tmp_area_2 DISCRETE */)  = (data->simulationInfo->integerVarsPre[27]/* cc.tmp_area_2 DISCRETE */) ;

  (data->localData[0]->integerVars[26]/* cc.tmp_area_1 DISCRETE */)  = (data->simulationInfo->integerVarsPre[26]/* cc.tmp_area_1 DISCRETE */) ;

  (data->localData[0]->realVars[383]/* cc.tmp_distance DISCRETE */)  = (data->simulationInfo->realVarsPre[383]/* cc.tmp_distance DISCRETE */) ;

  (data->localData[0]->realVars[296]/* cc.min_distance DISCRETE */)  = (data->simulationInfo->realVarsPre[296]/* cc.min_distance DISCRETE */) ;

  (data->localData[0]->integerVars[23]/* cc.hasBeenSelected[16] DISCRETE */)  = (data->simulationInfo->integerVarsPre[23]/* cc.hasBeenSelected[16] DISCRETE */) ;

  (data->localData[0]->integerVars[22]/* cc.hasBeenSelected[15] DISCRETE */)  = (data->simulationInfo->integerVarsPre[22]/* cc.hasBeenSelected[15] DISCRETE */) ;

  (data->localData[0]->integerVars[21]/* cc.hasBeenSelected[14] DISCRETE */)  = (data->simulationInfo->integerVarsPre[21]/* cc.hasBeenSelected[14] DISCRETE */) ;

  (data->localData[0]->integerVars[20]/* cc.hasBeenSelected[13] DISCRETE */)  = (data->simulationInfo->integerVarsPre[20]/* cc.hasBeenSelected[13] DISCRETE */) ;

  (data->localData[0]->integerVars[19]/* cc.hasBeenSelected[12] DISCRETE */)  = (data->simulationInfo->integerVarsPre[19]/* cc.hasBeenSelected[12] DISCRETE */) ;

  (data->localData[0]->integerVars[18]/* cc.hasBeenSelected[11] DISCRETE */)  = (data->simulationInfo->integerVarsPre[18]/* cc.hasBeenSelected[11] DISCRETE */) ;

  (data->localData[0]->integerVars[17]/* cc.hasBeenSelected[10] DISCRETE */)  = (data->simulationInfo->integerVarsPre[17]/* cc.hasBeenSelected[10] DISCRETE */) ;

  (data->localData[0]->integerVars[16]/* cc.hasBeenSelected[9] DISCRETE */)  = (data->simulationInfo->integerVarsPre[16]/* cc.hasBeenSelected[9] DISCRETE */) ;

  (data->localData[0]->integerVars[15]/* cc.hasBeenSelected[8] DISCRETE */)  = (data->simulationInfo->integerVarsPre[15]/* cc.hasBeenSelected[8] DISCRETE */) ;

  (data->localData[0]->integerVars[14]/* cc.hasBeenSelected[7] DISCRETE */)  = (data->simulationInfo->integerVarsPre[14]/* cc.hasBeenSelected[7] DISCRETE */) ;

  (data->localData[0]->integerVars[13]/* cc.hasBeenSelected[6] DISCRETE */)  = (data->simulationInfo->integerVarsPre[13]/* cc.hasBeenSelected[6] DISCRETE */) ;

  (data->localData[0]->integerVars[12]/* cc.hasBeenSelected[5] DISCRETE */)  = (data->simulationInfo->integerVarsPre[12]/* cc.hasBeenSelected[5] DISCRETE */) ;

  (data->localData[0]->integerVars[11]/* cc.hasBeenSelected[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[11]/* cc.hasBeenSelected[4] DISCRETE */) ;

  (data->localData[0]->integerVars[10]/* cc.hasBeenSelected[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[10]/* cc.hasBeenSelected[3] DISCRETE */) ;

  (data->localData[0]->integerVars[9]/* cc.hasBeenSelected[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[9]/* cc.hasBeenSelected[2] DISCRETE */) ;

  (data->localData[0]->integerVars[8]/* cc.hasBeenSelected[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[8]/* cc.hasBeenSelected[1] DISCRETE */) ;

  (data->localData[0]->realVars[381]/* cc.time_passed_since_last_loop DISCRETE */)  = (data->simulationInfo->realVarsPre[381]/* cc.time_passed_since_last_loop DISCRETE */) ;

  (data->localData[0]->realVars[382]/* cc.time_span DISCRETE */)  = (data->simulationInfo->realVarsPre[382]/* cc.time_span DISCRETE */) ;

  (data->localData[0]->booleanVars[117]/* cc.isBusy[7] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[117]/* cc.isBusy[7] DISCRETE */) ;

  (data->localData[0]->booleanVars[116]/* cc.isBusy[6] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[116]/* cc.isBusy[6] DISCRETE */) ;

  (data->localData[0]->booleanVars[115]/* cc.isBusy[5] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[115]/* cc.isBusy[5] DISCRETE */) ;

  (data->localData[0]->booleanVars[114]/* cc.isBusy[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[114]/* cc.isBusy[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[113]/* cc.isBusy[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[113]/* cc.isBusy[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[112]/* cc.isBusy[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[112]/* cc.isBusy[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[111]/* cc.isBusy[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[111]/* cc.isBusy[1] DISCRETE */) ;

  (data->localData[0]->realVars[294]/* cc.lastVisited[16] DISCRETE */)  = (data->simulationInfo->realVarsPre[294]/* cc.lastVisited[16] DISCRETE */) ;

  (data->localData[0]->realVars[293]/* cc.lastVisited[15] DISCRETE */)  = (data->simulationInfo->realVarsPre[293]/* cc.lastVisited[15] DISCRETE */) ;

  (data->localData[0]->realVars[292]/* cc.lastVisited[14] DISCRETE */)  = (data->simulationInfo->realVarsPre[292]/* cc.lastVisited[14] DISCRETE */) ;

  (data->localData[0]->realVars[291]/* cc.lastVisited[13] DISCRETE */)  = (data->simulationInfo->realVarsPre[291]/* cc.lastVisited[13] DISCRETE */) ;

  (data->localData[0]->realVars[290]/* cc.lastVisited[12] DISCRETE */)  = (data->simulationInfo->realVarsPre[290]/* cc.lastVisited[12] DISCRETE */) ;

  (data->localData[0]->realVars[289]/* cc.lastVisited[11] DISCRETE */)  = (data->simulationInfo->realVarsPre[289]/* cc.lastVisited[11] DISCRETE */) ;

  (data->localData[0]->realVars[288]/* cc.lastVisited[10] DISCRETE */)  = (data->simulationInfo->realVarsPre[288]/* cc.lastVisited[10] DISCRETE */) ;

  (data->localData[0]->realVars[287]/* cc.lastVisited[9] DISCRETE */)  = (data->simulationInfo->realVarsPre[287]/* cc.lastVisited[9] DISCRETE */) ;

  (data->localData[0]->realVars[286]/* cc.lastVisited[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[286]/* cc.lastVisited[8] DISCRETE */) ;

  (data->localData[0]->realVars[285]/* cc.lastVisited[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[285]/* cc.lastVisited[7] DISCRETE */) ;

  (data->localData[0]->realVars[284]/* cc.lastVisited[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[284]/* cc.lastVisited[6] DISCRETE */) ;

  (data->localData[0]->realVars[283]/* cc.lastVisited[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[283]/* cc.lastVisited[5] DISCRETE */) ;

  (data->localData[0]->realVars[282]/* cc.lastVisited[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[282]/* cc.lastVisited[4] DISCRETE */) ;

  (data->localData[0]->realVars[281]/* cc.lastVisited[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[281]/* cc.lastVisited[3] DISCRETE */) ;

  (data->localData[0]->realVars[280]/* cc.lastVisited[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[280]/* cc.lastVisited[2] DISCRETE */) ;

  (data->localData[0]->realVars[279]/* cc.lastVisited[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[279]/* cc.lastVisited[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[110]/* cc.hasBeenVisited[16] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[110]/* cc.hasBeenVisited[16] DISCRETE */) ;

  (data->localData[0]->booleanVars[109]/* cc.hasBeenVisited[15] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[109]/* cc.hasBeenVisited[15] DISCRETE */) ;

  (data->localData[0]->booleanVars[108]/* cc.hasBeenVisited[14] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[108]/* cc.hasBeenVisited[14] DISCRETE */) ;

  (data->localData[0]->booleanVars[107]/* cc.hasBeenVisited[13] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[107]/* cc.hasBeenVisited[13] DISCRETE */) ;

  (data->localData[0]->booleanVars[106]/* cc.hasBeenVisited[12] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[106]/* cc.hasBeenVisited[12] DISCRETE */) ;

  (data->localData[0]->booleanVars[105]/* cc.hasBeenVisited[11] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[105]/* cc.hasBeenVisited[11] DISCRETE */) ;

  (data->localData[0]->booleanVars[104]/* cc.hasBeenVisited[10] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[104]/* cc.hasBeenVisited[10] DISCRETE */) ;

  (data->localData[0]->booleanVars[103]/* cc.hasBeenVisited[9] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[103]/* cc.hasBeenVisited[9] DISCRETE */) ;

  (data->localData[0]->booleanVars[102]/* cc.hasBeenVisited[8] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[102]/* cc.hasBeenVisited[8] DISCRETE */) ;

  (data->localData[0]->booleanVars[101]/* cc.hasBeenVisited[7] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[101]/* cc.hasBeenVisited[7] DISCRETE */) ;

  (data->localData[0]->booleanVars[100]/* cc.hasBeenVisited[6] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[100]/* cc.hasBeenVisited[6] DISCRETE */) ;

  (data->localData[0]->booleanVars[99]/* cc.hasBeenVisited[5] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[99]/* cc.hasBeenVisited[5] DISCRETE */) ;

  (data->localData[0]->booleanVars[98]/* cc.hasBeenVisited[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[98]/* cc.hasBeenVisited[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[97]/* cc.hasBeenVisited[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[97]/* cc.hasBeenVisited[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[96]/* cc.hasBeenVisited[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[96]/* cc.hasBeenVisited[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[95]/* cc.hasBeenVisited[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[95]/* cc.hasBeenVisited[1] DISCRETE */) ;

  (data->localData[0]->realVars[380]/* cc.setz[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[380]/* cc.setz[7] DISCRETE */) ;

  (data->localData[0]->realVars[379]/* cc.setz[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[379]/* cc.setz[6] DISCRETE */) ;

  (data->localData[0]->realVars[378]/* cc.setz[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[378]/* cc.setz[5] DISCRETE */) ;

  (data->localData[0]->realVars[377]/* cc.setz[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[377]/* cc.setz[4] DISCRETE */) ;

  (data->localData[0]->realVars[376]/* cc.setz[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[376]/* cc.setz[3] DISCRETE */) ;

  (data->localData[0]->realVars[375]/* cc.setz[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[375]/* cc.setz[2] DISCRETE */) ;

  (data->localData[0]->realVars[374]/* cc.setz[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[374]/* cc.setz[1] DISCRETE */) ;

  (data->localData[0]->realVars[373]/* cc.sety[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[373]/* cc.sety[7] DISCRETE */) ;

  (data->localData[0]->realVars[372]/* cc.sety[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[372]/* cc.sety[6] DISCRETE */) ;

  (data->localData[0]->realVars[371]/* cc.sety[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[371]/* cc.sety[5] DISCRETE */) ;

  (data->localData[0]->realVars[370]/* cc.sety[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[370]/* cc.sety[4] DISCRETE */) ;

  (data->localData[0]->realVars[369]/* cc.sety[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[369]/* cc.sety[3] DISCRETE */) ;

  (data->localData[0]->realVars[368]/* cc.sety[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[368]/* cc.sety[2] DISCRETE */) ;

  (data->localData[0]->realVars[367]/* cc.sety[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[367]/* cc.sety[1] DISCRETE */) ;

  (data->localData[0]->realVars[366]/* cc.setx[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[366]/* cc.setx[7] DISCRETE */) ;

  (data->localData[0]->realVars[365]/* cc.setx[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[365]/* cc.setx[6] DISCRETE */) ;

  (data->localData[0]->realVars[364]/* cc.setx[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[364]/* cc.setx[5] DISCRETE */) ;

  (data->localData[0]->realVars[363]/* cc.setx[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[363]/* cc.setx[4] DISCRETE */) ;

  (data->localData[0]->realVars[362]/* cc.setx[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[362]/* cc.setx[3] DISCRETE */) ;

  (data->localData[0]->realVars[361]/* cc.setx[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[361]/* cc.setx[2] DISCRETE */) ;

  (data->localData[0]->realVars[360]/* cc.setx[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[360]/* cc.setx[1] DISCRETE */) ;

  (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[0]/* cc.aliveDrones DISCRETE */) ;

  (data->localData[0]->integerVars[28]/* cc.z DISCRETE */)  = (data->simulationInfo->integerVarsPre[28]/* cc.z DISCRETE */) ;

  (data->localData[0]->realVars[271]/* cc.err DISCRETE */)  = (data->simulationInfo->realVarsPre[271]/* cc.err DISCRETE */) ;

  (data->localData[0]->booleanVars[39]/* $whenCondition45 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[39]/* $whenCondition45 DISCRETE */) ;

  (data->localData[0]->booleanVars[39]/* $whenCondition45 DISCRETE */)  = data->simulationInfo->samples[21];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[271]/* cc.err DISCRETE */)  = 0.0;

      (data->localData[0]->integerVars[28]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = ((modelica_integer) 7);

      array_alloc_scalar_real_array(&tmp3, 7, (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) );
      real_array_create(&tmp4, ((modelica_real*)&((&(data->localData[0]->realVars[360]/* cc.setx[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
      real_array_copy_data(tmp3, tmp4);

      array_alloc_scalar_real_array(&tmp5, 7, (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) );
      real_array_create(&tmp6, ((modelica_real*)&((&(data->localData[0]->realVars[367]/* cc.sety[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
      real_array_copy_data(tmp5, tmp6);

      array_alloc_scalar_real_array(&tmp7, 7, (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) );
      real_array_create(&tmp8, ((modelica_real*)&((&(data->localData[0]->realVars[374]/* cc.setz[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
      real_array_copy_data(tmp7, tmp8);

      array_alloc_scalar_boolean_array(&tmp9, 16, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp10, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[95]/* cc.hasBeenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      boolean_array_copy_data(tmp9, tmp10);

      array_alloc_scalar_real_array(&tmp11, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp12, ((modelica_real*)&((&(data->localData[0]->realVars[279]/* cc.lastVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      real_array_copy_data(tmp11, tmp12);

      array_alloc_scalar_boolean_array(&tmp13, 7, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp14, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[111]/* cc.isBusy[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
      boolean_array_copy_data(tmp13, tmp14);

      (data->localData[0]->realVars[382]/* cc.time_span DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[381]/* cc.time_passed_since_last_loop DISCRETE */)  = 0.0;

      array_alloc_scalar_integer_array(&tmp15, 16, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp16, ((modelica_integer*)&((&(data->localData[0]->integerVars[8]/* cc.hasBeenSelected[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      integer_array_copy_data(tmp15, tmp16);

      real_array_create(&tmp17, ((modelica_real*)&((&data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
      tmp18 = max_real_array(tmp17);
      (data->localData[0]->realVars[296]/* cc.min_distance DISCRETE */)  = tmp18;

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

      array_alloc_scalar_real_array(&tmp19, 7, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp20, ((modelica_real*)&((&(data->localData[0]->realVars[262]/* cc.battery[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
      real_array_copy_data(tmp19, tmp20);

      array_alloc_scalar_boolean_array(&tmp21, 7, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp22, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[125]/* cc.isRecharging[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
      boolean_array_copy_data(tmp21, tmp22);

      (data->localData[0]->integerVars[24]/* cc.rechargingDrones DISCRETE */)  = ((modelica_integer) 0);

      array_alloc_scalar_boolean_array(&tmp23, 7, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp24, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[118]/* cc.isDead[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
      boolean_array_copy_data(tmp23, tmp24);

      array_alloc_scalar_real_array(&tmp25, 7, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp26, ((modelica_real*)&((&(data->localData[0]->realVars[272]/* cc.lastAnswered[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
      real_array_copy_data(tmp25, tmp26);

      array_alloc_scalar_real_array(&tmp27, 7, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp28, ((modelica_real*)&((&(data->localData[0]->realVars[353]/* cc.setpointChangeTime[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
      real_array_copy_data(tmp27, tmp28);

      array_alloc_scalar_boolean_array(&tmp29, 7, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp30, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[132]/* cc.readsignal[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
      boolean_array_copy_data(tmp29, tmp30);

      array_alloc_scalar_boolean_array(&tmp31, 7, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp32, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[153]/* cc.writesignal[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
      boolean_array_copy_data(tmp31, tmp32);

      tmp36 = ((modelica_integer) 1); tmp37 = 1; tmp38 = ((modelica_integer) 7);
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
              (&(data->localData[0]->realVars[297]/* cc.msg_to_drone[1,1] DISCRETE */) )[(i - 1) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      tmp42 = ((modelica_integer) 1); tmp43 = 1; tmp44 = ((modelica_integer) 7);
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
              (&(data->localData[0]->realVars[332]/* cc.pos[1,1] DISCRETE */) )[(i - 1) * 3 + (j-1)] = 0.0;
            }
          }
        }
      }

      array_alloc_scalar_integer_array(&tmp45, 7, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp46, ((modelica_integer*)&((&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
      integer_array_copy_data(tmp45, tmp46);

      (data->localData[0]->integerVars[25]/* cc.state DISCRETE */)  = ((modelica_integer) 0);

      array_alloc_scalar_boolean_array(&tmp47, 7, (modelica_boolean)1, (modelica_boolean)1, (modelica_boolean)1, (modelica_boolean)1, (modelica_boolean)1, (modelica_boolean)1, (modelica_boolean)1);
      boolean_array_create(&tmp48, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[80]/* cc.comm_done[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
      boolean_array_copy_data(tmp47, tmp48);

      array_alloc_scalar_boolean_array(&tmp49, 7, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp50, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[139]/* cc.setpointChanged[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
      boolean_array_copy_data(tmp49, tmp50);

      (data->localData[0]->booleanVars[94]/* cc.endSimulation DISCRETE */)  = 0;

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
      tmp51._nDrones = ((modelica_integer) 7);
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
      tmp55._nDrones = ((modelica_integer) 7);
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
    else if(((data->localData[0]->booleanVars[39]/* $whenCondition45 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[39]/* $whenCondition45 DISCRETE */)  /* edge */))
    {
      if(((data->simulationInfo->integerVarsPre[25]/* cc.state DISCRETE */)  == ((modelica_integer) 0)))
      {
        tmp60 = ((modelica_integer) 1); tmp61 = 1; tmp62 = ((modelica_integer) 7);
        if(!(((tmp61 > 0) && (tmp60 > tmp62)) || ((tmp61 < 0) && (tmp60 < tmp62))))
        {
          modelica_integer drone;
          for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp60, tmp62); drone += tmp61)
          {
            if((!(&(data->simulationInfo->booleanVarsPre[118]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
            {
              (&(data->localData[0]->realVars[297]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 1)-1)] = 1.0;

              (&(data->localData[0]->realVars[297]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 2)-1)] = 0.0;

              (&(data->localData[0]->realVars[297]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 3)-1)] = 0.0;

              (&(data->localData[0]->realVars[297]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 4)-1)] = 0.0;

              (&(data->localData[0]->booleanVars[80]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 0;
            }
            else
            {
              (&(data->localData[0]->booleanVars[80]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;
            }
          }
        }

        (data->localData[0]->integerVars[25]/* cc.state DISCRETE */)  = ((modelica_integer) 10);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[25]/* cc.state DISCRETE */)  == ((modelica_integer) 10)))
        {
          tmp64 = ((modelica_integer) 1); tmp65 = 1; tmp66 = ((modelica_integer) 7);
          if(!(((tmp65 > 0) && (tmp64 > tmp66)) || ((tmp65 < 0) && (tmp64 < tmp66))))
          {
            modelica_integer drone;
            for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp64, tmp66); drone += tmp65)
            {
              if(((!(&(data->simulationInfo->booleanVarsPre[118]/* cc.isDead[1] DISCRETE */) )[drone - 1]) && (!(&(data->simulationInfo->booleanVarsPre[80]/* cc.comm_done[1] DISCRETE */) )[drone - 1])))
              {
                (&(data->localData[0]->booleanVars[153]/* cc.writesignal[1] DISCRETE */) )[drone - 1] = omc_WriteToFIFO(threadData, (&(data->simulationInfo->integerVarsPre[1]/* cc.fifox[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[153]/* cc.writesignal[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[146]/* cc.spaceavailable[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1]);

                if(omc_FifoIODone(threadData, (&data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)[drone - 1] ))
                {
                  (&(data->localData[0]->booleanVars[80]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;

                  (&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1] = ((modelica_integer) 0);
                }
              }
            }
          }

          (data->localData[0]->integerVars[28]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

          tmp67 = ((modelica_integer) 1); tmp68 = 1; tmp69 = ((modelica_integer) 7);
          if(!(((tmp68 > 0) && (tmp67 > tmp69)) || ((tmp68 < 0) && (tmp67 < tmp69))))
          {
            modelica_integer drone;
            for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp67, tmp69); drone += tmp68)
            {
              if((!(&(data->simulationInfo->booleanVarsPre[118]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
              {
                if((!(&(data->simulationInfo->booleanVarsPre[80]/* cc.comm_done[1] DISCRETE */) )[drone - 1]))
                {
                  (data->localData[0]->integerVars[28]/* cc.z DISCRETE */)  = ((modelica_integer) 100);

                  break;
                }
              }
            }
          }

          if(((data->localData[0]->integerVars[28]/* cc.z DISCRETE */)  == ((modelica_integer) 0)))
          {
            (data->localData[0]->integerVars[25]/* cc.state DISCRETE */)  = ((modelica_integer) 15);

            array_alloc_scalar_boolean_array(&tmp71, 7, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
            boolean_array_create(&tmp72, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[80]/* cc.comm_done[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
            boolean_array_copy_data(tmp71, tmp72);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[25]/* cc.state DISCRETE */)  == ((modelica_integer) 15)))
          {
            tmp81 = ((modelica_integer) 1); tmp82 = 1; tmp83 = ((modelica_integer) 7);
            if(!(((tmp82 > 0) && (tmp81 > tmp83)) || ((tmp82 < 0) && (tmp81 < tmp83))))
            {
              modelica_integer drone;
              for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp81, tmp83); drone += tmp82)
              {
                if(((!(&(data->simulationInfo->booleanVarsPre[118]/* cc.isDead[1] DISCRETE */) )[drone - 1]) && (!(&(data->simulationInfo->booleanVarsPre[80]/* cc.comm_done[1] DISCRETE */) )[drone - 1])))
                {
                  tmp74 = Greater(data->localData[0]->timeValue - (&(data->simulationInfo->realVarsPre[272]/* cc.lastAnswered[1] DISCRETE */) )[drone - 1],(data->simulationInfo->realParameter[5008]/* p.comm_timeout PARAM */) );
                  if(tmp74)
                  {
                    (&(data->localData[0]->booleanVars[80]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;

                    (&(data->localData[0]->booleanVars[118]/* cc.isDead[1] DISCRETE */) )[drone - 1] = 1;

                    (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[0]/* cc.aliveDrones DISCRETE */)  - ((modelica_integer) 1);

                    tmp76 = ((modelica_integer) 1); tmp77 = 1; tmp78 = ((modelica_integer) 16);
                    if(!(((tmp77 > 0) && (tmp76 > tmp78)) || ((tmp77 < 0) && (tmp76 < tmp78))))
                    {
                      modelica_integer area;
                      for(area = ((modelica_integer) 1); in_range_integer(area, tmp76, tmp78); area += tmp77)
                      {
                        if(((&(data->simulationInfo->integerVarsPre[8]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] == drone))
                        {
                          (&(data->localData[0]->integerVars[8]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);
                        }
                      }
                    }
                  }
                  else
                  {
                    tmp79 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[127]/* cc.p.p_comm_error PARAM */) );
                    if(tmp79)
                    {
                      (&(data->localData[0]->booleanVars[132]/* cc.readsignal[1] DISCRETE */) )[drone - 1] = omc_ReadFromFIFO(threadData, (&(data->simulationInfo->integerVarsPre[1]/* cc.fifox[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[87]/* cc.datavailable[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[132]/* cc.readsignal[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1]);

                      if(omc_FifoIODone(threadData, (&data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)[drone - 1] ))
                      {
                        (&(data->localData[0]->realVars[332]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 1)-1)] = (&(data->simulationInfo->realVarsPre[87]/* cc.msg_from_drone[1,1] variable */) )[(drone - 1) * 5 + (((modelica_integer) 2)-1)];

                        (&(data->localData[0]->realVars[332]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 2)-1)] = (&(data->simulationInfo->realVarsPre[87]/* cc.msg_from_drone[1,1] variable */) )[(drone - 1) * 5 + (((modelica_integer) 3)-1)];

                        (&(data->localData[0]->realVars[332]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 3)-1)] = (&(data->simulationInfo->realVarsPre[87]/* cc.msg_from_drone[1,1] variable */) )[(drone - 1) * 5 + (((modelica_integer) 4)-1)];

                        (&(data->localData[0]->realVars[262]/* cc.battery[1] DISCRETE */) )[drone - 1] = (&(data->simulationInfo->realVarsPre[87]/* cc.msg_from_drone[1,1] variable */) )[(drone - 1) * 5 + (((modelica_integer) 5)-1)];

                        tmp80 = Less(fabs((&data->localData[0]->realVars[262]/* cc.battery[1] DISCRETE */)[drone - 1]  - (data->simulationInfo->realParameter[107]/* cc.p.capacity PARAM */) ),0.1);
                        if(tmp80)
                        {
                          (data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[0]/* cc.aliveDrones DISCRETE */)  - ((modelica_integer) 1);
                        }

                        (&(data->localData[0]->realVars[272]/* cc.lastAnswered[1] DISCRETE */) )[drone - 1] = data->localData[0]->timeValue;

                        (&(data->localData[0]->booleanVars[80]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;

                        (&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1] = ((modelica_integer) 0);
                      }
                    }
                  }
                }
              }
            }

            (data->localData[0]->integerVars[28]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

            tmp84 = ((modelica_integer) 1); tmp85 = 1; tmp86 = ((modelica_integer) 7);
            if(!(((tmp85 > 0) && (tmp84 > tmp86)) || ((tmp85 < 0) && (tmp84 < tmp86))))
            {
              modelica_integer drone;
              for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp84, tmp86); drone += tmp85)
              {
                if((!(&(data->simulationInfo->booleanVarsPre[118]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
                {
                  if((!(&(data->simulationInfo->booleanVarsPre[80]/* cc.comm_done[1] DISCRETE */) )[drone - 1]))
                  {
                    (data->localData[0]->integerVars[28]/* cc.z DISCRETE */)  = ((modelica_integer) 100);

                    break;
                  }
                }
              }
            }

            if(((data->localData[0]->integerVars[28]/* cc.z DISCRETE */)  == ((modelica_integer) 0)))
            {
              (data->localData[0]->integerVars[25]/* cc.state DISCRETE */)  = ((modelica_integer) 20);

              array_alloc_scalar_boolean_array(&tmp88, 7, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
              boolean_array_create(&tmp89, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[80]/* cc.comm_done[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)7);
              boolean_array_copy_data(tmp88, tmp89);
            }
          }
          else
          {
            if(((data->simulationInfo->integerVarsPre[25]/* cc.state DISCRETE */)  == ((modelica_integer) 20)))
            {
              tmp104 = ((modelica_integer) 1); tmp105 = 1; tmp106 = ((modelica_integer) 7);
              if(!(((tmp105 > 0) && (tmp104 > tmp106)) || ((tmp105 < 0) && (tmp104 < tmp106))))
              {
                modelica_integer drone;
                for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp104, tmp106); drone += tmp105)
                {
                  tmp91 = (&(data->simulationInfo->realVarsPre[332]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 1)-1)] - (&(data->simulationInfo->realVarsPre[360]/* cc.setx[1] DISCRETE */) )[drone - 1];
                  tmp92 = (&(data->simulationInfo->realVarsPre[332]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 2)-1)] - (&(data->simulationInfo->realVarsPre[367]/* cc.sety[1] DISCRETE */) )[drone - 1];
                  tmp93 = (&(data->simulationInfo->realVarsPre[332]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 3)-1)] - (&(data->simulationInfo->realVarsPre[374]/* cc.setz[1] DISCRETE */) )[drone - 1];
                  tmp94 = Less(sqrt((tmp91 * tmp91) + (tmp92 * tmp92) + (tmp93 * tmp93)),(data->simulationInfo->realParameter[5002]/* p.arrivalThreshold PARAM */) );
                  if(((&(data->simulationInfo->booleanVarsPre[111]/* cc.isBusy[1] DISCRETE */) )[drone - 1] && tmp94))
                  {
                    (&(data->localData[0]->booleanVars[111]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 0;

                    tmp96 = ((modelica_integer) 1); tmp97 = 1; tmp98 = ((modelica_integer) 16);
                    if(!(((tmp97 > 0) && (tmp96 > tmp98)) || ((tmp97 < 0) && (tmp96 < tmp98))))
                    {
                      modelica_integer area;
                      for(area = ((modelica_integer) 1); in_range_integer(area, tmp96, tmp98); area += tmp97)
                      {
                        if(((&(data->simulationInfo->integerVarsPre[8]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] == drone))
                        {
                          (&(data->localData[0]->integerVars[8]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);

                          (&(data->localData[0]->booleanVars[95]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1] = 1;

                          (&(data->localData[0]->realVars[279]/* cc.lastVisited[1] DISCRETE */) )[area - 1] = data->localData[0]->timeValue;

                          break;
                        }
                      }
                    }
                  }
                  else
                  {
                    if((&(data->simulationInfo->booleanVarsPre[111]/* cc.isBusy[1] DISCRETE */) )[drone - 1])
                    {
                      tmp99 = Greater(fabs(data->localData[0]->timeValue - (&(data->simulationInfo->realVarsPre[353]/* cc.setpointChangeTime[1] DISCRETE */) )[drone - 1]),(data->simulationInfo->realParameter[5003]/* p.arrival_timeout PARAM */) );
                      if(tmp99)
                      {
                        (&(data->localData[0]->booleanVars[111]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 0;

                        tmp101 = ((modelica_integer) 1); tmp102 = 1; tmp103 = ((modelica_integer) 16);
                        if(!(((tmp102 > 0) && (tmp101 > tmp103)) || ((tmp102 < 0) && (tmp101 < tmp103))))
                        {
                          modelica_integer area;
                          for(area = ((modelica_integer) 1); in_range_integer(area, tmp101, tmp103); area += tmp102)
                          {
                            if(((&(data->simulationInfo->integerVarsPre[8]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] == drone))
                            {
                              (&(data->localData[0]->integerVars[8]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }

              tmp108 = ((modelica_integer) 1); tmp109 = 1; tmp110 = ((modelica_integer) 7);
              if(!(((tmp109 > 0) && (tmp108 > tmp110)) || ((tmp109 < 0) && (tmp108 < tmp110))))
              {
                modelica_integer drone;
                for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp108, tmp110); drone += tmp109)
                {
                  if((!(&(data->simulationInfo->booleanVarsPre[118]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
                  {
                    real_array_create(&tmp107, ((modelica_real*)&((&(data->simulationInfo->realVarsPre[332]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 1)-1)])), 1, (_index_t)3);
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
                  tmp111 = Greater(omc_how__many__drones__in__area(threadData, area, (data->simulationInfo->realVarsPre[382]/* cc.time_span DISCRETE */) ),((modelica_integer) 0));
                  if(tmp111)
                  {
                    (&(data->localData[0]->booleanVars[95]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1] = 1;

                    (&(data->localData[0]->realVars[279]/* cc.lastVisited[1] DISCRETE */) )[area - 1] = data->localData[0]->timeValue;
                  }
                }
              }

              (data->localData[0]->realVars[271]/* cc.err DISCRETE */)  = 0.0;

              tmp115 = ((modelica_integer) 1); tmp116 = 1; tmp117 = ((modelica_integer) 16);
              if(!(((tmp116 > 0) && (tmp115 > tmp117)) || ((tmp116 < 0) && (tmp115 < tmp117))))
              {
                modelica_integer area;
                for(area = ((modelica_integer) 1); in_range_integer(area, tmp115, tmp117); area += tmp116)
                {
                  if((!(&(data->simulationInfo->booleanVarsPre[95]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1]))
                  {
                    (data->localData[0]->realVars[271]/* cc.err DISCRETE */)  = 100.0;

                    break;
                  }
                }
              }

              tmp118 = Less((data->simulationInfo->realVarsPre[271]/* cc.err DISCRETE */) ,1.0);
              if(tmp118)
              {
                (data->localData[0]->realVars[381]/* cc.time_passed_since_last_loop DISCRETE */)  = data->localData[0]->timeValue - (data->simulationInfo->realVarsPre[382]/* cc.time_span DISCRETE */) ;

                (data->localData[0]->realVars[382]/* cc.time_span DISCRETE */)  = data->localData[0]->timeValue;

                array_alloc_scalar_boolean_array(&tmp119, 16, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
                boolean_array_create(&tmp120, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[95]/* cc.hasBeenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
                boolean_array_copy_data(tmp119, tmp120);

                array_alloc_scalar_integer_array(&tmp121, 16, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
                integer_array_create(&tmp122, ((modelica_integer*)&((&(data->localData[0]->integerVars[8]/* cc.hasBeenSelected[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
                integer_array_copy_data(tmp121, tmp122);
              }

              tmp123 = LessEq((data->localData[0]->integerVars[0]/* cc.aliveDrones DISCRETE */) ,((modelica_integer) 0));
              if(tmp123)
              {
                omc_disconnect__from__db(threadData);

                (data->localData[0]->booleanVars[94]/* cc.endSimulation DISCRETE */)  = 1;
              }

              (data->localData[0]->integerVars[25]/* cc.state DISCRETE */)  = ((modelica_integer) 25);
            }
            else
            {
              if(((data->simulationInfo->integerVarsPre[25]/* cc.state DISCRETE */)  == ((modelica_integer) 25)))
              {
                tmp161 = ((modelica_integer) 1); tmp162 = 1; tmp163 = ((modelica_integer) 7);
                if(!(((tmp162 > 0) && (tmp161 > tmp163)) || ((tmp162 < 0) && (tmp161 < tmp163))))
                {
                  modelica_integer drone;
                  for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp161, tmp163); drone += tmp162)
                  {
                    (&(data->localData[0]->booleanVars[139]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 0;

                    real_array_create(&tmp125, ((modelica_real*)&((&data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
                    tmp126 = max_real_array(tmp125);
                    (data->localData[0]->realVars[296]/* cc.min_distance DISCRETE */)  = tmp126;

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

                    if(((!(&(data->simulationInfo->booleanVarsPre[111]/* cc.isBusy[1] DISCRETE */) )[drone - 1]) && (!(&(data->simulationInfo->booleanVarsPre[118]/* cc.isDead[1] DISCRETE */) )[drone - 1])))
                    {
                      tmp137 = ((modelica_integer) 1); tmp138 = 1; tmp139 = ((modelica_integer) 16);
                      if(!(((tmp138 > 0) && (tmp137 > tmp139)) || ((tmp138 < 0) && (tmp137 < tmp139))))
                      {
                        modelica_integer area;
                        for(area = ((modelica_integer) 1); in_range_integer(area, tmp137, tmp139); area += tmp138)
                        {
                          if(((!(&(data->simulationInfo->booleanVarsPre[95]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1]) && ((&(data->simulationInfo->integerVarsPre[8]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] == ((modelica_integer) 0))))
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
                            tmp128._nDrones = ((modelica_integer) 7);
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
                            (data->localData[0]->realVars[259]/* cc.area_x DISCRETE */)  = omc_areaCenter(threadData, tmp128, area ,&(data->localData[0]->realVars[260]/* cc.area_y DISCRETE */)  ,&(data->localData[0]->realVars[261]/* cc.area_z DISCRETE */) );

                            tmp132 = (&(data->simulationInfo->realVarsPre[332]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 1)-1)] - (data->localData[0]->realVars[259]/* cc.area_x DISCRETE */) ;
                            tmp133 = (&(data->simulationInfo->realVarsPre[332]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 2)-1)] - (data->localData[0]->realVars[260]/* cc.area_y DISCRETE */) ;
                            tmp134 = (&(data->simulationInfo->realVarsPre[332]/* cc.pos[1,1] DISCRETE */) )[(drone - 1) * 3 + (((modelica_integer) 3)-1)] - (data->localData[0]->realVars[261]/* cc.area_z DISCRETE */) ;
                            (data->localData[0]->realVars[383]/* cc.tmp_distance DISCRETE */)  = sqrt((tmp132 * tmp132) + (tmp133 * tmp133) + (tmp134 * tmp134));

                            tmp135 = Less((data->localData[0]->realVars[383]/* cc.tmp_distance DISCRETE */) ,(data->localData[0]->realVars[296]/* cc.min_distance DISCRETE */) );
                            if(tmp135)
                            {
                              (data->localData[0]->realVars[296]/* cc.min_distance DISCRETE */)  = (data->localData[0]->realVars[383]/* cc.tmp_distance DISCRETE */) ;

                              (data->localData[0]->integerVars[26]/* cc.tmp_area_1 DISCRETE */)  = area;
                            }

                            (data->localData[0]->realVars[384]/* cc.tmp_time DISCRETE */)  = data->localData[0]->timeValue - (&(data->simulationInfo->realVarsPre[279]/* cc.lastVisited[1] DISCRETE */) )[area - 1];

                            tmp136 = Greater((data->localData[0]->realVars[384]/* cc.tmp_time DISCRETE */) ,(data->localData[0]->realVars[295]/* cc.max_time DISCRETE */) );
                            if(tmp136)
                            {
                              (data->localData[0]->realVars[295]/* cc.max_time DISCRETE */)  = (data->localData[0]->realVars[384]/* cc.tmp_time DISCRETE */) ;

                              (data->localData[0]->integerVars[27]/* cc.tmp_area_2 DISCRETE */)  = area;
                            }
                          }
                        }
                      }

                      if(((!((data->localData[0]->integerVars[26]/* cc.tmp_area_1 DISCRETE */)  == ((modelica_integer) 0))) && (!((data->localData[0]->integerVars[27]/* cc.tmp_area_2 DISCRETE */)  == ((modelica_integer) 0)))))
                      {
                        (data->localData[0]->realVars[269]/* cc.choice_value_1 DISCRETE */)  = ((data->localData[0]->realVars[296]/* cc.min_distance DISCRETE */) ) * ((data->simulationInfo->realParameter[5006]/* p.cc_choice PARAM */) );

                        (data->localData[0]->realVars[270]/* cc.choice_value_2 DISCRETE */)  = ((data->localData[0]->realVars[295]/* cc.max_time DISCRETE */) ) * (1.0 - (data->simulationInfo->realParameter[5006]/* p.cc_choice PARAM */) );

                        (&(data->localData[0]->booleanVars[139]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                        (&(data->localData[0]->realVars[353]/* cc.setpointChangeTime[1] DISCRETE */) )[drone - 1] = data->localData[0]->timeValue;

                        (&(data->localData[0]->booleanVars[111]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                        tmp142 = Greater((data->localData[0]->realVars[269]/* cc.choice_value_1 DISCRETE */) ,(data->localData[0]->realVars[270]/* cc.choice_value_2 DISCRETE */) );
                        if(tmp142)
                        {
                          tmp143 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[5027]/* p.p_worst PARAM */) );
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
                            tmp144._nDrones = ((modelica_integer) 7);
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
                            (&(data->localData[0]->realVars[360]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp144, (data->localData[0]->integerVars[26]/* cc.tmp_area_1 DISCRETE */)  ,&(&(data->localData[0]->realVars[367]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[374]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                            (&(data->localData[0]->integerVars[8]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[26]/* cc.tmp_area_1 DISCRETE */)  - 1] = drone;
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
                            tmp148._nDrones = ((modelica_integer) 7);
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
                            (&(data->localData[0]->realVars[360]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp148, (data->localData[0]->integerVars[27]/* cc.tmp_area_2 DISCRETE */)  ,&(&(data->localData[0]->realVars[367]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[374]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                            (&(data->localData[0]->integerVars[8]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[27]/* cc.tmp_area_2 DISCRETE */)  - 1] = drone;
                          }
                        }
                        else
                        {
                          tmp152 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[5027]/* p.p_worst PARAM */) );
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
                            tmp153._nDrones = ((modelica_integer) 7);
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
                            (&(data->localData[0]->realVars[360]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp153, (data->localData[0]->integerVars[27]/* cc.tmp_area_2 DISCRETE */)  ,&(&(data->localData[0]->realVars[367]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[374]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                            (&(data->localData[0]->integerVars[8]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[27]/* cc.tmp_area_2 DISCRETE */)  - 1] = drone;
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
                            tmp157._nDrones = ((modelica_integer) 7);
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
                            (&(data->localData[0]->realVars[360]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp157, (data->localData[0]->integerVars[26]/* cc.tmp_area_1 DISCRETE */)  ,&(&(data->localData[0]->realVars[367]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[374]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                            (&(data->localData[0]->integerVars[8]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[26]/* cc.tmp_area_1 DISCRETE */)  - 1] = drone;
                          }
                        }
                      }
                      else
                      {
                        (&(data->localData[0]->booleanVars[139]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                        (&(data->localData[0]->realVars[353]/* cc.setpointChangeTime[1] DISCRETE */) )[drone - 1] = data->localData[0]->timeValue;

                        (&(data->localData[0]->booleanVars[111]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                        (&(data->localData[0]->realVars[360]/* cc.setx[1] DISCRETE */) )[drone - 1] = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[118]/* cc.p.flyZone[1] PARAM */) );

                        (&(data->localData[0]->realVars[367]/* cc.sety[1] DISCRETE */) )[drone - 1] = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[119]/* cc.p.flyZone[2] PARAM */) );

                        (&(data->localData[0]->realVars[374]/* cc.setz[1] DISCRETE */) )[drone - 1] = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[120]/* cc.p.flyZone[3] PARAM */) );
                      }
                    }
                  }
                }

                tmp169 = ((modelica_integer) 1); tmp170 = 1; tmp171 = ((modelica_integer) 7);
                if(!(((tmp170 > 0) && (tmp169 > tmp171)) || ((tmp170 < 0) && (tmp169 < tmp171))))
                {
                  modelica_integer drone;
                  for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp169, tmp171); drone += tmp170)
                  {
                    if((!(&(data->simulationInfo->booleanVarsPre[118]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
                    {
                      if((&(data->simulationInfo->booleanVarsPre[125]/* cc.isRecharging[1] DISCRETE */) )[drone - 1])
                      {
                        tmp164 = Greater((&data->localData[0]->realVars[262]/* cc.battery[1] DISCRETE */)[drone - 1] ,(data->simulationInfo->realParameter[132]/* cc.p.rechargedThreshold PARAM */) );
                        if(tmp164)
                        {
                          (&(data->localData[0]->booleanVars[125]/* cc.isRecharging[1] DISCRETE */) )[drone - 1] = 0;

                          (data->localData[0]->integerVars[24]/* cc.rechargingDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[24]/* cc.rechargingDrones DISCRETE */)  - ((modelica_integer) 1);
                        }
                        else
                        {
                          tmp165 = Less((&data->localData[0]->realVars[262]/* cc.battery[1] DISCRETE */)[drone - 1] ,(data->simulationInfo->realParameter[132]/* cc.p.rechargedThreshold PARAM */) );
                          if(tmp165)
                          {
                            (&(data->localData[0]->booleanVars[125]/* cc.isRecharging[1] DISCRETE */) )[drone - 1] = 1;

                            (&(data->localData[0]->realVars[360]/* cc.setx[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[115]/* cc.p.docking_bay[1] PARAM */) ;

                            (&(data->localData[0]->realVars[367]/* cc.sety[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[116]/* cc.p.docking_bay[2] PARAM */) ;

                            (&(data->localData[0]->realVars[374]/* cc.setz[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[117]/* cc.p.docking_bay[3] PARAM */) ;
                          }
                        }
                      }
                      else
                      {
                        tmp166 = Less((&data->localData[0]->realVars[262]/* cc.battery[1] DISCRETE */)[drone - 1] ,(data->simulationInfo->realParameter[113]/* cc.p.dangerousBatteryLevel PARAM */) );
                        if(tmp166)
                        {
                          (data->localData[0]->integerVars[24]/* cc.rechargingDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[24]/* cc.rechargingDrones DISCRETE */)  + ((modelica_integer) 1);

                          (&(data->localData[0]->booleanVars[125]/* cc.isRecharging[1] DISCRETE */) )[drone - 1] = 1;

                          (&(data->localData[0]->booleanVars[139]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                          (&(data->localData[0]->booleanVars[111]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                          (&(data->localData[0]->realVars[360]/* cc.setx[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[115]/* cc.p.docking_bay[1] PARAM */) ;

                          (&(data->localData[0]->realVars[367]/* cc.sety[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[116]/* cc.p.docking_bay[2] PARAM */) ;

                          (&(data->localData[0]->realVars[374]/* cc.setz[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[117]/* cc.p.docking_bay[3] PARAM */) ;
                        }
                        else
                        {
                          tmp167 = Less(((modelica_real)(data->simulationInfo->integerVarsPre[24]/* cc.rechargingDrones DISCRETE */) ),1.7);
                          if(tmp167)
                          {
                            tmp168 = Less(omc_myrandom(threadData),((data->simulationInfo->realParameter[5026]/* p.p_recharge PARAM */) ) * (1.0 - (DIVISION_SIM((&data->localData[0]->realVars[262]/* cc.battery[1] DISCRETE */)[drone - 1] ,(data->simulationInfo->realParameter[107]/* cc.p.capacity PARAM */) ,"cc.p.capacity",equationIndexes))));
                            if(tmp168)
                            {
                              (&(data->localData[0]->booleanVars[125]/* cc.isRecharging[1] DISCRETE */) )[drone - 1] = 1;

                              (data->localData[0]->integerVars[24]/* cc.rechargingDrones DISCRETE */)  = (data->simulationInfo->integerVarsPre[24]/* cc.rechargingDrones DISCRETE */)  + ((modelica_integer) 1);

                              (&(data->localData[0]->booleanVars[139]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                              (&(data->localData[0]->booleanVars[111]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                              (&(data->localData[0]->realVars[360]/* cc.setx[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[115]/* cc.p.docking_bay[1] PARAM */) ;

                              (&(data->localData[0]->realVars[367]/* cc.sety[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[116]/* cc.p.docking_bay[2] PARAM */) ;

                              (&(data->localData[0]->realVars[374]/* cc.setz[1] DISCRETE */) )[drone - 1] = (data->simulationInfo->realParameter[117]/* cc.p.docking_bay[3] PARAM */) ;
                            }
                          }
                        }
                      }
                    }
                  }
                }

                tmp172 = ((modelica_integer) 1); tmp173 = 1; tmp174 = ((modelica_integer) 7);
                if(!(((tmp173 > 0) && (tmp172 > tmp174)) || ((tmp173 < 0) && (tmp172 < tmp174))))
                {
                  modelica_integer drone;
                  for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp172, tmp174); drone += tmp173)
                  {
                    if((&(data->simulationInfo->booleanVarsPre[139]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1])
                    {
                      (data->localData[0]->integerVars[25]/* cc.state DISCRETE */)  = ((modelica_integer) 30);

                      break;
                    }
                    else
                    {
                      (data->localData[0]->integerVars[25]/* cc.state DISCRETE */)  = ((modelica_integer) 0);
                    }
                  }
                }
              }
              else
              {
                if(((data->simulationInfo->integerVarsPre[25]/* cc.state DISCRETE */)  == ((modelica_integer) 30)))
                {
                  tmp176 = ((modelica_integer) 1); tmp177 = 1; tmp178 = ((modelica_integer) 7);
                  if(!(((tmp177 > 0) && (tmp176 > tmp178)) || ((tmp177 < 0) && (tmp176 < tmp178))))
                  {
                    modelica_integer drone;
                    for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp176, tmp178); drone += tmp177)
                    {
                      if((!(&data->localData[0]->booleanVars[118]/* cc.isDead[1] DISCRETE */)[drone - 1] ))
                      {
                        (&(data->localData[0]->realVars[297]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 1)-1)] = 2.0;

                        (&(data->localData[0]->realVars[297]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 2)-1)] = (&data->localData[0]->realVars[360]/* cc.setx[1] DISCRETE */)[drone - 1] ;

                        (&(data->localData[0]->realVars[297]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 3)-1)] = (&data->localData[0]->realVars[367]/* cc.sety[1] DISCRETE */)[drone - 1] ;

                        (&(data->localData[0]->realVars[297]/* cc.msg_to_drone[1,1] DISCRETE */) )[(drone - 1) * 5 + (((modelica_integer) 4)-1)] = (&data->localData[0]->realVars[374]/* cc.setz[1] DISCRETE */)[drone - 1] ;

                        (&(data->localData[0]->booleanVars[80]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 0;

                        (&(data->localData[0]->booleanVars[139]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 0;
                      }
                      else
                      {
                        (&(data->localData[0]->booleanVars[80]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;
                      }
                    }
                  }

                  (data->localData[0]->integerVars[25]/* cc.state DISCRETE */)  = ((modelica_integer) 40);
                }
                else
                {
                  if(((data->simulationInfo->integerVarsPre[25]/* cc.state DISCRETE */)  == ((modelica_integer) 40)))
                  {
                    tmp180 = ((modelica_integer) 1); tmp181 = 1; tmp182 = ((modelica_integer) 7);
                    if(!(((tmp181 > 0) && (tmp180 > tmp182)) || ((tmp181 < 0) && (tmp180 < tmp182))))
                    {
                      modelica_integer drone;
                      for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp180, tmp182); drone += tmp181)
                      {
                        if((!(&(data->simulationInfo->booleanVarsPre[80]/* cc.comm_done[1] DISCRETE */) )[drone - 1]))
                        {
                          (&(data->localData[0]->booleanVars[153]/* cc.writesignal[1] DISCRETE */) )[drone - 1] = omc_WriteToFIFO(threadData, (&(data->simulationInfo->integerVarsPre[1]/* cc.fifox[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[153]/* cc.writesignal[1] DISCRETE */) )[drone - 1], (&(data->simulationInfo->booleanVarsPre[146]/* cc.spaceavailable[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1]);

                          if(omc_FifoIODone(threadData, (&data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */)[drone - 1] ))
                          {
                            (&(data->localData[0]->booleanVars[80]/* cc.comm_done[1] DISCRETE */) )[drone - 1] = 1;

                            (&(data->localData[0]->integerVars[1]/* cc.fifox[1] DISCRETE */) )[drone - 1] = ((modelica_integer) 0);
                          }
                        }
                      }
                    }

                    (data->localData[0]->integerVars[28]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

                    tmp183 = ((modelica_integer) 1); tmp184 = 1; tmp185 = ((modelica_integer) 7);
                    if(!(((tmp184 > 0) && (tmp183 > tmp185)) || ((tmp184 < 0) && (tmp183 < tmp185))))
                    {
                      modelica_integer drone;
                      for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp183, tmp185); drone += tmp184)
                      {
                        if((!(&(data->simulationInfo->booleanVarsPre[118]/* cc.isDead[1] DISCRETE */) )[drone - 1]))
                        {
                          if((!(&(data->simulationInfo->booleanVarsPre[80]/* cc.comm_done[1] DISCRETE */) )[drone - 1]))
                          {
                            (data->localData[0]->integerVars[28]/* cc.z DISCRETE */)  = ((modelica_integer) 100);

                            break;
                          }
                        }
                      }
                    }

                    if(((data->localData[0]->integerVars[28]/* cc.z DISCRETE */)  == ((modelica_integer) 0)))
                    {
                      (data->localData[0]->integerVars[25]/* cc.state DISCRETE */)  = ((modelica_integer) 0);
                    }
                  }
                  else
                  {
                    (data->localData[0]->integerVars[25]/* cc.state DISCRETE */)  = (data->simulationInfo->integerVarsPre[25]/* cc.state DISCRETE */) ;
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
equation index: 564
type: SIMPLE_ASSIGN
cc_to_drone[7].inputdata[4] = cc.msg_to_drone[7,4]
*/
void System_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  (data->localData[0]->realVars[156]/* cc_to_drone[7].inputdata[4] variable */)  = (data->localData[0]->realVars[330]/* cc.msg_to_drone[7,4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 565
type: SIMPLE_ASSIGN
cc_to_drone[7].inputdata[1] = cc.msg_to_drone[7,1]
*/
void System_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  (data->localData[0]->realVars[153]/* cc_to_drone[7].inputdata[1] variable */)  = (data->localData[0]->realVars[327]/* cc.msg_to_drone[7,1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 566
type: SIMPLE_ASSIGN
cc_to_drone[3].inputdata[2] = cc.msg_to_drone[3,2]
*/
void System_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  (data->localData[0]->realVars[134]/* cc_to_drone[3].inputdata[2] variable */)  = (data->localData[0]->realVars[308]/* cc.msg_to_drone[3,2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 567
type: SIMPLE_ASSIGN
cc_to_drone[6].inputdata[2] = cc.msg_to_drone[6,2]
*/
void System_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  (data->localData[0]->realVars[149]/* cc_to_drone[6].inputdata[2] variable */)  = (data->localData[0]->realVars[323]/* cc.msg_to_drone[6,2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 568
type: SIMPLE_ASSIGN
cc_to_drone[7].inputdata[5] = cc.msg_to_drone[7,5]
*/
void System_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  (data->localData[0]->realVars[157]/* cc_to_drone[7].inputdata[5] variable */)  = (data->localData[0]->realVars[331]/* cc.msg_to_drone[7,5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 569
type: SIMPLE_ASSIGN
cc_to_drone[6].inputdata[4] = cc.msg_to_drone[6,4]
*/
void System_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  (data->localData[0]->realVars[151]/* cc_to_drone[6].inputdata[4] variable */)  = (data->localData[0]->realVars[325]/* cc.msg_to_drone[6,4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 570
type: SIMPLE_ASSIGN
cc_to_drone[6].inputdata[1] = cc.msg_to_drone[6,1]
*/
void System_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  (data->localData[0]->realVars[148]/* cc_to_drone[6].inputdata[1] variable */)  = (data->localData[0]->realVars[322]/* cc.msg_to_drone[6,1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 571
type: SIMPLE_ASSIGN
cc_to_drone[5].inputdata[2] = cc.msg_to_drone[5,2]
*/
void System_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  (data->localData[0]->realVars[144]/* cc_to_drone[5].inputdata[2] variable */)  = (data->localData[0]->realVars[318]/* cc.msg_to_drone[5,2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 572
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[1] = cc.msg_to_drone[1,1]
*/
void System_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  (data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)  = (data->localData[0]->realVars[297]/* cc.msg_to_drone[1,1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 573
type: SIMPLE_ASSIGN
drone_to_cc[2].readsignal = cc.readsignal[2]
*/
void System_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  (data->localData[0]->booleanVars[259]/* drone_to_cc[2].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[133]/* cc.readsignal[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 574
type: SIMPLE_ASSIGN
drone_to_cc[2].readsigint = not pre(drone_to_cc[2].readsignal) == drone_to_cc[2].readsignal
*/
void System_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  (data->localData[0]->booleanVars[252]/* drone_to_cc[2].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[259]/* drone_to_cc[2].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[259]/* drone_to_cc[2].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[259]/* drone_to_cc[2].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[259]/* drone_to_cc[2].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 575
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[5] = cc.msg_to_drone[1,5]
*/
void System_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  (data->localData[0]->realVars[127]/* cc_to_drone[1].inputdata[5] variable */)  = (data->localData[0]->realVars[301]/* cc.msg_to_drone[1,5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 576
type: SIMPLE_ASSIGN
drone_to_cc[5].readsignal = cc.readsignal[5]
*/
void System_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  (data->localData[0]->booleanVars[262]/* drone_to_cc[5].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[136]/* cc.readsignal[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 577
type: SIMPLE_ASSIGN
drone_to_cc[5].readsigint = not pre(drone_to_cc[5].readsignal) == drone_to_cc[5].readsignal
*/
void System_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  (data->localData[0]->booleanVars[255]/* drone_to_cc[5].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[262]/* drone_to_cc[5].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[262]/* drone_to_cc[5].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[262]/* drone_to_cc[5].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[262]/* drone_to_cc[5].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 578
type: SIMPLE_ASSIGN
cc_to_drone[7].writesignal = cc.writesignal[7]
*/
void System_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  (data->localData[0]->booleanVars[201]/* cc_to_drone[7].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[159]/* cc.writesignal[7] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 579
type: SIMPLE_ASSIGN
cc_to_drone[7].writesigint = not pre(cc_to_drone[7].writesignal) == cc_to_drone[7].writesignal
*/
void System_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  (data->localData[0]->booleanVars[194]/* cc_to_drone[7].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[201]/* cc_to_drone[7].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[201]/* cc_to_drone[7].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[201]/* cc_to_drone[7].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[201]/* cc_to_drone[7].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 580
type: SIMPLE_ASSIGN
drone_to_cc[1].readsignal = cc.readsignal[1]
*/
void System_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  (data->localData[0]->booleanVars[258]/* drone_to_cc[1].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[132]/* cc.readsignal[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 581
type: SIMPLE_ASSIGN
drone_to_cc[1].readsigint = not pre(drone_to_cc[1].readsignal) == drone_to_cc[1].readsignal
*/
void System_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  (data->localData[0]->booleanVars[251]/* drone_to_cc[1].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[258]/* drone_to_cc[1].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[258]/* drone_to_cc[1].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[258]/* drone_to_cc[1].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[258]/* drone_to_cc[1].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 582
type: SIMPLE_ASSIGN
cc_to_drone[5].inputdata[5] = cc.msg_to_drone[5,5]
*/
void System_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  (data->localData[0]->realVars[147]/* cc_to_drone[5].inputdata[5] variable */)  = (data->localData[0]->realVars[321]/* cc.msg_to_drone[5,5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 583
type: SIMPLE_ASSIGN
cc_to_drone[5].inputdata[4] = cc.msg_to_drone[5,4]
*/
void System_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  (data->localData[0]->realVars[146]/* cc_to_drone[5].inputdata[4] variable */)  = (data->localData[0]->realVars[320]/* cc.msg_to_drone[5,4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 584
type: SIMPLE_ASSIGN
cc_to_drone[5].inputdata[3] = cc.msg_to_drone[5,3]
*/
void System_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  (data->localData[0]->realVars[145]/* cc_to_drone[5].inputdata[3] variable */)  = (data->localData[0]->realVars[319]/* cc.msg_to_drone[5,3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 585
type: SIMPLE_ASSIGN
cc_to_drone[4].inputdata[3] = cc.msg_to_drone[4,3]
*/
void System_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  (data->localData[0]->realVars[140]/* cc_to_drone[4].inputdata[3] variable */)  = (data->localData[0]->realVars[314]/* cc.msg_to_drone[4,3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 586
type: SIMPLE_ASSIGN
cc_to_drone[5].inputdata[1] = cc.msg_to_drone[5,1]
*/
void System_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  (data->localData[0]->realVars[143]/* cc_to_drone[5].inputdata[1] variable */)  = (data->localData[0]->realVars[317]/* cc.msg_to_drone[5,1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 587
type: ALGORITHM

  cc_to_drone[5].newest := pre(cc_to_drone[5].newest);
  cc_to_drone[5].oldest := pre(cc_to_drone[5].oldest);
  cc_to_drone[5].fifosize := pre(cc_to_drone[5].fifosize);
  cc_to_drone[5].fifo[10,5] := pre(cc_to_drone[5].fifo[10,5]);
  cc_to_drone[5].fifo[10,4] := pre(cc_to_drone[5].fifo[10,4]);
  cc_to_drone[5].fifo[10,3] := pre(cc_to_drone[5].fifo[10,3]);
  cc_to_drone[5].fifo[10,2] := pre(cc_to_drone[5].fifo[10,2]);
  cc_to_drone[5].fifo[10,1] := pre(cc_to_drone[5].fifo[10,1]);
  cc_to_drone[5].fifo[9,5] := pre(cc_to_drone[5].fifo[9,5]);
  cc_to_drone[5].fifo[9,4] := pre(cc_to_drone[5].fifo[9,4]);
  cc_to_drone[5].fifo[9,3] := pre(cc_to_drone[5].fifo[9,3]);
  cc_to_drone[5].fifo[9,2] := pre(cc_to_drone[5].fifo[9,2]);
  cc_to_drone[5].fifo[9,1] := pre(cc_to_drone[5].fifo[9,1]);
  cc_to_drone[5].fifo[8,5] := pre(cc_to_drone[5].fifo[8,5]);
  cc_to_drone[5].fifo[8,4] := pre(cc_to_drone[5].fifo[8,4]);
  cc_to_drone[5].fifo[8,3] := pre(cc_to_drone[5].fifo[8,3]);
  cc_to_drone[5].fifo[8,2] := pre(cc_to_drone[5].fifo[8,2]);
  cc_to_drone[5].fifo[8,1] := pre(cc_to_drone[5].fifo[8,1]);
  cc_to_drone[5].fifo[7,5] := pre(cc_to_drone[5].fifo[7,5]);
  cc_to_drone[5].fifo[7,4] := pre(cc_to_drone[5].fifo[7,4]);
  cc_to_drone[5].fifo[7,3] := pre(cc_to_drone[5].fifo[7,3]);
  cc_to_drone[5].fifo[7,2] := pre(cc_to_drone[5].fifo[7,2]);
  cc_to_drone[5].fifo[7,1] := pre(cc_to_drone[5].fifo[7,1]);
  cc_to_drone[5].fifo[6,5] := pre(cc_to_drone[5].fifo[6,5]);
  cc_to_drone[5].fifo[6,4] := pre(cc_to_drone[5].fifo[6,4]);
  cc_to_drone[5].fifo[6,3] := pre(cc_to_drone[5].fifo[6,3]);
  cc_to_drone[5].fifo[6,2] := pre(cc_to_drone[5].fifo[6,2]);
  cc_to_drone[5].fifo[6,1] := pre(cc_to_drone[5].fifo[6,1]);
  cc_to_drone[5].fifo[5,5] := pre(cc_to_drone[5].fifo[5,5]);
  cc_to_drone[5].fifo[5,4] := pre(cc_to_drone[5].fifo[5,4]);
  cc_to_drone[5].fifo[5,3] := pre(cc_to_drone[5].fifo[5,3]);
  cc_to_drone[5].fifo[5,2] := pre(cc_to_drone[5].fifo[5,2]);
  cc_to_drone[5].fifo[5,1] := pre(cc_to_drone[5].fifo[5,1]);
  cc_to_drone[5].fifo[4,5] := pre(cc_to_drone[5].fifo[4,5]);
  cc_to_drone[5].fifo[4,4] := pre(cc_to_drone[5].fifo[4,4]);
  cc_to_drone[5].fifo[4,3] := pre(cc_to_drone[5].fifo[4,3]);
  cc_to_drone[5].fifo[4,2] := pre(cc_to_drone[5].fifo[4,2]);
  cc_to_drone[5].fifo[4,1] := pre(cc_to_drone[5].fifo[4,1]);
  cc_to_drone[5].fifo[3,5] := pre(cc_to_drone[5].fifo[3,5]);
  cc_to_drone[5].fifo[3,4] := pre(cc_to_drone[5].fifo[3,4]);
  cc_to_drone[5].fifo[3,3] := pre(cc_to_drone[5].fifo[3,3]);
  cc_to_drone[5].fifo[3,2] := pre(cc_to_drone[5].fifo[3,2]);
  cc_to_drone[5].fifo[3,1] := pre(cc_to_drone[5].fifo[3,1]);
  cc_to_drone[5].fifo[2,5] := pre(cc_to_drone[5].fifo[2,5]);
  cc_to_drone[5].fifo[2,4] := pre(cc_to_drone[5].fifo[2,4]);
  cc_to_drone[5].fifo[2,3] := pre(cc_to_drone[5].fifo[2,3]);
  cc_to_drone[5].fifo[2,2] := pre(cc_to_drone[5].fifo[2,2]);
  cc_to_drone[5].fifo[2,1] := pre(cc_to_drone[5].fifo[2,1]);
  cc_to_drone[5].fifo[1,5] := pre(cc_to_drone[5].fifo[1,5]);
  cc_to_drone[5].fifo[1,4] := pre(cc_to_drone[5].fifo[1,4]);
  cc_to_drone[5].fifo[1,3] := pre(cc_to_drone[5].fifo[1,3]);
  cc_to_drone[5].fifo[1,2] := pre(cc_to_drone[5].fifo[1,2]);
  cc_to_drone[5].fifo[1,1] := pre(cc_to_drone[5].fifo[1,1]);
  cc_to_drone[5].spaceavailable := pre(cc_to_drone[5].spaceavailable);
  cc_to_drone[5].outputdata[5] := pre(cc_to_drone[5].outputdata[5]);
  cc_to_drone[5].outputdata[4] := pre(cc_to_drone[5].outputdata[4]);
  cc_to_drone[5].outputdata[3] := pre(cc_to_drone[5].outputdata[3]);
  cc_to_drone[5].outputdata[2] := pre(cc_to_drone[5].outputdata[2]);
  cc_to_drone[5].outputdata[1] := pre(cc_to_drone[5].outputdata[1]);
  cc_to_drone[5].datavailable := pre(cc_to_drone[5].datavailable);
  $whenCondition30 := pre($whenCondition30);
  $whenCondition29 := pre($whenCondition29);
  $whenCondition28 := pre($whenCondition28);
  $whenCondition28 := pre(cc_to_drone[5].readsigint) and pre(cc_to_drone[5].writesigint);
  $whenCondition29 := pre(cc_to_drone[5].readsigint) and not pre(cc_to_drone[5].writesigint) and pre(cc_to_drone[5].fifosize) >= 1;
  $whenCondition30 := not pre(cc_to_drone[5].readsigint) and pre(cc_to_drone[5].writesigint) and pre(cc_to_drone[5].fifosize) < 10;
  when false then
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
  elsewhen $whenCondition28 then
    if pre(cc_to_drone[5].fifosize) < 10 then
      for j in 1:5 loop
        cc_to_drone[5].fifo[pre(cc_to_drone[5].newest),j] := cc_to_drone[5].inputdata[j];
      end for;
      cc_to_drone[5].newest := mod(pre(cc_to_drone[5].newest), 10) + 1;
      for j in 1:5 loop
        cc_to_drone[5].outputdata[j] := cc_to_drone[5].fifo[pre(cc_to_drone[5].oldest),j];
      end for;
      cc_to_drone[5].oldest := mod(pre(cc_to_drone[5].oldest), 10) + 1;
    else
      for j in 1:5 loop
        cc_to_drone[5].outputdata[j] := cc_to_drone[5].fifo[pre(cc_to_drone[5].oldest),j];
      end for;
      cc_to_drone[5].oldest := mod(pre(cc_to_drone[5].oldest), 10) + 1;
      for j in 1:5 loop
        cc_to_drone[5].fifo[pre(cc_to_drone[5].newest),j] := cc_to_drone[5].inputdata[j];
      end for;
      cc_to_drone[5].newest := mod(pre(cc_to_drone[5].newest), 10) + 1;
    end if;
  elsewhen $whenCondition29 then
    for j in 1:5 loop
      cc_to_drone[5].outputdata[j] := cc_to_drone[5].fifo[pre(cc_to_drone[5].oldest),j];
    end for;
    cc_to_drone[5].oldest := mod(pre(cc_to_drone[5].oldest), 10) + 1;
    cc_to_drone[5].fifosize := pre(cc_to_drone[5].fifosize) - 1;
    cc_to_drone[5].datavailable := cc_to_drone[5].fifosize >= 1;
    cc_to_drone[5].spaceavailable := true;
  elsewhen $whenCondition30 then
    for j in 1:5 loop
      cc_to_drone[5].fifo[pre(cc_to_drone[5].newest),j] := cc_to_drone[5].inputdata[j];
    end for;
    cc_to_drone[5].newest := mod(pre(cc_to_drone[5].newest), 10) + 1;
    cc_to_drone[5].fifosize := pre(cc_to_drone[5].fifosize) + 1;
    cc_to_drone[5].datavailable := true;
    cc_to_drone[5].spaceavailable := pre(cc_to_drone[5].fifosize) < 10;
    for j in 1:5 loop
      cc_to_drone[5].outputdata[j] := cc_to_drone[5].fifo[pre(cc_to_drone[5].oldest),j];
    end for;
  end when;
*/
void System_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
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
  (data->localData[0]->integerVars[40]/* cc_to_drone[5].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[40]/* cc_to_drone[5].newest DISCRETE */) ;

  (data->localData[0]->integerVars[47]/* cc_to_drone[5].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[47]/* cc_to_drone[5].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[33]/* cc_to_drone[5].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[33]/* cc_to_drone[5].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[634]/* cc_to_drone[5].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[634]/* cc_to_drone[5].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[633]/* cc_to_drone[5].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[633]/* cc_to_drone[5].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[632]/* cc_to_drone[5].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[632]/* cc_to_drone[5].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[631]/* cc_to_drone[5].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[631]/* cc_to_drone[5].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[630]/* cc_to_drone[5].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[630]/* cc_to_drone[5].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[629]/* cc_to_drone[5].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[629]/* cc_to_drone[5].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[628]/* cc_to_drone[5].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[628]/* cc_to_drone[5].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[627]/* cc_to_drone[5].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[627]/* cc_to_drone[5].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[626]/* cc_to_drone[5].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[626]/* cc_to_drone[5].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[625]/* cc_to_drone[5].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[625]/* cc_to_drone[5].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[624]/* cc_to_drone[5].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[624]/* cc_to_drone[5].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[623]/* cc_to_drone[5].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[623]/* cc_to_drone[5].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[622]/* cc_to_drone[5].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[622]/* cc_to_drone[5].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[621]/* cc_to_drone[5].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[621]/* cc_to_drone[5].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[620]/* cc_to_drone[5].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[620]/* cc_to_drone[5].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[619]/* cc_to_drone[5].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[619]/* cc_to_drone[5].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[618]/* cc_to_drone[5].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[618]/* cc_to_drone[5].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[617]/* cc_to_drone[5].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[617]/* cc_to_drone[5].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[616]/* cc_to_drone[5].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[616]/* cc_to_drone[5].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[615]/* cc_to_drone[5].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[615]/* cc_to_drone[5].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[614]/* cc_to_drone[5].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[614]/* cc_to_drone[5].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[613]/* cc_to_drone[5].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[613]/* cc_to_drone[5].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[612]/* cc_to_drone[5].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[612]/* cc_to_drone[5].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[611]/* cc_to_drone[5].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[611]/* cc_to_drone[5].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[610]/* cc_to_drone[5].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[610]/* cc_to_drone[5].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[609]/* cc_to_drone[5].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[609]/* cc_to_drone[5].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[608]/* cc_to_drone[5].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[608]/* cc_to_drone[5].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[607]/* cc_to_drone[5].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[607]/* cc_to_drone[5].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[606]/* cc_to_drone[5].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[606]/* cc_to_drone[5].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[605]/* cc_to_drone[5].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[605]/* cc_to_drone[5].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[604]/* cc_to_drone[5].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[604]/* cc_to_drone[5].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[603]/* cc_to_drone[5].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[603]/* cc_to_drone[5].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[602]/* cc_to_drone[5].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[602]/* cc_to_drone[5].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[601]/* cc_to_drone[5].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[601]/* cc_to_drone[5].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[600]/* cc_to_drone[5].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[600]/* cc_to_drone[5].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[599]/* cc_to_drone[5].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[599]/* cc_to_drone[5].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[598]/* cc_to_drone[5].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[598]/* cc_to_drone[5].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[597]/* cc_to_drone[5].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[597]/* cc_to_drone[5].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[596]/* cc_to_drone[5].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[596]/* cc_to_drone[5].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[595]/* cc_to_drone[5].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[595]/* cc_to_drone[5].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[594]/* cc_to_drone[5].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[594]/* cc_to_drone[5].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[593]/* cc_to_drone[5].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[593]/* cc_to_drone[5].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[592]/* cc_to_drone[5].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[592]/* cc_to_drone[5].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[591]/* cc_to_drone[5].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[591]/* cc_to_drone[5].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[590]/* cc_to_drone[5].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[590]/* cc_to_drone[5].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[589]/* cc_to_drone[5].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[589]/* cc_to_drone[5].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[588]/* cc_to_drone[5].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[588]/* cc_to_drone[5].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[587]/* cc_to_drone[5].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[587]/* cc_to_drone[5].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[586]/* cc_to_drone[5].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[586]/* cc_to_drone[5].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[585]/* cc_to_drone[5].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[585]/* cc_to_drone[5].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[185]/* cc_to_drone[5].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[185]/* cc_to_drone[5].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[759]/* cc_to_drone[5].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[759]/* cc_to_drone[5].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[758]/* cc_to_drone[5].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[758]/* cc_to_drone[5].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[757]/* cc_to_drone[5].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[757]/* cc_to_drone[5].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[756]/* cc_to_drone[5].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[756]/* cc_to_drone[5].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[755]/* cc_to_drone[5].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[755]/* cc_to_drone[5].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[164]/* cc_to_drone[5].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[164]/* cc_to_drone[5].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[23]/* $whenCondition30 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[23]/* $whenCondition30 DISCRETE */) ;

  (data->localData[0]->booleanVars[21]/* $whenCondition29 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[21]/* $whenCondition29 DISCRETE */) ;

  (data->localData[0]->booleanVars[20]/* $whenCondition28 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[20]/* $whenCondition28 DISCRETE */) ;

  (data->localData[0]->booleanVars[20]/* $whenCondition28 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[171]/* cc_to_drone[5].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[192]/* cc_to_drone[5].writesigint DISCRETE */) );

  tmp191 = GreaterEq((data->simulationInfo->integerVarsPre[33]/* cc_to_drone[5].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[21]/* $whenCondition29 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[171]/* cc_to_drone[5].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[192]/* cc_to_drone[5].writesigint DISCRETE */) )) && tmp191);

  tmp192 = Less((data->simulationInfo->integerVarsPre[33]/* cc_to_drone[5].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[23]/* $whenCondition30 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[171]/* cc_to_drone[5].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[192]/* cc_to_drone[5].writesigint DISCRETE */) ) && tmp192);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[164]/* cc_to_drone[5].datavailable DISCRETE */)  = 0;

      tmp193 = ((modelica_integer) 1); tmp194 = 1; tmp195 = ((modelica_integer) 5);
      if(!(((tmp194 > 0) && (tmp193 > tmp195)) || ((tmp194 < 0) && (tmp193 < tmp195))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp193, tmp195); j += tmp194)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 5) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[185]/* cc_to_drone[5].spaceavailable DISCRETE */)  = 1;

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
              (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 5) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[33]/* cc_to_drone[5].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[47]/* cc_to_drone[5].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[40]/* cc_to_drone[5].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[20]/* $whenCondition28 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[20]/* $whenCondition28 DISCRETE */)  /* edge */))
    {
      tmp202 = Less((data->simulationInfo->integerVarsPre[33]/* cc_to_drone[5].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp202)
      {
        tmp203 = ((modelica_integer) 1); tmp204 = 1; tmp205 = ((modelica_integer) 5);
        if(!(((tmp204 > 0) && (tmp203 > tmp205)) || ((tmp204 < 0) && (tmp203 < tmp205))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp203, tmp205); j += tmp204)
          {
            (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 5) - 1) * 10 + ((data->simulationInfo->integerVarsPre[40]/* cc_to_drone[5].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 5) - 1) * 5 + (j-1)] ;
          }
        }

        tmp206 = ((modelica_integer) 10);
        if (tmp206 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[5].newest), 10)");}
        (data->localData[0]->integerVars[40]/* cc_to_drone[5].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[40]/* cc_to_drone[5].newest DISCRETE */) , tmp206) + ((modelica_integer) 1);

        tmp207 = ((modelica_integer) 1); tmp208 = 1; tmp209 = ((modelica_integer) 5);
        if(!(((tmp208 > 0) && (tmp207 > tmp209)) || ((tmp208 < 0) && (tmp207 < tmp209))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp207, tmp209); j += tmp208)
          {
            (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 5) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 5) - 1) * 10 + ((data->simulationInfo->integerVarsPre[47]/* cc_to_drone[5].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp210 = ((modelica_integer) 10);
        if (tmp210 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[5].oldest), 10)");}
        (data->localData[0]->integerVars[47]/* cc_to_drone[5].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[47]/* cc_to_drone[5].oldest DISCRETE */) , tmp210) + ((modelica_integer) 1);
      }
      else
      {
        tmp211 = ((modelica_integer) 1); tmp212 = 1; tmp213 = ((modelica_integer) 5);
        if(!(((tmp212 > 0) && (tmp211 > tmp213)) || ((tmp212 < 0) && (tmp211 < tmp213))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp211, tmp213); j += tmp212)
          {
            (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 5) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 5) - 1) * 10 + ((data->simulationInfo->integerVarsPre[47]/* cc_to_drone[5].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp214 = ((modelica_integer) 10);
        if (tmp214 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[5].oldest), 10)");}
        (data->localData[0]->integerVars[47]/* cc_to_drone[5].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[47]/* cc_to_drone[5].oldest DISCRETE */) , tmp214) + ((modelica_integer) 1);

        tmp215 = ((modelica_integer) 1); tmp216 = 1; tmp217 = ((modelica_integer) 5);
        if(!(((tmp216 > 0) && (tmp215 > tmp217)) || ((tmp216 < 0) && (tmp215 < tmp217))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp215, tmp217); j += tmp216)
          {
            (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 5) - 1) * 10 + ((data->simulationInfo->integerVarsPre[40]/* cc_to_drone[5].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 5) - 1) * 5 + (j-1)] ;
          }
        }

        tmp218 = ((modelica_integer) 10);
        if (tmp218 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[5].newest), 10)");}
        (data->localData[0]->integerVars[40]/* cc_to_drone[5].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[40]/* cc_to_drone[5].newest DISCRETE */) , tmp218) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[21]/* $whenCondition29 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[21]/* $whenCondition29 DISCRETE */)  /* edge */))
    {
      tmp219 = ((modelica_integer) 1); tmp220 = 1; tmp221 = ((modelica_integer) 5);
      if(!(((tmp220 > 0) && (tmp219 > tmp221)) || ((tmp220 < 0) && (tmp219 < tmp221))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp219, tmp221); j += tmp220)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 5) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 5) - 1) * 10 + ((data->simulationInfo->integerVarsPre[47]/* cc_to_drone[5].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp222 = ((modelica_integer) 10);
      if (tmp222 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[5].oldest), 10)");}
      (data->localData[0]->integerVars[47]/* cc_to_drone[5].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[47]/* cc_to_drone[5].oldest DISCRETE */) , tmp222) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[33]/* cc_to_drone[5].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[33]/* cc_to_drone[5].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp223 = GreaterEq((data->localData[0]->integerVars[33]/* cc_to_drone[5].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[164]/* cc_to_drone[5].datavailable DISCRETE */)  = tmp223;

      (data->localData[0]->booleanVars[185]/* cc_to_drone[5].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[23]/* $whenCondition30 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[23]/* $whenCondition30 DISCRETE */)  /* edge */))
    {
      tmp224 = ((modelica_integer) 1); tmp225 = 1; tmp226 = ((modelica_integer) 5);
      if(!(((tmp225 > 0) && (tmp224 > tmp226)) || ((tmp225 < 0) && (tmp224 < tmp226))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp224, tmp226); j += tmp225)
        {
          (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 5) - 1) * 10 + ((data->simulationInfo->integerVarsPre[40]/* cc_to_drone[5].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 5) - 1) * 5 + (j-1)] ;
        }
      }

      tmp227 = ((modelica_integer) 10);
      if (tmp227 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[5].newest), 10)");}
      (data->localData[0]->integerVars[40]/* cc_to_drone[5].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[40]/* cc_to_drone[5].newest DISCRETE */) , tmp227) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[33]/* cc_to_drone[5].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[33]/* cc_to_drone[5].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[164]/* cc_to_drone[5].datavailable DISCRETE */)  = 1;

      tmp228 = Less((data->simulationInfo->integerVarsPre[33]/* cc_to_drone[5].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[185]/* cc_to_drone[5].spaceavailable DISCRETE */)  = tmp228;

      tmp229 = ((modelica_integer) 1); tmp230 = 1; tmp231 = ((modelica_integer) 5);
      if(!(((tmp230 > 0) && (tmp229 > tmp231)) || ((tmp230 < 0) && (tmp229 < tmp231))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp229, tmp231); j += tmp230)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 5) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 5) - 1) * 10 + ((data->simulationInfo->integerVarsPre[47]/* cc_to_drone[5].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 588
type: SIMPLE_ASSIGN
cc.spaceavailable[5] = cc_to_drone[5].spaceavailable
*/
void System_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  (data->localData[0]->booleanVars[150]/* cc.spaceavailable[5] DISCRETE */)  = (data->localData[0]->booleanVars[185]/* cc_to_drone[5].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 589
type: SIMPLE_ASSIGN
d[5].datavailable = cc_to_drone[5].datavailable
*/
void System_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  (data->localData[0]->booleanVars[220]/* d[5].datavailable DISCRETE */)  = (data->localData[0]->booleanVars[164]/* cc_to_drone[5].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 590
type: SIMPLE_ASSIGN
cc_to_drone[4].inputdata[5] = cc.msg_to_drone[4,5]
*/
void System_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  (data->localData[0]->realVars[142]/* cc_to_drone[4].inputdata[5] variable */)  = (data->localData[0]->realVars[316]/* cc.msg_to_drone[4,5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 591
type: SIMPLE_ASSIGN
cc_to_drone[7].inputdata[2] = cc.msg_to_drone[7,2]
*/
void System_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  (data->localData[0]->realVars[154]/* cc_to_drone[7].inputdata[2] variable */)  = (data->localData[0]->realVars[328]/* cc.msg_to_drone[7,2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 592
type: SIMPLE_ASSIGN
cc_to_drone[6].writesignal = cc.writesignal[6]
*/
void System_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  (data->localData[0]->booleanVars[200]/* cc_to_drone[6].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[158]/* cc.writesignal[6] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 593
type: SIMPLE_ASSIGN
cc_to_drone[6].writesigint = not pre(cc_to_drone[6].writesignal) == cc_to_drone[6].writesignal
*/
void System_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  (data->localData[0]->booleanVars[193]/* cc_to_drone[6].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[200]/* cc_to_drone[6].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[200]/* cc_to_drone[6].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[200]/* cc_to_drone[6].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[200]/* cc_to_drone[6].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 594
type: SIMPLE_ASSIGN
cc_to_drone[4].inputdata[4] = cc.msg_to_drone[4,4]
*/
void System_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  (data->localData[0]->realVars[141]/* cc_to_drone[4].inputdata[4] variable */)  = (data->localData[0]->realVars[315]/* cc.msg_to_drone[4,4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 595
type: SIMPLE_ASSIGN
cc_to_drone[4].inputdata[2] = cc.msg_to_drone[4,2]
*/
void System_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  (data->localData[0]->realVars[139]/* cc_to_drone[4].inputdata[2] variable */)  = (data->localData[0]->realVars[313]/* cc.msg_to_drone[4,2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 596
type: SIMPLE_ASSIGN
cc_to_drone[4].writesignal = cc.writesignal[4]
*/
void System_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  (data->localData[0]->booleanVars[198]/* cc_to_drone[4].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[156]/* cc.writesignal[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 597
type: SIMPLE_ASSIGN
cc_to_drone[4].writesigint = not pre(cc_to_drone[4].writesignal) == cc_to_drone[4].writesignal
*/
void System_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  (data->localData[0]->booleanVars[191]/* cc_to_drone[4].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[198]/* cc_to_drone[4].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[198]/* cc_to_drone[4].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[198]/* cc_to_drone[4].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[198]/* cc_to_drone[4].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 598
type: SIMPLE_ASSIGN
cc_to_drone[3].writesignal = cc.writesignal[3]
*/
void System_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  (data->localData[0]->booleanVars[197]/* cc_to_drone[3].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[155]/* cc.writesignal[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 599
type: SIMPLE_ASSIGN
cc_to_drone[3].writesigint = not pre(cc_to_drone[3].writesignal) == cc_to_drone[3].writesignal
*/
void System_eqFunction_599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,599};
  (data->localData[0]->booleanVars[190]/* cc_to_drone[3].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[197]/* cc_to_drone[3].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[197]/* cc_to_drone[3].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[197]/* cc_to_drone[3].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[197]/* cc_to_drone[3].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 600
type: SIMPLE_ASSIGN
drone_to_cc[4].readsignal = cc.readsignal[4]
*/
void System_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  (data->localData[0]->booleanVars[261]/* drone_to_cc[4].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[135]/* cc.readsignal[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 601
type: SIMPLE_ASSIGN
drone_to_cc[4].readsigint = not pre(drone_to_cc[4].readsignal) == drone_to_cc[4].readsignal
*/
void System_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  (data->localData[0]->booleanVars[254]/* drone_to_cc[4].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[261]/* drone_to_cc[4].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[261]/* drone_to_cc[4].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[261]/* drone_to_cc[4].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[261]/* drone_to_cc[4].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 602
type: SIMPLE_ASSIGN
cc_to_drone[1].writesignal = cc.writesignal[1]
*/
void System_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  (data->localData[0]->booleanVars[195]/* cc_to_drone[1].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[153]/* cc.writesignal[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 603
type: SIMPLE_ASSIGN
cc_to_drone[1].writesigint = not pre(cc_to_drone[1].writesignal) == cc_to_drone[1].writesignal
*/
void System_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  (data->localData[0]->booleanVars[188]/* cc_to_drone[1].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[195]/* cc_to_drone[1].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[195]/* cc_to_drone[1].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[195]/* cc_to_drone[1].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[195]/* cc_to_drone[1].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 604
type: SIMPLE_ASSIGN
cc_to_drone[3].inputdata[3] = cc.msg_to_drone[3,3]
*/
void System_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  (data->localData[0]->realVars[135]/* cc_to_drone[3].inputdata[3] variable */)  = (data->localData[0]->realVars[309]/* cc.msg_to_drone[3,3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 605
type: SIMPLE_ASSIGN
cc_to_drone[3].inputdata[1] = cc.msg_to_drone[3,1]
*/
void System_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  (data->localData[0]->realVars[133]/* cc_to_drone[3].inputdata[1] variable */)  = (data->localData[0]->realVars[307]/* cc.msg_to_drone[3,1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 606
type: SIMPLE_ASSIGN
cc_to_drone[2].inputdata[4] = cc.msg_to_drone[2,4]
*/
void System_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  (data->localData[0]->realVars[131]/* cc_to_drone[2].inputdata[4] variable */)  = (data->localData[0]->realVars[305]/* cc.msg_to_drone[2,4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 607
type: SIMPLE_ASSIGN
cc_to_drone[2].inputdata[5] = cc.msg_to_drone[2,5]
*/
void System_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  (data->localData[0]->realVars[132]/* cc_to_drone[2].inputdata[5] variable */)  = (data->localData[0]->realVars[306]/* cc.msg_to_drone[2,5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 608
type: SIMPLE_ASSIGN
cc_to_drone[2].inputdata[3] = cc.msg_to_drone[2,3]
*/
void System_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  (data->localData[0]->realVars[130]/* cc_to_drone[2].inputdata[3] variable */)  = (data->localData[0]->realVars[304]/* cc.msg_to_drone[2,3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 609
type: SIMPLE_ASSIGN
cc_to_drone[2].inputdata[1] = cc.msg_to_drone[2,1]
*/
void System_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  (data->localData[0]->realVars[128]/* cc_to_drone[2].inputdata[1] variable */)  = (data->localData[0]->realVars[302]/* cc.msg_to_drone[2,1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 610
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
  $whenCondition44 := pre($whenCondition44);
  $whenCondition43 := pre($whenCondition43);
  $whenCondition43 := sample(23, m.p.monitor_start, m.p.Tm);
  $whenCondition44 := time > m.p.stop_simulation or cc.endSimulation;
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
  elsewhen $whenCondition43 then
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
  elsewhen $whenCondition44 then
    Modelica.Utilities.Files.remove("outputs.txt");
    Modelica.Utilities.Streams.print("AvgDrones AvgNoDrone MaxNoDrone PrDrones StdDev ( time = " + String(time, 6, 0, true) + "s = " + String(time / 3600.0, 6, 0, true) + "h )", "outputs.txt");
    Modelica.Utilities.Streams.print(String(m.avg_drones_all_areas, 6, 0, true) + "  " + String(m.avg_no_drone_time_all_areas, 6, 0, true) + "  " + String(m.max_no_drone_time, 6, 0, true) + "  " + String(m.p_drones_all_areas, 6, 0, true) + "  " + String(m.std_dev_all_areas, 6, 0, true), "outputs.txt");
    disconnect_from_db();
    terminate("Simulation limit reached. Go home now.");
  end when;
*/
void System_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  modelica_boolean tmp237;
  integer_array tmp238;
  integer_array tmp239;
  real_array tmp240;
  real_array tmp241;
  integer_array tmp242;
  integer_array tmp243;
  real_array tmp244;
  real_array tmp245;
  real_array tmp246;
  real_array tmp247;
  real_array tmp248;
  real_array tmp249;
  real_array tmp250;
  real_array tmp251;
  modelica_boolean tmp252;
  modelica_real tmp253;
  modelica_real tmp254;
  modelica_integer tmp255;
  modelica_integer tmp256;
  modelica_integer tmp257;
  real_array tmp258;
  modelica_real tmp259;
  modelica_boolean tmp260;
  real_array tmp261;
  modelica_real tmp262;
  modelica_real tmp263;
  static const MMC_DEFSTRINGLIT(tmp264,11,"outputs.txt");
  static const MMC_DEFSTRINGLIT(tmp265,57,"AvgDrones AvgNoDrone MaxNoDrone PrDrones StdDev ( time = ");
  modelica_string tmp266;
  modelica_metatype tmpMeta267;
  static const MMC_DEFSTRINGLIT(tmp268,4,"s = ");
  modelica_metatype tmpMeta269;
  modelica_string tmp270;
  modelica_metatype tmpMeta271;
  static const MMC_DEFSTRINGLIT(tmp272,3,"h )");
  modelica_metatype tmpMeta273;
  static const MMC_DEFSTRINGLIT(tmp274,11,"outputs.txt");
  modelica_string tmp275;
  static const MMC_DEFSTRINGLIT(tmp276,2,"  ");
  modelica_metatype tmpMeta277;
  modelica_string tmp278;
  modelica_metatype tmpMeta279;
  static const MMC_DEFSTRINGLIT(tmp280,2,"  ");
  modelica_metatype tmpMeta281;
  modelica_string tmp282;
  modelica_metatype tmpMeta283;
  static const MMC_DEFSTRINGLIT(tmp284,2,"  ");
  modelica_metatype tmpMeta285;
  modelica_string tmp286;
  modelica_metatype tmpMeta287;
  static const MMC_DEFSTRINGLIT(tmp288,2,"  ");
  modelica_metatype tmpMeta289;
  modelica_string tmp290;
  modelica_metatype tmpMeta291;
  static const MMC_DEFSTRINGLIT(tmp292,11,"outputs.txt");
  static const MMC_DEFSTRINGLIT(tmp293,38,"Simulation limit reached. Go home now.");
  (data->localData[0]->realVars[1290]/* m.old_avg_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[1290]/* m.old_avg_drones_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[1324]/* m.std_dev_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[1324]/* m.std_dev_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[1323]/* m.std_dev[16] DISCRETE */)  = (data->simulationInfo->realVarsPre[1323]/* m.std_dev[16] DISCRETE */) ;

  (data->localData[0]->realVars[1322]/* m.std_dev[15] DISCRETE */)  = (data->simulationInfo->realVarsPre[1322]/* m.std_dev[15] DISCRETE */) ;

  (data->localData[0]->realVars[1321]/* m.std_dev[14] DISCRETE */)  = (data->simulationInfo->realVarsPre[1321]/* m.std_dev[14] DISCRETE */) ;

  (data->localData[0]->realVars[1320]/* m.std_dev[13] DISCRETE */)  = (data->simulationInfo->realVarsPre[1320]/* m.std_dev[13] DISCRETE */) ;

  (data->localData[0]->realVars[1319]/* m.std_dev[12] DISCRETE */)  = (data->simulationInfo->realVarsPre[1319]/* m.std_dev[12] DISCRETE */) ;

  (data->localData[0]->realVars[1318]/* m.std_dev[11] DISCRETE */)  = (data->simulationInfo->realVarsPre[1318]/* m.std_dev[11] DISCRETE */) ;

  (data->localData[0]->realVars[1317]/* m.std_dev[10] DISCRETE */)  = (data->simulationInfo->realVarsPre[1317]/* m.std_dev[10] DISCRETE */) ;

  (data->localData[0]->realVars[1316]/* m.std_dev[9] DISCRETE */)  = (data->simulationInfo->realVarsPre[1316]/* m.std_dev[9] DISCRETE */) ;

  (data->localData[0]->realVars[1315]/* m.std_dev[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[1315]/* m.std_dev[8] DISCRETE */) ;

  (data->localData[0]->realVars[1314]/* m.std_dev[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[1314]/* m.std_dev[7] DISCRETE */) ;

  (data->localData[0]->realVars[1313]/* m.std_dev[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[1313]/* m.std_dev[6] DISCRETE */) ;

  (data->localData[0]->realVars[1312]/* m.std_dev[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1312]/* m.std_dev[5] DISCRETE */) ;

  (data->localData[0]->realVars[1311]/* m.std_dev[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1311]/* m.std_dev[4] DISCRETE */) ;

  (data->localData[0]->realVars[1310]/* m.std_dev[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1310]/* m.std_dev[3] DISCRETE */) ;

  (data->localData[0]->realVars[1309]/* m.std_dev[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1309]/* m.std_dev[2] DISCRETE */) ;

  (data->localData[0]->realVars[1308]/* m.std_dev[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1308]/* m.std_dev[1] DISCRETE */) ;

  (data->localData[0]->realVars[1273]/* m.max_no_drone_time DISCRETE */)  = (data->simulationInfo->realVarsPre[1273]/* m.max_no_drone_time DISCRETE */) ;

  (data->localData[0]->realVars[1272]/* m.avg_no_drone_time_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[1272]/* m.avg_no_drone_time_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[1271]/* m.avg_no_drone_time[16] DISCRETE */)  = (data->simulationInfo->realVarsPre[1271]/* m.avg_no_drone_time[16] DISCRETE */) ;

  (data->localData[0]->realVars[1270]/* m.avg_no_drone_time[15] DISCRETE */)  = (data->simulationInfo->realVarsPre[1270]/* m.avg_no_drone_time[15] DISCRETE */) ;

  (data->localData[0]->realVars[1269]/* m.avg_no_drone_time[14] DISCRETE */)  = (data->simulationInfo->realVarsPre[1269]/* m.avg_no_drone_time[14] DISCRETE */) ;

  (data->localData[0]->realVars[1268]/* m.avg_no_drone_time[13] DISCRETE */)  = (data->simulationInfo->realVarsPre[1268]/* m.avg_no_drone_time[13] DISCRETE */) ;

  (data->localData[0]->realVars[1267]/* m.avg_no_drone_time[12] DISCRETE */)  = (data->simulationInfo->realVarsPre[1267]/* m.avg_no_drone_time[12] DISCRETE */) ;

  (data->localData[0]->realVars[1266]/* m.avg_no_drone_time[11] DISCRETE */)  = (data->simulationInfo->realVarsPre[1266]/* m.avg_no_drone_time[11] DISCRETE */) ;

  (data->localData[0]->realVars[1265]/* m.avg_no_drone_time[10] DISCRETE */)  = (data->simulationInfo->realVarsPre[1265]/* m.avg_no_drone_time[10] DISCRETE */) ;

  (data->localData[0]->realVars[1264]/* m.avg_no_drone_time[9] DISCRETE */)  = (data->simulationInfo->realVarsPre[1264]/* m.avg_no_drone_time[9] DISCRETE */) ;

  (data->localData[0]->realVars[1263]/* m.avg_no_drone_time[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[1263]/* m.avg_no_drone_time[8] DISCRETE */) ;

  (data->localData[0]->realVars[1262]/* m.avg_no_drone_time[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[1262]/* m.avg_no_drone_time[7] DISCRETE */) ;

  (data->localData[0]->realVars[1261]/* m.avg_no_drone_time[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[1261]/* m.avg_no_drone_time[6] DISCRETE */) ;

  (data->localData[0]->realVars[1260]/* m.avg_no_drone_time[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1260]/* m.avg_no_drone_time[5] DISCRETE */) ;

  (data->localData[0]->realVars[1259]/* m.avg_no_drone_time[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1259]/* m.avg_no_drone_time[4] DISCRETE */) ;

  (data->localData[0]->realVars[1258]/* m.avg_no_drone_time[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1258]/* m.avg_no_drone_time[3] DISCRETE */) ;

  (data->localData[0]->realVars[1257]/* m.avg_no_drone_time[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1257]/* m.avg_no_drone_time[2] DISCRETE */) ;

  (data->localData[0]->realVars[1256]/* m.avg_no_drone_time[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1256]/* m.avg_no_drone_time[1] DISCRETE */) ;

  (data->localData[0]->realVars[1289]/* m.no_drone_time[16] DISCRETE */)  = (data->simulationInfo->realVarsPre[1289]/* m.no_drone_time[16] DISCRETE */) ;

  (data->localData[0]->realVars[1288]/* m.no_drone_time[15] DISCRETE */)  = (data->simulationInfo->realVarsPre[1288]/* m.no_drone_time[15] DISCRETE */) ;

  (data->localData[0]->realVars[1287]/* m.no_drone_time[14] DISCRETE */)  = (data->simulationInfo->realVarsPre[1287]/* m.no_drone_time[14] DISCRETE */) ;

  (data->localData[0]->realVars[1286]/* m.no_drone_time[13] DISCRETE */)  = (data->simulationInfo->realVarsPre[1286]/* m.no_drone_time[13] DISCRETE */) ;

  (data->localData[0]->realVars[1285]/* m.no_drone_time[12] DISCRETE */)  = (data->simulationInfo->realVarsPre[1285]/* m.no_drone_time[12] DISCRETE */) ;

  (data->localData[0]->realVars[1284]/* m.no_drone_time[11] DISCRETE */)  = (data->simulationInfo->realVarsPre[1284]/* m.no_drone_time[11] DISCRETE */) ;

  (data->localData[0]->realVars[1283]/* m.no_drone_time[10] DISCRETE */)  = (data->simulationInfo->realVarsPre[1283]/* m.no_drone_time[10] DISCRETE */) ;

  (data->localData[0]->realVars[1282]/* m.no_drone_time[9] DISCRETE */)  = (data->simulationInfo->realVarsPre[1282]/* m.no_drone_time[9] DISCRETE */) ;

  (data->localData[0]->realVars[1281]/* m.no_drone_time[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[1281]/* m.no_drone_time[8] DISCRETE */) ;

  (data->localData[0]->realVars[1280]/* m.no_drone_time[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[1280]/* m.no_drone_time[7] DISCRETE */) ;

  (data->localData[0]->realVars[1279]/* m.no_drone_time[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[1279]/* m.no_drone_time[6] DISCRETE */) ;

  (data->localData[0]->realVars[1278]/* m.no_drone_time[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1278]/* m.no_drone_time[5] DISCRETE */) ;

  (data->localData[0]->realVars[1277]/* m.no_drone_time[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1277]/* m.no_drone_time[4] DISCRETE */) ;

  (data->localData[0]->realVars[1276]/* m.no_drone_time[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1276]/* m.no_drone_time[3] DISCRETE */) ;

  (data->localData[0]->realVars[1275]/* m.no_drone_time[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1275]/* m.no_drone_time[2] DISCRETE */) ;

  (data->localData[0]->realVars[1274]/* m.no_drone_time[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1274]/* m.no_drone_time[1] DISCRETE */) ;

  (data->localData[0]->realVars[1307]/* m.p_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[1307]/* m.p_drones_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[1306]/* m.p_drones[16] DISCRETE */)  = (data->simulationInfo->realVarsPre[1306]/* m.p_drones[16] DISCRETE */) ;

  (data->localData[0]->realVars[1305]/* m.p_drones[15] DISCRETE */)  = (data->simulationInfo->realVarsPre[1305]/* m.p_drones[15] DISCRETE */) ;

  (data->localData[0]->realVars[1304]/* m.p_drones[14] DISCRETE */)  = (data->simulationInfo->realVarsPre[1304]/* m.p_drones[14] DISCRETE */) ;

  (data->localData[0]->realVars[1303]/* m.p_drones[13] DISCRETE */)  = (data->simulationInfo->realVarsPre[1303]/* m.p_drones[13] DISCRETE */) ;

  (data->localData[0]->realVars[1302]/* m.p_drones[12] DISCRETE */)  = (data->simulationInfo->realVarsPre[1302]/* m.p_drones[12] DISCRETE */) ;

  (data->localData[0]->realVars[1301]/* m.p_drones[11] DISCRETE */)  = (data->simulationInfo->realVarsPre[1301]/* m.p_drones[11] DISCRETE */) ;

  (data->localData[0]->realVars[1300]/* m.p_drones[10] DISCRETE */)  = (data->simulationInfo->realVarsPre[1300]/* m.p_drones[10] DISCRETE */) ;

  (data->localData[0]->realVars[1299]/* m.p_drones[9] DISCRETE */)  = (data->simulationInfo->realVarsPre[1299]/* m.p_drones[9] DISCRETE */) ;

  (data->localData[0]->realVars[1298]/* m.p_drones[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[1298]/* m.p_drones[8] DISCRETE */) ;

  (data->localData[0]->realVars[1297]/* m.p_drones[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[1297]/* m.p_drones[7] DISCRETE */) ;

  (data->localData[0]->realVars[1296]/* m.p_drones[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[1296]/* m.p_drones[6] DISCRETE */) ;

  (data->localData[0]->realVars[1295]/* m.p_drones[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1295]/* m.p_drones[5] DISCRETE */) ;

  (data->localData[0]->realVars[1294]/* m.p_drones[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1294]/* m.p_drones[4] DISCRETE */) ;

  (data->localData[0]->realVars[1293]/* m.p_drones[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1293]/* m.p_drones[3] DISCRETE */) ;

  (data->localData[0]->realVars[1292]/* m.p_drones[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1292]/* m.p_drones[2] DISCRETE */) ;

  (data->localData[0]->realVars[1291]/* m.p_drones[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1291]/* m.p_drones[1] DISCRETE */) ;

  (data->localData[0]->integerVars[114]/* m.beenVisited[16] DISCRETE */)  = (data->simulationInfo->integerVarsPre[114]/* m.beenVisited[16] DISCRETE */) ;

  (data->localData[0]->integerVars[113]/* m.beenVisited[15] DISCRETE */)  = (data->simulationInfo->integerVarsPre[113]/* m.beenVisited[15] DISCRETE */) ;

  (data->localData[0]->integerVars[112]/* m.beenVisited[14] DISCRETE */)  = (data->simulationInfo->integerVarsPre[112]/* m.beenVisited[14] DISCRETE */) ;

  (data->localData[0]->integerVars[111]/* m.beenVisited[13] DISCRETE */)  = (data->simulationInfo->integerVarsPre[111]/* m.beenVisited[13] DISCRETE */) ;

  (data->localData[0]->integerVars[110]/* m.beenVisited[12] DISCRETE */)  = (data->simulationInfo->integerVarsPre[110]/* m.beenVisited[12] DISCRETE */) ;

  (data->localData[0]->integerVars[109]/* m.beenVisited[11] DISCRETE */)  = (data->simulationInfo->integerVarsPre[109]/* m.beenVisited[11] DISCRETE */) ;

  (data->localData[0]->integerVars[108]/* m.beenVisited[10] DISCRETE */)  = (data->simulationInfo->integerVarsPre[108]/* m.beenVisited[10] DISCRETE */) ;

  (data->localData[0]->integerVars[107]/* m.beenVisited[9] DISCRETE */)  = (data->simulationInfo->integerVarsPre[107]/* m.beenVisited[9] DISCRETE */) ;

  (data->localData[0]->integerVars[106]/* m.beenVisited[8] DISCRETE */)  = (data->simulationInfo->integerVarsPre[106]/* m.beenVisited[8] DISCRETE */) ;

  (data->localData[0]->integerVars[105]/* m.beenVisited[7] DISCRETE */)  = (data->simulationInfo->integerVarsPre[105]/* m.beenVisited[7] DISCRETE */) ;

  (data->localData[0]->integerVars[104]/* m.beenVisited[6] DISCRETE */)  = (data->simulationInfo->integerVarsPre[104]/* m.beenVisited[6] DISCRETE */) ;

  (data->localData[0]->integerVars[103]/* m.beenVisited[5] DISCRETE */)  = (data->simulationInfo->integerVarsPre[103]/* m.beenVisited[5] DISCRETE */) ;

  (data->localData[0]->integerVars[102]/* m.beenVisited[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[102]/* m.beenVisited[4] DISCRETE */) ;

  (data->localData[0]->integerVars[101]/* m.beenVisited[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[101]/* m.beenVisited[3] DISCRETE */) ;

  (data->localData[0]->integerVars[100]/* m.beenVisited[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[100]/* m.beenVisited[2] DISCRETE */) ;

  (data->localData[0]->integerVars[99]/* m.beenVisited[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[99]/* m.beenVisited[1] DISCRETE */) ;

  (data->localData[0]->realVars[1255]/* m.avg_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[1255]/* m.avg_drones_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[1254]/* m.avg_drones[16] DISCRETE */)  = (data->simulationInfo->realVarsPre[1254]/* m.avg_drones[16] DISCRETE */) ;

  (data->localData[0]->realVars[1253]/* m.avg_drones[15] DISCRETE */)  = (data->simulationInfo->realVarsPre[1253]/* m.avg_drones[15] DISCRETE */) ;

  (data->localData[0]->realVars[1252]/* m.avg_drones[14] DISCRETE */)  = (data->simulationInfo->realVarsPre[1252]/* m.avg_drones[14] DISCRETE */) ;

  (data->localData[0]->realVars[1251]/* m.avg_drones[13] DISCRETE */)  = (data->simulationInfo->realVarsPre[1251]/* m.avg_drones[13] DISCRETE */) ;

  (data->localData[0]->realVars[1250]/* m.avg_drones[12] DISCRETE */)  = (data->simulationInfo->realVarsPre[1250]/* m.avg_drones[12] DISCRETE */) ;

  (data->localData[0]->realVars[1249]/* m.avg_drones[11] DISCRETE */)  = (data->simulationInfo->realVarsPre[1249]/* m.avg_drones[11] DISCRETE */) ;

  (data->localData[0]->realVars[1248]/* m.avg_drones[10] DISCRETE */)  = (data->simulationInfo->realVarsPre[1248]/* m.avg_drones[10] DISCRETE */) ;

  (data->localData[0]->realVars[1247]/* m.avg_drones[9] DISCRETE */)  = (data->simulationInfo->realVarsPre[1247]/* m.avg_drones[9] DISCRETE */) ;

  (data->localData[0]->realVars[1246]/* m.avg_drones[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[1246]/* m.avg_drones[8] DISCRETE */) ;

  (data->localData[0]->realVars[1245]/* m.avg_drones[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[1245]/* m.avg_drones[7] DISCRETE */) ;

  (data->localData[0]->realVars[1244]/* m.avg_drones[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[1244]/* m.avg_drones[6] DISCRETE */) ;

  (data->localData[0]->realVars[1243]/* m.avg_drones[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1243]/* m.avg_drones[5] DISCRETE */) ;

  (data->localData[0]->realVars[1242]/* m.avg_drones[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1242]/* m.avg_drones[4] DISCRETE */) ;

  (data->localData[0]->realVars[1241]/* m.avg_drones[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1241]/* m.avg_drones[3] DISCRETE */) ;

  (data->localData[0]->realVars[1240]/* m.avg_drones[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1240]/* m.avg_drones[2] DISCRETE */) ;

  (data->localData[0]->realVars[1239]/* m.avg_drones[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1239]/* m.avg_drones[1] DISCRETE */) ;

  (data->localData[0]->integerVars[130]/* m.current_drones[16] DISCRETE */)  = (data->simulationInfo->integerVarsPre[130]/* m.current_drones[16] DISCRETE */) ;

  (data->localData[0]->integerVars[129]/* m.current_drones[15] DISCRETE */)  = (data->simulationInfo->integerVarsPre[129]/* m.current_drones[15] DISCRETE */) ;

  (data->localData[0]->integerVars[128]/* m.current_drones[14] DISCRETE */)  = (data->simulationInfo->integerVarsPre[128]/* m.current_drones[14] DISCRETE */) ;

  (data->localData[0]->integerVars[127]/* m.current_drones[13] DISCRETE */)  = (data->simulationInfo->integerVarsPre[127]/* m.current_drones[13] DISCRETE */) ;

  (data->localData[0]->integerVars[126]/* m.current_drones[12] DISCRETE */)  = (data->simulationInfo->integerVarsPre[126]/* m.current_drones[12] DISCRETE */) ;

  (data->localData[0]->integerVars[125]/* m.current_drones[11] DISCRETE */)  = (data->simulationInfo->integerVarsPre[125]/* m.current_drones[11] DISCRETE */) ;

  (data->localData[0]->integerVars[124]/* m.current_drones[10] DISCRETE */)  = (data->simulationInfo->integerVarsPre[124]/* m.current_drones[10] DISCRETE */) ;

  (data->localData[0]->integerVars[123]/* m.current_drones[9] DISCRETE */)  = (data->simulationInfo->integerVarsPre[123]/* m.current_drones[9] DISCRETE */) ;

  (data->localData[0]->integerVars[122]/* m.current_drones[8] DISCRETE */)  = (data->simulationInfo->integerVarsPre[122]/* m.current_drones[8] DISCRETE */) ;

  (data->localData[0]->integerVars[121]/* m.current_drones[7] DISCRETE */)  = (data->simulationInfo->integerVarsPre[121]/* m.current_drones[7] DISCRETE */) ;

  (data->localData[0]->integerVars[120]/* m.current_drones[6] DISCRETE */)  = (data->simulationInfo->integerVarsPre[120]/* m.current_drones[6] DISCRETE */) ;

  (data->localData[0]->integerVars[119]/* m.current_drones[5] DISCRETE */)  = (data->simulationInfo->integerVarsPre[119]/* m.current_drones[5] DISCRETE */) ;

  (data->localData[0]->integerVars[118]/* m.current_drones[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[118]/* m.current_drones[4] DISCRETE */) ;

  (data->localData[0]->integerVars[117]/* m.current_drones[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[117]/* m.current_drones[3] DISCRETE */) ;

  (data->localData[0]->integerVars[116]/* m.current_drones[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[116]/* m.current_drones[2] DISCRETE */) ;

  (data->localData[0]->integerVars[115]/* m.current_drones[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[115]/* m.current_drones[1] DISCRETE */) ;

  (data->localData[0]->integerVars[131]/* m.samples DISCRETE */)  = (data->simulationInfo->integerVarsPre[131]/* m.samples DISCRETE */) ;

  (data->localData[0]->integerVars[132]/* m.z DISCRETE */)  = (data->simulationInfo->integerVarsPre[132]/* m.z DISCRETE */) ;

  (data->localData[0]->booleanVars[38]/* $whenCondition44 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[38]/* $whenCondition44 DISCRETE */) ;

  (data->localData[0]->booleanVars[37]/* $whenCondition43 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[37]/* $whenCondition43 DISCRETE */) ;

  (data->localData[0]->booleanVars[37]/* $whenCondition43 DISCRETE */)  = data->simulationInfo->samples[22];

  relationhysteresis(data, &tmp237, data->localData[0]->timeValue, (data->simulationInfo->realParameter[4900]/* m.p.stop_simulation PARAM */) , 0, Greater, GreaterZC);
  (data->localData[0]->booleanVars[38]/* $whenCondition44 DISCRETE */)  = (tmp237 || (data->localData[0]->booleanVars[94]/* cc.endSimulation DISCRETE */) );

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->integerVars[132]/* m.z DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[131]/* m.samples DISCRETE */)  = ((modelica_integer) 0);

      array_alloc_scalar_integer_array(&tmp238, 16, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp239, ((modelica_integer*)&((&(data->localData[0]->integerVars[115]/* m.current_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      integer_array_copy_data(tmp238, tmp239);

      array_alloc_scalar_real_array(&tmp240, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp241, ((modelica_real*)&((&(data->localData[0]->realVars[1239]/* m.avg_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      real_array_copy_data(tmp240, tmp241);

      (data->localData[0]->realVars[1255]/* m.avg_drones_all_areas DISCRETE */)  = 0.0;

      array_alloc_scalar_integer_array(&tmp242, 16, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp243, ((modelica_integer*)&((&(data->localData[0]->integerVars[99]/* m.beenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      integer_array_copy_data(tmp242, tmp243);

      array_alloc_scalar_real_array(&tmp244, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp245, ((modelica_real*)&((&(data->localData[0]->realVars[1291]/* m.p_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      real_array_copy_data(tmp244, tmp245);

      (data->localData[0]->realVars[1307]/* m.p_drones_all_areas DISCRETE */)  = 0.0;

      array_alloc_scalar_real_array(&tmp246, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp247, ((modelica_real*)&((&(data->localData[0]->realVars[1274]/* m.no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      real_array_copy_data(tmp246, tmp247);

      array_alloc_scalar_real_array(&tmp248, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp249, ((modelica_real*)&((&(data->localData[0]->realVars[1256]/* m.avg_no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      real_array_copy_data(tmp248, tmp249);

      (data->localData[0]->realVars[1272]/* m.avg_no_drone_time_all_areas DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[1273]/* m.max_no_drone_time DISCRETE */)  = 0.0;

      array_alloc_scalar_real_array(&tmp250, 16, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp251, ((modelica_real*)&((&(data->localData[0]->realVars[1308]/* m.std_dev[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)16);
      real_array_copy_data(tmp250, tmp251);

      (data->localData[0]->realVars[1324]/* m.std_dev_all_areas DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[1290]/* m.old_avg_drones_all_areas DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[37]/* $whenCondition43 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[37]/* $whenCondition43 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->integerVars[131]/* m.samples DISCRETE */)  = (data->simulationInfo->integerVarsPre[131]/* m.samples DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->realVars[1290]/* m.old_avg_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[1255]/* m.avg_drones_all_areas DISCRETE */) ;

      tmp255 = ((modelica_integer) 1); tmp256 = 1; tmp257 = ((modelica_integer) 16);
      if(!(((tmp256 > 0) && (tmp255 > tmp257)) || ((tmp256 < 0) && (tmp255 < tmp257))))
      {
        modelica_integer area;
        for(area = ((modelica_integer) 1); in_range_integer(area, tmp255, tmp257); area += tmp256)
        {
          (data->localData[0]->integerVars[132]/* m.z DISCRETE */)  = omc_how__many__drones__in__area(threadData, area, data->localData[0]->timeValue - ((data->simulationInfo->realParameter[4774]/* m.p.Tm PARAM */)  + 1.0));

          tmp252 = Greater((data->localData[0]->integerVars[132]/* m.z DISCRETE */) ,((modelica_integer) 0));
          if(tmp252)
          {
            (&(data->localData[0]->integerVars[115]/* m.current_drones[1] DISCRETE */) )[area - 1] = (data->localData[0]->integerVars[132]/* m.z DISCRETE */) ;

            (&(data->localData[0]->integerVars[99]/* m.beenVisited[1] DISCRETE */) )[area - 1] = ((modelica_integer) 1);

            (&(data->localData[0]->realVars[1274]/* m.no_drone_time[1] DISCRETE */) )[area - 1] = 0.0;
          }
          else
          {
            (&(data->localData[0]->realVars[1274]/* m.no_drone_time[1] DISCRETE */) )[area - 1] = (data->localData[0]->realVars[381]/* cc.time_passed_since_last_loop DISCRETE */) ;

            (&(data->localData[0]->integerVars[115]/* m.current_drones[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);

            (&(data->localData[0]->integerVars[99]/* m.beenVisited[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);
          }

          (&(data->localData[0]->realVars[1239]/* m.avg_drones[1] DISCRETE */) )[area - 1] = ((&(data->simulationInfo->realVarsPre[1239]/* m.avg_drones[1] DISCRETE */) )[area - 1]) * (DIVISION_SIM(((modelica_real)(data->simulationInfo->integerVarsPre[131]/* m.samples DISCRETE */) ),((modelica_real)(data->simulationInfo->integerVarsPre[131]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes)) + DIVISION_SIM(((modelica_real)(&(data->simulationInfo->integerVarsPre[115]/* m.current_drones[1] DISCRETE */) )[area - 1]),((modelica_real)(data->simulationInfo->integerVarsPre[131]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes);

          (&(data->localData[0]->realVars[1291]/* m.p_drones[1] DISCRETE */) )[area - 1] = ((&(data->simulationInfo->realVarsPre[1291]/* m.p_drones[1] DISCRETE */) )[area - 1]) * (DIVISION_SIM(((modelica_real)(data->simulationInfo->integerVarsPre[131]/* m.samples DISCRETE */) ),((modelica_real)(data->simulationInfo->integerVarsPre[131]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes)) + DIVISION_SIM(((modelica_real)(&(data->simulationInfo->integerVarsPre[99]/* m.beenVisited[1] DISCRETE */) )[area - 1]),((modelica_real)(data->simulationInfo->integerVarsPre[131]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes);

          (&(data->localData[0]->realVars[1256]/* m.avg_no_drone_time[1] DISCRETE */) )[area - 1] = ((&(data->simulationInfo->realVarsPre[1256]/* m.avg_no_drone_time[1] DISCRETE */) )[area - 1]) * (DIVISION_SIM(((modelica_real)(data->simulationInfo->integerVarsPre[131]/* m.samples DISCRETE */) ),((modelica_real)(data->simulationInfo->integerVarsPre[131]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes)) + DIVISION_SIM((&(data->simulationInfo->realVarsPre[1274]/* m.no_drone_time[1] DISCRETE */) )[area - 1],((modelica_real)(data->simulationInfo->integerVarsPre[131]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes);

          tmp253 = (&data->localData[0]->realVars[1239]/* m.avg_drones[1] DISCRETE */)[area - 1] ;
          tmp254 = ((modelica_real)(&data->localData[0]->integerVars[115]/* m.current_drones[1] DISCRETE */)[area - 1] ) - ((tmp253 * tmp253));
          if(!(tmp254 >= 0.0))
          {
            if (data->simulationInfo->noThrowAsserts) {
              infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
              data->simulationInfo->needToReThrow = 1;
            } else {
              FILE_INFO info = {"",0,0,0,0,0};
              omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
              throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(/*Real*/(m.current_drones[area]) - m.avg_drones[area] ^ 2.0) was %g should be >= 0", tmp254);
            }
          }
          (&(data->localData[0]->realVars[1308]/* m.std_dev[1] DISCRETE */) )[area - 1] = sqrt(tmp254);
        }
      }

      (data->localData[0]->realVars[1255]/* m.avg_drones_all_areas DISCRETE */)  = (0.0625) * ((data->simulationInfo->realVarsPre[1239]/* m.avg_drones[1] DISCRETE */)  + (data->simulationInfo->realVarsPre[1240]/* m.avg_drones[2] DISCRETE */)  + (data->simulationInfo->realVarsPre[1241]/* m.avg_drones[3] DISCRETE */)  + (data->simulationInfo->realVarsPre[1242]/* m.avg_drones[4] DISCRETE */)  + (data->simulationInfo->realVarsPre[1243]/* m.avg_drones[5] DISCRETE */)  + (data->simulationInfo->realVarsPre[1244]/* m.avg_drones[6] DISCRETE */)  + (data->simulationInfo->realVarsPre[1245]/* m.avg_drones[7] DISCRETE */)  + (data->simulationInfo->realVarsPre[1246]/* m.avg_drones[8] DISCRETE */)  + (data->simulationInfo->realVarsPre[1247]/* m.avg_drones[9] DISCRETE */)  + (data->simulationInfo->realVarsPre[1248]/* m.avg_drones[10] DISCRETE */)  + (data->simulationInfo->realVarsPre[1249]/* m.avg_drones[11] DISCRETE */)  + (data->simulationInfo->realVarsPre[1250]/* m.avg_drones[12] DISCRETE */)  + (data->simulationInfo->realVarsPre[1251]/* m.avg_drones[13] DISCRETE */)  + (data->simulationInfo->realVarsPre[1252]/* m.avg_drones[14] DISCRETE */)  + (data->simulationInfo->realVarsPre[1253]/* m.avg_drones[15] DISCRETE */)  + (data->simulationInfo->realVarsPre[1254]/* m.avg_drones[16] DISCRETE */) );

      (data->localData[0]->realVars[1307]/* m.p_drones_all_areas DISCRETE */)  = (0.0625) * ((data->simulationInfo->realVarsPre[1291]/* m.p_drones[1] DISCRETE */)  + (data->simulationInfo->realVarsPre[1292]/* m.p_drones[2] DISCRETE */)  + (data->simulationInfo->realVarsPre[1293]/* m.p_drones[3] DISCRETE */)  + (data->simulationInfo->realVarsPre[1294]/* m.p_drones[4] DISCRETE */)  + (data->simulationInfo->realVarsPre[1295]/* m.p_drones[5] DISCRETE */)  + (data->simulationInfo->realVarsPre[1296]/* m.p_drones[6] DISCRETE */)  + (data->simulationInfo->realVarsPre[1297]/* m.p_drones[7] DISCRETE */)  + (data->simulationInfo->realVarsPre[1298]/* m.p_drones[8] DISCRETE */)  + (data->simulationInfo->realVarsPre[1299]/* m.p_drones[9] DISCRETE */)  + (data->simulationInfo->realVarsPre[1300]/* m.p_drones[10] DISCRETE */)  + (data->simulationInfo->realVarsPre[1301]/* m.p_drones[11] DISCRETE */)  + (data->simulationInfo->realVarsPre[1302]/* m.p_drones[12] DISCRETE */)  + (data->simulationInfo->realVarsPre[1303]/* m.p_drones[13] DISCRETE */)  + (data->simulationInfo->realVarsPre[1304]/* m.p_drones[14] DISCRETE */)  + (data->simulationInfo->realVarsPre[1305]/* m.p_drones[15] DISCRETE */)  + (data->simulationInfo->realVarsPre[1306]/* m.p_drones[16] DISCRETE */) );

      (data->localData[0]->realVars[1272]/* m.avg_no_drone_time_all_areas DISCRETE */)  = (0.0625) * ((data->simulationInfo->realVarsPre[1274]/* m.no_drone_time[1] DISCRETE */)  + (data->simulationInfo->realVarsPre[1275]/* m.no_drone_time[2] DISCRETE */)  + (data->simulationInfo->realVarsPre[1276]/* m.no_drone_time[3] DISCRETE */)  + (data->simulationInfo->realVarsPre[1277]/* m.no_drone_time[4] DISCRETE */)  + (data->simulationInfo->realVarsPre[1278]/* m.no_drone_time[5] DISCRETE */)  + (data->simulationInfo->realVarsPre[1279]/* m.no_drone_time[6] DISCRETE */)  + (data->simulationInfo->realVarsPre[1280]/* m.no_drone_time[7] DISCRETE */)  + (data->simulationInfo->realVarsPre[1281]/* m.no_drone_time[8] DISCRETE */)  + (data->simulationInfo->realVarsPre[1282]/* m.no_drone_time[9] DISCRETE */)  + (data->simulationInfo->realVarsPre[1283]/* m.no_drone_time[10] DISCRETE */)  + (data->simulationInfo->realVarsPre[1284]/* m.no_drone_time[11] DISCRETE */)  + (data->simulationInfo->realVarsPre[1285]/* m.no_drone_time[12] DISCRETE */)  + (data->simulationInfo->realVarsPre[1286]/* m.no_drone_time[13] DISCRETE */)  + (data->simulationInfo->realVarsPre[1287]/* m.no_drone_time[14] DISCRETE */)  + (data->simulationInfo->realVarsPre[1288]/* m.no_drone_time[15] DISCRETE */)  + (data->simulationInfo->realVarsPre[1289]/* m.no_drone_time[16] DISCRETE */) );

      real_array_create(&tmp258, ((modelica_real*)&((&data->localData[0]->realVars[1274]/* m.no_drone_time[1] DISCRETE */)[((modelica_integer) 1) - 1] )), 1, (_index_t)16);
      tmp259 = max_real_array(tmp258);
      tmp260 = Less((data->simulationInfo->realVarsPre[1273]/* m.max_no_drone_time DISCRETE */) ,tmp259);
      if(tmp260)
      {
        real_array_create(&tmp261, ((modelica_real*)&((&data->localData[0]->realVars[1274]/* m.no_drone_time[1] DISCRETE */)[((modelica_integer) 1) - 1] )), 1, (_index_t)16);
        tmp262 = max_real_array(tmp261);
        (data->localData[0]->realVars[1273]/* m.max_no_drone_time DISCRETE */)  = tmp262;
      }

      tmp263 = (data->simulationInfo->realVarsPre[1290]/* m.old_avg_drones_all_areas DISCRETE */) ;
      (data->localData[0]->realVars[1324]/* m.std_dev_all_areas DISCRETE */)  = sqrt(fabs((data->simulationInfo->realVarsPre[1255]/* m.avg_drones_all_areas DISCRETE */)  - ((tmp263 * tmp263))));
    }
    else if(((data->localData[0]->booleanVars[38]/* $whenCondition44 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[38]/* $whenCondition44 DISCRETE */)  /* edge */))
    {
      omc_Modelica_Utilities_Files_remove(threadData, MMC_REFSTRINGLIT(tmp264));

      tmp266 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta267 = stringAppend(MMC_REFSTRINGLIT(tmp265),tmp266);
      tmpMeta269 = stringAppend(tmpMeta267,MMC_REFSTRINGLIT(tmp268));
      tmp270 = modelica_real_to_modelica_string(DIVISION_SIM(data->localData[0]->timeValue,3600.0,"3600.0",equationIndexes), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta271 = stringAppend(tmpMeta269,tmp270);
      tmpMeta273 = stringAppend(tmpMeta271,MMC_REFSTRINGLIT(tmp272));
      omc_Modelica_Utilities_Streams_print(threadData, tmpMeta273, MMC_REFSTRINGLIT(tmp274));

      tmp275 = modelica_real_to_modelica_string((data->localData[0]->realVars[1255]/* m.avg_drones_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta277 = stringAppend(tmp275,MMC_REFSTRINGLIT(tmp276));
      tmp278 = modelica_real_to_modelica_string((data->localData[0]->realVars[1272]/* m.avg_no_drone_time_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta279 = stringAppend(tmpMeta277,tmp278);
      tmpMeta281 = stringAppend(tmpMeta279,MMC_REFSTRINGLIT(tmp280));
      tmp282 = modelica_real_to_modelica_string((data->localData[0]->realVars[1273]/* m.max_no_drone_time DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta283 = stringAppend(tmpMeta281,tmp282);
      tmpMeta285 = stringAppend(tmpMeta283,MMC_REFSTRINGLIT(tmp284));
      tmp286 = modelica_real_to_modelica_string((data->localData[0]->realVars[1307]/* m.p_drones_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta287 = stringAppend(tmpMeta285,tmp286);
      tmpMeta289 = stringAppend(tmpMeta287,MMC_REFSTRINGLIT(tmp288));
      tmp290 = modelica_real_to_modelica_string((data->localData[0]->realVars[1324]/* m.std_dev_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta291 = stringAppend(tmpMeta289,tmp290);
      omc_Modelica_Utilities_Streams_print(threadData, tmpMeta291, MMC_REFSTRINGLIT(tmp292));

      omc_disconnect__from__db(threadData);

      {
        FILE_INFO info = {"/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code/monitor.mo",145,2,145,53,0};
        omc_terminate(info, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp293)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 611
type: SIMPLE_ASSIGN
cc_to_drone[4].inputdata[1] = cc.msg_to_drone[4,1]
*/
void System_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  (data->localData[0]->realVars[138]/* cc_to_drone[4].inputdata[1] variable */)  = (data->localData[0]->realVars[312]/* cc.msg_to_drone[4,1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 612
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
  $whenCondition33 := pre($whenCondition33);
  $whenCondition32 := pre($whenCondition32);
  $whenCondition31 := pre($whenCondition31);
  $whenCondition31 := pre(cc_to_drone[4].readsigint) and pre(cc_to_drone[4].writesigint);
  $whenCondition32 := pre(cc_to_drone[4].readsigint) and not pre(cc_to_drone[4].writesigint) and pre(cc_to_drone[4].fifosize) >= 1;
  $whenCondition33 := not pre(cc_to_drone[4].readsigint) and pre(cc_to_drone[4].writesigint) and pre(cc_to_drone[4].fifosize) < 10;
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
  elsewhen $whenCondition31 then
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
  elsewhen $whenCondition32 then
    for j in 1:5 loop
      cc_to_drone[4].outputdata[j] := cc_to_drone[4].fifo[pre(cc_to_drone[4].oldest),j];
    end for;
    cc_to_drone[4].oldest := mod(pre(cc_to_drone[4].oldest), 10) + 1;
    cc_to_drone[4].fifosize := pre(cc_to_drone[4].fifosize) - 1;
    cc_to_drone[4].datavailable := cc_to_drone[4].fifosize >= 1;
    cc_to_drone[4].spaceavailable := true;
  elsewhen $whenCondition33 then
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
void System_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  modelica_boolean tmp294;
  modelica_boolean tmp295;
  modelica_integer tmp296;
  modelica_integer tmp297;
  modelica_integer tmp298;
  modelica_integer tmp299;
  modelica_integer tmp300;
  modelica_integer tmp301;
  modelica_integer tmp302;
  modelica_integer tmp303;
  modelica_integer tmp304;
  modelica_boolean tmp305;
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
  modelica_integer tmp321;
  modelica_integer tmp322;
  modelica_integer tmp323;
  modelica_integer tmp324;
  modelica_integer tmp325;
  modelica_boolean tmp326;
  modelica_integer tmp327;
  modelica_integer tmp328;
  modelica_integer tmp329;
  modelica_integer tmp330;
  modelica_boolean tmp331;
  modelica_integer tmp332;
  modelica_integer tmp333;
  modelica_integer tmp334;
  (data->localData[0]->integerVars[39]/* cc_to_drone[4].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[39]/* cc_to_drone[4].newest DISCRETE */) ;

  (data->localData[0]->integerVars[46]/* cc_to_drone[4].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[46]/* cc_to_drone[4].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[32]/* cc_to_drone[4].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[32]/* cc_to_drone[4].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[584]/* cc_to_drone[4].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[584]/* cc_to_drone[4].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[583]/* cc_to_drone[4].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[583]/* cc_to_drone[4].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[582]/* cc_to_drone[4].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[582]/* cc_to_drone[4].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[581]/* cc_to_drone[4].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[581]/* cc_to_drone[4].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[580]/* cc_to_drone[4].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[580]/* cc_to_drone[4].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[579]/* cc_to_drone[4].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[579]/* cc_to_drone[4].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[578]/* cc_to_drone[4].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[578]/* cc_to_drone[4].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[577]/* cc_to_drone[4].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[577]/* cc_to_drone[4].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[576]/* cc_to_drone[4].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[576]/* cc_to_drone[4].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[575]/* cc_to_drone[4].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[575]/* cc_to_drone[4].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[574]/* cc_to_drone[4].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[574]/* cc_to_drone[4].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[573]/* cc_to_drone[4].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[573]/* cc_to_drone[4].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[572]/* cc_to_drone[4].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[572]/* cc_to_drone[4].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[571]/* cc_to_drone[4].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[571]/* cc_to_drone[4].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[570]/* cc_to_drone[4].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[570]/* cc_to_drone[4].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[569]/* cc_to_drone[4].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[569]/* cc_to_drone[4].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[568]/* cc_to_drone[4].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[568]/* cc_to_drone[4].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[567]/* cc_to_drone[4].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[567]/* cc_to_drone[4].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[566]/* cc_to_drone[4].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[566]/* cc_to_drone[4].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[565]/* cc_to_drone[4].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[565]/* cc_to_drone[4].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[564]/* cc_to_drone[4].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[564]/* cc_to_drone[4].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[563]/* cc_to_drone[4].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[563]/* cc_to_drone[4].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[562]/* cc_to_drone[4].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[562]/* cc_to_drone[4].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[561]/* cc_to_drone[4].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[561]/* cc_to_drone[4].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[560]/* cc_to_drone[4].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[560]/* cc_to_drone[4].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[559]/* cc_to_drone[4].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[559]/* cc_to_drone[4].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[558]/* cc_to_drone[4].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[558]/* cc_to_drone[4].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[557]/* cc_to_drone[4].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[557]/* cc_to_drone[4].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[556]/* cc_to_drone[4].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[556]/* cc_to_drone[4].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[555]/* cc_to_drone[4].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[555]/* cc_to_drone[4].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[554]/* cc_to_drone[4].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[554]/* cc_to_drone[4].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[553]/* cc_to_drone[4].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[553]/* cc_to_drone[4].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[552]/* cc_to_drone[4].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[552]/* cc_to_drone[4].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[551]/* cc_to_drone[4].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[551]/* cc_to_drone[4].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[550]/* cc_to_drone[4].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[550]/* cc_to_drone[4].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[549]/* cc_to_drone[4].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[549]/* cc_to_drone[4].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[548]/* cc_to_drone[4].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[548]/* cc_to_drone[4].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[547]/* cc_to_drone[4].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[547]/* cc_to_drone[4].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[546]/* cc_to_drone[4].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[546]/* cc_to_drone[4].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[545]/* cc_to_drone[4].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[545]/* cc_to_drone[4].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[544]/* cc_to_drone[4].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[544]/* cc_to_drone[4].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[543]/* cc_to_drone[4].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[543]/* cc_to_drone[4].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[542]/* cc_to_drone[4].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[542]/* cc_to_drone[4].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[541]/* cc_to_drone[4].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[541]/* cc_to_drone[4].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[540]/* cc_to_drone[4].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[540]/* cc_to_drone[4].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[539]/* cc_to_drone[4].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[539]/* cc_to_drone[4].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[538]/* cc_to_drone[4].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[538]/* cc_to_drone[4].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[537]/* cc_to_drone[4].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[537]/* cc_to_drone[4].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[536]/* cc_to_drone[4].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[536]/* cc_to_drone[4].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[535]/* cc_to_drone[4].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[535]/* cc_to_drone[4].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[184]/* cc_to_drone[4].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[184]/* cc_to_drone[4].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[754]/* cc_to_drone[4].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[754]/* cc_to_drone[4].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[753]/* cc_to_drone[4].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[753]/* cc_to_drone[4].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[752]/* cc_to_drone[4].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[752]/* cc_to_drone[4].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[751]/* cc_to_drone[4].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[751]/* cc_to_drone[4].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[750]/* cc_to_drone[4].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[750]/* cc_to_drone[4].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[163]/* cc_to_drone[4].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[163]/* cc_to_drone[4].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[26]/* $whenCondition33 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[26]/* $whenCondition33 DISCRETE */) ;

  (data->localData[0]->booleanVars[25]/* $whenCondition32 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[25]/* $whenCondition32 DISCRETE */) ;

  (data->localData[0]->booleanVars[24]/* $whenCondition31 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[24]/* $whenCondition31 DISCRETE */) ;

  (data->localData[0]->booleanVars[24]/* $whenCondition31 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[170]/* cc_to_drone[4].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[191]/* cc_to_drone[4].writesigint DISCRETE */) );

  tmp294 = GreaterEq((data->simulationInfo->integerVarsPre[32]/* cc_to_drone[4].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[25]/* $whenCondition32 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[170]/* cc_to_drone[4].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[191]/* cc_to_drone[4].writesigint DISCRETE */) )) && tmp294);

  tmp295 = Less((data->simulationInfo->integerVarsPre[32]/* cc_to_drone[4].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[26]/* $whenCondition33 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[170]/* cc_to_drone[4].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[191]/* cc_to_drone[4].writesigint DISCRETE */) ) && tmp295);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[163]/* cc_to_drone[4].datavailable DISCRETE */)  = 0;

      tmp296 = ((modelica_integer) 1); tmp297 = 1; tmp298 = ((modelica_integer) 5);
      if(!(((tmp297 > 0) && (tmp296 > tmp298)) || ((tmp297 < 0) && (tmp296 < tmp298))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp296, tmp298); j += tmp297)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[184]/* cc_to_drone[4].spaceavailable DISCRETE */)  = 1;

      tmp302 = ((modelica_integer) 1); tmp303 = 1; tmp304 = ((modelica_integer) 10);
      if(!(((tmp303 > 0) && (tmp302 > tmp304)) || ((tmp303 < 0) && (tmp302 < tmp304))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp302, tmp304); i += tmp303)
        {
          tmp299 = ((modelica_integer) 1); tmp300 = 1; tmp301 = ((modelica_integer) 5);
          if(!(((tmp300 > 0) && (tmp299 > tmp301)) || ((tmp300 < 0) && (tmp299 < tmp301))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp299, tmp301); j += tmp300)
            {
              (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[32]/* cc_to_drone[4].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[46]/* cc_to_drone[4].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[39]/* cc_to_drone[4].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[24]/* $whenCondition31 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[24]/* $whenCondition31 DISCRETE */)  /* edge */))
    {
      tmp305 = Less((data->simulationInfo->integerVarsPre[32]/* cc_to_drone[4].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp305)
      {
        tmp306 = ((modelica_integer) 1); tmp307 = 1; tmp308 = ((modelica_integer) 5);
        if(!(((tmp307 > 0) && (tmp306 > tmp308)) || ((tmp307 < 0) && (tmp306 < tmp308))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp306, tmp308); j += tmp307)
          {
            (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[39]/* cc_to_drone[4].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 4) - 1) * 5 + (j-1)] ;
          }
        }

        tmp309 = ((modelica_integer) 10);
        if (tmp309 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[4].newest), 10)");}
        (data->localData[0]->integerVars[39]/* cc_to_drone[4].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[39]/* cc_to_drone[4].newest DISCRETE */) , tmp309) + ((modelica_integer) 1);

        tmp310 = ((modelica_integer) 1); tmp311 = 1; tmp312 = ((modelica_integer) 5);
        if(!(((tmp311 > 0) && (tmp310 > tmp312)) || ((tmp311 < 0) && (tmp310 < tmp312))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp310, tmp312); j += tmp311)
          {
            (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[46]/* cc_to_drone[4].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp313 = ((modelica_integer) 10);
        if (tmp313 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[4].oldest), 10)");}
        (data->localData[0]->integerVars[46]/* cc_to_drone[4].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[46]/* cc_to_drone[4].oldest DISCRETE */) , tmp313) + ((modelica_integer) 1);
      }
      else
      {
        tmp314 = ((modelica_integer) 1); tmp315 = 1; tmp316 = ((modelica_integer) 5);
        if(!(((tmp315 > 0) && (tmp314 > tmp316)) || ((tmp315 < 0) && (tmp314 < tmp316))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp314, tmp316); j += tmp315)
          {
            (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[46]/* cc_to_drone[4].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp317 = ((modelica_integer) 10);
        if (tmp317 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[4].oldest), 10)");}
        (data->localData[0]->integerVars[46]/* cc_to_drone[4].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[46]/* cc_to_drone[4].oldest DISCRETE */) , tmp317) + ((modelica_integer) 1);

        tmp318 = ((modelica_integer) 1); tmp319 = 1; tmp320 = ((modelica_integer) 5);
        if(!(((tmp319 > 0) && (tmp318 > tmp320)) || ((tmp319 < 0) && (tmp318 < tmp320))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp318, tmp320); j += tmp319)
          {
            (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[39]/* cc_to_drone[4].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 4) - 1) * 5 + (j-1)] ;
          }
        }

        tmp321 = ((modelica_integer) 10);
        if (tmp321 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[4].newest), 10)");}
        (data->localData[0]->integerVars[39]/* cc_to_drone[4].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[39]/* cc_to_drone[4].newest DISCRETE */) , tmp321) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[25]/* $whenCondition32 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[25]/* $whenCondition32 DISCRETE */)  /* edge */))
    {
      tmp322 = ((modelica_integer) 1); tmp323 = 1; tmp324 = ((modelica_integer) 5);
      if(!(((tmp323 > 0) && (tmp322 > tmp324)) || ((tmp323 < 0) && (tmp322 < tmp324))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp322, tmp324); j += tmp323)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[46]/* cc_to_drone[4].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp325 = ((modelica_integer) 10);
      if (tmp325 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[4].oldest), 10)");}
      (data->localData[0]->integerVars[46]/* cc_to_drone[4].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[46]/* cc_to_drone[4].oldest DISCRETE */) , tmp325) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[32]/* cc_to_drone[4].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[32]/* cc_to_drone[4].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp326 = GreaterEq((data->localData[0]->integerVars[32]/* cc_to_drone[4].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[163]/* cc_to_drone[4].datavailable DISCRETE */)  = tmp326;

      (data->localData[0]->booleanVars[184]/* cc_to_drone[4].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[26]/* $whenCondition33 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[26]/* $whenCondition33 DISCRETE */)  /* edge */))
    {
      tmp327 = ((modelica_integer) 1); tmp328 = 1; tmp329 = ((modelica_integer) 5);
      if(!(((tmp328 > 0) && (tmp327 > tmp329)) || ((tmp328 < 0) && (tmp327 < tmp329))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp327, tmp329); j += tmp328)
        {
          (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[39]/* cc_to_drone[4].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 4) - 1) * 5 + (j-1)] ;
        }
      }

      tmp330 = ((modelica_integer) 10);
      if (tmp330 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[4].newest), 10)");}
      (data->localData[0]->integerVars[39]/* cc_to_drone[4].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[39]/* cc_to_drone[4].newest DISCRETE */) , tmp330) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[32]/* cc_to_drone[4].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[32]/* cc_to_drone[4].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[163]/* cc_to_drone[4].datavailable DISCRETE */)  = 1;

      tmp331 = Less((data->simulationInfo->integerVarsPre[32]/* cc_to_drone[4].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[184]/* cc_to_drone[4].spaceavailable DISCRETE */)  = tmp331;

      tmp332 = ((modelica_integer) 1); tmp333 = 1; tmp334 = ((modelica_integer) 5);
      if(!(((tmp333 > 0) && (tmp332 > tmp334)) || ((tmp333 < 0) && (tmp332 < tmp334))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp332, tmp334); j += tmp333)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[46]/* cc_to_drone[4].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 613
type: SIMPLE_ASSIGN
cc.spaceavailable[4] = cc_to_drone[4].spaceavailable
*/
void System_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  (data->localData[0]->booleanVars[149]/* cc.spaceavailable[4] DISCRETE */)  = (data->localData[0]->booleanVars[184]/* cc_to_drone[4].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 614
type: SIMPLE_ASSIGN
d[4].datavailable = cc_to_drone[4].datavailable
*/
void System_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  (data->localData[0]->booleanVars[219]/* d[4].datavailable DISCRETE */)  = (data->localData[0]->booleanVars[163]/* cc_to_drone[4].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 615
type: SIMPLE_ASSIGN
cc_to_drone[2].inputdata[2] = cc.msg_to_drone[2,2]
*/
void System_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  (data->localData[0]->realVars[129]/* cc_to_drone[2].inputdata[2] variable */)  = (data->localData[0]->realVars[303]/* cc.msg_to_drone[2,2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 616
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
  $whenCondition39 := pre($whenCondition39);
  $whenCondition38 := pre($whenCondition38);
  $whenCondition37 := pre($whenCondition37);
  $whenCondition37 := pre(cc_to_drone[2].readsigint) and pre(cc_to_drone[2].writesigint);
  $whenCondition38 := pre(cc_to_drone[2].readsigint) and not pre(cc_to_drone[2].writesigint) and pre(cc_to_drone[2].fifosize) >= 1;
  $whenCondition39 := not pre(cc_to_drone[2].readsigint) and pre(cc_to_drone[2].writesigint) and pre(cc_to_drone[2].fifosize) < 10;
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
  elsewhen $whenCondition37 then
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
  elsewhen $whenCondition38 then
    for j in 1:5 loop
      cc_to_drone[2].outputdata[j] := cc_to_drone[2].fifo[pre(cc_to_drone[2].oldest),j];
    end for;
    cc_to_drone[2].oldest := mod(pre(cc_to_drone[2].oldest), 10) + 1;
    cc_to_drone[2].fifosize := pre(cc_to_drone[2].fifosize) - 1;
    cc_to_drone[2].datavailable := cc_to_drone[2].fifosize >= 1;
    cc_to_drone[2].spaceavailable := true;
  elsewhen $whenCondition39 then
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
void System_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  modelica_boolean tmp335;
  modelica_boolean tmp336;
  modelica_integer tmp337;
  modelica_integer tmp338;
  modelica_integer tmp339;
  modelica_integer tmp340;
  modelica_integer tmp341;
  modelica_integer tmp342;
  modelica_integer tmp343;
  modelica_integer tmp344;
  modelica_integer tmp345;
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
  modelica_integer tmp356;
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
  modelica_boolean tmp367;
  modelica_integer tmp368;
  modelica_integer tmp369;
  modelica_integer tmp370;
  modelica_integer tmp371;
  modelica_boolean tmp372;
  modelica_integer tmp373;
  modelica_integer tmp374;
  modelica_integer tmp375;
  (data->localData[0]->integerVars[37]/* cc_to_drone[2].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[37]/* cc_to_drone[2].newest DISCRETE */) ;

  (data->localData[0]->integerVars[44]/* cc_to_drone[2].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[44]/* cc_to_drone[2].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[30]/* cc_to_drone[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[30]/* cc_to_drone[2].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[484]/* cc_to_drone[2].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[484]/* cc_to_drone[2].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[483]/* cc_to_drone[2].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[483]/* cc_to_drone[2].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[482]/* cc_to_drone[2].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[482]/* cc_to_drone[2].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[481]/* cc_to_drone[2].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[481]/* cc_to_drone[2].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[480]/* cc_to_drone[2].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[480]/* cc_to_drone[2].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[479]/* cc_to_drone[2].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[479]/* cc_to_drone[2].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[478]/* cc_to_drone[2].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[478]/* cc_to_drone[2].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[477]/* cc_to_drone[2].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[477]/* cc_to_drone[2].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[476]/* cc_to_drone[2].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[476]/* cc_to_drone[2].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[475]/* cc_to_drone[2].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[475]/* cc_to_drone[2].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[474]/* cc_to_drone[2].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[474]/* cc_to_drone[2].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[473]/* cc_to_drone[2].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[473]/* cc_to_drone[2].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[472]/* cc_to_drone[2].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[472]/* cc_to_drone[2].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[471]/* cc_to_drone[2].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[471]/* cc_to_drone[2].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[470]/* cc_to_drone[2].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[470]/* cc_to_drone[2].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[469]/* cc_to_drone[2].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[469]/* cc_to_drone[2].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[468]/* cc_to_drone[2].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[468]/* cc_to_drone[2].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[467]/* cc_to_drone[2].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[467]/* cc_to_drone[2].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[466]/* cc_to_drone[2].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[466]/* cc_to_drone[2].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[465]/* cc_to_drone[2].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[465]/* cc_to_drone[2].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[464]/* cc_to_drone[2].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[464]/* cc_to_drone[2].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[463]/* cc_to_drone[2].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[463]/* cc_to_drone[2].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[462]/* cc_to_drone[2].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[462]/* cc_to_drone[2].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[461]/* cc_to_drone[2].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[461]/* cc_to_drone[2].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[460]/* cc_to_drone[2].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[460]/* cc_to_drone[2].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[459]/* cc_to_drone[2].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[459]/* cc_to_drone[2].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[458]/* cc_to_drone[2].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[458]/* cc_to_drone[2].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[457]/* cc_to_drone[2].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[457]/* cc_to_drone[2].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[456]/* cc_to_drone[2].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[456]/* cc_to_drone[2].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[455]/* cc_to_drone[2].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[455]/* cc_to_drone[2].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[454]/* cc_to_drone[2].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[454]/* cc_to_drone[2].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[453]/* cc_to_drone[2].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[453]/* cc_to_drone[2].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[452]/* cc_to_drone[2].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[452]/* cc_to_drone[2].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[451]/* cc_to_drone[2].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[451]/* cc_to_drone[2].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[450]/* cc_to_drone[2].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[450]/* cc_to_drone[2].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[449]/* cc_to_drone[2].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[449]/* cc_to_drone[2].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[448]/* cc_to_drone[2].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[448]/* cc_to_drone[2].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[447]/* cc_to_drone[2].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[447]/* cc_to_drone[2].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[446]/* cc_to_drone[2].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[446]/* cc_to_drone[2].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[445]/* cc_to_drone[2].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[445]/* cc_to_drone[2].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[444]/* cc_to_drone[2].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[444]/* cc_to_drone[2].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[443]/* cc_to_drone[2].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[443]/* cc_to_drone[2].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[442]/* cc_to_drone[2].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[442]/* cc_to_drone[2].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[441]/* cc_to_drone[2].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[441]/* cc_to_drone[2].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[440]/* cc_to_drone[2].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[440]/* cc_to_drone[2].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[439]/* cc_to_drone[2].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[439]/* cc_to_drone[2].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[438]/* cc_to_drone[2].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[438]/* cc_to_drone[2].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[437]/* cc_to_drone[2].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[437]/* cc_to_drone[2].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[436]/* cc_to_drone[2].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[436]/* cc_to_drone[2].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[435]/* cc_to_drone[2].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[435]/* cc_to_drone[2].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[182]/* cc_to_drone[2].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[182]/* cc_to_drone[2].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[744]/* cc_to_drone[2].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[744]/* cc_to_drone[2].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[743]/* cc_to_drone[2].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[743]/* cc_to_drone[2].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[742]/* cc_to_drone[2].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[742]/* cc_to_drone[2].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[741]/* cc_to_drone[2].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[741]/* cc_to_drone[2].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[740]/* cc_to_drone[2].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[740]/* cc_to_drone[2].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[161]/* cc_to_drone[2].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[161]/* cc_to_drone[2].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[32]/* $whenCondition39 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[32]/* $whenCondition39 DISCRETE */) ;

  (data->localData[0]->booleanVars[31]/* $whenCondition38 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[31]/* $whenCondition38 DISCRETE */) ;

  (data->localData[0]->booleanVars[30]/* $whenCondition37 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[30]/* $whenCondition37 DISCRETE */) ;

  (data->localData[0]->booleanVars[30]/* $whenCondition37 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[168]/* cc_to_drone[2].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[189]/* cc_to_drone[2].writesigint DISCRETE */) );

  tmp335 = GreaterEq((data->simulationInfo->integerVarsPre[30]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[31]/* $whenCondition38 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[168]/* cc_to_drone[2].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[189]/* cc_to_drone[2].writesigint DISCRETE */) )) && tmp335);

  tmp336 = Less((data->simulationInfo->integerVarsPre[30]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[32]/* $whenCondition39 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[168]/* cc_to_drone[2].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[189]/* cc_to_drone[2].writesigint DISCRETE */) ) && tmp336);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[161]/* cc_to_drone[2].datavailable DISCRETE */)  = 0;

      tmp337 = ((modelica_integer) 1); tmp338 = 1; tmp339 = ((modelica_integer) 5);
      if(!(((tmp338 > 0) && (tmp337 > tmp339)) || ((tmp338 < 0) && (tmp337 < tmp339))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp337, tmp339); j += tmp338)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[182]/* cc_to_drone[2].spaceavailable DISCRETE */)  = 1;

      tmp343 = ((modelica_integer) 1); tmp344 = 1; tmp345 = ((modelica_integer) 10);
      if(!(((tmp344 > 0) && (tmp343 > tmp345)) || ((tmp344 < 0) && (tmp343 < tmp345))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp343, tmp345); i += tmp344)
        {
          tmp340 = ((modelica_integer) 1); tmp341 = 1; tmp342 = ((modelica_integer) 5);
          if(!(((tmp341 > 0) && (tmp340 > tmp342)) || ((tmp341 < 0) && (tmp340 < tmp342))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp340, tmp342); j += tmp341)
            {
              (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[30]/* cc_to_drone[2].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[44]/* cc_to_drone[2].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[37]/* cc_to_drone[2].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[30]/* $whenCondition37 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[30]/* $whenCondition37 DISCRETE */)  /* edge */))
    {
      tmp346 = Less((data->simulationInfo->integerVarsPre[30]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp346)
      {
        tmp347 = ((modelica_integer) 1); tmp348 = 1; tmp349 = ((modelica_integer) 5);
        if(!(((tmp348 > 0) && (tmp347 > tmp349)) || ((tmp348 < 0) && (tmp347 < tmp349))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp347, tmp349); j += tmp348)
          {
            (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[37]/* cc_to_drone[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
          }
        }

        tmp350 = ((modelica_integer) 10);
        if (tmp350 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].newest), 10)");}
        (data->localData[0]->integerVars[37]/* cc_to_drone[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[37]/* cc_to_drone[2].newest DISCRETE */) , tmp350) + ((modelica_integer) 1);

        tmp351 = ((modelica_integer) 1); tmp352 = 1; tmp353 = ((modelica_integer) 5);
        if(!(((tmp352 > 0) && (tmp351 > tmp353)) || ((tmp352 < 0) && (tmp351 < tmp353))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp351, tmp353); j += tmp352)
          {
            (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[44]/* cc_to_drone[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp354 = ((modelica_integer) 10);
        if (tmp354 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].oldest), 10)");}
        (data->localData[0]->integerVars[44]/* cc_to_drone[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[44]/* cc_to_drone[2].oldest DISCRETE */) , tmp354) + ((modelica_integer) 1);
      }
      else
      {
        tmp355 = ((modelica_integer) 1); tmp356 = 1; tmp357 = ((modelica_integer) 5);
        if(!(((tmp356 > 0) && (tmp355 > tmp357)) || ((tmp356 < 0) && (tmp355 < tmp357))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp355, tmp357); j += tmp356)
          {
            (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[44]/* cc_to_drone[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp358 = ((modelica_integer) 10);
        if (tmp358 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].oldest), 10)");}
        (data->localData[0]->integerVars[44]/* cc_to_drone[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[44]/* cc_to_drone[2].oldest DISCRETE */) , tmp358) + ((modelica_integer) 1);

        tmp359 = ((modelica_integer) 1); tmp360 = 1; tmp361 = ((modelica_integer) 5);
        if(!(((tmp360 > 0) && (tmp359 > tmp361)) || ((tmp360 < 0) && (tmp359 < tmp361))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp359, tmp361); j += tmp360)
          {
            (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[37]/* cc_to_drone[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
          }
        }

        tmp362 = ((modelica_integer) 10);
        if (tmp362 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].newest), 10)");}
        (data->localData[0]->integerVars[37]/* cc_to_drone[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[37]/* cc_to_drone[2].newest DISCRETE */) , tmp362) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[31]/* $whenCondition38 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[31]/* $whenCondition38 DISCRETE */)  /* edge */))
    {
      tmp363 = ((modelica_integer) 1); tmp364 = 1; tmp365 = ((modelica_integer) 5);
      if(!(((tmp364 > 0) && (tmp363 > tmp365)) || ((tmp364 < 0) && (tmp363 < tmp365))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp363, tmp365); j += tmp364)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[44]/* cc_to_drone[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp366 = ((modelica_integer) 10);
      if (tmp366 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].oldest), 10)");}
      (data->localData[0]->integerVars[44]/* cc_to_drone[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[44]/* cc_to_drone[2].oldest DISCRETE */) , tmp366) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[30]/* cc_to_drone[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[30]/* cc_to_drone[2].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp367 = GreaterEq((data->localData[0]->integerVars[30]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[161]/* cc_to_drone[2].datavailable DISCRETE */)  = tmp367;

      (data->localData[0]->booleanVars[182]/* cc_to_drone[2].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[32]/* $whenCondition39 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[32]/* $whenCondition39 DISCRETE */)  /* edge */))
    {
      tmp368 = ((modelica_integer) 1); tmp369 = 1; tmp370 = ((modelica_integer) 5);
      if(!(((tmp369 > 0) && (tmp368 > tmp370)) || ((tmp369 < 0) && (tmp368 < tmp370))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp368, tmp370); j += tmp369)
        {
          (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[37]/* cc_to_drone[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
        }
      }

      tmp371 = ((modelica_integer) 10);
      if (tmp371 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[2].newest), 10)");}
      (data->localData[0]->integerVars[37]/* cc_to_drone[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[37]/* cc_to_drone[2].newest DISCRETE */) , tmp371) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[30]/* cc_to_drone[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[30]/* cc_to_drone[2].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[161]/* cc_to_drone[2].datavailable DISCRETE */)  = 1;

      tmp372 = Less((data->simulationInfo->integerVarsPre[30]/* cc_to_drone[2].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[182]/* cc_to_drone[2].spaceavailable DISCRETE */)  = tmp372;

      tmp373 = ((modelica_integer) 1); tmp374 = 1; tmp375 = ((modelica_integer) 5);
      if(!(((tmp374 > 0) && (tmp373 > tmp375)) || ((tmp374 < 0) && (tmp373 < tmp375))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp373, tmp375); j += tmp374)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[44]/* cc_to_drone[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 617
type: SIMPLE_ASSIGN
d[2].datavailable = cc_to_drone[2].datavailable
*/
void System_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  (data->localData[0]->booleanVars[217]/* d[2].datavailable DISCRETE */)  = (data->localData[0]->booleanVars[161]/* cc_to_drone[2].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 618
type: SIMPLE_ASSIGN
cc.spaceavailable[2] = cc_to_drone[2].spaceavailable
*/
void System_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  (data->localData[0]->booleanVars[147]/* cc.spaceavailable[2] DISCRETE */)  = (data->localData[0]->booleanVars[182]/* cc_to_drone[2].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 619
type: SIMPLE_ASSIGN
cc_to_drone[3].inputdata[5] = cc.msg_to_drone[3,5]
*/
void System_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  (data->localData[0]->realVars[137]/* cc_to_drone[3].inputdata[5] variable */)  = (data->localData[0]->realVars[311]/* cc.msg_to_drone[3,5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 620
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[3] = cc.msg_to_drone[1,3]
*/
void System_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  (data->localData[0]->realVars[125]/* cc_to_drone[1].inputdata[3] variable */)  = (data->localData[0]->realVars[299]/* cc.msg_to_drone[1,3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 621
type: SIMPLE_ASSIGN
cc_to_drone[6].inputdata[5] = cc.msg_to_drone[6,5]
*/
void System_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  (data->localData[0]->realVars[152]/* cc_to_drone[6].inputdata[5] variable */)  = (data->localData[0]->realVars[326]/* cc.msg_to_drone[6,5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 622
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[2] = cc.msg_to_drone[1,2]
*/
void System_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  (data->localData[0]->realVars[124]/* cc_to_drone[1].inputdata[2] variable */)  = (data->localData[0]->realVars[298]/* cc.msg_to_drone[1,2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 623
type: SIMPLE_ASSIGN
cc_to_drone[3].inputdata[4] = cc.msg_to_drone[3,4]
*/
void System_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  (data->localData[0]->realVars[136]/* cc_to_drone[3].inputdata[4] variable */)  = (data->localData[0]->realVars[310]/* cc.msg_to_drone[3,4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 624
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
  $whenCondition36 := pre($whenCondition36);
  $whenCondition35 := pre($whenCondition35);
  $whenCondition34 := pre($whenCondition34);
  $whenCondition34 := pre(cc_to_drone[3].readsigint) and pre(cc_to_drone[3].writesigint);
  $whenCondition35 := pre(cc_to_drone[3].readsigint) and not pre(cc_to_drone[3].writesigint) and pre(cc_to_drone[3].fifosize) >= 1;
  $whenCondition36 := not pre(cc_to_drone[3].readsigint) and pre(cc_to_drone[3].writesigint) and pre(cc_to_drone[3].fifosize) < 10;
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
  elsewhen $whenCondition34 then
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
  elsewhen $whenCondition35 then
    for j in 1:5 loop
      cc_to_drone[3].outputdata[j] := cc_to_drone[3].fifo[pre(cc_to_drone[3].oldest),j];
    end for;
    cc_to_drone[3].oldest := mod(pre(cc_to_drone[3].oldest), 10) + 1;
    cc_to_drone[3].fifosize := pre(cc_to_drone[3].fifosize) - 1;
    cc_to_drone[3].datavailable := cc_to_drone[3].fifosize >= 1;
    cc_to_drone[3].spaceavailable := true;
  elsewhen $whenCondition36 then
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
void System_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  modelica_boolean tmp376;
  modelica_boolean tmp377;
  modelica_integer tmp378;
  modelica_integer tmp379;
  modelica_integer tmp380;
  modelica_integer tmp381;
  modelica_integer tmp382;
  modelica_integer tmp383;
  modelica_integer tmp384;
  modelica_integer tmp385;
  modelica_integer tmp386;
  modelica_boolean tmp387;
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
  modelica_integer tmp407;
  modelica_boolean tmp408;
  modelica_integer tmp409;
  modelica_integer tmp410;
  modelica_integer tmp411;
  modelica_integer tmp412;
  modelica_boolean tmp413;
  modelica_integer tmp414;
  modelica_integer tmp415;
  modelica_integer tmp416;
  (data->localData[0]->integerVars[38]/* cc_to_drone[3].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[38]/* cc_to_drone[3].newest DISCRETE */) ;

  (data->localData[0]->integerVars[45]/* cc_to_drone[3].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[45]/* cc_to_drone[3].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[31]/* cc_to_drone[3].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[31]/* cc_to_drone[3].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[534]/* cc_to_drone[3].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[534]/* cc_to_drone[3].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[533]/* cc_to_drone[3].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[533]/* cc_to_drone[3].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[532]/* cc_to_drone[3].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[532]/* cc_to_drone[3].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[531]/* cc_to_drone[3].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[531]/* cc_to_drone[3].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[530]/* cc_to_drone[3].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[530]/* cc_to_drone[3].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[529]/* cc_to_drone[3].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[529]/* cc_to_drone[3].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[528]/* cc_to_drone[3].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[528]/* cc_to_drone[3].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[527]/* cc_to_drone[3].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[527]/* cc_to_drone[3].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[526]/* cc_to_drone[3].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[526]/* cc_to_drone[3].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[525]/* cc_to_drone[3].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[525]/* cc_to_drone[3].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[524]/* cc_to_drone[3].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[524]/* cc_to_drone[3].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[523]/* cc_to_drone[3].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[523]/* cc_to_drone[3].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[522]/* cc_to_drone[3].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[522]/* cc_to_drone[3].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[521]/* cc_to_drone[3].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[521]/* cc_to_drone[3].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[520]/* cc_to_drone[3].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[520]/* cc_to_drone[3].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[519]/* cc_to_drone[3].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[519]/* cc_to_drone[3].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[518]/* cc_to_drone[3].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[518]/* cc_to_drone[3].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[517]/* cc_to_drone[3].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[517]/* cc_to_drone[3].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[516]/* cc_to_drone[3].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[516]/* cc_to_drone[3].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[515]/* cc_to_drone[3].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[515]/* cc_to_drone[3].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[514]/* cc_to_drone[3].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[514]/* cc_to_drone[3].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[513]/* cc_to_drone[3].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[513]/* cc_to_drone[3].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[512]/* cc_to_drone[3].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[512]/* cc_to_drone[3].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[511]/* cc_to_drone[3].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[511]/* cc_to_drone[3].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[510]/* cc_to_drone[3].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[510]/* cc_to_drone[3].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[509]/* cc_to_drone[3].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[509]/* cc_to_drone[3].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[508]/* cc_to_drone[3].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[508]/* cc_to_drone[3].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[507]/* cc_to_drone[3].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[507]/* cc_to_drone[3].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[506]/* cc_to_drone[3].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[506]/* cc_to_drone[3].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[505]/* cc_to_drone[3].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[505]/* cc_to_drone[3].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[504]/* cc_to_drone[3].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[504]/* cc_to_drone[3].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[503]/* cc_to_drone[3].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[503]/* cc_to_drone[3].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[502]/* cc_to_drone[3].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[502]/* cc_to_drone[3].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[501]/* cc_to_drone[3].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[501]/* cc_to_drone[3].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[500]/* cc_to_drone[3].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[500]/* cc_to_drone[3].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[499]/* cc_to_drone[3].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[499]/* cc_to_drone[3].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[498]/* cc_to_drone[3].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[498]/* cc_to_drone[3].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[497]/* cc_to_drone[3].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[497]/* cc_to_drone[3].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[496]/* cc_to_drone[3].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[496]/* cc_to_drone[3].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[495]/* cc_to_drone[3].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[495]/* cc_to_drone[3].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[494]/* cc_to_drone[3].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[494]/* cc_to_drone[3].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[493]/* cc_to_drone[3].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[493]/* cc_to_drone[3].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[492]/* cc_to_drone[3].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[492]/* cc_to_drone[3].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[491]/* cc_to_drone[3].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[491]/* cc_to_drone[3].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[490]/* cc_to_drone[3].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[490]/* cc_to_drone[3].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[489]/* cc_to_drone[3].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[489]/* cc_to_drone[3].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[488]/* cc_to_drone[3].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[488]/* cc_to_drone[3].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[487]/* cc_to_drone[3].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[487]/* cc_to_drone[3].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[486]/* cc_to_drone[3].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[486]/* cc_to_drone[3].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[485]/* cc_to_drone[3].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[485]/* cc_to_drone[3].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[183]/* cc_to_drone[3].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[183]/* cc_to_drone[3].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[749]/* cc_to_drone[3].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[749]/* cc_to_drone[3].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[748]/* cc_to_drone[3].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[748]/* cc_to_drone[3].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[747]/* cc_to_drone[3].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[747]/* cc_to_drone[3].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[746]/* cc_to_drone[3].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[746]/* cc_to_drone[3].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[745]/* cc_to_drone[3].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[745]/* cc_to_drone[3].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[162]/* cc_to_drone[3].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[162]/* cc_to_drone[3].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[29]/* $whenCondition36 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[29]/* $whenCondition36 DISCRETE */) ;

  (data->localData[0]->booleanVars[28]/* $whenCondition35 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[28]/* $whenCondition35 DISCRETE */) ;

  (data->localData[0]->booleanVars[27]/* $whenCondition34 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[27]/* $whenCondition34 DISCRETE */) ;

  (data->localData[0]->booleanVars[27]/* $whenCondition34 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[169]/* cc_to_drone[3].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[190]/* cc_to_drone[3].writesigint DISCRETE */) );

  tmp376 = GreaterEq((data->simulationInfo->integerVarsPre[31]/* cc_to_drone[3].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[28]/* $whenCondition35 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[169]/* cc_to_drone[3].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[190]/* cc_to_drone[3].writesigint DISCRETE */) )) && tmp376);

  tmp377 = Less((data->simulationInfo->integerVarsPre[31]/* cc_to_drone[3].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[29]/* $whenCondition36 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[169]/* cc_to_drone[3].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[190]/* cc_to_drone[3].writesigint DISCRETE */) ) && tmp377);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[162]/* cc_to_drone[3].datavailable DISCRETE */)  = 0;

      tmp378 = ((modelica_integer) 1); tmp379 = 1; tmp380 = ((modelica_integer) 5);
      if(!(((tmp379 > 0) && (tmp378 > tmp380)) || ((tmp379 < 0) && (tmp378 < tmp380))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp378, tmp380); j += tmp379)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[183]/* cc_to_drone[3].spaceavailable DISCRETE */)  = 1;

      tmp384 = ((modelica_integer) 1); tmp385 = 1; tmp386 = ((modelica_integer) 10);
      if(!(((tmp385 > 0) && (tmp384 > tmp386)) || ((tmp385 < 0) && (tmp384 < tmp386))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp384, tmp386); i += tmp385)
        {
          tmp381 = ((modelica_integer) 1); tmp382 = 1; tmp383 = ((modelica_integer) 5);
          if(!(((tmp382 > 0) && (tmp381 > tmp383)) || ((tmp382 < 0) && (tmp381 < tmp383))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp381, tmp383); j += tmp382)
            {
              (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[31]/* cc_to_drone[3].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[45]/* cc_to_drone[3].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[38]/* cc_to_drone[3].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[27]/* $whenCondition34 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[27]/* $whenCondition34 DISCRETE */)  /* edge */))
    {
      tmp387 = Less((data->simulationInfo->integerVarsPre[31]/* cc_to_drone[3].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp387)
      {
        tmp388 = ((modelica_integer) 1); tmp389 = 1; tmp390 = ((modelica_integer) 5);
        if(!(((tmp389 > 0) && (tmp388 > tmp390)) || ((tmp389 < 0) && (tmp388 < tmp390))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp388, tmp390); j += tmp389)
          {
            (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[38]/* cc_to_drone[3].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 3) - 1) * 5 + (j-1)] ;
          }
        }

        tmp391 = ((modelica_integer) 10);
        if (tmp391 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[3].newest), 10)");}
        (data->localData[0]->integerVars[38]/* cc_to_drone[3].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[38]/* cc_to_drone[3].newest DISCRETE */) , tmp391) + ((modelica_integer) 1);

        tmp392 = ((modelica_integer) 1); tmp393 = 1; tmp394 = ((modelica_integer) 5);
        if(!(((tmp393 > 0) && (tmp392 > tmp394)) || ((tmp393 < 0) && (tmp392 < tmp394))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp392, tmp394); j += tmp393)
          {
            (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[45]/* cc_to_drone[3].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp395 = ((modelica_integer) 10);
        if (tmp395 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[3].oldest), 10)");}
        (data->localData[0]->integerVars[45]/* cc_to_drone[3].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[45]/* cc_to_drone[3].oldest DISCRETE */) , tmp395) + ((modelica_integer) 1);
      }
      else
      {
        tmp396 = ((modelica_integer) 1); tmp397 = 1; tmp398 = ((modelica_integer) 5);
        if(!(((tmp397 > 0) && (tmp396 > tmp398)) || ((tmp397 < 0) && (tmp396 < tmp398))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp396, tmp398); j += tmp397)
          {
            (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[45]/* cc_to_drone[3].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp399 = ((modelica_integer) 10);
        if (tmp399 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[3].oldest), 10)");}
        (data->localData[0]->integerVars[45]/* cc_to_drone[3].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[45]/* cc_to_drone[3].oldest DISCRETE */) , tmp399) + ((modelica_integer) 1);

        tmp400 = ((modelica_integer) 1); tmp401 = 1; tmp402 = ((modelica_integer) 5);
        if(!(((tmp401 > 0) && (tmp400 > tmp402)) || ((tmp401 < 0) && (tmp400 < tmp402))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp400, tmp402); j += tmp401)
          {
            (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[38]/* cc_to_drone[3].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 3) - 1) * 5 + (j-1)] ;
          }
        }

        tmp403 = ((modelica_integer) 10);
        if (tmp403 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[3].newest), 10)");}
        (data->localData[0]->integerVars[38]/* cc_to_drone[3].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[38]/* cc_to_drone[3].newest DISCRETE */) , tmp403) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[28]/* $whenCondition35 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[28]/* $whenCondition35 DISCRETE */)  /* edge */))
    {
      tmp404 = ((modelica_integer) 1); tmp405 = 1; tmp406 = ((modelica_integer) 5);
      if(!(((tmp405 > 0) && (tmp404 > tmp406)) || ((tmp405 < 0) && (tmp404 < tmp406))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp404, tmp406); j += tmp405)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[45]/* cc_to_drone[3].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp407 = ((modelica_integer) 10);
      if (tmp407 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[3].oldest), 10)");}
      (data->localData[0]->integerVars[45]/* cc_to_drone[3].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[45]/* cc_to_drone[3].oldest DISCRETE */) , tmp407) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[31]/* cc_to_drone[3].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[31]/* cc_to_drone[3].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp408 = GreaterEq((data->localData[0]->integerVars[31]/* cc_to_drone[3].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[162]/* cc_to_drone[3].datavailable DISCRETE */)  = tmp408;

      (data->localData[0]->booleanVars[183]/* cc_to_drone[3].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[29]/* $whenCondition36 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[29]/* $whenCondition36 DISCRETE */)  /* edge */))
    {
      tmp409 = ((modelica_integer) 1); tmp410 = 1; tmp411 = ((modelica_integer) 5);
      if(!(((tmp410 > 0) && (tmp409 > tmp411)) || ((tmp410 < 0) && (tmp409 < tmp411))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp409, tmp411); j += tmp410)
        {
          (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[38]/* cc_to_drone[3].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 3) - 1) * 5 + (j-1)] ;
        }
      }

      tmp412 = ((modelica_integer) 10);
      if (tmp412 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[3].newest), 10)");}
      (data->localData[0]->integerVars[38]/* cc_to_drone[3].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[38]/* cc_to_drone[3].newest DISCRETE */) , tmp412) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[31]/* cc_to_drone[3].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[31]/* cc_to_drone[3].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[162]/* cc_to_drone[3].datavailable DISCRETE */)  = 1;

      tmp413 = Less((data->simulationInfo->integerVarsPre[31]/* cc_to_drone[3].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[183]/* cc_to_drone[3].spaceavailable DISCRETE */)  = tmp413;

      tmp414 = ((modelica_integer) 1); tmp415 = 1; tmp416 = ((modelica_integer) 5);
      if(!(((tmp415 > 0) && (tmp414 > tmp416)) || ((tmp415 < 0) && (tmp414 < tmp416))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp414, tmp416); j += tmp415)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[45]/* cc_to_drone[3].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 625
type: SIMPLE_ASSIGN
d[3].datavailable = cc_to_drone[3].datavailable
*/
void System_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  (data->localData[0]->booleanVars[218]/* d[3].datavailable DISCRETE */)  = (data->localData[0]->booleanVars[162]/* cc_to_drone[3].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 626
type: SIMPLE_ASSIGN
cc.spaceavailable[3] = cc_to_drone[3].spaceavailable
*/
void System_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  (data->localData[0]->booleanVars[148]/* cc.spaceavailable[3] DISCRETE */)  = (data->localData[0]->booleanVars[183]/* cc_to_drone[3].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 627
type: SIMPLE_ASSIGN
cc_to_drone[7].inputdata[3] = cc.msg_to_drone[7,3]
*/
void System_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  (data->localData[0]->realVars[155]/* cc_to_drone[7].inputdata[3] variable */)  = (data->localData[0]->realVars[329]/* cc.msg_to_drone[7,3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 628
type: ALGORITHM

  cc_to_drone[7].newest := pre(cc_to_drone[7].newest);
  cc_to_drone[7].oldest := pre(cc_to_drone[7].oldest);
  cc_to_drone[7].fifosize := pre(cc_to_drone[7].fifosize);
  cc_to_drone[7].fifo[10,5] := pre(cc_to_drone[7].fifo[10,5]);
  cc_to_drone[7].fifo[10,4] := pre(cc_to_drone[7].fifo[10,4]);
  cc_to_drone[7].fifo[10,3] := pre(cc_to_drone[7].fifo[10,3]);
  cc_to_drone[7].fifo[10,2] := pre(cc_to_drone[7].fifo[10,2]);
  cc_to_drone[7].fifo[10,1] := pre(cc_to_drone[7].fifo[10,1]);
  cc_to_drone[7].fifo[9,5] := pre(cc_to_drone[7].fifo[9,5]);
  cc_to_drone[7].fifo[9,4] := pre(cc_to_drone[7].fifo[9,4]);
  cc_to_drone[7].fifo[9,3] := pre(cc_to_drone[7].fifo[9,3]);
  cc_to_drone[7].fifo[9,2] := pre(cc_to_drone[7].fifo[9,2]);
  cc_to_drone[7].fifo[9,1] := pre(cc_to_drone[7].fifo[9,1]);
  cc_to_drone[7].fifo[8,5] := pre(cc_to_drone[7].fifo[8,5]);
  cc_to_drone[7].fifo[8,4] := pre(cc_to_drone[7].fifo[8,4]);
  cc_to_drone[7].fifo[8,3] := pre(cc_to_drone[7].fifo[8,3]);
  cc_to_drone[7].fifo[8,2] := pre(cc_to_drone[7].fifo[8,2]);
  cc_to_drone[7].fifo[8,1] := pre(cc_to_drone[7].fifo[8,1]);
  cc_to_drone[7].fifo[7,5] := pre(cc_to_drone[7].fifo[7,5]);
  cc_to_drone[7].fifo[7,4] := pre(cc_to_drone[7].fifo[7,4]);
  cc_to_drone[7].fifo[7,3] := pre(cc_to_drone[7].fifo[7,3]);
  cc_to_drone[7].fifo[7,2] := pre(cc_to_drone[7].fifo[7,2]);
  cc_to_drone[7].fifo[7,1] := pre(cc_to_drone[7].fifo[7,1]);
  cc_to_drone[7].fifo[6,5] := pre(cc_to_drone[7].fifo[6,5]);
  cc_to_drone[7].fifo[6,4] := pre(cc_to_drone[7].fifo[6,4]);
  cc_to_drone[7].fifo[6,3] := pre(cc_to_drone[7].fifo[6,3]);
  cc_to_drone[7].fifo[6,2] := pre(cc_to_drone[7].fifo[6,2]);
  cc_to_drone[7].fifo[6,1] := pre(cc_to_drone[7].fifo[6,1]);
  cc_to_drone[7].fifo[5,5] := pre(cc_to_drone[7].fifo[5,5]);
  cc_to_drone[7].fifo[5,4] := pre(cc_to_drone[7].fifo[5,4]);
  cc_to_drone[7].fifo[5,3] := pre(cc_to_drone[7].fifo[5,3]);
  cc_to_drone[7].fifo[5,2] := pre(cc_to_drone[7].fifo[5,2]);
  cc_to_drone[7].fifo[5,1] := pre(cc_to_drone[7].fifo[5,1]);
  cc_to_drone[7].fifo[4,5] := pre(cc_to_drone[7].fifo[4,5]);
  cc_to_drone[7].fifo[4,4] := pre(cc_to_drone[7].fifo[4,4]);
  cc_to_drone[7].fifo[4,3] := pre(cc_to_drone[7].fifo[4,3]);
  cc_to_drone[7].fifo[4,2] := pre(cc_to_drone[7].fifo[4,2]);
  cc_to_drone[7].fifo[4,1] := pre(cc_to_drone[7].fifo[4,1]);
  cc_to_drone[7].fifo[3,5] := pre(cc_to_drone[7].fifo[3,5]);
  cc_to_drone[7].fifo[3,4] := pre(cc_to_drone[7].fifo[3,4]);
  cc_to_drone[7].fifo[3,3] := pre(cc_to_drone[7].fifo[3,3]);
  cc_to_drone[7].fifo[3,2] := pre(cc_to_drone[7].fifo[3,2]);
  cc_to_drone[7].fifo[3,1] := pre(cc_to_drone[7].fifo[3,1]);
  cc_to_drone[7].fifo[2,5] := pre(cc_to_drone[7].fifo[2,5]);
  cc_to_drone[7].fifo[2,4] := pre(cc_to_drone[7].fifo[2,4]);
  cc_to_drone[7].fifo[2,3] := pre(cc_to_drone[7].fifo[2,3]);
  cc_to_drone[7].fifo[2,2] := pre(cc_to_drone[7].fifo[2,2]);
  cc_to_drone[7].fifo[2,1] := pre(cc_to_drone[7].fifo[2,1]);
  cc_to_drone[7].fifo[1,5] := pre(cc_to_drone[7].fifo[1,5]);
  cc_to_drone[7].fifo[1,4] := pre(cc_to_drone[7].fifo[1,4]);
  cc_to_drone[7].fifo[1,3] := pre(cc_to_drone[7].fifo[1,3]);
  cc_to_drone[7].fifo[1,2] := pre(cc_to_drone[7].fifo[1,2]);
  cc_to_drone[7].fifo[1,1] := pre(cc_to_drone[7].fifo[1,1]);
  cc_to_drone[7].spaceavailable := pre(cc_to_drone[7].spaceavailable);
  cc_to_drone[7].outputdata[5] := pre(cc_to_drone[7].outputdata[5]);
  cc_to_drone[7].outputdata[4] := pre(cc_to_drone[7].outputdata[4]);
  cc_to_drone[7].outputdata[3] := pre(cc_to_drone[7].outputdata[3]);
  cc_to_drone[7].outputdata[2] := pre(cc_to_drone[7].outputdata[2]);
  cc_to_drone[7].outputdata[1] := pre(cc_to_drone[7].outputdata[1]);
  cc_to_drone[7].datavailable := pre(cc_to_drone[7].datavailable);
  $whenCondition24 := pre($whenCondition24);
  $whenCondition23 := pre($whenCondition23);
  $whenCondition22 := pre($whenCondition22);
  $whenCondition22 := pre(cc_to_drone[7].readsigint) and pre(cc_to_drone[7].writesigint);
  $whenCondition23 := pre(cc_to_drone[7].readsigint) and not pre(cc_to_drone[7].writesigint) and pre(cc_to_drone[7].fifosize) >= 1;
  $whenCondition24 := not pre(cc_to_drone[7].readsigint) and pre(cc_to_drone[7].writesigint) and pre(cc_to_drone[7].fifosize) < 10;
  when false then
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
  elsewhen $whenCondition22 then
    if pre(cc_to_drone[7].fifosize) < 10 then
      for j in 1:5 loop
        cc_to_drone[7].fifo[pre(cc_to_drone[7].newest),j] := cc_to_drone[7].inputdata[j];
      end for;
      cc_to_drone[7].newest := mod(pre(cc_to_drone[7].newest), 10) + 1;
      for j in 1:5 loop
        cc_to_drone[7].outputdata[j] := cc_to_drone[7].fifo[pre(cc_to_drone[7].oldest),j];
      end for;
      cc_to_drone[7].oldest := mod(pre(cc_to_drone[7].oldest), 10) + 1;
    else
      for j in 1:5 loop
        cc_to_drone[7].outputdata[j] := cc_to_drone[7].fifo[pre(cc_to_drone[7].oldest),j];
      end for;
      cc_to_drone[7].oldest := mod(pre(cc_to_drone[7].oldest), 10) + 1;
      for j in 1:5 loop
        cc_to_drone[7].fifo[pre(cc_to_drone[7].newest),j] := cc_to_drone[7].inputdata[j];
      end for;
      cc_to_drone[7].newest := mod(pre(cc_to_drone[7].newest), 10) + 1;
    end if;
  elsewhen $whenCondition23 then
    for j in 1:5 loop
      cc_to_drone[7].outputdata[j] := cc_to_drone[7].fifo[pre(cc_to_drone[7].oldest),j];
    end for;
    cc_to_drone[7].oldest := mod(pre(cc_to_drone[7].oldest), 10) + 1;
    cc_to_drone[7].fifosize := pre(cc_to_drone[7].fifosize) - 1;
    cc_to_drone[7].datavailable := cc_to_drone[7].fifosize >= 1;
    cc_to_drone[7].spaceavailable := true;
  elsewhen $whenCondition24 then
    for j in 1:5 loop
      cc_to_drone[7].fifo[pre(cc_to_drone[7].newest),j] := cc_to_drone[7].inputdata[j];
    end for;
    cc_to_drone[7].newest := mod(pre(cc_to_drone[7].newest), 10) + 1;
    cc_to_drone[7].fifosize := pre(cc_to_drone[7].fifosize) + 1;
    cc_to_drone[7].datavailable := true;
    cc_to_drone[7].spaceavailable := pre(cc_to_drone[7].fifosize) < 10;
    for j in 1:5 loop
      cc_to_drone[7].outputdata[j] := cc_to_drone[7].fifo[pre(cc_to_drone[7].oldest),j];
    end for;
  end when;
*/
void System_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  modelica_boolean tmp417;
  modelica_boolean tmp418;
  modelica_integer tmp419;
  modelica_integer tmp420;
  modelica_integer tmp421;
  modelica_integer tmp422;
  modelica_integer tmp423;
  modelica_integer tmp424;
  modelica_integer tmp425;
  modelica_integer tmp426;
  modelica_integer tmp427;
  modelica_boolean tmp428;
  modelica_integer tmp429;
  modelica_integer tmp430;
  modelica_integer tmp431;
  modelica_integer tmp432;
  modelica_integer tmp433;
  modelica_integer tmp434;
  modelica_integer tmp435;
  modelica_integer tmp436;
  modelica_integer tmp437;
  modelica_integer tmp438;
  modelica_integer tmp439;
  modelica_integer tmp440;
  modelica_integer tmp441;
  modelica_integer tmp442;
  modelica_integer tmp443;
  modelica_integer tmp444;
  modelica_integer tmp445;
  modelica_integer tmp446;
  modelica_integer tmp447;
  modelica_integer tmp448;
  modelica_boolean tmp449;
  modelica_integer tmp450;
  modelica_integer tmp451;
  modelica_integer tmp452;
  modelica_integer tmp453;
  modelica_boolean tmp454;
  modelica_integer tmp455;
  modelica_integer tmp456;
  modelica_integer tmp457;
  (data->localData[0]->integerVars[42]/* cc_to_drone[7].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[42]/* cc_to_drone[7].newest DISCRETE */) ;

  (data->localData[0]->integerVars[49]/* cc_to_drone[7].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[49]/* cc_to_drone[7].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[35]/* cc_to_drone[7].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[35]/* cc_to_drone[7].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[734]/* cc_to_drone[7].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[734]/* cc_to_drone[7].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[733]/* cc_to_drone[7].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[733]/* cc_to_drone[7].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[732]/* cc_to_drone[7].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[732]/* cc_to_drone[7].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[731]/* cc_to_drone[7].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[731]/* cc_to_drone[7].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[730]/* cc_to_drone[7].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[730]/* cc_to_drone[7].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[729]/* cc_to_drone[7].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[729]/* cc_to_drone[7].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[728]/* cc_to_drone[7].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[728]/* cc_to_drone[7].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[727]/* cc_to_drone[7].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[727]/* cc_to_drone[7].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[726]/* cc_to_drone[7].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[726]/* cc_to_drone[7].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[725]/* cc_to_drone[7].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[725]/* cc_to_drone[7].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[724]/* cc_to_drone[7].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[724]/* cc_to_drone[7].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[723]/* cc_to_drone[7].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[723]/* cc_to_drone[7].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[722]/* cc_to_drone[7].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[722]/* cc_to_drone[7].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[721]/* cc_to_drone[7].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[721]/* cc_to_drone[7].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[720]/* cc_to_drone[7].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[720]/* cc_to_drone[7].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[719]/* cc_to_drone[7].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[719]/* cc_to_drone[7].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[718]/* cc_to_drone[7].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[718]/* cc_to_drone[7].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[717]/* cc_to_drone[7].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[717]/* cc_to_drone[7].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[716]/* cc_to_drone[7].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[716]/* cc_to_drone[7].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[715]/* cc_to_drone[7].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[715]/* cc_to_drone[7].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[714]/* cc_to_drone[7].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[714]/* cc_to_drone[7].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[713]/* cc_to_drone[7].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[713]/* cc_to_drone[7].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[712]/* cc_to_drone[7].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[712]/* cc_to_drone[7].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[711]/* cc_to_drone[7].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[711]/* cc_to_drone[7].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[710]/* cc_to_drone[7].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[710]/* cc_to_drone[7].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[709]/* cc_to_drone[7].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[709]/* cc_to_drone[7].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[708]/* cc_to_drone[7].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[708]/* cc_to_drone[7].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[707]/* cc_to_drone[7].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[707]/* cc_to_drone[7].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[706]/* cc_to_drone[7].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[706]/* cc_to_drone[7].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[705]/* cc_to_drone[7].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[705]/* cc_to_drone[7].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[704]/* cc_to_drone[7].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[704]/* cc_to_drone[7].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[703]/* cc_to_drone[7].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[703]/* cc_to_drone[7].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[702]/* cc_to_drone[7].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[702]/* cc_to_drone[7].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[701]/* cc_to_drone[7].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[701]/* cc_to_drone[7].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[700]/* cc_to_drone[7].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[700]/* cc_to_drone[7].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[699]/* cc_to_drone[7].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[699]/* cc_to_drone[7].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[698]/* cc_to_drone[7].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[698]/* cc_to_drone[7].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[697]/* cc_to_drone[7].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[697]/* cc_to_drone[7].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[696]/* cc_to_drone[7].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[696]/* cc_to_drone[7].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[695]/* cc_to_drone[7].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[695]/* cc_to_drone[7].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[694]/* cc_to_drone[7].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[694]/* cc_to_drone[7].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[693]/* cc_to_drone[7].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[693]/* cc_to_drone[7].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[692]/* cc_to_drone[7].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[692]/* cc_to_drone[7].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[691]/* cc_to_drone[7].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[691]/* cc_to_drone[7].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[690]/* cc_to_drone[7].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[690]/* cc_to_drone[7].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[689]/* cc_to_drone[7].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[689]/* cc_to_drone[7].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[688]/* cc_to_drone[7].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[688]/* cc_to_drone[7].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[687]/* cc_to_drone[7].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[687]/* cc_to_drone[7].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[686]/* cc_to_drone[7].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[686]/* cc_to_drone[7].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[685]/* cc_to_drone[7].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[685]/* cc_to_drone[7].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[187]/* cc_to_drone[7].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[187]/* cc_to_drone[7].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[769]/* cc_to_drone[7].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[769]/* cc_to_drone[7].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[768]/* cc_to_drone[7].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[768]/* cc_to_drone[7].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[767]/* cc_to_drone[7].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[767]/* cc_to_drone[7].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[766]/* cc_to_drone[7].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[766]/* cc_to_drone[7].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[765]/* cc_to_drone[7].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[765]/* cc_to_drone[7].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[166]/* cc_to_drone[7].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[166]/* cc_to_drone[7].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[16]/* $whenCondition24 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[16]/* $whenCondition24 DISCRETE */) ;

  (data->localData[0]->booleanVars[15]/* $whenCondition23 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[15]/* $whenCondition23 DISCRETE */) ;

  (data->localData[0]->booleanVars[14]/* $whenCondition22 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[14]/* $whenCondition22 DISCRETE */) ;

  (data->localData[0]->booleanVars[14]/* $whenCondition22 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[173]/* cc_to_drone[7].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[194]/* cc_to_drone[7].writesigint DISCRETE */) );

  tmp417 = GreaterEq((data->simulationInfo->integerVarsPre[35]/* cc_to_drone[7].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[15]/* $whenCondition23 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[173]/* cc_to_drone[7].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[194]/* cc_to_drone[7].writesigint DISCRETE */) )) && tmp417);

  tmp418 = Less((data->simulationInfo->integerVarsPre[35]/* cc_to_drone[7].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[16]/* $whenCondition24 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[173]/* cc_to_drone[7].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[194]/* cc_to_drone[7].writesigint DISCRETE */) ) && tmp418);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[166]/* cc_to_drone[7].datavailable DISCRETE */)  = 0;

      tmp419 = ((modelica_integer) 1); tmp420 = 1; tmp421 = ((modelica_integer) 5);
      if(!(((tmp420 > 0) && (tmp419 > tmp421)) || ((tmp420 < 0) && (tmp419 < tmp421))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp419, tmp421); j += tmp420)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 7) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[187]/* cc_to_drone[7].spaceavailable DISCRETE */)  = 1;

      tmp425 = ((modelica_integer) 1); tmp426 = 1; tmp427 = ((modelica_integer) 10);
      if(!(((tmp426 > 0) && (tmp425 > tmp427)) || ((tmp426 < 0) && (tmp425 < tmp427))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp425, tmp427); i += tmp426)
        {
          tmp422 = ((modelica_integer) 1); tmp423 = 1; tmp424 = ((modelica_integer) 5);
          if(!(((tmp423 > 0) && (tmp422 > tmp424)) || ((tmp423 < 0) && (tmp422 < tmp424))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp422, tmp424); j += tmp423)
            {
              (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 7) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[35]/* cc_to_drone[7].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[49]/* cc_to_drone[7].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[42]/* cc_to_drone[7].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[14]/* $whenCondition22 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[14]/* $whenCondition22 DISCRETE */)  /* edge */))
    {
      tmp428 = Less((data->simulationInfo->integerVarsPre[35]/* cc_to_drone[7].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp428)
      {
        tmp429 = ((modelica_integer) 1); tmp430 = 1; tmp431 = ((modelica_integer) 5);
        if(!(((tmp430 > 0) && (tmp429 > tmp431)) || ((tmp430 < 0) && (tmp429 < tmp431))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp429, tmp431); j += tmp430)
          {
            (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 7) - 1) * 10 + ((data->simulationInfo->integerVarsPre[42]/* cc_to_drone[7].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 7) - 1) * 5 + (j-1)] ;
          }
        }

        tmp432 = ((modelica_integer) 10);
        if (tmp432 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[7].newest), 10)");}
        (data->localData[0]->integerVars[42]/* cc_to_drone[7].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[42]/* cc_to_drone[7].newest DISCRETE */) , tmp432) + ((modelica_integer) 1);

        tmp433 = ((modelica_integer) 1); tmp434 = 1; tmp435 = ((modelica_integer) 5);
        if(!(((tmp434 > 0) && (tmp433 > tmp435)) || ((tmp434 < 0) && (tmp433 < tmp435))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp433, tmp435); j += tmp434)
          {
            (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 7) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 7) - 1) * 10 + ((data->simulationInfo->integerVarsPre[49]/* cc_to_drone[7].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp436 = ((modelica_integer) 10);
        if (tmp436 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[7].oldest), 10)");}
        (data->localData[0]->integerVars[49]/* cc_to_drone[7].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[49]/* cc_to_drone[7].oldest DISCRETE */) , tmp436) + ((modelica_integer) 1);
      }
      else
      {
        tmp437 = ((modelica_integer) 1); tmp438 = 1; tmp439 = ((modelica_integer) 5);
        if(!(((tmp438 > 0) && (tmp437 > tmp439)) || ((tmp438 < 0) && (tmp437 < tmp439))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp437, tmp439); j += tmp438)
          {
            (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 7) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 7) - 1) * 10 + ((data->simulationInfo->integerVarsPre[49]/* cc_to_drone[7].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp440 = ((modelica_integer) 10);
        if (tmp440 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[7].oldest), 10)");}
        (data->localData[0]->integerVars[49]/* cc_to_drone[7].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[49]/* cc_to_drone[7].oldest DISCRETE */) , tmp440) + ((modelica_integer) 1);

        tmp441 = ((modelica_integer) 1); tmp442 = 1; tmp443 = ((modelica_integer) 5);
        if(!(((tmp442 > 0) && (tmp441 > tmp443)) || ((tmp442 < 0) && (tmp441 < tmp443))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp441, tmp443); j += tmp442)
          {
            (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 7) - 1) * 10 + ((data->simulationInfo->integerVarsPre[42]/* cc_to_drone[7].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 7) - 1) * 5 + (j-1)] ;
          }
        }

        tmp444 = ((modelica_integer) 10);
        if (tmp444 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[7].newest), 10)");}
        (data->localData[0]->integerVars[42]/* cc_to_drone[7].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[42]/* cc_to_drone[7].newest DISCRETE */) , tmp444) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[15]/* $whenCondition23 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[15]/* $whenCondition23 DISCRETE */)  /* edge */))
    {
      tmp445 = ((modelica_integer) 1); tmp446 = 1; tmp447 = ((modelica_integer) 5);
      if(!(((tmp446 > 0) && (tmp445 > tmp447)) || ((tmp446 < 0) && (tmp445 < tmp447))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp445, tmp447); j += tmp446)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 7) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 7) - 1) * 10 + ((data->simulationInfo->integerVarsPre[49]/* cc_to_drone[7].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp448 = ((modelica_integer) 10);
      if (tmp448 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[7].oldest), 10)");}
      (data->localData[0]->integerVars[49]/* cc_to_drone[7].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[49]/* cc_to_drone[7].oldest DISCRETE */) , tmp448) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[35]/* cc_to_drone[7].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[35]/* cc_to_drone[7].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp449 = GreaterEq((data->localData[0]->integerVars[35]/* cc_to_drone[7].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[166]/* cc_to_drone[7].datavailable DISCRETE */)  = tmp449;

      (data->localData[0]->booleanVars[187]/* cc_to_drone[7].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[16]/* $whenCondition24 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[16]/* $whenCondition24 DISCRETE */)  /* edge */))
    {
      tmp450 = ((modelica_integer) 1); tmp451 = 1; tmp452 = ((modelica_integer) 5);
      if(!(((tmp451 > 0) && (tmp450 > tmp452)) || ((tmp451 < 0) && (tmp450 < tmp452))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp450, tmp452); j += tmp451)
        {
          (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 7) - 1) * 10 + ((data->simulationInfo->integerVarsPre[42]/* cc_to_drone[7].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 7) - 1) * 5 + (j-1)] ;
        }
      }

      tmp453 = ((modelica_integer) 10);
      if (tmp453 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[7].newest), 10)");}
      (data->localData[0]->integerVars[42]/* cc_to_drone[7].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[42]/* cc_to_drone[7].newest DISCRETE */) , tmp453) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[35]/* cc_to_drone[7].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[35]/* cc_to_drone[7].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[166]/* cc_to_drone[7].datavailable DISCRETE */)  = 1;

      tmp454 = Less((data->simulationInfo->integerVarsPre[35]/* cc_to_drone[7].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[187]/* cc_to_drone[7].spaceavailable DISCRETE */)  = tmp454;

      tmp455 = ((modelica_integer) 1); tmp456 = 1; tmp457 = ((modelica_integer) 5);
      if(!(((tmp456 > 0) && (tmp455 > tmp457)) || ((tmp456 < 0) && (tmp455 < tmp457))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp455, tmp457); j += tmp456)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 7) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 7) - 1) * 10 + ((data->simulationInfo->integerVarsPre[49]/* cc_to_drone[7].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 629
type: SIMPLE_ASSIGN
d[7].datavailable = cc_to_drone[7].datavailable
*/
void System_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  (data->localData[0]->booleanVars[222]/* d[7].datavailable DISCRETE */)  = (data->localData[0]->booleanVars[166]/* cc_to_drone[7].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 630
type: SIMPLE_ASSIGN
cc.spaceavailable[7] = cc_to_drone[7].spaceavailable
*/
void System_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  (data->localData[0]->booleanVars[152]/* cc.spaceavailable[7] DISCRETE */)  = (data->localData[0]->booleanVars[187]/* cc_to_drone[7].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 631
type: SIMPLE_ASSIGN
cc_to_drone[1].inputdata[4] = cc.msg_to_drone[1,4]
*/
void System_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  (data->localData[0]->realVars[126]/* cc_to_drone[1].inputdata[4] variable */)  = (data->localData[0]->realVars[300]/* cc.msg_to_drone[1,4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 632
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
  $whenCondition42 := pre($whenCondition42);
  $whenCondition41 := pre($whenCondition41);
  $whenCondition40 := pre($whenCondition40);
  $whenCondition40 := pre(cc_to_drone[1].readsigint) and pre(cc_to_drone[1].writesigint);
  $whenCondition41 := pre(cc_to_drone[1].readsigint) and not pre(cc_to_drone[1].writesigint) and pre(cc_to_drone[1].fifosize) >= 1;
  $whenCondition42 := not pre(cc_to_drone[1].readsigint) and pre(cc_to_drone[1].writesigint) and pre(cc_to_drone[1].fifosize) < 10;
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
  elsewhen $whenCondition40 then
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
  elsewhen $whenCondition41 then
    for j in 1:5 loop
      cc_to_drone[1].outputdata[j] := cc_to_drone[1].fifo[pre(cc_to_drone[1].oldest),j];
    end for;
    cc_to_drone[1].oldest := mod(pre(cc_to_drone[1].oldest), 10) + 1;
    cc_to_drone[1].fifosize := pre(cc_to_drone[1].fifosize) - 1;
    cc_to_drone[1].datavailable := cc_to_drone[1].fifosize >= 1;
    cc_to_drone[1].spaceavailable := true;
  elsewhen $whenCondition42 then
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
void System_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  modelica_boolean tmp458;
  modelica_boolean tmp459;
  modelica_integer tmp460;
  modelica_integer tmp461;
  modelica_integer tmp462;
  modelica_integer tmp463;
  modelica_integer tmp464;
  modelica_integer tmp465;
  modelica_integer tmp466;
  modelica_integer tmp467;
  modelica_integer tmp468;
  modelica_boolean tmp469;
  modelica_integer tmp470;
  modelica_integer tmp471;
  modelica_integer tmp472;
  modelica_integer tmp473;
  modelica_integer tmp474;
  modelica_integer tmp475;
  modelica_integer tmp476;
  modelica_integer tmp477;
  modelica_integer tmp478;
  modelica_integer tmp479;
  modelica_integer tmp480;
  modelica_integer tmp481;
  modelica_integer tmp482;
  modelica_integer tmp483;
  modelica_integer tmp484;
  modelica_integer tmp485;
  modelica_integer tmp486;
  modelica_integer tmp487;
  modelica_integer tmp488;
  modelica_integer tmp489;
  modelica_boolean tmp490;
  modelica_integer tmp491;
  modelica_integer tmp492;
  modelica_integer tmp493;
  modelica_integer tmp494;
  modelica_boolean tmp495;
  modelica_integer tmp496;
  modelica_integer tmp497;
  modelica_integer tmp498;
  (data->localData[0]->integerVars[36]/* cc_to_drone[1].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[36]/* cc_to_drone[1].newest DISCRETE */) ;

  (data->localData[0]->integerVars[43]/* cc_to_drone[1].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[43]/* cc_to_drone[1].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[29]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[29]/* cc_to_drone[1].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[434]/* cc_to_drone[1].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[434]/* cc_to_drone[1].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[433]/* cc_to_drone[1].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[433]/* cc_to_drone[1].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[432]/* cc_to_drone[1].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[432]/* cc_to_drone[1].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[431]/* cc_to_drone[1].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[431]/* cc_to_drone[1].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[430]/* cc_to_drone[1].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[430]/* cc_to_drone[1].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[429]/* cc_to_drone[1].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[429]/* cc_to_drone[1].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[428]/* cc_to_drone[1].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[428]/* cc_to_drone[1].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[427]/* cc_to_drone[1].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[427]/* cc_to_drone[1].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[426]/* cc_to_drone[1].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[426]/* cc_to_drone[1].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[425]/* cc_to_drone[1].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[425]/* cc_to_drone[1].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[424]/* cc_to_drone[1].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[424]/* cc_to_drone[1].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[423]/* cc_to_drone[1].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[423]/* cc_to_drone[1].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[422]/* cc_to_drone[1].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[422]/* cc_to_drone[1].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[421]/* cc_to_drone[1].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[421]/* cc_to_drone[1].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[420]/* cc_to_drone[1].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[420]/* cc_to_drone[1].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[419]/* cc_to_drone[1].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[419]/* cc_to_drone[1].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[418]/* cc_to_drone[1].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[418]/* cc_to_drone[1].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[417]/* cc_to_drone[1].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[417]/* cc_to_drone[1].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[416]/* cc_to_drone[1].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[416]/* cc_to_drone[1].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[415]/* cc_to_drone[1].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[415]/* cc_to_drone[1].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[414]/* cc_to_drone[1].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[414]/* cc_to_drone[1].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[413]/* cc_to_drone[1].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[413]/* cc_to_drone[1].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[412]/* cc_to_drone[1].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[412]/* cc_to_drone[1].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[411]/* cc_to_drone[1].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[411]/* cc_to_drone[1].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[410]/* cc_to_drone[1].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[410]/* cc_to_drone[1].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[409]/* cc_to_drone[1].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[409]/* cc_to_drone[1].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[408]/* cc_to_drone[1].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[408]/* cc_to_drone[1].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[407]/* cc_to_drone[1].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[407]/* cc_to_drone[1].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[406]/* cc_to_drone[1].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[406]/* cc_to_drone[1].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[405]/* cc_to_drone[1].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[405]/* cc_to_drone[1].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[404]/* cc_to_drone[1].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[404]/* cc_to_drone[1].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[403]/* cc_to_drone[1].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[403]/* cc_to_drone[1].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[402]/* cc_to_drone[1].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[402]/* cc_to_drone[1].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[401]/* cc_to_drone[1].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[401]/* cc_to_drone[1].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[400]/* cc_to_drone[1].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[400]/* cc_to_drone[1].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[399]/* cc_to_drone[1].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[399]/* cc_to_drone[1].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[398]/* cc_to_drone[1].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[398]/* cc_to_drone[1].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[397]/* cc_to_drone[1].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[397]/* cc_to_drone[1].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[396]/* cc_to_drone[1].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[396]/* cc_to_drone[1].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[395]/* cc_to_drone[1].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[395]/* cc_to_drone[1].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[394]/* cc_to_drone[1].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[394]/* cc_to_drone[1].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[393]/* cc_to_drone[1].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[393]/* cc_to_drone[1].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[392]/* cc_to_drone[1].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[392]/* cc_to_drone[1].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[391]/* cc_to_drone[1].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[391]/* cc_to_drone[1].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[390]/* cc_to_drone[1].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[390]/* cc_to_drone[1].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[389]/* cc_to_drone[1].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[389]/* cc_to_drone[1].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[388]/* cc_to_drone[1].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[388]/* cc_to_drone[1].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[387]/* cc_to_drone[1].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[387]/* cc_to_drone[1].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[386]/* cc_to_drone[1].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[386]/* cc_to_drone[1].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[181]/* cc_to_drone[1].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[181]/* cc_to_drone[1].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[739]/* cc_to_drone[1].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[739]/* cc_to_drone[1].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[738]/* cc_to_drone[1].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[738]/* cc_to_drone[1].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[737]/* cc_to_drone[1].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[737]/* cc_to_drone[1].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[736]/* cc_to_drone[1].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[736]/* cc_to_drone[1].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[160]/* cc_to_drone[1].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[160]/* cc_to_drone[1].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[36]/* $whenCondition42 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[36]/* $whenCondition42 DISCRETE */) ;

  (data->localData[0]->booleanVars[35]/* $whenCondition41 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[35]/* $whenCondition41 DISCRETE */) ;

  (data->localData[0]->booleanVars[34]/* $whenCondition40 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[34]/* $whenCondition40 DISCRETE */) ;

  (data->localData[0]->booleanVars[34]/* $whenCondition40 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[167]/* cc_to_drone[1].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[188]/* cc_to_drone[1].writesigint DISCRETE */) );

  tmp458 = GreaterEq((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[35]/* $whenCondition41 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[167]/* cc_to_drone[1].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[188]/* cc_to_drone[1].writesigint DISCRETE */) )) && tmp458);

  tmp459 = Less((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[36]/* $whenCondition42 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[167]/* cc_to_drone[1].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[188]/* cc_to_drone[1].writesigint DISCRETE */) ) && tmp459);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[160]/* cc_to_drone[1].datavailable DISCRETE */)  = 0;

      tmp460 = ((modelica_integer) 1); tmp461 = 1; tmp462 = ((modelica_integer) 5);
      if(!(((tmp461 > 0) && (tmp460 > tmp462)) || ((tmp461 < 0) && (tmp460 < tmp462))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp460, tmp462); j += tmp461)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[181]/* cc_to_drone[1].spaceavailable DISCRETE */)  = 1;

      tmp466 = ((modelica_integer) 1); tmp467 = 1; tmp468 = ((modelica_integer) 10);
      if(!(((tmp467 > 0) && (tmp466 > tmp468)) || ((tmp467 < 0) && (tmp466 < tmp468))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp466, tmp468); i += tmp467)
        {
          tmp463 = ((modelica_integer) 1); tmp464 = 1; tmp465 = ((modelica_integer) 5);
          if(!(((tmp464 > 0) && (tmp463 > tmp465)) || ((tmp464 < 0) && (tmp463 < tmp465))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp463, tmp465); j += tmp464)
            {
              (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[29]/* cc_to_drone[1].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[43]/* cc_to_drone[1].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[36]/* cc_to_drone[1].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[34]/* $whenCondition40 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[34]/* $whenCondition40 DISCRETE */)  /* edge */))
    {
      tmp469 = Less((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp469)
      {
        tmp470 = ((modelica_integer) 1); tmp471 = 1; tmp472 = ((modelica_integer) 5);
        if(!(((tmp471 > 0) && (tmp470 > tmp472)) || ((tmp471 < 0) && (tmp470 < tmp472))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp470, tmp472); j += tmp471)
          {
            (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[36]/* cc_to_drone[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
          }
        }

        tmp473 = ((modelica_integer) 10);
        if (tmp473 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].newest), 10)");}
        (data->localData[0]->integerVars[36]/* cc_to_drone[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[36]/* cc_to_drone[1].newest DISCRETE */) , tmp473) + ((modelica_integer) 1);

        tmp474 = ((modelica_integer) 1); tmp475 = 1; tmp476 = ((modelica_integer) 5);
        if(!(((tmp475 > 0) && (tmp474 > tmp476)) || ((tmp475 < 0) && (tmp474 < tmp476))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp474, tmp476); j += tmp475)
          {
            (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[43]/* cc_to_drone[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp477 = ((modelica_integer) 10);
        if (tmp477 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].oldest), 10)");}
        (data->localData[0]->integerVars[43]/* cc_to_drone[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[43]/* cc_to_drone[1].oldest DISCRETE */) , tmp477) + ((modelica_integer) 1);
      }
      else
      {
        tmp478 = ((modelica_integer) 1); tmp479 = 1; tmp480 = ((modelica_integer) 5);
        if(!(((tmp479 > 0) && (tmp478 > tmp480)) || ((tmp479 < 0) && (tmp478 < tmp480))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp478, tmp480); j += tmp479)
          {
            (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[43]/* cc_to_drone[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp481 = ((modelica_integer) 10);
        if (tmp481 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].oldest), 10)");}
        (data->localData[0]->integerVars[43]/* cc_to_drone[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[43]/* cc_to_drone[1].oldest DISCRETE */) , tmp481) + ((modelica_integer) 1);

        tmp482 = ((modelica_integer) 1); tmp483 = 1; tmp484 = ((modelica_integer) 5);
        if(!(((tmp483 > 0) && (tmp482 > tmp484)) || ((tmp483 < 0) && (tmp482 < tmp484))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp482, tmp484); j += tmp483)
          {
            (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[36]/* cc_to_drone[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
          }
        }

        tmp485 = ((modelica_integer) 10);
        if (tmp485 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].newest), 10)");}
        (data->localData[0]->integerVars[36]/* cc_to_drone[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[36]/* cc_to_drone[1].newest DISCRETE */) , tmp485) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[35]/* $whenCondition41 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[35]/* $whenCondition41 DISCRETE */)  /* edge */))
    {
      tmp486 = ((modelica_integer) 1); tmp487 = 1; tmp488 = ((modelica_integer) 5);
      if(!(((tmp487 > 0) && (tmp486 > tmp488)) || ((tmp487 < 0) && (tmp486 < tmp488))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp486, tmp488); j += tmp487)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[43]/* cc_to_drone[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp489 = ((modelica_integer) 10);
      if (tmp489 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].oldest), 10)");}
      (data->localData[0]->integerVars[43]/* cc_to_drone[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[43]/* cc_to_drone[1].oldest DISCRETE */) , tmp489) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[29]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[29]/* cc_to_drone[1].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp490 = GreaterEq((data->localData[0]->integerVars[29]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[160]/* cc_to_drone[1].datavailable DISCRETE */)  = tmp490;

      (data->localData[0]->booleanVars[181]/* cc_to_drone[1].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[36]/* $whenCondition42 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[36]/* $whenCondition42 DISCRETE */)  /* edge */))
    {
      tmp491 = ((modelica_integer) 1); tmp492 = 1; tmp493 = ((modelica_integer) 5);
      if(!(((tmp492 > 0) && (tmp491 > tmp493)) || ((tmp492 < 0) && (tmp491 < tmp493))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp491, tmp493); j += tmp492)
        {
          (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[36]/* cc_to_drone[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
        }
      }

      tmp494 = ((modelica_integer) 10);
      if (tmp494 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[1].newest), 10)");}
      (data->localData[0]->integerVars[36]/* cc_to_drone[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[36]/* cc_to_drone[1].newest DISCRETE */) , tmp494) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[29]/* cc_to_drone[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[29]/* cc_to_drone[1].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[160]/* cc_to_drone[1].datavailable DISCRETE */)  = 1;

      tmp495 = Less((data->simulationInfo->integerVarsPre[29]/* cc_to_drone[1].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[181]/* cc_to_drone[1].spaceavailable DISCRETE */)  = tmp495;

      tmp496 = ((modelica_integer) 1); tmp497 = 1; tmp498 = ((modelica_integer) 5);
      if(!(((tmp497 > 0) && (tmp496 > tmp498)) || ((tmp497 < 0) && (tmp496 < tmp498))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp496, tmp498); j += tmp497)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[43]/* cc_to_drone[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 633
type: SIMPLE_ASSIGN
d[1].datavailable = cc_to_drone[1].datavailable
*/
void System_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  (data->localData[0]->booleanVars[216]/* d[1].datavailable DISCRETE */)  = (data->localData[0]->booleanVars[160]/* cc_to_drone[1].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 634
type: SIMPLE_ASSIGN
cc.spaceavailable[1] = cc_to_drone[1].spaceavailable
*/
void System_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  (data->localData[0]->booleanVars[146]/* cc.spaceavailable[1] DISCRETE */)  = (data->localData[0]->booleanVars[181]/* cc_to_drone[1].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 635
type: SIMPLE_ASSIGN
drone_to_cc[7].readsignal = cc.readsignal[7]
*/
void System_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  (data->localData[0]->booleanVars[264]/* drone_to_cc[7].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[138]/* cc.readsignal[7] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 636
type: SIMPLE_ASSIGN
drone_to_cc[7].readsigint = not pre(drone_to_cc[7].readsignal) == drone_to_cc[7].readsignal
*/
void System_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  (data->localData[0]->booleanVars[257]/* drone_to_cc[7].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[264]/* drone_to_cc[7].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[264]/* drone_to_cc[7].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[264]/* drone_to_cc[7].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[264]/* drone_to_cc[7].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 637
type: SIMPLE_ASSIGN
cc_to_drone[2].writesignal = cc.writesignal[2]
*/
void System_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  (data->localData[0]->booleanVars[196]/* cc_to_drone[2].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[154]/* cc.writesignal[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 638
type: SIMPLE_ASSIGN
cc_to_drone[2].writesigint = not pre(cc_to_drone[2].writesignal) == cc_to_drone[2].writesignal
*/
void System_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  (data->localData[0]->booleanVars[189]/* cc_to_drone[2].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[196]/* cc_to_drone[2].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[196]/* cc_to_drone[2].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[196]/* cc_to_drone[2].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[196]/* cc_to_drone[2].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 639
type: SIMPLE_ASSIGN
cc_to_drone[5].writesignal = cc.writesignal[5]
*/
void System_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  (data->localData[0]->booleanVars[199]/* cc_to_drone[5].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[157]/* cc.writesignal[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 640
type: SIMPLE_ASSIGN
cc_to_drone[5].writesigint = not pre(cc_to_drone[5].writesignal) == cc_to_drone[5].writesignal
*/
void System_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  (data->localData[0]->booleanVars[192]/* cc_to_drone[5].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[199]/* cc_to_drone[5].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[199]/* cc_to_drone[5].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[199]/* cc_to_drone[5].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[199]/* cc_to_drone[5].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 641
type: SIMPLE_ASSIGN
cc_to_drone[6].inputdata[3] = cc.msg_to_drone[6,3]
*/
void System_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  (data->localData[0]->realVars[150]/* cc_to_drone[6].inputdata[3] variable */)  = (data->localData[0]->realVars[324]/* cc.msg_to_drone[6,3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 642
type: ALGORITHM

  cc_to_drone[6].newest := pre(cc_to_drone[6].newest);
  cc_to_drone[6].oldest := pre(cc_to_drone[6].oldest);
  cc_to_drone[6].fifosize := pre(cc_to_drone[6].fifosize);
  cc_to_drone[6].fifo[10,5] := pre(cc_to_drone[6].fifo[10,5]);
  cc_to_drone[6].fifo[10,4] := pre(cc_to_drone[6].fifo[10,4]);
  cc_to_drone[6].fifo[10,3] := pre(cc_to_drone[6].fifo[10,3]);
  cc_to_drone[6].fifo[10,2] := pre(cc_to_drone[6].fifo[10,2]);
  cc_to_drone[6].fifo[10,1] := pre(cc_to_drone[6].fifo[10,1]);
  cc_to_drone[6].fifo[9,5] := pre(cc_to_drone[6].fifo[9,5]);
  cc_to_drone[6].fifo[9,4] := pre(cc_to_drone[6].fifo[9,4]);
  cc_to_drone[6].fifo[9,3] := pre(cc_to_drone[6].fifo[9,3]);
  cc_to_drone[6].fifo[9,2] := pre(cc_to_drone[6].fifo[9,2]);
  cc_to_drone[6].fifo[9,1] := pre(cc_to_drone[6].fifo[9,1]);
  cc_to_drone[6].fifo[8,5] := pre(cc_to_drone[6].fifo[8,5]);
  cc_to_drone[6].fifo[8,4] := pre(cc_to_drone[6].fifo[8,4]);
  cc_to_drone[6].fifo[8,3] := pre(cc_to_drone[6].fifo[8,3]);
  cc_to_drone[6].fifo[8,2] := pre(cc_to_drone[6].fifo[8,2]);
  cc_to_drone[6].fifo[8,1] := pre(cc_to_drone[6].fifo[8,1]);
  cc_to_drone[6].fifo[7,5] := pre(cc_to_drone[6].fifo[7,5]);
  cc_to_drone[6].fifo[7,4] := pre(cc_to_drone[6].fifo[7,4]);
  cc_to_drone[6].fifo[7,3] := pre(cc_to_drone[6].fifo[7,3]);
  cc_to_drone[6].fifo[7,2] := pre(cc_to_drone[6].fifo[7,2]);
  cc_to_drone[6].fifo[7,1] := pre(cc_to_drone[6].fifo[7,1]);
  cc_to_drone[6].fifo[6,5] := pre(cc_to_drone[6].fifo[6,5]);
  cc_to_drone[6].fifo[6,4] := pre(cc_to_drone[6].fifo[6,4]);
  cc_to_drone[6].fifo[6,3] := pre(cc_to_drone[6].fifo[6,3]);
  cc_to_drone[6].fifo[6,2] := pre(cc_to_drone[6].fifo[6,2]);
  cc_to_drone[6].fifo[6,1] := pre(cc_to_drone[6].fifo[6,1]);
  cc_to_drone[6].fifo[5,5] := pre(cc_to_drone[6].fifo[5,5]);
  cc_to_drone[6].fifo[5,4] := pre(cc_to_drone[6].fifo[5,4]);
  cc_to_drone[6].fifo[5,3] := pre(cc_to_drone[6].fifo[5,3]);
  cc_to_drone[6].fifo[5,2] := pre(cc_to_drone[6].fifo[5,2]);
  cc_to_drone[6].fifo[5,1] := pre(cc_to_drone[6].fifo[5,1]);
  cc_to_drone[6].fifo[4,5] := pre(cc_to_drone[6].fifo[4,5]);
  cc_to_drone[6].fifo[4,4] := pre(cc_to_drone[6].fifo[4,4]);
  cc_to_drone[6].fifo[4,3] := pre(cc_to_drone[6].fifo[4,3]);
  cc_to_drone[6].fifo[4,2] := pre(cc_to_drone[6].fifo[4,2]);
  cc_to_drone[6].fifo[4,1] := pre(cc_to_drone[6].fifo[4,1]);
  cc_to_drone[6].fifo[3,5] := pre(cc_to_drone[6].fifo[3,5]);
  cc_to_drone[6].fifo[3,4] := pre(cc_to_drone[6].fifo[3,4]);
  cc_to_drone[6].fifo[3,3] := pre(cc_to_drone[6].fifo[3,3]);
  cc_to_drone[6].fifo[3,2] := pre(cc_to_drone[6].fifo[3,2]);
  cc_to_drone[6].fifo[3,1] := pre(cc_to_drone[6].fifo[3,1]);
  cc_to_drone[6].fifo[2,5] := pre(cc_to_drone[6].fifo[2,5]);
  cc_to_drone[6].fifo[2,4] := pre(cc_to_drone[6].fifo[2,4]);
  cc_to_drone[6].fifo[2,3] := pre(cc_to_drone[6].fifo[2,3]);
  cc_to_drone[6].fifo[2,2] := pre(cc_to_drone[6].fifo[2,2]);
  cc_to_drone[6].fifo[2,1] := pre(cc_to_drone[6].fifo[2,1]);
  cc_to_drone[6].fifo[1,5] := pre(cc_to_drone[6].fifo[1,5]);
  cc_to_drone[6].fifo[1,4] := pre(cc_to_drone[6].fifo[1,4]);
  cc_to_drone[6].fifo[1,3] := pre(cc_to_drone[6].fifo[1,3]);
  cc_to_drone[6].fifo[1,2] := pre(cc_to_drone[6].fifo[1,2]);
  cc_to_drone[6].fifo[1,1] := pre(cc_to_drone[6].fifo[1,1]);
  cc_to_drone[6].spaceavailable := pre(cc_to_drone[6].spaceavailable);
  cc_to_drone[6].outputdata[5] := pre(cc_to_drone[6].outputdata[5]);
  cc_to_drone[6].outputdata[4] := pre(cc_to_drone[6].outputdata[4]);
  cc_to_drone[6].outputdata[3] := pre(cc_to_drone[6].outputdata[3]);
  cc_to_drone[6].outputdata[2] := pre(cc_to_drone[6].outputdata[2]);
  cc_to_drone[6].outputdata[1] := pre(cc_to_drone[6].outputdata[1]);
  cc_to_drone[6].datavailable := pre(cc_to_drone[6].datavailable);
  $whenCondition27 := pre($whenCondition27);
  $whenCondition26 := pre($whenCondition26);
  $whenCondition25 := pre($whenCondition25);
  $whenCondition25 := pre(cc_to_drone[6].readsigint) and pre(cc_to_drone[6].writesigint);
  $whenCondition26 := pre(cc_to_drone[6].readsigint) and not pre(cc_to_drone[6].writesigint) and pre(cc_to_drone[6].fifosize) >= 1;
  $whenCondition27 := not pre(cc_to_drone[6].readsigint) and pre(cc_to_drone[6].writesigint) and pre(cc_to_drone[6].fifosize) < 10;
  when false then
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
  elsewhen $whenCondition25 then
    if pre(cc_to_drone[6].fifosize) < 10 then
      for j in 1:5 loop
        cc_to_drone[6].fifo[pre(cc_to_drone[6].newest),j] := cc_to_drone[6].inputdata[j];
      end for;
      cc_to_drone[6].newest := mod(pre(cc_to_drone[6].newest), 10) + 1;
      for j in 1:5 loop
        cc_to_drone[6].outputdata[j] := cc_to_drone[6].fifo[pre(cc_to_drone[6].oldest),j];
      end for;
      cc_to_drone[6].oldest := mod(pre(cc_to_drone[6].oldest), 10) + 1;
    else
      for j in 1:5 loop
        cc_to_drone[6].outputdata[j] := cc_to_drone[6].fifo[pre(cc_to_drone[6].oldest),j];
      end for;
      cc_to_drone[6].oldest := mod(pre(cc_to_drone[6].oldest), 10) + 1;
      for j in 1:5 loop
        cc_to_drone[6].fifo[pre(cc_to_drone[6].newest),j] := cc_to_drone[6].inputdata[j];
      end for;
      cc_to_drone[6].newest := mod(pre(cc_to_drone[6].newest), 10) + 1;
    end if;
  elsewhen $whenCondition26 then
    for j in 1:5 loop
      cc_to_drone[6].outputdata[j] := cc_to_drone[6].fifo[pre(cc_to_drone[6].oldest),j];
    end for;
    cc_to_drone[6].oldest := mod(pre(cc_to_drone[6].oldest), 10) + 1;
    cc_to_drone[6].fifosize := pre(cc_to_drone[6].fifosize) - 1;
    cc_to_drone[6].datavailable := cc_to_drone[6].fifosize >= 1;
    cc_to_drone[6].spaceavailable := true;
  elsewhen $whenCondition27 then
    for j in 1:5 loop
      cc_to_drone[6].fifo[pre(cc_to_drone[6].newest),j] := cc_to_drone[6].inputdata[j];
    end for;
    cc_to_drone[6].newest := mod(pre(cc_to_drone[6].newest), 10) + 1;
    cc_to_drone[6].fifosize := pre(cc_to_drone[6].fifosize) + 1;
    cc_to_drone[6].datavailable := true;
    cc_to_drone[6].spaceavailable := pre(cc_to_drone[6].fifosize) < 10;
    for j in 1:5 loop
      cc_to_drone[6].outputdata[j] := cc_to_drone[6].fifo[pre(cc_to_drone[6].oldest),j];
    end for;
  end when;
*/
void System_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  modelica_boolean tmp502;
  modelica_boolean tmp503;
  modelica_integer tmp504;
  modelica_integer tmp505;
  modelica_integer tmp506;
  modelica_integer tmp507;
  modelica_integer tmp508;
  modelica_integer tmp509;
  modelica_integer tmp510;
  modelica_integer tmp511;
  modelica_integer tmp512;
  modelica_boolean tmp513;
  modelica_integer tmp514;
  modelica_integer tmp515;
  modelica_integer tmp516;
  modelica_integer tmp517;
  modelica_integer tmp518;
  modelica_integer tmp519;
  modelica_integer tmp520;
  modelica_integer tmp521;
  modelica_integer tmp522;
  modelica_integer tmp523;
  modelica_integer tmp524;
  modelica_integer tmp525;
  modelica_integer tmp526;
  modelica_integer tmp527;
  modelica_integer tmp528;
  modelica_integer tmp529;
  modelica_integer tmp530;
  modelica_integer tmp531;
  modelica_integer tmp532;
  modelica_integer tmp533;
  modelica_boolean tmp534;
  modelica_integer tmp535;
  modelica_integer tmp536;
  modelica_integer tmp537;
  modelica_integer tmp538;
  modelica_boolean tmp539;
  modelica_integer tmp540;
  modelica_integer tmp541;
  modelica_integer tmp542;
  (data->localData[0]->integerVars[41]/* cc_to_drone[6].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[41]/* cc_to_drone[6].newest DISCRETE */) ;

  (data->localData[0]->integerVars[48]/* cc_to_drone[6].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[48]/* cc_to_drone[6].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[34]/* cc_to_drone[6].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[34]/* cc_to_drone[6].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[684]/* cc_to_drone[6].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[684]/* cc_to_drone[6].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[683]/* cc_to_drone[6].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[683]/* cc_to_drone[6].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[682]/* cc_to_drone[6].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[682]/* cc_to_drone[6].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[681]/* cc_to_drone[6].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[681]/* cc_to_drone[6].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[680]/* cc_to_drone[6].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[680]/* cc_to_drone[6].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[679]/* cc_to_drone[6].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[679]/* cc_to_drone[6].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[678]/* cc_to_drone[6].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[678]/* cc_to_drone[6].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[677]/* cc_to_drone[6].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[677]/* cc_to_drone[6].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[676]/* cc_to_drone[6].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[676]/* cc_to_drone[6].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[675]/* cc_to_drone[6].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[675]/* cc_to_drone[6].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[674]/* cc_to_drone[6].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[674]/* cc_to_drone[6].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[673]/* cc_to_drone[6].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[673]/* cc_to_drone[6].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[672]/* cc_to_drone[6].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[672]/* cc_to_drone[6].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[671]/* cc_to_drone[6].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[671]/* cc_to_drone[6].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[670]/* cc_to_drone[6].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[670]/* cc_to_drone[6].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[669]/* cc_to_drone[6].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[669]/* cc_to_drone[6].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[668]/* cc_to_drone[6].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[668]/* cc_to_drone[6].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[667]/* cc_to_drone[6].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[667]/* cc_to_drone[6].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[666]/* cc_to_drone[6].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[666]/* cc_to_drone[6].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[665]/* cc_to_drone[6].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[665]/* cc_to_drone[6].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[664]/* cc_to_drone[6].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[664]/* cc_to_drone[6].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[663]/* cc_to_drone[6].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[663]/* cc_to_drone[6].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[662]/* cc_to_drone[6].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[662]/* cc_to_drone[6].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[661]/* cc_to_drone[6].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[661]/* cc_to_drone[6].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[660]/* cc_to_drone[6].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[660]/* cc_to_drone[6].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[659]/* cc_to_drone[6].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[659]/* cc_to_drone[6].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[658]/* cc_to_drone[6].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[658]/* cc_to_drone[6].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[657]/* cc_to_drone[6].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[657]/* cc_to_drone[6].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[656]/* cc_to_drone[6].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[656]/* cc_to_drone[6].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[655]/* cc_to_drone[6].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[655]/* cc_to_drone[6].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[654]/* cc_to_drone[6].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[654]/* cc_to_drone[6].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[653]/* cc_to_drone[6].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[653]/* cc_to_drone[6].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[652]/* cc_to_drone[6].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[652]/* cc_to_drone[6].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[651]/* cc_to_drone[6].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[651]/* cc_to_drone[6].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[650]/* cc_to_drone[6].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[650]/* cc_to_drone[6].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[649]/* cc_to_drone[6].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[649]/* cc_to_drone[6].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[648]/* cc_to_drone[6].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[648]/* cc_to_drone[6].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[647]/* cc_to_drone[6].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[647]/* cc_to_drone[6].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[646]/* cc_to_drone[6].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[646]/* cc_to_drone[6].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[645]/* cc_to_drone[6].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[645]/* cc_to_drone[6].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[644]/* cc_to_drone[6].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[644]/* cc_to_drone[6].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[643]/* cc_to_drone[6].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[643]/* cc_to_drone[6].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[642]/* cc_to_drone[6].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[642]/* cc_to_drone[6].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[641]/* cc_to_drone[6].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[641]/* cc_to_drone[6].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[640]/* cc_to_drone[6].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[640]/* cc_to_drone[6].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[639]/* cc_to_drone[6].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[639]/* cc_to_drone[6].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[638]/* cc_to_drone[6].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[638]/* cc_to_drone[6].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[637]/* cc_to_drone[6].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[637]/* cc_to_drone[6].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[636]/* cc_to_drone[6].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[636]/* cc_to_drone[6].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[635]/* cc_to_drone[6].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[635]/* cc_to_drone[6].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[186]/* cc_to_drone[6].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[186]/* cc_to_drone[6].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[764]/* cc_to_drone[6].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[764]/* cc_to_drone[6].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[763]/* cc_to_drone[6].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[763]/* cc_to_drone[6].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[762]/* cc_to_drone[6].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[762]/* cc_to_drone[6].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[761]/* cc_to_drone[6].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[761]/* cc_to_drone[6].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[760]/* cc_to_drone[6].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[760]/* cc_to_drone[6].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[165]/* cc_to_drone[6].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[165]/* cc_to_drone[6].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[19]/* $whenCondition27 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[19]/* $whenCondition27 DISCRETE */) ;

  (data->localData[0]->booleanVars[18]/* $whenCondition26 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[18]/* $whenCondition26 DISCRETE */) ;

  (data->localData[0]->booleanVars[17]/* $whenCondition25 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[17]/* $whenCondition25 DISCRETE */) ;

  (data->localData[0]->booleanVars[17]/* $whenCondition25 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[172]/* cc_to_drone[6].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[193]/* cc_to_drone[6].writesigint DISCRETE */) );

  tmp502 = GreaterEq((data->simulationInfo->integerVarsPre[34]/* cc_to_drone[6].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[18]/* $whenCondition26 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[172]/* cc_to_drone[6].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[193]/* cc_to_drone[6].writesigint DISCRETE */) )) && tmp502);

  tmp503 = Less((data->simulationInfo->integerVarsPre[34]/* cc_to_drone[6].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[19]/* $whenCondition27 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[172]/* cc_to_drone[6].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[193]/* cc_to_drone[6].writesigint DISCRETE */) ) && tmp503);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[165]/* cc_to_drone[6].datavailable DISCRETE */)  = 0;

      tmp504 = ((modelica_integer) 1); tmp505 = 1; tmp506 = ((modelica_integer) 5);
      if(!(((tmp505 > 0) && (tmp504 > tmp506)) || ((tmp505 < 0) && (tmp504 < tmp506))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp504, tmp506); j += tmp505)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 6) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[186]/* cc_to_drone[6].spaceavailable DISCRETE */)  = 1;

      tmp510 = ((modelica_integer) 1); tmp511 = 1; tmp512 = ((modelica_integer) 10);
      if(!(((tmp511 > 0) && (tmp510 > tmp512)) || ((tmp511 < 0) && (tmp510 < tmp512))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp510, tmp512); i += tmp511)
        {
          tmp507 = ((modelica_integer) 1); tmp508 = 1; tmp509 = ((modelica_integer) 5);
          if(!(((tmp508 > 0) && (tmp507 > tmp509)) || ((tmp508 < 0) && (tmp507 < tmp509))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp507, tmp509); j += tmp508)
            {
              (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 6) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[34]/* cc_to_drone[6].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[48]/* cc_to_drone[6].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[41]/* cc_to_drone[6].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[17]/* $whenCondition25 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[17]/* $whenCondition25 DISCRETE */)  /* edge */))
    {
      tmp513 = Less((data->simulationInfo->integerVarsPre[34]/* cc_to_drone[6].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp513)
      {
        tmp514 = ((modelica_integer) 1); tmp515 = 1; tmp516 = ((modelica_integer) 5);
        if(!(((tmp515 > 0) && (tmp514 > tmp516)) || ((tmp515 < 0) && (tmp514 < tmp516))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp514, tmp516); j += tmp515)
          {
            (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 6) - 1) * 10 + ((data->simulationInfo->integerVarsPre[41]/* cc_to_drone[6].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 6) - 1) * 5 + (j-1)] ;
          }
        }

        tmp517 = ((modelica_integer) 10);
        if (tmp517 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[6].newest), 10)");}
        (data->localData[0]->integerVars[41]/* cc_to_drone[6].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[41]/* cc_to_drone[6].newest DISCRETE */) , tmp517) + ((modelica_integer) 1);

        tmp518 = ((modelica_integer) 1); tmp519 = 1; tmp520 = ((modelica_integer) 5);
        if(!(((tmp519 > 0) && (tmp518 > tmp520)) || ((tmp519 < 0) && (tmp518 < tmp520))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp518, tmp520); j += tmp519)
          {
            (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 6) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 6) - 1) * 10 + ((data->simulationInfo->integerVarsPre[48]/* cc_to_drone[6].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp521 = ((modelica_integer) 10);
        if (tmp521 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[6].oldest), 10)");}
        (data->localData[0]->integerVars[48]/* cc_to_drone[6].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[48]/* cc_to_drone[6].oldest DISCRETE */) , tmp521) + ((modelica_integer) 1);
      }
      else
      {
        tmp522 = ((modelica_integer) 1); tmp523 = 1; tmp524 = ((modelica_integer) 5);
        if(!(((tmp523 > 0) && (tmp522 > tmp524)) || ((tmp523 < 0) && (tmp522 < tmp524))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp522, tmp524); j += tmp523)
          {
            (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 6) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 6) - 1) * 10 + ((data->simulationInfo->integerVarsPre[48]/* cc_to_drone[6].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp525 = ((modelica_integer) 10);
        if (tmp525 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[6].oldest), 10)");}
        (data->localData[0]->integerVars[48]/* cc_to_drone[6].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[48]/* cc_to_drone[6].oldest DISCRETE */) , tmp525) + ((modelica_integer) 1);

        tmp526 = ((modelica_integer) 1); tmp527 = 1; tmp528 = ((modelica_integer) 5);
        if(!(((tmp527 > 0) && (tmp526 > tmp528)) || ((tmp527 < 0) && (tmp526 < tmp528))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp526, tmp528); j += tmp527)
          {
            (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 6) - 1) * 10 + ((data->simulationInfo->integerVarsPre[41]/* cc_to_drone[6].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 6) - 1) * 5 + (j-1)] ;
          }
        }

        tmp529 = ((modelica_integer) 10);
        if (tmp529 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[6].newest), 10)");}
        (data->localData[0]->integerVars[41]/* cc_to_drone[6].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[41]/* cc_to_drone[6].newest DISCRETE */) , tmp529) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[18]/* $whenCondition26 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[18]/* $whenCondition26 DISCRETE */)  /* edge */))
    {
      tmp530 = ((modelica_integer) 1); tmp531 = 1; tmp532 = ((modelica_integer) 5);
      if(!(((tmp531 > 0) && (tmp530 > tmp532)) || ((tmp531 < 0) && (tmp530 < tmp532))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp530, tmp532); j += tmp531)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 6) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 6) - 1) * 10 + ((data->simulationInfo->integerVarsPre[48]/* cc_to_drone[6].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp533 = ((modelica_integer) 10);
      if (tmp533 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[6].oldest), 10)");}
      (data->localData[0]->integerVars[48]/* cc_to_drone[6].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[48]/* cc_to_drone[6].oldest DISCRETE */) , tmp533) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[34]/* cc_to_drone[6].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[34]/* cc_to_drone[6].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp534 = GreaterEq((data->localData[0]->integerVars[34]/* cc_to_drone[6].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[165]/* cc_to_drone[6].datavailable DISCRETE */)  = tmp534;

      (data->localData[0]->booleanVars[186]/* cc_to_drone[6].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[19]/* $whenCondition27 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[19]/* $whenCondition27 DISCRETE */)  /* edge */))
    {
      tmp535 = ((modelica_integer) 1); tmp536 = 1; tmp537 = ((modelica_integer) 5);
      if(!(((tmp536 > 0) && (tmp535 > tmp537)) || ((tmp536 < 0) && (tmp535 < tmp537))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp535, tmp537); j += tmp536)
        {
          (&(data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 6) - 1) * 10 + ((data->simulationInfo->integerVarsPre[41]/* cc_to_drone[6].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[123]/* cc_to_drone[1].inputdata[1] variable */)[(((modelica_integer) 6) - 1) * 5 + (j-1)] ;
        }
      }

      tmp538 = ((modelica_integer) 10);
      if (tmp538 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(cc_to_drone[6].newest), 10)");}
      (data->localData[0]->integerVars[41]/* cc_to_drone[6].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[41]/* cc_to_drone[6].newest DISCRETE */) , tmp538) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[34]/* cc_to_drone[6].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[34]/* cc_to_drone[6].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[165]/* cc_to_drone[6].datavailable DISCRETE */)  = 1;

      tmp539 = Less((data->simulationInfo->integerVarsPre[34]/* cc_to_drone[6].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[186]/* cc_to_drone[6].spaceavailable DISCRETE */)  = tmp539;

      tmp540 = ((modelica_integer) 1); tmp541 = 1; tmp542 = ((modelica_integer) 5);
      if(!(((tmp541 > 0) && (tmp540 > tmp542)) || ((tmp541 < 0) && (tmp540 < tmp542))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp540, tmp542); j += tmp541)
        {
          (&(data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 6) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[385]/* cc_to_drone[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 6) - 1) * 10 + ((data->simulationInfo->integerVarsPre[48]/* cc_to_drone[6].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 643
type: SIMPLE_ASSIGN
cc.spaceavailable[6] = cc_to_drone[6].spaceavailable
*/
void System_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  (data->localData[0]->booleanVars[151]/* cc.spaceavailable[6] DISCRETE */)  = (data->localData[0]->booleanVars[186]/* cc_to_drone[6].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 644
type: SIMPLE_ASSIGN
d[6].datavailable = cc_to_drone[6].datavailable
*/
void System_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  (data->localData[0]->booleanVars[221]/* d[6].datavailable DISCRETE */)  = (data->localData[0]->booleanVars[165]/* cc_to_drone[6].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 645
type: SIMPLE_ASSIGN
drone_to_cc[6].readsignal = cc.readsignal[6]
*/
void System_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  (data->localData[0]->booleanVars[263]/* drone_to_cc[6].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[137]/* cc.readsignal[6] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 646
type: SIMPLE_ASSIGN
drone_to_cc[6].readsigint = not pre(drone_to_cc[6].readsignal) == drone_to_cc[6].readsignal
*/
void System_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  (data->localData[0]->booleanVars[256]/* drone_to_cc[6].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[263]/* drone_to_cc[6].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[263]/* drone_to_cc[6].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[263]/* drone_to_cc[6].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[263]/* drone_to_cc[6].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 647
type: SIMPLE_ASSIGN
drone_to_cc[3].readsignal = cc.readsignal[3]
*/
void System_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  (data->localData[0]->booleanVars[260]/* drone_to_cc[3].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[134]/* cc.readsignal[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 648
type: SIMPLE_ASSIGN
drone_to_cc[3].readsigint = not pre(drone_to_cc[3].readsignal) == drone_to_cc[3].readsignal
*/
void System_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  (data->localData[0]->booleanVars[253]/* drone_to_cc[3].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[260]/* drone_to_cc[3].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[260]/* drone_to_cc[3].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[260]/* drone_to_cc[3].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[260]/* drone_to_cc[3].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 649
type: ALGORITHM

  d[7].ctrl.destZ := pre(d[7].ctrl.destZ);
  d[7].ctrl.destY := pre(d[7].ctrl.destY);
  d[7].ctrl.destX := pre(d[7].ctrl.destX);
  $whenCondition48 := pre($whenCondition48);
  $whenCondition47 := pre($whenCondition47);
  $whenCondition47 := sample(20, 0.0, d[7].ctrl.prm.Tdrone) and pre(d[7].ctrl.droneDead);
  $whenCondition48 := sample(20, 0.0, d[7].ctrl.prm.Tdrone);
  when $whenCondition47 then
    d[7].ctrl.destX := pre(d[7].ctrl.x);
    d[7].ctrl.destY := pre(d[7].ctrl.y);
    d[7].ctrl.destZ := 0.0;
  elsewhen $whenCondition48 then
    d[7].ctrl.destX := pre(d[7].ctrl.setx);
    d[7].ctrl.destY := pre(d[7].ctrl.sety);
    d[7].ctrl.destZ := pre(d[7].ctrl.setz);
  end when;
*/
void System_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  (data->localData[0]->realVars[790]/* d[7].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[790]/* d[7].ctrl.destZ DISCRETE */) ;

  (data->localData[0]->realVars[783]/* d[7].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[783]/* d[7].ctrl.destY DISCRETE */) ;

  (data->localData[0]->realVars[776]/* d[7].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[776]/* d[7].ctrl.destX DISCRETE */) ;

  (data->localData[0]->booleanVars[42]/* $whenCondition48 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[42]/* $whenCondition48 DISCRETE */) ;

  (data->localData[0]->booleanVars[41]/* $whenCondition47 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[41]/* $whenCondition47 DISCRETE */) ;

  (data->localData[0]->booleanVars[41]/* $whenCondition47 DISCRETE */)  = (data->simulationInfo->samples[19] && (data->simulationInfo->booleanVarsPre[208]/* d[7].ctrl.droneDead DISCRETE */) );

  (data->localData[0]->booleanVars[42]/* $whenCondition48 DISCRETE */)  = data->simulationInfo->samples[19];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[41]/* $whenCondition47 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[41]/* $whenCondition47 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[776]/* d[7].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[214]/* d[7].ctrl.x variable */) ;

      (data->localData[0]->realVars[783]/* d[7].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[221]/* d[7].ctrl.y variable */) ;

      (data->localData[0]->realVars[790]/* d[7].ctrl.destZ DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[42]/* $whenCondition48 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[42]/* $whenCondition48 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[776]/* d[7].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[193]/* d[7].ctrl.setx variable */) ;

      (data->localData[0]->realVars[783]/* d[7].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[200]/* d[7].ctrl.sety variable */) ;

      (data->localData[0]->realVars[790]/* d[7].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[207]/* d[7].ctrl.setz variable */) ;
    }
  }
  TRACE_POP
}
/*
equation index: 650
type: ALGORITHM

  d[7].d.droneDead := pre(d[7].d.droneDead);
  d[7].d.droneState := pre(d[7].d.droneState);
  d[7].d.battery := pre(d[7].d.battery);
  $whenCondition50 := pre($whenCondition50);
  $whenCondition49 := pre($whenCondition49);
  $whenCondition49 := abs(pre(d[7].d.battery)) < 0.01;
  $whenCondition50 := sample(19, 0.0, d[7].d.p.Tdrone) and pre(d[7].d.droneState) == 1;
  when false then
    d[7].d.battery := d[7].d.p.capacity;
    d[7].d.droneState := 1;
    d[7].d.droneDead := false;
  elsewhen $whenCondition49 then
    d[7].d.droneDead := true;
  elsewhen $whenCondition50 then
    if returnedHome(d[7].d.p, pre(d[7].d.x), pre(d[7].d.y), pre(d[7].d.z)) then
      d[7].d.battery := charging(d[7].d.p, pre(d[7].d.battery));
    else
      d[7].d.battery := batteryMonitor(pre(d[7].d.battery), d[7].d.p.batteryDischarge);
    end if;
  end when;
*/
void System_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  modelica_boolean tmp545;
  real_array tmp547;
  real_array tmp548;
  real_array tmp549;
  real_array tmp550;
  real_array tmp551;
  real_array tmp552;
  (data->localData[0]->booleanVars[215]/* d[7].d.droneDead DISCRETE */)  = (data->simulationInfo->booleanVarsPre[215]/* d[7].d.droneDead DISCRETE */) ;

  (data->localData[0]->integerVars[63]/* d[7].d.droneState DISCRETE */)  = (data->simulationInfo->integerVarsPre[63]/* d[7].d.droneState DISCRETE */) ;

  (data->localData[0]->realVars[797]/* d[7].d.battery DISCRETE */)  = (data->simulationInfo->realVarsPre[797]/* d[7].d.battery DISCRETE */) ;

  (data->localData[0]->booleanVars[45]/* $whenCondition50 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[45]/* $whenCondition50 DISCRETE */) ;

  (data->localData[0]->booleanVars[43]/* $whenCondition49 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[43]/* $whenCondition49 DISCRETE */) ;

  tmp545 = Less(fabs((data->simulationInfo->realVarsPre[797]/* d[7].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[43]/* $whenCondition49 DISCRETE */)  = tmp545;

  (data->localData[0]->booleanVars[45]/* $whenCondition50 DISCRETE */)  = (data->simulationInfo->samples[18] && ((data->simulationInfo->integerVarsPre[63]/* d[7].d.droneState DISCRETE */)  == ((modelica_integer) 1)));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[797]/* d[7].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[2741]/* d[7].d.p.capacity PARAM */) ;

      (data->localData[0]->integerVars[63]/* d[7].d.droneState DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->booleanVars[215]/* d[7].d.droneDead DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[43]/* $whenCondition49 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[43]/* $whenCondition49 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->booleanVars[215]/* d[7].d.droneDead DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[45]/* $whenCondition50 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[45]/* $whenCondition50 DISCRETE */)  /* edge */))
    {
      real_array_create(&tmp547, ((modelica_real*)&((&data->simulationInfo->realParameter[2812]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 7) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp548, ((modelica_real*)&((&data->simulationInfo->realParameter[2791]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 7) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp549, ((modelica_real*)&((&data->simulationInfo->realParameter[2042]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 7) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
      if(omc_returnedHome(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[2923]/* d[7].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[73]/* d[7].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[80]/* d[7].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[2034]/* d[7].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[2027]/* d[7].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[2041]/* d[7].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[2874]/* d[7].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[94]/* d[7].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[2748]/* d[7].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[2895]/* d[7].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[2888]/* d[7].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[2762]/* d[7].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[2881]/* d[7].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[2727]/* d[7].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[2769]/* d[7].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[2720]/* d[7].d.p.arrivalThreshold PARAM */) , tmp547, tmp548, (data->simulationInfo->realParameter[2846]/* d[7].d.p.m PARAM */) , (data->simulationInfo->realParameter[2860]/* d[7].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[2839]/* d[7].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[2937]/* d[7].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[2853]/* d[7].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[2867]/* d[7].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[2776]/* d[7].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[2930]/* d[7].d.p.unita PARAM */) , (data->simulationInfo->realParameter[2741]/* d[7].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[2734]/* d[7].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[2755]/* d[7].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[2902]/* d[7].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[2790]/* d[7].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[2783]/* d[7].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[2909]/* d[7].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[2916]/* d[7].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[87]/* d[7].d.p.nAreas PARAM */) , tmp549), (data->simulationInfo->realVarsPre[27]/* d[7].d.x STATE(1,d[7].d.Vx) */) , (data->simulationInfo->realVarsPre[34]/* d[7].d.y STATE(1,d[7].d.Vy) */) , (data->simulationInfo->realVarsPre[41]/* d[7].d.z STATE(1,d[7].d.Vz) */) ))
      {
        real_array_create(&tmp550, ((modelica_real*)&((&data->simulationInfo->realParameter[2812]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 7) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp551, ((modelica_real*)&((&data->simulationInfo->realParameter[2791]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 7) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp552, ((modelica_real*)&((&data->simulationInfo->realParameter[2042]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 7) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
        (data->localData[0]->realVars[797]/* d[7].d.battery DISCRETE */)  = omc_charging(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[2923]/* d[7].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[73]/* d[7].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[80]/* d[7].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[2034]/* d[7].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[2027]/* d[7].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[2041]/* d[7].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[2874]/* d[7].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[94]/* d[7].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[2748]/* d[7].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[2895]/* d[7].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[2888]/* d[7].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[2762]/* d[7].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[2881]/* d[7].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[2727]/* d[7].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[2769]/* d[7].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[2720]/* d[7].d.p.arrivalThreshold PARAM */) , tmp550, tmp551, (data->simulationInfo->realParameter[2846]/* d[7].d.p.m PARAM */) , (data->simulationInfo->realParameter[2860]/* d[7].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[2839]/* d[7].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[2937]/* d[7].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[2853]/* d[7].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[2867]/* d[7].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[2776]/* d[7].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[2930]/* d[7].d.p.unita PARAM */) , (data->simulationInfo->realParameter[2741]/* d[7].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[2734]/* d[7].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[2755]/* d[7].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[2902]/* d[7].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[2790]/* d[7].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[2783]/* d[7].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[2909]/* d[7].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[2916]/* d[7].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[87]/* d[7].d.p.nAreas PARAM */) , tmp552), (data->simulationInfo->realVarsPre[797]/* d[7].d.battery DISCRETE */) );
      }
      else
      {
        (data->localData[0]->realVars[797]/* d[7].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[797]/* d[7].d.battery DISCRETE */) , (data->simulationInfo->realParameter[2734]/* d[7].d.p.batteryDischarge PARAM */) );
      }
    }
  }
  TRACE_POP
}
/*
equation index: 651
type: SIMPLE_ASSIGN
d[7].ctrl.droneDead = d[7].d.droneDead
*/
void System_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  (data->localData[0]->booleanVars[208]/* d[7].ctrl.droneDead DISCRETE */)  = (data->localData[0]->booleanVars[215]/* d[7].d.droneDead DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 652
type: ALGORITHM

  d[7].comm_state := pre(d[7].comm_state);
  d[7].fifox := pre(d[7].fifox);
  d[7].writesignal := pre(d[7].writesignal);
  d[7].readsignal := pre(d[7].readsignal);
  d[7].flag := pre(d[7].flag);
  d[7].setz := pre(d[7].setz);
  d[7].sety := pre(d[7].sety);
  d[7].setx := pre(d[7].setx);
  d[7].msg_to_cc[5] := pre(d[7].msg_to_cc[5]);
  d[7].msg_to_cc[4] := pre(d[7].msg_to_cc[4]);
  d[7].msg_to_cc[3] := pre(d[7].msg_to_cc[3]);
  d[7].msg_to_cc[2] := pre(d[7].msg_to_cc[2]);
  d[7].msg_to_cc[1] := pre(d[7].msg_to_cc[1]);
  $whenCondition46 := pre($whenCondition46);
  $whenCondition46 := sample(21, 0.0, d[7].p.Tdrone);
  when false then
    d[7].msg_to_cc := {0.0, 0.0, 0.0, 0.0, 0.0};
    d[7].setx := myrandom() * d[7].p.flyZone[1];
    d[7].sety := myrandom() * d[7].p.flyZone[2];
    d[7].setz := myrandom() * d[7].p.flyZone[3];
    d[7].flag := 0;
    d[7].readsignal := false;
    d[7].writesignal := false;
    d[7].fifox := 0;
    d[7].comm_state := 10;
  elsewhen $whenCondition46 then
    if pre(d[7].d.droneDead) then
      d[7].comm_state := 0;
    elseif pre(d[7].comm_state) == 10 then
      (d[7].readsignal, d[7].fifox) := ReadFromFIFO(pre(d[7].fifox), pre(d[7].datavailable), pre(d[7].readsignal));
      if FifoIODone(d[7].fifox) then
        d[7].flag := integer(cc_to_drone[7].outputdata[1]);
        if d[7].flag == 1 then
          d[7].msg_to_cc[1] := 2.0;
          d[7].msg_to_cc[2] := d[7].d.x;
          d[7].msg_to_cc[3] := d[7].d.y;
          d[7].msg_to_cc[4] := d[7].d.z;
          d[7].msg_to_cc[5] := d[7].d.battery;
          d[7].comm_state := 20;
        elseif d[7].flag == 2 then
          d[7].setx := cc_to_drone[7].outputdata[2];
          d[7].sety := cc_to_drone[7].outputdata[3];
          d[7].setz := cc_to_drone[7].outputdata[4];
          d[7].comm_state := pre(d[7].comm_state);
        end if;
        d[7].fifox := 0;
      end if;
    elseif pre(d[7].comm_state) == 20 then
      (d[7].writesignal, d[7].fifox) := WriteToFIFO(pre(d[7].fifox), pre(d[7].writesignal), pre(d[7].spaceavailable));
      if FifoIODone(d[7].fifox) then
        d[7].comm_state := 10;
        d[7].fifox := 0;
      end if;
    else
      d[7].comm_state := pre(d[7].comm_state);
    end if;
  end when;
*/
void System_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  real_array tmp553;
  real_array tmp554;
  (data->localData[0]->integerVars[56]/* d[7].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[56]/* d[7].comm_state DISCRETE */) ;

  (data->localData[0]->integerVars[70]/* d[7].fifox DISCRETE */)  = (data->simulationInfo->integerVarsPre[70]/* d[7].fifox DISCRETE */) ;

  (data->localData[0]->booleanVars[243]/* d[7].writesignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[243]/* d[7].writesignal DISCRETE */) ;

  (data->localData[0]->booleanVars[229]/* d[7].readsignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[229]/* d[7].readsignal DISCRETE */) ;

  (data->localData[0]->integerVars[77]/* d[7].flag DISCRETE */)  = (data->simulationInfo->integerVarsPre[77]/* d[7].flag DISCRETE */) ;

  (data->localData[0]->realVars[853]/* d[7].setz DISCRETE */)  = (data->simulationInfo->realVarsPre[853]/* d[7].setz DISCRETE */) ;

  (data->localData[0]->realVars[846]/* d[7].sety DISCRETE */)  = (data->simulationInfo->realVarsPre[846]/* d[7].sety DISCRETE */) ;

  (data->localData[0]->realVars[839]/* d[7].setx DISCRETE */)  = (data->simulationInfo->realVarsPre[839]/* d[7].setx DISCRETE */) ;

  (data->localData[0]->realVars[832]/* d[7].msg_to_cc[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[832]/* d[7].msg_to_cc[5] DISCRETE */) ;

  (data->localData[0]->realVars[831]/* d[7].msg_to_cc[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[831]/* d[7].msg_to_cc[4] DISCRETE */) ;

  (data->localData[0]->realVars[830]/* d[7].msg_to_cc[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[830]/* d[7].msg_to_cc[3] DISCRETE */) ;

  (data->localData[0]->realVars[829]/* d[7].msg_to_cc[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[829]/* d[7].msg_to_cc[2] DISCRETE */) ;

  (data->localData[0]->realVars[828]/* d[7].msg_to_cc[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[828]/* d[7].msg_to_cc[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[40]/* $whenCondition46 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[40]/* $whenCondition46 DISCRETE */) ;

  (data->localData[0]->booleanVars[40]/* $whenCondition46 DISCRETE */)  = data->simulationInfo->samples[20];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      array_alloc_scalar_real_array(&tmp553, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp554, ((modelica_real*)&((&(data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 7) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
      real_array_copy_data(tmp553, tmp554);

      (data->localData[0]->realVars[839]/* d[7].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3747]/* d[7].p.flyZone[1] PARAM */) );

      (data->localData[0]->realVars[846]/* d[7].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3748]/* d[7].p.flyZone[2] PARAM */) );

      (data->localData[0]->realVars[853]/* d[7].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3749]/* d[7].p.flyZone[3] PARAM */) );

      (data->localData[0]->integerVars[77]/* d[7].flag DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->booleanVars[229]/* d[7].readsignal DISCRETE */)  = 0;

      (data->localData[0]->booleanVars[243]/* d[7].writesignal DISCRETE */)  = 0;

      (data->localData[0]->integerVars[70]/* d[7].fifox DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[56]/* d[7].comm_state DISCRETE */)  = ((modelica_integer) 10);
    }
    else if(((data->localData[0]->booleanVars[40]/* $whenCondition46 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[40]/* $whenCondition46 DISCRETE */)  /* edge */))
    {
      if((data->simulationInfo->booleanVarsPre[215]/* d[7].d.droneDead DISCRETE */) )
      {
        (data->localData[0]->integerVars[56]/* d[7].comm_state DISCRETE */)  = ((modelica_integer) 0);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[56]/* d[7].comm_state DISCRETE */)  == ((modelica_integer) 10)))
        {
          (data->localData[0]->booleanVars[229]/* d[7].readsignal DISCRETE */)  = omc_ReadFromFIFO(threadData, (data->simulationInfo->integerVarsPre[70]/* d[7].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[222]/* d[7].datavailable DISCRETE */) , (data->simulationInfo->booleanVarsPre[229]/* d[7].readsignal DISCRETE */)  ,&(data->localData[0]->integerVars[70]/* d[7].fifox DISCRETE */) );

          if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[70]/* d[7].fifox DISCRETE */) ))
          {
            (data->localData[0]->integerVars[77]/* d[7].flag DISCRETE */)  = ((modelica_integer)floor((data->localData[0]->realVars[765]/* cc_to_drone[7].outputdata[1] DISCRETE */) ));

            if(((data->localData[0]->integerVars[77]/* d[7].flag DISCRETE */)  == ((modelica_integer) 1)))
            {
              (data->localData[0]->realVars[828]/* d[7].msg_to_cc[1] DISCRETE */)  = 2.0;

              (data->localData[0]->realVars[829]/* d[7].msg_to_cc[2] DISCRETE */)  = (data->localData[0]->realVars[27]/* d[7].d.x STATE(1,d[7].d.Vx) */) ;

              (data->localData[0]->realVars[830]/* d[7].msg_to_cc[3] DISCRETE */)  = (data->localData[0]->realVars[34]/* d[7].d.y STATE(1,d[7].d.Vy) */) ;

              (data->localData[0]->realVars[831]/* d[7].msg_to_cc[4] DISCRETE */)  = (data->localData[0]->realVars[41]/* d[7].d.z STATE(1,d[7].d.Vz) */) ;

              (data->localData[0]->realVars[832]/* d[7].msg_to_cc[5] DISCRETE */)  = (data->localData[0]->realVars[797]/* d[7].d.battery DISCRETE */) ;

              (data->localData[0]->integerVars[56]/* d[7].comm_state DISCRETE */)  = ((modelica_integer) 20);
            }
            else
            {
              if(((data->localData[0]->integerVars[77]/* d[7].flag DISCRETE */)  == ((modelica_integer) 2)))
              {
                (data->localData[0]->realVars[839]/* d[7].setx DISCRETE */)  = (data->localData[0]->realVars[766]/* cc_to_drone[7].outputdata[2] DISCRETE */) ;

                (data->localData[0]->realVars[846]/* d[7].sety DISCRETE */)  = (data->localData[0]->realVars[767]/* cc_to_drone[7].outputdata[3] DISCRETE */) ;

                (data->localData[0]->realVars[853]/* d[7].setz DISCRETE */)  = (data->localData[0]->realVars[768]/* cc_to_drone[7].outputdata[4] DISCRETE */) ;

                (data->localData[0]->integerVars[56]/* d[7].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[56]/* d[7].comm_state DISCRETE */) ;
              }
            }

            (data->localData[0]->integerVars[70]/* d[7].fifox DISCRETE */)  = ((modelica_integer) 0);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[56]/* d[7].comm_state DISCRETE */)  == ((modelica_integer) 20)))
          {
            (data->localData[0]->booleanVars[243]/* d[7].writesignal DISCRETE */)  = omc_WriteToFIFO(threadData, (data->simulationInfo->integerVarsPre[70]/* d[7].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[243]/* d[7].writesignal DISCRETE */) , (data->simulationInfo->booleanVarsPre[236]/* d[7].spaceavailable DISCRETE */)  ,&(data->localData[0]->integerVars[70]/* d[7].fifox DISCRETE */) );

            if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[70]/* d[7].fifox DISCRETE */) ))
            {
              (data->localData[0]->integerVars[56]/* d[7].comm_state DISCRETE */)  = ((modelica_integer) 10);

              (data->localData[0]->integerVars[70]/* d[7].fifox DISCRETE */)  = ((modelica_integer) 0);
            }
          }
          else
          {
            (data->localData[0]->integerVars[56]/* d[7].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[56]/* d[7].comm_state DISCRETE */) ;
          }
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 653
type: SIMPLE_ASSIGN
d[7].ctrl.sety = d[7].sety
*/
void System_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  (data->localData[0]->realVars[200]/* d[7].ctrl.sety variable */)  = (data->localData[0]->realVars[846]/* d[7].sety DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 654
type: SIMPLE_ASSIGN
d[7].ctrl.setz = d[7].setz
*/
void System_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  (data->localData[0]->realVars[207]/* d[7].ctrl.setz variable */)  = (data->localData[0]->realVars[853]/* d[7].setz DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 655
type: SIMPLE_ASSIGN
drone_to_cc[7].inputdata[4] = d[7].msg_to_cc[4]
*/
void System_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  (data->localData[0]->realVars[255]/* drone_to_cc[7].inputdata[4] variable */)  = (data->localData[0]->realVars[831]/* d[7].msg_to_cc[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 656
type: SIMPLE_ASSIGN
drone_to_cc[7].writesignal = d[7].writesignal
*/
void System_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  (data->localData[0]->booleanVars[285]/* drone_to_cc[7].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[243]/* d[7].writesignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 657
type: SIMPLE_ASSIGN
drone_to_cc[7].writesigint = not pre(drone_to_cc[7].writesignal) == drone_to_cc[7].writesignal
*/
void System_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  (data->localData[0]->booleanVars[278]/* drone_to_cc[7].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[285]/* drone_to_cc[7].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[285]/* drone_to_cc[7].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[285]/* drone_to_cc[7].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[285]/* drone_to_cc[7].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 658
type: SIMPLE_ASSIGN
drone_to_cc[7].inputdata[3] = d[7].msg_to_cc[3]
*/
void System_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  (data->localData[0]->realVars[254]/* drone_to_cc[7].inputdata[3] variable */)  = (data->localData[0]->realVars[830]/* d[7].msg_to_cc[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 659
type: SIMPLE_ASSIGN
drone_to_cc[7].inputdata[1] = d[7].msg_to_cc[1]
*/
void System_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  (data->localData[0]->realVars[252]/* drone_to_cc[7].inputdata[1] variable */)  = (data->localData[0]->realVars[828]/* d[7].msg_to_cc[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 660
type: SIMPLE_ASSIGN
cc_to_drone[7].readsignal = d[7].readsignal
*/
void System_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  (data->localData[0]->booleanVars[180]/* cc_to_drone[7].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[229]/* d[7].readsignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 661
type: SIMPLE_ASSIGN
cc_to_drone[7].readsigint = not pre(cc_to_drone[7].readsignal) == cc_to_drone[7].readsignal
*/
void System_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  (data->localData[0]->booleanVars[173]/* cc_to_drone[7].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[180]/* cc_to_drone[7].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[180]/* cc_to_drone[7].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[180]/* cc_to_drone[7].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[180]/* cc_to_drone[7].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 662
type: SIMPLE_ASSIGN
drone_to_cc[7].inputdata[2] = d[7].msg_to_cc[2]
*/
void System_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  (data->localData[0]->realVars[253]/* drone_to_cc[7].inputdata[2] variable */)  = (data->localData[0]->realVars[829]/* d[7].msg_to_cc[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 663
type: SIMPLE_ASSIGN
drone_to_cc[7].inputdata[5] = d[7].msg_to_cc[5]
*/
void System_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  (data->localData[0]->realVars[256]/* drone_to_cc[7].inputdata[5] variable */)  = (data->localData[0]->realVars[832]/* d[7].msg_to_cc[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 664
type: ALGORITHM

  drone_to_cc[7].newest := pre(drone_to_cc[7].newest);
  drone_to_cc[7].oldest := pre(drone_to_cc[7].oldest);
  drone_to_cc[7].fifosize := pre(drone_to_cc[7].fifosize);
  drone_to_cc[7].fifo[10,5] := pre(drone_to_cc[7].fifo[10,5]);
  drone_to_cc[7].fifo[10,4] := pre(drone_to_cc[7].fifo[10,4]);
  drone_to_cc[7].fifo[10,3] := pre(drone_to_cc[7].fifo[10,3]);
  drone_to_cc[7].fifo[10,2] := pre(drone_to_cc[7].fifo[10,2]);
  drone_to_cc[7].fifo[10,1] := pre(drone_to_cc[7].fifo[10,1]);
  drone_to_cc[7].fifo[9,5] := pre(drone_to_cc[7].fifo[9,5]);
  drone_to_cc[7].fifo[9,4] := pre(drone_to_cc[7].fifo[9,4]);
  drone_to_cc[7].fifo[9,3] := pre(drone_to_cc[7].fifo[9,3]);
  drone_to_cc[7].fifo[9,2] := pre(drone_to_cc[7].fifo[9,2]);
  drone_to_cc[7].fifo[9,1] := pre(drone_to_cc[7].fifo[9,1]);
  drone_to_cc[7].fifo[8,5] := pre(drone_to_cc[7].fifo[8,5]);
  drone_to_cc[7].fifo[8,4] := pre(drone_to_cc[7].fifo[8,4]);
  drone_to_cc[7].fifo[8,3] := pre(drone_to_cc[7].fifo[8,3]);
  drone_to_cc[7].fifo[8,2] := pre(drone_to_cc[7].fifo[8,2]);
  drone_to_cc[7].fifo[8,1] := pre(drone_to_cc[7].fifo[8,1]);
  drone_to_cc[7].fifo[7,5] := pre(drone_to_cc[7].fifo[7,5]);
  drone_to_cc[7].fifo[7,4] := pre(drone_to_cc[7].fifo[7,4]);
  drone_to_cc[7].fifo[7,3] := pre(drone_to_cc[7].fifo[7,3]);
  drone_to_cc[7].fifo[7,2] := pre(drone_to_cc[7].fifo[7,2]);
  drone_to_cc[7].fifo[7,1] := pre(drone_to_cc[7].fifo[7,1]);
  drone_to_cc[7].fifo[6,5] := pre(drone_to_cc[7].fifo[6,5]);
  drone_to_cc[7].fifo[6,4] := pre(drone_to_cc[7].fifo[6,4]);
  drone_to_cc[7].fifo[6,3] := pre(drone_to_cc[7].fifo[6,3]);
  drone_to_cc[7].fifo[6,2] := pre(drone_to_cc[7].fifo[6,2]);
  drone_to_cc[7].fifo[6,1] := pre(drone_to_cc[7].fifo[6,1]);
  drone_to_cc[7].fifo[5,5] := pre(drone_to_cc[7].fifo[5,5]);
  drone_to_cc[7].fifo[5,4] := pre(drone_to_cc[7].fifo[5,4]);
  drone_to_cc[7].fifo[5,3] := pre(drone_to_cc[7].fifo[5,3]);
  drone_to_cc[7].fifo[5,2] := pre(drone_to_cc[7].fifo[5,2]);
  drone_to_cc[7].fifo[5,1] := pre(drone_to_cc[7].fifo[5,1]);
  drone_to_cc[7].fifo[4,5] := pre(drone_to_cc[7].fifo[4,5]);
  drone_to_cc[7].fifo[4,4] := pre(drone_to_cc[7].fifo[4,4]);
  drone_to_cc[7].fifo[4,3] := pre(drone_to_cc[7].fifo[4,3]);
  drone_to_cc[7].fifo[4,2] := pre(drone_to_cc[7].fifo[4,2]);
  drone_to_cc[7].fifo[4,1] := pre(drone_to_cc[7].fifo[4,1]);
  drone_to_cc[7].fifo[3,5] := pre(drone_to_cc[7].fifo[3,5]);
  drone_to_cc[7].fifo[3,4] := pre(drone_to_cc[7].fifo[3,4]);
  drone_to_cc[7].fifo[3,3] := pre(drone_to_cc[7].fifo[3,3]);
  drone_to_cc[7].fifo[3,2] := pre(drone_to_cc[7].fifo[3,2]);
  drone_to_cc[7].fifo[3,1] := pre(drone_to_cc[7].fifo[3,1]);
  drone_to_cc[7].fifo[2,5] := pre(drone_to_cc[7].fifo[2,5]);
  drone_to_cc[7].fifo[2,4] := pre(drone_to_cc[7].fifo[2,4]);
  drone_to_cc[7].fifo[2,3] := pre(drone_to_cc[7].fifo[2,3]);
  drone_to_cc[7].fifo[2,2] := pre(drone_to_cc[7].fifo[2,2]);
  drone_to_cc[7].fifo[2,1] := pre(drone_to_cc[7].fifo[2,1]);
  drone_to_cc[7].fifo[1,5] := pre(drone_to_cc[7].fifo[1,5]);
  drone_to_cc[7].fifo[1,4] := pre(drone_to_cc[7].fifo[1,4]);
  drone_to_cc[7].fifo[1,3] := pre(drone_to_cc[7].fifo[1,3]);
  drone_to_cc[7].fifo[1,2] := pre(drone_to_cc[7].fifo[1,2]);
  drone_to_cc[7].fifo[1,1] := pre(drone_to_cc[7].fifo[1,1]);
  drone_to_cc[7].spaceavailable := pre(drone_to_cc[7].spaceavailable);
  drone_to_cc[7].outputdata[5] := pre(drone_to_cc[7].outputdata[5]);
  drone_to_cc[7].outputdata[4] := pre(drone_to_cc[7].outputdata[4]);
  drone_to_cc[7].outputdata[3] := pre(drone_to_cc[7].outputdata[3]);
  drone_to_cc[7].outputdata[2] := pre(drone_to_cc[7].outputdata[2]);
  drone_to_cc[7].outputdata[1] := pre(drone_to_cc[7].outputdata[1]);
  drone_to_cc[7].datavailable := pre(drone_to_cc[7].datavailable);
  $whenCondition3 := pre($whenCondition3);
  $whenCondition2 := pre($whenCondition2);
  $whenCondition1 := pre($whenCondition1);
  $whenCondition1 := pre(drone_to_cc[7].readsigint) and pre(drone_to_cc[7].writesigint);
  $whenCondition2 := pre(drone_to_cc[7].readsigint) and not pre(drone_to_cc[7].writesigint) and pre(drone_to_cc[7].fifosize) >= 1;
  $whenCondition3 := not pre(drone_to_cc[7].readsigint) and pre(drone_to_cc[7].writesigint) and pre(drone_to_cc[7].fifosize) < 10;
  when false then
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
  elsewhen $whenCondition1 then
    if pre(drone_to_cc[7].fifosize) < 10 then
      for j in 1:5 loop
        drone_to_cc[7].fifo[pre(drone_to_cc[7].newest),j] := drone_to_cc[7].inputdata[j];
      end for;
      drone_to_cc[7].newest := mod(pre(drone_to_cc[7].newest), 10) + 1;
      for j in 1:5 loop
        drone_to_cc[7].outputdata[j] := drone_to_cc[7].fifo[pre(drone_to_cc[7].oldest),j];
      end for;
      drone_to_cc[7].oldest := mod(pre(drone_to_cc[7].oldest), 10) + 1;
    else
      for j in 1:5 loop
        drone_to_cc[7].outputdata[j] := drone_to_cc[7].fifo[pre(drone_to_cc[7].oldest),j];
      end for;
      drone_to_cc[7].oldest := mod(pre(drone_to_cc[7].oldest), 10) + 1;
      for j in 1:5 loop
        drone_to_cc[7].fifo[pre(drone_to_cc[7].newest),j] := drone_to_cc[7].inputdata[j];
      end for;
      drone_to_cc[7].newest := mod(pre(drone_to_cc[7].newest), 10) + 1;
    end if;
  elsewhen $whenCondition2 then
    for j in 1:5 loop
      drone_to_cc[7].outputdata[j] := drone_to_cc[7].fifo[pre(drone_to_cc[7].oldest),j];
    end for;
    drone_to_cc[7].oldest := mod(pre(drone_to_cc[7].oldest), 10) + 1;
    drone_to_cc[7].fifosize := pre(drone_to_cc[7].fifosize) - 1;
    drone_to_cc[7].datavailable := drone_to_cc[7].fifosize >= 1;
    drone_to_cc[7].spaceavailable := true;
  elsewhen $whenCondition3 then
    for j in 1:5 loop
      drone_to_cc[7].fifo[pre(drone_to_cc[7].newest),j] := drone_to_cc[7].inputdata[j];
    end for;
    drone_to_cc[7].newest := mod(pre(drone_to_cc[7].newest), 10) + 1;
    drone_to_cc[7].fifosize := pre(drone_to_cc[7].fifosize) + 1;
    drone_to_cc[7].datavailable := true;
    drone_to_cc[7].spaceavailable := pre(drone_to_cc[7].fifosize) < 10;
    for j in 1:5 loop
      drone_to_cc[7].outputdata[j] := drone_to_cc[7].fifo[pre(drone_to_cc[7].oldest),j];
    end for;
  end when;
*/
void System_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  modelica_boolean tmp561;
  modelica_boolean tmp562;
  modelica_integer tmp563;
  modelica_integer tmp564;
  modelica_integer tmp565;
  modelica_integer tmp566;
  modelica_integer tmp567;
  modelica_integer tmp568;
  modelica_integer tmp569;
  modelica_integer tmp570;
  modelica_integer tmp571;
  modelica_boolean tmp572;
  modelica_integer tmp573;
  modelica_integer tmp574;
  modelica_integer tmp575;
  modelica_integer tmp576;
  modelica_integer tmp577;
  modelica_integer tmp578;
  modelica_integer tmp579;
  modelica_integer tmp580;
  modelica_integer tmp581;
  modelica_integer tmp582;
  modelica_integer tmp583;
  modelica_integer tmp584;
  modelica_integer tmp585;
  modelica_integer tmp586;
  modelica_integer tmp587;
  modelica_integer tmp588;
  modelica_integer tmp589;
  modelica_integer tmp590;
  modelica_integer tmp591;
  modelica_integer tmp592;
  modelica_boolean tmp593;
  modelica_integer tmp594;
  modelica_integer tmp595;
  modelica_integer tmp596;
  modelica_integer tmp597;
  modelica_boolean tmp598;
  modelica_integer tmp599;
  modelica_integer tmp600;
  modelica_integer tmp601;
  (data->localData[0]->integerVars[91]/* drone_to_cc[7].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[91]/* drone_to_cc[7].newest DISCRETE */) ;

  (data->localData[0]->integerVars[98]/* drone_to_cc[7].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[98]/* drone_to_cc[7].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[84]/* drone_to_cc[7].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[84]/* drone_to_cc[7].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[1203]/* drone_to_cc[7].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1203]/* drone_to_cc[7].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[1202]/* drone_to_cc[7].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1202]/* drone_to_cc[7].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[1201]/* drone_to_cc[7].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1201]/* drone_to_cc[7].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[1200]/* drone_to_cc[7].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1200]/* drone_to_cc[7].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[1199]/* drone_to_cc[7].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1199]/* drone_to_cc[7].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[1198]/* drone_to_cc[7].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1198]/* drone_to_cc[7].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[1197]/* drone_to_cc[7].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1197]/* drone_to_cc[7].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[1196]/* drone_to_cc[7].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1196]/* drone_to_cc[7].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[1195]/* drone_to_cc[7].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1195]/* drone_to_cc[7].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[1194]/* drone_to_cc[7].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1194]/* drone_to_cc[7].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[1193]/* drone_to_cc[7].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1193]/* drone_to_cc[7].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[1192]/* drone_to_cc[7].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1192]/* drone_to_cc[7].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[1191]/* drone_to_cc[7].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1191]/* drone_to_cc[7].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[1190]/* drone_to_cc[7].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1190]/* drone_to_cc[7].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[1189]/* drone_to_cc[7].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1189]/* drone_to_cc[7].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[1188]/* drone_to_cc[7].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1188]/* drone_to_cc[7].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[1187]/* drone_to_cc[7].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1187]/* drone_to_cc[7].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[1186]/* drone_to_cc[7].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1186]/* drone_to_cc[7].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[1185]/* drone_to_cc[7].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1185]/* drone_to_cc[7].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[1184]/* drone_to_cc[7].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1184]/* drone_to_cc[7].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[1183]/* drone_to_cc[7].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1183]/* drone_to_cc[7].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[1182]/* drone_to_cc[7].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1182]/* drone_to_cc[7].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[1181]/* drone_to_cc[7].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1181]/* drone_to_cc[7].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[1180]/* drone_to_cc[7].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1180]/* drone_to_cc[7].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[1179]/* drone_to_cc[7].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1179]/* drone_to_cc[7].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[1178]/* drone_to_cc[7].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1178]/* drone_to_cc[7].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[1177]/* drone_to_cc[7].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1177]/* drone_to_cc[7].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[1176]/* drone_to_cc[7].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1176]/* drone_to_cc[7].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[1175]/* drone_to_cc[7].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1175]/* drone_to_cc[7].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[1174]/* drone_to_cc[7].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1174]/* drone_to_cc[7].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[1173]/* drone_to_cc[7].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1173]/* drone_to_cc[7].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[1172]/* drone_to_cc[7].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1172]/* drone_to_cc[7].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[1171]/* drone_to_cc[7].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1171]/* drone_to_cc[7].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[1170]/* drone_to_cc[7].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1170]/* drone_to_cc[7].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[1169]/* drone_to_cc[7].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1169]/* drone_to_cc[7].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[1168]/* drone_to_cc[7].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1168]/* drone_to_cc[7].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[1167]/* drone_to_cc[7].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1167]/* drone_to_cc[7].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[1166]/* drone_to_cc[7].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1166]/* drone_to_cc[7].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[1165]/* drone_to_cc[7].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1165]/* drone_to_cc[7].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[1164]/* drone_to_cc[7].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1164]/* drone_to_cc[7].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[1163]/* drone_to_cc[7].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1163]/* drone_to_cc[7].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[1162]/* drone_to_cc[7].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1162]/* drone_to_cc[7].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[1161]/* drone_to_cc[7].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1161]/* drone_to_cc[7].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[1160]/* drone_to_cc[7].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1160]/* drone_to_cc[7].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[1159]/* drone_to_cc[7].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1159]/* drone_to_cc[7].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[1158]/* drone_to_cc[7].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1158]/* drone_to_cc[7].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[1157]/* drone_to_cc[7].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1157]/* drone_to_cc[7].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[1156]/* drone_to_cc[7].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1156]/* drone_to_cc[7].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[1155]/* drone_to_cc[7].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1155]/* drone_to_cc[7].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[1154]/* drone_to_cc[7].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1154]/* drone_to_cc[7].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[271]/* drone_to_cc[7].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[271]/* drone_to_cc[7].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[1238]/* drone_to_cc[7].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1238]/* drone_to_cc[7].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[1237]/* drone_to_cc[7].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1237]/* drone_to_cc[7].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[1236]/* drone_to_cc[7].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1236]/* drone_to_cc[7].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[1235]/* drone_to_cc[7].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1235]/* drone_to_cc[7].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[1234]/* drone_to_cc[7].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1234]/* drone_to_cc[7].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[250]/* drone_to_cc[7].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[250]/* drone_to_cc[7].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[22]/* $whenCondition3 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[22]/* $whenCondition3 DISCRETE */) ;

  (data->localData[0]->booleanVars[11]/* $whenCondition2 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[11]/* $whenCondition2 DISCRETE */) ;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[0]/* $whenCondition1 DISCRETE */) ;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[257]/* drone_to_cc[7].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[278]/* drone_to_cc[7].writesigint DISCRETE */) );

  tmp561 = GreaterEq((data->simulationInfo->integerVarsPre[84]/* drone_to_cc[7].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[11]/* $whenCondition2 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[257]/* drone_to_cc[7].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[278]/* drone_to_cc[7].writesigint DISCRETE */) )) && tmp561);

  tmp562 = Less((data->simulationInfo->integerVarsPre[84]/* drone_to_cc[7].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[22]/* $whenCondition3 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[257]/* drone_to_cc[7].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[278]/* drone_to_cc[7].writesigint DISCRETE */) ) && tmp562);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[250]/* drone_to_cc[7].datavailable DISCRETE */)  = 0;

      tmp563 = ((modelica_integer) 1); tmp564 = 1; tmp565 = ((modelica_integer) 5);
      if(!(((tmp564 > 0) && (tmp563 > tmp565)) || ((tmp564 < 0) && (tmp563 < tmp565))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp563, tmp565); j += tmp564)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 7) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[271]/* drone_to_cc[7].spaceavailable DISCRETE */)  = 1;

      tmp569 = ((modelica_integer) 1); tmp570 = 1; tmp571 = ((modelica_integer) 10);
      if(!(((tmp570 > 0) && (tmp569 > tmp571)) || ((tmp570 < 0) && (tmp569 < tmp571))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp569, tmp571); i += tmp570)
        {
          tmp566 = ((modelica_integer) 1); tmp567 = 1; tmp568 = ((modelica_integer) 5);
          if(!(((tmp567 > 0) && (tmp566 > tmp568)) || ((tmp567 < 0) && (tmp566 < tmp568))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp566, tmp568); j += tmp567)
            {
              (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 7) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[84]/* drone_to_cc[7].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[98]/* drone_to_cc[7].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[91]/* drone_to_cc[7].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[0]/* $whenCondition1 DISCRETE */)  /* edge */))
    {
      tmp572 = Less((data->simulationInfo->integerVarsPre[84]/* drone_to_cc[7].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp572)
      {
        tmp573 = ((modelica_integer) 1); tmp574 = 1; tmp575 = ((modelica_integer) 5);
        if(!(((tmp574 > 0) && (tmp573 > tmp575)) || ((tmp574 < 0) && (tmp573 < tmp575))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp573, tmp575); j += tmp574)
          {
            (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 7) - 1) * 10 + ((data->simulationInfo->integerVarsPre[91]/* drone_to_cc[7].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 7) - 1) * 5 + (j-1)] ;
          }
        }

        tmp576 = ((modelica_integer) 10);
        if (tmp576 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[7].newest), 10)");}
        (data->localData[0]->integerVars[91]/* drone_to_cc[7].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[91]/* drone_to_cc[7].newest DISCRETE */) , tmp576) + ((modelica_integer) 1);

        tmp577 = ((modelica_integer) 1); tmp578 = 1; tmp579 = ((modelica_integer) 5);
        if(!(((tmp578 > 0) && (tmp577 > tmp579)) || ((tmp578 < 0) && (tmp577 < tmp579))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp577, tmp579); j += tmp578)
          {
            (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 7) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 7) - 1) * 10 + ((data->simulationInfo->integerVarsPre[98]/* drone_to_cc[7].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp580 = ((modelica_integer) 10);
        if (tmp580 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[7].oldest), 10)");}
        (data->localData[0]->integerVars[98]/* drone_to_cc[7].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[98]/* drone_to_cc[7].oldest DISCRETE */) , tmp580) + ((modelica_integer) 1);
      }
      else
      {
        tmp581 = ((modelica_integer) 1); tmp582 = 1; tmp583 = ((modelica_integer) 5);
        if(!(((tmp582 > 0) && (tmp581 > tmp583)) || ((tmp582 < 0) && (tmp581 < tmp583))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp581, tmp583); j += tmp582)
          {
            (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 7) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 7) - 1) * 10 + ((data->simulationInfo->integerVarsPre[98]/* drone_to_cc[7].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp584 = ((modelica_integer) 10);
        if (tmp584 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[7].oldest), 10)");}
        (data->localData[0]->integerVars[98]/* drone_to_cc[7].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[98]/* drone_to_cc[7].oldest DISCRETE */) , tmp584) + ((modelica_integer) 1);

        tmp585 = ((modelica_integer) 1); tmp586 = 1; tmp587 = ((modelica_integer) 5);
        if(!(((tmp586 > 0) && (tmp585 > tmp587)) || ((tmp586 < 0) && (tmp585 < tmp587))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp585, tmp587); j += tmp586)
          {
            (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 7) - 1) * 10 + ((data->simulationInfo->integerVarsPre[91]/* drone_to_cc[7].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 7) - 1) * 5 + (j-1)] ;
          }
        }

        tmp588 = ((modelica_integer) 10);
        if (tmp588 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[7].newest), 10)");}
        (data->localData[0]->integerVars[91]/* drone_to_cc[7].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[91]/* drone_to_cc[7].newest DISCRETE */) , tmp588) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[11]/* $whenCondition2 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[11]/* $whenCondition2 DISCRETE */)  /* edge */))
    {
      tmp589 = ((modelica_integer) 1); tmp590 = 1; tmp591 = ((modelica_integer) 5);
      if(!(((tmp590 > 0) && (tmp589 > tmp591)) || ((tmp590 < 0) && (tmp589 < tmp591))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp589, tmp591); j += tmp590)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 7) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 7) - 1) * 10 + ((data->simulationInfo->integerVarsPre[98]/* drone_to_cc[7].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp592 = ((modelica_integer) 10);
      if (tmp592 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[7].oldest), 10)");}
      (data->localData[0]->integerVars[98]/* drone_to_cc[7].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[98]/* drone_to_cc[7].oldest DISCRETE */) , tmp592) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[84]/* drone_to_cc[7].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[84]/* drone_to_cc[7].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp593 = GreaterEq((data->localData[0]->integerVars[84]/* drone_to_cc[7].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[250]/* drone_to_cc[7].datavailable DISCRETE */)  = tmp593;

      (data->localData[0]->booleanVars[271]/* drone_to_cc[7].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[22]/* $whenCondition3 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[22]/* $whenCondition3 DISCRETE */)  /* edge */))
    {
      tmp594 = ((modelica_integer) 1); tmp595 = 1; tmp596 = ((modelica_integer) 5);
      if(!(((tmp595 > 0) && (tmp594 > tmp596)) || ((tmp595 < 0) && (tmp594 < tmp596))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp594, tmp596); j += tmp595)
        {
          (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 7) - 1) * 10 + ((data->simulationInfo->integerVarsPre[91]/* drone_to_cc[7].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 7) - 1) * 5 + (j-1)] ;
        }
      }

      tmp597 = ((modelica_integer) 10);
      if (tmp597 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[7].newest), 10)");}
      (data->localData[0]->integerVars[91]/* drone_to_cc[7].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[91]/* drone_to_cc[7].newest DISCRETE */) , tmp597) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[84]/* drone_to_cc[7].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[84]/* drone_to_cc[7].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[250]/* drone_to_cc[7].datavailable DISCRETE */)  = 1;

      tmp598 = Less((data->simulationInfo->integerVarsPre[84]/* drone_to_cc[7].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[271]/* drone_to_cc[7].spaceavailable DISCRETE */)  = tmp598;

      tmp599 = ((modelica_integer) 1); tmp600 = 1; tmp601 = ((modelica_integer) 5);
      if(!(((tmp600 > 0) && (tmp599 > tmp601)) || ((tmp600 < 0) && (tmp599 < tmp601))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp599, tmp601); j += tmp600)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 7) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 7) - 1) * 10 + ((data->simulationInfo->integerVarsPre[98]/* drone_to_cc[7].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 665
type: SIMPLE_ASSIGN
cc.msg_from_drone[7,2] = drone_to_cc[7].outputdata[2]
*/
void System_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  (data->localData[0]->realVars[118]/* cc.msg_from_drone[7,2] variable */)  = (data->localData[0]->realVars[1235]/* drone_to_cc[7].outputdata[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 666
type: SIMPLE_ASSIGN
d[7].spaceavailable = drone_to_cc[7].spaceavailable
*/
void System_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  (data->localData[0]->booleanVars[236]/* d[7].spaceavailable DISCRETE */)  = (data->localData[0]->booleanVars[271]/* drone_to_cc[7].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 667
type: SIMPLE_ASSIGN
cc.msg_from_drone[7,5] = drone_to_cc[7].outputdata[5]
*/
void System_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  (data->localData[0]->realVars[121]/* cc.msg_from_drone[7,5] variable */)  = (data->localData[0]->realVars[1238]/* drone_to_cc[7].outputdata[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 668
type: SIMPLE_ASSIGN
cc.msg_from_drone[7,1] = drone_to_cc[7].outputdata[1]
*/
void System_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  (data->localData[0]->realVars[117]/* cc.msg_from_drone[7,1] variable */)  = (data->localData[0]->realVars[1234]/* drone_to_cc[7].outputdata[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 669
type: SIMPLE_ASSIGN
cc.msg_from_drone[7,3] = drone_to_cc[7].outputdata[3]
*/
void System_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  (data->localData[0]->realVars[119]/* cc.msg_from_drone[7,3] variable */)  = (data->localData[0]->realVars[1236]/* drone_to_cc[7].outputdata[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 670
type: SIMPLE_ASSIGN
cc.datavailable[7] = drone_to_cc[7].datavailable
*/
void System_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  (data->localData[0]->booleanVars[93]/* cc.datavailable[7] DISCRETE */)  = (data->localData[0]->booleanVars[250]/* drone_to_cc[7].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 671
type: SIMPLE_ASSIGN
cc.msg_from_drone[7,4] = drone_to_cc[7].outputdata[4]
*/
void System_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  (data->localData[0]->realVars[120]/* cc.msg_from_drone[7,4] variable */)  = (data->localData[0]->realVars[1237]/* drone_to_cc[7].outputdata[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 672
type: SIMPLE_ASSIGN
d[7].ctrl.setx = d[7].setx
*/
void System_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  (data->localData[0]->realVars[193]/* d[7].ctrl.setx variable */)  = (data->localData[0]->realVars[839]/* d[7].setx DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 673
type: SIMPLE_ASSIGN
d[7].batteryPercentage = 100.0 * d[7].d.battery / d[7].p.capacity
*/
void System_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  (data->localData[0]->realVars[165]/* d[7].batteryPercentage variable */)  = (100.0) * (DIVISION_SIM((data->localData[0]->realVars[797]/* d[7].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[3658]/* d[7].p.capacity PARAM */) ,"d[7].p.capacity",equationIndexes));
  TRACE_POP
}
/*
equation index: 674
type: ALGORITHM

  d[6].ctrl.destZ := pre(d[6].ctrl.destZ);
  d[6].ctrl.destY := pre(d[6].ctrl.destY);
  d[6].ctrl.destX := pre(d[6].ctrl.destX);
  $whenCondition53 := pre($whenCondition53);
  $whenCondition52 := pre($whenCondition52);
  $whenCondition52 := sample(17, 0.0, d[6].ctrl.prm.Tdrone) and pre(d[6].ctrl.droneDead);
  $whenCondition53 := sample(17, 0.0, d[6].ctrl.prm.Tdrone);
  when $whenCondition52 then
    d[6].ctrl.destX := pre(d[6].ctrl.x);
    d[6].ctrl.destY := pre(d[6].ctrl.y);
    d[6].ctrl.destZ := 0.0;
  elsewhen $whenCondition53 then
    d[6].ctrl.destX := pre(d[6].ctrl.setx);
    d[6].ctrl.destY := pre(d[6].ctrl.sety);
    d[6].ctrl.destZ := pre(d[6].ctrl.setz);
  end when;
*/
void System_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  (data->localData[0]->realVars[789]/* d[6].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[789]/* d[6].ctrl.destZ DISCRETE */) ;

  (data->localData[0]->realVars[782]/* d[6].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[782]/* d[6].ctrl.destY DISCRETE */) ;

  (data->localData[0]->realVars[775]/* d[6].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[775]/* d[6].ctrl.destX DISCRETE */) ;

  (data->localData[0]->booleanVars[48]/* $whenCondition53 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[48]/* $whenCondition53 DISCRETE */) ;

  (data->localData[0]->booleanVars[47]/* $whenCondition52 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[47]/* $whenCondition52 DISCRETE */) ;

  (data->localData[0]->booleanVars[47]/* $whenCondition52 DISCRETE */)  = (data->simulationInfo->samples[16] && (data->simulationInfo->booleanVarsPre[207]/* d[6].ctrl.droneDead DISCRETE */) );

  (data->localData[0]->booleanVars[48]/* $whenCondition53 DISCRETE */)  = data->simulationInfo->samples[16];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[47]/* $whenCondition52 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[47]/* $whenCondition52 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[775]/* d[6].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[213]/* d[6].ctrl.x variable */) ;

      (data->localData[0]->realVars[782]/* d[6].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[220]/* d[6].ctrl.y variable */) ;

      (data->localData[0]->realVars[789]/* d[6].ctrl.destZ DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[48]/* $whenCondition53 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[48]/* $whenCondition53 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[775]/* d[6].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[192]/* d[6].ctrl.setx variable */) ;

      (data->localData[0]->realVars[782]/* d[6].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[199]/* d[6].ctrl.sety variable */) ;

      (data->localData[0]->realVars[789]/* d[6].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[206]/* d[6].ctrl.setz variable */) ;
    }
  }
  TRACE_POP
}
/*
equation index: 675
type: ALGORITHM

  d[6].d.droneDead := pre(d[6].d.droneDead);
  d[6].d.droneState := pre(d[6].d.droneState);
  d[6].d.battery := pre(d[6].d.battery);
  $whenCondition55 := pre($whenCondition55);
  $whenCondition54 := pre($whenCondition54);
  $whenCondition54 := abs(pre(d[6].d.battery)) < 0.01;
  $whenCondition55 := sample(16, 0.0, d[6].d.p.Tdrone) and pre(d[6].d.droneState) == 1;
  when false then
    d[6].d.battery := d[6].d.p.capacity;
    d[6].d.droneState := 1;
    d[6].d.droneDead := false;
  elsewhen $whenCondition54 then
    d[6].d.droneDead := true;
  elsewhen $whenCondition55 then
    if returnedHome(d[6].d.p, pre(d[6].d.x), pre(d[6].d.y), pre(d[6].d.z)) then
      d[6].d.battery := charging(d[6].d.p, pre(d[6].d.battery));
    else
      d[6].d.battery := batteryMonitor(pre(d[6].d.battery), d[6].d.p.batteryDischarge);
    end if;
  end when;
*/
void System_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  modelica_boolean tmp602;
  real_array tmp604;
  real_array tmp605;
  real_array tmp606;
  real_array tmp607;
  real_array tmp608;
  real_array tmp609;
  (data->localData[0]->booleanVars[214]/* d[6].d.droneDead DISCRETE */)  = (data->simulationInfo->booleanVarsPre[214]/* d[6].d.droneDead DISCRETE */) ;

  (data->localData[0]->integerVars[62]/* d[6].d.droneState DISCRETE */)  = (data->simulationInfo->integerVarsPre[62]/* d[6].d.droneState DISCRETE */) ;

  (data->localData[0]->realVars[796]/* d[6].d.battery DISCRETE */)  = (data->simulationInfo->realVarsPre[796]/* d[6].d.battery DISCRETE */) ;

  (data->localData[0]->booleanVars[50]/* $whenCondition55 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[50]/* $whenCondition55 DISCRETE */) ;

  (data->localData[0]->booleanVars[49]/* $whenCondition54 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[49]/* $whenCondition54 DISCRETE */) ;

  tmp602 = Less(fabs((data->simulationInfo->realVarsPre[796]/* d[6].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[49]/* $whenCondition54 DISCRETE */)  = tmp602;

  (data->localData[0]->booleanVars[50]/* $whenCondition55 DISCRETE */)  = (data->simulationInfo->samples[15] && ((data->simulationInfo->integerVarsPre[62]/* d[6].d.droneState DISCRETE */)  == ((modelica_integer) 1)));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[796]/* d[6].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[2740]/* d[6].d.p.capacity PARAM */) ;

      (data->localData[0]->integerVars[62]/* d[6].d.droneState DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->booleanVars[214]/* d[6].d.droneDead DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[49]/* $whenCondition54 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[49]/* $whenCondition54 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->booleanVars[214]/* d[6].d.droneDead DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[50]/* $whenCondition55 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[50]/* $whenCondition55 DISCRETE */)  /* edge */))
    {
      real_array_create(&tmp604, ((modelica_real*)&((&data->simulationInfo->realParameter[2812]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 6) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp605, ((modelica_real*)&((&data->simulationInfo->realParameter[2791]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 6) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp606, ((modelica_real*)&((&data->simulationInfo->realParameter[2042]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 6) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
      if(omc_returnedHome(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[2922]/* d[6].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[72]/* d[6].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[79]/* d[6].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[2033]/* d[6].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[2026]/* d[6].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[2040]/* d[6].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[2873]/* d[6].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[93]/* d[6].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[2747]/* d[6].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[2894]/* d[6].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[2887]/* d[6].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[2761]/* d[6].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[2880]/* d[6].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[2726]/* d[6].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[2768]/* d[6].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[2719]/* d[6].d.p.arrivalThreshold PARAM */) , tmp604, tmp605, (data->simulationInfo->realParameter[2845]/* d[6].d.p.m PARAM */) , (data->simulationInfo->realParameter[2859]/* d[6].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[2838]/* d[6].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[2936]/* d[6].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[2852]/* d[6].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[2866]/* d[6].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[2775]/* d[6].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[2929]/* d[6].d.p.unita PARAM */) , (data->simulationInfo->realParameter[2740]/* d[6].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[2733]/* d[6].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[2754]/* d[6].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[2901]/* d[6].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[2789]/* d[6].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[2782]/* d[6].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[2908]/* d[6].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[2915]/* d[6].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[86]/* d[6].d.p.nAreas PARAM */) , tmp606), (data->simulationInfo->realVarsPre[26]/* d[6].d.x STATE(1,d[6].d.Vx) */) , (data->simulationInfo->realVarsPre[33]/* d[6].d.y STATE(1,d[6].d.Vy) */) , (data->simulationInfo->realVarsPre[40]/* d[6].d.z STATE(1,d[6].d.Vz) */) ))
      {
        real_array_create(&tmp607, ((modelica_real*)&((&data->simulationInfo->realParameter[2812]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 6) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp608, ((modelica_real*)&((&data->simulationInfo->realParameter[2791]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 6) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp609, ((modelica_real*)&((&data->simulationInfo->realParameter[2042]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 6) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
        (data->localData[0]->realVars[796]/* d[6].d.battery DISCRETE */)  = omc_charging(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[2922]/* d[6].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[72]/* d[6].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[79]/* d[6].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[2033]/* d[6].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[2026]/* d[6].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[2040]/* d[6].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[2873]/* d[6].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[93]/* d[6].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[2747]/* d[6].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[2894]/* d[6].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[2887]/* d[6].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[2761]/* d[6].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[2880]/* d[6].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[2726]/* d[6].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[2768]/* d[6].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[2719]/* d[6].d.p.arrivalThreshold PARAM */) , tmp607, tmp608, (data->simulationInfo->realParameter[2845]/* d[6].d.p.m PARAM */) , (data->simulationInfo->realParameter[2859]/* d[6].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[2838]/* d[6].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[2936]/* d[6].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[2852]/* d[6].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[2866]/* d[6].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[2775]/* d[6].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[2929]/* d[6].d.p.unita PARAM */) , (data->simulationInfo->realParameter[2740]/* d[6].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[2733]/* d[6].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[2754]/* d[6].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[2901]/* d[6].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[2789]/* d[6].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[2782]/* d[6].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[2908]/* d[6].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[2915]/* d[6].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[86]/* d[6].d.p.nAreas PARAM */) , tmp609), (data->simulationInfo->realVarsPre[796]/* d[6].d.battery DISCRETE */) );
      }
      else
      {
        (data->localData[0]->realVars[796]/* d[6].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[796]/* d[6].d.battery DISCRETE */) , (data->simulationInfo->realParameter[2733]/* d[6].d.p.batteryDischarge PARAM */) );
      }
    }
  }
  TRACE_POP
}
/*
equation index: 676
type: ALGORITHM

  d[6].comm_state := pre(d[6].comm_state);
  d[6].fifox := pre(d[6].fifox);
  d[6].writesignal := pre(d[6].writesignal);
  d[6].readsignal := pre(d[6].readsignal);
  d[6].flag := pre(d[6].flag);
  d[6].setz := pre(d[6].setz);
  d[6].sety := pre(d[6].sety);
  d[6].setx := pre(d[6].setx);
  d[6].msg_to_cc[5] := pre(d[6].msg_to_cc[5]);
  d[6].msg_to_cc[4] := pre(d[6].msg_to_cc[4]);
  d[6].msg_to_cc[3] := pre(d[6].msg_to_cc[3]);
  d[6].msg_to_cc[2] := pre(d[6].msg_to_cc[2]);
  d[6].msg_to_cc[1] := pre(d[6].msg_to_cc[1]);
  $whenCondition51 := pre($whenCondition51);
  $whenCondition51 := sample(18, 0.0, d[6].p.Tdrone);
  when false then
    d[6].msg_to_cc := {0.0, 0.0, 0.0, 0.0, 0.0};
    d[6].setx := myrandom() * d[6].p.flyZone[1];
    d[6].sety := myrandom() * d[6].p.flyZone[2];
    d[6].setz := myrandom() * d[6].p.flyZone[3];
    d[6].flag := 0;
    d[6].readsignal := false;
    d[6].writesignal := false;
    d[6].fifox := 0;
    d[6].comm_state := 10;
  elsewhen $whenCondition51 then
    if pre(d[6].d.droneDead) then
      d[6].comm_state := 0;
    elseif pre(d[6].comm_state) == 10 then
      (d[6].readsignal, d[6].fifox) := ReadFromFIFO(pre(d[6].fifox), pre(d[6].datavailable), pre(d[6].readsignal));
      if FifoIODone(d[6].fifox) then
        d[6].flag := integer(cc_to_drone[6].outputdata[1]);
        if d[6].flag == 1 then
          d[6].msg_to_cc[1] := 2.0;
          d[6].msg_to_cc[2] := d[6].d.x;
          d[6].msg_to_cc[3] := d[6].d.y;
          d[6].msg_to_cc[4] := d[6].d.z;
          d[6].msg_to_cc[5] := d[6].d.battery;
          d[6].comm_state := 20;
        elseif d[6].flag == 2 then
          d[6].setx := cc_to_drone[6].outputdata[2];
          d[6].sety := cc_to_drone[6].outputdata[3];
          d[6].setz := cc_to_drone[6].outputdata[4];
          d[6].comm_state := pre(d[6].comm_state);
        end if;
        d[6].fifox := 0;
      end if;
    elseif pre(d[6].comm_state) == 20 then
      (d[6].writesignal, d[6].fifox) := WriteToFIFO(pre(d[6].fifox), pre(d[6].writesignal), pre(d[6].spaceavailable));
      if FifoIODone(d[6].fifox) then
        d[6].comm_state := 10;
        d[6].fifox := 0;
      end if;
    else
      d[6].comm_state := pre(d[6].comm_state);
    end if;
  end when;
*/
void System_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  real_array tmp610;
  real_array tmp611;
  (data->localData[0]->integerVars[55]/* d[6].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[55]/* d[6].comm_state DISCRETE */) ;

  (data->localData[0]->integerVars[69]/* d[6].fifox DISCRETE */)  = (data->simulationInfo->integerVarsPre[69]/* d[6].fifox DISCRETE */) ;

  (data->localData[0]->booleanVars[242]/* d[6].writesignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[242]/* d[6].writesignal DISCRETE */) ;

  (data->localData[0]->booleanVars[228]/* d[6].readsignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[228]/* d[6].readsignal DISCRETE */) ;

  (data->localData[0]->integerVars[76]/* d[6].flag DISCRETE */)  = (data->simulationInfo->integerVarsPre[76]/* d[6].flag DISCRETE */) ;

  (data->localData[0]->realVars[852]/* d[6].setz DISCRETE */)  = (data->simulationInfo->realVarsPre[852]/* d[6].setz DISCRETE */) ;

  (data->localData[0]->realVars[845]/* d[6].sety DISCRETE */)  = (data->simulationInfo->realVarsPre[845]/* d[6].sety DISCRETE */) ;

  (data->localData[0]->realVars[838]/* d[6].setx DISCRETE */)  = (data->simulationInfo->realVarsPre[838]/* d[6].setx DISCRETE */) ;

  (data->localData[0]->realVars[827]/* d[6].msg_to_cc[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[827]/* d[6].msg_to_cc[5] DISCRETE */) ;

  (data->localData[0]->realVars[826]/* d[6].msg_to_cc[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[826]/* d[6].msg_to_cc[4] DISCRETE */) ;

  (data->localData[0]->realVars[825]/* d[6].msg_to_cc[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[825]/* d[6].msg_to_cc[3] DISCRETE */) ;

  (data->localData[0]->realVars[824]/* d[6].msg_to_cc[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[824]/* d[6].msg_to_cc[2] DISCRETE */) ;

  (data->localData[0]->realVars[823]/* d[6].msg_to_cc[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[823]/* d[6].msg_to_cc[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[46]/* $whenCondition51 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[46]/* $whenCondition51 DISCRETE */) ;

  (data->localData[0]->booleanVars[46]/* $whenCondition51 DISCRETE */)  = data->simulationInfo->samples[17];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      array_alloc_scalar_real_array(&tmp610, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp611, ((modelica_real*)&((&(data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 6) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
      real_array_copy_data(tmp610, tmp611);

      (data->localData[0]->realVars[838]/* d[6].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3744]/* d[6].p.flyZone[1] PARAM */) );

      (data->localData[0]->realVars[845]/* d[6].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3745]/* d[6].p.flyZone[2] PARAM */) );

      (data->localData[0]->realVars[852]/* d[6].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3746]/* d[6].p.flyZone[3] PARAM */) );

      (data->localData[0]->integerVars[76]/* d[6].flag DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->booleanVars[228]/* d[6].readsignal DISCRETE */)  = 0;

      (data->localData[0]->booleanVars[242]/* d[6].writesignal DISCRETE */)  = 0;

      (data->localData[0]->integerVars[69]/* d[6].fifox DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[55]/* d[6].comm_state DISCRETE */)  = ((modelica_integer) 10);
    }
    else if(((data->localData[0]->booleanVars[46]/* $whenCondition51 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[46]/* $whenCondition51 DISCRETE */)  /* edge */))
    {
      if((data->simulationInfo->booleanVarsPre[214]/* d[6].d.droneDead DISCRETE */) )
      {
        (data->localData[0]->integerVars[55]/* d[6].comm_state DISCRETE */)  = ((modelica_integer) 0);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[55]/* d[6].comm_state DISCRETE */)  == ((modelica_integer) 10)))
        {
          (data->localData[0]->booleanVars[228]/* d[6].readsignal DISCRETE */)  = omc_ReadFromFIFO(threadData, (data->simulationInfo->integerVarsPre[69]/* d[6].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[221]/* d[6].datavailable DISCRETE */) , (data->simulationInfo->booleanVarsPre[228]/* d[6].readsignal DISCRETE */)  ,&(data->localData[0]->integerVars[69]/* d[6].fifox DISCRETE */) );

          if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[69]/* d[6].fifox DISCRETE */) ))
          {
            (data->localData[0]->integerVars[76]/* d[6].flag DISCRETE */)  = ((modelica_integer)floor((data->localData[0]->realVars[760]/* cc_to_drone[6].outputdata[1] DISCRETE */) ));

            if(((data->localData[0]->integerVars[76]/* d[6].flag DISCRETE */)  == ((modelica_integer) 1)))
            {
              (data->localData[0]->realVars[823]/* d[6].msg_to_cc[1] DISCRETE */)  = 2.0;

              (data->localData[0]->realVars[824]/* d[6].msg_to_cc[2] DISCRETE */)  = (data->localData[0]->realVars[26]/* d[6].d.x STATE(1,d[6].d.Vx) */) ;

              (data->localData[0]->realVars[825]/* d[6].msg_to_cc[3] DISCRETE */)  = (data->localData[0]->realVars[33]/* d[6].d.y STATE(1,d[6].d.Vy) */) ;

              (data->localData[0]->realVars[826]/* d[6].msg_to_cc[4] DISCRETE */)  = (data->localData[0]->realVars[40]/* d[6].d.z STATE(1,d[6].d.Vz) */) ;

              (data->localData[0]->realVars[827]/* d[6].msg_to_cc[5] DISCRETE */)  = (data->localData[0]->realVars[796]/* d[6].d.battery DISCRETE */) ;

              (data->localData[0]->integerVars[55]/* d[6].comm_state DISCRETE */)  = ((modelica_integer) 20);
            }
            else
            {
              if(((data->localData[0]->integerVars[76]/* d[6].flag DISCRETE */)  == ((modelica_integer) 2)))
              {
                (data->localData[0]->realVars[838]/* d[6].setx DISCRETE */)  = (data->localData[0]->realVars[761]/* cc_to_drone[6].outputdata[2] DISCRETE */) ;

                (data->localData[0]->realVars[845]/* d[6].sety DISCRETE */)  = (data->localData[0]->realVars[762]/* cc_to_drone[6].outputdata[3] DISCRETE */) ;

                (data->localData[0]->realVars[852]/* d[6].setz DISCRETE */)  = (data->localData[0]->realVars[763]/* cc_to_drone[6].outputdata[4] DISCRETE */) ;

                (data->localData[0]->integerVars[55]/* d[6].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[55]/* d[6].comm_state DISCRETE */) ;
              }
            }

            (data->localData[0]->integerVars[69]/* d[6].fifox DISCRETE */)  = ((modelica_integer) 0);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[55]/* d[6].comm_state DISCRETE */)  == ((modelica_integer) 20)))
          {
            (data->localData[0]->booleanVars[242]/* d[6].writesignal DISCRETE */)  = omc_WriteToFIFO(threadData, (data->simulationInfo->integerVarsPre[69]/* d[6].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[242]/* d[6].writesignal DISCRETE */) , (data->simulationInfo->booleanVarsPre[235]/* d[6].spaceavailable DISCRETE */)  ,&(data->localData[0]->integerVars[69]/* d[6].fifox DISCRETE */) );

            if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[69]/* d[6].fifox DISCRETE */) ))
            {
              (data->localData[0]->integerVars[55]/* d[6].comm_state DISCRETE */)  = ((modelica_integer) 10);

              (data->localData[0]->integerVars[69]/* d[6].fifox DISCRETE */)  = ((modelica_integer) 0);
            }
          }
          else
          {
            (data->localData[0]->integerVars[55]/* d[6].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[55]/* d[6].comm_state DISCRETE */) ;
          }
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 677
type: SIMPLE_ASSIGN
drone_to_cc[6].inputdata[3] = d[6].msg_to_cc[3]
*/
void System_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  (data->localData[0]->realVars[249]/* drone_to_cc[6].inputdata[3] variable */)  = (data->localData[0]->realVars[825]/* d[6].msg_to_cc[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 678
type: SIMPLE_ASSIGN
drone_to_cc[6].inputdata[2] = d[6].msg_to_cc[2]
*/
void System_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  (data->localData[0]->realVars[248]/* drone_to_cc[6].inputdata[2] variable */)  = (data->localData[0]->realVars[824]/* d[6].msg_to_cc[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 679
type: SIMPLE_ASSIGN
drone_to_cc[6].inputdata[1] = d[6].msg_to_cc[1]
*/
void System_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  (data->localData[0]->realVars[247]/* drone_to_cc[6].inputdata[1] variable */)  = (data->localData[0]->realVars[823]/* d[6].msg_to_cc[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 680
type: SIMPLE_ASSIGN
d[6].ctrl.sety = d[6].sety
*/
void System_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  (data->localData[0]->realVars[199]/* d[6].ctrl.sety variable */)  = (data->localData[0]->realVars[845]/* d[6].sety DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 681
type: SIMPLE_ASSIGN
drone_to_cc[6].inputdata[5] = d[6].msg_to_cc[5]
*/
void System_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  (data->localData[0]->realVars[251]/* drone_to_cc[6].inputdata[5] variable */)  = (data->localData[0]->realVars[827]/* d[6].msg_to_cc[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 682
type: SIMPLE_ASSIGN
d[6].ctrl.setx = d[6].setx
*/
void System_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  (data->localData[0]->realVars[192]/* d[6].ctrl.setx variable */)  = (data->localData[0]->realVars[838]/* d[6].setx DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 683
type: SIMPLE_ASSIGN
cc_to_drone[6].readsignal = d[6].readsignal
*/
void System_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  (data->localData[0]->booleanVars[179]/* cc_to_drone[6].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[228]/* d[6].readsignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 684
type: SIMPLE_ASSIGN
cc_to_drone[6].readsigint = not pre(cc_to_drone[6].readsignal) == cc_to_drone[6].readsignal
*/
void System_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  (data->localData[0]->booleanVars[172]/* cc_to_drone[6].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[179]/* cc_to_drone[6].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[179]/* cc_to_drone[6].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[179]/* cc_to_drone[6].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[179]/* cc_to_drone[6].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 685
type: SIMPLE_ASSIGN
drone_to_cc[6].writesignal = d[6].writesignal
*/
void System_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  (data->localData[0]->booleanVars[284]/* drone_to_cc[6].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[242]/* d[6].writesignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 686
type: SIMPLE_ASSIGN
drone_to_cc[6].writesigint = not pre(drone_to_cc[6].writesignal) == drone_to_cc[6].writesignal
*/
void System_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  (data->localData[0]->booleanVars[277]/* drone_to_cc[6].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[284]/* drone_to_cc[6].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[284]/* drone_to_cc[6].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[284]/* drone_to_cc[6].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[284]/* drone_to_cc[6].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 687
type: SIMPLE_ASSIGN
d[6].ctrl.setz = d[6].setz
*/
void System_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  (data->localData[0]->realVars[206]/* d[6].ctrl.setz variable */)  = (data->localData[0]->realVars[852]/* d[6].setz DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 688
type: SIMPLE_ASSIGN
drone_to_cc[6].inputdata[4] = d[6].msg_to_cc[4]
*/
void System_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  (data->localData[0]->realVars[250]/* drone_to_cc[6].inputdata[4] variable */)  = (data->localData[0]->realVars[826]/* d[6].msg_to_cc[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 689
type: ALGORITHM

  drone_to_cc[6].newest := pre(drone_to_cc[6].newest);
  drone_to_cc[6].oldest := pre(drone_to_cc[6].oldest);
  drone_to_cc[6].fifosize := pre(drone_to_cc[6].fifosize);
  drone_to_cc[6].fifo[10,5] := pre(drone_to_cc[6].fifo[10,5]);
  drone_to_cc[6].fifo[10,4] := pre(drone_to_cc[6].fifo[10,4]);
  drone_to_cc[6].fifo[10,3] := pre(drone_to_cc[6].fifo[10,3]);
  drone_to_cc[6].fifo[10,2] := pre(drone_to_cc[6].fifo[10,2]);
  drone_to_cc[6].fifo[10,1] := pre(drone_to_cc[6].fifo[10,1]);
  drone_to_cc[6].fifo[9,5] := pre(drone_to_cc[6].fifo[9,5]);
  drone_to_cc[6].fifo[9,4] := pre(drone_to_cc[6].fifo[9,4]);
  drone_to_cc[6].fifo[9,3] := pre(drone_to_cc[6].fifo[9,3]);
  drone_to_cc[6].fifo[9,2] := pre(drone_to_cc[6].fifo[9,2]);
  drone_to_cc[6].fifo[9,1] := pre(drone_to_cc[6].fifo[9,1]);
  drone_to_cc[6].fifo[8,5] := pre(drone_to_cc[6].fifo[8,5]);
  drone_to_cc[6].fifo[8,4] := pre(drone_to_cc[6].fifo[8,4]);
  drone_to_cc[6].fifo[8,3] := pre(drone_to_cc[6].fifo[8,3]);
  drone_to_cc[6].fifo[8,2] := pre(drone_to_cc[6].fifo[8,2]);
  drone_to_cc[6].fifo[8,1] := pre(drone_to_cc[6].fifo[8,1]);
  drone_to_cc[6].fifo[7,5] := pre(drone_to_cc[6].fifo[7,5]);
  drone_to_cc[6].fifo[7,4] := pre(drone_to_cc[6].fifo[7,4]);
  drone_to_cc[6].fifo[7,3] := pre(drone_to_cc[6].fifo[7,3]);
  drone_to_cc[6].fifo[7,2] := pre(drone_to_cc[6].fifo[7,2]);
  drone_to_cc[6].fifo[7,1] := pre(drone_to_cc[6].fifo[7,1]);
  drone_to_cc[6].fifo[6,5] := pre(drone_to_cc[6].fifo[6,5]);
  drone_to_cc[6].fifo[6,4] := pre(drone_to_cc[6].fifo[6,4]);
  drone_to_cc[6].fifo[6,3] := pre(drone_to_cc[6].fifo[6,3]);
  drone_to_cc[6].fifo[6,2] := pre(drone_to_cc[6].fifo[6,2]);
  drone_to_cc[6].fifo[6,1] := pre(drone_to_cc[6].fifo[6,1]);
  drone_to_cc[6].fifo[5,5] := pre(drone_to_cc[6].fifo[5,5]);
  drone_to_cc[6].fifo[5,4] := pre(drone_to_cc[6].fifo[5,4]);
  drone_to_cc[6].fifo[5,3] := pre(drone_to_cc[6].fifo[5,3]);
  drone_to_cc[6].fifo[5,2] := pre(drone_to_cc[6].fifo[5,2]);
  drone_to_cc[6].fifo[5,1] := pre(drone_to_cc[6].fifo[5,1]);
  drone_to_cc[6].fifo[4,5] := pre(drone_to_cc[6].fifo[4,5]);
  drone_to_cc[6].fifo[4,4] := pre(drone_to_cc[6].fifo[4,4]);
  drone_to_cc[6].fifo[4,3] := pre(drone_to_cc[6].fifo[4,3]);
  drone_to_cc[6].fifo[4,2] := pre(drone_to_cc[6].fifo[4,2]);
  drone_to_cc[6].fifo[4,1] := pre(drone_to_cc[6].fifo[4,1]);
  drone_to_cc[6].fifo[3,5] := pre(drone_to_cc[6].fifo[3,5]);
  drone_to_cc[6].fifo[3,4] := pre(drone_to_cc[6].fifo[3,4]);
  drone_to_cc[6].fifo[3,3] := pre(drone_to_cc[6].fifo[3,3]);
  drone_to_cc[6].fifo[3,2] := pre(drone_to_cc[6].fifo[3,2]);
  drone_to_cc[6].fifo[3,1] := pre(drone_to_cc[6].fifo[3,1]);
  drone_to_cc[6].fifo[2,5] := pre(drone_to_cc[6].fifo[2,5]);
  drone_to_cc[6].fifo[2,4] := pre(drone_to_cc[6].fifo[2,4]);
  drone_to_cc[6].fifo[2,3] := pre(drone_to_cc[6].fifo[2,3]);
  drone_to_cc[6].fifo[2,2] := pre(drone_to_cc[6].fifo[2,2]);
  drone_to_cc[6].fifo[2,1] := pre(drone_to_cc[6].fifo[2,1]);
  drone_to_cc[6].fifo[1,5] := pre(drone_to_cc[6].fifo[1,5]);
  drone_to_cc[6].fifo[1,4] := pre(drone_to_cc[6].fifo[1,4]);
  drone_to_cc[6].fifo[1,3] := pre(drone_to_cc[6].fifo[1,3]);
  drone_to_cc[6].fifo[1,2] := pre(drone_to_cc[6].fifo[1,2]);
  drone_to_cc[6].fifo[1,1] := pre(drone_to_cc[6].fifo[1,1]);
  drone_to_cc[6].spaceavailable := pre(drone_to_cc[6].spaceavailable);
  drone_to_cc[6].outputdata[5] := pre(drone_to_cc[6].outputdata[5]);
  drone_to_cc[6].outputdata[4] := pre(drone_to_cc[6].outputdata[4]);
  drone_to_cc[6].outputdata[3] := pre(drone_to_cc[6].outputdata[3]);
  drone_to_cc[6].outputdata[2] := pre(drone_to_cc[6].outputdata[2]);
  drone_to_cc[6].outputdata[1] := pre(drone_to_cc[6].outputdata[1]);
  drone_to_cc[6].datavailable := pre(drone_to_cc[6].datavailable);
  $whenCondition6 := pre($whenCondition6);
  $whenCondition5 := pre($whenCondition5);
  $whenCondition4 := pre($whenCondition4);
  $whenCondition4 := pre(drone_to_cc[6].readsigint) and pre(drone_to_cc[6].writesigint);
  $whenCondition5 := pre(drone_to_cc[6].readsigint) and not pre(drone_to_cc[6].writesigint) and pre(drone_to_cc[6].fifosize) >= 1;
  $whenCondition6 := not pre(drone_to_cc[6].readsigint) and pre(drone_to_cc[6].writesigint) and pre(drone_to_cc[6].fifosize) < 10;
  when false then
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
  elsewhen $whenCondition4 then
    if pre(drone_to_cc[6].fifosize) < 10 then
      for j in 1:5 loop
        drone_to_cc[6].fifo[pre(drone_to_cc[6].newest),j] := drone_to_cc[6].inputdata[j];
      end for;
      drone_to_cc[6].newest := mod(pre(drone_to_cc[6].newest), 10) + 1;
      for j in 1:5 loop
        drone_to_cc[6].outputdata[j] := drone_to_cc[6].fifo[pre(drone_to_cc[6].oldest),j];
      end for;
      drone_to_cc[6].oldest := mod(pre(drone_to_cc[6].oldest), 10) + 1;
    else
      for j in 1:5 loop
        drone_to_cc[6].outputdata[j] := drone_to_cc[6].fifo[pre(drone_to_cc[6].oldest),j];
      end for;
      drone_to_cc[6].oldest := mod(pre(drone_to_cc[6].oldest), 10) + 1;
      for j in 1:5 loop
        drone_to_cc[6].fifo[pre(drone_to_cc[6].newest),j] := drone_to_cc[6].inputdata[j];
      end for;
      drone_to_cc[6].newest := mod(pre(drone_to_cc[6].newest), 10) + 1;
    end if;
  elsewhen $whenCondition5 then
    for j in 1:5 loop
      drone_to_cc[6].outputdata[j] := drone_to_cc[6].fifo[pre(drone_to_cc[6].oldest),j];
    end for;
    drone_to_cc[6].oldest := mod(pre(drone_to_cc[6].oldest), 10) + 1;
    drone_to_cc[6].fifosize := pre(drone_to_cc[6].fifosize) - 1;
    drone_to_cc[6].datavailable := drone_to_cc[6].fifosize >= 1;
    drone_to_cc[6].spaceavailable := true;
  elsewhen $whenCondition6 then
    for j in 1:5 loop
      drone_to_cc[6].fifo[pre(drone_to_cc[6].newest),j] := drone_to_cc[6].inputdata[j];
    end for;
    drone_to_cc[6].newest := mod(pre(drone_to_cc[6].newest), 10) + 1;
    drone_to_cc[6].fifosize := pre(drone_to_cc[6].fifosize) + 1;
    drone_to_cc[6].datavailable := true;
    drone_to_cc[6].spaceavailable := pre(drone_to_cc[6].fifosize) < 10;
    for j in 1:5 loop
      drone_to_cc[6].outputdata[j] := drone_to_cc[6].fifo[pre(drone_to_cc[6].oldest),j];
    end for;
  end when;
*/
void System_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  modelica_boolean tmp618;
  modelica_boolean tmp619;
  modelica_integer tmp620;
  modelica_integer tmp621;
  modelica_integer tmp622;
  modelica_integer tmp623;
  modelica_integer tmp624;
  modelica_integer tmp625;
  modelica_integer tmp626;
  modelica_integer tmp627;
  modelica_integer tmp628;
  modelica_boolean tmp629;
  modelica_integer tmp630;
  modelica_integer tmp631;
  modelica_integer tmp632;
  modelica_integer tmp633;
  modelica_integer tmp634;
  modelica_integer tmp635;
  modelica_integer tmp636;
  modelica_integer tmp637;
  modelica_integer tmp638;
  modelica_integer tmp639;
  modelica_integer tmp640;
  modelica_integer tmp641;
  modelica_integer tmp642;
  modelica_integer tmp643;
  modelica_integer tmp644;
  modelica_integer tmp645;
  modelica_integer tmp646;
  modelica_integer tmp647;
  modelica_integer tmp648;
  modelica_integer tmp649;
  modelica_boolean tmp650;
  modelica_integer tmp651;
  modelica_integer tmp652;
  modelica_integer tmp653;
  modelica_integer tmp654;
  modelica_boolean tmp655;
  modelica_integer tmp656;
  modelica_integer tmp657;
  modelica_integer tmp658;
  (data->localData[0]->integerVars[90]/* drone_to_cc[6].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[90]/* drone_to_cc[6].newest DISCRETE */) ;

  (data->localData[0]->integerVars[97]/* drone_to_cc[6].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[97]/* drone_to_cc[6].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[83]/* drone_to_cc[6].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[83]/* drone_to_cc[6].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[1153]/* drone_to_cc[6].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1153]/* drone_to_cc[6].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[1152]/* drone_to_cc[6].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1152]/* drone_to_cc[6].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[1151]/* drone_to_cc[6].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1151]/* drone_to_cc[6].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[1150]/* drone_to_cc[6].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1150]/* drone_to_cc[6].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[1149]/* drone_to_cc[6].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1149]/* drone_to_cc[6].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[1148]/* drone_to_cc[6].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1148]/* drone_to_cc[6].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[1147]/* drone_to_cc[6].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1147]/* drone_to_cc[6].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[1146]/* drone_to_cc[6].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1146]/* drone_to_cc[6].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[1145]/* drone_to_cc[6].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1145]/* drone_to_cc[6].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[1144]/* drone_to_cc[6].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1144]/* drone_to_cc[6].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[1143]/* drone_to_cc[6].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1143]/* drone_to_cc[6].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[1142]/* drone_to_cc[6].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1142]/* drone_to_cc[6].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[1141]/* drone_to_cc[6].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1141]/* drone_to_cc[6].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[1140]/* drone_to_cc[6].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1140]/* drone_to_cc[6].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[1139]/* drone_to_cc[6].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1139]/* drone_to_cc[6].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[1138]/* drone_to_cc[6].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1138]/* drone_to_cc[6].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[1137]/* drone_to_cc[6].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1137]/* drone_to_cc[6].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[1136]/* drone_to_cc[6].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1136]/* drone_to_cc[6].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[1135]/* drone_to_cc[6].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1135]/* drone_to_cc[6].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[1134]/* drone_to_cc[6].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1134]/* drone_to_cc[6].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[1133]/* drone_to_cc[6].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1133]/* drone_to_cc[6].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[1132]/* drone_to_cc[6].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1132]/* drone_to_cc[6].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[1131]/* drone_to_cc[6].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1131]/* drone_to_cc[6].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[1130]/* drone_to_cc[6].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1130]/* drone_to_cc[6].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[1129]/* drone_to_cc[6].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1129]/* drone_to_cc[6].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[1128]/* drone_to_cc[6].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1128]/* drone_to_cc[6].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[1127]/* drone_to_cc[6].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1127]/* drone_to_cc[6].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[1126]/* drone_to_cc[6].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1126]/* drone_to_cc[6].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[1125]/* drone_to_cc[6].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1125]/* drone_to_cc[6].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[1124]/* drone_to_cc[6].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1124]/* drone_to_cc[6].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[1123]/* drone_to_cc[6].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1123]/* drone_to_cc[6].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[1122]/* drone_to_cc[6].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1122]/* drone_to_cc[6].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[1121]/* drone_to_cc[6].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1121]/* drone_to_cc[6].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[1120]/* drone_to_cc[6].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1120]/* drone_to_cc[6].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[1119]/* drone_to_cc[6].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1119]/* drone_to_cc[6].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[1118]/* drone_to_cc[6].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1118]/* drone_to_cc[6].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[1117]/* drone_to_cc[6].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1117]/* drone_to_cc[6].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[1116]/* drone_to_cc[6].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1116]/* drone_to_cc[6].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[1115]/* drone_to_cc[6].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1115]/* drone_to_cc[6].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[1114]/* drone_to_cc[6].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1114]/* drone_to_cc[6].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[1113]/* drone_to_cc[6].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1113]/* drone_to_cc[6].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[1112]/* drone_to_cc[6].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1112]/* drone_to_cc[6].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[1111]/* drone_to_cc[6].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1111]/* drone_to_cc[6].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[1110]/* drone_to_cc[6].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1110]/* drone_to_cc[6].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[1109]/* drone_to_cc[6].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1109]/* drone_to_cc[6].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[1108]/* drone_to_cc[6].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1108]/* drone_to_cc[6].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[1107]/* drone_to_cc[6].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1107]/* drone_to_cc[6].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[1106]/* drone_to_cc[6].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1106]/* drone_to_cc[6].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[1105]/* drone_to_cc[6].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1105]/* drone_to_cc[6].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[1104]/* drone_to_cc[6].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1104]/* drone_to_cc[6].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[270]/* drone_to_cc[6].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[270]/* drone_to_cc[6].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[1233]/* drone_to_cc[6].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1233]/* drone_to_cc[6].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[1232]/* drone_to_cc[6].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1232]/* drone_to_cc[6].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[1231]/* drone_to_cc[6].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1231]/* drone_to_cc[6].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[1230]/* drone_to_cc[6].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1230]/* drone_to_cc[6].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[1229]/* drone_to_cc[6].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1229]/* drone_to_cc[6].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[249]/* drone_to_cc[6].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[249]/* drone_to_cc[6].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[55]/* $whenCondition6 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[55]/* $whenCondition6 DISCRETE */) ;

  (data->localData[0]->booleanVars[44]/* $whenCondition5 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[44]/* $whenCondition5 DISCRETE */) ;

  (data->localData[0]->booleanVars[33]/* $whenCondition4 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[33]/* $whenCondition4 DISCRETE */) ;

  (data->localData[0]->booleanVars[33]/* $whenCondition4 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[256]/* drone_to_cc[6].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[277]/* drone_to_cc[6].writesigint DISCRETE */) );

  tmp618 = GreaterEq((data->simulationInfo->integerVarsPre[83]/* drone_to_cc[6].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[44]/* $whenCondition5 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[256]/* drone_to_cc[6].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[277]/* drone_to_cc[6].writesigint DISCRETE */) )) && tmp618);

  tmp619 = Less((data->simulationInfo->integerVarsPre[83]/* drone_to_cc[6].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[55]/* $whenCondition6 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[256]/* drone_to_cc[6].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[277]/* drone_to_cc[6].writesigint DISCRETE */) ) && tmp619);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[249]/* drone_to_cc[6].datavailable DISCRETE */)  = 0;

      tmp620 = ((modelica_integer) 1); tmp621 = 1; tmp622 = ((modelica_integer) 5);
      if(!(((tmp621 > 0) && (tmp620 > tmp622)) || ((tmp621 < 0) && (tmp620 < tmp622))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp620, tmp622); j += tmp621)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 6) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[270]/* drone_to_cc[6].spaceavailable DISCRETE */)  = 1;

      tmp626 = ((modelica_integer) 1); tmp627 = 1; tmp628 = ((modelica_integer) 10);
      if(!(((tmp627 > 0) && (tmp626 > tmp628)) || ((tmp627 < 0) && (tmp626 < tmp628))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp626, tmp628); i += tmp627)
        {
          tmp623 = ((modelica_integer) 1); tmp624 = 1; tmp625 = ((modelica_integer) 5);
          if(!(((tmp624 > 0) && (tmp623 > tmp625)) || ((tmp624 < 0) && (tmp623 < tmp625))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp623, tmp625); j += tmp624)
            {
              (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 6) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[83]/* drone_to_cc[6].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[97]/* drone_to_cc[6].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[90]/* drone_to_cc[6].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[33]/* $whenCondition4 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[33]/* $whenCondition4 DISCRETE */)  /* edge */))
    {
      tmp629 = Less((data->simulationInfo->integerVarsPre[83]/* drone_to_cc[6].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp629)
      {
        tmp630 = ((modelica_integer) 1); tmp631 = 1; tmp632 = ((modelica_integer) 5);
        if(!(((tmp631 > 0) && (tmp630 > tmp632)) || ((tmp631 < 0) && (tmp630 < tmp632))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp630, tmp632); j += tmp631)
          {
            (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 6) - 1) * 10 + ((data->simulationInfo->integerVarsPre[90]/* drone_to_cc[6].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 6) - 1) * 5 + (j-1)] ;
          }
        }

        tmp633 = ((modelica_integer) 10);
        if (tmp633 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[6].newest), 10)");}
        (data->localData[0]->integerVars[90]/* drone_to_cc[6].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[90]/* drone_to_cc[6].newest DISCRETE */) , tmp633) + ((modelica_integer) 1);

        tmp634 = ((modelica_integer) 1); tmp635 = 1; tmp636 = ((modelica_integer) 5);
        if(!(((tmp635 > 0) && (tmp634 > tmp636)) || ((tmp635 < 0) && (tmp634 < tmp636))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp634, tmp636); j += tmp635)
          {
            (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 6) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 6) - 1) * 10 + ((data->simulationInfo->integerVarsPre[97]/* drone_to_cc[6].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp637 = ((modelica_integer) 10);
        if (tmp637 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[6].oldest), 10)");}
        (data->localData[0]->integerVars[97]/* drone_to_cc[6].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[97]/* drone_to_cc[6].oldest DISCRETE */) , tmp637) + ((modelica_integer) 1);
      }
      else
      {
        tmp638 = ((modelica_integer) 1); tmp639 = 1; tmp640 = ((modelica_integer) 5);
        if(!(((tmp639 > 0) && (tmp638 > tmp640)) || ((tmp639 < 0) && (tmp638 < tmp640))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp638, tmp640); j += tmp639)
          {
            (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 6) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 6) - 1) * 10 + ((data->simulationInfo->integerVarsPre[97]/* drone_to_cc[6].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp641 = ((modelica_integer) 10);
        if (tmp641 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[6].oldest), 10)");}
        (data->localData[0]->integerVars[97]/* drone_to_cc[6].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[97]/* drone_to_cc[6].oldest DISCRETE */) , tmp641) + ((modelica_integer) 1);

        tmp642 = ((modelica_integer) 1); tmp643 = 1; tmp644 = ((modelica_integer) 5);
        if(!(((tmp643 > 0) && (tmp642 > tmp644)) || ((tmp643 < 0) && (tmp642 < tmp644))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp642, tmp644); j += tmp643)
          {
            (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 6) - 1) * 10 + ((data->simulationInfo->integerVarsPre[90]/* drone_to_cc[6].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 6) - 1) * 5 + (j-1)] ;
          }
        }

        tmp645 = ((modelica_integer) 10);
        if (tmp645 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[6].newest), 10)");}
        (data->localData[0]->integerVars[90]/* drone_to_cc[6].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[90]/* drone_to_cc[6].newest DISCRETE */) , tmp645) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[44]/* $whenCondition5 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[44]/* $whenCondition5 DISCRETE */)  /* edge */))
    {
      tmp646 = ((modelica_integer) 1); tmp647 = 1; tmp648 = ((modelica_integer) 5);
      if(!(((tmp647 > 0) && (tmp646 > tmp648)) || ((tmp647 < 0) && (tmp646 < tmp648))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp646, tmp648); j += tmp647)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 6) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 6) - 1) * 10 + ((data->simulationInfo->integerVarsPre[97]/* drone_to_cc[6].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp649 = ((modelica_integer) 10);
      if (tmp649 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[6].oldest), 10)");}
      (data->localData[0]->integerVars[97]/* drone_to_cc[6].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[97]/* drone_to_cc[6].oldest DISCRETE */) , tmp649) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[83]/* drone_to_cc[6].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[83]/* drone_to_cc[6].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp650 = GreaterEq((data->localData[0]->integerVars[83]/* drone_to_cc[6].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[249]/* drone_to_cc[6].datavailable DISCRETE */)  = tmp650;

      (data->localData[0]->booleanVars[270]/* drone_to_cc[6].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[55]/* $whenCondition6 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[55]/* $whenCondition6 DISCRETE */)  /* edge */))
    {
      tmp651 = ((modelica_integer) 1); tmp652 = 1; tmp653 = ((modelica_integer) 5);
      if(!(((tmp652 > 0) && (tmp651 > tmp653)) || ((tmp652 < 0) && (tmp651 < tmp653))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp651, tmp653); j += tmp652)
        {
          (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 6) - 1) * 10 + ((data->simulationInfo->integerVarsPre[90]/* drone_to_cc[6].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 6) - 1) * 5 + (j-1)] ;
        }
      }

      tmp654 = ((modelica_integer) 10);
      if (tmp654 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[6].newest), 10)");}
      (data->localData[0]->integerVars[90]/* drone_to_cc[6].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[90]/* drone_to_cc[6].newest DISCRETE */) , tmp654) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[83]/* drone_to_cc[6].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[83]/* drone_to_cc[6].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[249]/* drone_to_cc[6].datavailable DISCRETE */)  = 1;

      tmp655 = Less((data->simulationInfo->integerVarsPre[83]/* drone_to_cc[6].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[270]/* drone_to_cc[6].spaceavailable DISCRETE */)  = tmp655;

      tmp656 = ((modelica_integer) 1); tmp657 = 1; tmp658 = ((modelica_integer) 5);
      if(!(((tmp657 > 0) && (tmp656 > tmp658)) || ((tmp657 < 0) && (tmp656 < tmp658))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp656, tmp658); j += tmp657)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 6) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 6) - 1) * 10 + ((data->simulationInfo->integerVarsPre[97]/* drone_to_cc[6].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 690
type: SIMPLE_ASSIGN
cc.msg_from_drone[6,4] = drone_to_cc[6].outputdata[4]
*/
void System_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  (data->localData[0]->realVars[115]/* cc.msg_from_drone[6,4] variable */)  = (data->localData[0]->realVars[1232]/* drone_to_cc[6].outputdata[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 691
type: SIMPLE_ASSIGN
cc.msg_from_drone[6,1] = drone_to_cc[6].outputdata[1]
*/
void System_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  (data->localData[0]->realVars[112]/* cc.msg_from_drone[6,1] variable */)  = (data->localData[0]->realVars[1229]/* drone_to_cc[6].outputdata[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 692
type: SIMPLE_ASSIGN
cc.datavailable[6] = drone_to_cc[6].datavailable
*/
void System_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  (data->localData[0]->booleanVars[92]/* cc.datavailable[6] DISCRETE */)  = (data->localData[0]->booleanVars[249]/* drone_to_cc[6].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 693
type: SIMPLE_ASSIGN
d[6].spaceavailable = drone_to_cc[6].spaceavailable
*/
void System_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  (data->localData[0]->booleanVars[235]/* d[6].spaceavailable DISCRETE */)  = (data->localData[0]->booleanVars[270]/* drone_to_cc[6].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 694
type: SIMPLE_ASSIGN
cc.msg_from_drone[6,2] = drone_to_cc[6].outputdata[2]
*/
void System_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  (data->localData[0]->realVars[113]/* cc.msg_from_drone[6,2] variable */)  = (data->localData[0]->realVars[1230]/* drone_to_cc[6].outputdata[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 695
type: SIMPLE_ASSIGN
cc.msg_from_drone[6,5] = drone_to_cc[6].outputdata[5]
*/
void System_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  (data->localData[0]->realVars[116]/* cc.msg_from_drone[6,5] variable */)  = (data->localData[0]->realVars[1233]/* drone_to_cc[6].outputdata[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 696
type: SIMPLE_ASSIGN
cc.msg_from_drone[6,3] = drone_to_cc[6].outputdata[3]
*/
void System_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  (data->localData[0]->realVars[114]/* cc.msg_from_drone[6,3] variable */)  = (data->localData[0]->realVars[1231]/* drone_to_cc[6].outputdata[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 697
type: SIMPLE_ASSIGN
d[6].batteryPercentage = 100.0 * d[6].d.battery / d[6].p.capacity
*/
void System_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  (data->localData[0]->realVars[164]/* d[6].batteryPercentage variable */)  = (100.0) * (DIVISION_SIM((data->localData[0]->realVars[796]/* d[6].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[3657]/* d[6].p.capacity PARAM */) ,"d[6].p.capacity",equationIndexes));
  TRACE_POP
}
/*
equation index: 698
type: SIMPLE_ASSIGN
d[6].ctrl.droneDead = d[6].d.droneDead
*/
void System_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  (data->localData[0]->booleanVars[207]/* d[6].ctrl.droneDead DISCRETE */)  = (data->localData[0]->booleanVars[214]/* d[6].d.droneDead DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 699
type: ALGORITHM

  d[5].ctrl.destZ := pre(d[5].ctrl.destZ);
  d[5].ctrl.destY := pre(d[5].ctrl.destY);
  d[5].ctrl.destX := pre(d[5].ctrl.destX);
  $whenCondition58 := pre($whenCondition58);
  $whenCondition57 := pre($whenCondition57);
  $whenCondition57 := sample(14, 0.0, d[5].ctrl.prm.Tdrone) and pre(d[5].ctrl.droneDead);
  $whenCondition58 := sample(14, 0.0, d[5].ctrl.prm.Tdrone);
  when $whenCondition57 then
    d[5].ctrl.destX := pre(d[5].ctrl.x);
    d[5].ctrl.destY := pre(d[5].ctrl.y);
    d[5].ctrl.destZ := 0.0;
  elsewhen $whenCondition58 then
    d[5].ctrl.destX := pre(d[5].ctrl.setx);
    d[5].ctrl.destY := pre(d[5].ctrl.sety);
    d[5].ctrl.destZ := pre(d[5].ctrl.setz);
  end when;
*/
void System_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  (data->localData[0]->realVars[788]/* d[5].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[788]/* d[5].ctrl.destZ DISCRETE */) ;

  (data->localData[0]->realVars[781]/* d[5].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[781]/* d[5].ctrl.destY DISCRETE */) ;

  (data->localData[0]->realVars[774]/* d[5].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[774]/* d[5].ctrl.destX DISCRETE */) ;

  (data->localData[0]->booleanVars[53]/* $whenCondition58 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[53]/* $whenCondition58 DISCRETE */) ;

  (data->localData[0]->booleanVars[52]/* $whenCondition57 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[52]/* $whenCondition57 DISCRETE */) ;

  (data->localData[0]->booleanVars[52]/* $whenCondition57 DISCRETE */)  = (data->simulationInfo->samples[13] && (data->simulationInfo->booleanVarsPre[206]/* d[5].ctrl.droneDead DISCRETE */) );

  (data->localData[0]->booleanVars[53]/* $whenCondition58 DISCRETE */)  = data->simulationInfo->samples[13];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[52]/* $whenCondition57 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[52]/* $whenCondition57 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[774]/* d[5].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[212]/* d[5].ctrl.x variable */) ;

      (data->localData[0]->realVars[781]/* d[5].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[219]/* d[5].ctrl.y variable */) ;

      (data->localData[0]->realVars[788]/* d[5].ctrl.destZ DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[53]/* $whenCondition58 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[53]/* $whenCondition58 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[774]/* d[5].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[191]/* d[5].ctrl.setx variable */) ;

      (data->localData[0]->realVars[781]/* d[5].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[198]/* d[5].ctrl.sety variable */) ;

      (data->localData[0]->realVars[788]/* d[5].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[205]/* d[5].ctrl.setz variable */) ;
    }
  }
  TRACE_POP
}
/*
equation index: 700
type: ALGORITHM

  d[5].d.droneDead := pre(d[5].d.droneDead);
  d[5].d.droneState := pre(d[5].d.droneState);
  d[5].d.battery := pre(d[5].d.battery);
  $whenCondition60 := pre($whenCondition60);
  $whenCondition59 := pre($whenCondition59);
  $whenCondition59 := abs(pre(d[5].d.battery)) < 0.01;
  $whenCondition60 := sample(13, 0.0, d[5].d.p.Tdrone) and pre(d[5].d.droneState) == 1;
  when false then
    d[5].d.battery := d[5].d.p.capacity;
    d[5].d.droneState := 1;
    d[5].d.droneDead := false;
  elsewhen $whenCondition59 then
    d[5].d.droneDead := true;
  elsewhen $whenCondition60 then
    if returnedHome(d[5].d.p, pre(d[5].d.x), pre(d[5].d.y), pre(d[5].d.z)) then
      d[5].d.battery := charging(d[5].d.p, pre(d[5].d.battery));
    else
      d[5].d.battery := batteryMonitor(pre(d[5].d.battery), d[5].d.p.batteryDischarge);
    end if;
  end when;
*/
void System_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
  modelica_boolean tmp659;
  real_array tmp661;
  real_array tmp662;
  real_array tmp663;
  real_array tmp664;
  real_array tmp665;
  real_array tmp666;
  (data->localData[0]->booleanVars[213]/* d[5].d.droneDead DISCRETE */)  = (data->simulationInfo->booleanVarsPre[213]/* d[5].d.droneDead DISCRETE */) ;

  (data->localData[0]->integerVars[61]/* d[5].d.droneState DISCRETE */)  = (data->simulationInfo->integerVarsPre[61]/* d[5].d.droneState DISCRETE */) ;

  (data->localData[0]->realVars[795]/* d[5].d.battery DISCRETE */)  = (data->simulationInfo->realVarsPre[795]/* d[5].d.battery DISCRETE */) ;

  (data->localData[0]->booleanVars[56]/* $whenCondition60 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[56]/* $whenCondition60 DISCRETE */) ;

  (data->localData[0]->booleanVars[54]/* $whenCondition59 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[54]/* $whenCondition59 DISCRETE */) ;

  tmp659 = Less(fabs((data->simulationInfo->realVarsPre[795]/* d[5].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[54]/* $whenCondition59 DISCRETE */)  = tmp659;

  (data->localData[0]->booleanVars[56]/* $whenCondition60 DISCRETE */)  = (data->simulationInfo->samples[12] && ((data->simulationInfo->integerVarsPre[61]/* d[5].d.droneState DISCRETE */)  == ((modelica_integer) 1)));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[795]/* d[5].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[2739]/* d[5].d.p.capacity PARAM */) ;

      (data->localData[0]->integerVars[61]/* d[5].d.droneState DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->booleanVars[213]/* d[5].d.droneDead DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[54]/* $whenCondition59 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[54]/* $whenCondition59 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->booleanVars[213]/* d[5].d.droneDead DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[56]/* $whenCondition60 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[56]/* $whenCondition60 DISCRETE */)  /* edge */))
    {
      real_array_create(&tmp661, ((modelica_real*)&((&data->simulationInfo->realParameter[2812]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 5) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp662, ((modelica_real*)&((&data->simulationInfo->realParameter[2791]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 5) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp663, ((modelica_real*)&((&data->simulationInfo->realParameter[2042]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 5) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
      if(omc_returnedHome(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[2921]/* d[5].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[71]/* d[5].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[78]/* d[5].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[2032]/* d[5].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[2025]/* d[5].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[2039]/* d[5].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[2872]/* d[5].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[92]/* d[5].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[2746]/* d[5].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[2893]/* d[5].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[2886]/* d[5].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[2760]/* d[5].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[2879]/* d[5].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[2725]/* d[5].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[2767]/* d[5].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[2718]/* d[5].d.p.arrivalThreshold PARAM */) , tmp661, tmp662, (data->simulationInfo->realParameter[2844]/* d[5].d.p.m PARAM */) , (data->simulationInfo->realParameter[2858]/* d[5].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[2837]/* d[5].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[2935]/* d[5].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[2851]/* d[5].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[2865]/* d[5].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[2774]/* d[5].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[2928]/* d[5].d.p.unita PARAM */) , (data->simulationInfo->realParameter[2739]/* d[5].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[2732]/* d[5].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[2753]/* d[5].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[2900]/* d[5].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[2788]/* d[5].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[2781]/* d[5].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[2907]/* d[5].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[2914]/* d[5].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[85]/* d[5].d.p.nAreas PARAM */) , tmp663), (data->simulationInfo->realVarsPre[25]/* d[5].d.x STATE(1,d[5].d.Vx) */) , (data->simulationInfo->realVarsPre[32]/* d[5].d.y STATE(1,d[5].d.Vy) */) , (data->simulationInfo->realVarsPre[39]/* d[5].d.z STATE(1,d[5].d.Vz) */) ))
      {
        real_array_create(&tmp664, ((modelica_real*)&((&data->simulationInfo->realParameter[2812]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 5) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp665, ((modelica_real*)&((&data->simulationInfo->realParameter[2791]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 5) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp666, ((modelica_real*)&((&data->simulationInfo->realParameter[2042]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 5) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
        (data->localData[0]->realVars[795]/* d[5].d.battery DISCRETE */)  = omc_charging(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[2921]/* d[5].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[71]/* d[5].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[78]/* d[5].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[2032]/* d[5].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[2025]/* d[5].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[2039]/* d[5].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[2872]/* d[5].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[92]/* d[5].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[2746]/* d[5].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[2893]/* d[5].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[2886]/* d[5].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[2760]/* d[5].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[2879]/* d[5].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[2725]/* d[5].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[2767]/* d[5].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[2718]/* d[5].d.p.arrivalThreshold PARAM */) , tmp664, tmp665, (data->simulationInfo->realParameter[2844]/* d[5].d.p.m PARAM */) , (data->simulationInfo->realParameter[2858]/* d[5].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[2837]/* d[5].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[2935]/* d[5].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[2851]/* d[5].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[2865]/* d[5].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[2774]/* d[5].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[2928]/* d[5].d.p.unita PARAM */) , (data->simulationInfo->realParameter[2739]/* d[5].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[2732]/* d[5].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[2753]/* d[5].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[2900]/* d[5].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[2788]/* d[5].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[2781]/* d[5].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[2907]/* d[5].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[2914]/* d[5].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[85]/* d[5].d.p.nAreas PARAM */) , tmp666), (data->simulationInfo->realVarsPre[795]/* d[5].d.battery DISCRETE */) );
      }
      else
      {
        (data->localData[0]->realVars[795]/* d[5].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[795]/* d[5].d.battery DISCRETE */) , (data->simulationInfo->realParameter[2732]/* d[5].d.p.batteryDischarge PARAM */) );
      }
    }
  }
  TRACE_POP
}
/*
equation index: 701
type: ALGORITHM

  d[5].comm_state := pre(d[5].comm_state);
  d[5].fifox := pre(d[5].fifox);
  d[5].writesignal := pre(d[5].writesignal);
  d[5].readsignal := pre(d[5].readsignal);
  d[5].flag := pre(d[5].flag);
  d[5].setz := pre(d[5].setz);
  d[5].sety := pre(d[5].sety);
  d[5].setx := pre(d[5].setx);
  d[5].msg_to_cc[5] := pre(d[5].msg_to_cc[5]);
  d[5].msg_to_cc[4] := pre(d[5].msg_to_cc[4]);
  d[5].msg_to_cc[3] := pre(d[5].msg_to_cc[3]);
  d[5].msg_to_cc[2] := pre(d[5].msg_to_cc[2]);
  d[5].msg_to_cc[1] := pre(d[5].msg_to_cc[1]);
  $whenCondition56 := pre($whenCondition56);
  $whenCondition56 := sample(15, 0.0, d[5].p.Tdrone);
  when false then
    d[5].msg_to_cc := {0.0, 0.0, 0.0, 0.0, 0.0};
    d[5].setx := myrandom() * d[5].p.flyZone[1];
    d[5].sety := myrandom() * d[5].p.flyZone[2];
    d[5].setz := myrandom() * d[5].p.flyZone[3];
    d[5].flag := 0;
    d[5].readsignal := false;
    d[5].writesignal := false;
    d[5].fifox := 0;
    d[5].comm_state := 10;
  elsewhen $whenCondition56 then
    if pre(d[5].d.droneDead) then
      d[5].comm_state := 0;
    elseif pre(d[5].comm_state) == 10 then
      (d[5].readsignal, d[5].fifox) := ReadFromFIFO(pre(d[5].fifox), pre(d[5].datavailable), pre(d[5].readsignal));
      if FifoIODone(d[5].fifox) then
        d[5].flag := integer(cc_to_drone[5].outputdata[1]);
        if d[5].flag == 1 then
          d[5].msg_to_cc[1] := 2.0;
          d[5].msg_to_cc[2] := d[5].d.x;
          d[5].msg_to_cc[3] := d[5].d.y;
          d[5].msg_to_cc[4] := d[5].d.z;
          d[5].msg_to_cc[5] := d[5].d.battery;
          d[5].comm_state := 20;
        elseif d[5].flag == 2 then
          d[5].setx := cc_to_drone[5].outputdata[2];
          d[5].sety := cc_to_drone[5].outputdata[3];
          d[5].setz := cc_to_drone[5].outputdata[4];
          d[5].comm_state := pre(d[5].comm_state);
        end if;
        d[5].fifox := 0;
      end if;
    elseif pre(d[5].comm_state) == 20 then
      (d[5].writesignal, d[5].fifox) := WriteToFIFO(pre(d[5].fifox), pre(d[5].writesignal), pre(d[5].spaceavailable));
      if FifoIODone(d[5].fifox) then
        d[5].comm_state := 10;
        d[5].fifox := 0;
      end if;
    else
      d[5].comm_state := pre(d[5].comm_state);
    end if;
  end when;
*/
void System_eqFunction_701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,701};
  real_array tmp667;
  real_array tmp668;
  (data->localData[0]->integerVars[54]/* d[5].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[54]/* d[5].comm_state DISCRETE */) ;

  (data->localData[0]->integerVars[68]/* d[5].fifox DISCRETE */)  = (data->simulationInfo->integerVarsPre[68]/* d[5].fifox DISCRETE */) ;

  (data->localData[0]->booleanVars[241]/* d[5].writesignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[241]/* d[5].writesignal DISCRETE */) ;

  (data->localData[0]->booleanVars[227]/* d[5].readsignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[227]/* d[5].readsignal DISCRETE */) ;

  (data->localData[0]->integerVars[75]/* d[5].flag DISCRETE */)  = (data->simulationInfo->integerVarsPre[75]/* d[5].flag DISCRETE */) ;

  (data->localData[0]->realVars[851]/* d[5].setz DISCRETE */)  = (data->simulationInfo->realVarsPre[851]/* d[5].setz DISCRETE */) ;

  (data->localData[0]->realVars[844]/* d[5].sety DISCRETE */)  = (data->simulationInfo->realVarsPre[844]/* d[5].sety DISCRETE */) ;

  (data->localData[0]->realVars[837]/* d[5].setx DISCRETE */)  = (data->simulationInfo->realVarsPre[837]/* d[5].setx DISCRETE */) ;

  (data->localData[0]->realVars[822]/* d[5].msg_to_cc[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[822]/* d[5].msg_to_cc[5] DISCRETE */) ;

  (data->localData[0]->realVars[821]/* d[5].msg_to_cc[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[821]/* d[5].msg_to_cc[4] DISCRETE */) ;

  (data->localData[0]->realVars[820]/* d[5].msg_to_cc[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[820]/* d[5].msg_to_cc[3] DISCRETE */) ;

  (data->localData[0]->realVars[819]/* d[5].msg_to_cc[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[819]/* d[5].msg_to_cc[2] DISCRETE */) ;

  (data->localData[0]->realVars[818]/* d[5].msg_to_cc[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[818]/* d[5].msg_to_cc[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[51]/* $whenCondition56 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[51]/* $whenCondition56 DISCRETE */) ;

  (data->localData[0]->booleanVars[51]/* $whenCondition56 DISCRETE */)  = data->simulationInfo->samples[14];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      array_alloc_scalar_real_array(&tmp667, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp668, ((modelica_real*)&((&(data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 5) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
      real_array_copy_data(tmp667, tmp668);

      (data->localData[0]->realVars[837]/* d[5].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3741]/* d[5].p.flyZone[1] PARAM */) );

      (data->localData[0]->realVars[844]/* d[5].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3742]/* d[5].p.flyZone[2] PARAM */) );

      (data->localData[0]->realVars[851]/* d[5].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3743]/* d[5].p.flyZone[3] PARAM */) );

      (data->localData[0]->integerVars[75]/* d[5].flag DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->booleanVars[227]/* d[5].readsignal DISCRETE */)  = 0;

      (data->localData[0]->booleanVars[241]/* d[5].writesignal DISCRETE */)  = 0;

      (data->localData[0]->integerVars[68]/* d[5].fifox DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[54]/* d[5].comm_state DISCRETE */)  = ((modelica_integer) 10);
    }
    else if(((data->localData[0]->booleanVars[51]/* $whenCondition56 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[51]/* $whenCondition56 DISCRETE */)  /* edge */))
    {
      if((data->simulationInfo->booleanVarsPre[213]/* d[5].d.droneDead DISCRETE */) )
      {
        (data->localData[0]->integerVars[54]/* d[5].comm_state DISCRETE */)  = ((modelica_integer) 0);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[54]/* d[5].comm_state DISCRETE */)  == ((modelica_integer) 10)))
        {
          (data->localData[0]->booleanVars[227]/* d[5].readsignal DISCRETE */)  = omc_ReadFromFIFO(threadData, (data->simulationInfo->integerVarsPre[68]/* d[5].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[220]/* d[5].datavailable DISCRETE */) , (data->simulationInfo->booleanVarsPre[227]/* d[5].readsignal DISCRETE */)  ,&(data->localData[0]->integerVars[68]/* d[5].fifox DISCRETE */) );

          if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[68]/* d[5].fifox DISCRETE */) ))
          {
            (data->localData[0]->integerVars[75]/* d[5].flag DISCRETE */)  = ((modelica_integer)floor((data->localData[0]->realVars[755]/* cc_to_drone[5].outputdata[1] DISCRETE */) ));

            if(((data->localData[0]->integerVars[75]/* d[5].flag DISCRETE */)  == ((modelica_integer) 1)))
            {
              (data->localData[0]->realVars[818]/* d[5].msg_to_cc[1] DISCRETE */)  = 2.0;

              (data->localData[0]->realVars[819]/* d[5].msg_to_cc[2] DISCRETE */)  = (data->localData[0]->realVars[25]/* d[5].d.x STATE(1,d[5].d.Vx) */) ;

              (data->localData[0]->realVars[820]/* d[5].msg_to_cc[3] DISCRETE */)  = (data->localData[0]->realVars[32]/* d[5].d.y STATE(1,d[5].d.Vy) */) ;

              (data->localData[0]->realVars[821]/* d[5].msg_to_cc[4] DISCRETE */)  = (data->localData[0]->realVars[39]/* d[5].d.z STATE(1,d[5].d.Vz) */) ;

              (data->localData[0]->realVars[822]/* d[5].msg_to_cc[5] DISCRETE */)  = (data->localData[0]->realVars[795]/* d[5].d.battery DISCRETE */) ;

              (data->localData[0]->integerVars[54]/* d[5].comm_state DISCRETE */)  = ((modelica_integer) 20);
            }
            else
            {
              if(((data->localData[0]->integerVars[75]/* d[5].flag DISCRETE */)  == ((modelica_integer) 2)))
              {
                (data->localData[0]->realVars[837]/* d[5].setx DISCRETE */)  = (data->localData[0]->realVars[756]/* cc_to_drone[5].outputdata[2] DISCRETE */) ;

                (data->localData[0]->realVars[844]/* d[5].sety DISCRETE */)  = (data->localData[0]->realVars[757]/* cc_to_drone[5].outputdata[3] DISCRETE */) ;

                (data->localData[0]->realVars[851]/* d[5].setz DISCRETE */)  = (data->localData[0]->realVars[758]/* cc_to_drone[5].outputdata[4] DISCRETE */) ;

                (data->localData[0]->integerVars[54]/* d[5].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[54]/* d[5].comm_state DISCRETE */) ;
              }
            }

            (data->localData[0]->integerVars[68]/* d[5].fifox DISCRETE */)  = ((modelica_integer) 0);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[54]/* d[5].comm_state DISCRETE */)  == ((modelica_integer) 20)))
          {
            (data->localData[0]->booleanVars[241]/* d[5].writesignal DISCRETE */)  = omc_WriteToFIFO(threadData, (data->simulationInfo->integerVarsPre[68]/* d[5].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[241]/* d[5].writesignal DISCRETE */) , (data->simulationInfo->booleanVarsPre[234]/* d[5].spaceavailable DISCRETE */)  ,&(data->localData[0]->integerVars[68]/* d[5].fifox DISCRETE */) );

            if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[68]/* d[5].fifox DISCRETE */) ))
            {
              (data->localData[0]->integerVars[54]/* d[5].comm_state DISCRETE */)  = ((modelica_integer) 10);

              (data->localData[0]->integerVars[68]/* d[5].fifox DISCRETE */)  = ((modelica_integer) 0);
            }
          }
          else
          {
            (data->localData[0]->integerVars[54]/* d[5].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[54]/* d[5].comm_state DISCRETE */) ;
          }
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 702
type: SIMPLE_ASSIGN
drone_to_cc[5].inputdata[2] = d[5].msg_to_cc[2]
*/
void System_eqFunction_702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,702};
  (data->localData[0]->realVars[243]/* drone_to_cc[5].inputdata[2] variable */)  = (data->localData[0]->realVars[819]/* d[5].msg_to_cc[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 703
type: SIMPLE_ASSIGN
drone_to_cc[5].inputdata[1] = d[5].msg_to_cc[1]
*/
void System_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  (data->localData[0]->realVars[242]/* drone_to_cc[5].inputdata[1] variable */)  = (data->localData[0]->realVars[818]/* d[5].msg_to_cc[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 704
type: SIMPLE_ASSIGN
d[5].ctrl.setx = d[5].setx
*/
void System_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  (data->localData[0]->realVars[191]/* d[5].ctrl.setx variable */)  = (data->localData[0]->realVars[837]/* d[5].setx DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 705
type: SIMPLE_ASSIGN
d[5].ctrl.setz = d[5].setz
*/
void System_eqFunction_705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,705};
  (data->localData[0]->realVars[205]/* d[5].ctrl.setz variable */)  = (data->localData[0]->realVars[851]/* d[5].setz DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 706
type: SIMPLE_ASSIGN
d[5].ctrl.sety = d[5].sety
*/
void System_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  (data->localData[0]->realVars[198]/* d[5].ctrl.sety variable */)  = (data->localData[0]->realVars[844]/* d[5].sety DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 707
type: SIMPLE_ASSIGN
drone_to_cc[5].inputdata[3] = d[5].msg_to_cc[3]
*/
void System_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  (data->localData[0]->realVars[244]/* drone_to_cc[5].inputdata[3] variable */)  = (data->localData[0]->realVars[820]/* d[5].msg_to_cc[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 708
type: SIMPLE_ASSIGN
drone_to_cc[5].writesignal = d[5].writesignal
*/
void System_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  (data->localData[0]->booleanVars[283]/* drone_to_cc[5].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[241]/* d[5].writesignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 709
type: SIMPLE_ASSIGN
drone_to_cc[5].writesigint = not pre(drone_to_cc[5].writesignal) == drone_to_cc[5].writesignal
*/
void System_eqFunction_709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,709};
  (data->localData[0]->booleanVars[276]/* drone_to_cc[5].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[283]/* drone_to_cc[5].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[283]/* drone_to_cc[5].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[283]/* drone_to_cc[5].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[283]/* drone_to_cc[5].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 710
type: SIMPLE_ASSIGN
drone_to_cc[5].inputdata[5] = d[5].msg_to_cc[5]
*/
void System_eqFunction_710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,710};
  (data->localData[0]->realVars[246]/* drone_to_cc[5].inputdata[5] variable */)  = (data->localData[0]->realVars[822]/* d[5].msg_to_cc[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 711
type: SIMPLE_ASSIGN
drone_to_cc[5].inputdata[4] = d[5].msg_to_cc[4]
*/
void System_eqFunction_711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,711};
  (data->localData[0]->realVars[245]/* drone_to_cc[5].inputdata[4] variable */)  = (data->localData[0]->realVars[821]/* d[5].msg_to_cc[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 712
type: ALGORITHM

  drone_to_cc[5].newest := pre(drone_to_cc[5].newest);
  drone_to_cc[5].oldest := pre(drone_to_cc[5].oldest);
  drone_to_cc[5].fifosize := pre(drone_to_cc[5].fifosize);
  drone_to_cc[5].fifo[10,5] := pre(drone_to_cc[5].fifo[10,5]);
  drone_to_cc[5].fifo[10,4] := pre(drone_to_cc[5].fifo[10,4]);
  drone_to_cc[5].fifo[10,3] := pre(drone_to_cc[5].fifo[10,3]);
  drone_to_cc[5].fifo[10,2] := pre(drone_to_cc[5].fifo[10,2]);
  drone_to_cc[5].fifo[10,1] := pre(drone_to_cc[5].fifo[10,1]);
  drone_to_cc[5].fifo[9,5] := pre(drone_to_cc[5].fifo[9,5]);
  drone_to_cc[5].fifo[9,4] := pre(drone_to_cc[5].fifo[9,4]);
  drone_to_cc[5].fifo[9,3] := pre(drone_to_cc[5].fifo[9,3]);
  drone_to_cc[5].fifo[9,2] := pre(drone_to_cc[5].fifo[9,2]);
  drone_to_cc[5].fifo[9,1] := pre(drone_to_cc[5].fifo[9,1]);
  drone_to_cc[5].fifo[8,5] := pre(drone_to_cc[5].fifo[8,5]);
  drone_to_cc[5].fifo[8,4] := pre(drone_to_cc[5].fifo[8,4]);
  drone_to_cc[5].fifo[8,3] := pre(drone_to_cc[5].fifo[8,3]);
  drone_to_cc[5].fifo[8,2] := pre(drone_to_cc[5].fifo[8,2]);
  drone_to_cc[5].fifo[8,1] := pre(drone_to_cc[5].fifo[8,1]);
  drone_to_cc[5].fifo[7,5] := pre(drone_to_cc[5].fifo[7,5]);
  drone_to_cc[5].fifo[7,4] := pre(drone_to_cc[5].fifo[7,4]);
  drone_to_cc[5].fifo[7,3] := pre(drone_to_cc[5].fifo[7,3]);
  drone_to_cc[5].fifo[7,2] := pre(drone_to_cc[5].fifo[7,2]);
  drone_to_cc[5].fifo[7,1] := pre(drone_to_cc[5].fifo[7,1]);
  drone_to_cc[5].fifo[6,5] := pre(drone_to_cc[5].fifo[6,5]);
  drone_to_cc[5].fifo[6,4] := pre(drone_to_cc[5].fifo[6,4]);
  drone_to_cc[5].fifo[6,3] := pre(drone_to_cc[5].fifo[6,3]);
  drone_to_cc[5].fifo[6,2] := pre(drone_to_cc[5].fifo[6,2]);
  drone_to_cc[5].fifo[6,1] := pre(drone_to_cc[5].fifo[6,1]);
  drone_to_cc[5].fifo[5,5] := pre(drone_to_cc[5].fifo[5,5]);
  drone_to_cc[5].fifo[5,4] := pre(drone_to_cc[5].fifo[5,4]);
  drone_to_cc[5].fifo[5,3] := pre(drone_to_cc[5].fifo[5,3]);
  drone_to_cc[5].fifo[5,2] := pre(drone_to_cc[5].fifo[5,2]);
  drone_to_cc[5].fifo[5,1] := pre(drone_to_cc[5].fifo[5,1]);
  drone_to_cc[5].fifo[4,5] := pre(drone_to_cc[5].fifo[4,5]);
  drone_to_cc[5].fifo[4,4] := pre(drone_to_cc[5].fifo[4,4]);
  drone_to_cc[5].fifo[4,3] := pre(drone_to_cc[5].fifo[4,3]);
  drone_to_cc[5].fifo[4,2] := pre(drone_to_cc[5].fifo[4,2]);
  drone_to_cc[5].fifo[4,1] := pre(drone_to_cc[5].fifo[4,1]);
  drone_to_cc[5].fifo[3,5] := pre(drone_to_cc[5].fifo[3,5]);
  drone_to_cc[5].fifo[3,4] := pre(drone_to_cc[5].fifo[3,4]);
  drone_to_cc[5].fifo[3,3] := pre(drone_to_cc[5].fifo[3,3]);
  drone_to_cc[5].fifo[3,2] := pre(drone_to_cc[5].fifo[3,2]);
  drone_to_cc[5].fifo[3,1] := pre(drone_to_cc[5].fifo[3,1]);
  drone_to_cc[5].fifo[2,5] := pre(drone_to_cc[5].fifo[2,5]);
  drone_to_cc[5].fifo[2,4] := pre(drone_to_cc[5].fifo[2,4]);
  drone_to_cc[5].fifo[2,3] := pre(drone_to_cc[5].fifo[2,3]);
  drone_to_cc[5].fifo[2,2] := pre(drone_to_cc[5].fifo[2,2]);
  drone_to_cc[5].fifo[2,1] := pre(drone_to_cc[5].fifo[2,1]);
  drone_to_cc[5].fifo[1,5] := pre(drone_to_cc[5].fifo[1,5]);
  drone_to_cc[5].fifo[1,4] := pre(drone_to_cc[5].fifo[1,4]);
  drone_to_cc[5].fifo[1,3] := pre(drone_to_cc[5].fifo[1,3]);
  drone_to_cc[5].fifo[1,2] := pre(drone_to_cc[5].fifo[1,2]);
  drone_to_cc[5].fifo[1,1] := pre(drone_to_cc[5].fifo[1,1]);
  drone_to_cc[5].spaceavailable := pre(drone_to_cc[5].spaceavailable);
  drone_to_cc[5].outputdata[5] := pre(drone_to_cc[5].outputdata[5]);
  drone_to_cc[5].outputdata[4] := pre(drone_to_cc[5].outputdata[4]);
  drone_to_cc[5].outputdata[3] := pre(drone_to_cc[5].outputdata[3]);
  drone_to_cc[5].outputdata[2] := pre(drone_to_cc[5].outputdata[2]);
  drone_to_cc[5].outputdata[1] := pre(drone_to_cc[5].outputdata[1]);
  drone_to_cc[5].datavailable := pre(drone_to_cc[5].datavailable);
  $whenCondition9 := pre($whenCondition9);
  $whenCondition8 := pre($whenCondition8);
  $whenCondition7 := pre($whenCondition7);
  $whenCondition7 := pre(drone_to_cc[5].readsigint) and pre(drone_to_cc[5].writesigint);
  $whenCondition8 := pre(drone_to_cc[5].readsigint) and not pre(drone_to_cc[5].writesigint) and pre(drone_to_cc[5].fifosize) >= 1;
  $whenCondition9 := not pre(drone_to_cc[5].readsigint) and pre(drone_to_cc[5].writesigint) and pre(drone_to_cc[5].fifosize) < 10;
  when false then
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
  elsewhen $whenCondition7 then
    if pre(drone_to_cc[5].fifosize) < 10 then
      for j in 1:5 loop
        drone_to_cc[5].fifo[pre(drone_to_cc[5].newest),j] := drone_to_cc[5].inputdata[j];
      end for;
      drone_to_cc[5].newest := mod(pre(drone_to_cc[5].newest), 10) + 1;
      for j in 1:5 loop
        drone_to_cc[5].outputdata[j] := drone_to_cc[5].fifo[pre(drone_to_cc[5].oldest),j];
      end for;
      drone_to_cc[5].oldest := mod(pre(drone_to_cc[5].oldest), 10) + 1;
    else
      for j in 1:5 loop
        drone_to_cc[5].outputdata[j] := drone_to_cc[5].fifo[pre(drone_to_cc[5].oldest),j];
      end for;
      drone_to_cc[5].oldest := mod(pre(drone_to_cc[5].oldest), 10) + 1;
      for j in 1:5 loop
        drone_to_cc[5].fifo[pre(drone_to_cc[5].newest),j] := drone_to_cc[5].inputdata[j];
      end for;
      drone_to_cc[5].newest := mod(pre(drone_to_cc[5].newest), 10) + 1;
    end if;
  elsewhen $whenCondition8 then
    for j in 1:5 loop
      drone_to_cc[5].outputdata[j] := drone_to_cc[5].fifo[pre(drone_to_cc[5].oldest),j];
    end for;
    drone_to_cc[5].oldest := mod(pre(drone_to_cc[5].oldest), 10) + 1;
    drone_to_cc[5].fifosize := pre(drone_to_cc[5].fifosize) - 1;
    drone_to_cc[5].datavailable := drone_to_cc[5].fifosize >= 1;
    drone_to_cc[5].spaceavailable := true;
  elsewhen $whenCondition9 then
    for j in 1:5 loop
      drone_to_cc[5].fifo[pre(drone_to_cc[5].newest),j] := drone_to_cc[5].inputdata[j];
    end for;
    drone_to_cc[5].newest := mod(pre(drone_to_cc[5].newest), 10) + 1;
    drone_to_cc[5].fifosize := pre(drone_to_cc[5].fifosize) + 1;
    drone_to_cc[5].datavailable := true;
    drone_to_cc[5].spaceavailable := pre(drone_to_cc[5].fifosize) < 10;
    for j in 1:5 loop
      drone_to_cc[5].outputdata[j] := drone_to_cc[5].fifo[pre(drone_to_cc[5].oldest),j];
    end for;
  end when;
*/
void System_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  modelica_boolean tmp674;
  modelica_boolean tmp675;
  modelica_integer tmp676;
  modelica_integer tmp677;
  modelica_integer tmp678;
  modelica_integer tmp679;
  modelica_integer tmp680;
  modelica_integer tmp681;
  modelica_integer tmp682;
  modelica_integer tmp683;
  modelica_integer tmp684;
  modelica_boolean tmp685;
  modelica_integer tmp686;
  modelica_integer tmp687;
  modelica_integer tmp688;
  modelica_integer tmp689;
  modelica_integer tmp690;
  modelica_integer tmp691;
  modelica_integer tmp692;
  modelica_integer tmp693;
  modelica_integer tmp694;
  modelica_integer tmp695;
  modelica_integer tmp696;
  modelica_integer tmp697;
  modelica_integer tmp698;
  modelica_integer tmp699;
  modelica_integer tmp700;
  modelica_integer tmp701;
  modelica_integer tmp702;
  modelica_integer tmp703;
  modelica_integer tmp704;
  modelica_integer tmp705;
  modelica_boolean tmp706;
  modelica_integer tmp707;
  modelica_integer tmp708;
  modelica_integer tmp709;
  modelica_integer tmp710;
  modelica_boolean tmp711;
  modelica_integer tmp712;
  modelica_integer tmp713;
  modelica_integer tmp714;
  (data->localData[0]->integerVars[89]/* drone_to_cc[5].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[89]/* drone_to_cc[5].newest DISCRETE */) ;

  (data->localData[0]->integerVars[96]/* drone_to_cc[5].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[96]/* drone_to_cc[5].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[82]/* drone_to_cc[5].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[82]/* drone_to_cc[5].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[1103]/* drone_to_cc[5].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1103]/* drone_to_cc[5].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[1102]/* drone_to_cc[5].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1102]/* drone_to_cc[5].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[1101]/* drone_to_cc[5].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1101]/* drone_to_cc[5].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[1100]/* drone_to_cc[5].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1100]/* drone_to_cc[5].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[1099]/* drone_to_cc[5].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1099]/* drone_to_cc[5].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[1098]/* drone_to_cc[5].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1098]/* drone_to_cc[5].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[1097]/* drone_to_cc[5].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1097]/* drone_to_cc[5].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[1096]/* drone_to_cc[5].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1096]/* drone_to_cc[5].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[1095]/* drone_to_cc[5].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1095]/* drone_to_cc[5].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[1094]/* drone_to_cc[5].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1094]/* drone_to_cc[5].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[1093]/* drone_to_cc[5].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1093]/* drone_to_cc[5].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[1092]/* drone_to_cc[5].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1092]/* drone_to_cc[5].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[1091]/* drone_to_cc[5].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1091]/* drone_to_cc[5].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[1090]/* drone_to_cc[5].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1090]/* drone_to_cc[5].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[1089]/* drone_to_cc[5].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1089]/* drone_to_cc[5].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[1088]/* drone_to_cc[5].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1088]/* drone_to_cc[5].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[1087]/* drone_to_cc[5].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1087]/* drone_to_cc[5].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[1086]/* drone_to_cc[5].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1086]/* drone_to_cc[5].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[1085]/* drone_to_cc[5].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1085]/* drone_to_cc[5].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[1084]/* drone_to_cc[5].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1084]/* drone_to_cc[5].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[1083]/* drone_to_cc[5].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1083]/* drone_to_cc[5].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[1082]/* drone_to_cc[5].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1082]/* drone_to_cc[5].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[1081]/* drone_to_cc[5].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1081]/* drone_to_cc[5].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[1080]/* drone_to_cc[5].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1080]/* drone_to_cc[5].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[1079]/* drone_to_cc[5].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1079]/* drone_to_cc[5].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[1078]/* drone_to_cc[5].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1078]/* drone_to_cc[5].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[1077]/* drone_to_cc[5].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1077]/* drone_to_cc[5].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[1076]/* drone_to_cc[5].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1076]/* drone_to_cc[5].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[1075]/* drone_to_cc[5].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1075]/* drone_to_cc[5].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[1074]/* drone_to_cc[5].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1074]/* drone_to_cc[5].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[1073]/* drone_to_cc[5].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1073]/* drone_to_cc[5].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[1072]/* drone_to_cc[5].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1072]/* drone_to_cc[5].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[1071]/* drone_to_cc[5].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1071]/* drone_to_cc[5].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[1070]/* drone_to_cc[5].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1070]/* drone_to_cc[5].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[1069]/* drone_to_cc[5].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1069]/* drone_to_cc[5].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[1068]/* drone_to_cc[5].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1068]/* drone_to_cc[5].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[1067]/* drone_to_cc[5].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1067]/* drone_to_cc[5].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[1066]/* drone_to_cc[5].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1066]/* drone_to_cc[5].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[1065]/* drone_to_cc[5].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1065]/* drone_to_cc[5].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[1064]/* drone_to_cc[5].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1064]/* drone_to_cc[5].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[1063]/* drone_to_cc[5].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1063]/* drone_to_cc[5].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[1062]/* drone_to_cc[5].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1062]/* drone_to_cc[5].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[1061]/* drone_to_cc[5].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1061]/* drone_to_cc[5].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[1060]/* drone_to_cc[5].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1060]/* drone_to_cc[5].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[1059]/* drone_to_cc[5].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1059]/* drone_to_cc[5].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[1058]/* drone_to_cc[5].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1058]/* drone_to_cc[5].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[1057]/* drone_to_cc[5].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1057]/* drone_to_cc[5].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[1056]/* drone_to_cc[5].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1056]/* drone_to_cc[5].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[1055]/* drone_to_cc[5].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1055]/* drone_to_cc[5].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[1054]/* drone_to_cc[5].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1054]/* drone_to_cc[5].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[269]/* drone_to_cc[5].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[269]/* drone_to_cc[5].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[1228]/* drone_to_cc[5].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1228]/* drone_to_cc[5].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[1227]/* drone_to_cc[5].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1227]/* drone_to_cc[5].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[1226]/* drone_to_cc[5].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1226]/* drone_to_cc[5].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[1225]/* drone_to_cc[5].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1225]/* drone_to_cc[5].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[1224]/* drone_to_cc[5].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1224]/* drone_to_cc[5].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[248]/* drone_to_cc[5].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[248]/* drone_to_cc[5].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[79]/* $whenCondition9 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[79]/* $whenCondition9 DISCRETE */) ;

  (data->localData[0]->booleanVars[77]/* $whenCondition8 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[77]/* $whenCondition8 DISCRETE */) ;

  (data->localData[0]->booleanVars[66]/* $whenCondition7 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[66]/* $whenCondition7 DISCRETE */) ;

  (data->localData[0]->booleanVars[66]/* $whenCondition7 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[255]/* drone_to_cc[5].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[276]/* drone_to_cc[5].writesigint DISCRETE */) );

  tmp674 = GreaterEq((data->simulationInfo->integerVarsPre[82]/* drone_to_cc[5].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[77]/* $whenCondition8 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[255]/* drone_to_cc[5].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[276]/* drone_to_cc[5].writesigint DISCRETE */) )) && tmp674);

  tmp675 = Less((data->simulationInfo->integerVarsPre[82]/* drone_to_cc[5].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[79]/* $whenCondition9 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[255]/* drone_to_cc[5].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[276]/* drone_to_cc[5].writesigint DISCRETE */) ) && tmp675);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[248]/* drone_to_cc[5].datavailable DISCRETE */)  = 0;

      tmp676 = ((modelica_integer) 1); tmp677 = 1; tmp678 = ((modelica_integer) 5);
      if(!(((tmp677 > 0) && (tmp676 > tmp678)) || ((tmp677 < 0) && (tmp676 < tmp678))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp676, tmp678); j += tmp677)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 5) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[269]/* drone_to_cc[5].spaceavailable DISCRETE */)  = 1;

      tmp682 = ((modelica_integer) 1); tmp683 = 1; tmp684 = ((modelica_integer) 10);
      if(!(((tmp683 > 0) && (tmp682 > tmp684)) || ((tmp683 < 0) && (tmp682 < tmp684))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp682, tmp684); i += tmp683)
        {
          tmp679 = ((modelica_integer) 1); tmp680 = 1; tmp681 = ((modelica_integer) 5);
          if(!(((tmp680 > 0) && (tmp679 > tmp681)) || ((tmp680 < 0) && (tmp679 < tmp681))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp679, tmp681); j += tmp680)
            {
              (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 5) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[82]/* drone_to_cc[5].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[96]/* drone_to_cc[5].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[89]/* drone_to_cc[5].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[66]/* $whenCondition7 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[66]/* $whenCondition7 DISCRETE */)  /* edge */))
    {
      tmp685 = Less((data->simulationInfo->integerVarsPre[82]/* drone_to_cc[5].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp685)
      {
        tmp686 = ((modelica_integer) 1); tmp687 = 1; tmp688 = ((modelica_integer) 5);
        if(!(((tmp687 > 0) && (tmp686 > tmp688)) || ((tmp687 < 0) && (tmp686 < tmp688))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp686, tmp688); j += tmp687)
          {
            (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 5) - 1) * 10 + ((data->simulationInfo->integerVarsPre[89]/* drone_to_cc[5].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 5) - 1) * 5 + (j-1)] ;
          }
        }

        tmp689 = ((modelica_integer) 10);
        if (tmp689 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[5].newest), 10)");}
        (data->localData[0]->integerVars[89]/* drone_to_cc[5].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[89]/* drone_to_cc[5].newest DISCRETE */) , tmp689) + ((modelica_integer) 1);

        tmp690 = ((modelica_integer) 1); tmp691 = 1; tmp692 = ((modelica_integer) 5);
        if(!(((tmp691 > 0) && (tmp690 > tmp692)) || ((tmp691 < 0) && (tmp690 < tmp692))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp690, tmp692); j += tmp691)
          {
            (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 5) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 5) - 1) * 10 + ((data->simulationInfo->integerVarsPre[96]/* drone_to_cc[5].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp693 = ((modelica_integer) 10);
        if (tmp693 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[5].oldest), 10)");}
        (data->localData[0]->integerVars[96]/* drone_to_cc[5].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[96]/* drone_to_cc[5].oldest DISCRETE */) , tmp693) + ((modelica_integer) 1);
      }
      else
      {
        tmp694 = ((modelica_integer) 1); tmp695 = 1; tmp696 = ((modelica_integer) 5);
        if(!(((tmp695 > 0) && (tmp694 > tmp696)) || ((tmp695 < 0) && (tmp694 < tmp696))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp694, tmp696); j += tmp695)
          {
            (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 5) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 5) - 1) * 10 + ((data->simulationInfo->integerVarsPre[96]/* drone_to_cc[5].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp697 = ((modelica_integer) 10);
        if (tmp697 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[5].oldest), 10)");}
        (data->localData[0]->integerVars[96]/* drone_to_cc[5].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[96]/* drone_to_cc[5].oldest DISCRETE */) , tmp697) + ((modelica_integer) 1);

        tmp698 = ((modelica_integer) 1); tmp699 = 1; tmp700 = ((modelica_integer) 5);
        if(!(((tmp699 > 0) && (tmp698 > tmp700)) || ((tmp699 < 0) && (tmp698 < tmp700))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp698, tmp700); j += tmp699)
          {
            (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 5) - 1) * 10 + ((data->simulationInfo->integerVarsPre[89]/* drone_to_cc[5].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 5) - 1) * 5 + (j-1)] ;
          }
        }

        tmp701 = ((modelica_integer) 10);
        if (tmp701 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[5].newest), 10)");}
        (data->localData[0]->integerVars[89]/* drone_to_cc[5].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[89]/* drone_to_cc[5].newest DISCRETE */) , tmp701) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[77]/* $whenCondition8 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[77]/* $whenCondition8 DISCRETE */)  /* edge */))
    {
      tmp702 = ((modelica_integer) 1); tmp703 = 1; tmp704 = ((modelica_integer) 5);
      if(!(((tmp703 > 0) && (tmp702 > tmp704)) || ((tmp703 < 0) && (tmp702 < tmp704))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp702, tmp704); j += tmp703)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 5) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 5) - 1) * 10 + ((data->simulationInfo->integerVarsPre[96]/* drone_to_cc[5].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp705 = ((modelica_integer) 10);
      if (tmp705 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[5].oldest), 10)");}
      (data->localData[0]->integerVars[96]/* drone_to_cc[5].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[96]/* drone_to_cc[5].oldest DISCRETE */) , tmp705) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[82]/* drone_to_cc[5].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[82]/* drone_to_cc[5].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp706 = GreaterEq((data->localData[0]->integerVars[82]/* drone_to_cc[5].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[248]/* drone_to_cc[5].datavailable DISCRETE */)  = tmp706;

      (data->localData[0]->booleanVars[269]/* drone_to_cc[5].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[79]/* $whenCondition9 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[79]/* $whenCondition9 DISCRETE */)  /* edge */))
    {
      tmp707 = ((modelica_integer) 1); tmp708 = 1; tmp709 = ((modelica_integer) 5);
      if(!(((tmp708 > 0) && (tmp707 > tmp709)) || ((tmp708 < 0) && (tmp707 < tmp709))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp707, tmp709); j += tmp708)
        {
          (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 5) - 1) * 10 + ((data->simulationInfo->integerVarsPre[89]/* drone_to_cc[5].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 5) - 1) * 5 + (j-1)] ;
        }
      }

      tmp710 = ((modelica_integer) 10);
      if (tmp710 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[5].newest), 10)");}
      (data->localData[0]->integerVars[89]/* drone_to_cc[5].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[89]/* drone_to_cc[5].newest DISCRETE */) , tmp710) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[82]/* drone_to_cc[5].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[82]/* drone_to_cc[5].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[248]/* drone_to_cc[5].datavailable DISCRETE */)  = 1;

      tmp711 = Less((data->simulationInfo->integerVarsPre[82]/* drone_to_cc[5].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[269]/* drone_to_cc[5].spaceavailable DISCRETE */)  = tmp711;

      tmp712 = ((modelica_integer) 1); tmp713 = 1; tmp714 = ((modelica_integer) 5);
      if(!(((tmp713 > 0) && (tmp712 > tmp714)) || ((tmp713 < 0) && (tmp712 < tmp714))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp712, tmp714); j += tmp713)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 5) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 5) - 1) * 10 + ((data->simulationInfo->integerVarsPre[96]/* drone_to_cc[5].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 713
type: SIMPLE_ASSIGN
cc.msg_from_drone[5,4] = drone_to_cc[5].outputdata[4]
*/
void System_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  (data->localData[0]->realVars[110]/* cc.msg_from_drone[5,4] variable */)  = (data->localData[0]->realVars[1227]/* drone_to_cc[5].outputdata[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 714
type: SIMPLE_ASSIGN
cc.msg_from_drone[5,3] = drone_to_cc[5].outputdata[3]
*/
void System_eqFunction_714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,714};
  (data->localData[0]->realVars[109]/* cc.msg_from_drone[5,3] variable */)  = (data->localData[0]->realVars[1226]/* drone_to_cc[5].outputdata[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 715
type: SIMPLE_ASSIGN
cc.msg_from_drone[5,5] = drone_to_cc[5].outputdata[5]
*/
void System_eqFunction_715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,715};
  (data->localData[0]->realVars[111]/* cc.msg_from_drone[5,5] variable */)  = (data->localData[0]->realVars[1228]/* drone_to_cc[5].outputdata[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 716
type: SIMPLE_ASSIGN
cc.msg_from_drone[5,1] = drone_to_cc[5].outputdata[1]
*/
void System_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  (data->localData[0]->realVars[107]/* cc.msg_from_drone[5,1] variable */)  = (data->localData[0]->realVars[1224]/* drone_to_cc[5].outputdata[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 717
type: SIMPLE_ASSIGN
d[5].spaceavailable = drone_to_cc[5].spaceavailable
*/
void System_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  (data->localData[0]->booleanVars[234]/* d[5].spaceavailable DISCRETE */)  = (data->localData[0]->booleanVars[269]/* drone_to_cc[5].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 718
type: SIMPLE_ASSIGN
cc.msg_from_drone[5,2] = drone_to_cc[5].outputdata[2]
*/
void System_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  (data->localData[0]->realVars[108]/* cc.msg_from_drone[5,2] variable */)  = (data->localData[0]->realVars[1225]/* drone_to_cc[5].outputdata[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 719
type: SIMPLE_ASSIGN
cc.datavailable[5] = drone_to_cc[5].datavailable
*/
void System_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  (data->localData[0]->booleanVars[91]/* cc.datavailable[5] DISCRETE */)  = (data->localData[0]->booleanVars[248]/* drone_to_cc[5].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 720
type: SIMPLE_ASSIGN
cc_to_drone[5].readsignal = d[5].readsignal
*/
void System_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  (data->localData[0]->booleanVars[178]/* cc_to_drone[5].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[227]/* d[5].readsignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 721
type: SIMPLE_ASSIGN
cc_to_drone[5].readsigint = not pre(cc_to_drone[5].readsignal) == cc_to_drone[5].readsignal
*/
void System_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  (data->localData[0]->booleanVars[171]/* cc_to_drone[5].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[178]/* cc_to_drone[5].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[178]/* cc_to_drone[5].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[178]/* cc_to_drone[5].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[178]/* cc_to_drone[5].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 722
type: SIMPLE_ASSIGN
d[5].batteryPercentage = 100.0 * d[5].d.battery / d[5].p.capacity
*/
void System_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  (data->localData[0]->realVars[163]/* d[5].batteryPercentage variable */)  = (100.0) * (DIVISION_SIM((data->localData[0]->realVars[795]/* d[5].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[3656]/* d[5].p.capacity PARAM */) ,"d[5].p.capacity",equationIndexes));
  TRACE_POP
}
/*
equation index: 723
type: SIMPLE_ASSIGN
d[5].ctrl.droneDead = d[5].d.droneDead
*/
void System_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  (data->localData[0]->booleanVars[206]/* d[5].ctrl.droneDead DISCRETE */)  = (data->localData[0]->booleanVars[213]/* d[5].d.droneDead DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 724
type: ALGORITHM

  d[4].ctrl.destZ := pre(d[4].ctrl.destZ);
  d[4].ctrl.destY := pre(d[4].ctrl.destY);
  d[4].ctrl.destX := pre(d[4].ctrl.destX);
  $whenCondition63 := pre($whenCondition63);
  $whenCondition62 := pre($whenCondition62);
  $whenCondition62 := sample(11, 0.0, d[4].ctrl.prm.Tdrone) and pre(d[4].ctrl.droneDead);
  $whenCondition63 := sample(11, 0.0, d[4].ctrl.prm.Tdrone);
  when $whenCondition62 then
    d[4].ctrl.destX := pre(d[4].ctrl.x);
    d[4].ctrl.destY := pre(d[4].ctrl.y);
    d[4].ctrl.destZ := 0.0;
  elsewhen $whenCondition63 then
    d[4].ctrl.destX := pre(d[4].ctrl.setx);
    d[4].ctrl.destY := pre(d[4].ctrl.sety);
    d[4].ctrl.destZ := pre(d[4].ctrl.setz);
  end when;
*/
void System_eqFunction_724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,724};
  (data->localData[0]->realVars[787]/* d[4].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[787]/* d[4].ctrl.destZ DISCRETE */) ;

  (data->localData[0]->realVars[780]/* d[4].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[780]/* d[4].ctrl.destY DISCRETE */) ;

  (data->localData[0]->realVars[773]/* d[4].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[773]/* d[4].ctrl.destX DISCRETE */) ;

  (data->localData[0]->booleanVars[59]/* $whenCondition63 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[59]/* $whenCondition63 DISCRETE */) ;

  (data->localData[0]->booleanVars[58]/* $whenCondition62 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[58]/* $whenCondition62 DISCRETE */) ;

  (data->localData[0]->booleanVars[58]/* $whenCondition62 DISCRETE */)  = (data->simulationInfo->samples[10] && (data->simulationInfo->booleanVarsPre[205]/* d[4].ctrl.droneDead DISCRETE */) );

  (data->localData[0]->booleanVars[59]/* $whenCondition63 DISCRETE */)  = data->simulationInfo->samples[10];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[58]/* $whenCondition62 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[58]/* $whenCondition62 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[773]/* d[4].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[211]/* d[4].ctrl.x variable */) ;

      (data->localData[0]->realVars[780]/* d[4].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[218]/* d[4].ctrl.y variable */) ;

      (data->localData[0]->realVars[787]/* d[4].ctrl.destZ DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[59]/* $whenCondition63 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[59]/* $whenCondition63 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[773]/* d[4].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[190]/* d[4].ctrl.setx variable */) ;

      (data->localData[0]->realVars[780]/* d[4].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[197]/* d[4].ctrl.sety variable */) ;

      (data->localData[0]->realVars[787]/* d[4].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[204]/* d[4].ctrl.setz variable */) ;
    }
  }
  TRACE_POP
}
/*
equation index: 725
type: ALGORITHM

  d[4].d.droneDead := pre(d[4].d.droneDead);
  d[4].d.droneState := pre(d[4].d.droneState);
  d[4].d.battery := pre(d[4].d.battery);
  $whenCondition65 := pre($whenCondition65);
  $whenCondition64 := pre($whenCondition64);
  $whenCondition64 := abs(pre(d[4].d.battery)) < 0.01;
  $whenCondition65 := sample(10, 0.0, d[4].d.p.Tdrone) and pre(d[4].d.droneState) == 1;
  when false then
    d[4].d.battery := d[4].d.p.capacity;
    d[4].d.droneState := 1;
    d[4].d.droneDead := false;
  elsewhen $whenCondition64 then
    d[4].d.droneDead := true;
  elsewhen $whenCondition65 then
    if returnedHome(d[4].d.p, pre(d[4].d.x), pre(d[4].d.y), pre(d[4].d.z)) then
      d[4].d.battery := charging(d[4].d.p, pre(d[4].d.battery));
    else
      d[4].d.battery := batteryMonitor(pre(d[4].d.battery), d[4].d.p.batteryDischarge);
    end if;
  end when;
*/
void System_eqFunction_725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,725};
  modelica_boolean tmp716;
  real_array tmp718;
  real_array tmp719;
  real_array tmp720;
  real_array tmp721;
  real_array tmp722;
  real_array tmp723;
  (data->localData[0]->booleanVars[212]/* d[4].d.droneDead DISCRETE */)  = (data->simulationInfo->booleanVarsPre[212]/* d[4].d.droneDead DISCRETE */) ;

  (data->localData[0]->integerVars[60]/* d[4].d.droneState DISCRETE */)  = (data->simulationInfo->integerVarsPre[60]/* d[4].d.droneState DISCRETE */) ;

  (data->localData[0]->realVars[794]/* d[4].d.battery DISCRETE */)  = (data->simulationInfo->realVarsPre[794]/* d[4].d.battery DISCRETE */) ;

  (data->localData[0]->booleanVars[61]/* $whenCondition65 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[61]/* $whenCondition65 DISCRETE */) ;

  (data->localData[0]->booleanVars[60]/* $whenCondition64 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[60]/* $whenCondition64 DISCRETE */) ;

  tmp716 = Less(fabs((data->simulationInfo->realVarsPre[794]/* d[4].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[60]/* $whenCondition64 DISCRETE */)  = tmp716;

  (data->localData[0]->booleanVars[61]/* $whenCondition65 DISCRETE */)  = (data->simulationInfo->samples[9] && ((data->simulationInfo->integerVarsPre[60]/* d[4].d.droneState DISCRETE */)  == ((modelica_integer) 1)));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[794]/* d[4].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[2738]/* d[4].d.p.capacity PARAM */) ;

      (data->localData[0]->integerVars[60]/* d[4].d.droneState DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->booleanVars[212]/* d[4].d.droneDead DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[60]/* $whenCondition64 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[60]/* $whenCondition64 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->booleanVars[212]/* d[4].d.droneDead DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[61]/* $whenCondition65 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[61]/* $whenCondition65 DISCRETE */)  /* edge */))
    {
      real_array_create(&tmp718, ((modelica_real*)&((&data->simulationInfo->realParameter[2812]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 4) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp719, ((modelica_real*)&((&data->simulationInfo->realParameter[2791]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 4) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp720, ((modelica_real*)&((&data->simulationInfo->realParameter[2042]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 4) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
      if(omc_returnedHome(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[2920]/* d[4].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[70]/* d[4].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[77]/* d[4].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[2031]/* d[4].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[2024]/* d[4].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[2038]/* d[4].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[2871]/* d[4].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[91]/* d[4].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[2745]/* d[4].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[2892]/* d[4].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[2885]/* d[4].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[2759]/* d[4].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[2878]/* d[4].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[2724]/* d[4].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[2766]/* d[4].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[2717]/* d[4].d.p.arrivalThreshold PARAM */) , tmp718, tmp719, (data->simulationInfo->realParameter[2843]/* d[4].d.p.m PARAM */) , (data->simulationInfo->realParameter[2857]/* d[4].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[2836]/* d[4].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[2934]/* d[4].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[2850]/* d[4].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[2864]/* d[4].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[2773]/* d[4].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[2927]/* d[4].d.p.unita PARAM */) , (data->simulationInfo->realParameter[2738]/* d[4].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[2731]/* d[4].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[2752]/* d[4].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[2899]/* d[4].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[2787]/* d[4].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[2780]/* d[4].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[2906]/* d[4].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[2913]/* d[4].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[84]/* d[4].d.p.nAreas PARAM */) , tmp720), (data->simulationInfo->realVarsPre[24]/* d[4].d.x STATE(1,d[4].d.Vx) */) , (data->simulationInfo->realVarsPre[31]/* d[4].d.y STATE(1,d[4].d.Vy) */) , (data->simulationInfo->realVarsPre[38]/* d[4].d.z STATE(1,d[4].d.Vz) */) ))
      {
        real_array_create(&tmp721, ((modelica_real*)&((&data->simulationInfo->realParameter[2812]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 4) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp722, ((modelica_real*)&((&data->simulationInfo->realParameter[2791]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 4) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp723, ((modelica_real*)&((&data->simulationInfo->realParameter[2042]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 4) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
        (data->localData[0]->realVars[794]/* d[4].d.battery DISCRETE */)  = omc_charging(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[2920]/* d[4].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[70]/* d[4].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[77]/* d[4].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[2031]/* d[4].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[2024]/* d[4].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[2038]/* d[4].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[2871]/* d[4].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[91]/* d[4].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[2745]/* d[4].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[2892]/* d[4].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[2885]/* d[4].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[2759]/* d[4].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[2878]/* d[4].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[2724]/* d[4].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[2766]/* d[4].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[2717]/* d[4].d.p.arrivalThreshold PARAM */) , tmp721, tmp722, (data->simulationInfo->realParameter[2843]/* d[4].d.p.m PARAM */) , (data->simulationInfo->realParameter[2857]/* d[4].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[2836]/* d[4].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[2934]/* d[4].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[2850]/* d[4].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[2864]/* d[4].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[2773]/* d[4].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[2927]/* d[4].d.p.unita PARAM */) , (data->simulationInfo->realParameter[2738]/* d[4].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[2731]/* d[4].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[2752]/* d[4].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[2899]/* d[4].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[2787]/* d[4].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[2780]/* d[4].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[2906]/* d[4].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[2913]/* d[4].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[84]/* d[4].d.p.nAreas PARAM */) , tmp723), (data->simulationInfo->realVarsPre[794]/* d[4].d.battery DISCRETE */) );
      }
      else
      {
        (data->localData[0]->realVars[794]/* d[4].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[794]/* d[4].d.battery DISCRETE */) , (data->simulationInfo->realParameter[2731]/* d[4].d.p.batteryDischarge PARAM */) );
      }
    }
  }
  TRACE_POP
}
/*
equation index: 726
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
  $whenCondition61 := pre($whenCondition61);
  $whenCondition61 := sample(12, 0.0, d[4].p.Tdrone);
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
  elsewhen $whenCondition61 then
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
void System_eqFunction_726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,726};
  real_array tmp724;
  real_array tmp725;
  (data->localData[0]->integerVars[53]/* d[4].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[53]/* d[4].comm_state DISCRETE */) ;

  (data->localData[0]->integerVars[67]/* d[4].fifox DISCRETE */)  = (data->simulationInfo->integerVarsPre[67]/* d[4].fifox DISCRETE */) ;

  (data->localData[0]->booleanVars[240]/* d[4].writesignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[240]/* d[4].writesignal DISCRETE */) ;

  (data->localData[0]->booleanVars[226]/* d[4].readsignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[226]/* d[4].readsignal DISCRETE */) ;

  (data->localData[0]->integerVars[74]/* d[4].flag DISCRETE */)  = (data->simulationInfo->integerVarsPre[74]/* d[4].flag DISCRETE */) ;

  (data->localData[0]->realVars[850]/* d[4].setz DISCRETE */)  = (data->simulationInfo->realVarsPre[850]/* d[4].setz DISCRETE */) ;

  (data->localData[0]->realVars[843]/* d[4].sety DISCRETE */)  = (data->simulationInfo->realVarsPre[843]/* d[4].sety DISCRETE */) ;

  (data->localData[0]->realVars[836]/* d[4].setx DISCRETE */)  = (data->simulationInfo->realVarsPre[836]/* d[4].setx DISCRETE */) ;

  (data->localData[0]->realVars[817]/* d[4].msg_to_cc[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[817]/* d[4].msg_to_cc[5] DISCRETE */) ;

  (data->localData[0]->realVars[816]/* d[4].msg_to_cc[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[816]/* d[4].msg_to_cc[4] DISCRETE */) ;

  (data->localData[0]->realVars[815]/* d[4].msg_to_cc[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[815]/* d[4].msg_to_cc[3] DISCRETE */) ;

  (data->localData[0]->realVars[814]/* d[4].msg_to_cc[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[814]/* d[4].msg_to_cc[2] DISCRETE */) ;

  (data->localData[0]->realVars[813]/* d[4].msg_to_cc[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[813]/* d[4].msg_to_cc[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[57]/* $whenCondition61 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[57]/* $whenCondition61 DISCRETE */) ;

  (data->localData[0]->booleanVars[57]/* $whenCondition61 DISCRETE */)  = data->simulationInfo->samples[11];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      array_alloc_scalar_real_array(&tmp724, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp725, ((modelica_real*)&((&(data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
      real_array_copy_data(tmp724, tmp725);

      (data->localData[0]->realVars[836]/* d[4].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3738]/* d[4].p.flyZone[1] PARAM */) );

      (data->localData[0]->realVars[843]/* d[4].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3739]/* d[4].p.flyZone[2] PARAM */) );

      (data->localData[0]->realVars[850]/* d[4].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3740]/* d[4].p.flyZone[3] PARAM */) );

      (data->localData[0]->integerVars[74]/* d[4].flag DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->booleanVars[226]/* d[4].readsignal DISCRETE */)  = 0;

      (data->localData[0]->booleanVars[240]/* d[4].writesignal DISCRETE */)  = 0;

      (data->localData[0]->integerVars[67]/* d[4].fifox DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[53]/* d[4].comm_state DISCRETE */)  = ((modelica_integer) 10);
    }
    else if(((data->localData[0]->booleanVars[57]/* $whenCondition61 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[57]/* $whenCondition61 DISCRETE */)  /* edge */))
    {
      if((data->simulationInfo->booleanVarsPre[212]/* d[4].d.droneDead DISCRETE */) )
      {
        (data->localData[0]->integerVars[53]/* d[4].comm_state DISCRETE */)  = ((modelica_integer) 0);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[53]/* d[4].comm_state DISCRETE */)  == ((modelica_integer) 10)))
        {
          (data->localData[0]->booleanVars[226]/* d[4].readsignal DISCRETE */)  = omc_ReadFromFIFO(threadData, (data->simulationInfo->integerVarsPre[67]/* d[4].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[219]/* d[4].datavailable DISCRETE */) , (data->simulationInfo->booleanVarsPre[226]/* d[4].readsignal DISCRETE */)  ,&(data->localData[0]->integerVars[67]/* d[4].fifox DISCRETE */) );

          if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[67]/* d[4].fifox DISCRETE */) ))
          {
            (data->localData[0]->integerVars[74]/* d[4].flag DISCRETE */)  = ((modelica_integer)floor((data->localData[0]->realVars[750]/* cc_to_drone[4].outputdata[1] DISCRETE */) ));

            if(((data->localData[0]->integerVars[74]/* d[4].flag DISCRETE */)  == ((modelica_integer) 1)))
            {
              (data->localData[0]->realVars[813]/* d[4].msg_to_cc[1] DISCRETE */)  = 2.0;

              (data->localData[0]->realVars[814]/* d[4].msg_to_cc[2] DISCRETE */)  = (data->localData[0]->realVars[24]/* d[4].d.x STATE(1,d[4].d.Vx) */) ;

              (data->localData[0]->realVars[815]/* d[4].msg_to_cc[3] DISCRETE */)  = (data->localData[0]->realVars[31]/* d[4].d.y STATE(1,d[4].d.Vy) */) ;

              (data->localData[0]->realVars[816]/* d[4].msg_to_cc[4] DISCRETE */)  = (data->localData[0]->realVars[38]/* d[4].d.z STATE(1,d[4].d.Vz) */) ;

              (data->localData[0]->realVars[817]/* d[4].msg_to_cc[5] DISCRETE */)  = (data->localData[0]->realVars[794]/* d[4].d.battery DISCRETE */) ;

              (data->localData[0]->integerVars[53]/* d[4].comm_state DISCRETE */)  = ((modelica_integer) 20);
            }
            else
            {
              if(((data->localData[0]->integerVars[74]/* d[4].flag DISCRETE */)  == ((modelica_integer) 2)))
              {
                (data->localData[0]->realVars[836]/* d[4].setx DISCRETE */)  = (data->localData[0]->realVars[751]/* cc_to_drone[4].outputdata[2] DISCRETE */) ;

                (data->localData[0]->realVars[843]/* d[4].sety DISCRETE */)  = (data->localData[0]->realVars[752]/* cc_to_drone[4].outputdata[3] DISCRETE */) ;

                (data->localData[0]->realVars[850]/* d[4].setz DISCRETE */)  = (data->localData[0]->realVars[753]/* cc_to_drone[4].outputdata[4] DISCRETE */) ;

                (data->localData[0]->integerVars[53]/* d[4].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[53]/* d[4].comm_state DISCRETE */) ;
              }
            }

            (data->localData[0]->integerVars[67]/* d[4].fifox DISCRETE */)  = ((modelica_integer) 0);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[53]/* d[4].comm_state DISCRETE */)  == ((modelica_integer) 20)))
          {
            (data->localData[0]->booleanVars[240]/* d[4].writesignal DISCRETE */)  = omc_WriteToFIFO(threadData, (data->simulationInfo->integerVarsPre[67]/* d[4].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[240]/* d[4].writesignal DISCRETE */) , (data->simulationInfo->booleanVarsPre[233]/* d[4].spaceavailable DISCRETE */)  ,&(data->localData[0]->integerVars[67]/* d[4].fifox DISCRETE */) );

            if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[67]/* d[4].fifox DISCRETE */) ))
            {
              (data->localData[0]->integerVars[53]/* d[4].comm_state DISCRETE */)  = ((modelica_integer) 10);

              (data->localData[0]->integerVars[67]/* d[4].fifox DISCRETE */)  = ((modelica_integer) 0);
            }
          }
          else
          {
            (data->localData[0]->integerVars[53]/* d[4].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[53]/* d[4].comm_state DISCRETE */) ;
          }
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 727
type: SIMPLE_ASSIGN
drone_to_cc[4].writesignal = d[4].writesignal
*/
void System_eqFunction_727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,727};
  (data->localData[0]->booleanVars[282]/* drone_to_cc[4].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[240]/* d[4].writesignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 728
type: SIMPLE_ASSIGN
drone_to_cc[4].writesigint = not pre(drone_to_cc[4].writesignal) == drone_to_cc[4].writesignal
*/
void System_eqFunction_728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,728};
  (data->localData[0]->booleanVars[275]/* drone_to_cc[4].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[282]/* drone_to_cc[4].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[282]/* drone_to_cc[4].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[282]/* drone_to_cc[4].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[282]/* drone_to_cc[4].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 729
type: SIMPLE_ASSIGN
drone_to_cc[4].inputdata[2] = d[4].msg_to_cc[2]
*/
void System_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  (data->localData[0]->realVars[238]/* drone_to_cc[4].inputdata[2] variable */)  = (data->localData[0]->realVars[814]/* d[4].msg_to_cc[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 730
type: SIMPLE_ASSIGN
drone_to_cc[4].inputdata[5] = d[4].msg_to_cc[5]
*/
void System_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  (data->localData[0]->realVars[241]/* drone_to_cc[4].inputdata[5] variable */)  = (data->localData[0]->realVars[817]/* d[4].msg_to_cc[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 731
type: SIMPLE_ASSIGN
cc_to_drone[4].readsignal = d[4].readsignal
*/
void System_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  (data->localData[0]->booleanVars[177]/* cc_to_drone[4].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[226]/* d[4].readsignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 732
type: SIMPLE_ASSIGN
cc_to_drone[4].readsigint = not pre(cc_to_drone[4].readsignal) == cc_to_drone[4].readsignal
*/
void System_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  (data->localData[0]->booleanVars[170]/* cc_to_drone[4].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[177]/* cc_to_drone[4].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[177]/* cc_to_drone[4].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[177]/* cc_to_drone[4].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[177]/* cc_to_drone[4].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 733
type: SIMPLE_ASSIGN
drone_to_cc[4].inputdata[4] = d[4].msg_to_cc[4]
*/
void System_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  (data->localData[0]->realVars[240]/* drone_to_cc[4].inputdata[4] variable */)  = (data->localData[0]->realVars[816]/* d[4].msg_to_cc[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 734
type: SIMPLE_ASSIGN
drone_to_cc[4].inputdata[1] = d[4].msg_to_cc[1]
*/
void System_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  (data->localData[0]->realVars[237]/* drone_to_cc[4].inputdata[1] variable */)  = (data->localData[0]->realVars[813]/* d[4].msg_to_cc[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 735
type: SIMPLE_ASSIGN
drone_to_cc[4].inputdata[3] = d[4].msg_to_cc[3]
*/
void System_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  (data->localData[0]->realVars[239]/* drone_to_cc[4].inputdata[3] variable */)  = (data->localData[0]->realVars[815]/* d[4].msg_to_cc[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 736
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
  $whenCondition12 := pre($whenCondition12);
  $whenCondition11 := pre($whenCondition11);
  $whenCondition10 := pre($whenCondition10);
  $whenCondition10 := pre(drone_to_cc[4].readsigint) and pre(drone_to_cc[4].writesigint);
  $whenCondition11 := pre(drone_to_cc[4].readsigint) and not pre(drone_to_cc[4].writesigint) and pre(drone_to_cc[4].fifosize) >= 1;
  $whenCondition12 := not pre(drone_to_cc[4].readsigint) and pre(drone_to_cc[4].writesigint) and pre(drone_to_cc[4].fifosize) < 10;
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
  elsewhen $whenCondition10 then
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
  elsewhen $whenCondition11 then
    for j in 1:5 loop
      drone_to_cc[4].outputdata[j] := drone_to_cc[4].fifo[pre(drone_to_cc[4].oldest),j];
    end for;
    drone_to_cc[4].oldest := mod(pre(drone_to_cc[4].oldest), 10) + 1;
    drone_to_cc[4].fifosize := pre(drone_to_cc[4].fifosize) - 1;
    drone_to_cc[4].datavailable := drone_to_cc[4].fifosize >= 1;
    drone_to_cc[4].spaceavailable := true;
  elsewhen $whenCondition12 then
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
void System_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  modelica_boolean tmp732;
  modelica_boolean tmp733;
  modelica_integer tmp734;
  modelica_integer tmp735;
  modelica_integer tmp736;
  modelica_integer tmp737;
  modelica_integer tmp738;
  modelica_integer tmp739;
  modelica_integer tmp740;
  modelica_integer tmp741;
  modelica_integer tmp742;
  modelica_boolean tmp743;
  modelica_integer tmp744;
  modelica_integer tmp745;
  modelica_integer tmp746;
  modelica_integer tmp747;
  modelica_integer tmp748;
  modelica_integer tmp749;
  modelica_integer tmp750;
  modelica_integer tmp751;
  modelica_integer tmp752;
  modelica_integer tmp753;
  modelica_integer tmp754;
  modelica_integer tmp755;
  modelica_integer tmp756;
  modelica_integer tmp757;
  modelica_integer tmp758;
  modelica_integer tmp759;
  modelica_integer tmp760;
  modelica_integer tmp761;
  modelica_integer tmp762;
  modelica_integer tmp763;
  modelica_boolean tmp764;
  modelica_integer tmp765;
  modelica_integer tmp766;
  modelica_integer tmp767;
  modelica_integer tmp768;
  modelica_boolean tmp769;
  modelica_integer tmp770;
  modelica_integer tmp771;
  modelica_integer tmp772;
  (data->localData[0]->integerVars[88]/* drone_to_cc[4].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[88]/* drone_to_cc[4].newest DISCRETE */) ;

  (data->localData[0]->integerVars[95]/* drone_to_cc[4].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[95]/* drone_to_cc[4].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[81]/* drone_to_cc[4].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[81]/* drone_to_cc[4].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[1053]/* drone_to_cc[4].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1053]/* drone_to_cc[4].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[1052]/* drone_to_cc[4].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1052]/* drone_to_cc[4].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[1051]/* drone_to_cc[4].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1051]/* drone_to_cc[4].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[1050]/* drone_to_cc[4].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1050]/* drone_to_cc[4].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[1049]/* drone_to_cc[4].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1049]/* drone_to_cc[4].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[1048]/* drone_to_cc[4].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1048]/* drone_to_cc[4].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[1047]/* drone_to_cc[4].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1047]/* drone_to_cc[4].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[1046]/* drone_to_cc[4].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1046]/* drone_to_cc[4].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[1045]/* drone_to_cc[4].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1045]/* drone_to_cc[4].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[1044]/* drone_to_cc[4].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1044]/* drone_to_cc[4].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[1043]/* drone_to_cc[4].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1043]/* drone_to_cc[4].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[1042]/* drone_to_cc[4].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1042]/* drone_to_cc[4].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[1041]/* drone_to_cc[4].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1041]/* drone_to_cc[4].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[1040]/* drone_to_cc[4].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1040]/* drone_to_cc[4].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[1039]/* drone_to_cc[4].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1039]/* drone_to_cc[4].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[1038]/* drone_to_cc[4].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1038]/* drone_to_cc[4].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[1037]/* drone_to_cc[4].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1037]/* drone_to_cc[4].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[1036]/* drone_to_cc[4].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1036]/* drone_to_cc[4].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[1035]/* drone_to_cc[4].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1035]/* drone_to_cc[4].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[1034]/* drone_to_cc[4].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1034]/* drone_to_cc[4].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[1033]/* drone_to_cc[4].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1033]/* drone_to_cc[4].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[1032]/* drone_to_cc[4].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1032]/* drone_to_cc[4].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[1031]/* drone_to_cc[4].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1031]/* drone_to_cc[4].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[1030]/* drone_to_cc[4].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1030]/* drone_to_cc[4].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[1029]/* drone_to_cc[4].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1029]/* drone_to_cc[4].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[1028]/* drone_to_cc[4].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1028]/* drone_to_cc[4].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[1027]/* drone_to_cc[4].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1027]/* drone_to_cc[4].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[1026]/* drone_to_cc[4].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1026]/* drone_to_cc[4].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[1025]/* drone_to_cc[4].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1025]/* drone_to_cc[4].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[1024]/* drone_to_cc[4].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1024]/* drone_to_cc[4].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[1023]/* drone_to_cc[4].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1023]/* drone_to_cc[4].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[1022]/* drone_to_cc[4].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1022]/* drone_to_cc[4].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[1021]/* drone_to_cc[4].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1021]/* drone_to_cc[4].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[1020]/* drone_to_cc[4].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1020]/* drone_to_cc[4].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[1019]/* drone_to_cc[4].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1019]/* drone_to_cc[4].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[1018]/* drone_to_cc[4].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1018]/* drone_to_cc[4].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[1017]/* drone_to_cc[4].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1017]/* drone_to_cc[4].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[1016]/* drone_to_cc[4].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1016]/* drone_to_cc[4].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[1015]/* drone_to_cc[4].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1015]/* drone_to_cc[4].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[1014]/* drone_to_cc[4].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1014]/* drone_to_cc[4].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[1013]/* drone_to_cc[4].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1013]/* drone_to_cc[4].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[1012]/* drone_to_cc[4].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1012]/* drone_to_cc[4].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[1011]/* drone_to_cc[4].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1011]/* drone_to_cc[4].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[1010]/* drone_to_cc[4].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1010]/* drone_to_cc[4].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[1009]/* drone_to_cc[4].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1009]/* drone_to_cc[4].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[1008]/* drone_to_cc[4].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1008]/* drone_to_cc[4].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[1007]/* drone_to_cc[4].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1007]/* drone_to_cc[4].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[1006]/* drone_to_cc[4].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1006]/* drone_to_cc[4].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[1005]/* drone_to_cc[4].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1005]/* drone_to_cc[4].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[1004]/* drone_to_cc[4].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1004]/* drone_to_cc[4].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[268]/* drone_to_cc[4].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[268]/* drone_to_cc[4].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[1223]/* drone_to_cc[4].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1223]/* drone_to_cc[4].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[1222]/* drone_to_cc[4].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1222]/* drone_to_cc[4].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[1221]/* drone_to_cc[4].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1221]/* drone_to_cc[4].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[1220]/* drone_to_cc[4].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1220]/* drone_to_cc[4].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[1219]/* drone_to_cc[4].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1219]/* drone_to_cc[4].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[247]/* drone_to_cc[4].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[247]/* drone_to_cc[4].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[3]/* $whenCondition12 DISCRETE */) ;

  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[2]/* $whenCondition11 DISCRETE */) ;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[1]/* $whenCondition10 DISCRETE */) ;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[254]/* drone_to_cc[4].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[275]/* drone_to_cc[4].writesigint DISCRETE */) );

  tmp732 = GreaterEq((data->simulationInfo->integerVarsPre[81]/* drone_to_cc[4].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[254]/* drone_to_cc[4].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[275]/* drone_to_cc[4].writesigint DISCRETE */) )) && tmp732);

  tmp733 = Less((data->simulationInfo->integerVarsPre[81]/* drone_to_cc[4].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[254]/* drone_to_cc[4].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[275]/* drone_to_cc[4].writesigint DISCRETE */) ) && tmp733);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[247]/* drone_to_cc[4].datavailable DISCRETE */)  = 0;

      tmp734 = ((modelica_integer) 1); tmp735 = 1; tmp736 = ((modelica_integer) 5);
      if(!(((tmp735 > 0) && (tmp734 > tmp736)) || ((tmp735 < 0) && (tmp734 < tmp736))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp734, tmp736); j += tmp735)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[268]/* drone_to_cc[4].spaceavailable DISCRETE */)  = 1;

      tmp740 = ((modelica_integer) 1); tmp741 = 1; tmp742 = ((modelica_integer) 10);
      if(!(((tmp741 > 0) && (tmp740 > tmp742)) || ((tmp741 < 0) && (tmp740 < tmp742))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp740, tmp742); i += tmp741)
        {
          tmp737 = ((modelica_integer) 1); tmp738 = 1; tmp739 = ((modelica_integer) 5);
          if(!(((tmp738 > 0) && (tmp737 > tmp739)) || ((tmp738 < 0) && (tmp737 < tmp739))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp737, tmp739); j += tmp738)
            {
              (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[81]/* drone_to_cc[4].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[95]/* drone_to_cc[4].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[88]/* drone_to_cc[4].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[1]/* $whenCondition10 DISCRETE */)  /* edge */))
    {
      tmp743 = Less((data->simulationInfo->integerVarsPre[81]/* drone_to_cc[4].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp743)
      {
        tmp744 = ((modelica_integer) 1); tmp745 = 1; tmp746 = ((modelica_integer) 5);
        if(!(((tmp745 > 0) && (tmp744 > tmp746)) || ((tmp745 < 0) && (tmp744 < tmp746))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp744, tmp746); j += tmp745)
          {
            (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[88]/* drone_to_cc[4].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 4) - 1) * 5 + (j-1)] ;
          }
        }

        tmp747 = ((modelica_integer) 10);
        if (tmp747 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[4].newest), 10)");}
        (data->localData[0]->integerVars[88]/* drone_to_cc[4].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[88]/* drone_to_cc[4].newest DISCRETE */) , tmp747) + ((modelica_integer) 1);

        tmp748 = ((modelica_integer) 1); tmp749 = 1; tmp750 = ((modelica_integer) 5);
        if(!(((tmp749 > 0) && (tmp748 > tmp750)) || ((tmp749 < 0) && (tmp748 < tmp750))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp748, tmp750); j += tmp749)
          {
            (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[95]/* drone_to_cc[4].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp751 = ((modelica_integer) 10);
        if (tmp751 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[4].oldest), 10)");}
        (data->localData[0]->integerVars[95]/* drone_to_cc[4].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[95]/* drone_to_cc[4].oldest DISCRETE */) , tmp751) + ((modelica_integer) 1);
      }
      else
      {
        tmp752 = ((modelica_integer) 1); tmp753 = 1; tmp754 = ((modelica_integer) 5);
        if(!(((tmp753 > 0) && (tmp752 > tmp754)) || ((tmp753 < 0) && (tmp752 < tmp754))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp752, tmp754); j += tmp753)
          {
            (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[95]/* drone_to_cc[4].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp755 = ((modelica_integer) 10);
        if (tmp755 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[4].oldest), 10)");}
        (data->localData[0]->integerVars[95]/* drone_to_cc[4].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[95]/* drone_to_cc[4].oldest DISCRETE */) , tmp755) + ((modelica_integer) 1);

        tmp756 = ((modelica_integer) 1); tmp757 = 1; tmp758 = ((modelica_integer) 5);
        if(!(((tmp757 > 0) && (tmp756 > tmp758)) || ((tmp757 < 0) && (tmp756 < tmp758))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp756, tmp758); j += tmp757)
          {
            (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[88]/* drone_to_cc[4].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 4) - 1) * 5 + (j-1)] ;
          }
        }

        tmp759 = ((modelica_integer) 10);
        if (tmp759 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[4].newest), 10)");}
        (data->localData[0]->integerVars[88]/* drone_to_cc[4].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[88]/* drone_to_cc[4].newest DISCRETE */) , tmp759) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[2]/* $whenCondition11 DISCRETE */)  /* edge */))
    {
      tmp760 = ((modelica_integer) 1); tmp761 = 1; tmp762 = ((modelica_integer) 5);
      if(!(((tmp761 > 0) && (tmp760 > tmp762)) || ((tmp761 < 0) && (tmp760 < tmp762))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp760, tmp762); j += tmp761)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[95]/* drone_to_cc[4].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp763 = ((modelica_integer) 10);
      if (tmp763 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[4].oldest), 10)");}
      (data->localData[0]->integerVars[95]/* drone_to_cc[4].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[95]/* drone_to_cc[4].oldest DISCRETE */) , tmp763) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[81]/* drone_to_cc[4].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[81]/* drone_to_cc[4].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp764 = GreaterEq((data->localData[0]->integerVars[81]/* drone_to_cc[4].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[247]/* drone_to_cc[4].datavailable DISCRETE */)  = tmp764;

      (data->localData[0]->booleanVars[268]/* drone_to_cc[4].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[3]/* $whenCondition12 DISCRETE */)  /* edge */))
    {
      tmp765 = ((modelica_integer) 1); tmp766 = 1; tmp767 = ((modelica_integer) 5);
      if(!(((tmp766 > 0) && (tmp765 > tmp767)) || ((tmp766 < 0) && (tmp765 < tmp767))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp765, tmp767); j += tmp766)
        {
          (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[88]/* drone_to_cc[4].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 4) - 1) * 5 + (j-1)] ;
        }
      }

      tmp768 = ((modelica_integer) 10);
      if (tmp768 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[4].newest), 10)");}
      (data->localData[0]->integerVars[88]/* drone_to_cc[4].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[88]/* drone_to_cc[4].newest DISCRETE */) , tmp768) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[81]/* drone_to_cc[4].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[81]/* drone_to_cc[4].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[247]/* drone_to_cc[4].datavailable DISCRETE */)  = 1;

      tmp769 = Less((data->simulationInfo->integerVarsPre[81]/* drone_to_cc[4].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[268]/* drone_to_cc[4].spaceavailable DISCRETE */)  = tmp769;

      tmp770 = ((modelica_integer) 1); tmp771 = 1; tmp772 = ((modelica_integer) 5);
      if(!(((tmp771 > 0) && (tmp770 > tmp772)) || ((tmp771 < 0) && (tmp770 < tmp772))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp770, tmp772); j += tmp771)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 4) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 4) - 1) * 10 + ((data->simulationInfo->integerVarsPre[95]/* drone_to_cc[4].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 737
type: SIMPLE_ASSIGN
cc.msg_from_drone[4,4] = drone_to_cc[4].outputdata[4]
*/
void System_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  (data->localData[0]->realVars[105]/* cc.msg_from_drone[4,4] variable */)  = (data->localData[0]->realVars[1222]/* drone_to_cc[4].outputdata[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 738
type: SIMPLE_ASSIGN
cc.msg_from_drone[4,5] = drone_to_cc[4].outputdata[5]
*/
void System_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  (data->localData[0]->realVars[106]/* cc.msg_from_drone[4,5] variable */)  = (data->localData[0]->realVars[1223]/* drone_to_cc[4].outputdata[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 739
type: SIMPLE_ASSIGN
cc.datavailable[4] = drone_to_cc[4].datavailable
*/
void System_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  (data->localData[0]->booleanVars[90]/* cc.datavailable[4] DISCRETE */)  = (data->localData[0]->booleanVars[247]/* drone_to_cc[4].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 740
type: SIMPLE_ASSIGN
cc.msg_from_drone[4,1] = drone_to_cc[4].outputdata[1]
*/
void System_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  (data->localData[0]->realVars[102]/* cc.msg_from_drone[4,1] variable */)  = (data->localData[0]->realVars[1219]/* drone_to_cc[4].outputdata[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 741
type: SIMPLE_ASSIGN
cc.msg_from_drone[4,3] = drone_to_cc[4].outputdata[3]
*/
void System_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  (data->localData[0]->realVars[104]/* cc.msg_from_drone[4,3] variable */)  = (data->localData[0]->realVars[1221]/* drone_to_cc[4].outputdata[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 742
type: SIMPLE_ASSIGN
cc.msg_from_drone[4,2] = drone_to_cc[4].outputdata[2]
*/
void System_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  (data->localData[0]->realVars[103]/* cc.msg_from_drone[4,2] variable */)  = (data->localData[0]->realVars[1220]/* drone_to_cc[4].outputdata[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 743
type: SIMPLE_ASSIGN
d[4].spaceavailable = drone_to_cc[4].spaceavailable
*/
void System_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  (data->localData[0]->booleanVars[233]/* d[4].spaceavailable DISCRETE */)  = (data->localData[0]->booleanVars[268]/* drone_to_cc[4].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 744
type: SIMPLE_ASSIGN
d[4].ctrl.sety = d[4].sety
*/
void System_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  (data->localData[0]->realVars[197]/* d[4].ctrl.sety variable */)  = (data->localData[0]->realVars[843]/* d[4].sety DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 745
type: SIMPLE_ASSIGN
d[4].ctrl.setx = d[4].setx
*/
void System_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  (data->localData[0]->realVars[190]/* d[4].ctrl.setx variable */)  = (data->localData[0]->realVars[836]/* d[4].setx DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 746
type: SIMPLE_ASSIGN
d[4].ctrl.setz = d[4].setz
*/
void System_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  (data->localData[0]->realVars[204]/* d[4].ctrl.setz variable */)  = (data->localData[0]->realVars[850]/* d[4].setz DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 747
type: SIMPLE_ASSIGN
d[4].batteryPercentage = 100.0 * d[4].d.battery / d[4].p.capacity
*/
void System_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  (data->localData[0]->realVars[162]/* d[4].batteryPercentage variable */)  = (100.0) * (DIVISION_SIM((data->localData[0]->realVars[794]/* d[4].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[3655]/* d[4].p.capacity PARAM */) ,"d[4].p.capacity",equationIndexes));
  TRACE_POP
}
/*
equation index: 748
type: SIMPLE_ASSIGN
d[4].ctrl.droneDead = d[4].d.droneDead
*/
void System_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  (data->localData[0]->booleanVars[205]/* d[4].ctrl.droneDead DISCRETE */)  = (data->localData[0]->booleanVars[212]/* d[4].d.droneDead DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 749
type: ALGORITHM

  d[3].ctrl.destZ := pre(d[3].ctrl.destZ);
  d[3].ctrl.destY := pre(d[3].ctrl.destY);
  d[3].ctrl.destX := pre(d[3].ctrl.destX);
  $whenCondition68 := pre($whenCondition68);
  $whenCondition67 := pre($whenCondition67);
  $whenCondition67 := sample(8, 0.0, d[3].ctrl.prm.Tdrone) and pre(d[3].ctrl.droneDead);
  $whenCondition68 := sample(8, 0.0, d[3].ctrl.prm.Tdrone);
  when $whenCondition67 then
    d[3].ctrl.destX := pre(d[3].ctrl.x);
    d[3].ctrl.destY := pre(d[3].ctrl.y);
    d[3].ctrl.destZ := 0.0;
  elsewhen $whenCondition68 then
    d[3].ctrl.destX := pre(d[3].ctrl.setx);
    d[3].ctrl.destY := pre(d[3].ctrl.sety);
    d[3].ctrl.destZ := pre(d[3].ctrl.setz);
  end when;
*/
void System_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  (data->localData[0]->realVars[786]/* d[3].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[786]/* d[3].ctrl.destZ DISCRETE */) ;

  (data->localData[0]->realVars[779]/* d[3].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[779]/* d[3].ctrl.destY DISCRETE */) ;

  (data->localData[0]->realVars[772]/* d[3].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[772]/* d[3].ctrl.destX DISCRETE */) ;

  (data->localData[0]->booleanVars[64]/* $whenCondition68 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[64]/* $whenCondition68 DISCRETE */) ;

  (data->localData[0]->booleanVars[63]/* $whenCondition67 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[63]/* $whenCondition67 DISCRETE */) ;

  (data->localData[0]->booleanVars[63]/* $whenCondition67 DISCRETE */)  = (data->simulationInfo->samples[7] && (data->simulationInfo->booleanVarsPre[204]/* d[3].ctrl.droneDead DISCRETE */) );

  (data->localData[0]->booleanVars[64]/* $whenCondition68 DISCRETE */)  = data->simulationInfo->samples[7];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[63]/* $whenCondition67 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[63]/* $whenCondition67 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[772]/* d[3].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[210]/* d[3].ctrl.x variable */) ;

      (data->localData[0]->realVars[779]/* d[3].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[217]/* d[3].ctrl.y variable */) ;

      (data->localData[0]->realVars[786]/* d[3].ctrl.destZ DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[64]/* $whenCondition68 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[64]/* $whenCondition68 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[772]/* d[3].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[189]/* d[3].ctrl.setx variable */) ;

      (data->localData[0]->realVars[779]/* d[3].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[196]/* d[3].ctrl.sety variable */) ;

      (data->localData[0]->realVars[786]/* d[3].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[203]/* d[3].ctrl.setz variable */) ;
    }
  }
  TRACE_POP
}
/*
equation index: 750
type: ALGORITHM

  d[3].d.droneDead := pre(d[3].d.droneDead);
  d[3].d.droneState := pre(d[3].d.droneState);
  d[3].d.battery := pre(d[3].d.battery);
  $whenCondition70 := pre($whenCondition70);
  $whenCondition69 := pre($whenCondition69);
  $whenCondition69 := abs(pre(d[3].d.battery)) < 0.01;
  $whenCondition70 := sample(7, 0.0, d[3].d.p.Tdrone) and pre(d[3].d.droneState) == 1;
  when false then
    d[3].d.battery := d[3].d.p.capacity;
    d[3].d.droneState := 1;
    d[3].d.droneDead := false;
  elsewhen $whenCondition69 then
    d[3].d.droneDead := true;
  elsewhen $whenCondition70 then
    if returnedHome(d[3].d.p, pre(d[3].d.x), pre(d[3].d.y), pre(d[3].d.z)) then
      d[3].d.battery := charging(d[3].d.p, pre(d[3].d.battery));
    else
      d[3].d.battery := batteryMonitor(pre(d[3].d.battery), d[3].d.p.batteryDischarge);
    end if;
  end when;
*/
void System_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  modelica_boolean tmp773;
  real_array tmp775;
  real_array tmp776;
  real_array tmp777;
  real_array tmp778;
  real_array tmp779;
  real_array tmp780;
  (data->localData[0]->booleanVars[211]/* d[3].d.droneDead DISCRETE */)  = (data->simulationInfo->booleanVarsPre[211]/* d[3].d.droneDead DISCRETE */) ;

  (data->localData[0]->integerVars[59]/* d[3].d.droneState DISCRETE */)  = (data->simulationInfo->integerVarsPre[59]/* d[3].d.droneState DISCRETE */) ;

  (data->localData[0]->realVars[793]/* d[3].d.battery DISCRETE */)  = (data->simulationInfo->realVarsPre[793]/* d[3].d.battery DISCRETE */) ;

  (data->localData[0]->booleanVars[67]/* $whenCondition70 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[67]/* $whenCondition70 DISCRETE */) ;

  (data->localData[0]->booleanVars[65]/* $whenCondition69 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[65]/* $whenCondition69 DISCRETE */) ;

  tmp773 = Less(fabs((data->simulationInfo->realVarsPre[793]/* d[3].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[65]/* $whenCondition69 DISCRETE */)  = tmp773;

  (data->localData[0]->booleanVars[67]/* $whenCondition70 DISCRETE */)  = (data->simulationInfo->samples[6] && ((data->simulationInfo->integerVarsPre[59]/* d[3].d.droneState DISCRETE */)  == ((modelica_integer) 1)));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[793]/* d[3].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[2737]/* d[3].d.p.capacity PARAM */) ;

      (data->localData[0]->integerVars[59]/* d[3].d.droneState DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->booleanVars[211]/* d[3].d.droneDead DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[65]/* $whenCondition69 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[65]/* $whenCondition69 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->booleanVars[211]/* d[3].d.droneDead DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[67]/* $whenCondition70 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[67]/* $whenCondition70 DISCRETE */)  /* edge */))
    {
      real_array_create(&tmp775, ((modelica_real*)&((&data->simulationInfo->realParameter[2812]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 3) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp776, ((modelica_real*)&((&data->simulationInfo->realParameter[2791]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 3) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp777, ((modelica_real*)&((&data->simulationInfo->realParameter[2042]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 3) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
      if(omc_returnedHome(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[2919]/* d[3].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[69]/* d[3].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[76]/* d[3].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[2030]/* d[3].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[2023]/* d[3].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[2037]/* d[3].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[2870]/* d[3].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[90]/* d[3].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[2744]/* d[3].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[2891]/* d[3].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[2884]/* d[3].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[2758]/* d[3].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[2877]/* d[3].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[2723]/* d[3].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[2765]/* d[3].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[2716]/* d[3].d.p.arrivalThreshold PARAM */) , tmp775, tmp776, (data->simulationInfo->realParameter[2842]/* d[3].d.p.m PARAM */) , (data->simulationInfo->realParameter[2856]/* d[3].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[2835]/* d[3].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[2933]/* d[3].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[2849]/* d[3].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[2863]/* d[3].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[2772]/* d[3].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[2926]/* d[3].d.p.unita PARAM */) , (data->simulationInfo->realParameter[2737]/* d[3].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[2730]/* d[3].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[2751]/* d[3].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[2898]/* d[3].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[2786]/* d[3].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[2779]/* d[3].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[2905]/* d[3].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[2912]/* d[3].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[83]/* d[3].d.p.nAreas PARAM */) , tmp777), (data->simulationInfo->realVarsPre[23]/* d[3].d.x STATE(1,d[3].d.Vx) */) , (data->simulationInfo->realVarsPre[30]/* d[3].d.y STATE(1,d[3].d.Vy) */) , (data->simulationInfo->realVarsPre[37]/* d[3].d.z STATE(1,d[3].d.Vz) */) ))
      {
        real_array_create(&tmp778, ((modelica_real*)&((&data->simulationInfo->realParameter[2812]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 3) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp779, ((modelica_real*)&((&data->simulationInfo->realParameter[2791]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 3) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp780, ((modelica_real*)&((&data->simulationInfo->realParameter[2042]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 3) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
        (data->localData[0]->realVars[793]/* d[3].d.battery DISCRETE */)  = omc_charging(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[2919]/* d[3].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[69]/* d[3].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[76]/* d[3].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[2030]/* d[3].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[2023]/* d[3].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[2037]/* d[3].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[2870]/* d[3].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[90]/* d[3].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[2744]/* d[3].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[2891]/* d[3].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[2884]/* d[3].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[2758]/* d[3].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[2877]/* d[3].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[2723]/* d[3].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[2765]/* d[3].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[2716]/* d[3].d.p.arrivalThreshold PARAM */) , tmp778, tmp779, (data->simulationInfo->realParameter[2842]/* d[3].d.p.m PARAM */) , (data->simulationInfo->realParameter[2856]/* d[3].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[2835]/* d[3].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[2933]/* d[3].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[2849]/* d[3].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[2863]/* d[3].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[2772]/* d[3].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[2926]/* d[3].d.p.unita PARAM */) , (data->simulationInfo->realParameter[2737]/* d[3].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[2730]/* d[3].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[2751]/* d[3].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[2898]/* d[3].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[2786]/* d[3].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[2779]/* d[3].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[2905]/* d[3].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[2912]/* d[3].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[83]/* d[3].d.p.nAreas PARAM */) , tmp780), (data->simulationInfo->realVarsPre[793]/* d[3].d.battery DISCRETE */) );
      }
      else
      {
        (data->localData[0]->realVars[793]/* d[3].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[793]/* d[3].d.battery DISCRETE */) , (data->simulationInfo->realParameter[2730]/* d[3].d.p.batteryDischarge PARAM */) );
      }
    }
  }
  TRACE_POP
}
/*
equation index: 751
type: SIMPLE_ASSIGN
d[3].ctrl.droneDead = d[3].d.droneDead
*/
void System_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  (data->localData[0]->booleanVars[204]/* d[3].ctrl.droneDead DISCRETE */)  = (data->localData[0]->booleanVars[211]/* d[3].d.droneDead DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 752
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
  $whenCondition66 := pre($whenCondition66);
  $whenCondition66 := sample(9, 0.0, d[3].p.Tdrone);
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
  elsewhen $whenCondition66 then
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
void System_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  real_array tmp781;
  real_array tmp782;
  (data->localData[0]->integerVars[52]/* d[3].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[52]/* d[3].comm_state DISCRETE */) ;

  (data->localData[0]->integerVars[66]/* d[3].fifox DISCRETE */)  = (data->simulationInfo->integerVarsPre[66]/* d[3].fifox DISCRETE */) ;

  (data->localData[0]->booleanVars[239]/* d[3].writesignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[239]/* d[3].writesignal DISCRETE */) ;

  (data->localData[0]->booleanVars[225]/* d[3].readsignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[225]/* d[3].readsignal DISCRETE */) ;

  (data->localData[0]->integerVars[73]/* d[3].flag DISCRETE */)  = (data->simulationInfo->integerVarsPre[73]/* d[3].flag DISCRETE */) ;

  (data->localData[0]->realVars[849]/* d[3].setz DISCRETE */)  = (data->simulationInfo->realVarsPre[849]/* d[3].setz DISCRETE */) ;

  (data->localData[0]->realVars[842]/* d[3].sety DISCRETE */)  = (data->simulationInfo->realVarsPre[842]/* d[3].sety DISCRETE */) ;

  (data->localData[0]->realVars[835]/* d[3].setx DISCRETE */)  = (data->simulationInfo->realVarsPre[835]/* d[3].setx DISCRETE */) ;

  (data->localData[0]->realVars[812]/* d[3].msg_to_cc[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[812]/* d[3].msg_to_cc[5] DISCRETE */) ;

  (data->localData[0]->realVars[811]/* d[3].msg_to_cc[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[811]/* d[3].msg_to_cc[4] DISCRETE */) ;

  (data->localData[0]->realVars[810]/* d[3].msg_to_cc[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[810]/* d[3].msg_to_cc[3] DISCRETE */) ;

  (data->localData[0]->realVars[809]/* d[3].msg_to_cc[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[809]/* d[3].msg_to_cc[2] DISCRETE */) ;

  (data->localData[0]->realVars[808]/* d[3].msg_to_cc[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[808]/* d[3].msg_to_cc[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[62]/* $whenCondition66 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[62]/* $whenCondition66 DISCRETE */) ;

  (data->localData[0]->booleanVars[62]/* $whenCondition66 DISCRETE */)  = data->simulationInfo->samples[8];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      array_alloc_scalar_real_array(&tmp781, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp782, ((modelica_real*)&((&(data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
      real_array_copy_data(tmp781, tmp782);

      (data->localData[0]->realVars[835]/* d[3].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3735]/* d[3].p.flyZone[1] PARAM */) );

      (data->localData[0]->realVars[842]/* d[3].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3736]/* d[3].p.flyZone[2] PARAM */) );

      (data->localData[0]->realVars[849]/* d[3].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3737]/* d[3].p.flyZone[3] PARAM */) );

      (data->localData[0]->integerVars[73]/* d[3].flag DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->booleanVars[225]/* d[3].readsignal DISCRETE */)  = 0;

      (data->localData[0]->booleanVars[239]/* d[3].writesignal DISCRETE */)  = 0;

      (data->localData[0]->integerVars[66]/* d[3].fifox DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[52]/* d[3].comm_state DISCRETE */)  = ((modelica_integer) 10);
    }
    else if(((data->localData[0]->booleanVars[62]/* $whenCondition66 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[62]/* $whenCondition66 DISCRETE */)  /* edge */))
    {
      if((data->simulationInfo->booleanVarsPre[211]/* d[3].d.droneDead DISCRETE */) )
      {
        (data->localData[0]->integerVars[52]/* d[3].comm_state DISCRETE */)  = ((modelica_integer) 0);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[52]/* d[3].comm_state DISCRETE */)  == ((modelica_integer) 10)))
        {
          (data->localData[0]->booleanVars[225]/* d[3].readsignal DISCRETE */)  = omc_ReadFromFIFO(threadData, (data->simulationInfo->integerVarsPre[66]/* d[3].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[218]/* d[3].datavailable DISCRETE */) , (data->simulationInfo->booleanVarsPre[225]/* d[3].readsignal DISCRETE */)  ,&(data->localData[0]->integerVars[66]/* d[3].fifox DISCRETE */) );

          if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[66]/* d[3].fifox DISCRETE */) ))
          {
            (data->localData[0]->integerVars[73]/* d[3].flag DISCRETE */)  = ((modelica_integer)floor((data->localData[0]->realVars[745]/* cc_to_drone[3].outputdata[1] DISCRETE */) ));

            if(((data->localData[0]->integerVars[73]/* d[3].flag DISCRETE */)  == ((modelica_integer) 1)))
            {
              (data->localData[0]->realVars[808]/* d[3].msg_to_cc[1] DISCRETE */)  = 2.0;

              (data->localData[0]->realVars[809]/* d[3].msg_to_cc[2] DISCRETE */)  = (data->localData[0]->realVars[23]/* d[3].d.x STATE(1,d[3].d.Vx) */) ;

              (data->localData[0]->realVars[810]/* d[3].msg_to_cc[3] DISCRETE */)  = (data->localData[0]->realVars[30]/* d[3].d.y STATE(1,d[3].d.Vy) */) ;

              (data->localData[0]->realVars[811]/* d[3].msg_to_cc[4] DISCRETE */)  = (data->localData[0]->realVars[37]/* d[3].d.z STATE(1,d[3].d.Vz) */) ;

              (data->localData[0]->realVars[812]/* d[3].msg_to_cc[5] DISCRETE */)  = (data->localData[0]->realVars[793]/* d[3].d.battery DISCRETE */) ;

              (data->localData[0]->integerVars[52]/* d[3].comm_state DISCRETE */)  = ((modelica_integer) 20);
            }
            else
            {
              if(((data->localData[0]->integerVars[73]/* d[3].flag DISCRETE */)  == ((modelica_integer) 2)))
              {
                (data->localData[0]->realVars[835]/* d[3].setx DISCRETE */)  = (data->localData[0]->realVars[746]/* cc_to_drone[3].outputdata[2] DISCRETE */) ;

                (data->localData[0]->realVars[842]/* d[3].sety DISCRETE */)  = (data->localData[0]->realVars[747]/* cc_to_drone[3].outputdata[3] DISCRETE */) ;

                (data->localData[0]->realVars[849]/* d[3].setz DISCRETE */)  = (data->localData[0]->realVars[748]/* cc_to_drone[3].outputdata[4] DISCRETE */) ;

                (data->localData[0]->integerVars[52]/* d[3].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[52]/* d[3].comm_state DISCRETE */) ;
              }
            }

            (data->localData[0]->integerVars[66]/* d[3].fifox DISCRETE */)  = ((modelica_integer) 0);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[52]/* d[3].comm_state DISCRETE */)  == ((modelica_integer) 20)))
          {
            (data->localData[0]->booleanVars[239]/* d[3].writesignal DISCRETE */)  = omc_WriteToFIFO(threadData, (data->simulationInfo->integerVarsPre[66]/* d[3].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[239]/* d[3].writesignal DISCRETE */) , (data->simulationInfo->booleanVarsPre[232]/* d[3].spaceavailable DISCRETE */)  ,&(data->localData[0]->integerVars[66]/* d[3].fifox DISCRETE */) );

            if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[66]/* d[3].fifox DISCRETE */) ))
            {
              (data->localData[0]->integerVars[52]/* d[3].comm_state DISCRETE */)  = ((modelica_integer) 10);

              (data->localData[0]->integerVars[66]/* d[3].fifox DISCRETE */)  = ((modelica_integer) 0);
            }
          }
          else
          {
            (data->localData[0]->integerVars[52]/* d[3].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[52]/* d[3].comm_state DISCRETE */) ;
          }
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 753
type: SIMPLE_ASSIGN
drone_to_cc[3].inputdata[5] = d[3].msg_to_cc[5]
*/
void System_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  (data->localData[0]->realVars[236]/* drone_to_cc[3].inputdata[5] variable */)  = (data->localData[0]->realVars[812]/* d[3].msg_to_cc[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 754
type: SIMPLE_ASSIGN
d[3].ctrl.sety = d[3].sety
*/
void System_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  (data->localData[0]->realVars[196]/* d[3].ctrl.sety variable */)  = (data->localData[0]->realVars[842]/* d[3].sety DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 755
type: SIMPLE_ASSIGN
cc_to_drone[3].readsignal = d[3].readsignal
*/
void System_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  (data->localData[0]->booleanVars[176]/* cc_to_drone[3].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[225]/* d[3].readsignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 756
type: SIMPLE_ASSIGN
cc_to_drone[3].readsigint = not pre(cc_to_drone[3].readsignal) == cc_to_drone[3].readsignal
*/
void System_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  (data->localData[0]->booleanVars[169]/* cc_to_drone[3].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[176]/* cc_to_drone[3].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[176]/* cc_to_drone[3].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[176]/* cc_to_drone[3].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[176]/* cc_to_drone[3].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 757
type: SIMPLE_ASSIGN
d[3].ctrl.setz = d[3].setz
*/
void System_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  (data->localData[0]->realVars[203]/* d[3].ctrl.setz variable */)  = (data->localData[0]->realVars[849]/* d[3].setz DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 758
type: SIMPLE_ASSIGN
d[3].ctrl.setx = d[3].setx
*/
void System_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  (data->localData[0]->realVars[189]/* d[3].ctrl.setx variable */)  = (data->localData[0]->realVars[835]/* d[3].setx DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 759
type: SIMPLE_ASSIGN
drone_to_cc[3].inputdata[2] = d[3].msg_to_cc[2]
*/
void System_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  (data->localData[0]->realVars[233]/* drone_to_cc[3].inputdata[2] variable */)  = (data->localData[0]->realVars[809]/* d[3].msg_to_cc[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 760
type: SIMPLE_ASSIGN
drone_to_cc[3].inputdata[3] = d[3].msg_to_cc[3]
*/
void System_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  (data->localData[0]->realVars[234]/* drone_to_cc[3].inputdata[3] variable */)  = (data->localData[0]->realVars[810]/* d[3].msg_to_cc[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 761
type: SIMPLE_ASSIGN
drone_to_cc[3].writesignal = d[3].writesignal
*/
void System_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  (data->localData[0]->booleanVars[281]/* drone_to_cc[3].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[239]/* d[3].writesignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 762
type: SIMPLE_ASSIGN
drone_to_cc[3].writesigint = not pre(drone_to_cc[3].writesignal) == drone_to_cc[3].writesignal
*/
void System_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  (data->localData[0]->booleanVars[274]/* drone_to_cc[3].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[281]/* drone_to_cc[3].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[281]/* drone_to_cc[3].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[281]/* drone_to_cc[3].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[281]/* drone_to_cc[3].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 763
type: SIMPLE_ASSIGN
drone_to_cc[3].inputdata[1] = d[3].msg_to_cc[1]
*/
void System_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  (data->localData[0]->realVars[232]/* drone_to_cc[3].inputdata[1] variable */)  = (data->localData[0]->realVars[808]/* d[3].msg_to_cc[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 764
type: SIMPLE_ASSIGN
drone_to_cc[3].inputdata[4] = d[3].msg_to_cc[4]
*/
void System_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  (data->localData[0]->realVars[235]/* drone_to_cc[3].inputdata[4] variable */)  = (data->localData[0]->realVars[811]/* d[3].msg_to_cc[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 765
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
  $whenCondition15 := pre($whenCondition15);
  $whenCondition14 := pre($whenCondition14);
  $whenCondition13 := pre($whenCondition13);
  $whenCondition13 := pre(drone_to_cc[3].readsigint) and pre(drone_to_cc[3].writesigint);
  $whenCondition14 := pre(drone_to_cc[3].readsigint) and not pre(drone_to_cc[3].writesigint) and pre(drone_to_cc[3].fifosize) >= 1;
  $whenCondition15 := not pre(drone_to_cc[3].readsigint) and pre(drone_to_cc[3].writesigint) and pre(drone_to_cc[3].fifosize) < 10;
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
  elsewhen $whenCondition13 then
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
  elsewhen $whenCondition14 then
    for j in 1:5 loop
      drone_to_cc[3].outputdata[j] := drone_to_cc[3].fifo[pre(drone_to_cc[3].oldest),j];
    end for;
    drone_to_cc[3].oldest := mod(pre(drone_to_cc[3].oldest), 10) + 1;
    drone_to_cc[3].fifosize := pre(drone_to_cc[3].fifosize) - 1;
    drone_to_cc[3].datavailable := drone_to_cc[3].fifosize >= 1;
    drone_to_cc[3].spaceavailable := true;
  elsewhen $whenCondition15 then
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
void System_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  modelica_boolean tmp789;
  modelica_boolean tmp790;
  modelica_integer tmp791;
  modelica_integer tmp792;
  modelica_integer tmp793;
  modelica_integer tmp794;
  modelica_integer tmp795;
  modelica_integer tmp796;
  modelica_integer tmp797;
  modelica_integer tmp798;
  modelica_integer tmp799;
  modelica_boolean tmp800;
  modelica_integer tmp801;
  modelica_integer tmp802;
  modelica_integer tmp803;
  modelica_integer tmp804;
  modelica_integer tmp805;
  modelica_integer tmp806;
  modelica_integer tmp807;
  modelica_integer tmp808;
  modelica_integer tmp809;
  modelica_integer tmp810;
  modelica_integer tmp811;
  modelica_integer tmp812;
  modelica_integer tmp813;
  modelica_integer tmp814;
  modelica_integer tmp815;
  modelica_integer tmp816;
  modelica_integer tmp817;
  modelica_integer tmp818;
  modelica_integer tmp819;
  modelica_integer tmp820;
  modelica_boolean tmp821;
  modelica_integer tmp822;
  modelica_integer tmp823;
  modelica_integer tmp824;
  modelica_integer tmp825;
  modelica_boolean tmp826;
  modelica_integer tmp827;
  modelica_integer tmp828;
  modelica_integer tmp829;
  (data->localData[0]->integerVars[87]/* drone_to_cc[3].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[87]/* drone_to_cc[3].newest DISCRETE */) ;

  (data->localData[0]->integerVars[94]/* drone_to_cc[3].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[94]/* drone_to_cc[3].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[80]/* drone_to_cc[3].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[80]/* drone_to_cc[3].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[1003]/* drone_to_cc[3].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1003]/* drone_to_cc[3].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[1002]/* drone_to_cc[3].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1002]/* drone_to_cc[3].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[1001]/* drone_to_cc[3].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1001]/* drone_to_cc[3].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[1000]/* drone_to_cc[3].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1000]/* drone_to_cc[3].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[999]/* drone_to_cc[3].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[999]/* drone_to_cc[3].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[998]/* drone_to_cc[3].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[998]/* drone_to_cc[3].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[997]/* drone_to_cc[3].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[997]/* drone_to_cc[3].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[996]/* drone_to_cc[3].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[996]/* drone_to_cc[3].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[995]/* drone_to_cc[3].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[995]/* drone_to_cc[3].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[994]/* drone_to_cc[3].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[994]/* drone_to_cc[3].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[993]/* drone_to_cc[3].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[993]/* drone_to_cc[3].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[992]/* drone_to_cc[3].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[992]/* drone_to_cc[3].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[991]/* drone_to_cc[3].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[991]/* drone_to_cc[3].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[990]/* drone_to_cc[3].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[990]/* drone_to_cc[3].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[989]/* drone_to_cc[3].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[989]/* drone_to_cc[3].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[988]/* drone_to_cc[3].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[988]/* drone_to_cc[3].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[987]/* drone_to_cc[3].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[987]/* drone_to_cc[3].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[986]/* drone_to_cc[3].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[986]/* drone_to_cc[3].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[985]/* drone_to_cc[3].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[985]/* drone_to_cc[3].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[984]/* drone_to_cc[3].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[984]/* drone_to_cc[3].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[983]/* drone_to_cc[3].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[983]/* drone_to_cc[3].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[982]/* drone_to_cc[3].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[982]/* drone_to_cc[3].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[981]/* drone_to_cc[3].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[981]/* drone_to_cc[3].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[980]/* drone_to_cc[3].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[980]/* drone_to_cc[3].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[979]/* drone_to_cc[3].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[979]/* drone_to_cc[3].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[978]/* drone_to_cc[3].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[978]/* drone_to_cc[3].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[977]/* drone_to_cc[3].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[977]/* drone_to_cc[3].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[976]/* drone_to_cc[3].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[976]/* drone_to_cc[3].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[975]/* drone_to_cc[3].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[975]/* drone_to_cc[3].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[974]/* drone_to_cc[3].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[974]/* drone_to_cc[3].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[973]/* drone_to_cc[3].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[973]/* drone_to_cc[3].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[972]/* drone_to_cc[3].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[972]/* drone_to_cc[3].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[971]/* drone_to_cc[3].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[971]/* drone_to_cc[3].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[970]/* drone_to_cc[3].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[970]/* drone_to_cc[3].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[969]/* drone_to_cc[3].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[969]/* drone_to_cc[3].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[968]/* drone_to_cc[3].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[968]/* drone_to_cc[3].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[967]/* drone_to_cc[3].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[967]/* drone_to_cc[3].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[966]/* drone_to_cc[3].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[966]/* drone_to_cc[3].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[965]/* drone_to_cc[3].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[965]/* drone_to_cc[3].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[964]/* drone_to_cc[3].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[964]/* drone_to_cc[3].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[963]/* drone_to_cc[3].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[963]/* drone_to_cc[3].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[962]/* drone_to_cc[3].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[962]/* drone_to_cc[3].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[961]/* drone_to_cc[3].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[961]/* drone_to_cc[3].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[960]/* drone_to_cc[3].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[960]/* drone_to_cc[3].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[959]/* drone_to_cc[3].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[959]/* drone_to_cc[3].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[958]/* drone_to_cc[3].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[958]/* drone_to_cc[3].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[957]/* drone_to_cc[3].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[957]/* drone_to_cc[3].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[956]/* drone_to_cc[3].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[956]/* drone_to_cc[3].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[955]/* drone_to_cc[3].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[955]/* drone_to_cc[3].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[954]/* drone_to_cc[3].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[954]/* drone_to_cc[3].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[267]/* drone_to_cc[3].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[267]/* drone_to_cc[3].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[1218]/* drone_to_cc[3].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1218]/* drone_to_cc[3].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[1217]/* drone_to_cc[3].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1217]/* drone_to_cc[3].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[1216]/* drone_to_cc[3].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1216]/* drone_to_cc[3].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[1215]/* drone_to_cc[3].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1215]/* drone_to_cc[3].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[1214]/* drone_to_cc[3].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1214]/* drone_to_cc[3].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[246]/* drone_to_cc[3].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[246]/* drone_to_cc[3].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[6]/* $whenCondition15 DISCRETE */) ;

  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[5]/* $whenCondition14 DISCRETE */) ;

  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[4]/* $whenCondition13 DISCRETE */) ;

  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[253]/* drone_to_cc[3].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[274]/* drone_to_cc[3].writesigint DISCRETE */) );

  tmp789 = GreaterEq((data->simulationInfo->integerVarsPre[80]/* drone_to_cc[3].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[253]/* drone_to_cc[3].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[274]/* drone_to_cc[3].writesigint DISCRETE */) )) && tmp789);

  tmp790 = Less((data->simulationInfo->integerVarsPre[80]/* drone_to_cc[3].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[253]/* drone_to_cc[3].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[274]/* drone_to_cc[3].writesigint DISCRETE */) ) && tmp790);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[246]/* drone_to_cc[3].datavailable DISCRETE */)  = 0;

      tmp791 = ((modelica_integer) 1); tmp792 = 1; tmp793 = ((modelica_integer) 5);
      if(!(((tmp792 > 0) && (tmp791 > tmp793)) || ((tmp792 < 0) && (tmp791 < tmp793))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp791, tmp793); j += tmp792)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[267]/* drone_to_cc[3].spaceavailable DISCRETE */)  = 1;

      tmp797 = ((modelica_integer) 1); tmp798 = 1; tmp799 = ((modelica_integer) 10);
      if(!(((tmp798 > 0) && (tmp797 > tmp799)) || ((tmp798 < 0) && (tmp797 < tmp799))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp797, tmp799); i += tmp798)
        {
          tmp794 = ((modelica_integer) 1); tmp795 = 1; tmp796 = ((modelica_integer) 5);
          if(!(((tmp795 > 0) && (tmp794 > tmp796)) || ((tmp795 < 0) && (tmp794 < tmp796))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp794, tmp796); j += tmp795)
            {
              (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[80]/* drone_to_cc[3].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[94]/* drone_to_cc[3].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[87]/* drone_to_cc[3].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[4]/* $whenCondition13 DISCRETE */)  /* edge */))
    {
      tmp800 = Less((data->simulationInfo->integerVarsPre[80]/* drone_to_cc[3].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp800)
      {
        tmp801 = ((modelica_integer) 1); tmp802 = 1; tmp803 = ((modelica_integer) 5);
        if(!(((tmp802 > 0) && (tmp801 > tmp803)) || ((tmp802 < 0) && (tmp801 < tmp803))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp801, tmp803); j += tmp802)
          {
            (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[87]/* drone_to_cc[3].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 3) - 1) * 5 + (j-1)] ;
          }
        }

        tmp804 = ((modelica_integer) 10);
        if (tmp804 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[3].newest), 10)");}
        (data->localData[0]->integerVars[87]/* drone_to_cc[3].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[87]/* drone_to_cc[3].newest DISCRETE */) , tmp804) + ((modelica_integer) 1);

        tmp805 = ((modelica_integer) 1); tmp806 = 1; tmp807 = ((modelica_integer) 5);
        if(!(((tmp806 > 0) && (tmp805 > tmp807)) || ((tmp806 < 0) && (tmp805 < tmp807))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp805, tmp807); j += tmp806)
          {
            (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[94]/* drone_to_cc[3].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp808 = ((modelica_integer) 10);
        if (tmp808 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[3].oldest), 10)");}
        (data->localData[0]->integerVars[94]/* drone_to_cc[3].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[94]/* drone_to_cc[3].oldest DISCRETE */) , tmp808) + ((modelica_integer) 1);
      }
      else
      {
        tmp809 = ((modelica_integer) 1); tmp810 = 1; tmp811 = ((modelica_integer) 5);
        if(!(((tmp810 > 0) && (tmp809 > tmp811)) || ((tmp810 < 0) && (tmp809 < tmp811))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp809, tmp811); j += tmp810)
          {
            (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[94]/* drone_to_cc[3].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp812 = ((modelica_integer) 10);
        if (tmp812 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[3].oldest), 10)");}
        (data->localData[0]->integerVars[94]/* drone_to_cc[3].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[94]/* drone_to_cc[3].oldest DISCRETE */) , tmp812) + ((modelica_integer) 1);

        tmp813 = ((modelica_integer) 1); tmp814 = 1; tmp815 = ((modelica_integer) 5);
        if(!(((tmp814 > 0) && (tmp813 > tmp815)) || ((tmp814 < 0) && (tmp813 < tmp815))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp813, tmp815); j += tmp814)
          {
            (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[87]/* drone_to_cc[3].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 3) - 1) * 5 + (j-1)] ;
          }
        }

        tmp816 = ((modelica_integer) 10);
        if (tmp816 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[3].newest), 10)");}
        (data->localData[0]->integerVars[87]/* drone_to_cc[3].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[87]/* drone_to_cc[3].newest DISCRETE */) , tmp816) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[5]/* $whenCondition14 DISCRETE */)  /* edge */))
    {
      tmp817 = ((modelica_integer) 1); tmp818 = 1; tmp819 = ((modelica_integer) 5);
      if(!(((tmp818 > 0) && (tmp817 > tmp819)) || ((tmp818 < 0) && (tmp817 < tmp819))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp817, tmp819); j += tmp818)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[94]/* drone_to_cc[3].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp820 = ((modelica_integer) 10);
      if (tmp820 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[3].oldest), 10)");}
      (data->localData[0]->integerVars[94]/* drone_to_cc[3].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[94]/* drone_to_cc[3].oldest DISCRETE */) , tmp820) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[80]/* drone_to_cc[3].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[80]/* drone_to_cc[3].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp821 = GreaterEq((data->localData[0]->integerVars[80]/* drone_to_cc[3].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[246]/* drone_to_cc[3].datavailable DISCRETE */)  = tmp821;

      (data->localData[0]->booleanVars[267]/* drone_to_cc[3].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[6]/* $whenCondition15 DISCRETE */)  /* edge */))
    {
      tmp822 = ((modelica_integer) 1); tmp823 = 1; tmp824 = ((modelica_integer) 5);
      if(!(((tmp823 > 0) && (tmp822 > tmp824)) || ((tmp823 < 0) && (tmp822 < tmp824))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp822, tmp824); j += tmp823)
        {
          (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[87]/* drone_to_cc[3].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 3) - 1) * 5 + (j-1)] ;
        }
      }

      tmp825 = ((modelica_integer) 10);
      if (tmp825 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[3].newest), 10)");}
      (data->localData[0]->integerVars[87]/* drone_to_cc[3].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[87]/* drone_to_cc[3].newest DISCRETE */) , tmp825) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[80]/* drone_to_cc[3].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[80]/* drone_to_cc[3].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[246]/* drone_to_cc[3].datavailable DISCRETE */)  = 1;

      tmp826 = Less((data->simulationInfo->integerVarsPre[80]/* drone_to_cc[3].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[267]/* drone_to_cc[3].spaceavailable DISCRETE */)  = tmp826;

      tmp827 = ((modelica_integer) 1); tmp828 = 1; tmp829 = ((modelica_integer) 5);
      if(!(((tmp828 > 0) && (tmp827 > tmp829)) || ((tmp828 < 0) && (tmp827 < tmp829))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp827, tmp829); j += tmp828)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 3) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 3) - 1) * 10 + ((data->simulationInfo->integerVarsPre[94]/* drone_to_cc[3].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 766
type: SIMPLE_ASSIGN
cc.msg_from_drone[3,1] = drone_to_cc[3].outputdata[1]
*/
void System_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  (data->localData[0]->realVars[97]/* cc.msg_from_drone[3,1] variable */)  = (data->localData[0]->realVars[1214]/* drone_to_cc[3].outputdata[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 767
type: SIMPLE_ASSIGN
cc.msg_from_drone[3,2] = drone_to_cc[3].outputdata[2]
*/
void System_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  (data->localData[0]->realVars[98]/* cc.msg_from_drone[3,2] variable */)  = (data->localData[0]->realVars[1215]/* drone_to_cc[3].outputdata[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 768
type: SIMPLE_ASSIGN
cc.datavailable[3] = drone_to_cc[3].datavailable
*/
void System_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  (data->localData[0]->booleanVars[89]/* cc.datavailable[3] DISCRETE */)  = (data->localData[0]->booleanVars[246]/* drone_to_cc[3].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 769
type: SIMPLE_ASSIGN
d[3].spaceavailable = drone_to_cc[3].spaceavailable
*/
void System_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  (data->localData[0]->booleanVars[232]/* d[3].spaceavailable DISCRETE */)  = (data->localData[0]->booleanVars[267]/* drone_to_cc[3].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 770
type: SIMPLE_ASSIGN
cc.msg_from_drone[3,4] = drone_to_cc[3].outputdata[4]
*/
void System_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  (data->localData[0]->realVars[100]/* cc.msg_from_drone[3,4] variable */)  = (data->localData[0]->realVars[1217]/* drone_to_cc[3].outputdata[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 771
type: SIMPLE_ASSIGN
cc.msg_from_drone[3,3] = drone_to_cc[3].outputdata[3]
*/
void System_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  (data->localData[0]->realVars[99]/* cc.msg_from_drone[3,3] variable */)  = (data->localData[0]->realVars[1216]/* drone_to_cc[3].outputdata[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 772
type: SIMPLE_ASSIGN
cc.msg_from_drone[3,5] = drone_to_cc[3].outputdata[5]
*/
void System_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  (data->localData[0]->realVars[101]/* cc.msg_from_drone[3,5] variable */)  = (data->localData[0]->realVars[1218]/* drone_to_cc[3].outputdata[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 773
type: SIMPLE_ASSIGN
d[3].batteryPercentage = 100.0 * d[3].d.battery / d[3].p.capacity
*/
void System_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  (data->localData[0]->realVars[161]/* d[3].batteryPercentage variable */)  = (100.0) * (DIVISION_SIM((data->localData[0]->realVars[793]/* d[3].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[3654]/* d[3].p.capacity PARAM */) ,"d[3].p.capacity",equationIndexes));
  TRACE_POP
}
/*
equation index: 774
type: ALGORITHM

  d[2].ctrl.destZ := pre(d[2].ctrl.destZ);
  d[2].ctrl.destY := pre(d[2].ctrl.destY);
  d[2].ctrl.destX := pre(d[2].ctrl.destX);
  $whenCondition73 := pre($whenCondition73);
  $whenCondition72 := pre($whenCondition72);
  $whenCondition72 := sample(5, 0.0, d[2].ctrl.prm.Tdrone) and pre(d[2].ctrl.droneDead);
  $whenCondition73 := sample(5, 0.0, d[2].ctrl.prm.Tdrone);
  when $whenCondition72 then
    d[2].ctrl.destX := pre(d[2].ctrl.x);
    d[2].ctrl.destY := pre(d[2].ctrl.y);
    d[2].ctrl.destZ := 0.0;
  elsewhen $whenCondition73 then
    d[2].ctrl.destX := pre(d[2].ctrl.setx);
    d[2].ctrl.destY := pre(d[2].ctrl.sety);
    d[2].ctrl.destZ := pre(d[2].ctrl.setz);
  end when;
*/
void System_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  (data->localData[0]->realVars[785]/* d[2].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[785]/* d[2].ctrl.destZ DISCRETE */) ;

  (data->localData[0]->realVars[778]/* d[2].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[778]/* d[2].ctrl.destY DISCRETE */) ;

  (data->localData[0]->realVars[771]/* d[2].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[771]/* d[2].ctrl.destX DISCRETE */) ;

  (data->localData[0]->booleanVars[70]/* $whenCondition73 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[70]/* $whenCondition73 DISCRETE */) ;

  (data->localData[0]->booleanVars[69]/* $whenCondition72 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[69]/* $whenCondition72 DISCRETE */) ;

  (data->localData[0]->booleanVars[69]/* $whenCondition72 DISCRETE */)  = (data->simulationInfo->samples[4] && (data->simulationInfo->booleanVarsPre[203]/* d[2].ctrl.droneDead DISCRETE */) );

  (data->localData[0]->booleanVars[70]/* $whenCondition73 DISCRETE */)  = data->simulationInfo->samples[4];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[69]/* $whenCondition72 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[69]/* $whenCondition72 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[771]/* d[2].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[209]/* d[2].ctrl.x variable */) ;

      (data->localData[0]->realVars[778]/* d[2].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[216]/* d[2].ctrl.y variable */) ;

      (data->localData[0]->realVars[785]/* d[2].ctrl.destZ DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[70]/* $whenCondition73 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[70]/* $whenCondition73 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[771]/* d[2].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[188]/* d[2].ctrl.setx variable */) ;

      (data->localData[0]->realVars[778]/* d[2].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[195]/* d[2].ctrl.sety variable */) ;

      (data->localData[0]->realVars[785]/* d[2].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[202]/* d[2].ctrl.setz variable */) ;
    }
  }
  TRACE_POP
}
/*
equation index: 775
type: ALGORITHM

  d[2].d.droneDead := pre(d[2].d.droneDead);
  d[2].d.droneState := pre(d[2].d.droneState);
  d[2].d.battery := pre(d[2].d.battery);
  $whenCondition75 := pre($whenCondition75);
  $whenCondition74 := pre($whenCondition74);
  $whenCondition74 := abs(pre(d[2].d.battery)) < 0.01;
  $whenCondition75 := sample(4, 0.0, d[2].d.p.Tdrone) and pre(d[2].d.droneState) == 1;
  when false then
    d[2].d.battery := d[2].d.p.capacity;
    d[2].d.droneState := 1;
    d[2].d.droneDead := false;
  elsewhen $whenCondition74 then
    d[2].d.droneDead := true;
  elsewhen $whenCondition75 then
    if returnedHome(d[2].d.p, pre(d[2].d.x), pre(d[2].d.y), pre(d[2].d.z)) then
      d[2].d.battery := charging(d[2].d.p, pre(d[2].d.battery));
    else
      d[2].d.battery := batteryMonitor(pre(d[2].d.battery), d[2].d.p.batteryDischarge);
    end if;
  end when;
*/
void System_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  modelica_boolean tmp830;
  real_array tmp832;
  real_array tmp833;
  real_array tmp834;
  real_array tmp835;
  real_array tmp836;
  real_array tmp837;
  (data->localData[0]->booleanVars[210]/* d[2].d.droneDead DISCRETE */)  = (data->simulationInfo->booleanVarsPre[210]/* d[2].d.droneDead DISCRETE */) ;

  (data->localData[0]->integerVars[58]/* d[2].d.droneState DISCRETE */)  = (data->simulationInfo->integerVarsPre[58]/* d[2].d.droneState DISCRETE */) ;

  (data->localData[0]->realVars[792]/* d[2].d.battery DISCRETE */)  = (data->simulationInfo->realVarsPre[792]/* d[2].d.battery DISCRETE */) ;

  (data->localData[0]->booleanVars[72]/* $whenCondition75 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[72]/* $whenCondition75 DISCRETE */) ;

  (data->localData[0]->booleanVars[71]/* $whenCondition74 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[71]/* $whenCondition74 DISCRETE */) ;

  tmp830 = Less(fabs((data->simulationInfo->realVarsPre[792]/* d[2].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[71]/* $whenCondition74 DISCRETE */)  = tmp830;

  (data->localData[0]->booleanVars[72]/* $whenCondition75 DISCRETE */)  = (data->simulationInfo->samples[3] && ((data->simulationInfo->integerVarsPre[58]/* d[2].d.droneState DISCRETE */)  == ((modelica_integer) 1)));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[792]/* d[2].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[2736]/* d[2].d.p.capacity PARAM */) ;

      (data->localData[0]->integerVars[58]/* d[2].d.droneState DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->booleanVars[210]/* d[2].d.droneDead DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[71]/* $whenCondition74 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[71]/* $whenCondition74 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->booleanVars[210]/* d[2].d.droneDead DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[72]/* $whenCondition75 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[72]/* $whenCondition75 DISCRETE */)  /* edge */))
    {
      real_array_create(&tmp832, ((modelica_real*)&((&data->simulationInfo->realParameter[2812]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 2) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp833, ((modelica_real*)&((&data->simulationInfo->realParameter[2791]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 2) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp834, ((modelica_real*)&((&data->simulationInfo->realParameter[2042]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 2) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
      if(omc_returnedHome(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[2918]/* d[2].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[68]/* d[2].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[75]/* d[2].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[2029]/* d[2].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[2022]/* d[2].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[2036]/* d[2].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[2869]/* d[2].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[89]/* d[2].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[2743]/* d[2].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[2890]/* d[2].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[2883]/* d[2].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[2757]/* d[2].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[2876]/* d[2].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[2722]/* d[2].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[2764]/* d[2].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[2715]/* d[2].d.p.arrivalThreshold PARAM */) , tmp832, tmp833, (data->simulationInfo->realParameter[2841]/* d[2].d.p.m PARAM */) , (data->simulationInfo->realParameter[2855]/* d[2].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[2834]/* d[2].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[2932]/* d[2].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[2848]/* d[2].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[2862]/* d[2].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[2771]/* d[2].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[2925]/* d[2].d.p.unita PARAM */) , (data->simulationInfo->realParameter[2736]/* d[2].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[2729]/* d[2].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[2750]/* d[2].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[2897]/* d[2].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[2785]/* d[2].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[2778]/* d[2].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[2904]/* d[2].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[2911]/* d[2].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[82]/* d[2].d.p.nAreas PARAM */) , tmp834), (data->simulationInfo->realVarsPre[22]/* d[2].d.x STATE(1,d[2].d.Vx) */) , (data->simulationInfo->realVarsPre[29]/* d[2].d.y STATE(1,d[2].d.Vy) */) , (data->simulationInfo->realVarsPre[36]/* d[2].d.z STATE(1,d[2].d.Vz) */) ))
      {
        real_array_create(&tmp835, ((modelica_real*)&((&data->simulationInfo->realParameter[2812]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 2) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp836, ((modelica_real*)&((&data->simulationInfo->realParameter[2791]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 2) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp837, ((modelica_real*)&((&data->simulationInfo->realParameter[2042]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 2) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
        (data->localData[0]->realVars[792]/* d[2].d.battery DISCRETE */)  = omc_charging(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[2918]/* d[2].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[68]/* d[2].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[75]/* d[2].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[2029]/* d[2].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[2022]/* d[2].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[2036]/* d[2].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[2869]/* d[2].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[89]/* d[2].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[2743]/* d[2].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[2890]/* d[2].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[2883]/* d[2].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[2757]/* d[2].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[2876]/* d[2].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[2722]/* d[2].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[2764]/* d[2].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[2715]/* d[2].d.p.arrivalThreshold PARAM */) , tmp835, tmp836, (data->simulationInfo->realParameter[2841]/* d[2].d.p.m PARAM */) , (data->simulationInfo->realParameter[2855]/* d[2].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[2834]/* d[2].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[2932]/* d[2].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[2848]/* d[2].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[2862]/* d[2].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[2771]/* d[2].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[2925]/* d[2].d.p.unita PARAM */) , (data->simulationInfo->realParameter[2736]/* d[2].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[2729]/* d[2].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[2750]/* d[2].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[2897]/* d[2].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[2785]/* d[2].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[2778]/* d[2].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[2904]/* d[2].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[2911]/* d[2].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[82]/* d[2].d.p.nAreas PARAM */) , tmp837), (data->simulationInfo->realVarsPre[792]/* d[2].d.battery DISCRETE */) );
      }
      else
      {
        (data->localData[0]->realVars[792]/* d[2].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[792]/* d[2].d.battery DISCRETE */) , (data->simulationInfo->realParameter[2729]/* d[2].d.p.batteryDischarge PARAM */) );
      }
    }
  }
  TRACE_POP
}
/*
equation index: 776
type: SIMPLE_ASSIGN
d[2].ctrl.droneDead = d[2].d.droneDead
*/
void System_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  (data->localData[0]->booleanVars[203]/* d[2].ctrl.droneDead DISCRETE */)  = (data->localData[0]->booleanVars[210]/* d[2].d.droneDead DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 777
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
  $whenCondition71 := pre($whenCondition71);
  $whenCondition71 := sample(6, 0.0, d[2].p.Tdrone);
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
  elsewhen $whenCondition71 then
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
void System_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  real_array tmp838;
  real_array tmp839;
  (data->localData[0]->integerVars[51]/* d[2].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[51]/* d[2].comm_state DISCRETE */) ;

  (data->localData[0]->integerVars[65]/* d[2].fifox DISCRETE */)  = (data->simulationInfo->integerVarsPre[65]/* d[2].fifox DISCRETE */) ;

  (data->localData[0]->booleanVars[238]/* d[2].writesignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[238]/* d[2].writesignal DISCRETE */) ;

  (data->localData[0]->booleanVars[224]/* d[2].readsignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[224]/* d[2].readsignal DISCRETE */) ;

  (data->localData[0]->integerVars[72]/* d[2].flag DISCRETE */)  = (data->simulationInfo->integerVarsPre[72]/* d[2].flag DISCRETE */) ;

  (data->localData[0]->realVars[848]/* d[2].setz DISCRETE */)  = (data->simulationInfo->realVarsPre[848]/* d[2].setz DISCRETE */) ;

  (data->localData[0]->realVars[841]/* d[2].sety DISCRETE */)  = (data->simulationInfo->realVarsPre[841]/* d[2].sety DISCRETE */) ;

  (data->localData[0]->realVars[834]/* d[2].setx DISCRETE */)  = (data->simulationInfo->realVarsPre[834]/* d[2].setx DISCRETE */) ;

  (data->localData[0]->realVars[807]/* d[2].msg_to_cc[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[807]/* d[2].msg_to_cc[5] DISCRETE */) ;

  (data->localData[0]->realVars[806]/* d[2].msg_to_cc[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[806]/* d[2].msg_to_cc[4] DISCRETE */) ;

  (data->localData[0]->realVars[805]/* d[2].msg_to_cc[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[805]/* d[2].msg_to_cc[3] DISCRETE */) ;

  (data->localData[0]->realVars[804]/* d[2].msg_to_cc[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[804]/* d[2].msg_to_cc[2] DISCRETE */) ;

  (data->localData[0]->realVars[803]/* d[2].msg_to_cc[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[803]/* d[2].msg_to_cc[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[68]/* $whenCondition71 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[68]/* $whenCondition71 DISCRETE */) ;

  (data->localData[0]->booleanVars[68]/* $whenCondition71 DISCRETE */)  = data->simulationInfo->samples[5];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      array_alloc_scalar_real_array(&tmp838, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp839, ((modelica_real*)&((&(data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
      real_array_copy_data(tmp838, tmp839);

      (data->localData[0]->realVars[834]/* d[2].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3732]/* d[2].p.flyZone[1] PARAM */) );

      (data->localData[0]->realVars[841]/* d[2].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3733]/* d[2].p.flyZone[2] PARAM */) );

      (data->localData[0]->realVars[848]/* d[2].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3734]/* d[2].p.flyZone[3] PARAM */) );

      (data->localData[0]->integerVars[72]/* d[2].flag DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->booleanVars[224]/* d[2].readsignal DISCRETE */)  = 0;

      (data->localData[0]->booleanVars[238]/* d[2].writesignal DISCRETE */)  = 0;

      (data->localData[0]->integerVars[65]/* d[2].fifox DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[51]/* d[2].comm_state DISCRETE */)  = ((modelica_integer) 10);
    }
    else if(((data->localData[0]->booleanVars[68]/* $whenCondition71 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[68]/* $whenCondition71 DISCRETE */)  /* edge */))
    {
      if((data->simulationInfo->booleanVarsPre[210]/* d[2].d.droneDead DISCRETE */) )
      {
        (data->localData[0]->integerVars[51]/* d[2].comm_state DISCRETE */)  = ((modelica_integer) 0);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[51]/* d[2].comm_state DISCRETE */)  == ((modelica_integer) 10)))
        {
          (data->localData[0]->booleanVars[224]/* d[2].readsignal DISCRETE */)  = omc_ReadFromFIFO(threadData, (data->simulationInfo->integerVarsPre[65]/* d[2].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[217]/* d[2].datavailable DISCRETE */) , (data->simulationInfo->booleanVarsPre[224]/* d[2].readsignal DISCRETE */)  ,&(data->localData[0]->integerVars[65]/* d[2].fifox DISCRETE */) );

          if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[65]/* d[2].fifox DISCRETE */) ))
          {
            (data->localData[0]->integerVars[72]/* d[2].flag DISCRETE */)  = ((modelica_integer)floor((data->localData[0]->realVars[740]/* cc_to_drone[2].outputdata[1] DISCRETE */) ));

            if(((data->localData[0]->integerVars[72]/* d[2].flag DISCRETE */)  == ((modelica_integer) 1)))
            {
              (data->localData[0]->realVars[803]/* d[2].msg_to_cc[1] DISCRETE */)  = 2.0;

              (data->localData[0]->realVars[804]/* d[2].msg_to_cc[2] DISCRETE */)  = (data->localData[0]->realVars[22]/* d[2].d.x STATE(1,d[2].d.Vx) */) ;

              (data->localData[0]->realVars[805]/* d[2].msg_to_cc[3] DISCRETE */)  = (data->localData[0]->realVars[29]/* d[2].d.y STATE(1,d[2].d.Vy) */) ;

              (data->localData[0]->realVars[806]/* d[2].msg_to_cc[4] DISCRETE */)  = (data->localData[0]->realVars[36]/* d[2].d.z STATE(1,d[2].d.Vz) */) ;

              (data->localData[0]->realVars[807]/* d[2].msg_to_cc[5] DISCRETE */)  = (data->localData[0]->realVars[792]/* d[2].d.battery DISCRETE */) ;

              (data->localData[0]->integerVars[51]/* d[2].comm_state DISCRETE */)  = ((modelica_integer) 20);
            }
            else
            {
              if(((data->localData[0]->integerVars[72]/* d[2].flag DISCRETE */)  == ((modelica_integer) 2)))
              {
                (data->localData[0]->realVars[834]/* d[2].setx DISCRETE */)  = (data->localData[0]->realVars[741]/* cc_to_drone[2].outputdata[2] DISCRETE */) ;

                (data->localData[0]->realVars[841]/* d[2].sety DISCRETE */)  = (data->localData[0]->realVars[742]/* cc_to_drone[2].outputdata[3] DISCRETE */) ;

                (data->localData[0]->realVars[848]/* d[2].setz DISCRETE */)  = (data->localData[0]->realVars[743]/* cc_to_drone[2].outputdata[4] DISCRETE */) ;

                (data->localData[0]->integerVars[51]/* d[2].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[51]/* d[2].comm_state DISCRETE */) ;
              }
            }

            (data->localData[0]->integerVars[65]/* d[2].fifox DISCRETE */)  = ((modelica_integer) 0);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[51]/* d[2].comm_state DISCRETE */)  == ((modelica_integer) 20)))
          {
            (data->localData[0]->booleanVars[238]/* d[2].writesignal DISCRETE */)  = omc_WriteToFIFO(threadData, (data->simulationInfo->integerVarsPre[65]/* d[2].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[238]/* d[2].writesignal DISCRETE */) , (data->simulationInfo->booleanVarsPre[231]/* d[2].spaceavailable DISCRETE */)  ,&(data->localData[0]->integerVars[65]/* d[2].fifox DISCRETE */) );

            if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[65]/* d[2].fifox DISCRETE */) ))
            {
              (data->localData[0]->integerVars[51]/* d[2].comm_state DISCRETE */)  = ((modelica_integer) 10);

              (data->localData[0]->integerVars[65]/* d[2].fifox DISCRETE */)  = ((modelica_integer) 0);
            }
          }
          else
          {
            (data->localData[0]->integerVars[51]/* d[2].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[51]/* d[2].comm_state DISCRETE */) ;
          }
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 778
type: SIMPLE_ASSIGN
d[2].ctrl.setx = d[2].setx
*/
void System_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  (data->localData[0]->realVars[188]/* d[2].ctrl.setx variable */)  = (data->localData[0]->realVars[834]/* d[2].setx DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 779
type: SIMPLE_ASSIGN
cc_to_drone[2].readsignal = d[2].readsignal
*/
void System_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  (data->localData[0]->booleanVars[175]/* cc_to_drone[2].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[224]/* d[2].readsignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 780
type: SIMPLE_ASSIGN
cc_to_drone[2].readsigint = not pre(cc_to_drone[2].readsignal) == cc_to_drone[2].readsignal
*/
void System_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  (data->localData[0]->booleanVars[168]/* cc_to_drone[2].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[175]/* cc_to_drone[2].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[175]/* cc_to_drone[2].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[175]/* cc_to_drone[2].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[175]/* cc_to_drone[2].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 781
type: SIMPLE_ASSIGN
d[2].ctrl.sety = d[2].sety
*/
void System_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  (data->localData[0]->realVars[195]/* d[2].ctrl.sety variable */)  = (data->localData[0]->realVars[841]/* d[2].sety DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 782
type: SIMPLE_ASSIGN
drone_to_cc[2].inputdata[3] = d[2].msg_to_cc[3]
*/
void System_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  (data->localData[0]->realVars[229]/* drone_to_cc[2].inputdata[3] variable */)  = (data->localData[0]->realVars[805]/* d[2].msg_to_cc[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 783
type: SIMPLE_ASSIGN
d[2].ctrl.setz = d[2].setz
*/
void System_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  (data->localData[0]->realVars[202]/* d[2].ctrl.setz variable */)  = (data->localData[0]->realVars[848]/* d[2].setz DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 784
type: SIMPLE_ASSIGN
drone_to_cc[2].inputdata[4] = d[2].msg_to_cc[4]
*/
void System_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  (data->localData[0]->realVars[230]/* drone_to_cc[2].inputdata[4] variable */)  = (data->localData[0]->realVars[806]/* d[2].msg_to_cc[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 785
type: SIMPLE_ASSIGN
drone_to_cc[2].inputdata[2] = d[2].msg_to_cc[2]
*/
void System_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  (data->localData[0]->realVars[228]/* drone_to_cc[2].inputdata[2] variable */)  = (data->localData[0]->realVars[804]/* d[2].msg_to_cc[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 786
type: SIMPLE_ASSIGN
drone_to_cc[2].inputdata[5] = d[2].msg_to_cc[5]
*/
void System_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  (data->localData[0]->realVars[231]/* drone_to_cc[2].inputdata[5] variable */)  = (data->localData[0]->realVars[807]/* d[2].msg_to_cc[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 787
type: SIMPLE_ASSIGN
drone_to_cc[2].writesignal = d[2].writesignal
*/
void System_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  (data->localData[0]->booleanVars[280]/* drone_to_cc[2].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[238]/* d[2].writesignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 788
type: SIMPLE_ASSIGN
drone_to_cc[2].writesigint = not pre(drone_to_cc[2].writesignal) == drone_to_cc[2].writesignal
*/
void System_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  (data->localData[0]->booleanVars[273]/* drone_to_cc[2].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[280]/* drone_to_cc[2].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[280]/* drone_to_cc[2].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[280]/* drone_to_cc[2].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[280]/* drone_to_cc[2].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 789
type: SIMPLE_ASSIGN
drone_to_cc[2].inputdata[1] = d[2].msg_to_cc[1]
*/
void System_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  (data->localData[0]->realVars[227]/* drone_to_cc[2].inputdata[1] variable */)  = (data->localData[0]->realVars[803]/* d[2].msg_to_cc[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 790
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
  $whenCondition18 := pre($whenCondition18);
  $whenCondition17 := pre($whenCondition17);
  $whenCondition16 := pre($whenCondition16);
  $whenCondition16 := pre(drone_to_cc[2].readsigint) and pre(drone_to_cc[2].writesigint);
  $whenCondition17 := pre(drone_to_cc[2].readsigint) and not pre(drone_to_cc[2].writesigint) and pre(drone_to_cc[2].fifosize) >= 1;
  $whenCondition18 := not pre(drone_to_cc[2].readsigint) and pre(drone_to_cc[2].writesigint) and pre(drone_to_cc[2].fifosize) < 10;
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
  elsewhen $whenCondition16 then
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
  elsewhen $whenCondition17 then
    for j in 1:5 loop
      drone_to_cc[2].outputdata[j] := drone_to_cc[2].fifo[pre(drone_to_cc[2].oldest),j];
    end for;
    drone_to_cc[2].oldest := mod(pre(drone_to_cc[2].oldest), 10) + 1;
    drone_to_cc[2].fifosize := pre(drone_to_cc[2].fifosize) - 1;
    drone_to_cc[2].datavailable := drone_to_cc[2].fifosize >= 1;
    drone_to_cc[2].spaceavailable := true;
  elsewhen $whenCondition18 then
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
void System_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  modelica_boolean tmp846;
  modelica_boolean tmp847;
  modelica_integer tmp848;
  modelica_integer tmp849;
  modelica_integer tmp850;
  modelica_integer tmp851;
  modelica_integer tmp852;
  modelica_integer tmp853;
  modelica_integer tmp854;
  modelica_integer tmp855;
  modelica_integer tmp856;
  modelica_boolean tmp857;
  modelica_integer tmp858;
  modelica_integer tmp859;
  modelica_integer tmp860;
  modelica_integer tmp861;
  modelica_integer tmp862;
  modelica_integer tmp863;
  modelica_integer tmp864;
  modelica_integer tmp865;
  modelica_integer tmp866;
  modelica_integer tmp867;
  modelica_integer tmp868;
  modelica_integer tmp869;
  modelica_integer tmp870;
  modelica_integer tmp871;
  modelica_integer tmp872;
  modelica_integer tmp873;
  modelica_integer tmp874;
  modelica_integer tmp875;
  modelica_integer tmp876;
  modelica_integer tmp877;
  modelica_boolean tmp878;
  modelica_integer tmp879;
  modelica_integer tmp880;
  modelica_integer tmp881;
  modelica_integer tmp882;
  modelica_boolean tmp883;
  modelica_integer tmp884;
  modelica_integer tmp885;
  modelica_integer tmp886;
  (data->localData[0]->integerVars[86]/* drone_to_cc[2].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[86]/* drone_to_cc[2].newest DISCRETE */) ;

  (data->localData[0]->integerVars[93]/* drone_to_cc[2].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[93]/* drone_to_cc[2].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[79]/* drone_to_cc[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[79]/* drone_to_cc[2].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[953]/* drone_to_cc[2].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[953]/* drone_to_cc[2].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[952]/* drone_to_cc[2].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[952]/* drone_to_cc[2].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[951]/* drone_to_cc[2].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[951]/* drone_to_cc[2].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[950]/* drone_to_cc[2].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[950]/* drone_to_cc[2].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[949]/* drone_to_cc[2].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[949]/* drone_to_cc[2].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[948]/* drone_to_cc[2].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[948]/* drone_to_cc[2].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[947]/* drone_to_cc[2].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[947]/* drone_to_cc[2].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[946]/* drone_to_cc[2].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[946]/* drone_to_cc[2].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[945]/* drone_to_cc[2].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[945]/* drone_to_cc[2].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[944]/* drone_to_cc[2].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[944]/* drone_to_cc[2].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[943]/* drone_to_cc[2].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[943]/* drone_to_cc[2].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[942]/* drone_to_cc[2].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[942]/* drone_to_cc[2].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[941]/* drone_to_cc[2].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[941]/* drone_to_cc[2].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[940]/* drone_to_cc[2].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[940]/* drone_to_cc[2].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[939]/* drone_to_cc[2].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[939]/* drone_to_cc[2].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[938]/* drone_to_cc[2].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[938]/* drone_to_cc[2].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[937]/* drone_to_cc[2].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[937]/* drone_to_cc[2].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[936]/* drone_to_cc[2].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[936]/* drone_to_cc[2].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[935]/* drone_to_cc[2].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[935]/* drone_to_cc[2].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[934]/* drone_to_cc[2].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[934]/* drone_to_cc[2].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[933]/* drone_to_cc[2].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[933]/* drone_to_cc[2].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[932]/* drone_to_cc[2].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[932]/* drone_to_cc[2].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[931]/* drone_to_cc[2].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[931]/* drone_to_cc[2].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[930]/* drone_to_cc[2].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[930]/* drone_to_cc[2].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[929]/* drone_to_cc[2].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[929]/* drone_to_cc[2].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[928]/* drone_to_cc[2].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[928]/* drone_to_cc[2].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[927]/* drone_to_cc[2].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[927]/* drone_to_cc[2].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[926]/* drone_to_cc[2].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[926]/* drone_to_cc[2].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[925]/* drone_to_cc[2].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[925]/* drone_to_cc[2].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[924]/* drone_to_cc[2].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[924]/* drone_to_cc[2].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[923]/* drone_to_cc[2].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[923]/* drone_to_cc[2].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[922]/* drone_to_cc[2].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[922]/* drone_to_cc[2].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[921]/* drone_to_cc[2].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[921]/* drone_to_cc[2].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[920]/* drone_to_cc[2].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[920]/* drone_to_cc[2].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[919]/* drone_to_cc[2].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[919]/* drone_to_cc[2].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[918]/* drone_to_cc[2].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[918]/* drone_to_cc[2].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[917]/* drone_to_cc[2].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[917]/* drone_to_cc[2].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[916]/* drone_to_cc[2].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[916]/* drone_to_cc[2].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[915]/* drone_to_cc[2].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[915]/* drone_to_cc[2].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[914]/* drone_to_cc[2].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[914]/* drone_to_cc[2].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[913]/* drone_to_cc[2].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[913]/* drone_to_cc[2].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[912]/* drone_to_cc[2].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[912]/* drone_to_cc[2].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[911]/* drone_to_cc[2].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[911]/* drone_to_cc[2].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[910]/* drone_to_cc[2].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[910]/* drone_to_cc[2].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[909]/* drone_to_cc[2].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[909]/* drone_to_cc[2].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[908]/* drone_to_cc[2].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[908]/* drone_to_cc[2].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[907]/* drone_to_cc[2].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[907]/* drone_to_cc[2].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[906]/* drone_to_cc[2].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[906]/* drone_to_cc[2].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[905]/* drone_to_cc[2].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[905]/* drone_to_cc[2].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[904]/* drone_to_cc[2].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[904]/* drone_to_cc[2].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[266]/* drone_to_cc[2].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[266]/* drone_to_cc[2].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[1213]/* drone_to_cc[2].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1213]/* drone_to_cc[2].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[1212]/* drone_to_cc[2].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1212]/* drone_to_cc[2].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[1211]/* drone_to_cc[2].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1211]/* drone_to_cc[2].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[1210]/* drone_to_cc[2].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1210]/* drone_to_cc[2].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[1209]/* drone_to_cc[2].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1209]/* drone_to_cc[2].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[245]/* drone_to_cc[2].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[245]/* drone_to_cc[2].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[9]/* $whenCondition18 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[9]/* $whenCondition18 DISCRETE */) ;

  (data->localData[0]->booleanVars[8]/* $whenCondition17 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[8]/* $whenCondition17 DISCRETE */) ;

  (data->localData[0]->booleanVars[7]/* $whenCondition16 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[7]/* $whenCondition16 DISCRETE */) ;

  (data->localData[0]->booleanVars[7]/* $whenCondition16 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[252]/* drone_to_cc[2].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[273]/* drone_to_cc[2].writesigint DISCRETE */) );

  tmp846 = GreaterEq((data->simulationInfo->integerVarsPre[79]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[8]/* $whenCondition17 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[252]/* drone_to_cc[2].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[273]/* drone_to_cc[2].writesigint DISCRETE */) )) && tmp846);

  tmp847 = Less((data->simulationInfo->integerVarsPre[79]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[9]/* $whenCondition18 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[252]/* drone_to_cc[2].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[273]/* drone_to_cc[2].writesigint DISCRETE */) ) && tmp847);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[245]/* drone_to_cc[2].datavailable DISCRETE */)  = 0;

      tmp848 = ((modelica_integer) 1); tmp849 = 1; tmp850 = ((modelica_integer) 5);
      if(!(((tmp849 > 0) && (tmp848 > tmp850)) || ((tmp849 < 0) && (tmp848 < tmp850))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp848, tmp850); j += tmp849)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[266]/* drone_to_cc[2].spaceavailable DISCRETE */)  = 1;

      tmp854 = ((modelica_integer) 1); tmp855 = 1; tmp856 = ((modelica_integer) 10);
      if(!(((tmp855 > 0) && (tmp854 > tmp856)) || ((tmp855 < 0) && (tmp854 < tmp856))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp854, tmp856); i += tmp855)
        {
          tmp851 = ((modelica_integer) 1); tmp852 = 1; tmp853 = ((modelica_integer) 5);
          if(!(((tmp852 > 0) && (tmp851 > tmp853)) || ((tmp852 < 0) && (tmp851 < tmp853))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp851, tmp853); j += tmp852)
            {
              (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[79]/* drone_to_cc[2].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[93]/* drone_to_cc[2].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[86]/* drone_to_cc[2].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[7]/* $whenCondition16 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[7]/* $whenCondition16 DISCRETE */)  /* edge */))
    {
      tmp857 = Less((data->simulationInfo->integerVarsPre[79]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp857)
      {
        tmp858 = ((modelica_integer) 1); tmp859 = 1; tmp860 = ((modelica_integer) 5);
        if(!(((tmp859 > 0) && (tmp858 > tmp860)) || ((tmp859 < 0) && (tmp858 < tmp860))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp858, tmp860); j += tmp859)
          {
            (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[86]/* drone_to_cc[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
          }
        }

        tmp861 = ((modelica_integer) 10);
        if (tmp861 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].newest), 10)");}
        (data->localData[0]->integerVars[86]/* drone_to_cc[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[86]/* drone_to_cc[2].newest DISCRETE */) , tmp861) + ((modelica_integer) 1);

        tmp862 = ((modelica_integer) 1); tmp863 = 1; tmp864 = ((modelica_integer) 5);
        if(!(((tmp863 > 0) && (tmp862 > tmp864)) || ((tmp863 < 0) && (tmp862 < tmp864))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp862, tmp864); j += tmp863)
          {
            (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[93]/* drone_to_cc[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp865 = ((modelica_integer) 10);
        if (tmp865 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].oldest), 10)");}
        (data->localData[0]->integerVars[93]/* drone_to_cc[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[93]/* drone_to_cc[2].oldest DISCRETE */) , tmp865) + ((modelica_integer) 1);
      }
      else
      {
        tmp866 = ((modelica_integer) 1); tmp867 = 1; tmp868 = ((modelica_integer) 5);
        if(!(((tmp867 > 0) && (tmp866 > tmp868)) || ((tmp867 < 0) && (tmp866 < tmp868))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp866, tmp868); j += tmp867)
          {
            (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[93]/* drone_to_cc[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp869 = ((modelica_integer) 10);
        if (tmp869 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].oldest), 10)");}
        (data->localData[0]->integerVars[93]/* drone_to_cc[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[93]/* drone_to_cc[2].oldest DISCRETE */) , tmp869) + ((modelica_integer) 1);

        tmp870 = ((modelica_integer) 1); tmp871 = 1; tmp872 = ((modelica_integer) 5);
        if(!(((tmp871 > 0) && (tmp870 > tmp872)) || ((tmp871 < 0) && (tmp870 < tmp872))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp870, tmp872); j += tmp871)
          {
            (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[86]/* drone_to_cc[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
          }
        }

        tmp873 = ((modelica_integer) 10);
        if (tmp873 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].newest), 10)");}
        (data->localData[0]->integerVars[86]/* drone_to_cc[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[86]/* drone_to_cc[2].newest DISCRETE */) , tmp873) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[8]/* $whenCondition17 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[8]/* $whenCondition17 DISCRETE */)  /* edge */))
    {
      tmp874 = ((modelica_integer) 1); tmp875 = 1; tmp876 = ((modelica_integer) 5);
      if(!(((tmp875 > 0) && (tmp874 > tmp876)) || ((tmp875 < 0) && (tmp874 < tmp876))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp874, tmp876); j += tmp875)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[93]/* drone_to_cc[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp877 = ((modelica_integer) 10);
      if (tmp877 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].oldest), 10)");}
      (data->localData[0]->integerVars[93]/* drone_to_cc[2].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[93]/* drone_to_cc[2].oldest DISCRETE */) , tmp877) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[79]/* drone_to_cc[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[79]/* drone_to_cc[2].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp878 = GreaterEq((data->localData[0]->integerVars[79]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[245]/* drone_to_cc[2].datavailable DISCRETE */)  = tmp878;

      (data->localData[0]->booleanVars[266]/* drone_to_cc[2].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[9]/* $whenCondition18 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[9]/* $whenCondition18 DISCRETE */)  /* edge */))
    {
      tmp879 = ((modelica_integer) 1); tmp880 = 1; tmp881 = ((modelica_integer) 5);
      if(!(((tmp880 > 0) && (tmp879 > tmp881)) || ((tmp880 < 0) && (tmp879 < tmp881))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp879, tmp881); j += tmp880)
        {
          (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[86]/* drone_to_cc[2].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 2) - 1) * 5 + (j-1)] ;
        }
      }

      tmp882 = ((modelica_integer) 10);
      if (tmp882 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[2].newest), 10)");}
      (data->localData[0]->integerVars[86]/* drone_to_cc[2].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[86]/* drone_to_cc[2].newest DISCRETE */) , tmp882) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[79]/* drone_to_cc[2].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[79]/* drone_to_cc[2].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[245]/* drone_to_cc[2].datavailable DISCRETE */)  = 1;

      tmp883 = Less((data->simulationInfo->integerVarsPre[79]/* drone_to_cc[2].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[266]/* drone_to_cc[2].spaceavailable DISCRETE */)  = tmp883;

      tmp884 = ((modelica_integer) 1); tmp885 = 1; tmp886 = ((modelica_integer) 5);
      if(!(((tmp885 > 0) && (tmp884 > tmp886)) || ((tmp885 < 0) && (tmp884 < tmp886))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp884, tmp886); j += tmp885)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 2) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 2) - 1) * 10 + ((data->simulationInfo->integerVarsPre[93]/* drone_to_cc[2].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 791
type: SIMPLE_ASSIGN
d[2].spaceavailable = drone_to_cc[2].spaceavailable
*/
void System_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  (data->localData[0]->booleanVars[231]/* d[2].spaceavailable DISCRETE */)  = (data->localData[0]->booleanVars[266]/* drone_to_cc[2].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 792
type: SIMPLE_ASSIGN
cc.msg_from_drone[2,2] = drone_to_cc[2].outputdata[2]
*/
void System_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  (data->localData[0]->realVars[93]/* cc.msg_from_drone[2,2] variable */)  = (data->localData[0]->realVars[1210]/* drone_to_cc[2].outputdata[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 793
type: SIMPLE_ASSIGN
cc.msg_from_drone[2,3] = drone_to_cc[2].outputdata[3]
*/
void System_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  (data->localData[0]->realVars[94]/* cc.msg_from_drone[2,3] variable */)  = (data->localData[0]->realVars[1211]/* drone_to_cc[2].outputdata[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 794
type: SIMPLE_ASSIGN
cc.msg_from_drone[2,4] = drone_to_cc[2].outputdata[4]
*/
void System_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  (data->localData[0]->realVars[95]/* cc.msg_from_drone[2,4] variable */)  = (data->localData[0]->realVars[1212]/* drone_to_cc[2].outputdata[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 795
type: SIMPLE_ASSIGN
cc.msg_from_drone[2,5] = drone_to_cc[2].outputdata[5]
*/
void System_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  (data->localData[0]->realVars[96]/* cc.msg_from_drone[2,5] variable */)  = (data->localData[0]->realVars[1213]/* drone_to_cc[2].outputdata[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 796
type: SIMPLE_ASSIGN
cc.datavailable[2] = drone_to_cc[2].datavailable
*/
void System_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  (data->localData[0]->booleanVars[88]/* cc.datavailable[2] DISCRETE */)  = (data->localData[0]->booleanVars[245]/* drone_to_cc[2].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 797
type: SIMPLE_ASSIGN
cc.msg_from_drone[2,1] = drone_to_cc[2].outputdata[1]
*/
void System_eqFunction_797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,797};
  (data->localData[0]->realVars[92]/* cc.msg_from_drone[2,1] variable */)  = (data->localData[0]->realVars[1209]/* drone_to_cc[2].outputdata[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 798
type: SIMPLE_ASSIGN
d[2].batteryPercentage = 100.0 * d[2].d.battery / d[2].p.capacity
*/
void System_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  (data->localData[0]->realVars[160]/* d[2].batteryPercentage variable */)  = (100.0) * (DIVISION_SIM((data->localData[0]->realVars[792]/* d[2].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[3653]/* d[2].p.capacity PARAM */) ,"d[2].p.capacity",equationIndexes));
  TRACE_POP
}
/*
equation index: 799
type: ALGORITHM

  d[1].ctrl.destZ := pre(d[1].ctrl.destZ);
  d[1].ctrl.destY := pre(d[1].ctrl.destY);
  d[1].ctrl.destX := pre(d[1].ctrl.destX);
  $whenCondition78 := pre($whenCondition78);
  $whenCondition77 := pre($whenCondition77);
  $whenCondition77 := sample(2, 0.0, d[1].ctrl.prm.Tdrone) and pre(d[1].ctrl.droneDead);
  $whenCondition78 := sample(2, 0.0, d[1].ctrl.prm.Tdrone);
  when $whenCondition77 then
    d[1].ctrl.destX := pre(d[1].ctrl.x);
    d[1].ctrl.destY := pre(d[1].ctrl.y);
    d[1].ctrl.destZ := 0.0;
  elsewhen $whenCondition78 then
    d[1].ctrl.destX := pre(d[1].ctrl.setx);
    d[1].ctrl.destY := pre(d[1].ctrl.sety);
    d[1].ctrl.destZ := pre(d[1].ctrl.setz);
  end when;
*/
void System_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  (data->localData[0]->realVars[784]/* d[1].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[784]/* d[1].ctrl.destZ DISCRETE */) ;

  (data->localData[0]->realVars[777]/* d[1].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[777]/* d[1].ctrl.destY DISCRETE */) ;

  (data->localData[0]->realVars[770]/* d[1].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[770]/* d[1].ctrl.destX DISCRETE */) ;

  (data->localData[0]->booleanVars[75]/* $whenCondition78 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[75]/* $whenCondition78 DISCRETE */) ;

  (data->localData[0]->booleanVars[74]/* $whenCondition77 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[74]/* $whenCondition77 DISCRETE */) ;

  (data->localData[0]->booleanVars[74]/* $whenCondition77 DISCRETE */)  = (data->simulationInfo->samples[1] && (data->simulationInfo->booleanVarsPre[202]/* d[1].ctrl.droneDead DISCRETE */) );

  (data->localData[0]->booleanVars[75]/* $whenCondition78 DISCRETE */)  = data->simulationInfo->samples[1];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[74]/* $whenCondition77 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[74]/* $whenCondition77 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[770]/* d[1].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[208]/* d[1].ctrl.x variable */) ;

      (data->localData[0]->realVars[777]/* d[1].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[215]/* d[1].ctrl.y variable */) ;

      (data->localData[0]->realVars[784]/* d[1].ctrl.destZ DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[75]/* $whenCondition78 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[75]/* $whenCondition78 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[770]/* d[1].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[187]/* d[1].ctrl.setx variable */) ;

      (data->localData[0]->realVars[777]/* d[1].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[194]/* d[1].ctrl.sety variable */) ;

      (data->localData[0]->realVars[784]/* d[1].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[201]/* d[1].ctrl.setz variable */) ;
    }
  }
  TRACE_POP
}
/*
equation index: 800
type: ALGORITHM

  d[1].d.droneDead := pre(d[1].d.droneDead);
  d[1].d.droneState := pre(d[1].d.droneState);
  d[1].d.battery := pre(d[1].d.battery);
  $whenCondition80 := pre($whenCondition80);
  $whenCondition79 := pre($whenCondition79);
  $whenCondition79 := abs(pre(d[1].d.battery)) < 0.01;
  $whenCondition80 := sample(1, 0.0, d[1].d.p.Tdrone) and pre(d[1].d.droneState) == 1;
  when false then
    d[1].d.battery := d[1].d.p.capacity;
    d[1].d.droneState := 1;
    d[1].d.droneDead := false;
  elsewhen $whenCondition79 then
    d[1].d.droneDead := true;
  elsewhen $whenCondition80 then
    if returnedHome(d[1].d.p, pre(d[1].d.x), pre(d[1].d.y), pre(d[1].d.z)) then
      d[1].d.battery := charging(d[1].d.p, pre(d[1].d.battery));
    else
      d[1].d.battery := batteryMonitor(pre(d[1].d.battery), d[1].d.p.batteryDischarge);
    end if;
  end when;
*/
void System_eqFunction_800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,800};
  modelica_boolean tmp887;
  real_array tmp889;
  real_array tmp890;
  real_array tmp891;
  real_array tmp892;
  real_array tmp893;
  real_array tmp894;
  (data->localData[0]->booleanVars[209]/* d[1].d.droneDead DISCRETE */)  = (data->simulationInfo->booleanVarsPre[209]/* d[1].d.droneDead DISCRETE */) ;

  (data->localData[0]->integerVars[57]/* d[1].d.droneState DISCRETE */)  = (data->simulationInfo->integerVarsPre[57]/* d[1].d.droneState DISCRETE */) ;

  (data->localData[0]->realVars[791]/* d[1].d.battery DISCRETE */)  = (data->simulationInfo->realVarsPre[791]/* d[1].d.battery DISCRETE */) ;

  (data->localData[0]->booleanVars[78]/* $whenCondition80 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[78]/* $whenCondition80 DISCRETE */) ;

  (data->localData[0]->booleanVars[76]/* $whenCondition79 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[76]/* $whenCondition79 DISCRETE */) ;

  tmp887 = Less(fabs((data->simulationInfo->realVarsPre[791]/* d[1].d.battery DISCRETE */) ),0.01);
  (data->localData[0]->booleanVars[76]/* $whenCondition79 DISCRETE */)  = tmp887;

  (data->localData[0]->booleanVars[78]/* $whenCondition80 DISCRETE */)  = (data->simulationInfo->samples[0] && ((data->simulationInfo->integerVarsPre[57]/* d[1].d.droneState DISCRETE */)  == ((modelica_integer) 1)));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[791]/* d[1].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[2735]/* d[1].d.p.capacity PARAM */) ;

      (data->localData[0]->integerVars[57]/* d[1].d.droneState DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->booleanVars[209]/* d[1].d.droneDead DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[76]/* $whenCondition79 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[76]/* $whenCondition79 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->booleanVars[209]/* d[1].d.droneDead DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[78]/* $whenCondition80 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[78]/* $whenCondition80 DISCRETE */)  /* edge */))
    {
      real_array_create(&tmp889, ((modelica_real*)&((&data->simulationInfo->realParameter[2812]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp890, ((modelica_real*)&((&data->simulationInfo->realParameter[2791]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp891, ((modelica_real*)&((&data->simulationInfo->realParameter[2042]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 1) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
      if(omc_returnedHome(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[2917]/* d[1].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[67]/* d[1].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[74]/* d[1].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[2028]/* d[1].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[2021]/* d[1].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[2035]/* d[1].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[2868]/* d[1].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[88]/* d[1].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[2742]/* d[1].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[2889]/* d[1].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[2882]/* d[1].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[2756]/* d[1].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[2875]/* d[1].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[2721]/* d[1].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[2763]/* d[1].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[2714]/* d[1].d.p.arrivalThreshold PARAM */) , tmp889, tmp890, (data->simulationInfo->realParameter[2840]/* d[1].d.p.m PARAM */) , (data->simulationInfo->realParameter[2854]/* d[1].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[2833]/* d[1].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[2931]/* d[1].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[2847]/* d[1].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[2861]/* d[1].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[2770]/* d[1].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[2924]/* d[1].d.p.unita PARAM */) , (data->simulationInfo->realParameter[2735]/* d[1].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[2728]/* d[1].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[2749]/* d[1].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[2896]/* d[1].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[2784]/* d[1].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[2777]/* d[1].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[2903]/* d[1].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[2910]/* d[1].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[81]/* d[1].d.p.nAreas PARAM */) , tmp891), (data->simulationInfo->realVarsPre[21]/* d[1].d.x STATE(1,d[1].d.Vx) */) , (data->simulationInfo->realVarsPre[28]/* d[1].d.y STATE(1,d[1].d.Vy) */) , (data->simulationInfo->realVarsPre[35]/* d[1].d.z STATE(1,d[1].d.Vz) */) ))
      {
        real_array_create(&tmp892, ((modelica_real*)&((&data->simulationInfo->realParameter[2812]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp893, ((modelica_real*)&((&data->simulationInfo->realParameter[2791]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
        real_array_create(&tmp894, ((modelica_real*)&((&data->simulationInfo->realParameter[2042]/* d[1].d.p.areas[1,1] PARAM */)[((((modelica_integer) 1) - 1) * 16 + (((modelica_integer) 1)-1)) * 6 + (((modelica_integer) 1)-1)] )), 2, (_index_t)16, (_index_t)6);
        (data->localData[0]->realVars[791]/* d[1].d.battery DISCRETE */)  = omc_charging(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[2917]/* d[1].d.p.stop_simulation PARAM */) , (data->simulationInfo->integerParameter[67]/* d[1].d.p.fifo_len PARAM */) , (data->simulationInfo->integerParameter[74]/* d[1].d.p.msg_len PARAM */) , (data->simulationInfo->realParameter[2028]/* d[1].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[2021]/* d[1].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[2035]/* d[1].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[2868]/* d[1].d.p.monitor_start PARAM */) , (data->simulationInfo->integerParameter[88]/* d[1].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[2742]/* d[1].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[2889]/* d[1].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[2882]/* d[1].d.p.p_recharge PARAM */) , (data->simulationInfo->realParameter[2756]/* d[1].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[2875]/* d[1].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[2721]/* d[1].d.p.arrival_timeout PARAM */) , (data->simulationInfo->realParameter[2763]/* d[1].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[2714]/* d[1].d.p.arrivalThreshold PARAM */) , tmp892, tmp893, (data->simulationInfo->realParameter[2840]/* d[1].d.p.m PARAM */) , (data->simulationInfo->realParameter[2854]/* d[1].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[2833]/* d[1].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[2931]/* d[1].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[2847]/* d[1].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[2861]/* d[1].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[2770]/* d[1].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[2924]/* d[1].d.p.unita PARAM */) , (data->simulationInfo->realParameter[2735]/* d[1].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[2728]/* d[1].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[2749]/* d[1].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[2896]/* d[1].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[2784]/* d[1].d.p.dangerousBatteryPercentage PARAM */) , (data->simulationInfo->realParameter[2777]/* d[1].d.p.dangerousBatteryLevel PARAM */) , (data->simulationInfo->realParameter[2903]/* d[1].d.p.rechargedPercentage PARAM */) , (data->simulationInfo->realParameter[2910]/* d[1].d.p.rechargedThreshold PARAM */) , (data->simulationInfo->integerParameter[81]/* d[1].d.p.nAreas PARAM */) , tmp894), (data->simulationInfo->realVarsPre[791]/* d[1].d.battery DISCRETE */) );
      }
      else
      {
        (data->localData[0]->realVars[791]/* d[1].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[791]/* d[1].d.battery DISCRETE */) , (data->simulationInfo->realParameter[2728]/* d[1].d.p.batteryDischarge PARAM */) );
      }
    }
  }
  TRACE_POP
}
/*
equation index: 801
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
  $whenCondition76 := pre($whenCondition76);
  $whenCondition76 := sample(3, 0.0, d[1].p.Tdrone);
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
  elsewhen $whenCondition76 then
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
void System_eqFunction_801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,801};
  real_array tmp895;
  real_array tmp896;
  (data->localData[0]->integerVars[50]/* d[1].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[50]/* d[1].comm_state DISCRETE */) ;

  (data->localData[0]->integerVars[64]/* d[1].fifox DISCRETE */)  = (data->simulationInfo->integerVarsPre[64]/* d[1].fifox DISCRETE */) ;

  (data->localData[0]->booleanVars[237]/* d[1].writesignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[237]/* d[1].writesignal DISCRETE */) ;

  (data->localData[0]->booleanVars[223]/* d[1].readsignal DISCRETE */)  = (data->simulationInfo->booleanVarsPre[223]/* d[1].readsignal DISCRETE */) ;

  (data->localData[0]->integerVars[71]/* d[1].flag DISCRETE */)  = (data->simulationInfo->integerVarsPre[71]/* d[1].flag DISCRETE */) ;

  (data->localData[0]->realVars[847]/* d[1].setz DISCRETE */)  = (data->simulationInfo->realVarsPre[847]/* d[1].setz DISCRETE */) ;

  (data->localData[0]->realVars[840]/* d[1].sety DISCRETE */)  = (data->simulationInfo->realVarsPre[840]/* d[1].sety DISCRETE */) ;

  (data->localData[0]->realVars[833]/* d[1].setx DISCRETE */)  = (data->simulationInfo->realVarsPre[833]/* d[1].setx DISCRETE */) ;

  (data->localData[0]->realVars[802]/* d[1].msg_to_cc[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[802]/* d[1].msg_to_cc[5] DISCRETE */) ;

  (data->localData[0]->realVars[801]/* d[1].msg_to_cc[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[801]/* d[1].msg_to_cc[4] DISCRETE */) ;

  (data->localData[0]->realVars[800]/* d[1].msg_to_cc[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[800]/* d[1].msg_to_cc[3] DISCRETE */) ;

  (data->localData[0]->realVars[799]/* d[1].msg_to_cc[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[799]/* d[1].msg_to_cc[2] DISCRETE */) ;

  (data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[798]/* d[1].msg_to_cc[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[73]/* $whenCondition76 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[73]/* $whenCondition76 DISCRETE */) ;

  (data->localData[0]->booleanVars[73]/* $whenCondition76 DISCRETE */)  = data->simulationInfo->samples[2];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      array_alloc_scalar_real_array(&tmp895, 5, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp896, ((modelica_real*)&((&(data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (((modelica_integer) 1)-1)])), 1, (_index_t)5);
      real_array_copy_data(tmp895, tmp896);

      (data->localData[0]->realVars[833]/* d[1].setx DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3729]/* d[1].p.flyZone[1] PARAM */) );

      (data->localData[0]->realVars[840]/* d[1].sety DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3730]/* d[1].p.flyZone[2] PARAM */) );

      (data->localData[0]->realVars[847]/* d[1].setz DISCRETE */)  = (omc_myrandom(threadData)) * ((data->simulationInfo->realParameter[3731]/* d[1].p.flyZone[3] PARAM */) );

      (data->localData[0]->integerVars[71]/* d[1].flag DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->booleanVars[223]/* d[1].readsignal DISCRETE */)  = 0;

      (data->localData[0]->booleanVars[237]/* d[1].writesignal DISCRETE */)  = 0;

      (data->localData[0]->integerVars[64]/* d[1].fifox DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[50]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 10);
    }
    else if(((data->localData[0]->booleanVars[73]/* $whenCondition76 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[73]/* $whenCondition76 DISCRETE */)  /* edge */))
    {
      if((data->simulationInfo->booleanVarsPre[209]/* d[1].d.droneDead DISCRETE */) )
      {
        (data->localData[0]->integerVars[50]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 0);
      }
      else
      {
        if(((data->simulationInfo->integerVarsPre[50]/* d[1].comm_state DISCRETE */)  == ((modelica_integer) 10)))
        {
          (data->localData[0]->booleanVars[223]/* d[1].readsignal DISCRETE */)  = omc_ReadFromFIFO(threadData, (data->simulationInfo->integerVarsPre[64]/* d[1].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[216]/* d[1].datavailable DISCRETE */) , (data->simulationInfo->booleanVarsPre[223]/* d[1].readsignal DISCRETE */)  ,&(data->localData[0]->integerVars[64]/* d[1].fifox DISCRETE */) );

          if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[64]/* d[1].fifox DISCRETE */) ))
          {
            (data->localData[0]->integerVars[71]/* d[1].flag DISCRETE */)  = ((modelica_integer)floor((data->localData[0]->realVars[735]/* cc_to_drone[1].outputdata[1] DISCRETE */) ));

            if(((data->localData[0]->integerVars[71]/* d[1].flag DISCRETE */)  == ((modelica_integer) 1)))
            {
              (data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */)  = 2.0;

              (data->localData[0]->realVars[799]/* d[1].msg_to_cc[2] DISCRETE */)  = (data->localData[0]->realVars[21]/* d[1].d.x STATE(1,d[1].d.Vx) */) ;

              (data->localData[0]->realVars[800]/* d[1].msg_to_cc[3] DISCRETE */)  = (data->localData[0]->realVars[28]/* d[1].d.y STATE(1,d[1].d.Vy) */) ;

              (data->localData[0]->realVars[801]/* d[1].msg_to_cc[4] DISCRETE */)  = (data->localData[0]->realVars[35]/* d[1].d.z STATE(1,d[1].d.Vz) */) ;

              (data->localData[0]->realVars[802]/* d[1].msg_to_cc[5] DISCRETE */)  = (data->localData[0]->realVars[791]/* d[1].d.battery DISCRETE */) ;

              (data->localData[0]->integerVars[50]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 20);
            }
            else
            {
              if(((data->localData[0]->integerVars[71]/* d[1].flag DISCRETE */)  == ((modelica_integer) 2)))
              {
                (data->localData[0]->realVars[833]/* d[1].setx DISCRETE */)  = (data->localData[0]->realVars[736]/* cc_to_drone[1].outputdata[2] DISCRETE */) ;

                (data->localData[0]->realVars[840]/* d[1].sety DISCRETE */)  = (data->localData[0]->realVars[737]/* cc_to_drone[1].outputdata[3] DISCRETE */) ;

                (data->localData[0]->realVars[847]/* d[1].setz DISCRETE */)  = (data->localData[0]->realVars[738]/* cc_to_drone[1].outputdata[4] DISCRETE */) ;

                (data->localData[0]->integerVars[50]/* d[1].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[50]/* d[1].comm_state DISCRETE */) ;
              }
            }

            (data->localData[0]->integerVars[64]/* d[1].fifox DISCRETE */)  = ((modelica_integer) 0);
          }
        }
        else
        {
          if(((data->simulationInfo->integerVarsPre[50]/* d[1].comm_state DISCRETE */)  == ((modelica_integer) 20)))
          {
            (data->localData[0]->booleanVars[237]/* d[1].writesignal DISCRETE */)  = omc_WriteToFIFO(threadData, (data->simulationInfo->integerVarsPre[64]/* d[1].fifox DISCRETE */) , (data->simulationInfo->booleanVarsPre[237]/* d[1].writesignal DISCRETE */) , (data->simulationInfo->booleanVarsPre[230]/* d[1].spaceavailable DISCRETE */)  ,&(data->localData[0]->integerVars[64]/* d[1].fifox DISCRETE */) );

            if(omc_FifoIODone(threadData, (data->localData[0]->integerVars[64]/* d[1].fifox DISCRETE */) ))
            {
              (data->localData[0]->integerVars[50]/* d[1].comm_state DISCRETE */)  = ((modelica_integer) 10);

              (data->localData[0]->integerVars[64]/* d[1].fifox DISCRETE */)  = ((modelica_integer) 0);
            }
          }
          else
          {
            (data->localData[0]->integerVars[50]/* d[1].comm_state DISCRETE */)  = (data->simulationInfo->integerVarsPre[50]/* d[1].comm_state DISCRETE */) ;
          }
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 802
type: SIMPLE_ASSIGN
d[1].ctrl.sety = d[1].sety
*/
void System_eqFunction_802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,802};
  (data->localData[0]->realVars[194]/* d[1].ctrl.sety variable */)  = (data->localData[0]->realVars[840]/* d[1].sety DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 803
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[2] = d[1].msg_to_cc[2]
*/
void System_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  (data->localData[0]->realVars[223]/* drone_to_cc[1].inputdata[2] variable */)  = (data->localData[0]->realVars[799]/* d[1].msg_to_cc[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 804
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[4] = d[1].msg_to_cc[4]
*/
void System_eqFunction_804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,804};
  (data->localData[0]->realVars[225]/* drone_to_cc[1].inputdata[4] variable */)  = (data->localData[0]->realVars[801]/* d[1].msg_to_cc[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 805
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[1] = d[1].msg_to_cc[1]
*/
void System_eqFunction_805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,805};
  (data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)  = (data->localData[0]->realVars[798]/* d[1].msg_to_cc[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 806
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[5] = d[1].msg_to_cc[5]
*/
void System_eqFunction_806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,806};
  (data->localData[0]->realVars[226]/* drone_to_cc[1].inputdata[5] variable */)  = (data->localData[0]->realVars[802]/* d[1].msg_to_cc[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 807
type: SIMPLE_ASSIGN
d[1].ctrl.setz = d[1].setz
*/
void System_eqFunction_807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,807};
  (data->localData[0]->realVars[201]/* d[1].ctrl.setz variable */)  = (data->localData[0]->realVars[847]/* d[1].setz DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 808
type: SIMPLE_ASSIGN
d[1].ctrl.setx = d[1].setx
*/
void System_eqFunction_808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,808};
  (data->localData[0]->realVars[187]/* d[1].ctrl.setx variable */)  = (data->localData[0]->realVars[833]/* d[1].setx DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 809
type: SIMPLE_ASSIGN
cc_to_drone[1].readsignal = d[1].readsignal
*/
void System_eqFunction_809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,809};
  (data->localData[0]->booleanVars[174]/* cc_to_drone[1].readsignal DISCRETE */)  = (data->localData[0]->booleanVars[223]/* d[1].readsignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 810
type: SIMPLE_ASSIGN
cc_to_drone[1].readsigint = not pre(cc_to_drone[1].readsignal) == cc_to_drone[1].readsignal
*/
void System_eqFunction_810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,810};
  (data->localData[0]->booleanVars[167]/* cc_to_drone[1].readsigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[174]/* cc_to_drone[1].readsignal DISCRETE */)  && !(data->localData[0]->booleanVars[174]/* cc_to_drone[1].readsignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[174]/* cc_to_drone[1].readsignal DISCRETE */)  && (data->localData[0]->booleanVars[174]/* cc_to_drone[1].readsignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 811
type: SIMPLE_ASSIGN
drone_to_cc[1].inputdata[3] = d[1].msg_to_cc[3]
*/
void System_eqFunction_811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,811};
  (data->localData[0]->realVars[224]/* drone_to_cc[1].inputdata[3] variable */)  = (data->localData[0]->realVars[800]/* d[1].msg_to_cc[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 812
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
  $whenCondition21 := pre($whenCondition21);
  $whenCondition20 := pre($whenCondition20);
  $whenCondition19 := pre($whenCondition19);
  $whenCondition19 := pre(drone_to_cc[1].readsigint) and pre(drone_to_cc[1].writesigint);
  $whenCondition20 := pre(drone_to_cc[1].readsigint) and not pre(drone_to_cc[1].writesigint) and pre(drone_to_cc[1].fifosize) >= 1;
  $whenCondition21 := not pre(drone_to_cc[1].readsigint) and pre(drone_to_cc[1].writesigint) and pre(drone_to_cc[1].fifosize) < 10;
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
  elsewhen $whenCondition19 then
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
  elsewhen $whenCondition20 then
    for j in 1:5 loop
      drone_to_cc[1].outputdata[j] := drone_to_cc[1].fifo[pre(drone_to_cc[1].oldest),j];
    end for;
    drone_to_cc[1].oldest := mod(pre(drone_to_cc[1].oldest), 10) + 1;
    drone_to_cc[1].fifosize := pre(drone_to_cc[1].fifosize) - 1;
    drone_to_cc[1].datavailable := drone_to_cc[1].fifosize >= 1;
    drone_to_cc[1].spaceavailable := true;
  elsewhen $whenCondition21 then
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
void System_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  modelica_boolean tmp902;
  modelica_boolean tmp903;
  modelica_integer tmp904;
  modelica_integer tmp905;
  modelica_integer tmp906;
  modelica_integer tmp907;
  modelica_integer tmp908;
  modelica_integer tmp909;
  modelica_integer tmp910;
  modelica_integer tmp911;
  modelica_integer tmp912;
  modelica_boolean tmp913;
  modelica_integer tmp914;
  modelica_integer tmp915;
  modelica_integer tmp916;
  modelica_integer tmp917;
  modelica_integer tmp918;
  modelica_integer tmp919;
  modelica_integer tmp920;
  modelica_integer tmp921;
  modelica_integer tmp922;
  modelica_integer tmp923;
  modelica_integer tmp924;
  modelica_integer tmp925;
  modelica_integer tmp926;
  modelica_integer tmp927;
  modelica_integer tmp928;
  modelica_integer tmp929;
  modelica_integer tmp930;
  modelica_integer tmp931;
  modelica_integer tmp932;
  modelica_integer tmp933;
  modelica_boolean tmp934;
  modelica_integer tmp935;
  modelica_integer tmp936;
  modelica_integer tmp937;
  modelica_integer tmp938;
  modelica_boolean tmp939;
  modelica_integer tmp940;
  modelica_integer tmp941;
  modelica_integer tmp942;
  (data->localData[0]->integerVars[85]/* drone_to_cc[1].newest DISCRETE */)  = (data->simulationInfo->integerVarsPre[85]/* drone_to_cc[1].newest DISCRETE */) ;

  (data->localData[0]->integerVars[92]/* drone_to_cc[1].oldest DISCRETE */)  = (data->simulationInfo->integerVarsPre[92]/* drone_to_cc[1].oldest DISCRETE */) ;

  (data->localData[0]->integerVars[78]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[78]/* drone_to_cc[1].fifosize DISCRETE */) ;

  (data->localData[0]->realVars[903]/* drone_to_cc[1].fifo[10,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[903]/* drone_to_cc[1].fifo[10,5] DISCRETE */) ;

  (data->localData[0]->realVars[902]/* drone_to_cc[1].fifo[10,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[902]/* drone_to_cc[1].fifo[10,4] DISCRETE */) ;

  (data->localData[0]->realVars[901]/* drone_to_cc[1].fifo[10,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[901]/* drone_to_cc[1].fifo[10,3] DISCRETE */) ;

  (data->localData[0]->realVars[900]/* drone_to_cc[1].fifo[10,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[900]/* drone_to_cc[1].fifo[10,2] DISCRETE */) ;

  (data->localData[0]->realVars[899]/* drone_to_cc[1].fifo[10,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[899]/* drone_to_cc[1].fifo[10,1] DISCRETE */) ;

  (data->localData[0]->realVars[898]/* drone_to_cc[1].fifo[9,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[898]/* drone_to_cc[1].fifo[9,5] DISCRETE */) ;

  (data->localData[0]->realVars[897]/* drone_to_cc[1].fifo[9,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[897]/* drone_to_cc[1].fifo[9,4] DISCRETE */) ;

  (data->localData[0]->realVars[896]/* drone_to_cc[1].fifo[9,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[896]/* drone_to_cc[1].fifo[9,3] DISCRETE */) ;

  (data->localData[0]->realVars[895]/* drone_to_cc[1].fifo[9,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[895]/* drone_to_cc[1].fifo[9,2] DISCRETE */) ;

  (data->localData[0]->realVars[894]/* drone_to_cc[1].fifo[9,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[894]/* drone_to_cc[1].fifo[9,1] DISCRETE */) ;

  (data->localData[0]->realVars[893]/* drone_to_cc[1].fifo[8,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[893]/* drone_to_cc[1].fifo[8,5] DISCRETE */) ;

  (data->localData[0]->realVars[892]/* drone_to_cc[1].fifo[8,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[892]/* drone_to_cc[1].fifo[8,4] DISCRETE */) ;

  (data->localData[0]->realVars[891]/* drone_to_cc[1].fifo[8,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[891]/* drone_to_cc[1].fifo[8,3] DISCRETE */) ;

  (data->localData[0]->realVars[890]/* drone_to_cc[1].fifo[8,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[890]/* drone_to_cc[1].fifo[8,2] DISCRETE */) ;

  (data->localData[0]->realVars[889]/* drone_to_cc[1].fifo[8,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[889]/* drone_to_cc[1].fifo[8,1] DISCRETE */) ;

  (data->localData[0]->realVars[888]/* drone_to_cc[1].fifo[7,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[888]/* drone_to_cc[1].fifo[7,5] DISCRETE */) ;

  (data->localData[0]->realVars[887]/* drone_to_cc[1].fifo[7,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[887]/* drone_to_cc[1].fifo[7,4] DISCRETE */) ;

  (data->localData[0]->realVars[886]/* drone_to_cc[1].fifo[7,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[886]/* drone_to_cc[1].fifo[7,3] DISCRETE */) ;

  (data->localData[0]->realVars[885]/* drone_to_cc[1].fifo[7,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[885]/* drone_to_cc[1].fifo[7,2] DISCRETE */) ;

  (data->localData[0]->realVars[884]/* drone_to_cc[1].fifo[7,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[884]/* drone_to_cc[1].fifo[7,1] DISCRETE */) ;

  (data->localData[0]->realVars[883]/* drone_to_cc[1].fifo[6,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[883]/* drone_to_cc[1].fifo[6,5] DISCRETE */) ;

  (data->localData[0]->realVars[882]/* drone_to_cc[1].fifo[6,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[882]/* drone_to_cc[1].fifo[6,4] DISCRETE */) ;

  (data->localData[0]->realVars[881]/* drone_to_cc[1].fifo[6,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[881]/* drone_to_cc[1].fifo[6,3] DISCRETE */) ;

  (data->localData[0]->realVars[880]/* drone_to_cc[1].fifo[6,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[880]/* drone_to_cc[1].fifo[6,2] DISCRETE */) ;

  (data->localData[0]->realVars[879]/* drone_to_cc[1].fifo[6,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[879]/* drone_to_cc[1].fifo[6,1] DISCRETE */) ;

  (data->localData[0]->realVars[878]/* drone_to_cc[1].fifo[5,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[878]/* drone_to_cc[1].fifo[5,5] DISCRETE */) ;

  (data->localData[0]->realVars[877]/* drone_to_cc[1].fifo[5,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[877]/* drone_to_cc[1].fifo[5,4] DISCRETE */) ;

  (data->localData[0]->realVars[876]/* drone_to_cc[1].fifo[5,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[876]/* drone_to_cc[1].fifo[5,3] DISCRETE */) ;

  (data->localData[0]->realVars[875]/* drone_to_cc[1].fifo[5,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[875]/* drone_to_cc[1].fifo[5,2] DISCRETE */) ;

  (data->localData[0]->realVars[874]/* drone_to_cc[1].fifo[5,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[874]/* drone_to_cc[1].fifo[5,1] DISCRETE */) ;

  (data->localData[0]->realVars[873]/* drone_to_cc[1].fifo[4,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[873]/* drone_to_cc[1].fifo[4,5] DISCRETE */) ;

  (data->localData[0]->realVars[872]/* drone_to_cc[1].fifo[4,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[872]/* drone_to_cc[1].fifo[4,4] DISCRETE */) ;

  (data->localData[0]->realVars[871]/* drone_to_cc[1].fifo[4,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[871]/* drone_to_cc[1].fifo[4,3] DISCRETE */) ;

  (data->localData[0]->realVars[870]/* drone_to_cc[1].fifo[4,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[870]/* drone_to_cc[1].fifo[4,2] DISCRETE */) ;

  (data->localData[0]->realVars[869]/* drone_to_cc[1].fifo[4,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[869]/* drone_to_cc[1].fifo[4,1] DISCRETE */) ;

  (data->localData[0]->realVars[868]/* drone_to_cc[1].fifo[3,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[868]/* drone_to_cc[1].fifo[3,5] DISCRETE */) ;

  (data->localData[0]->realVars[867]/* drone_to_cc[1].fifo[3,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[867]/* drone_to_cc[1].fifo[3,4] DISCRETE */) ;

  (data->localData[0]->realVars[866]/* drone_to_cc[1].fifo[3,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[866]/* drone_to_cc[1].fifo[3,3] DISCRETE */) ;

  (data->localData[0]->realVars[865]/* drone_to_cc[1].fifo[3,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[865]/* drone_to_cc[1].fifo[3,2] DISCRETE */) ;

  (data->localData[0]->realVars[864]/* drone_to_cc[1].fifo[3,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[864]/* drone_to_cc[1].fifo[3,1] DISCRETE */) ;

  (data->localData[0]->realVars[863]/* drone_to_cc[1].fifo[2,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[863]/* drone_to_cc[1].fifo[2,5] DISCRETE */) ;

  (data->localData[0]->realVars[862]/* drone_to_cc[1].fifo[2,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[862]/* drone_to_cc[1].fifo[2,4] DISCRETE */) ;

  (data->localData[0]->realVars[861]/* drone_to_cc[1].fifo[2,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[861]/* drone_to_cc[1].fifo[2,3] DISCRETE */) ;

  (data->localData[0]->realVars[860]/* drone_to_cc[1].fifo[2,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[860]/* drone_to_cc[1].fifo[2,2] DISCRETE */) ;

  (data->localData[0]->realVars[859]/* drone_to_cc[1].fifo[2,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[859]/* drone_to_cc[1].fifo[2,1] DISCRETE */) ;

  (data->localData[0]->realVars[858]/* drone_to_cc[1].fifo[1,5] DISCRETE */)  = (data->simulationInfo->realVarsPre[858]/* drone_to_cc[1].fifo[1,5] DISCRETE */) ;

  (data->localData[0]->realVars[857]/* drone_to_cc[1].fifo[1,4] DISCRETE */)  = (data->simulationInfo->realVarsPre[857]/* drone_to_cc[1].fifo[1,4] DISCRETE */) ;

  (data->localData[0]->realVars[856]/* drone_to_cc[1].fifo[1,3] DISCRETE */)  = (data->simulationInfo->realVarsPre[856]/* drone_to_cc[1].fifo[1,3] DISCRETE */) ;

  (data->localData[0]->realVars[855]/* drone_to_cc[1].fifo[1,2] DISCRETE */)  = (data->simulationInfo->realVarsPre[855]/* drone_to_cc[1].fifo[1,2] DISCRETE */) ;

  (data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)  = (data->simulationInfo->realVarsPre[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) ;

  (data->localData[0]->booleanVars[265]/* drone_to_cc[1].spaceavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[265]/* drone_to_cc[1].spaceavailable DISCRETE */) ;

  (data->localData[0]->realVars[1208]/* drone_to_cc[1].outputdata[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[1208]/* drone_to_cc[1].outputdata[5] DISCRETE */) ;

  (data->localData[0]->realVars[1207]/* drone_to_cc[1].outputdata[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[1207]/* drone_to_cc[1].outputdata[4] DISCRETE */) ;

  (data->localData[0]->realVars[1206]/* drone_to_cc[1].outputdata[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[1206]/* drone_to_cc[1].outputdata[3] DISCRETE */) ;

  (data->localData[0]->realVars[1205]/* drone_to_cc[1].outputdata[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[1205]/* drone_to_cc[1].outputdata[2] DISCRETE */) ;

  (data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[244]/* drone_to_cc[1].datavailable DISCRETE */)  = (data->simulationInfo->booleanVarsPre[244]/* drone_to_cc[1].datavailable DISCRETE */) ;

  (data->localData[0]->booleanVars[13]/* $whenCondition21 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[13]/* $whenCondition21 DISCRETE */) ;

  (data->localData[0]->booleanVars[12]/* $whenCondition20 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[12]/* $whenCondition20 DISCRETE */) ;

  (data->localData[0]->booleanVars[10]/* $whenCondition19 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[10]/* $whenCondition19 DISCRETE */) ;

  (data->localData[0]->booleanVars[10]/* $whenCondition19 DISCRETE */)  = ((data->simulationInfo->booleanVarsPre[251]/* drone_to_cc[1].readsigint DISCRETE */)  && (data->simulationInfo->booleanVarsPre[272]/* drone_to_cc[1].writesigint DISCRETE */) );

  tmp902 = GreaterEq((data->simulationInfo->integerVarsPre[78]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 1));
  (data->localData[0]->booleanVars[12]/* $whenCondition20 DISCRETE */)  = (((data->simulationInfo->booleanVarsPre[251]/* drone_to_cc[1].readsigint DISCRETE */)  && (!(data->simulationInfo->booleanVarsPre[272]/* drone_to_cc[1].writesigint DISCRETE */) )) && tmp902);

  tmp903 = Less((data->simulationInfo->integerVarsPre[78]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 10));
  (data->localData[0]->booleanVars[13]/* $whenCondition21 DISCRETE */)  = (((!(data->simulationInfo->booleanVarsPre[251]/* drone_to_cc[1].readsigint DISCRETE */) ) && (data->simulationInfo->booleanVarsPre[272]/* drone_to_cc[1].writesigint DISCRETE */) ) && tmp903);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->booleanVars[244]/* drone_to_cc[1].datavailable DISCRETE */)  = 0;

      tmp904 = ((modelica_integer) 1); tmp905 = 1; tmp906 = ((modelica_integer) 5);
      if(!(((tmp905 > 0) && (tmp904 > tmp906)) || ((tmp905 < 0) && (tmp904 < tmp906))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp904, tmp906); j += tmp905)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = 0.0;
        }
      }

      (data->localData[0]->booleanVars[265]/* drone_to_cc[1].spaceavailable DISCRETE */)  = 1;

      tmp910 = ((modelica_integer) 1); tmp911 = 1; tmp912 = ((modelica_integer) 10);
      if(!(((tmp911 > 0) && (tmp910 > tmp912)) || ((tmp911 < 0) && (tmp910 < tmp912))))
      {
        modelica_integer i;
        for(i = ((modelica_integer) 1); in_range_integer(i, tmp910, tmp912); i += tmp911)
        {
          tmp907 = ((modelica_integer) 1); tmp908 = 1; tmp909 = ((modelica_integer) 5);
          if(!(((tmp908 > 0) && (tmp907 > tmp909)) || ((tmp908 < 0) && (tmp907 < tmp909))))
          {
            modelica_integer j;
            for(j = ((modelica_integer) 1); in_range_integer(j, tmp907, tmp909); j += tmp908)
            {
              (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + (i-1)) * 5 + (j-1)] = 0.0;
            }
          }
        }
      }

      (data->localData[0]->integerVars[78]/* drone_to_cc[1].fifosize DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[92]/* drone_to_cc[1].oldest DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->integerVars[85]/* drone_to_cc[1].newest DISCRETE */)  = ((modelica_integer) 1);
    }
    else if(((data->localData[0]->booleanVars[10]/* $whenCondition19 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[10]/* $whenCondition19 DISCRETE */)  /* edge */))
    {
      tmp913 = Less((data->simulationInfo->integerVarsPre[78]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 10));
      if(tmp913)
      {
        tmp914 = ((modelica_integer) 1); tmp915 = 1; tmp916 = ((modelica_integer) 5);
        if(!(((tmp915 > 0) && (tmp914 > tmp916)) || ((tmp915 < 0) && (tmp914 < tmp916))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp914, tmp916); j += tmp915)
          {
            (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[85]/* drone_to_cc[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
          }
        }

        tmp917 = ((modelica_integer) 10);
        if (tmp917 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].newest), 10)");}
        (data->localData[0]->integerVars[85]/* drone_to_cc[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[85]/* drone_to_cc[1].newest DISCRETE */) , tmp917) + ((modelica_integer) 1);

        tmp918 = ((modelica_integer) 1); tmp919 = 1; tmp920 = ((modelica_integer) 5);
        if(!(((tmp919 > 0) && (tmp918 > tmp920)) || ((tmp919 < 0) && (tmp918 < tmp920))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp918, tmp920); j += tmp919)
          {
            (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[92]/* drone_to_cc[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp921 = ((modelica_integer) 10);
        if (tmp921 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].oldest), 10)");}
        (data->localData[0]->integerVars[92]/* drone_to_cc[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[92]/* drone_to_cc[1].oldest DISCRETE */) , tmp921) + ((modelica_integer) 1);
      }
      else
      {
        tmp922 = ((modelica_integer) 1); tmp923 = 1; tmp924 = ((modelica_integer) 5);
        if(!(((tmp923 > 0) && (tmp922 > tmp924)) || ((tmp923 < 0) && (tmp922 < tmp924))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp922, tmp924); j += tmp923)
          {
            (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[92]/* drone_to_cc[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
          }
        }

        tmp925 = ((modelica_integer) 10);
        if (tmp925 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].oldest), 10)");}
        (data->localData[0]->integerVars[92]/* drone_to_cc[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[92]/* drone_to_cc[1].oldest DISCRETE */) , tmp925) + ((modelica_integer) 1);

        tmp926 = ((modelica_integer) 1); tmp927 = 1; tmp928 = ((modelica_integer) 5);
        if(!(((tmp927 > 0) && (tmp926 > tmp928)) || ((tmp927 < 0) && (tmp926 < tmp928))))
        {
          modelica_integer j;
          for(j = ((modelica_integer) 1); in_range_integer(j, tmp926, tmp928); j += tmp927)
          {
            (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[85]/* drone_to_cc[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
          }
        }

        tmp929 = ((modelica_integer) 10);
        if (tmp929 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].newest), 10)");}
        (data->localData[0]->integerVars[85]/* drone_to_cc[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[85]/* drone_to_cc[1].newest DISCRETE */) , tmp929) + ((modelica_integer) 1);
      }
    }
    else if(((data->localData[0]->booleanVars[12]/* $whenCondition20 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[12]/* $whenCondition20 DISCRETE */)  /* edge */))
    {
      tmp930 = ((modelica_integer) 1); tmp931 = 1; tmp932 = ((modelica_integer) 5);
      if(!(((tmp931 > 0) && (tmp930 > tmp932)) || ((tmp931 < 0) && (tmp930 < tmp932))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp930, tmp932); j += tmp931)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[92]/* drone_to_cc[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }

      tmp933 = ((modelica_integer) 10);
      if (tmp933 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].oldest), 10)");}
      (data->localData[0]->integerVars[92]/* drone_to_cc[1].oldest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[92]/* drone_to_cc[1].oldest DISCRETE */) , tmp933) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[78]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[78]/* drone_to_cc[1].fifosize DISCRETE */)  - ((modelica_integer) 1);

      tmp934 = GreaterEq((data->localData[0]->integerVars[78]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 1));
      (data->localData[0]->booleanVars[244]/* drone_to_cc[1].datavailable DISCRETE */)  = tmp934;

      (data->localData[0]->booleanVars[265]/* drone_to_cc[1].spaceavailable DISCRETE */)  = 1;
    }
    else if(((data->localData[0]->booleanVars[13]/* $whenCondition21 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[13]/* $whenCondition21 DISCRETE */)  /* edge */))
    {
      tmp935 = ((modelica_integer) 1); tmp936 = 1; tmp937 = ((modelica_integer) 5);
      if(!(((tmp936 > 0) && (tmp935 > tmp937)) || ((tmp936 < 0) && (tmp935 < tmp937))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp935, tmp937); j += tmp936)
        {
          (&(data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */) )[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[85]/* drone_to_cc[1].newest DISCRETE */) -1)) * 5 + (j-1)] = (&data->localData[0]->realVars[222]/* drone_to_cc[1].inputdata[1] variable */)[(((modelica_integer) 1) - 1) * 5 + (j-1)] ;
        }
      }

      tmp938 = ((modelica_integer) 10);
      if (tmp938 == 0) {throwStreamPrint(threadData, "Division by zero %s", "mod(pre(drone_to_cc[1].newest), 10)");}
      (data->localData[0]->integerVars[85]/* drone_to_cc[1].newest DISCRETE */)  = modelica_integer_mod((data->simulationInfo->integerVarsPre[85]/* drone_to_cc[1].newest DISCRETE */) , tmp938) + ((modelica_integer) 1);

      (data->localData[0]->integerVars[78]/* drone_to_cc[1].fifosize DISCRETE */)  = (data->simulationInfo->integerVarsPre[78]/* drone_to_cc[1].fifosize DISCRETE */)  + ((modelica_integer) 1);

      (data->localData[0]->booleanVars[244]/* drone_to_cc[1].datavailable DISCRETE */)  = 1;

      tmp939 = Less((data->simulationInfo->integerVarsPre[78]/* drone_to_cc[1].fifosize DISCRETE */) ,((modelica_integer) 10));
      (data->localData[0]->booleanVars[265]/* drone_to_cc[1].spaceavailable DISCRETE */)  = tmp939;

      tmp940 = ((modelica_integer) 1); tmp941 = 1; tmp942 = ((modelica_integer) 5);
      if(!(((tmp941 > 0) && (tmp940 > tmp942)) || ((tmp941 < 0) && (tmp940 < tmp942))))
      {
        modelica_integer j;
        for(j = ((modelica_integer) 1); in_range_integer(j, tmp940, tmp942); j += tmp941)
        {
          (&(data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) )[(((modelica_integer) 1) - 1) * 5 + (j-1)] = (&data->localData[0]->realVars[854]/* drone_to_cc[1].fifo[1,1] DISCRETE */)[((((modelica_integer) 1) - 1) * 10 + ((data->simulationInfo->integerVarsPre[92]/* drone_to_cc[1].oldest DISCRETE */) -1)) * 5 + (j-1)] ;
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 813
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,2] = drone_to_cc[1].outputdata[2]
*/
void System_eqFunction_813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,813};
  (data->localData[0]->realVars[88]/* cc.msg_from_drone[1,2] variable */)  = (data->localData[0]->realVars[1205]/* drone_to_cc[1].outputdata[2] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 814
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,5] = drone_to_cc[1].outputdata[5]
*/
void System_eqFunction_814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,814};
  (data->localData[0]->realVars[91]/* cc.msg_from_drone[1,5] variable */)  = (data->localData[0]->realVars[1208]/* drone_to_cc[1].outputdata[5] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 815
type: SIMPLE_ASSIGN
cc.datavailable[1] = drone_to_cc[1].datavailable
*/
void System_eqFunction_815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,815};
  (data->localData[0]->booleanVars[87]/* cc.datavailable[1] DISCRETE */)  = (data->localData[0]->booleanVars[244]/* drone_to_cc[1].datavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 816
type: SIMPLE_ASSIGN
d[1].spaceavailable = drone_to_cc[1].spaceavailable
*/
void System_eqFunction_816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,816};
  (data->localData[0]->booleanVars[230]/* d[1].spaceavailable DISCRETE */)  = (data->localData[0]->booleanVars[265]/* drone_to_cc[1].spaceavailable DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 817
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,1] = drone_to_cc[1].outputdata[1]
*/
void System_eqFunction_817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,817};
  (data->localData[0]->realVars[87]/* cc.msg_from_drone[1,1] variable */)  = (data->localData[0]->realVars[1204]/* drone_to_cc[1].outputdata[1] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 818
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,4] = drone_to_cc[1].outputdata[4]
*/
void System_eqFunction_818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,818};
  (data->localData[0]->realVars[90]/* cc.msg_from_drone[1,4] variable */)  = (data->localData[0]->realVars[1207]/* drone_to_cc[1].outputdata[4] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 819
type: SIMPLE_ASSIGN
cc.msg_from_drone[1,3] = drone_to_cc[1].outputdata[3]
*/
void System_eqFunction_819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,819};
  (data->localData[0]->realVars[89]/* cc.msg_from_drone[1,3] variable */)  = (data->localData[0]->realVars[1206]/* drone_to_cc[1].outputdata[3] DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 820
type: SIMPLE_ASSIGN
drone_to_cc[1].writesignal = d[1].writesignal
*/
void System_eqFunction_820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,820};
  (data->localData[0]->booleanVars[279]/* drone_to_cc[1].writesignal DISCRETE */)  = (data->localData[0]->booleanVars[237]/* d[1].writesignal DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 821
type: SIMPLE_ASSIGN
drone_to_cc[1].writesigint = not pre(drone_to_cc[1].writesignal) == drone_to_cc[1].writesignal
*/
void System_eqFunction_821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,821};
  (data->localData[0]->booleanVars[272]/* drone_to_cc[1].writesigint DISCRETE */)  = (!((!(data->simulationInfo->booleanVarsPre[279]/* drone_to_cc[1].writesignal DISCRETE */)  && !(data->localData[0]->booleanVars[279]/* drone_to_cc[1].writesignal DISCRETE */) ) || ((data->simulationInfo->booleanVarsPre[279]/* drone_to_cc[1].writesignal DISCRETE */)  && (data->localData[0]->booleanVars[279]/* drone_to_cc[1].writesignal DISCRETE */) )));
  TRACE_POP
}
/*
equation index: 822
type: SIMPLE_ASSIGN
d[1].batteryPercentage = 100.0 * d[1].d.battery / d[1].p.capacity
*/
void System_eqFunction_822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,822};
  (data->localData[0]->realVars[159]/* d[1].batteryPercentage variable */)  = (100.0) * (DIVISION_SIM((data->localData[0]->realVars[791]/* d[1].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[3652]/* d[1].p.capacity PARAM */) ,"d[1].p.capacity",equationIndexes));
  TRACE_POP
}
/*
equation index: 823
type: SIMPLE_ASSIGN
d[1].ctrl.droneDead = d[1].d.droneDead
*/
void System_eqFunction_823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,823};
  (data->localData[0]->booleanVars[202]/* d[1].ctrl.droneDead DISCRETE */)  = (data->localData[0]->booleanVars[209]/* d[1].d.droneDead DISCRETE */) ;
  TRACE_POP
}
/*
equation index: 824
type: SIMPLE_ASSIGN
d[7].ctrl.y = d[7].d.y
*/
void System_eqFunction_824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,824};
  (data->localData[0]->realVars[221]/* d[7].ctrl.y variable */)  = (data->localData[0]->realVars[34]/* d[7].d.y STATE(1,d[7].d.Vy) */) ;
  TRACE_POP
}
/*
equation index: 825
type: SIMPLE_ASSIGN
d[7].ctrl.Trusty = d[7].ctrl.prm.m * (d[7].ctrl.ky1 * (d[7].ctrl.y - pre(d[7].ctrl.destY)) + d[7].ctrl.ky2 * d[7].d.Vy)
*/
void System_eqFunction_825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,825};
  (data->localData[0]->realVars[179]/* d[7].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1929]/* d[7].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1075]/* d[7].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[221]/* d[7].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[783]/* d[7].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[1082]/* d[7].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[13]/* d[7].d.Vy STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 826
type: SIMPLE_ASSIGN
$DER.d[7].d.Vy = d[7].ctrl.Trusty / d[7].d.p.m
*/
void System_eqFunction_826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,826};
  (data->localData[0]->realVars[55]/* der(d[7].d.Vy) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[179]/* d[7].ctrl.Trusty variable */) ,(data->simulationInfo->realParameter[2846]/* d[7].d.p.m PARAM */) ,"d[7].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 827
type: SIMPLE_ASSIGN
d[7].ctrl.x = d[7].d.x
*/
void System_eqFunction_827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,827};
  (data->localData[0]->realVars[214]/* d[7].ctrl.x variable */)  = (data->localData[0]->realVars[27]/* d[7].d.x STATE(1,d[7].d.Vx) */) ;
  TRACE_POP
}
/*
equation index: 828
type: SIMPLE_ASSIGN
d[7].ctrl.Trustx = d[7].ctrl.prm.m * (d[7].ctrl.kx1 * (d[7].ctrl.x - pre(d[7].ctrl.destX)) + d[7].ctrl.kx2 * d[7].d.Vx)
*/
void System_eqFunction_828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,828};
  (data->localData[0]->realVars[172]/* d[7].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1929]/* d[7].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1061]/* d[7].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[214]/* d[7].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[776]/* d[7].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[1068]/* d[7].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[6]/* d[7].d.Vx STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 829
type: SIMPLE_ASSIGN
$DER.d[7].d.Vx = d[7].ctrl.Trustx / d[7].d.p.m
*/
void System_eqFunction_829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,829};
  (data->localData[0]->realVars[48]/* der(d[7].d.Vx) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[172]/* d[7].ctrl.Trustx variable */) ,(data->simulationInfo->realParameter[2846]/* d[7].d.p.m PARAM */) ,"d[7].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 830
type: SIMPLE_ASSIGN
d[6].ctrl.y = d[6].d.y
*/
void System_eqFunction_830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,830};
  (data->localData[0]->realVars[220]/* d[6].ctrl.y variable */)  = (data->localData[0]->realVars[33]/* d[6].d.y STATE(1,d[6].d.Vy) */) ;
  TRACE_POP
}
/*
equation index: 831
type: SIMPLE_ASSIGN
d[6].ctrl.Trusty = d[6].ctrl.prm.m * (d[6].ctrl.ky1 * (d[6].ctrl.y - pre(d[6].ctrl.destY)) + d[6].ctrl.ky2 * d[6].d.Vy)
*/
void System_eqFunction_831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,831};
  (data->localData[0]->realVars[178]/* d[6].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1928]/* d[6].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1074]/* d[6].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[220]/* d[6].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[782]/* d[6].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[1081]/* d[6].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[12]/* d[6].d.Vy STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 832
type: SIMPLE_ASSIGN
$DER.d[6].d.Vy = d[6].ctrl.Trusty / d[6].d.p.m
*/
void System_eqFunction_832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,832};
  (data->localData[0]->realVars[54]/* der(d[6].d.Vy) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[178]/* d[6].ctrl.Trusty variable */) ,(data->simulationInfo->realParameter[2845]/* d[6].d.p.m PARAM */) ,"d[6].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 833
type: SIMPLE_ASSIGN
d[6].ctrl.x = d[6].d.x
*/
void System_eqFunction_833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,833};
  (data->localData[0]->realVars[213]/* d[6].ctrl.x variable */)  = (data->localData[0]->realVars[26]/* d[6].d.x STATE(1,d[6].d.Vx) */) ;
  TRACE_POP
}
/*
equation index: 834
type: SIMPLE_ASSIGN
d[6].ctrl.Trustx = d[6].ctrl.prm.m * (d[6].ctrl.kx1 * (d[6].ctrl.x - pre(d[6].ctrl.destX)) + d[6].ctrl.kx2 * d[6].d.Vx)
*/
void System_eqFunction_834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,834};
  (data->localData[0]->realVars[171]/* d[6].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1928]/* d[6].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1060]/* d[6].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[213]/* d[6].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[775]/* d[6].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[1067]/* d[6].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[5]/* d[6].d.Vx STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 835
type: SIMPLE_ASSIGN
$DER.d[6].d.Vx = d[6].ctrl.Trustx / d[6].d.p.m
*/
void System_eqFunction_835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,835};
  (data->localData[0]->realVars[47]/* der(d[6].d.Vx) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[171]/* d[6].ctrl.Trustx variable */) ,(data->simulationInfo->realParameter[2845]/* d[6].d.p.m PARAM */) ,"d[6].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 836
type: SIMPLE_ASSIGN
d[5].ctrl.y = d[5].d.y
*/
void System_eqFunction_836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,836};
  (data->localData[0]->realVars[219]/* d[5].ctrl.y variable */)  = (data->localData[0]->realVars[32]/* d[5].d.y STATE(1,d[5].d.Vy) */) ;
  TRACE_POP
}
/*
equation index: 837
type: SIMPLE_ASSIGN
d[5].ctrl.Trusty = d[5].ctrl.prm.m * (d[5].ctrl.ky1 * (d[5].ctrl.y - pre(d[5].ctrl.destY)) + d[5].ctrl.ky2 * d[5].d.Vy)
*/
void System_eqFunction_837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,837};
  (data->localData[0]->realVars[177]/* d[5].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1927]/* d[5].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1073]/* d[5].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[219]/* d[5].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[781]/* d[5].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[1080]/* d[5].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[11]/* d[5].d.Vy STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 838
type: SIMPLE_ASSIGN
$DER.d[5].d.Vy = d[5].ctrl.Trusty / d[5].d.p.m
*/
void System_eqFunction_838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,838};
  (data->localData[0]->realVars[53]/* der(d[5].d.Vy) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[177]/* d[5].ctrl.Trusty variable */) ,(data->simulationInfo->realParameter[2844]/* d[5].d.p.m PARAM */) ,"d[5].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 839
type: SIMPLE_ASSIGN
d[5].ctrl.x = d[5].d.x
*/
void System_eqFunction_839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,839};
  (data->localData[0]->realVars[212]/* d[5].ctrl.x variable */)  = (data->localData[0]->realVars[25]/* d[5].d.x STATE(1,d[5].d.Vx) */) ;
  TRACE_POP
}
/*
equation index: 840
type: SIMPLE_ASSIGN
d[5].ctrl.Trustx = d[5].ctrl.prm.m * (d[5].ctrl.kx1 * (d[5].ctrl.x - pre(d[5].ctrl.destX)) + d[5].ctrl.kx2 * d[5].d.Vx)
*/
void System_eqFunction_840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,840};
  (data->localData[0]->realVars[170]/* d[5].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1927]/* d[5].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1059]/* d[5].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[212]/* d[5].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[774]/* d[5].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[1066]/* d[5].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[4]/* d[5].d.Vx STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 841
type: SIMPLE_ASSIGN
$DER.d[5].d.Vx = d[5].ctrl.Trustx / d[5].d.p.m
*/
void System_eqFunction_841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,841};
  (data->localData[0]->realVars[46]/* der(d[5].d.Vx) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[170]/* d[5].ctrl.Trustx variable */) ,(data->simulationInfo->realParameter[2844]/* d[5].d.p.m PARAM */) ,"d[5].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 842
type: SIMPLE_ASSIGN
d[4].ctrl.y = d[4].d.y
*/
void System_eqFunction_842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,842};
  (data->localData[0]->realVars[218]/* d[4].ctrl.y variable */)  = (data->localData[0]->realVars[31]/* d[4].d.y STATE(1,d[4].d.Vy) */) ;
  TRACE_POP
}
/*
equation index: 843
type: SIMPLE_ASSIGN
d[4].ctrl.Trusty = d[4].ctrl.prm.m * (d[4].ctrl.ky1 * (d[4].ctrl.y - pre(d[4].ctrl.destY)) + d[4].ctrl.ky2 * d[4].d.Vy)
*/
void System_eqFunction_843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,843};
  (data->localData[0]->realVars[176]/* d[4].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1926]/* d[4].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1072]/* d[4].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[218]/* d[4].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[780]/* d[4].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[1079]/* d[4].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[10]/* d[4].d.Vy STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 844
type: SIMPLE_ASSIGN
$DER.d[4].d.Vy = d[4].ctrl.Trusty / d[4].d.p.m
*/
void System_eqFunction_844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,844};
  (data->localData[0]->realVars[52]/* der(d[4].d.Vy) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[176]/* d[4].ctrl.Trusty variable */) ,(data->simulationInfo->realParameter[2843]/* d[4].d.p.m PARAM */) ,"d[4].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 845
type: SIMPLE_ASSIGN
d[4].ctrl.x = d[4].d.x
*/
void System_eqFunction_845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,845};
  (data->localData[0]->realVars[211]/* d[4].ctrl.x variable */)  = (data->localData[0]->realVars[24]/* d[4].d.x STATE(1,d[4].d.Vx) */) ;
  TRACE_POP
}
/*
equation index: 846
type: SIMPLE_ASSIGN
d[4].ctrl.Trustx = d[4].ctrl.prm.m * (d[4].ctrl.kx1 * (d[4].ctrl.x - pre(d[4].ctrl.destX)) + d[4].ctrl.kx2 * d[4].d.Vx)
*/
void System_eqFunction_846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,846};
  (data->localData[0]->realVars[169]/* d[4].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1926]/* d[4].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1058]/* d[4].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[211]/* d[4].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[773]/* d[4].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[1065]/* d[4].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[3]/* d[4].d.Vx STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 847
type: SIMPLE_ASSIGN
$DER.d[4].d.Vx = d[4].ctrl.Trustx / d[4].d.p.m
*/
void System_eqFunction_847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,847};
  (data->localData[0]->realVars[45]/* der(d[4].d.Vx) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[169]/* d[4].ctrl.Trustx variable */) ,(data->simulationInfo->realParameter[2843]/* d[4].d.p.m PARAM */) ,"d[4].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 848
type: SIMPLE_ASSIGN
d[3].ctrl.y = d[3].d.y
*/
void System_eqFunction_848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,848};
  (data->localData[0]->realVars[217]/* d[3].ctrl.y variable */)  = (data->localData[0]->realVars[30]/* d[3].d.y STATE(1,d[3].d.Vy) */) ;
  TRACE_POP
}
/*
equation index: 849
type: SIMPLE_ASSIGN
d[3].ctrl.Trusty = d[3].ctrl.prm.m * (d[3].ctrl.ky1 * (d[3].ctrl.y - pre(d[3].ctrl.destY)) + d[3].ctrl.ky2 * d[3].d.Vy)
*/
void System_eqFunction_849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,849};
  (data->localData[0]->realVars[175]/* d[3].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1925]/* d[3].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1071]/* d[3].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[217]/* d[3].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[779]/* d[3].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[1078]/* d[3].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[9]/* d[3].d.Vy STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 850
type: SIMPLE_ASSIGN
$DER.d[3].d.Vy = d[3].ctrl.Trusty / d[3].d.p.m
*/
void System_eqFunction_850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,850};
  (data->localData[0]->realVars[51]/* der(d[3].d.Vy) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[175]/* d[3].ctrl.Trusty variable */) ,(data->simulationInfo->realParameter[2842]/* d[3].d.p.m PARAM */) ,"d[3].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 851
type: SIMPLE_ASSIGN
d[3].ctrl.x = d[3].d.x
*/
void System_eqFunction_851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,851};
  (data->localData[0]->realVars[210]/* d[3].ctrl.x variable */)  = (data->localData[0]->realVars[23]/* d[3].d.x STATE(1,d[3].d.Vx) */) ;
  TRACE_POP
}
/*
equation index: 852
type: SIMPLE_ASSIGN
d[3].ctrl.Trustx = d[3].ctrl.prm.m * (d[3].ctrl.kx1 * (d[3].ctrl.x - pre(d[3].ctrl.destX)) + d[3].ctrl.kx2 * d[3].d.Vx)
*/
void System_eqFunction_852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,852};
  (data->localData[0]->realVars[168]/* d[3].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1925]/* d[3].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1057]/* d[3].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[210]/* d[3].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[772]/* d[3].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[1064]/* d[3].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[2]/* d[3].d.Vx STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 853
type: SIMPLE_ASSIGN
$DER.d[3].d.Vx = d[3].ctrl.Trustx / d[3].d.p.m
*/
void System_eqFunction_853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,853};
  (data->localData[0]->realVars[44]/* der(d[3].d.Vx) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[168]/* d[3].ctrl.Trustx variable */) ,(data->simulationInfo->realParameter[2842]/* d[3].d.p.m PARAM */) ,"d[3].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 854
type: SIMPLE_ASSIGN
d[2].ctrl.y = d[2].d.y
*/
void System_eqFunction_854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,854};
  (data->localData[0]->realVars[216]/* d[2].ctrl.y variable */)  = (data->localData[0]->realVars[29]/* d[2].d.y STATE(1,d[2].d.Vy) */) ;
  TRACE_POP
}
/*
equation index: 855
type: SIMPLE_ASSIGN
d[2].ctrl.Trusty = d[2].ctrl.prm.m * (d[2].ctrl.ky1 * (d[2].ctrl.y - pre(d[2].ctrl.destY)) + d[2].ctrl.ky2 * d[2].d.Vy)
*/
void System_eqFunction_855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,855};
  (data->localData[0]->realVars[174]/* d[2].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1924]/* d[2].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1070]/* d[2].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[216]/* d[2].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[778]/* d[2].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[1077]/* d[2].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[8]/* d[2].d.Vy STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 856
type: SIMPLE_ASSIGN
$DER.d[2].d.Vy = d[2].ctrl.Trusty / d[2].d.p.m
*/
void System_eqFunction_856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,856};
  (data->localData[0]->realVars[50]/* der(d[2].d.Vy) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[174]/* d[2].ctrl.Trusty variable */) ,(data->simulationInfo->realParameter[2841]/* d[2].d.p.m PARAM */) ,"d[2].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 857
type: SIMPLE_ASSIGN
d[2].ctrl.x = d[2].d.x
*/
void System_eqFunction_857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,857};
  (data->localData[0]->realVars[209]/* d[2].ctrl.x variable */)  = (data->localData[0]->realVars[22]/* d[2].d.x STATE(1,d[2].d.Vx) */) ;
  TRACE_POP
}
/*
equation index: 858
type: SIMPLE_ASSIGN
d[2].ctrl.Trustx = d[2].ctrl.prm.m * (d[2].ctrl.kx1 * (d[2].ctrl.x - pre(d[2].ctrl.destX)) + d[2].ctrl.kx2 * d[2].d.Vx)
*/
void System_eqFunction_858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,858};
  (data->localData[0]->realVars[167]/* d[2].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1924]/* d[2].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1056]/* d[2].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[209]/* d[2].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[771]/* d[2].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[1063]/* d[2].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[1]/* d[2].d.Vx STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 859
type: SIMPLE_ASSIGN
$DER.d[2].d.Vx = d[2].ctrl.Trustx / d[2].d.p.m
*/
void System_eqFunction_859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,859};
  (data->localData[0]->realVars[43]/* der(d[2].d.Vx) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[167]/* d[2].ctrl.Trustx variable */) ,(data->simulationInfo->realParameter[2841]/* d[2].d.p.m PARAM */) ,"d[2].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 860
type: SIMPLE_ASSIGN
d[1].ctrl.y = d[1].d.y
*/
void System_eqFunction_860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,860};
  (data->localData[0]->realVars[215]/* d[1].ctrl.y variable */)  = (data->localData[0]->realVars[28]/* d[1].d.y STATE(1,d[1].d.Vy) */) ;
  TRACE_POP
}
/*
equation index: 861
type: SIMPLE_ASSIGN
d[1].ctrl.Trusty = d[1].ctrl.prm.m * (d[1].ctrl.ky1 * (d[1].ctrl.y - pre(d[1].ctrl.destY)) + d[1].ctrl.ky2 * d[1].d.Vy)
*/
void System_eqFunction_861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,861};
  (data->localData[0]->realVars[173]/* d[1].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[1923]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1069]/* d[1].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[215]/* d[1].ctrl.y variable */)  - (data->simulationInfo->realVarsPre[777]/* d[1].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[1076]/* d[1].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[7]/* d[1].d.Vy STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 862
type: SIMPLE_ASSIGN
$DER.d[1].d.Vy = d[1].ctrl.Trusty / d[1].d.p.m
*/
void System_eqFunction_862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,862};
  (data->localData[0]->realVars[49]/* der(d[1].d.Vy) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[173]/* d[1].ctrl.Trusty variable */) ,(data->simulationInfo->realParameter[2840]/* d[1].d.p.m PARAM */) ,"d[1].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 863
type: SIMPLE_ASSIGN
d[1].ctrl.x = d[1].d.x
*/
void System_eqFunction_863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,863};
  (data->localData[0]->realVars[208]/* d[1].ctrl.x variable */)  = (data->localData[0]->realVars[21]/* d[1].d.x STATE(1,d[1].d.Vx) */) ;
  TRACE_POP
}
/*
equation index: 864
type: SIMPLE_ASSIGN
d[1].ctrl.Trustx = d[1].ctrl.prm.m * (d[1].ctrl.kx1 * (d[1].ctrl.x - pre(d[1].ctrl.destX)) + d[1].ctrl.kx2 * d[1].d.Vx)
*/
void System_eqFunction_864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,864};
  (data->localData[0]->realVars[166]/* d[1].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[1923]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[1055]/* d[1].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[208]/* d[1].ctrl.x variable */)  - (data->simulationInfo->realVarsPre[770]/* d[1].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[1062]/* d[1].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 865
type: SIMPLE_ASSIGN
$DER.d[1].d.Vx = d[1].ctrl.Trustx / d[1].d.p.m
*/
void System_eqFunction_865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,865};
  (data->localData[0]->realVars[42]/* der(d[1].d.Vx) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[166]/* d[1].ctrl.Trustx variable */) ,(data->simulationInfo->realParameter[2840]/* d[1].d.p.m PARAM */) ,"d[1].d.p.m",equationIndexes);
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
  System_eqFunction_521(data, threadData);

  System_eqFunction_522(data, threadData);

  System_eqFunction_523(data, threadData);

  System_eqFunction_524(data, threadData);

  System_eqFunction_525(data, threadData);

  System_eqFunction_526(data, threadData);

  System_eqFunction_527(data, threadData);

  System_eqFunction_528(data, threadData);

  System_eqFunction_529(data, threadData);

  System_eqFunction_530(data, threadData);

  System_eqFunction_531(data, threadData);

  System_eqFunction_532(data, threadData);

  System_eqFunction_533(data, threadData);

  System_eqFunction_534(data, threadData);

  System_eqFunction_535(data, threadData);

  System_eqFunction_536(data, threadData);

  System_eqFunction_537(data, threadData);

  System_eqFunction_538(data, threadData);

  System_eqFunction_539(data, threadData);

  System_eqFunction_540(data, threadData);

  System_eqFunction_541(data, threadData);

  System_eqFunction_542(data, threadData);

  System_eqFunction_543(data, threadData);

  System_eqFunction_544(data, threadData);

  System_eqFunction_545(data, threadData);

  System_eqFunction_546(data, threadData);

  System_eqFunction_547(data, threadData);

  System_eqFunction_548(data, threadData);

  System_eqFunction_549(data, threadData);

  System_eqFunction_550(data, threadData);

  System_eqFunction_551(data, threadData);

  System_eqFunction_552(data, threadData);

  System_eqFunction_553(data, threadData);

  System_eqFunction_554(data, threadData);

  System_eqFunction_555(data, threadData);

  System_eqFunction_556(data, threadData);

  System_eqFunction_557(data, threadData);

  System_eqFunction_558(data, threadData);

  System_eqFunction_559(data, threadData);

  System_eqFunction_560(data, threadData);

  System_eqFunction_561(data, threadData);

  System_eqFunction_562(data, threadData);

  System_eqFunction_563(data, threadData);

  System_eqFunction_564(data, threadData);

  System_eqFunction_565(data, threadData);

  System_eqFunction_566(data, threadData);

  System_eqFunction_567(data, threadData);

  System_eqFunction_568(data, threadData);

  System_eqFunction_569(data, threadData);

  System_eqFunction_570(data, threadData);

  System_eqFunction_571(data, threadData);

  System_eqFunction_572(data, threadData);

  System_eqFunction_573(data, threadData);

  System_eqFunction_574(data, threadData);

  System_eqFunction_575(data, threadData);

  System_eqFunction_576(data, threadData);

  System_eqFunction_577(data, threadData);

  System_eqFunction_578(data, threadData);

  System_eqFunction_579(data, threadData);

  System_eqFunction_580(data, threadData);

  System_eqFunction_581(data, threadData);

  System_eqFunction_582(data, threadData);

  System_eqFunction_583(data, threadData);

  System_eqFunction_584(data, threadData);

  System_eqFunction_585(data, threadData);

  System_eqFunction_586(data, threadData);

  System_eqFunction_587(data, threadData);

  System_eqFunction_588(data, threadData);

  System_eqFunction_589(data, threadData);

  System_eqFunction_590(data, threadData);

  System_eqFunction_591(data, threadData);

  System_eqFunction_592(data, threadData);

  System_eqFunction_593(data, threadData);

  System_eqFunction_594(data, threadData);

  System_eqFunction_595(data, threadData);

  System_eqFunction_596(data, threadData);

  System_eqFunction_597(data, threadData);

  System_eqFunction_598(data, threadData);

  System_eqFunction_599(data, threadData);

  System_eqFunction_600(data, threadData);

  System_eqFunction_601(data, threadData);

  System_eqFunction_602(data, threadData);

  System_eqFunction_603(data, threadData);

  System_eqFunction_604(data, threadData);

  System_eqFunction_605(data, threadData);

  System_eqFunction_606(data, threadData);

  System_eqFunction_607(data, threadData);

  System_eqFunction_608(data, threadData);

  System_eqFunction_609(data, threadData);

  System_eqFunction_610(data, threadData);

  System_eqFunction_611(data, threadData);

  System_eqFunction_612(data, threadData);

  System_eqFunction_613(data, threadData);

  System_eqFunction_614(data, threadData);

  System_eqFunction_615(data, threadData);

  System_eqFunction_616(data, threadData);

  System_eqFunction_617(data, threadData);

  System_eqFunction_618(data, threadData);

  System_eqFunction_619(data, threadData);

  System_eqFunction_620(data, threadData);

  System_eqFunction_621(data, threadData);

  System_eqFunction_622(data, threadData);

  System_eqFunction_623(data, threadData);

  System_eqFunction_624(data, threadData);

  System_eqFunction_625(data, threadData);

  System_eqFunction_626(data, threadData);

  System_eqFunction_627(data, threadData);

  System_eqFunction_628(data, threadData);

  System_eqFunction_629(data, threadData);

  System_eqFunction_630(data, threadData);

  System_eqFunction_631(data, threadData);

  System_eqFunction_632(data, threadData);

  System_eqFunction_633(data, threadData);

  System_eqFunction_634(data, threadData);

  System_eqFunction_635(data, threadData);

  System_eqFunction_636(data, threadData);

  System_eqFunction_637(data, threadData);

  System_eqFunction_638(data, threadData);

  System_eqFunction_639(data, threadData);

  System_eqFunction_640(data, threadData);

  System_eqFunction_641(data, threadData);

  System_eqFunction_642(data, threadData);

  System_eqFunction_643(data, threadData);

  System_eqFunction_644(data, threadData);

  System_eqFunction_645(data, threadData);

  System_eqFunction_646(data, threadData);

  System_eqFunction_647(data, threadData);

  System_eqFunction_648(data, threadData);

  System_eqFunction_649(data, threadData);

  System_eqFunction_650(data, threadData);

  System_eqFunction_651(data, threadData);

  System_eqFunction_652(data, threadData);

  System_eqFunction_653(data, threadData);

  System_eqFunction_654(data, threadData);

  System_eqFunction_655(data, threadData);

  System_eqFunction_656(data, threadData);

  System_eqFunction_657(data, threadData);

  System_eqFunction_658(data, threadData);

  System_eqFunction_659(data, threadData);

  System_eqFunction_660(data, threadData);

  System_eqFunction_661(data, threadData);

  System_eqFunction_662(data, threadData);

  System_eqFunction_663(data, threadData);

  System_eqFunction_664(data, threadData);

  System_eqFunction_665(data, threadData);

  System_eqFunction_666(data, threadData);

  System_eqFunction_667(data, threadData);

  System_eqFunction_668(data, threadData);

  System_eqFunction_669(data, threadData);

  System_eqFunction_670(data, threadData);

  System_eqFunction_671(data, threadData);

  System_eqFunction_672(data, threadData);

  System_eqFunction_673(data, threadData);

  System_eqFunction_674(data, threadData);

  System_eqFunction_675(data, threadData);

  System_eqFunction_676(data, threadData);

  System_eqFunction_677(data, threadData);

  System_eqFunction_678(data, threadData);

  System_eqFunction_679(data, threadData);

  System_eqFunction_680(data, threadData);

  System_eqFunction_681(data, threadData);

  System_eqFunction_682(data, threadData);

  System_eqFunction_683(data, threadData);

  System_eqFunction_684(data, threadData);

  System_eqFunction_685(data, threadData);

  System_eqFunction_686(data, threadData);

  System_eqFunction_687(data, threadData);

  System_eqFunction_688(data, threadData);

  System_eqFunction_689(data, threadData);

  System_eqFunction_690(data, threadData);

  System_eqFunction_691(data, threadData);

  System_eqFunction_692(data, threadData);

  System_eqFunction_693(data, threadData);

  System_eqFunction_694(data, threadData);

  System_eqFunction_695(data, threadData);

  System_eqFunction_696(data, threadData);

  System_eqFunction_697(data, threadData);

  System_eqFunction_698(data, threadData);

  System_eqFunction_699(data, threadData);

  System_eqFunction_700(data, threadData);

  System_eqFunction_701(data, threadData);

  System_eqFunction_702(data, threadData);

  System_eqFunction_703(data, threadData);

  System_eqFunction_704(data, threadData);

  System_eqFunction_705(data, threadData);

  System_eqFunction_706(data, threadData);

  System_eqFunction_707(data, threadData);

  System_eqFunction_708(data, threadData);

  System_eqFunction_709(data, threadData);

  System_eqFunction_710(data, threadData);

  System_eqFunction_711(data, threadData);

  System_eqFunction_712(data, threadData);

  System_eqFunction_713(data, threadData);

  System_eqFunction_714(data, threadData);

  System_eqFunction_715(data, threadData);

  System_eqFunction_716(data, threadData);

  System_eqFunction_717(data, threadData);

  System_eqFunction_718(data, threadData);

  System_eqFunction_719(data, threadData);

  System_eqFunction_720(data, threadData);

  System_eqFunction_721(data, threadData);

  System_eqFunction_722(data, threadData);

  System_eqFunction_723(data, threadData);

  System_eqFunction_724(data, threadData);

  System_eqFunction_725(data, threadData);

  System_eqFunction_726(data, threadData);

  System_eqFunction_727(data, threadData);

  System_eqFunction_728(data, threadData);

  System_eqFunction_729(data, threadData);

  System_eqFunction_730(data, threadData);

  System_eqFunction_731(data, threadData);

  System_eqFunction_732(data, threadData);

  System_eqFunction_733(data, threadData);

  System_eqFunction_734(data, threadData);

  System_eqFunction_735(data, threadData);

  System_eqFunction_736(data, threadData);

  System_eqFunction_737(data, threadData);

  System_eqFunction_738(data, threadData);

  System_eqFunction_739(data, threadData);

  System_eqFunction_740(data, threadData);

  System_eqFunction_741(data, threadData);

  System_eqFunction_742(data, threadData);

  System_eqFunction_743(data, threadData);

  System_eqFunction_744(data, threadData);

  System_eqFunction_745(data, threadData);

  System_eqFunction_746(data, threadData);

  System_eqFunction_747(data, threadData);

  System_eqFunction_748(data, threadData);

  System_eqFunction_749(data, threadData);

  System_eqFunction_750(data, threadData);

  System_eqFunction_751(data, threadData);

  System_eqFunction_752(data, threadData);

  System_eqFunction_753(data, threadData);

  System_eqFunction_754(data, threadData);

  System_eqFunction_755(data, threadData);

  System_eqFunction_756(data, threadData);

  System_eqFunction_757(data, threadData);

  System_eqFunction_758(data, threadData);

  System_eqFunction_759(data, threadData);

  System_eqFunction_760(data, threadData);

  System_eqFunction_761(data, threadData);

  System_eqFunction_762(data, threadData);

  System_eqFunction_763(data, threadData);

  System_eqFunction_764(data, threadData);

  System_eqFunction_765(data, threadData);

  System_eqFunction_766(data, threadData);

  System_eqFunction_767(data, threadData);

  System_eqFunction_768(data, threadData);

  System_eqFunction_769(data, threadData);

  System_eqFunction_770(data, threadData);

  System_eqFunction_771(data, threadData);

  System_eqFunction_772(data, threadData);

  System_eqFunction_773(data, threadData);

  System_eqFunction_774(data, threadData);

  System_eqFunction_775(data, threadData);

  System_eqFunction_776(data, threadData);

  System_eqFunction_777(data, threadData);

  System_eqFunction_778(data, threadData);

  System_eqFunction_779(data, threadData);

  System_eqFunction_780(data, threadData);

  System_eqFunction_781(data, threadData);

  System_eqFunction_782(data, threadData);

  System_eqFunction_783(data, threadData);

  System_eqFunction_784(data, threadData);

  System_eqFunction_785(data, threadData);

  System_eqFunction_786(data, threadData);

  System_eqFunction_787(data, threadData);

  System_eqFunction_788(data, threadData);

  System_eqFunction_789(data, threadData);

  System_eqFunction_790(data, threadData);

  System_eqFunction_791(data, threadData);

  System_eqFunction_792(data, threadData);

  System_eqFunction_793(data, threadData);

  System_eqFunction_794(data, threadData);

  System_eqFunction_795(data, threadData);

  System_eqFunction_796(data, threadData);

  System_eqFunction_797(data, threadData);

  System_eqFunction_798(data, threadData);

  System_eqFunction_799(data, threadData);

  System_eqFunction_800(data, threadData);

  System_eqFunction_801(data, threadData);

  System_eqFunction_802(data, threadData);

  System_eqFunction_803(data, threadData);

  System_eqFunction_804(data, threadData);

  System_eqFunction_805(data, threadData);

  System_eqFunction_806(data, threadData);

  System_eqFunction_807(data, threadData);

  System_eqFunction_808(data, threadData);

  System_eqFunction_809(data, threadData);

  System_eqFunction_810(data, threadData);

  System_eqFunction_811(data, threadData);

  System_eqFunction_812(data, threadData);

  System_eqFunction_813(data, threadData);

  System_eqFunction_814(data, threadData);

  System_eqFunction_815(data, threadData);

  System_eqFunction_816(data, threadData);

  System_eqFunction_817(data, threadData);

  System_eqFunction_818(data, threadData);

  System_eqFunction_819(data, threadData);

  System_eqFunction_820(data, threadData);

  System_eqFunction_821(data, threadData);

  System_eqFunction_822(data, threadData);

  System_eqFunction_823(data, threadData);

  System_eqFunction_824(data, threadData);

  System_eqFunction_825(data, threadData);

  System_eqFunction_826(data, threadData);

  System_eqFunction_827(data, threadData);

  System_eqFunction_828(data, threadData);

  System_eqFunction_829(data, threadData);

  System_eqFunction_830(data, threadData);

  System_eqFunction_831(data, threadData);

  System_eqFunction_832(data, threadData);

  System_eqFunction_833(data, threadData);

  System_eqFunction_834(data, threadData);

  System_eqFunction_835(data, threadData);

  System_eqFunction_836(data, threadData);

  System_eqFunction_837(data, threadData);

  System_eqFunction_838(data, threadData);

  System_eqFunction_839(data, threadData);

  System_eqFunction_840(data, threadData);

  System_eqFunction_841(data, threadData);

  System_eqFunction_842(data, threadData);

  System_eqFunction_843(data, threadData);

  System_eqFunction_844(data, threadData);

  System_eqFunction_845(data, threadData);

  System_eqFunction_846(data, threadData);

  System_eqFunction_847(data, threadData);

  System_eqFunction_848(data, threadData);

  System_eqFunction_849(data, threadData);

  System_eqFunction_850(data, threadData);

  System_eqFunction_851(data, threadData);

  System_eqFunction_852(data, threadData);

  System_eqFunction_853(data, threadData);

  System_eqFunction_854(data, threadData);

  System_eqFunction_855(data, threadData);

  System_eqFunction_856(data, threadData);

  System_eqFunction_857(data, threadData);

  System_eqFunction_858(data, threadData);

  System_eqFunction_859(data, threadData);

  System_eqFunction_860(data, threadData);

  System_eqFunction_861(data, threadData);

  System_eqFunction_862(data, threadData);

  System_eqFunction_863(data, threadData);

  System_eqFunction_864(data, threadData);

  System_eqFunction_865(data, threadData);
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
extern void System_eqFunction_528(DATA* data, threadData_t *threadData);
extern void System_eqFunction_529(DATA* data, threadData_t *threadData);
extern void System_eqFunction_530(DATA* data, threadData_t *threadData);
extern void System_eqFunction_531(DATA* data, threadData_t *threadData);
extern void System_eqFunction_532(DATA* data, threadData_t *threadData);
extern void System_eqFunction_533(DATA* data, threadData_t *threadData);
extern void System_eqFunction_534(DATA* data, threadData_t *threadData);
extern void System_eqFunction_535(DATA* data, threadData_t *threadData);
extern void System_eqFunction_536(DATA* data, threadData_t *threadData);
extern void System_eqFunction_537(DATA* data, threadData_t *threadData);
extern void System_eqFunction_538(DATA* data, threadData_t *threadData);
extern void System_eqFunction_539(DATA* data, threadData_t *threadData);
extern void System_eqFunction_540(DATA* data, threadData_t *threadData);
extern void System_eqFunction_541(DATA* data, threadData_t *threadData);
extern void System_eqFunction_542(DATA* data, threadData_t *threadData);
extern void System_eqFunction_543(DATA* data, threadData_t *threadData);
extern void System_eqFunction_544(DATA* data, threadData_t *threadData);
extern void System_eqFunction_545(DATA* data, threadData_t *threadData);
extern void System_eqFunction_546(DATA* data, threadData_t *threadData);
extern void System_eqFunction_547(DATA* data, threadData_t *threadData);
extern void System_eqFunction_548(DATA* data, threadData_t *threadData);
extern void System_eqFunction_549(DATA* data, threadData_t *threadData);
extern void System_eqFunction_550(DATA* data, threadData_t *threadData);
extern void System_eqFunction_551(DATA* data, threadData_t *threadData);
extern void System_eqFunction_552(DATA* data, threadData_t *threadData);
extern void System_eqFunction_553(DATA* data, threadData_t *threadData);
extern void System_eqFunction_554(DATA* data, threadData_t *threadData);
extern void System_eqFunction_555(DATA* data, threadData_t *threadData);
extern void System_eqFunction_556(DATA* data, threadData_t *threadData);
extern void System_eqFunction_557(DATA* data, threadData_t *threadData);
extern void System_eqFunction_558(DATA* data, threadData_t *threadData);
extern void System_eqFunction_559(DATA* data, threadData_t *threadData);
extern void System_eqFunction_560(DATA* data, threadData_t *threadData);
extern void System_eqFunction_561(DATA* data, threadData_t *threadData);
extern void System_eqFunction_562(DATA* data, threadData_t *threadData);
extern void System_eqFunction_824(DATA* data, threadData_t *threadData);
extern void System_eqFunction_825(DATA* data, threadData_t *threadData);
extern void System_eqFunction_826(DATA* data, threadData_t *threadData);
extern void System_eqFunction_827(DATA* data, threadData_t *threadData);
extern void System_eqFunction_828(DATA* data, threadData_t *threadData);
extern void System_eqFunction_829(DATA* data, threadData_t *threadData);
extern void System_eqFunction_830(DATA* data, threadData_t *threadData);
extern void System_eqFunction_831(DATA* data, threadData_t *threadData);
extern void System_eqFunction_832(DATA* data, threadData_t *threadData);
extern void System_eqFunction_833(DATA* data, threadData_t *threadData);
extern void System_eqFunction_834(DATA* data, threadData_t *threadData);
extern void System_eqFunction_835(DATA* data, threadData_t *threadData);
extern void System_eqFunction_836(DATA* data, threadData_t *threadData);
extern void System_eqFunction_837(DATA* data, threadData_t *threadData);
extern void System_eqFunction_838(DATA* data, threadData_t *threadData);
extern void System_eqFunction_839(DATA* data, threadData_t *threadData);
extern void System_eqFunction_840(DATA* data, threadData_t *threadData);
extern void System_eqFunction_841(DATA* data, threadData_t *threadData);
extern void System_eqFunction_842(DATA* data, threadData_t *threadData);
extern void System_eqFunction_843(DATA* data, threadData_t *threadData);
extern void System_eqFunction_844(DATA* data, threadData_t *threadData);
extern void System_eqFunction_845(DATA* data, threadData_t *threadData);
extern void System_eqFunction_846(DATA* data, threadData_t *threadData);
extern void System_eqFunction_847(DATA* data, threadData_t *threadData);
extern void System_eqFunction_848(DATA* data, threadData_t *threadData);
extern void System_eqFunction_849(DATA* data, threadData_t *threadData);
extern void System_eqFunction_850(DATA* data, threadData_t *threadData);
extern void System_eqFunction_851(DATA* data, threadData_t *threadData);
extern void System_eqFunction_852(DATA* data, threadData_t *threadData);
extern void System_eqFunction_853(DATA* data, threadData_t *threadData);
extern void System_eqFunction_854(DATA* data, threadData_t *threadData);
extern void System_eqFunction_855(DATA* data, threadData_t *threadData);
extern void System_eqFunction_856(DATA* data, threadData_t *threadData);
extern void System_eqFunction_857(DATA* data, threadData_t *threadData);
extern void System_eqFunction_858(DATA* data, threadData_t *threadData);
extern void System_eqFunction_859(DATA* data, threadData_t *threadData);
extern void System_eqFunction_860(DATA* data, threadData_t *threadData);
extern void System_eqFunction_861(DATA* data, threadData_t *threadData);
extern void System_eqFunction_862(DATA* data, threadData_t *threadData);
extern void System_eqFunction_863(DATA* data, threadData_t *threadData);
extern void System_eqFunction_864(DATA* data, threadData_t *threadData);
extern void System_eqFunction_865(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  {
    System_eqFunction_528(data, threadData);
    threadData->lastEquationSolved = 528;
  }
  {
    System_eqFunction_529(data, threadData);
    threadData->lastEquationSolved = 529;
  }
  {
    System_eqFunction_530(data, threadData);
    threadData->lastEquationSolved = 530;
  }
  {
    System_eqFunction_531(data, threadData);
    threadData->lastEquationSolved = 531;
  }
  {
    System_eqFunction_532(data, threadData);
    threadData->lastEquationSolved = 532;
  }
  {
    System_eqFunction_533(data, threadData);
    threadData->lastEquationSolved = 533;
  }
  {
    System_eqFunction_534(data, threadData);
    threadData->lastEquationSolved = 534;
  }
  {
    System_eqFunction_535(data, threadData);
    threadData->lastEquationSolved = 535;
  }
  {
    System_eqFunction_536(data, threadData);
    threadData->lastEquationSolved = 536;
  }
  {
    System_eqFunction_537(data, threadData);
    threadData->lastEquationSolved = 537;
  }
  {
    System_eqFunction_538(data, threadData);
    threadData->lastEquationSolved = 538;
  }
  {
    System_eqFunction_539(data, threadData);
    threadData->lastEquationSolved = 539;
  }
  {
    System_eqFunction_540(data, threadData);
    threadData->lastEquationSolved = 540;
  }
  {
    System_eqFunction_541(data, threadData);
    threadData->lastEquationSolved = 541;
  }
  {
    System_eqFunction_542(data, threadData);
    threadData->lastEquationSolved = 542;
  }
  {
    System_eqFunction_543(data, threadData);
    threadData->lastEquationSolved = 543;
  }
  {
    System_eqFunction_544(data, threadData);
    threadData->lastEquationSolved = 544;
  }
  {
    System_eqFunction_545(data, threadData);
    threadData->lastEquationSolved = 545;
  }
  {
    System_eqFunction_546(data, threadData);
    threadData->lastEquationSolved = 546;
  }
  {
    System_eqFunction_547(data, threadData);
    threadData->lastEquationSolved = 547;
  }
  {
    System_eqFunction_548(data, threadData);
    threadData->lastEquationSolved = 548;
  }
  {
    System_eqFunction_549(data, threadData);
    threadData->lastEquationSolved = 549;
  }
  {
    System_eqFunction_550(data, threadData);
    threadData->lastEquationSolved = 550;
  }
  {
    System_eqFunction_551(data, threadData);
    threadData->lastEquationSolved = 551;
  }
  {
    System_eqFunction_552(data, threadData);
    threadData->lastEquationSolved = 552;
  }
  {
    System_eqFunction_553(data, threadData);
    threadData->lastEquationSolved = 553;
  }
  {
    System_eqFunction_554(data, threadData);
    threadData->lastEquationSolved = 554;
  }
  {
    System_eqFunction_555(data, threadData);
    threadData->lastEquationSolved = 555;
  }
  {
    System_eqFunction_556(data, threadData);
    threadData->lastEquationSolved = 556;
  }
  {
    System_eqFunction_557(data, threadData);
    threadData->lastEquationSolved = 557;
  }
  {
    System_eqFunction_558(data, threadData);
    threadData->lastEquationSolved = 558;
  }
  {
    System_eqFunction_559(data, threadData);
    threadData->lastEquationSolved = 559;
  }
  {
    System_eqFunction_560(data, threadData);
    threadData->lastEquationSolved = 560;
  }
  {
    System_eqFunction_561(data, threadData);
    threadData->lastEquationSolved = 561;
  }
  {
    System_eqFunction_562(data, threadData);
    threadData->lastEquationSolved = 562;
  }
  {
    System_eqFunction_824(data, threadData);
    threadData->lastEquationSolved = 824;
  }
  {
    System_eqFunction_825(data, threadData);
    threadData->lastEquationSolved = 825;
  }
  {
    System_eqFunction_826(data, threadData);
    threadData->lastEquationSolved = 826;
  }
  {
    System_eqFunction_827(data, threadData);
    threadData->lastEquationSolved = 827;
  }
  {
    System_eqFunction_828(data, threadData);
    threadData->lastEquationSolved = 828;
  }
  {
    System_eqFunction_829(data, threadData);
    threadData->lastEquationSolved = 829;
  }
  {
    System_eqFunction_830(data, threadData);
    threadData->lastEquationSolved = 830;
  }
  {
    System_eqFunction_831(data, threadData);
    threadData->lastEquationSolved = 831;
  }
  {
    System_eqFunction_832(data, threadData);
    threadData->lastEquationSolved = 832;
  }
  {
    System_eqFunction_833(data, threadData);
    threadData->lastEquationSolved = 833;
  }
  {
    System_eqFunction_834(data, threadData);
    threadData->lastEquationSolved = 834;
  }
  {
    System_eqFunction_835(data, threadData);
    threadData->lastEquationSolved = 835;
  }
  {
    System_eqFunction_836(data, threadData);
    threadData->lastEquationSolved = 836;
  }
  {
    System_eqFunction_837(data, threadData);
    threadData->lastEquationSolved = 837;
  }
  {
    System_eqFunction_838(data, threadData);
    threadData->lastEquationSolved = 838;
  }
  {
    System_eqFunction_839(data, threadData);
    threadData->lastEquationSolved = 839;
  }
  {
    System_eqFunction_840(data, threadData);
    threadData->lastEquationSolved = 840;
  }
  {
    System_eqFunction_841(data, threadData);
    threadData->lastEquationSolved = 841;
  }
  {
    System_eqFunction_842(data, threadData);
    threadData->lastEquationSolved = 842;
  }
  {
    System_eqFunction_843(data, threadData);
    threadData->lastEquationSolved = 843;
  }
  {
    System_eqFunction_844(data, threadData);
    threadData->lastEquationSolved = 844;
  }
  {
    System_eqFunction_845(data, threadData);
    threadData->lastEquationSolved = 845;
  }
  {
    System_eqFunction_846(data, threadData);
    threadData->lastEquationSolved = 846;
  }
  {
    System_eqFunction_847(data, threadData);
    threadData->lastEquationSolved = 847;
  }
  {
    System_eqFunction_848(data, threadData);
    threadData->lastEquationSolved = 848;
  }
  {
    System_eqFunction_849(data, threadData);
    threadData->lastEquationSolved = 849;
  }
  {
    System_eqFunction_850(data, threadData);
    threadData->lastEquationSolved = 850;
  }
  {
    System_eqFunction_851(data, threadData);
    threadData->lastEquationSolved = 851;
  }
  {
    System_eqFunction_852(data, threadData);
    threadData->lastEquationSolved = 852;
  }
  {
    System_eqFunction_853(data, threadData);
    threadData->lastEquationSolved = 853;
  }
  {
    System_eqFunction_854(data, threadData);
    threadData->lastEquationSolved = 854;
  }
  {
    System_eqFunction_855(data, threadData);
    threadData->lastEquationSolved = 855;
  }
  {
    System_eqFunction_856(data, threadData);
    threadData->lastEquationSolved = 856;
  }
  {
    System_eqFunction_857(data, threadData);
    threadData->lastEquationSolved = 857;
  }
  {
    System_eqFunction_858(data, threadData);
    threadData->lastEquationSolved = 858;
  }
  {
    System_eqFunction_859(data, threadData);
    threadData->lastEquationSolved = 859;
  }
  {
    System_eqFunction_860(data, threadData);
    threadData->lastEquationSolved = 860;
  }
  {
    System_eqFunction_861(data, threadData);
    threadData->lastEquationSolved = 861;
  }
  {
    System_eqFunction_862(data, threadData);
    threadData->lastEquationSolved = 862;
  }
  {
    System_eqFunction_863(data, threadData);
    threadData->lastEquationSolved = 863;
  }
  {
    System_eqFunction_864(data, threadData);
    threadData->lastEquationSolved = 864;
  }
  {
    System_eqFunction_865(data, threadData);
    threadData->lastEquationSolved = 865;
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
#define _OMC_LIT_RESOURCE_1_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,13,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,66,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Controller"
#define _OMC_LIT_RESOURCE_2_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,10,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,66,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "Drone"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,5,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,66,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "DroneFS"
#define _OMC_LIT_RESOURCE_4_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,7,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,66,_OMC_LIT_RESOURCE_4_dir_data);

#define _OMC_LIT_RESOURCE_5_name_data "FIFO"
#define _OMC_LIT_RESOURCE_5_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_name,4,_OMC_LIT_RESOURCE_5_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir,66,_OMC_LIT_RESOURCE_5_dir_data);

#define _OMC_LIT_RESOURCE_6_name_data "FifoIODone"
#define _OMC_LIT_RESOURCE_6_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_name,10,_OMC_LIT_RESOURCE_6_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir,66,_OMC_LIT_RESOURCE_6_dir_data);

#define _OMC_LIT_RESOURCE_7_name_data "InitFifoIOState"
#define _OMC_LIT_RESOURCE_7_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_name,15,_OMC_LIT_RESOURCE_7_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_dir,66,_OMC_LIT_RESOURCE_7_dir_data);

#define _OMC_LIT_RESOURCE_8_name_data "InputBoolean"
#define _OMC_LIT_RESOURCE_8_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_8_name,12,_OMC_LIT_RESOURCE_8_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_8_dir,66,_OMC_LIT_RESOURCE_8_dir_data);

#define _OMC_LIT_RESOURCE_9_name_data "InputInteger"
#define _OMC_LIT_RESOURCE_9_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_9_name,12,_OMC_LIT_RESOURCE_9_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_9_dir,66,_OMC_LIT_RESOURCE_9_dir_data);

#define _OMC_LIT_RESOURCE_10_name_data "InputReal"
#define _OMC_LIT_RESOURCE_10_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_10_name,9,_OMC_LIT_RESOURCE_10_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_10_dir,66,_OMC_LIT_RESOURCE_10_dir_data);

#define _OMC_LIT_RESOURCE_11_name_data "K"
#define _OMC_LIT_RESOURCE_11_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_11_name,1,_OMC_LIT_RESOURCE_11_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_11_dir,66,_OMC_LIT_RESOURCE_11_dir_data);

#define _OMC_LIT_RESOURCE_12_name_data "Modelica"
#define _OMC_LIT_RESOURCE_12_dir_data "/usr/lib/omlibrary/Modelica 4.0.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_12_name,8,_OMC_LIT_RESOURCE_12_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_12_dir,33,_OMC_LIT_RESOURCE_12_dir_data);

#define _OMC_LIT_RESOURCE_13_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_13_dir_data "/usr/lib/omlibrary/ModelicaServices 4.0.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_13_name,16,_OMC_LIT_RESOURCE_13_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_13_dir,41,_OMC_LIT_RESOURCE_13_dir_data);

#define _OMC_LIT_RESOURCE_14_name_data "Monitor"
#define _OMC_LIT_RESOURCE_14_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_14_name,7,_OMC_LIT_RESOURCE_14_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_14_dir,66,_OMC_LIT_RESOURCE_14_dir_data);

#define _OMC_LIT_RESOURCE_15_name_data "OutputBoolean"
#define _OMC_LIT_RESOURCE_15_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_15_name,13,_OMC_LIT_RESOURCE_15_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_15_dir,66,_OMC_LIT_RESOURCE_15_dir_data);

#define _OMC_LIT_RESOURCE_16_name_data "OutputInteger"
#define _OMC_LIT_RESOURCE_16_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_16_name,13,_OMC_LIT_RESOURCE_16_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_16_dir,66,_OMC_LIT_RESOURCE_16_dir_data);

#define _OMC_LIT_RESOURCE_17_name_data "OutputReal"
#define _OMC_LIT_RESOURCE_17_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_17_name,10,_OMC_LIT_RESOURCE_17_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_17_dir,66,_OMC_LIT_RESOURCE_17_dir_data);

#define _OMC_LIT_RESOURCE_18_name_data "Prm"
#define _OMC_LIT_RESOURCE_18_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_18_name,3,_OMC_LIT_RESOURCE_18_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_18_dir,66,_OMC_LIT_RESOURCE_18_dir_data);

#define _OMC_LIT_RESOURCE_19_name_data "ReadFromFIFO"
#define _OMC_LIT_RESOURCE_19_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_19_name,12,_OMC_LIT_RESOURCE_19_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_19_dir,66,_OMC_LIT_RESOURCE_19_dir_data);

#define _OMC_LIT_RESOURCE_20_name_data "System"
#define _OMC_LIT_RESOURCE_20_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_20_name,6,_OMC_LIT_RESOURCE_20_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_20_dir,66,_OMC_LIT_RESOURCE_20_dir_data);

#define _OMC_LIT_RESOURCE_21_name_data "WriteToFIFO"
#define _OMC_LIT_RESOURCE_21_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_21_name,11,_OMC_LIT_RESOURCE_21_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_21_dir,66,_OMC_LIT_RESOURCE_21_dir_data);

#define _OMC_LIT_RESOURCE_22_name_data "areaCenter"
#define _OMC_LIT_RESOURCE_22_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_22_name,10,_OMC_LIT_RESOURCE_22_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_22_dir,66,_OMC_LIT_RESOURCE_22_dir_data);

#define _OMC_LIT_RESOURCE_23_name_data "batteryMonitor"
#define _OMC_LIT_RESOURCE_23_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_23_name,14,_OMC_LIT_RESOURCE_23_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_23_dir,66,_OMC_LIT_RESOURCE_23_dir_data);

#define _OMC_LIT_RESOURCE_24_name_data "charging"
#define _OMC_LIT_RESOURCE_24_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_24_name,8,_OMC_LIT_RESOURCE_24_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_24_dir,66,_OMC_LIT_RESOURCE_24_dir_data);

#define _OMC_LIT_RESOURCE_25_name_data "check_pos"
#define _OMC_LIT_RESOURCE_25_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_25_name,9,_OMC_LIT_RESOURCE_25_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_25_dir,66,_OMC_LIT_RESOURCE_25_dir_data);

#define _OMC_LIT_RESOURCE_26_name_data "check_pos_x"
#define _OMC_LIT_RESOURCE_26_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_26_name,11,_OMC_LIT_RESOURCE_26_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_26_dir,66,_OMC_LIT_RESOURCE_26_dir_data);

#define _OMC_LIT_RESOURCE_27_name_data "check_pos_y"
#define _OMC_LIT_RESOURCE_27_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_27_name,11,_OMC_LIT_RESOURCE_27_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_27_dir,66,_OMC_LIT_RESOURCE_27_dir_data);

#define _OMC_LIT_RESOURCE_28_name_data "check_pos_z"
#define _OMC_LIT_RESOURCE_28_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_28_name,11,_OMC_LIT_RESOURCE_28_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_28_dir,66,_OMC_LIT_RESOURCE_28_dir_data);

#define _OMC_LIT_RESOURCE_29_name_data "create_area"
#define _OMC_LIT_RESOURCE_29_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_29_name,11,_OMC_LIT_RESOURCE_29_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_29_dir,66,_OMC_LIT_RESOURCE_29_dir_data);

#define _OMC_LIT_RESOURCE_30_name_data "create_drone"
#define _OMC_LIT_RESOURCE_30_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_30_name,12,_OMC_LIT_RESOURCE_30_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_30_dir,66,_OMC_LIT_RESOURCE_30_dir_data);

#define _OMC_LIT_RESOURCE_31_name_data "disconnect_from_db"
#define _OMC_LIT_RESOURCE_31_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_31_name,18,_OMC_LIT_RESOURCE_31_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_31_dir,66,_OMC_LIT_RESOURCE_31_dir_data);

#define _OMC_LIT_RESOURCE_32_name_data "flush_history"
#define _OMC_LIT_RESOURCE_32_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_32_name,13,_OMC_LIT_RESOURCE_32_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_32_dir,66,_OMC_LIT_RESOURCE_32_dir_data);

#define _OMC_LIT_RESOURCE_33_name_data "get_drone_pos"
#define _OMC_LIT_RESOURCE_33_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_33_name,13,_OMC_LIT_RESOURCE_33_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_33_dir,66,_OMC_LIT_RESOURCE_33_dir_data);

#define _OMC_LIT_RESOURCE_34_name_data "get_drone_pos_1"
#define _OMC_LIT_RESOURCE_34_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_34_name,15,_OMC_LIT_RESOURCE_34_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_34_dir,66,_OMC_LIT_RESOURCE_34_dir_data);

#define _OMC_LIT_RESOURCE_35_name_data "get_drone_pos_2"
#define _OMC_LIT_RESOURCE_35_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_35_name,15,_OMC_LIT_RESOURCE_35_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_35_dir,66,_OMC_LIT_RESOURCE_35_dir_data);

#define _OMC_LIT_RESOURCE_36_name_data "get_drone_pos_3"
#define _OMC_LIT_RESOURCE_36_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_36_name,15,_OMC_LIT_RESOURCE_36_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_36_dir,66,_OMC_LIT_RESOURCE_36_dir_data);

#define _OMC_LIT_RESOURCE_37_name_data "has_area_been_visited"
#define _OMC_LIT_RESOURCE_37_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_37_name,21,_OMC_LIT_RESOURCE_37_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_37_dir,66,_OMC_LIT_RESOURCE_37_dir_data);

#define _OMC_LIT_RESOURCE_38_name_data "has_drone_been_in_area"
#define _OMC_LIT_RESOURCE_38_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_38_name,22,_OMC_LIT_RESOURCE_38_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_38_dir,66,_OMC_LIT_RESOURCE_38_dir_data);

#define _OMC_LIT_RESOURCE_39_name_data "how_many_drones_in_area"
#define _OMC_LIT_RESOURCE_39_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_39_name,23,_OMC_LIT_RESOURCE_39_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_39_dir,66,_OMC_LIT_RESOURCE_39_dir_data);

#define _OMC_LIT_RESOURCE_40_name_data "myrandom"
#define _OMC_LIT_RESOURCE_40_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_40_name,8,_OMC_LIT_RESOURCE_40_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_40_dir,66,_OMC_LIT_RESOURCE_40_dir_data);

#define _OMC_LIT_RESOURCE_41_name_data "returnedHome"
#define _OMC_LIT_RESOURCE_41_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_41_name,12,_OMC_LIT_RESOURCE_41_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_41_dir,66,_OMC_LIT_RESOURCE_41_dir_data);

#define _OMC_LIT_RESOURCE_42_name_data "setup_areas"
#define _OMC_LIT_RESOURCE_42_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_42_name,11,_OMC_LIT_RESOURCE_42_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_42_dir,66,_OMC_LIT_RESOURCE_42_dir_data);

#define _OMC_LIT_RESOURCE_43_name_data "setup_db"
#define _OMC_LIT_RESOURCE_43_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_43_name,8,_OMC_LIT_RESOURCE_43_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_43_dir,66,_OMC_LIT_RESOURCE_43_dir_data);

#define _OMC_LIT_RESOURCE_44_name_data "setup_drones"
#define _OMC_LIT_RESOURCE_44_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_44_name,12,_OMC_LIT_RESOURCE_44_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_44_dir,66,_OMC_LIT_RESOURCE_44_dir_data);

#define _OMC_LIT_RESOURCE_45_name_data "turn_off"
#define _OMC_LIT_RESOURCE_45_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_45_name,8,_OMC_LIT_RESOURCE_45_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_45_dir,66,_OMC_LIT_RESOURCE_45_dir_data);

#define _OMC_LIT_RESOURCE_46_name_data "update_drone_pos"
#define _OMC_LIT_RESOURCE_46_dir_data "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_46_name,16,_OMC_LIT_RESOURCE_46_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_46_dir,66,_OMC_LIT_RESOURCE_46_dir_data);

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
  data->modelData->modelDir = "/home/parallels/Desktop/Tesi/Drone/Variations/16-areas/source-code";
  data->modelData->modelGUID = "{31283af4-eb4e-45cf-a544-194139d60643}";
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
  
  data->modelData->nStates = 42;
  data->modelData->nVariablesReal = 1325;
  data->modelData->nDiscreteReal = 1066;
  data->modelData->nVariablesInteger = 133;
  data->modelData->nVariablesBoolean = 286;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 5034;
  data->modelData->nParametersInteger = 159;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 7;
  
  data->modelData->nAliasReal = 113;
  data->modelData->nAliasInteger = 7;
  data->modelData->nAliasBoolean = 1;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 1;
  data->modelData->nSamples = 23;
  data->modelData->nRelations = 1;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "System_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 29;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 3957;
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


