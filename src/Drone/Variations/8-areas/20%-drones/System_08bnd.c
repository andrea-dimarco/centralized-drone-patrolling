/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "System_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

OMC_DISABLE_OPT
int System_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void System_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 261
type: SIMPLE_ASSIGN
cc.choice = p.cc_choice
*/
OMC_DISABLE_OPT
static void System_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  (data->simulationInfo->realParameter[3]/* cc.choice PARAM */)  = (data->simulationInfo->realParameter[1072]/* p.cc_choice PARAM */) ;
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
cc.Tcc = p.Tcc
*/
OMC_DISABLE_OPT
static void System_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  (data->simulationInfo->realParameter[0]/* cc.Tcc PARAM */)  = (data->simulationInfo->realParameter[1017]/* p.Tcc PARAM */) ;
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
cc.comm_timeout = p.comm_timeout
*/
OMC_DISABLE_OPT
static void System_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  (data->simulationInfo->realParameter[4]/* cc.comm_timeout PARAM */)  = (data->simulationInfo->realParameter[1074]/* p.comm_timeout PARAM */) ;
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
cc.p_worst = p.p_worst
*/
OMC_DISABLE_OPT
static void System_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  (data->simulationInfo->realParameter[89]/* cc.p_worst PARAM */)  = (data->simulationInfo->realParameter[1093]/* p.p_worst PARAM */) ;
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
cc.arrival_timeout = p.arrival_timeout
*/
OMC_DISABLE_OPT
static void System_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  (data->simulationInfo->realParameter[2]/* cc.arrival_timeout PARAM */)  = (data->simulationInfo->realParameter[1069]/* p.arrival_timeout PARAM */) ;
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
cc.arrivalThreshold = p.arrivalThreshold
*/
OMC_DISABLE_OPT
static void System_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  (data->simulationInfo->realParameter[1]/* cc.arrivalThreshold PARAM */)  = (data->simulationInfo->realParameter[1068]/* p.arrivalThreshold PARAM */) ;
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
cc.p_recharge = p.p_recharge
*/
OMC_DISABLE_OPT
static void System_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  (data->simulationInfo->realParameter[88]/* cc.p_recharge PARAM */)  = (data->simulationInfo->realParameter[1092]/* p.p_recharge PARAM */) ;
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[8,6] = drone_to_cc[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  (data->simulationInfo->realParameter[869]/* drone_to_cc[2].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[903]/* drone_to_cc[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[8,5] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  (data->simulationInfo->realParameter[868]/* drone_to_cc[2].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[901]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[8,4] = drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  (data->simulationInfo->realParameter[867]/* drone_to_cc[2].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[902]/* drone_to_cc[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[8,3] = 0.5 * drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  (data->simulationInfo->realParameter[866]/* drone_to_cc[2].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[902]/* drone_to_cc[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[8,2] = drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  (data->simulationInfo->realParameter[865]/* drone_to_cc[2].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[901]/* drone_to_cc[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[8,1] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  (data->simulationInfo->realParameter[864]/* drone_to_cc[2].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[901]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[7,6] = drone_to_cc[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  (data->simulationInfo->realParameter[863]/* drone_to_cc[2].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[903]/* drone_to_cc[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[7,5] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  (data->simulationInfo->realParameter[862]/* drone_to_cc[2].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[901]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[7,4] = drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  (data->simulationInfo->realParameter[861]/* drone_to_cc[2].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[902]/* drone_to_cc[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[7,3] = 0.5 * drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  (data->simulationInfo->realParameter[860]/* drone_to_cc[2].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[902]/* drone_to_cc[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[7,2] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  (data->simulationInfo->realParameter[859]/* drone_to_cc[2].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[901]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[6,6] = drone_to_cc[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  (data->simulationInfo->realParameter[857]/* drone_to_cc[2].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[903]/* drone_to_cc[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[6,5] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  (data->simulationInfo->realParameter[856]/* drone_to_cc[2].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[901]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[6,4] = 0.5 * drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  (data->simulationInfo->realParameter[855]/* drone_to_cc[2].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[902]/* drone_to_cc[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[6,2] = drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  (data->simulationInfo->realParameter[853]/* drone_to_cc[2].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[901]/* drone_to_cc[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[6,1] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  (data->simulationInfo->realParameter[852]/* drone_to_cc[2].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[901]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[5,6] = drone_to_cc[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  (data->simulationInfo->realParameter[851]/* drone_to_cc[2].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[903]/* drone_to_cc[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[5,5] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  (data->simulationInfo->realParameter[850]/* drone_to_cc[2].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[901]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[5,4] = 0.5 * drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  (data->simulationInfo->realParameter[849]/* drone_to_cc[2].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[902]/* drone_to_cc[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[5,2] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  (data->simulationInfo->realParameter[847]/* drone_to_cc[2].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[901]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[4,6] = 0.5 * drone_to_cc[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  (data->simulationInfo->realParameter[845]/* drone_to_cc[2].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[903]/* drone_to_cc[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[4,4] = drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  (data->simulationInfo->realParameter[843]/* drone_to_cc[2].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[902]/* drone_to_cc[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[4,3] = 0.5 * drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  (data->simulationInfo->realParameter[842]/* drone_to_cc[2].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[902]/* drone_to_cc[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[4,2] = drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  (data->simulationInfo->realParameter[841]/* drone_to_cc[2].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[901]/* drone_to_cc[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[4,1] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  (data->simulationInfo->realParameter[840]/* drone_to_cc[2].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[901]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[3,6] = 0.5 * drone_to_cc[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  (data->simulationInfo->realParameter[839]/* drone_to_cc[2].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[903]/* drone_to_cc[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[3,4] = drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  (data->simulationInfo->realParameter[837]/* drone_to_cc[2].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[902]/* drone_to_cc[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[3,3] = 0.5 * drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  (data->simulationInfo->realParameter[836]/* drone_to_cc[2].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[902]/* drone_to_cc[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[3,2] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  (data->simulationInfo->realParameter[835]/* drone_to_cc[2].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[901]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[2,6] = 0.5 * drone_to_cc[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  (data->simulationInfo->realParameter[833]/* drone_to_cc[2].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[903]/* drone_to_cc[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[2,4] = 0.5 * drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  (data->simulationInfo->realParameter[831]/* drone_to_cc[2].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[902]/* drone_to_cc[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[2,2] = drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  (data->simulationInfo->realParameter[829]/* drone_to_cc[2].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[901]/* drone_to_cc[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[2,1] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  (data->simulationInfo->realParameter[828]/* drone_to_cc[2].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[901]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 301
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[1,6] = 0.5 * drone_to_cc[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  (data->simulationInfo->realParameter[827]/* drone_to_cc[2].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[903]/* drone_to_cc[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[1,4] = 0.5 * drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  (data->simulationInfo->realParameter[825]/* drone_to_cc[2].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[902]/* drone_to_cc[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[1,2] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  (data->simulationInfo->realParameter[823]/* drone_to_cc[2].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[901]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
drone_to_cc[2].p.capacity = 18000.0 * drone_to_cc[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  (data->simulationInfo->realParameter[877]/* drone_to_cc[2].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[931]/* drone_to_cc[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 305
type: SIMPLE_ASSIGN
drone_to_cc[2].p.rechargedThreshold = drone_to_cc[2].p.capacity * drone_to_cc[2].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  (data->simulationInfo->realParameter[927]/* drone_to_cc[2].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[877]/* drone_to_cc[2].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[925]/* drone_to_cc[2].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 306
type: SIMPLE_ASSIGN
drone_to_cc[2].p.dangerousBatteryLevel = drone_to_cc[2].p.capacity * drone_to_cc[2].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  (data->simulationInfo->realParameter[889]/* drone_to_cc[2].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[877]/* drone_to_cc[2].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[891]/* drone_to_cc[2].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 307
type: SIMPLE_ASSIGN
drone_to_cc[2].p.rechargeRate = 2.5 * drone_to_cc[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  (data->simulationInfo->realParameter[923]/* drone_to_cc[2].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[931]/* drone_to_cc[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 308
type: SIMPLE_ASSIGN
drone_to_cc[2].p.commDischarge = 5.0 * drone_to_cc[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  (data->simulationInfo->realParameter[881]/* drone_to_cc[2].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[931]/* drone_to_cc[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
drone_to_cc[2].p.batteryDischarge = drone_to_cc[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  (data->simulationInfo->realParameter[875]/* drone_to_cc[2].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[931]/* drone_to_cc[2].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
drone_to_cc[2].p.dangerRadius = 3.0 + drone_to_cc[2].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  (data->simulationInfo->realParameter[887]/* drone_to_cc[2].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[913]/* drone_to_cc[2].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,6] = drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  (data->simulationInfo->realParameter[821]/* drone_to_cc[1].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[900]/* drone_to_cc[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,5] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  (data->simulationInfo->realParameter[820]/* drone_to_cc[1].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[898]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,4] = drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  (data->simulationInfo->realParameter[819]/* drone_to_cc[1].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[899]/* drone_to_cc[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,3] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  (data->simulationInfo->realParameter[818]/* drone_to_cc[1].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[899]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,2] = drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  (data->simulationInfo->realParameter[817]/* drone_to_cc[1].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[898]/* drone_to_cc[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,1] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  (data->simulationInfo->realParameter[816]/* drone_to_cc[1].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[898]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 319
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[7,6] = drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  (data->simulationInfo->realParameter[815]/* drone_to_cc[1].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[900]/* drone_to_cc[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[7,5] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  (data->simulationInfo->realParameter[814]/* drone_to_cc[1].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[898]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[7,4] = drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  (data->simulationInfo->realParameter[813]/* drone_to_cc[1].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[899]/* drone_to_cc[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[7,3] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  (data->simulationInfo->realParameter[812]/* drone_to_cc[1].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[899]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[7,2] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  (data->simulationInfo->realParameter[811]/* drone_to_cc[1].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[898]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[6,6] = drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  (data->simulationInfo->realParameter[809]/* drone_to_cc[1].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[900]/* drone_to_cc[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[6,5] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  (data->simulationInfo->realParameter[808]/* drone_to_cc[1].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[898]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[6,4] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  (data->simulationInfo->realParameter[807]/* drone_to_cc[1].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[899]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[6,2] = drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  (data->simulationInfo->realParameter[805]/* drone_to_cc[1].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[898]/* drone_to_cc[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[6,1] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  (data->simulationInfo->realParameter[804]/* drone_to_cc[1].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[898]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[5,6] = drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  (data->simulationInfo->realParameter[803]/* drone_to_cc[1].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[900]/* drone_to_cc[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[5,5] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  (data->simulationInfo->realParameter[802]/* drone_to_cc[1].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[898]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[5,4] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  (data->simulationInfo->realParameter[801]/* drone_to_cc[1].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[899]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[5,2] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  (data->simulationInfo->realParameter[799]/* drone_to_cc[1].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[898]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[4,6] = 0.5 * drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  (data->simulationInfo->realParameter[797]/* drone_to_cc[1].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[900]/* drone_to_cc[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 334
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[4,4] = drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  (data->simulationInfo->realParameter[795]/* drone_to_cc[1].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[899]/* drone_to_cc[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[4,3] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  (data->simulationInfo->realParameter[794]/* drone_to_cc[1].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[899]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 336
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[4,2] = drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  (data->simulationInfo->realParameter[793]/* drone_to_cc[1].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[898]/* drone_to_cc[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 337
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[4,1] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  (data->simulationInfo->realParameter[792]/* drone_to_cc[1].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[898]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[3,6] = 0.5 * drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  (data->simulationInfo->realParameter[791]/* drone_to_cc[1].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[900]/* drone_to_cc[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[3,4] = drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  (data->simulationInfo->realParameter[789]/* drone_to_cc[1].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[899]/* drone_to_cc[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[3,3] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  (data->simulationInfo->realParameter[788]/* drone_to_cc[1].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[899]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[3,2] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  (data->simulationInfo->realParameter[787]/* drone_to_cc[1].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[898]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[2,6] = 0.5 * drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  (data->simulationInfo->realParameter[785]/* drone_to_cc[1].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[900]/* drone_to_cc[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[2,4] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  (data->simulationInfo->realParameter[783]/* drone_to_cc[1].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[899]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[2,2] = drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  (data->simulationInfo->realParameter[781]/* drone_to_cc[1].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[898]/* drone_to_cc[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[2,1] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  (data->simulationInfo->realParameter[780]/* drone_to_cc[1].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[898]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[1,6] = 0.5 * drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  (data->simulationInfo->realParameter[779]/* drone_to_cc[1].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[900]/* drone_to_cc[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[1,4] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  (data->simulationInfo->realParameter[777]/* drone_to_cc[1].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[899]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[1,2] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  (data->simulationInfo->realParameter[775]/* drone_to_cc[1].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[898]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
drone_to_cc[1].p.capacity = 18000.0 * drone_to_cc[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  (data->simulationInfo->realParameter[876]/* drone_to_cc[1].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[930]/* drone_to_cc[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
drone_to_cc[1].p.rechargedThreshold = drone_to_cc[1].p.capacity * drone_to_cc[1].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  (data->simulationInfo->realParameter[926]/* drone_to_cc[1].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[876]/* drone_to_cc[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[924]/* drone_to_cc[1].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
drone_to_cc[1].p.dangerousBatteryLevel = drone_to_cc[1].p.capacity * drone_to_cc[1].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  (data->simulationInfo->realParameter[888]/* drone_to_cc[1].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[876]/* drone_to_cc[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[890]/* drone_to_cc[1].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
drone_to_cc[1].p.rechargeRate = 2.5 * drone_to_cc[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  (data->simulationInfo->realParameter[922]/* drone_to_cc[1].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[930]/* drone_to_cc[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
drone_to_cc[1].p.commDischarge = 5.0 * drone_to_cc[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  (data->simulationInfo->realParameter[880]/* drone_to_cc[1].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[930]/* drone_to_cc[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
drone_to_cc[1].p.batteryDischarge = drone_to_cc[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  (data->simulationInfo->realParameter[874]/* drone_to_cc[1].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[930]/* drone_to_cc[1].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
drone_to_cc[1].p.dangerRadius = 3.0 + drone_to_cc[1].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  (data->simulationInfo->realParameter[886]/* drone_to_cc[1].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[912]/* drone_to_cc[1].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[8,6] = cc_to_drone[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  (data->simulationInfo->realParameter[191]/* cc_to_drone[2].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[225]/* cc_to_drone[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[8,5] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  (data->simulationInfo->realParameter[190]/* cc_to_drone[2].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[223]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[8,4] = cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  (data->simulationInfo->realParameter[189]/* cc_to_drone[2].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[224]/* cc_to_drone[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[8,3] = 0.5 * cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  (data->simulationInfo->realParameter[188]/* cc_to_drone[2].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[224]/* cc_to_drone[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[8,2] = cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  (data->simulationInfo->realParameter[187]/* cc_to_drone[2].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[223]/* cc_to_drone[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[8,1] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  (data->simulationInfo->realParameter[186]/* cc_to_drone[2].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[223]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[7,6] = cc_to_drone[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  (data->simulationInfo->realParameter[185]/* cc_to_drone[2].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[225]/* cc_to_drone[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[7,5] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  (data->simulationInfo->realParameter[184]/* cc_to_drone[2].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[223]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[7,4] = cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  (data->simulationInfo->realParameter[183]/* cc_to_drone[2].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[224]/* cc_to_drone[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[7,3] = 0.5 * cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  (data->simulationInfo->realParameter[182]/* cc_to_drone[2].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[224]/* cc_to_drone[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[7,2] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  (data->simulationInfo->realParameter[181]/* cc_to_drone[2].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[223]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[6,6] = cc_to_drone[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  (data->simulationInfo->realParameter[179]/* cc_to_drone[2].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[225]/* cc_to_drone[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[6,5] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  (data->simulationInfo->realParameter[178]/* cc_to_drone[2].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[223]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[6,4] = 0.5 * cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  (data->simulationInfo->realParameter[177]/* cc_to_drone[2].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[224]/* cc_to_drone[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[6,2] = cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  (data->simulationInfo->realParameter[175]/* cc_to_drone[2].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[223]/* cc_to_drone[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[6,1] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  (data->simulationInfo->realParameter[174]/* cc_to_drone[2].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[223]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[5,6] = cc_to_drone[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  (data->simulationInfo->realParameter[173]/* cc_to_drone[2].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[225]/* cc_to_drone[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[5,5] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  (data->simulationInfo->realParameter[172]/* cc_to_drone[2].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[223]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[5,4] = 0.5 * cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  (data->simulationInfo->realParameter[171]/* cc_to_drone[2].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[224]/* cc_to_drone[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[5,2] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  (data->simulationInfo->realParameter[169]/* cc_to_drone[2].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[223]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[4,6] = 0.5 * cc_to_drone[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  (data->simulationInfo->realParameter[167]/* cc_to_drone[2].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[225]/* cc_to_drone[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[4,4] = cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  (data->simulationInfo->realParameter[165]/* cc_to_drone[2].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[224]/* cc_to_drone[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[4,3] = 0.5 * cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  (data->simulationInfo->realParameter[164]/* cc_to_drone[2].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[224]/* cc_to_drone[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[4,2] = cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  (data->simulationInfo->realParameter[163]/* cc_to_drone[2].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[223]/* cc_to_drone[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[4,1] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  (data->simulationInfo->realParameter[162]/* cc_to_drone[2].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[223]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[3,6] = 0.5 * cc_to_drone[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  (data->simulationInfo->realParameter[161]/* cc_to_drone[2].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[225]/* cc_to_drone[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[3,4] = cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  (data->simulationInfo->realParameter[159]/* cc_to_drone[2].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[224]/* cc_to_drone[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[3,3] = 0.5 * cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  (data->simulationInfo->realParameter[158]/* cc_to_drone[2].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[224]/* cc_to_drone[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[3,2] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  (data->simulationInfo->realParameter[157]/* cc_to_drone[2].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[223]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[2,6] = 0.5 * cc_to_drone[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  (data->simulationInfo->realParameter[155]/* cc_to_drone[2].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[225]/* cc_to_drone[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[2,4] = 0.5 * cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  (data->simulationInfo->realParameter[153]/* cc_to_drone[2].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[224]/* cc_to_drone[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[2,2] = cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  (data->simulationInfo->realParameter[151]/* cc_to_drone[2].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[223]/* cc_to_drone[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[2,1] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  (data->simulationInfo->realParameter[150]/* cc_to_drone[2].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[223]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[1,6] = 0.5 * cc_to_drone[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  (data->simulationInfo->realParameter[149]/* cc_to_drone[2].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[225]/* cc_to_drone[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[1,4] = 0.5 * cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  (data->simulationInfo->realParameter[147]/* cc_to_drone[2].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[224]/* cc_to_drone[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[1,2] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  (data->simulationInfo->realParameter[145]/* cc_to_drone[2].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[223]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
cc_to_drone[2].p.capacity = 18000.0 * cc_to_drone[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  (data->simulationInfo->realParameter[199]/* cc_to_drone[2].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[253]/* cc_to_drone[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
cc_to_drone[2].p.rechargedThreshold = cc_to_drone[2].p.capacity * cc_to_drone[2].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  (data->simulationInfo->realParameter[249]/* cc_to_drone[2].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[199]/* cc_to_drone[2].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[247]/* cc_to_drone[2].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
cc_to_drone[2].p.dangerousBatteryLevel = cc_to_drone[2].p.capacity * cc_to_drone[2].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  (data->simulationInfo->realParameter[211]/* cc_to_drone[2].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[199]/* cc_to_drone[2].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[213]/* cc_to_drone[2].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
cc_to_drone[2].p.rechargeRate = 2.5 * cc_to_drone[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  (data->simulationInfo->realParameter[245]/* cc_to_drone[2].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[253]/* cc_to_drone[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
cc_to_drone[2].p.commDischarge = 5.0 * cc_to_drone[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  (data->simulationInfo->realParameter[203]/* cc_to_drone[2].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[253]/* cc_to_drone[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
cc_to_drone[2].p.batteryDischarge = cc_to_drone[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  (data->simulationInfo->realParameter[197]/* cc_to_drone[2].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[253]/* cc_to_drone[2].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
cc_to_drone[2].p.dangerRadius = 3.0 + cc_to_drone[2].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  (data->simulationInfo->realParameter[209]/* cc_to_drone[2].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[235]/* cc_to_drone[2].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,6] = cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  (data->simulationInfo->realParameter[143]/* cc_to_drone[1].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[222]/* cc_to_drone[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,5] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  (data->simulationInfo->realParameter[142]/* cc_to_drone[1].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[220]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,4] = cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  (data->simulationInfo->realParameter[141]/* cc_to_drone[1].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[221]/* cc_to_drone[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,3] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  (data->simulationInfo->realParameter[140]/* cc_to_drone[1].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[221]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,2] = cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  (data->simulationInfo->realParameter[139]/* cc_to_drone[1].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[220]/* cc_to_drone[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,1] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  (data->simulationInfo->realParameter[138]/* cc_to_drone[1].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[220]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[7,6] = cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  (data->simulationInfo->realParameter[137]/* cc_to_drone[1].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[222]/* cc_to_drone[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[7,5] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  (data->simulationInfo->realParameter[136]/* cc_to_drone[1].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[220]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[7,4] = cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  (data->simulationInfo->realParameter[135]/* cc_to_drone[1].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[221]/* cc_to_drone[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[7,3] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  (data->simulationInfo->realParameter[134]/* cc_to_drone[1].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[221]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[7,2] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  (data->simulationInfo->realParameter[133]/* cc_to_drone[1].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[220]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[6,6] = cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  (data->simulationInfo->realParameter[131]/* cc_to_drone[1].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[222]/* cc_to_drone[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[6,5] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  (data->simulationInfo->realParameter[130]/* cc_to_drone[1].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[220]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[6,4] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  (data->simulationInfo->realParameter[129]/* cc_to_drone[1].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[221]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[6,2] = cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  (data->simulationInfo->realParameter[127]/* cc_to_drone[1].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[220]/* cc_to_drone[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[6,1] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  (data->simulationInfo->realParameter[126]/* cc_to_drone[1].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[220]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[5,6] = cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  (data->simulationInfo->realParameter[125]/* cc_to_drone[1].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[222]/* cc_to_drone[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[5,5] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  (data->simulationInfo->realParameter[124]/* cc_to_drone[1].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[220]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[5,4] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  (data->simulationInfo->realParameter[123]/* cc_to_drone[1].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[221]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[5,2] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  (data->simulationInfo->realParameter[121]/* cc_to_drone[1].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[220]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[4,6] = 0.5 * cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  (data->simulationInfo->realParameter[119]/* cc_to_drone[1].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[222]/* cc_to_drone[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[4,4] = cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  (data->simulationInfo->realParameter[117]/* cc_to_drone[1].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[221]/* cc_to_drone[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[4,3] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  (data->simulationInfo->realParameter[116]/* cc_to_drone[1].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[221]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[4,2] = cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  (data->simulationInfo->realParameter[115]/* cc_to_drone[1].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[220]/* cc_to_drone[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[4,1] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  (data->simulationInfo->realParameter[114]/* cc_to_drone[1].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[220]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[3,6] = 0.5 * cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  (data->simulationInfo->realParameter[113]/* cc_to_drone[1].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[222]/* cc_to_drone[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[3,4] = cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  (data->simulationInfo->realParameter[111]/* cc_to_drone[1].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[221]/* cc_to_drone[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[3,3] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  (data->simulationInfo->realParameter[110]/* cc_to_drone[1].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[221]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[3,2] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  (data->simulationInfo->realParameter[109]/* cc_to_drone[1].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[220]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[2,6] = 0.5 * cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  (data->simulationInfo->realParameter[107]/* cc_to_drone[1].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[222]/* cc_to_drone[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[2,4] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  (data->simulationInfo->realParameter[105]/* cc_to_drone[1].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[221]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[2,2] = cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  (data->simulationInfo->realParameter[103]/* cc_to_drone[1].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[220]/* cc_to_drone[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[2,1] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  (data->simulationInfo->realParameter[102]/* cc_to_drone[1].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[220]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[1,6] = 0.5 * cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  (data->simulationInfo->realParameter[101]/* cc_to_drone[1].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[222]/* cc_to_drone[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[1,4] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  (data->simulationInfo->realParameter[99]/* cc_to_drone[1].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[221]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[1,2] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  (data->simulationInfo->realParameter[97]/* cc_to_drone[1].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[220]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
cc_to_drone[1].p.capacity = 18000.0 * cc_to_drone[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  (data->simulationInfo->realParameter[198]/* cc_to_drone[1].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[252]/* cc_to_drone[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
cc_to_drone[1].p.rechargedThreshold = cc_to_drone[1].p.capacity * cc_to_drone[1].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  (data->simulationInfo->realParameter[248]/* cc_to_drone[1].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[198]/* cc_to_drone[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[246]/* cc_to_drone[1].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
cc_to_drone[1].p.dangerousBatteryLevel = cc_to_drone[1].p.capacity * cc_to_drone[1].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  (data->simulationInfo->realParameter[210]/* cc_to_drone[1].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[198]/* cc_to_drone[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[212]/* cc_to_drone[1].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
cc_to_drone[1].p.rechargeRate = 2.5 * cc_to_drone[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  (data->simulationInfo->realParameter[244]/* cc_to_drone[1].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[252]/* cc_to_drone[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
cc_to_drone[1].p.commDischarge = 5.0 * cc_to_drone[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  (data->simulationInfo->realParameter[202]/* cc_to_drone[1].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[252]/* cc_to_drone[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
cc_to_drone[1].p.batteryDischarge = cc_to_drone[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  (data->simulationInfo->realParameter[196]/* cc_to_drone[1].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[252]/* cc_to_drone[1].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
cc_to_drone[1].p.dangerRadius = 3.0 + cc_to_drone[1].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  (data->simulationInfo->realParameter[208]/* cc_to_drone[1].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[234]/* cc_to_drone[1].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
m.p.areas[8,6] = m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  (data->simulationInfo->realParameter[984]/* m.p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[1001]/* m.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
m.p.areas[8,5] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  (data->simulationInfo->realParameter[983]/* m.p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[999]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
m.p.areas[8,4] = m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  (data->simulationInfo->realParameter[982]/* m.p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[1000]/* m.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
m.p.areas[8,3] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  (data->simulationInfo->realParameter[981]/* m.p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1000]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
m.p.areas[8,2] = m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  (data->simulationInfo->realParameter[980]/* m.p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[999]/* m.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
m.p.areas[8,1] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  (data->simulationInfo->realParameter[979]/* m.p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[999]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
m.p.areas[7,6] = m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  (data->simulationInfo->realParameter[978]/* m.p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[1001]/* m.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
m.p.areas[7,5] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  (data->simulationInfo->realParameter[977]/* m.p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[999]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
m.p.areas[7,4] = m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  (data->simulationInfo->realParameter[976]/* m.p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[1000]/* m.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
m.p.areas[7,3] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  (data->simulationInfo->realParameter[975]/* m.p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1000]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
m.p.areas[7,2] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  (data->simulationInfo->realParameter[974]/* m.p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[999]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
m.p.areas[6,6] = m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  (data->simulationInfo->realParameter[972]/* m.p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[1001]/* m.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
m.p.areas[6,5] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  (data->simulationInfo->realParameter[971]/* m.p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[999]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
m.p.areas[6,4] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  (data->simulationInfo->realParameter[970]/* m.p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1000]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
m.p.areas[6,2] = m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  (data->simulationInfo->realParameter[968]/* m.p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[999]/* m.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
m.p.areas[6,1] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  (data->simulationInfo->realParameter[967]/* m.p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[999]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
m.p.areas[5,6] = m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  (data->simulationInfo->realParameter[966]/* m.p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[1001]/* m.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
m.p.areas[5,5] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  (data->simulationInfo->realParameter[965]/* m.p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[999]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
m.p.areas[5,4] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  (data->simulationInfo->realParameter[964]/* m.p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1000]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
m.p.areas[5,2] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  (data->simulationInfo->realParameter[962]/* m.p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[999]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
m.p.areas[4,6] = 0.5 * m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  (data->simulationInfo->realParameter[960]/* m.p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1001]/* m.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
m.p.areas[4,4] = m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  (data->simulationInfo->realParameter[958]/* m.p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[1000]/* m.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
m.p.areas[4,3] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  (data->simulationInfo->realParameter[957]/* m.p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1000]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
m.p.areas[4,2] = m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  (data->simulationInfo->realParameter[956]/* m.p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[999]/* m.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
m.p.areas[4,1] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  (data->simulationInfo->realParameter[955]/* m.p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[999]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
m.p.areas[3,6] = 0.5 * m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  (data->simulationInfo->realParameter[954]/* m.p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1001]/* m.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
m.p.areas[3,4] = m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  (data->simulationInfo->realParameter[952]/* m.p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[1000]/* m.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
m.p.areas[3,3] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  (data->simulationInfo->realParameter[951]/* m.p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1000]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
m.p.areas[3,2] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  (data->simulationInfo->realParameter[950]/* m.p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[999]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
m.p.areas[2,6] = 0.5 * m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  (data->simulationInfo->realParameter[948]/* m.p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1001]/* m.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
m.p.areas[2,4] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  (data->simulationInfo->realParameter[946]/* m.p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1000]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
m.p.areas[2,2] = m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  (data->simulationInfo->realParameter[944]/* m.p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[999]/* m.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
m.p.areas[2,1] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  (data->simulationInfo->realParameter[943]/* m.p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[999]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 481
type: SIMPLE_ASSIGN
m.p.areas[1,6] = 0.5 * m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  (data->simulationInfo->realParameter[942]/* m.p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1001]/* m.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
m.p.areas[1,4] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  (data->simulationInfo->realParameter[940]/* m.p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1000]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
m.p.areas[1,2] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  (data->simulationInfo->realParameter[938]/* m.p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[999]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
m.p.capacity = 18000.0 * m.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  (data->simulationInfo->realParameter[988]/* m.p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[1015]/* m.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
m.p.rechargedThreshold = m.p.capacity * m.p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  (data->simulationInfo->realParameter[1013]/* m.p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[988]/* m.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1012]/* m.p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
m.p.dangerousBatteryLevel = m.p.capacity * m.p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  (data->simulationInfo->realParameter[994]/* m.p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[988]/* m.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[995]/* m.p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
m.p.rechargeRate = 2.5 * m.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  (data->simulationInfo->realParameter[1011]/* m.p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[1015]/* m.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
m.p.commDischarge = 5.0 * m.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  (data->simulationInfo->realParameter[990]/* m.p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[1015]/* m.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
m.p.batteryDischarge = m.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  (data->simulationInfo->realParameter[987]/* m.p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[1015]/* m.p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
m.p.dangerRadius = 3.0 + m.p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  (data->simulationInfo->realParameter[993]/* m.p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[1006]/* m.p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
cc.p.areas[8,6] = cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  (data->simulationInfo->realParameter[55]/* cc.p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
cc.p.areas[8,5] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  (data->simulationInfo->realParameter[54]/* cc.p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
cc.p.areas[8,4] = cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  (data->simulationInfo->realParameter[53]/* cc.p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
cc.p.areas[8,3] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  (data->simulationInfo->realParameter[52]/* cc.p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
cc.p.areas[8,2] = cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  (data->simulationInfo->realParameter[51]/* cc.p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
cc.p.areas[8,1] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  (data->simulationInfo->realParameter[50]/* cc.p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
cc.p.areas[7,6] = cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  (data->simulationInfo->realParameter[49]/* cc.p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
cc.p.areas[7,5] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  (data->simulationInfo->realParameter[48]/* cc.p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
cc.p.areas[7,4] = cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  (data->simulationInfo->realParameter[47]/* cc.p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
cc.p.areas[7,3] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  (data->simulationInfo->realParameter[46]/* cc.p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
cc.p.areas[7,2] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  (data->simulationInfo->realParameter[45]/* cc.p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
cc.p.areas[6,6] = cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  (data->simulationInfo->realParameter[43]/* cc.p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
cc.p.areas[6,5] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  (data->simulationInfo->realParameter[42]/* cc.p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
cc.p.areas[6,4] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  (data->simulationInfo->realParameter[41]/* cc.p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
cc.p.areas[6,2] = cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  (data->simulationInfo->realParameter[39]/* cc.p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
cc.p.areas[6,1] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  (data->simulationInfo->realParameter[38]/* cc.p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
cc.p.areas[5,6] = cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  (data->simulationInfo->realParameter[37]/* cc.p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
cc.p.areas[5,5] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  (data->simulationInfo->realParameter[36]/* cc.p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
cc.p.areas[5,4] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  (data->simulationInfo->realParameter[35]/* cc.p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
cc.p.areas[5,2] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  (data->simulationInfo->realParameter[33]/* cc.p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
cc.p.areas[4,6] = 0.5 * cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  (data->simulationInfo->realParameter[31]/* cc.p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
cc.p.areas[4,4] = cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  (data->simulationInfo->realParameter[29]/* cc.p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 514
type: SIMPLE_ASSIGN
cc.p.areas[4,3] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  (data->simulationInfo->realParameter[28]/* cc.p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 515
type: SIMPLE_ASSIGN
cc.p.areas[4,2] = cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  (data->simulationInfo->realParameter[27]/* cc.p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 516
type: SIMPLE_ASSIGN
cc.p.areas[4,1] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  (data->simulationInfo->realParameter[26]/* cc.p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 517
type: SIMPLE_ASSIGN
cc.p.areas[3,6] = 0.5 * cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  (data->simulationInfo->realParameter[25]/* cc.p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
cc.p.areas[3,4] = cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  (data->simulationInfo->realParameter[23]/* cc.p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 519
type: SIMPLE_ASSIGN
cc.p.areas[3,3] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  (data->simulationInfo->realParameter[22]/* cc.p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 520
type: SIMPLE_ASSIGN
cc.p.areas[3,2] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  (data->simulationInfo->realParameter[21]/* cc.p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 521
type: SIMPLE_ASSIGN
cc.p.areas[2,6] = 0.5 * cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  (data->simulationInfo->realParameter[19]/* cc.p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 522
type: SIMPLE_ASSIGN
cc.p.areas[2,4] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  (data->simulationInfo->realParameter[17]/* cc.p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 523
type: SIMPLE_ASSIGN
cc.p.areas[2,2] = cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  (data->simulationInfo->realParameter[15]/* cc.p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 524
type: SIMPLE_ASSIGN
cc.p.areas[2,1] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  (data->simulationInfo->realParameter[14]/* cc.p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 525
type: SIMPLE_ASSIGN
cc.p.areas[1,6] = 0.5 * cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  (data->simulationInfo->realParameter[13]/* cc.p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 526
type: SIMPLE_ASSIGN
cc.p.areas[1,4] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  (data->simulationInfo->realParameter[11]/* cc.p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 527
type: SIMPLE_ASSIGN
cc.p.areas[1,2] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  (data->simulationInfo->realParameter[9]/* cc.p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 529
type: SIMPLE_ASSIGN
cc.p.capacity = 18000.0 * cc.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  (data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 530
type: SIMPLE_ASSIGN
cc.p.rechargedThreshold = cc.p.capacity * cc.p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  (data->simulationInfo->realParameter[84]/* cc.p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[83]/* cc.p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 531
type: SIMPLE_ASSIGN
cc.p.dangerousBatteryLevel = cc.p.capacity * cc.p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  (data->simulationInfo->realParameter[65]/* cc.p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[66]/* cc.p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 532
type: SIMPLE_ASSIGN
cc.p.rechargeRate = 2.5 * cc.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  (data->simulationInfo->realParameter[82]/* cc.p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 533
type: SIMPLE_ASSIGN
cc.p.commDischarge = 5.0 * cc.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  (data->simulationInfo->realParameter[61]/* cc.p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 534
type: SIMPLE_ASSIGN
cc.p.batteryDischarge = cc.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  (data->simulationInfo->realParameter[58]/* cc.p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 535
type: SIMPLE_ASSIGN
cc.p.dangerRadius = 3.0 + cc.p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  (data->simulationInfo->realParameter[64]/* cc.p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[77]/* cc.p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 538
type: SIMPLE_ASSIGN
d[2].ctrl.kx2 = 2.0 * d[2].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  (data->simulationInfo->realParameter[259]/* d[2].ctrl.kx2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[269]/* d[2].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 539
type: SIMPLE_ASSIGN
d[2].ctrl.kx1 = -d[2].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  modelica_real tmp0;
  tmp0 = (data->simulationInfo->realParameter[269]/* d[2].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[257]/* d[2].ctrl.kx1 PARAM */)  = (-((tmp0 * tmp0)));
  TRACE_POP
}

/*
equation index: 540
type: SIMPLE_ASSIGN
d[2].ctrl.ky2 = 2.0 * d[2].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  (data->simulationInfo->realParameter[263]/* d[2].ctrl.ky2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[269]/* d[2].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 541
type: SIMPLE_ASSIGN
d[2].ctrl.ky1 = -d[2].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  modelica_real tmp1;
  tmp1 = (data->simulationInfo->realParameter[269]/* d[2].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[261]/* d[2].ctrl.ky1 PARAM */)  = (-((tmp1 * tmp1)));
  TRACE_POP
}

/*
equation index: 542
type: SIMPLE_ASSIGN
d[2].ctrl.kz2 = 2.0 * d[2].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  (data->simulationInfo->realParameter[267]/* d[2].ctrl.kz2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[269]/* d[2].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
d[2].ctrl.kz1 = -d[2].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  modelica_real tmp2;
  tmp2 = (data->simulationInfo->realParameter[269]/* d[2].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[265]/* d[2].ctrl.kz1 PARAM */)  = (-((tmp2 * tmp2)));
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[8,6] = d[2].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  (data->simulationInfo->realParameter[371]/* d[2].ctrl.prm.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[405]/* d[2].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[8,5] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  (data->simulationInfo->realParameter[370]/* d[2].ctrl.prm.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[403]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[8,4] = d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  (data->simulationInfo->realParameter[369]/* d[2].ctrl.prm.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[404]/* d[2].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[8,3] = 0.5 * d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  (data->simulationInfo->realParameter[368]/* d[2].ctrl.prm.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[404]/* d[2].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[8,2] = d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  (data->simulationInfo->realParameter[367]/* d[2].ctrl.prm.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[403]/* d[2].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[8,1] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  (data->simulationInfo->realParameter[366]/* d[2].ctrl.prm.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[403]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[7,6] = d[2].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  (data->simulationInfo->realParameter[365]/* d[2].ctrl.prm.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[405]/* d[2].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[7,5] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  (data->simulationInfo->realParameter[364]/* d[2].ctrl.prm.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[403]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[7,4] = d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  (data->simulationInfo->realParameter[363]/* d[2].ctrl.prm.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[404]/* d[2].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[7,3] = 0.5 * d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  (data->simulationInfo->realParameter[362]/* d[2].ctrl.prm.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[404]/* d[2].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[7,2] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  (data->simulationInfo->realParameter[361]/* d[2].ctrl.prm.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[403]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[6,6] = d[2].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  (data->simulationInfo->realParameter[359]/* d[2].ctrl.prm.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[405]/* d[2].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[6,5] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  (data->simulationInfo->realParameter[358]/* d[2].ctrl.prm.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[403]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[6,4] = 0.5 * d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  (data->simulationInfo->realParameter[357]/* d[2].ctrl.prm.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[404]/* d[2].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 558
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[6,2] = d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  (data->simulationInfo->realParameter[355]/* d[2].ctrl.prm.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[403]/* d[2].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[6,1] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  (data->simulationInfo->realParameter[354]/* d[2].ctrl.prm.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[403]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[5,6] = d[2].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  (data->simulationInfo->realParameter[353]/* d[2].ctrl.prm.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[405]/* d[2].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[5,5] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  (data->simulationInfo->realParameter[352]/* d[2].ctrl.prm.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[403]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[5,4] = 0.5 * d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  (data->simulationInfo->realParameter[351]/* d[2].ctrl.prm.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[404]/* d[2].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[5,2] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  (data->simulationInfo->realParameter[349]/* d[2].ctrl.prm.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[403]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 564
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[4,6] = 0.5 * d[2].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  (data->simulationInfo->realParameter[347]/* d[2].ctrl.prm.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[405]/* d[2].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[4,4] = d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  (data->simulationInfo->realParameter[345]/* d[2].ctrl.prm.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[404]/* d[2].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 566
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[4,3] = 0.5 * d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  (data->simulationInfo->realParameter[344]/* d[2].ctrl.prm.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[404]/* d[2].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 567
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[4,2] = d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  (data->simulationInfo->realParameter[343]/* d[2].ctrl.prm.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[403]/* d[2].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[4,1] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  (data->simulationInfo->realParameter[342]/* d[2].ctrl.prm.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[403]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[3,6] = 0.5 * d[2].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  (data->simulationInfo->realParameter[341]/* d[2].ctrl.prm.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[405]/* d[2].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 570
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[3,4] = d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  (data->simulationInfo->realParameter[339]/* d[2].ctrl.prm.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[404]/* d[2].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[3,3] = 0.5 * d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  (data->simulationInfo->realParameter[338]/* d[2].ctrl.prm.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[404]/* d[2].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 572
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[3,2] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  (data->simulationInfo->realParameter[337]/* d[2].ctrl.prm.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[403]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[2,6] = 0.5 * d[2].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  (data->simulationInfo->realParameter[335]/* d[2].ctrl.prm.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[405]/* d[2].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[2,4] = 0.5 * d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  (data->simulationInfo->realParameter[333]/* d[2].ctrl.prm.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[404]/* d[2].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[2,2] = d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  (data->simulationInfo->realParameter[331]/* d[2].ctrl.prm.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[403]/* d[2].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[2,1] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  (data->simulationInfo->realParameter[330]/* d[2].ctrl.prm.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[403]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[1,6] = 0.5 * d[2].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  (data->simulationInfo->realParameter[329]/* d[2].ctrl.prm.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[405]/* d[2].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[1,4] = 0.5 * d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  (data->simulationInfo->realParameter[327]/* d[2].ctrl.prm.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[404]/* d[2].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 579
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[1,2] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  (data->simulationInfo->realParameter[325]/* d[2].ctrl.prm.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[403]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 580
type: SIMPLE_ASSIGN
d[2].ctrl.prm.capacity = 18000.0 * d[2].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  (data->simulationInfo->realParameter[379]/* d[2].ctrl.prm.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[433]/* d[2].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
d[2].ctrl.prm.rechargedThreshold = d[2].ctrl.prm.capacity * d[2].ctrl.prm.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  (data->simulationInfo->realParameter[429]/* d[2].ctrl.prm.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[379]/* d[2].ctrl.prm.capacity PARAM */) ) * ((data->simulationInfo->realParameter[427]/* d[2].ctrl.prm.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 582
type: SIMPLE_ASSIGN
d[2].ctrl.prm.dangerousBatteryLevel = d[2].ctrl.prm.capacity * d[2].ctrl.prm.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  (data->simulationInfo->realParameter[391]/* d[2].ctrl.prm.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[379]/* d[2].ctrl.prm.capacity PARAM */) ) * ((data->simulationInfo->realParameter[393]/* d[2].ctrl.prm.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 583
type: SIMPLE_ASSIGN
d[2].ctrl.prm.rechargeRate = 2.5 * d[2].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  (data->simulationInfo->realParameter[425]/* d[2].ctrl.prm.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[433]/* d[2].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 584
type: SIMPLE_ASSIGN
d[2].ctrl.prm.commDischarge = 5.0 * d[2].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  (data->simulationInfo->realParameter[383]/* d[2].ctrl.prm.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[433]/* d[2].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
d[2].ctrl.prm.batteryDischarge = d[2].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  (data->simulationInfo->realParameter[377]/* d[2].ctrl.prm.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[433]/* d[2].ctrl.prm.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
d[2].ctrl.prm.dangerRadius = 3.0 + d[2].ctrl.prm.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  (data->simulationInfo->realParameter[389]/* d[2].ctrl.prm.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[415]/* d[2].ctrl.prm.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 587
type: SIMPLE_ASSIGN
d[2].d.p.areas[8,6] = d[2].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  (data->simulationInfo->realParameter[537]/* d[2].d.p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[571]/* d[2].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 588
type: SIMPLE_ASSIGN
d[2].d.p.areas[8,5] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  (data->simulationInfo->realParameter[536]/* d[2].d.p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[569]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 589
type: SIMPLE_ASSIGN
d[2].d.p.areas[8,4] = d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  (data->simulationInfo->realParameter[535]/* d[2].d.p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[570]/* d[2].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 590
type: SIMPLE_ASSIGN
d[2].d.p.areas[8,3] = 0.5 * d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  (data->simulationInfo->realParameter[534]/* d[2].d.p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[570]/* d[2].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 591
type: SIMPLE_ASSIGN
d[2].d.p.areas[8,2] = d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  (data->simulationInfo->realParameter[533]/* d[2].d.p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[569]/* d[2].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 592
type: SIMPLE_ASSIGN
d[2].d.p.areas[8,1] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  (data->simulationInfo->realParameter[532]/* d[2].d.p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[569]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 593
type: SIMPLE_ASSIGN
d[2].d.p.areas[7,6] = d[2].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  (data->simulationInfo->realParameter[531]/* d[2].d.p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[571]/* d[2].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 594
type: SIMPLE_ASSIGN
d[2].d.p.areas[7,5] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  (data->simulationInfo->realParameter[530]/* d[2].d.p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[569]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 595
type: SIMPLE_ASSIGN
d[2].d.p.areas[7,4] = d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  (data->simulationInfo->realParameter[529]/* d[2].d.p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[570]/* d[2].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 596
type: SIMPLE_ASSIGN
d[2].d.p.areas[7,3] = 0.5 * d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  (data->simulationInfo->realParameter[528]/* d[2].d.p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[570]/* d[2].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
d[2].d.p.areas[7,2] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  (data->simulationInfo->realParameter[527]/* d[2].d.p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[569]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 598
type: SIMPLE_ASSIGN
d[2].d.p.areas[6,6] = d[2].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  (data->simulationInfo->realParameter[525]/* d[2].d.p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[571]/* d[2].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 599
type: SIMPLE_ASSIGN
d[2].d.p.areas[6,5] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,599};
  (data->simulationInfo->realParameter[524]/* d[2].d.p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[569]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 600
type: SIMPLE_ASSIGN
d[2].d.p.areas[6,4] = 0.5 * d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  (data->simulationInfo->realParameter[523]/* d[2].d.p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[570]/* d[2].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
d[2].d.p.areas[6,2] = d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  (data->simulationInfo->realParameter[521]/* d[2].d.p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[569]/* d[2].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 602
type: SIMPLE_ASSIGN
d[2].d.p.areas[6,1] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  (data->simulationInfo->realParameter[520]/* d[2].d.p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[569]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 603
type: SIMPLE_ASSIGN
d[2].d.p.areas[5,6] = d[2].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  (data->simulationInfo->realParameter[519]/* d[2].d.p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[571]/* d[2].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 604
type: SIMPLE_ASSIGN
d[2].d.p.areas[5,5] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  (data->simulationInfo->realParameter[518]/* d[2].d.p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[569]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 605
type: SIMPLE_ASSIGN
d[2].d.p.areas[5,4] = 0.5 * d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  (data->simulationInfo->realParameter[517]/* d[2].d.p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[570]/* d[2].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 606
type: SIMPLE_ASSIGN
d[2].d.p.areas[5,2] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  (data->simulationInfo->realParameter[515]/* d[2].d.p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[569]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 607
type: SIMPLE_ASSIGN
d[2].d.p.areas[4,6] = 0.5 * d[2].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  (data->simulationInfo->realParameter[513]/* d[2].d.p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[571]/* d[2].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 608
type: SIMPLE_ASSIGN
d[2].d.p.areas[4,4] = d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  (data->simulationInfo->realParameter[511]/* d[2].d.p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[570]/* d[2].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 609
type: SIMPLE_ASSIGN
d[2].d.p.areas[4,3] = 0.5 * d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  (data->simulationInfo->realParameter[510]/* d[2].d.p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[570]/* d[2].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 610
type: SIMPLE_ASSIGN
d[2].d.p.areas[4,2] = d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  (data->simulationInfo->realParameter[509]/* d[2].d.p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[569]/* d[2].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 611
type: SIMPLE_ASSIGN
d[2].d.p.areas[4,1] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  (data->simulationInfo->realParameter[508]/* d[2].d.p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[569]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 612
type: SIMPLE_ASSIGN
d[2].d.p.areas[3,6] = 0.5 * d[2].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  (data->simulationInfo->realParameter[507]/* d[2].d.p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[571]/* d[2].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 613
type: SIMPLE_ASSIGN
d[2].d.p.areas[3,4] = d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  (data->simulationInfo->realParameter[505]/* d[2].d.p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[570]/* d[2].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 614
type: SIMPLE_ASSIGN
d[2].d.p.areas[3,3] = 0.5 * d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  (data->simulationInfo->realParameter[504]/* d[2].d.p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[570]/* d[2].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 615
type: SIMPLE_ASSIGN
d[2].d.p.areas[3,2] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  (data->simulationInfo->realParameter[503]/* d[2].d.p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[569]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 616
type: SIMPLE_ASSIGN
d[2].d.p.areas[2,6] = 0.5 * d[2].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  (data->simulationInfo->realParameter[501]/* d[2].d.p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[571]/* d[2].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 617
type: SIMPLE_ASSIGN
d[2].d.p.areas[2,4] = 0.5 * d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  (data->simulationInfo->realParameter[499]/* d[2].d.p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[570]/* d[2].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 618
type: SIMPLE_ASSIGN
d[2].d.p.areas[2,2] = d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  (data->simulationInfo->realParameter[497]/* d[2].d.p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[569]/* d[2].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 619
type: SIMPLE_ASSIGN
d[2].d.p.areas[2,1] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  (data->simulationInfo->realParameter[496]/* d[2].d.p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[569]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 620
type: SIMPLE_ASSIGN
d[2].d.p.areas[1,6] = 0.5 * d[2].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  (data->simulationInfo->realParameter[495]/* d[2].d.p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[571]/* d[2].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 621
type: SIMPLE_ASSIGN
d[2].d.p.areas[1,4] = 0.5 * d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  (data->simulationInfo->realParameter[493]/* d[2].d.p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[570]/* d[2].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 622
type: SIMPLE_ASSIGN
d[2].d.p.areas[1,2] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  (data->simulationInfo->realParameter[491]/* d[2].d.p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[569]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 623
type: SIMPLE_ASSIGN
d[2].d.p.capacity = 18000.0 * d[2].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  (data->simulationInfo->realParameter[545]/* d[2].d.p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[599]/* d[2].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 624
type: SIMPLE_ASSIGN
d[2].d.p.rechargedThreshold = d[2].d.p.capacity * d[2].d.p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  (data->simulationInfo->realParameter[595]/* d[2].d.p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[545]/* d[2].d.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[593]/* d[2].d.p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 625
type: SIMPLE_ASSIGN
d[2].d.p.dangerousBatteryLevel = d[2].d.p.capacity * d[2].d.p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  (data->simulationInfo->realParameter[557]/* d[2].d.p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[545]/* d[2].d.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[559]/* d[2].d.p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 626
type: SIMPLE_ASSIGN
d[2].d.p.rechargeRate = 2.5 * d[2].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  (data->simulationInfo->realParameter[591]/* d[2].d.p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[599]/* d[2].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 627
type: SIMPLE_ASSIGN
d[2].d.p.commDischarge = 5.0 * d[2].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  (data->simulationInfo->realParameter[549]/* d[2].d.p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[599]/* d[2].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 628
type: SIMPLE_ASSIGN
d[2].d.p.batteryDischarge = d[2].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  (data->simulationInfo->realParameter[543]/* d[2].d.p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[599]/* d[2].d.p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 629
type: SIMPLE_ASSIGN
d[2].d.p.dangerRadius = 3.0 + d[2].d.p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  (data->simulationInfo->realParameter[555]/* d[2].d.p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[581]/* d[2].d.p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 630
type: SIMPLE_ASSIGN
d[2].p.areas[8,6] = d[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  (data->simulationInfo->realParameter[703]/* d[2].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[737]/* d[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 631
type: SIMPLE_ASSIGN
d[2].p.areas[8,5] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  (data->simulationInfo->realParameter[702]/* d[2].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[735]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 632
type: SIMPLE_ASSIGN
d[2].p.areas[8,4] = d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  (data->simulationInfo->realParameter[701]/* d[2].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[736]/* d[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 633
type: SIMPLE_ASSIGN
d[2].p.areas[8,3] = 0.5 * d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  (data->simulationInfo->realParameter[700]/* d[2].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[736]/* d[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 634
type: SIMPLE_ASSIGN
d[2].p.areas[8,2] = d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  (data->simulationInfo->realParameter[699]/* d[2].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[735]/* d[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 635
type: SIMPLE_ASSIGN
d[2].p.areas[8,1] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  (data->simulationInfo->realParameter[698]/* d[2].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[735]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 636
type: SIMPLE_ASSIGN
d[2].p.areas[7,6] = d[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  (data->simulationInfo->realParameter[697]/* d[2].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[737]/* d[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 637
type: SIMPLE_ASSIGN
d[2].p.areas[7,5] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  (data->simulationInfo->realParameter[696]/* d[2].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[735]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 638
type: SIMPLE_ASSIGN
d[2].p.areas[7,4] = d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  (data->simulationInfo->realParameter[695]/* d[2].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[736]/* d[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 639
type: SIMPLE_ASSIGN
d[2].p.areas[7,3] = 0.5 * d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  (data->simulationInfo->realParameter[694]/* d[2].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[736]/* d[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 640
type: SIMPLE_ASSIGN
d[2].p.areas[7,2] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  (data->simulationInfo->realParameter[693]/* d[2].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[735]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 641
type: SIMPLE_ASSIGN
d[2].p.areas[6,6] = d[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  (data->simulationInfo->realParameter[691]/* d[2].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[737]/* d[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 642
type: SIMPLE_ASSIGN
d[2].p.areas[6,5] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  (data->simulationInfo->realParameter[690]/* d[2].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[735]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 643
type: SIMPLE_ASSIGN
d[2].p.areas[6,4] = 0.5 * d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  (data->simulationInfo->realParameter[689]/* d[2].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[736]/* d[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 644
type: SIMPLE_ASSIGN
d[2].p.areas[6,2] = d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  (data->simulationInfo->realParameter[687]/* d[2].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[735]/* d[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 645
type: SIMPLE_ASSIGN
d[2].p.areas[6,1] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  (data->simulationInfo->realParameter[686]/* d[2].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[735]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 646
type: SIMPLE_ASSIGN
d[2].p.areas[5,6] = d[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  (data->simulationInfo->realParameter[685]/* d[2].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[737]/* d[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 647
type: SIMPLE_ASSIGN
d[2].p.areas[5,5] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  (data->simulationInfo->realParameter[684]/* d[2].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[735]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 648
type: SIMPLE_ASSIGN
d[2].p.areas[5,4] = 0.5 * d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  (data->simulationInfo->realParameter[683]/* d[2].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[736]/* d[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 649
type: SIMPLE_ASSIGN
d[2].p.areas[5,2] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  (data->simulationInfo->realParameter[681]/* d[2].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[735]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 650
type: SIMPLE_ASSIGN
d[2].p.areas[4,6] = 0.5 * d[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  (data->simulationInfo->realParameter[679]/* d[2].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[737]/* d[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 651
type: SIMPLE_ASSIGN
d[2].p.areas[4,4] = d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  (data->simulationInfo->realParameter[677]/* d[2].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[736]/* d[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 652
type: SIMPLE_ASSIGN
d[2].p.areas[4,3] = 0.5 * d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  (data->simulationInfo->realParameter[676]/* d[2].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[736]/* d[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 653
type: SIMPLE_ASSIGN
d[2].p.areas[4,2] = d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  (data->simulationInfo->realParameter[675]/* d[2].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[735]/* d[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 654
type: SIMPLE_ASSIGN
d[2].p.areas[4,1] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  (data->simulationInfo->realParameter[674]/* d[2].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[735]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 655
type: SIMPLE_ASSIGN
d[2].p.areas[3,6] = 0.5 * d[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  (data->simulationInfo->realParameter[673]/* d[2].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[737]/* d[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 656
type: SIMPLE_ASSIGN
d[2].p.areas[3,4] = d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  (data->simulationInfo->realParameter[671]/* d[2].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[736]/* d[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 657
type: SIMPLE_ASSIGN
d[2].p.areas[3,3] = 0.5 * d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  (data->simulationInfo->realParameter[670]/* d[2].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[736]/* d[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 658
type: SIMPLE_ASSIGN
d[2].p.areas[3,2] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  (data->simulationInfo->realParameter[669]/* d[2].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[735]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 659
type: SIMPLE_ASSIGN
d[2].p.areas[2,6] = 0.5 * d[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  (data->simulationInfo->realParameter[667]/* d[2].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[737]/* d[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 660
type: SIMPLE_ASSIGN
d[2].p.areas[2,4] = 0.5 * d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  (data->simulationInfo->realParameter[665]/* d[2].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[736]/* d[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 661
type: SIMPLE_ASSIGN
d[2].p.areas[2,2] = d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  (data->simulationInfo->realParameter[663]/* d[2].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[735]/* d[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 662
type: SIMPLE_ASSIGN
d[2].p.areas[2,1] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  (data->simulationInfo->realParameter[662]/* d[2].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[735]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 663
type: SIMPLE_ASSIGN
d[2].p.areas[1,6] = 0.5 * d[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  (data->simulationInfo->realParameter[661]/* d[2].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[737]/* d[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 664
type: SIMPLE_ASSIGN
d[2].p.areas[1,4] = 0.5 * d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  (data->simulationInfo->realParameter[659]/* d[2].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[736]/* d[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 665
type: SIMPLE_ASSIGN
d[2].p.areas[1,2] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  (data->simulationInfo->realParameter[657]/* d[2].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[735]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 666
type: SIMPLE_ASSIGN
d[2].p.capacity = 18000.0 * d[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  (data->simulationInfo->realParameter[711]/* d[2].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[765]/* d[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 667
type: SIMPLE_ASSIGN
d[2].p.rechargedThreshold = d[2].p.capacity * d[2].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  (data->simulationInfo->realParameter[761]/* d[2].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[711]/* d[2].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[759]/* d[2].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 668
type: SIMPLE_ASSIGN
d[2].p.dangerousBatteryLevel = d[2].p.capacity * d[2].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  (data->simulationInfo->realParameter[723]/* d[2].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[711]/* d[2].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[725]/* d[2].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 669
type: SIMPLE_ASSIGN
d[2].p.rechargeRate = 2.5 * d[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  (data->simulationInfo->realParameter[757]/* d[2].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[765]/* d[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 670
type: SIMPLE_ASSIGN
d[2].p.commDischarge = 5.0 * d[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  (data->simulationInfo->realParameter[715]/* d[2].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[765]/* d[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 671
type: SIMPLE_ASSIGN
d[2].p.batteryDischarge = d[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  (data->simulationInfo->realParameter[709]/* d[2].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[765]/* d[2].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 672
type: SIMPLE_ASSIGN
d[2].p.dangerRadius = 3.0 + d[2].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  (data->simulationInfo->realParameter[721]/* d[2].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[747]/* d[2].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 674
type: SIMPLE_ASSIGN
d[1].ctrl.kx2 = 2.0 * d[1].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  (data->simulationInfo->realParameter[258]/* d[1].ctrl.kx2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[268]/* d[1].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 675
type: SIMPLE_ASSIGN
d[1].ctrl.kx1 = -d[1].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  modelica_real tmp3;
  tmp3 = (data->simulationInfo->realParameter[268]/* d[1].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[256]/* d[1].ctrl.kx1 PARAM */)  = (-((tmp3 * tmp3)));
  TRACE_POP
}

/*
equation index: 676
type: SIMPLE_ASSIGN
d[1].ctrl.ky2 = 2.0 * d[1].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  (data->simulationInfo->realParameter[262]/* d[1].ctrl.ky2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[268]/* d[1].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 677
type: SIMPLE_ASSIGN
d[1].ctrl.ky1 = -d[1].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  modelica_real tmp4;
  tmp4 = (data->simulationInfo->realParameter[268]/* d[1].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[260]/* d[1].ctrl.ky1 PARAM */)  = (-((tmp4 * tmp4)));
  TRACE_POP
}

/*
equation index: 678
type: SIMPLE_ASSIGN
d[1].ctrl.kz2 = 2.0 * d[1].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  (data->simulationInfo->realParameter[266]/* d[1].ctrl.kz2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[268]/* d[1].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 679
type: SIMPLE_ASSIGN
d[1].ctrl.kz1 = -d[1].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  modelica_real tmp5;
  tmp5 = (data->simulationInfo->realParameter[268]/* d[1].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[264]/* d[1].ctrl.kz1 PARAM */)  = (-((tmp5 * tmp5)));
  TRACE_POP
}

/*
equation index: 680
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,6] = d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  (data->simulationInfo->realParameter[323]/* d[1].ctrl.prm.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[402]/* d[1].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 681
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,5] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  (data->simulationInfo->realParameter[322]/* d[1].ctrl.prm.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[400]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 682
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,4] = d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  (data->simulationInfo->realParameter[321]/* d[1].ctrl.prm.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[401]/* d[1].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 683
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,3] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  (data->simulationInfo->realParameter[320]/* d[1].ctrl.prm.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[401]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 684
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,2] = d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  (data->simulationInfo->realParameter[319]/* d[1].ctrl.prm.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[400]/* d[1].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 685
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,1] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  (data->simulationInfo->realParameter[318]/* d[1].ctrl.prm.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[400]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 686
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[7,6] = d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  (data->simulationInfo->realParameter[317]/* d[1].ctrl.prm.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[402]/* d[1].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 687
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[7,5] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  (data->simulationInfo->realParameter[316]/* d[1].ctrl.prm.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[400]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 688
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[7,4] = d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  (data->simulationInfo->realParameter[315]/* d[1].ctrl.prm.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[401]/* d[1].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 689
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[7,3] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  (data->simulationInfo->realParameter[314]/* d[1].ctrl.prm.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[401]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 690
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[7,2] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  (data->simulationInfo->realParameter[313]/* d[1].ctrl.prm.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[400]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 691
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[6,6] = d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  (data->simulationInfo->realParameter[311]/* d[1].ctrl.prm.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[402]/* d[1].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 692
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[6,5] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  (data->simulationInfo->realParameter[310]/* d[1].ctrl.prm.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[400]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 693
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[6,4] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  (data->simulationInfo->realParameter[309]/* d[1].ctrl.prm.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[401]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 694
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[6,2] = d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  (data->simulationInfo->realParameter[307]/* d[1].ctrl.prm.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[400]/* d[1].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 695
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[6,1] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  (data->simulationInfo->realParameter[306]/* d[1].ctrl.prm.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[400]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 696
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[5,6] = d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  (data->simulationInfo->realParameter[305]/* d[1].ctrl.prm.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[402]/* d[1].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 697
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[5,5] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  (data->simulationInfo->realParameter[304]/* d[1].ctrl.prm.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[400]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 698
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[5,4] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  (data->simulationInfo->realParameter[303]/* d[1].ctrl.prm.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[401]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 699
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[5,2] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  (data->simulationInfo->realParameter[301]/* d[1].ctrl.prm.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[400]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 700
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[4,6] = 0.5 * d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
  (data->simulationInfo->realParameter[299]/* d[1].ctrl.prm.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[402]/* d[1].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 701
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[4,4] = d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,701};
  (data->simulationInfo->realParameter[297]/* d[1].ctrl.prm.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[401]/* d[1].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 702
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[4,3] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,702};
  (data->simulationInfo->realParameter[296]/* d[1].ctrl.prm.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[401]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 703
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[4,2] = d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  (data->simulationInfo->realParameter[295]/* d[1].ctrl.prm.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[400]/* d[1].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 704
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[4,1] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  (data->simulationInfo->realParameter[294]/* d[1].ctrl.prm.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[400]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 705
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[3,6] = 0.5 * d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,705};
  (data->simulationInfo->realParameter[293]/* d[1].ctrl.prm.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[402]/* d[1].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 706
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[3,4] = d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  (data->simulationInfo->realParameter[291]/* d[1].ctrl.prm.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[401]/* d[1].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 707
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[3,3] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  (data->simulationInfo->realParameter[290]/* d[1].ctrl.prm.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[401]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 708
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[3,2] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  (data->simulationInfo->realParameter[289]/* d[1].ctrl.prm.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[400]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 709
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[2,6] = 0.5 * d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,709};
  (data->simulationInfo->realParameter[287]/* d[1].ctrl.prm.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[402]/* d[1].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 710
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[2,4] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,710};
  (data->simulationInfo->realParameter[285]/* d[1].ctrl.prm.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[401]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 711
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[2,2] = d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,711};
  (data->simulationInfo->realParameter[283]/* d[1].ctrl.prm.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[400]/* d[1].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 712
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[2,1] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  (data->simulationInfo->realParameter[282]/* d[1].ctrl.prm.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[400]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 713
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[1,6] = 0.5 * d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  (data->simulationInfo->realParameter[281]/* d[1].ctrl.prm.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[402]/* d[1].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 714
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[1,4] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,714};
  (data->simulationInfo->realParameter[279]/* d[1].ctrl.prm.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[401]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 715
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[1,2] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,715};
  (data->simulationInfo->realParameter[277]/* d[1].ctrl.prm.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[400]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 716
type: SIMPLE_ASSIGN
d[1].ctrl.prm.capacity = 18000.0 * d[1].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  (data->simulationInfo->realParameter[378]/* d[1].ctrl.prm.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[432]/* d[1].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 717
type: SIMPLE_ASSIGN
d[1].ctrl.prm.rechargedThreshold = d[1].ctrl.prm.capacity * d[1].ctrl.prm.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  (data->simulationInfo->realParameter[428]/* d[1].ctrl.prm.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[378]/* d[1].ctrl.prm.capacity PARAM */) ) * ((data->simulationInfo->realParameter[426]/* d[1].ctrl.prm.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 718
type: SIMPLE_ASSIGN
d[1].ctrl.prm.dangerousBatteryLevel = d[1].ctrl.prm.capacity * d[1].ctrl.prm.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  (data->simulationInfo->realParameter[390]/* d[1].ctrl.prm.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[378]/* d[1].ctrl.prm.capacity PARAM */) ) * ((data->simulationInfo->realParameter[392]/* d[1].ctrl.prm.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 719
type: SIMPLE_ASSIGN
d[1].ctrl.prm.rechargeRate = 2.5 * d[1].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  (data->simulationInfo->realParameter[424]/* d[1].ctrl.prm.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[432]/* d[1].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 720
type: SIMPLE_ASSIGN
d[1].ctrl.prm.commDischarge = 5.0 * d[1].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  (data->simulationInfo->realParameter[382]/* d[1].ctrl.prm.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[432]/* d[1].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 721
type: SIMPLE_ASSIGN
d[1].ctrl.prm.batteryDischarge = d[1].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  (data->simulationInfo->realParameter[376]/* d[1].ctrl.prm.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[432]/* d[1].ctrl.prm.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 722
type: SIMPLE_ASSIGN
d[1].ctrl.prm.dangerRadius = 3.0 + d[1].ctrl.prm.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  (data->simulationInfo->realParameter[388]/* d[1].ctrl.prm.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[414]/* d[1].ctrl.prm.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 723
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,6] = d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  (data->simulationInfo->realParameter[489]/* d[1].d.p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[568]/* d[1].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 724
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,5] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,724};
  (data->simulationInfo->realParameter[488]/* d[1].d.p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[566]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 725
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,4] = d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,725};
  (data->simulationInfo->realParameter[487]/* d[1].d.p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[567]/* d[1].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 726
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,3] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,726};
  (data->simulationInfo->realParameter[486]/* d[1].d.p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[567]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 727
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,2] = d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,727};
  (data->simulationInfo->realParameter[485]/* d[1].d.p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[566]/* d[1].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 728
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,1] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,728};
  (data->simulationInfo->realParameter[484]/* d[1].d.p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[566]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 729
type: SIMPLE_ASSIGN
d[1].d.p.areas[7,6] = d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  (data->simulationInfo->realParameter[483]/* d[1].d.p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[568]/* d[1].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 730
type: SIMPLE_ASSIGN
d[1].d.p.areas[7,5] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  (data->simulationInfo->realParameter[482]/* d[1].d.p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[566]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 731
type: SIMPLE_ASSIGN
d[1].d.p.areas[7,4] = d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  (data->simulationInfo->realParameter[481]/* d[1].d.p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[567]/* d[1].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 732
type: SIMPLE_ASSIGN
d[1].d.p.areas[7,3] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  (data->simulationInfo->realParameter[480]/* d[1].d.p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[567]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 733
type: SIMPLE_ASSIGN
d[1].d.p.areas[7,2] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  (data->simulationInfo->realParameter[479]/* d[1].d.p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[566]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 734
type: SIMPLE_ASSIGN
d[1].d.p.areas[6,6] = d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  (data->simulationInfo->realParameter[477]/* d[1].d.p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[568]/* d[1].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 735
type: SIMPLE_ASSIGN
d[1].d.p.areas[6,5] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  (data->simulationInfo->realParameter[476]/* d[1].d.p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[566]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 736
type: SIMPLE_ASSIGN
d[1].d.p.areas[6,4] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  (data->simulationInfo->realParameter[475]/* d[1].d.p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[567]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 737
type: SIMPLE_ASSIGN
d[1].d.p.areas[6,2] = d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  (data->simulationInfo->realParameter[473]/* d[1].d.p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[566]/* d[1].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 738
type: SIMPLE_ASSIGN
d[1].d.p.areas[6,1] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  (data->simulationInfo->realParameter[472]/* d[1].d.p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[566]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 739
type: SIMPLE_ASSIGN
d[1].d.p.areas[5,6] = d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  (data->simulationInfo->realParameter[471]/* d[1].d.p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[568]/* d[1].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 740
type: SIMPLE_ASSIGN
d[1].d.p.areas[5,5] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  (data->simulationInfo->realParameter[470]/* d[1].d.p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[566]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 741
type: SIMPLE_ASSIGN
d[1].d.p.areas[5,4] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  (data->simulationInfo->realParameter[469]/* d[1].d.p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[567]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 742
type: SIMPLE_ASSIGN
d[1].d.p.areas[5,2] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  (data->simulationInfo->realParameter[467]/* d[1].d.p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[566]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 743
type: SIMPLE_ASSIGN
d[1].d.p.areas[4,6] = 0.5 * d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  (data->simulationInfo->realParameter[465]/* d[1].d.p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[568]/* d[1].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 744
type: SIMPLE_ASSIGN
d[1].d.p.areas[4,4] = d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  (data->simulationInfo->realParameter[463]/* d[1].d.p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[567]/* d[1].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 745
type: SIMPLE_ASSIGN
d[1].d.p.areas[4,3] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  (data->simulationInfo->realParameter[462]/* d[1].d.p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[567]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 746
type: SIMPLE_ASSIGN
d[1].d.p.areas[4,2] = d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  (data->simulationInfo->realParameter[461]/* d[1].d.p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[566]/* d[1].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 747
type: SIMPLE_ASSIGN
d[1].d.p.areas[4,1] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  (data->simulationInfo->realParameter[460]/* d[1].d.p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[566]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 748
type: SIMPLE_ASSIGN
d[1].d.p.areas[3,6] = 0.5 * d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  (data->simulationInfo->realParameter[459]/* d[1].d.p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[568]/* d[1].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 749
type: SIMPLE_ASSIGN
d[1].d.p.areas[3,4] = d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  (data->simulationInfo->realParameter[457]/* d[1].d.p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[567]/* d[1].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 750
type: SIMPLE_ASSIGN
d[1].d.p.areas[3,3] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  (data->simulationInfo->realParameter[456]/* d[1].d.p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[567]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 751
type: SIMPLE_ASSIGN
d[1].d.p.areas[3,2] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  (data->simulationInfo->realParameter[455]/* d[1].d.p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[566]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 752
type: SIMPLE_ASSIGN
d[1].d.p.areas[2,6] = 0.5 * d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  (data->simulationInfo->realParameter[453]/* d[1].d.p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[568]/* d[1].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 753
type: SIMPLE_ASSIGN
d[1].d.p.areas[2,4] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  (data->simulationInfo->realParameter[451]/* d[1].d.p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[567]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 754
type: SIMPLE_ASSIGN
d[1].d.p.areas[2,2] = d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  (data->simulationInfo->realParameter[449]/* d[1].d.p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[566]/* d[1].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 755
type: SIMPLE_ASSIGN
d[1].d.p.areas[2,1] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  (data->simulationInfo->realParameter[448]/* d[1].d.p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[566]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 756
type: SIMPLE_ASSIGN
d[1].d.p.areas[1,6] = 0.5 * d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  (data->simulationInfo->realParameter[447]/* d[1].d.p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[568]/* d[1].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 757
type: SIMPLE_ASSIGN
d[1].d.p.areas[1,4] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  (data->simulationInfo->realParameter[445]/* d[1].d.p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[567]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 758
type: SIMPLE_ASSIGN
d[1].d.p.areas[1,2] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  (data->simulationInfo->realParameter[443]/* d[1].d.p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[566]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 759
type: SIMPLE_ASSIGN
d[1].d.p.capacity = 18000.0 * d[1].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  (data->simulationInfo->realParameter[544]/* d[1].d.p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[598]/* d[1].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 760
type: SIMPLE_ASSIGN
d[1].d.p.rechargedThreshold = d[1].d.p.capacity * d[1].d.p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  (data->simulationInfo->realParameter[594]/* d[1].d.p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[544]/* d[1].d.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[592]/* d[1].d.p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 761
type: SIMPLE_ASSIGN
d[1].d.p.dangerousBatteryLevel = d[1].d.p.capacity * d[1].d.p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  (data->simulationInfo->realParameter[556]/* d[1].d.p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[544]/* d[1].d.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[558]/* d[1].d.p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 762
type: SIMPLE_ASSIGN
d[1].d.p.rechargeRate = 2.5 * d[1].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  (data->simulationInfo->realParameter[590]/* d[1].d.p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[598]/* d[1].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 763
type: SIMPLE_ASSIGN
d[1].d.p.commDischarge = 5.0 * d[1].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  (data->simulationInfo->realParameter[548]/* d[1].d.p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[598]/* d[1].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 764
type: SIMPLE_ASSIGN
d[1].d.p.batteryDischarge = d[1].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  (data->simulationInfo->realParameter[542]/* d[1].d.p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[598]/* d[1].d.p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 765
type: SIMPLE_ASSIGN
d[1].d.p.dangerRadius = 3.0 + d[1].d.p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  (data->simulationInfo->realParameter[554]/* d[1].d.p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[580]/* d[1].d.p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 766
type: SIMPLE_ASSIGN
d[1].p.areas[8,6] = d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  (data->simulationInfo->realParameter[655]/* d[1].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[734]/* d[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 767
type: SIMPLE_ASSIGN
d[1].p.areas[8,5] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  (data->simulationInfo->realParameter[654]/* d[1].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[732]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 768
type: SIMPLE_ASSIGN
d[1].p.areas[8,4] = d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  (data->simulationInfo->realParameter[653]/* d[1].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[733]/* d[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 769
type: SIMPLE_ASSIGN
d[1].p.areas[8,3] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  (data->simulationInfo->realParameter[652]/* d[1].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[733]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 770
type: SIMPLE_ASSIGN
d[1].p.areas[8,2] = d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  (data->simulationInfo->realParameter[651]/* d[1].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[732]/* d[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 771
type: SIMPLE_ASSIGN
d[1].p.areas[8,1] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  (data->simulationInfo->realParameter[650]/* d[1].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[732]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 772
type: SIMPLE_ASSIGN
d[1].p.areas[7,6] = d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  (data->simulationInfo->realParameter[649]/* d[1].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[734]/* d[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 773
type: SIMPLE_ASSIGN
d[1].p.areas[7,5] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  (data->simulationInfo->realParameter[648]/* d[1].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[732]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 774
type: SIMPLE_ASSIGN
d[1].p.areas[7,4] = d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  (data->simulationInfo->realParameter[647]/* d[1].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[733]/* d[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 775
type: SIMPLE_ASSIGN
d[1].p.areas[7,3] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  (data->simulationInfo->realParameter[646]/* d[1].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[733]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 776
type: SIMPLE_ASSIGN
d[1].p.areas[7,2] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  (data->simulationInfo->realParameter[645]/* d[1].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[732]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 777
type: SIMPLE_ASSIGN
d[1].p.areas[6,6] = d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  (data->simulationInfo->realParameter[643]/* d[1].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[734]/* d[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 778
type: SIMPLE_ASSIGN
d[1].p.areas[6,5] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  (data->simulationInfo->realParameter[642]/* d[1].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[732]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 779
type: SIMPLE_ASSIGN
d[1].p.areas[6,4] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  (data->simulationInfo->realParameter[641]/* d[1].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[733]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 780
type: SIMPLE_ASSIGN
d[1].p.areas[6,2] = d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  (data->simulationInfo->realParameter[639]/* d[1].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[732]/* d[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 781
type: SIMPLE_ASSIGN
d[1].p.areas[6,1] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  (data->simulationInfo->realParameter[638]/* d[1].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[732]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 782
type: SIMPLE_ASSIGN
d[1].p.areas[5,6] = d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  (data->simulationInfo->realParameter[637]/* d[1].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[734]/* d[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 783
type: SIMPLE_ASSIGN
d[1].p.areas[5,5] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  (data->simulationInfo->realParameter[636]/* d[1].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[732]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 784
type: SIMPLE_ASSIGN
d[1].p.areas[5,4] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  (data->simulationInfo->realParameter[635]/* d[1].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[733]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 785
type: SIMPLE_ASSIGN
d[1].p.areas[5,2] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  (data->simulationInfo->realParameter[633]/* d[1].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[732]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 786
type: SIMPLE_ASSIGN
d[1].p.areas[4,6] = 0.5 * d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  (data->simulationInfo->realParameter[631]/* d[1].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[734]/* d[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 787
type: SIMPLE_ASSIGN
d[1].p.areas[4,4] = d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  (data->simulationInfo->realParameter[629]/* d[1].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[733]/* d[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 788
type: SIMPLE_ASSIGN
d[1].p.areas[4,3] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  (data->simulationInfo->realParameter[628]/* d[1].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[733]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 789
type: SIMPLE_ASSIGN
d[1].p.areas[4,2] = d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  (data->simulationInfo->realParameter[627]/* d[1].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[732]/* d[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 790
type: SIMPLE_ASSIGN
d[1].p.areas[4,1] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  (data->simulationInfo->realParameter[626]/* d[1].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[732]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 791
type: SIMPLE_ASSIGN
d[1].p.areas[3,6] = 0.5 * d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  (data->simulationInfo->realParameter[625]/* d[1].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[734]/* d[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 792
type: SIMPLE_ASSIGN
d[1].p.areas[3,4] = d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  (data->simulationInfo->realParameter[623]/* d[1].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[733]/* d[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 793
type: SIMPLE_ASSIGN
d[1].p.areas[3,3] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  (data->simulationInfo->realParameter[622]/* d[1].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[733]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 794
type: SIMPLE_ASSIGN
d[1].p.areas[3,2] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  (data->simulationInfo->realParameter[621]/* d[1].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[732]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 795
type: SIMPLE_ASSIGN
d[1].p.areas[2,6] = 0.5 * d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  (data->simulationInfo->realParameter[619]/* d[1].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[734]/* d[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 796
type: SIMPLE_ASSIGN
d[1].p.areas[2,4] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  (data->simulationInfo->realParameter[617]/* d[1].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[733]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 797
type: SIMPLE_ASSIGN
d[1].p.areas[2,2] = d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,797};
  (data->simulationInfo->realParameter[615]/* d[1].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[732]/* d[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 798
type: SIMPLE_ASSIGN
d[1].p.areas[2,1] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  (data->simulationInfo->realParameter[614]/* d[1].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[732]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 799
type: SIMPLE_ASSIGN
d[1].p.areas[1,6] = 0.5 * d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  (data->simulationInfo->realParameter[613]/* d[1].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[734]/* d[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 800
type: SIMPLE_ASSIGN
d[1].p.areas[1,4] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,800};
  (data->simulationInfo->realParameter[611]/* d[1].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[733]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 801
type: SIMPLE_ASSIGN
d[1].p.areas[1,2] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,801};
  (data->simulationInfo->realParameter[609]/* d[1].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[732]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 802
type: SIMPLE_ASSIGN
d[1].p.capacity = 18000.0 * d[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,802};
  (data->simulationInfo->realParameter[710]/* d[1].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[764]/* d[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 803
type: SIMPLE_ASSIGN
d[1].p.rechargedThreshold = d[1].p.capacity * d[1].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  (data->simulationInfo->realParameter[760]/* d[1].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[710]/* d[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[758]/* d[1].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 804
type: SIMPLE_ASSIGN
d[1].p.dangerousBatteryLevel = d[1].p.capacity * d[1].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,804};
  (data->simulationInfo->realParameter[722]/* d[1].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[710]/* d[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[724]/* d[1].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 805
type: SIMPLE_ASSIGN
d[1].p.rechargeRate = 2.5 * d[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,805};
  (data->simulationInfo->realParameter[756]/* d[1].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[764]/* d[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 806
type: SIMPLE_ASSIGN
d[1].p.commDischarge = 5.0 * d[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,806};
  (data->simulationInfo->realParameter[714]/* d[1].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[764]/* d[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 807
type: SIMPLE_ASSIGN
d[1].p.batteryDischarge = d[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,807};
  (data->simulationInfo->realParameter[708]/* d[1].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[764]/* d[1].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 808
type: SIMPLE_ASSIGN
d[1].p.dangerRadius = 3.0 + d[1].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,808};
  (data->simulationInfo->realParameter[720]/* d[1].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[746]/* d[1].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 810
type: SIMPLE_ASSIGN
p.areas[8,6] = p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,810};
  (data->simulationInfo->realParameter[1067]/* p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[1084]/* p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 811
type: SIMPLE_ASSIGN
p.areas[8,5] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,811};
  (data->simulationInfo->realParameter[1066]/* p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1082]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 812
type: SIMPLE_ASSIGN
p.areas[8,4] = p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  (data->simulationInfo->realParameter[1065]/* p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[1083]/* p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 813
type: SIMPLE_ASSIGN
p.areas[8,3] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,813};
  (data->simulationInfo->realParameter[1064]/* p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1083]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 814
type: SIMPLE_ASSIGN
p.areas[8,2] = p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,814};
  (data->simulationInfo->realParameter[1063]/* p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[1082]/* p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 815
type: SIMPLE_ASSIGN
p.areas[8,1] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,815};
  (data->simulationInfo->realParameter[1062]/* p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1082]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 816
type: SIMPLE_ASSIGN
p.areas[7,6] = p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,816};
  (data->simulationInfo->realParameter[1061]/* p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[1084]/* p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 817
type: SIMPLE_ASSIGN
p.areas[7,5] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,817};
  (data->simulationInfo->realParameter[1060]/* p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1082]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 818
type: SIMPLE_ASSIGN
p.areas[7,4] = p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,818};
  (data->simulationInfo->realParameter[1059]/* p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[1083]/* p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 819
type: SIMPLE_ASSIGN
p.areas[7,3] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,819};
  (data->simulationInfo->realParameter[1058]/* p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1083]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 820
type: SIMPLE_ASSIGN
p.areas[7,2] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,820};
  (data->simulationInfo->realParameter[1057]/* p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1082]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 821
type: SIMPLE_ASSIGN
p.areas[6,6] = p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,821};
  (data->simulationInfo->realParameter[1055]/* p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[1084]/* p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 822
type: SIMPLE_ASSIGN
p.areas[6,5] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,822};
  (data->simulationInfo->realParameter[1054]/* p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1082]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 823
type: SIMPLE_ASSIGN
p.areas[6,4] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,823};
  (data->simulationInfo->realParameter[1053]/* p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1083]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 824
type: SIMPLE_ASSIGN
p.areas[6,2] = p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,824};
  (data->simulationInfo->realParameter[1051]/* p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[1082]/* p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 825
type: SIMPLE_ASSIGN
p.areas[6,1] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,825};
  (data->simulationInfo->realParameter[1050]/* p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1082]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 826
type: SIMPLE_ASSIGN
p.areas[5,6] = p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,826};
  (data->simulationInfo->realParameter[1049]/* p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[1084]/* p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 827
type: SIMPLE_ASSIGN
p.areas[5,5] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,827};
  (data->simulationInfo->realParameter[1048]/* p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1082]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 828
type: SIMPLE_ASSIGN
p.areas[5,4] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,828};
  (data->simulationInfo->realParameter[1047]/* p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1083]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 829
type: SIMPLE_ASSIGN
p.areas[5,2] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,829};
  (data->simulationInfo->realParameter[1045]/* p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1082]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 830
type: SIMPLE_ASSIGN
p.areas[4,6] = 0.5 * p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,830};
  (data->simulationInfo->realParameter[1043]/* p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1084]/* p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 831
type: SIMPLE_ASSIGN
p.areas[4,4] = p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,831};
  (data->simulationInfo->realParameter[1041]/* p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[1083]/* p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 832
type: SIMPLE_ASSIGN
p.areas[4,3] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,832};
  (data->simulationInfo->realParameter[1040]/* p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1083]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 833
type: SIMPLE_ASSIGN
p.areas[4,2] = p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,833};
  (data->simulationInfo->realParameter[1039]/* p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[1082]/* p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 834
type: SIMPLE_ASSIGN
p.areas[4,1] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,834};
  (data->simulationInfo->realParameter[1038]/* p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1082]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 835
type: SIMPLE_ASSIGN
p.areas[3,6] = 0.5 * p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,835};
  (data->simulationInfo->realParameter[1037]/* p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1084]/* p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 836
type: SIMPLE_ASSIGN
p.areas[3,4] = p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,836};
  (data->simulationInfo->realParameter[1035]/* p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[1083]/* p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 837
type: SIMPLE_ASSIGN
p.areas[3,3] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,837};
  (data->simulationInfo->realParameter[1034]/* p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1083]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 838
type: SIMPLE_ASSIGN
p.areas[3,2] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,838};
  (data->simulationInfo->realParameter[1033]/* p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1082]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 839
type: SIMPLE_ASSIGN
p.areas[2,6] = 0.5 * p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,839};
  (data->simulationInfo->realParameter[1031]/* p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1084]/* p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 840
type: SIMPLE_ASSIGN
p.areas[2,4] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,840};
  (data->simulationInfo->realParameter[1029]/* p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1083]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 841
type: SIMPLE_ASSIGN
p.areas[2,2] = p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,841};
  (data->simulationInfo->realParameter[1027]/* p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[1082]/* p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 842
type: SIMPLE_ASSIGN
p.areas[2,1] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,842};
  (data->simulationInfo->realParameter[1026]/* p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1082]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 843
type: SIMPLE_ASSIGN
p.areas[1,6] = 0.5 * p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,843};
  (data->simulationInfo->realParameter[1025]/* p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1084]/* p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 844
type: SIMPLE_ASSIGN
p.areas[1,4] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,844};
  (data->simulationInfo->realParameter[1023]/* p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1083]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 845
type: SIMPLE_ASSIGN
p.areas[1,2] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,845};
  (data->simulationInfo->realParameter[1021]/* p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1082]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 846
type: SIMPLE_ASSIGN
p.capacity = 18000.0 * p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,846};
  (data->simulationInfo->realParameter[1071]/* p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[1098]/* p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 847
type: SIMPLE_ASSIGN
p.rechargedThreshold = p.capacity * p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,847};
  (data->simulationInfo->realParameter[1096]/* p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[1071]/* p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1095]/* p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 848
type: SIMPLE_ASSIGN
p.dangerousBatteryLevel = p.capacity * p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,848};
  (data->simulationInfo->realParameter[1077]/* p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[1071]/* p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1078]/* p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 849
type: SIMPLE_ASSIGN
p.rechargeRate = 2.5 * p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,849};
  (data->simulationInfo->realParameter[1094]/* p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[1098]/* p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 850
type: SIMPLE_ASSIGN
p.commDischarge = 5.0 * p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,850};
  (data->simulationInfo->realParameter[1073]/* p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[1098]/* p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 851
type: SIMPLE_ASSIGN
p.batteryDischarge = p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,851};
  (data->simulationInfo->realParameter[1070]/* p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[1098]/* p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 852
type: SIMPLE_ASSIGN
p.dangerRadius = 3.0 + p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,852};
  (data->simulationInfo->realParameter[1076]/* p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[1089]/* p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}
OMC_DISABLE_OPT
void System_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  System_eqFunction_261(data, threadData);
  System_eqFunction_262(data, threadData);
  System_eqFunction_263(data, threadData);
  System_eqFunction_264(data, threadData);
  System_eqFunction_265(data, threadData);
  System_eqFunction_266(data, threadData);
  System_eqFunction_267(data, threadData);
  System_eqFunction_268(data, threadData);
  System_eqFunction_269(data, threadData);
  System_eqFunction_270(data, threadData);
  System_eqFunction_271(data, threadData);
  System_eqFunction_272(data, threadData);
  System_eqFunction_273(data, threadData);
  System_eqFunction_274(data, threadData);
  System_eqFunction_275(data, threadData);
  System_eqFunction_276(data, threadData);
  System_eqFunction_277(data, threadData);
  System_eqFunction_278(data, threadData);
  System_eqFunction_279(data, threadData);
  System_eqFunction_280(data, threadData);
  System_eqFunction_281(data, threadData);
  System_eqFunction_282(data, threadData);
  System_eqFunction_283(data, threadData);
  System_eqFunction_284(data, threadData);
  System_eqFunction_285(data, threadData);
  System_eqFunction_286(data, threadData);
  System_eqFunction_287(data, threadData);
  System_eqFunction_288(data, threadData);
  System_eqFunction_289(data, threadData);
  System_eqFunction_290(data, threadData);
  System_eqFunction_291(data, threadData);
  System_eqFunction_292(data, threadData);
  System_eqFunction_293(data, threadData);
  System_eqFunction_294(data, threadData);
  System_eqFunction_295(data, threadData);
  System_eqFunction_296(data, threadData);
  System_eqFunction_297(data, threadData);
  System_eqFunction_298(data, threadData);
  System_eqFunction_299(data, threadData);
  System_eqFunction_300(data, threadData);
  System_eqFunction_301(data, threadData);
  System_eqFunction_302(data, threadData);
  System_eqFunction_303(data, threadData);
  System_eqFunction_304(data, threadData);
  System_eqFunction_305(data, threadData);
  System_eqFunction_306(data, threadData);
  System_eqFunction_307(data, threadData);
  System_eqFunction_308(data, threadData);
  System_eqFunction_309(data, threadData);
  System_eqFunction_310(data, threadData);
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
  System_eqFunction_514(data, threadData);
  System_eqFunction_515(data, threadData);
  System_eqFunction_516(data, threadData);
  System_eqFunction_517(data, threadData);
  System_eqFunction_518(data, threadData);
  System_eqFunction_519(data, threadData);
  System_eqFunction_520(data, threadData);
  System_eqFunction_521(data, threadData);
  System_eqFunction_522(data, threadData);
  System_eqFunction_523(data, threadData);
  System_eqFunction_524(data, threadData);
  System_eqFunction_525(data, threadData);
  System_eqFunction_526(data, threadData);
  System_eqFunction_527(data, threadData);
  System_eqFunction_529(data, threadData);
  System_eqFunction_530(data, threadData);
  System_eqFunction_531(data, threadData);
  System_eqFunction_532(data, threadData);
  System_eqFunction_533(data, threadData);
  System_eqFunction_534(data, threadData);
  System_eqFunction_535(data, threadData);
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
  TRACE_POP
}
OMC_DISABLE_OPT
int System_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  (data->simulationInfo->integerParameter[1]/* cc.p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  (data->simulationInfo->integerParameter[2]/* cc.p.nAreas PARAM */)  = ((modelica_integer) 8);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  (data->simulationInfo->integerParameter[3]/* cc.p.nDrones PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  (data->simulationInfo->integerParameter[4]/* cc_to_drone[1].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  (data->simulationInfo->integerParameter[5]/* cc_to_drone[2].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  (data->simulationInfo->integerParameter[6]/* cc_to_drone[1].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[6].time_unvarying = 1;
  (data->simulationInfo->integerParameter[7]/* cc_to_drone[2].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  (data->simulationInfo->integerParameter[32]/* d[1].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[32].time_unvarying = 1;
  (data->simulationInfo->integerParameter[33]/* d[2].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[33].time_unvarying = 1;
  (data->simulationInfo->integerParameter[38]/* drone_to_cc[1].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[38].time_unvarying = 1;
  (data->simulationInfo->integerParameter[39]/* drone_to_cc[2].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[39].time_unvarying = 1;
  (data->simulationInfo->integerParameter[40]/* drone_to_cc[1].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[40].time_unvarying = 1;
  (data->simulationInfo->integerParameter[41]/* drone_to_cc[2].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[41].time_unvarying = 1;
  (data->simulationInfo->integerParameter[48]/* m.p.nAreas PARAM */)  = ((modelica_integer) 8);
  data->modelData->integerParameterData[48].time_unvarying = 1;
  (data->simulationInfo->integerParameter[53]/* p.nDrones PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[53].time_unvarying = 1;
  System_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

