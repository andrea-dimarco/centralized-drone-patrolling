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
equation index: 140
type: SIMPLE_ASSIGN
cc.choice = p.cc_choice
*/
OMC_DISABLE_OPT
static void System_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  (data->simulationInfo->realParameter[3]/* cc.choice PARAM */)  = (data->simulationInfo->realParameter[650]/* p.cc_choice PARAM */) ;
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
cc.Tcc = p.Tcc
*/
OMC_DISABLE_OPT
static void System_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  (data->simulationInfo->realParameter[0]/* cc.Tcc PARAM */)  = (data->simulationInfo->realParameter[595]/* p.Tcc PARAM */) ;
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
cc.comm_timeout = p.comm_timeout
*/
OMC_DISABLE_OPT
static void System_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  (data->simulationInfo->realParameter[4]/* cc.comm_timeout PARAM */)  = (data->simulationInfo->realParameter[652]/* p.comm_timeout PARAM */) ;
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
cc.p_worst = p.p_worst
*/
OMC_DISABLE_OPT
static void System_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  (data->simulationInfo->realParameter[89]/* cc.p_worst PARAM */)  = (data->simulationInfo->realParameter[671]/* p.p_worst PARAM */) ;
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
cc.arrival_timeout = p.arrival_timeout
*/
OMC_DISABLE_OPT
static void System_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  (data->simulationInfo->realParameter[2]/* cc.arrival_timeout PARAM */)  = (data->simulationInfo->realParameter[647]/* p.arrival_timeout PARAM */) ;
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
cc.arrivalThreshold = p.arrivalThreshold
*/
OMC_DISABLE_OPT
static void System_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  (data->simulationInfo->realParameter[1]/* cc.arrivalThreshold PARAM */)  = (data->simulationInfo->realParameter[646]/* p.arrivalThreshold PARAM */) ;
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
cc.p_recharge = p.p_recharge
*/
OMC_DISABLE_OPT
static void System_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  (data->simulationInfo->realParameter[88]/* cc.p_recharge PARAM */)  = (data->simulationInfo->realParameter[670]/* p.p_recharge PARAM */) ;
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,6] = drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  (data->simulationInfo->realParameter[479]/* drone_to_cc[1].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[496]/* drone_to_cc[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,5] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  (data->simulationInfo->realParameter[478]/* drone_to_cc[1].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[494]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,4] = drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  (data->simulationInfo->realParameter[477]/* drone_to_cc[1].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[495]/* drone_to_cc[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,3] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  (data->simulationInfo->realParameter[476]/* drone_to_cc[1].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[495]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,2] = drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  (data->simulationInfo->realParameter[475]/* drone_to_cc[1].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[494]/* drone_to_cc[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,1] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  (data->simulationInfo->realParameter[474]/* drone_to_cc[1].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[494]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[7,6] = drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  (data->simulationInfo->realParameter[473]/* drone_to_cc[1].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[496]/* drone_to_cc[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[7,5] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  (data->simulationInfo->realParameter[472]/* drone_to_cc[1].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[494]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[7,4] = drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  (data->simulationInfo->realParameter[471]/* drone_to_cc[1].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[495]/* drone_to_cc[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[7,3] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  (data->simulationInfo->realParameter[470]/* drone_to_cc[1].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[495]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[7,2] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  (data->simulationInfo->realParameter[469]/* drone_to_cc[1].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[494]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[6,6] = drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  (data->simulationInfo->realParameter[467]/* drone_to_cc[1].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[496]/* drone_to_cc[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[6,5] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  (data->simulationInfo->realParameter[466]/* drone_to_cc[1].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[494]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 160
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[6,4] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  (data->simulationInfo->realParameter[465]/* drone_to_cc[1].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[495]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[6,2] = drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  (data->simulationInfo->realParameter[463]/* drone_to_cc[1].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[494]/* drone_to_cc[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 162
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[6,1] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  (data->simulationInfo->realParameter[462]/* drone_to_cc[1].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[494]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 163
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[5,6] = drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  (data->simulationInfo->realParameter[461]/* drone_to_cc[1].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[496]/* drone_to_cc[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 164
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[5,5] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  (data->simulationInfo->realParameter[460]/* drone_to_cc[1].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[494]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 165
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[5,4] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  (data->simulationInfo->realParameter[459]/* drone_to_cc[1].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[495]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 166
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[5,2] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  (data->simulationInfo->realParameter[457]/* drone_to_cc[1].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[494]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 167
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[4,6] = 0.5 * drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  (data->simulationInfo->realParameter[455]/* drone_to_cc[1].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[496]/* drone_to_cc[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 168
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[4,4] = drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  (data->simulationInfo->realParameter[453]/* drone_to_cc[1].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[495]/* drone_to_cc[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[4,3] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  (data->simulationInfo->realParameter[452]/* drone_to_cc[1].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[495]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[4,2] = drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  (data->simulationInfo->realParameter[451]/* drone_to_cc[1].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[494]/* drone_to_cc[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[4,1] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  (data->simulationInfo->realParameter[450]/* drone_to_cc[1].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[494]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[3,6] = 0.5 * drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  (data->simulationInfo->realParameter[449]/* drone_to_cc[1].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[496]/* drone_to_cc[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[3,4] = drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  (data->simulationInfo->realParameter[447]/* drone_to_cc[1].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[495]/* drone_to_cc[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[3,3] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  (data->simulationInfo->realParameter[446]/* drone_to_cc[1].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[495]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[3,2] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  (data->simulationInfo->realParameter[445]/* drone_to_cc[1].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[494]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[2,6] = 0.5 * drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  (data->simulationInfo->realParameter[443]/* drone_to_cc[1].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[496]/* drone_to_cc[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[2,4] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  (data->simulationInfo->realParameter[441]/* drone_to_cc[1].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[495]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[2,2] = drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  (data->simulationInfo->realParameter[439]/* drone_to_cc[1].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[494]/* drone_to_cc[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[2,1] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  (data->simulationInfo->realParameter[438]/* drone_to_cc[1].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[494]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[1,6] = 0.5 * drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  (data->simulationInfo->realParameter[437]/* drone_to_cc[1].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[496]/* drone_to_cc[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[1,4] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  (data->simulationInfo->realParameter[435]/* drone_to_cc[1].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[495]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[1,2] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  (data->simulationInfo->realParameter[433]/* drone_to_cc[1].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[494]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
drone_to_cc[1].p.capacity = 18000.0 * drone_to_cc[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  (data->simulationInfo->realParameter[483]/* drone_to_cc[1].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[510]/* drone_to_cc[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
drone_to_cc[1].p.rechargedThreshold = drone_to_cc[1].p.capacity * drone_to_cc[1].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  (data->simulationInfo->realParameter[508]/* drone_to_cc[1].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[483]/* drone_to_cc[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[507]/* drone_to_cc[1].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 185
type: SIMPLE_ASSIGN
drone_to_cc[1].p.dangerousBatteryLevel = drone_to_cc[1].p.capacity * drone_to_cc[1].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  (data->simulationInfo->realParameter[489]/* drone_to_cc[1].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[483]/* drone_to_cc[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[490]/* drone_to_cc[1].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 186
type: SIMPLE_ASSIGN
drone_to_cc[1].p.rechargeRate = 2.5 * drone_to_cc[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  (data->simulationInfo->realParameter[506]/* drone_to_cc[1].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[510]/* drone_to_cc[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 187
type: SIMPLE_ASSIGN
drone_to_cc[1].p.commDischarge = 5.0 * drone_to_cc[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  (data->simulationInfo->realParameter[485]/* drone_to_cc[1].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[510]/* drone_to_cc[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 188
type: SIMPLE_ASSIGN
drone_to_cc[1].p.batteryDischarge = drone_to_cc[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  (data->simulationInfo->realParameter[482]/* drone_to_cc[1].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[510]/* drone_to_cc[1].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 189
type: SIMPLE_ASSIGN
drone_to_cc[1].p.dangerRadius = 3.0 + drone_to_cc[1].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  (data->simulationInfo->realParameter[488]/* drone_to_cc[1].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[501]/* drone_to_cc[1].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 192
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,6] = cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  (data->simulationInfo->realParameter[140]/* cc_to_drone[1].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[157]/* cc_to_drone[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 193
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,5] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  (data->simulationInfo->realParameter[139]/* cc_to_drone[1].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[155]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 194
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,4] = cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  (data->simulationInfo->realParameter[138]/* cc_to_drone[1].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[156]/* cc_to_drone[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,3] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  (data->simulationInfo->realParameter[137]/* cc_to_drone[1].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[156]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 196
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,2] = cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  (data->simulationInfo->realParameter[136]/* cc_to_drone[1].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[155]/* cc_to_drone[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,1] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  (data->simulationInfo->realParameter[135]/* cc_to_drone[1].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[155]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[7,6] = cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  (data->simulationInfo->realParameter[134]/* cc_to_drone[1].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[157]/* cc_to_drone[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[7,5] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  (data->simulationInfo->realParameter[133]/* cc_to_drone[1].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[155]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[7,4] = cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  (data->simulationInfo->realParameter[132]/* cc_to_drone[1].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[156]/* cc_to_drone[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[7,3] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  (data->simulationInfo->realParameter[131]/* cc_to_drone[1].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[156]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[7,2] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  (data->simulationInfo->realParameter[130]/* cc_to_drone[1].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[155]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[6,6] = cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  (data->simulationInfo->realParameter[128]/* cc_to_drone[1].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[157]/* cc_to_drone[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[6,5] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  (data->simulationInfo->realParameter[127]/* cc_to_drone[1].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[155]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[6,4] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  (data->simulationInfo->realParameter[126]/* cc_to_drone[1].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[156]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[6,2] = cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  (data->simulationInfo->realParameter[124]/* cc_to_drone[1].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[155]/* cc_to_drone[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[6,1] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  (data->simulationInfo->realParameter[123]/* cc_to_drone[1].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[155]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[5,6] = cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  (data->simulationInfo->realParameter[122]/* cc_to_drone[1].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[157]/* cc_to_drone[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[5,5] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  (data->simulationInfo->realParameter[121]/* cc_to_drone[1].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[155]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[5,4] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  (data->simulationInfo->realParameter[120]/* cc_to_drone[1].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[156]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 211
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[5,2] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  (data->simulationInfo->realParameter[118]/* cc_to_drone[1].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[155]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[4,6] = 0.5 * cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  (data->simulationInfo->realParameter[116]/* cc_to_drone[1].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[157]/* cc_to_drone[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 213
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[4,4] = cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  (data->simulationInfo->realParameter[114]/* cc_to_drone[1].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[156]/* cc_to_drone[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 214
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[4,3] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  (data->simulationInfo->realParameter[113]/* cc_to_drone[1].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[156]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 215
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[4,2] = cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  (data->simulationInfo->realParameter[112]/* cc_to_drone[1].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[155]/* cc_to_drone[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 216
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[4,1] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  (data->simulationInfo->realParameter[111]/* cc_to_drone[1].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[155]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 217
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[3,6] = 0.5 * cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  (data->simulationInfo->realParameter[110]/* cc_to_drone[1].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[157]/* cc_to_drone[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 218
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[3,4] = cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  (data->simulationInfo->realParameter[108]/* cc_to_drone[1].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[156]/* cc_to_drone[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[3,3] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  (data->simulationInfo->realParameter[107]/* cc_to_drone[1].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[156]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[3,2] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  (data->simulationInfo->realParameter[106]/* cc_to_drone[1].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[155]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 221
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[2,6] = 0.5 * cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  (data->simulationInfo->realParameter[104]/* cc_to_drone[1].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[157]/* cc_to_drone[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 222
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[2,4] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  (data->simulationInfo->realParameter[102]/* cc_to_drone[1].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[156]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[2,2] = cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  (data->simulationInfo->realParameter[100]/* cc_to_drone[1].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[155]/* cc_to_drone[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[2,1] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  (data->simulationInfo->realParameter[99]/* cc_to_drone[1].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[155]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[1,6] = 0.5 * cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  (data->simulationInfo->realParameter[98]/* cc_to_drone[1].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[157]/* cc_to_drone[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[1,4] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  (data->simulationInfo->realParameter[96]/* cc_to_drone[1].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[156]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[1,2] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  (data->simulationInfo->realParameter[94]/* cc_to_drone[1].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[155]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
cc_to_drone[1].p.capacity = 18000.0 * cc_to_drone[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  (data->simulationInfo->realParameter[144]/* cc_to_drone[1].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[171]/* cc_to_drone[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
cc_to_drone[1].p.rechargedThreshold = cc_to_drone[1].p.capacity * cc_to_drone[1].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  (data->simulationInfo->realParameter[169]/* cc_to_drone[1].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[144]/* cc_to_drone[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[168]/* cc_to_drone[1].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
cc_to_drone[1].p.dangerousBatteryLevel = cc_to_drone[1].p.capacity * cc_to_drone[1].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  (data->simulationInfo->realParameter[150]/* cc_to_drone[1].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[144]/* cc_to_drone[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[151]/* cc_to_drone[1].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
cc_to_drone[1].p.rechargeRate = 2.5 * cc_to_drone[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  (data->simulationInfo->realParameter[167]/* cc_to_drone[1].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[171]/* cc_to_drone[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
cc_to_drone[1].p.commDischarge = 5.0 * cc_to_drone[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  (data->simulationInfo->realParameter[146]/* cc_to_drone[1].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[171]/* cc_to_drone[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
cc_to_drone[1].p.batteryDischarge = cc_to_drone[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  (data->simulationInfo->realParameter[143]/* cc_to_drone[1].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[171]/* cc_to_drone[1].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
cc_to_drone[1].p.dangerRadius = 3.0 + cc_to_drone[1].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  (data->simulationInfo->realParameter[149]/* cc_to_drone[1].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[162]/* cc_to_drone[1].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
m.p.areas[8,6] = m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  (data->simulationInfo->realParameter[562]/* m.p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[579]/* m.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
m.p.areas[8,5] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  (data->simulationInfo->realParameter[561]/* m.p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[577]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
m.p.areas[8,4] = m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  (data->simulationInfo->realParameter[560]/* m.p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[578]/* m.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
m.p.areas[8,3] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  (data->simulationInfo->realParameter[559]/* m.p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[578]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
m.p.areas[8,2] = m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  (data->simulationInfo->realParameter[558]/* m.p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[577]/* m.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
m.p.areas[8,1] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  (data->simulationInfo->realParameter[557]/* m.p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[577]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
m.p.areas[7,6] = m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  (data->simulationInfo->realParameter[556]/* m.p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[579]/* m.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
m.p.areas[7,5] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  (data->simulationInfo->realParameter[555]/* m.p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[577]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 245
type: SIMPLE_ASSIGN
m.p.areas[7,4] = m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  (data->simulationInfo->realParameter[554]/* m.p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[578]/* m.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 246
type: SIMPLE_ASSIGN
m.p.areas[7,3] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  (data->simulationInfo->realParameter[553]/* m.p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[578]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 247
type: SIMPLE_ASSIGN
m.p.areas[7,2] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  (data->simulationInfo->realParameter[552]/* m.p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[577]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 248
type: SIMPLE_ASSIGN
m.p.areas[6,6] = m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  (data->simulationInfo->realParameter[550]/* m.p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[579]/* m.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
m.p.areas[6,5] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  (data->simulationInfo->realParameter[549]/* m.p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[577]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
m.p.areas[6,4] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  (data->simulationInfo->realParameter[548]/* m.p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[578]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
m.p.areas[6,2] = m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  (data->simulationInfo->realParameter[546]/* m.p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[577]/* m.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
m.p.areas[6,1] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  (data->simulationInfo->realParameter[545]/* m.p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[577]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 253
type: SIMPLE_ASSIGN
m.p.areas[5,6] = m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  (data->simulationInfo->realParameter[544]/* m.p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[579]/* m.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 254
type: SIMPLE_ASSIGN
m.p.areas[5,5] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  (data->simulationInfo->realParameter[543]/* m.p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[577]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
m.p.areas[5,4] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  (data->simulationInfo->realParameter[542]/* m.p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[578]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
m.p.areas[5,2] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  (data->simulationInfo->realParameter[540]/* m.p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[577]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
m.p.areas[4,6] = 0.5 * m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  (data->simulationInfo->realParameter[538]/* m.p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[579]/* m.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
m.p.areas[4,4] = m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  (data->simulationInfo->realParameter[536]/* m.p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[578]/* m.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
m.p.areas[4,3] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  (data->simulationInfo->realParameter[535]/* m.p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[578]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
m.p.areas[4,2] = m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  (data->simulationInfo->realParameter[534]/* m.p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[577]/* m.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
m.p.areas[4,1] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  (data->simulationInfo->realParameter[533]/* m.p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[577]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
m.p.areas[3,6] = 0.5 * m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  (data->simulationInfo->realParameter[532]/* m.p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[579]/* m.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
m.p.areas[3,4] = m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  (data->simulationInfo->realParameter[530]/* m.p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[578]/* m.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
m.p.areas[3,3] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  (data->simulationInfo->realParameter[529]/* m.p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[578]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
m.p.areas[3,2] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  (data->simulationInfo->realParameter[528]/* m.p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[577]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
m.p.areas[2,6] = 0.5 * m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  (data->simulationInfo->realParameter[526]/* m.p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[579]/* m.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
m.p.areas[2,4] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  (data->simulationInfo->realParameter[524]/* m.p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[578]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
m.p.areas[2,2] = m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  (data->simulationInfo->realParameter[522]/* m.p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[577]/* m.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
m.p.areas[2,1] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  (data->simulationInfo->realParameter[521]/* m.p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[577]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
m.p.areas[1,6] = 0.5 * m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  (data->simulationInfo->realParameter[520]/* m.p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[579]/* m.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
m.p.areas[1,4] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  (data->simulationInfo->realParameter[518]/* m.p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[578]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
m.p.areas[1,2] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  (data->simulationInfo->realParameter[516]/* m.p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[577]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
m.p.capacity = 18000.0 * m.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  (data->simulationInfo->realParameter[566]/* m.p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[593]/* m.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
m.p.rechargedThreshold = m.p.capacity * m.p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  (data->simulationInfo->realParameter[591]/* m.p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[566]/* m.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[590]/* m.p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
m.p.dangerousBatteryLevel = m.p.capacity * m.p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  (data->simulationInfo->realParameter[572]/* m.p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[566]/* m.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[573]/* m.p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
m.p.rechargeRate = 2.5 * m.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  (data->simulationInfo->realParameter[589]/* m.p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[593]/* m.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
m.p.commDischarge = 5.0 * m.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  (data->simulationInfo->realParameter[568]/* m.p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[593]/* m.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
m.p.batteryDischarge = m.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  (data->simulationInfo->realParameter[565]/* m.p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[593]/* m.p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
m.p.dangerRadius = 3.0 + m.p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  (data->simulationInfo->realParameter[571]/* m.p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[584]/* m.p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
cc.p.areas[8,6] = cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  (data->simulationInfo->realParameter[55]/* cc.p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
cc.p.areas[8,5] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  (data->simulationInfo->realParameter[54]/* cc.p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
cc.p.areas[8,4] = cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  (data->simulationInfo->realParameter[53]/* cc.p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
cc.p.areas[8,3] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  (data->simulationInfo->realParameter[52]/* cc.p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
cc.p.areas[8,2] = cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  (data->simulationInfo->realParameter[51]/* cc.p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
cc.p.areas[8,1] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  (data->simulationInfo->realParameter[50]/* cc.p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
cc.p.areas[7,6] = cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  (data->simulationInfo->realParameter[49]/* cc.p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
cc.p.areas[7,5] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  (data->simulationInfo->realParameter[48]/* cc.p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
cc.p.areas[7,4] = cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  (data->simulationInfo->realParameter[47]/* cc.p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
cc.p.areas[7,3] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  (data->simulationInfo->realParameter[46]/* cc.p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
cc.p.areas[7,2] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  (data->simulationInfo->realParameter[45]/* cc.p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
cc.p.areas[6,6] = cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  (data->simulationInfo->realParameter[43]/* cc.p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
cc.p.areas[6,5] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  (data->simulationInfo->realParameter[42]/* cc.p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
cc.p.areas[6,4] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  (data->simulationInfo->realParameter[41]/* cc.p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
cc.p.areas[6,2] = cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  (data->simulationInfo->realParameter[39]/* cc.p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
cc.p.areas[6,1] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  (data->simulationInfo->realParameter[38]/* cc.p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
cc.p.areas[5,6] = cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  (data->simulationInfo->realParameter[37]/* cc.p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
cc.p.areas[5,5] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  (data->simulationInfo->realParameter[36]/* cc.p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
cc.p.areas[5,4] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  (data->simulationInfo->realParameter[35]/* cc.p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
cc.p.areas[5,2] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  (data->simulationInfo->realParameter[33]/* cc.p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 301
type: SIMPLE_ASSIGN
cc.p.areas[4,6] = 0.5 * cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  (data->simulationInfo->realParameter[31]/* cc.p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 302
type: SIMPLE_ASSIGN
cc.p.areas[4,4] = cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  (data->simulationInfo->realParameter[29]/* cc.p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 303
type: SIMPLE_ASSIGN
cc.p.areas[4,3] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  (data->simulationInfo->realParameter[28]/* cc.p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
cc.p.areas[4,2] = cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  (data->simulationInfo->realParameter[27]/* cc.p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 305
type: SIMPLE_ASSIGN
cc.p.areas[4,1] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  (data->simulationInfo->realParameter[26]/* cc.p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 306
type: SIMPLE_ASSIGN
cc.p.areas[3,6] = 0.5 * cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  (data->simulationInfo->realParameter[25]/* cc.p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 307
type: SIMPLE_ASSIGN
cc.p.areas[3,4] = cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  (data->simulationInfo->realParameter[23]/* cc.p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 308
type: SIMPLE_ASSIGN
cc.p.areas[3,3] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  (data->simulationInfo->realParameter[22]/* cc.p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
cc.p.areas[3,2] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  (data->simulationInfo->realParameter[21]/* cc.p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
cc.p.areas[2,6] = 0.5 * cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  (data->simulationInfo->realParameter[19]/* cc.p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
cc.p.areas[2,4] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  (data->simulationInfo->realParameter[17]/* cc.p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 312
type: SIMPLE_ASSIGN
cc.p.areas[2,2] = cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  (data->simulationInfo->realParameter[15]/* cc.p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
cc.p.areas[2,1] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  (data->simulationInfo->realParameter[14]/* cc.p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
cc.p.areas[1,6] = 0.5 * cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  (data->simulationInfo->realParameter[13]/* cc.p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
cc.p.areas[1,4] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  (data->simulationInfo->realParameter[11]/* cc.p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
cc.p.areas[1,2] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  (data->simulationInfo->realParameter[9]/* cc.p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
cc.p.capacity = 18000.0 * cc.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  (data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 319
type: SIMPLE_ASSIGN
cc.p.rechargedThreshold = cc.p.capacity * cc.p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  (data->simulationInfo->realParameter[84]/* cc.p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[83]/* cc.p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
cc.p.dangerousBatteryLevel = cc.p.capacity * cc.p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  (data->simulationInfo->realParameter[65]/* cc.p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[66]/* cc.p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
cc.p.rechargeRate = 2.5 * cc.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  (data->simulationInfo->realParameter[82]/* cc.p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
cc.p.commDischarge = 5.0 * cc.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  (data->simulationInfo->realParameter[61]/* cc.p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
cc.p.batteryDischarge = cc.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  (data->simulationInfo->realParameter[58]/* cc.p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
cc.p.dangerRadius = 3.0 + cc.p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  (data->simulationInfo->realParameter[64]/* cc.p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[77]/* cc.p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
d[1].ctrl.kx2 = 2.0 * d[1].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  (data->simulationInfo->realParameter[174]/* d[1].ctrl.kx2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[179]/* d[1].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
d[1].ctrl.kx1 = -d[1].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  modelica_real tmp0;
  tmp0 = (data->simulationInfo->realParameter[179]/* d[1].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[173]/* d[1].ctrl.kx1 PARAM */)  = (-((tmp0 * tmp0)));
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
d[1].ctrl.ky2 = 2.0 * d[1].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  (data->simulationInfo->realParameter[176]/* d[1].ctrl.ky2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[179]/* d[1].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
d[1].ctrl.ky1 = -d[1].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  modelica_real tmp1;
  tmp1 = (data->simulationInfo->realParameter[179]/* d[1].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[175]/* d[1].ctrl.ky1 PARAM */)  = (-((tmp1 * tmp1)));
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
d[1].ctrl.kz2 = 2.0 * d[1].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  (data->simulationInfo->realParameter[178]/* d[1].ctrl.kz2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[179]/* d[1].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
d[1].ctrl.kz1 = -d[1].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  modelica_real tmp2;
  tmp2 = (data->simulationInfo->realParameter[179]/* d[1].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[177]/* d[1].ctrl.kz1 PARAM */)  = (-((tmp2 * tmp2)));
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,6] = d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  (data->simulationInfo->realParameter[230]/* d[1].ctrl.prm.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[247]/* d[1].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 334
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,5] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  (data->simulationInfo->realParameter[229]/* d[1].ctrl.prm.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[245]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,4] = d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  (data->simulationInfo->realParameter[228]/* d[1].ctrl.prm.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[246]/* d[1].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 336
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,3] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  (data->simulationInfo->realParameter[227]/* d[1].ctrl.prm.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[246]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 337
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,2] = d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  (data->simulationInfo->realParameter[226]/* d[1].ctrl.prm.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[245]/* d[1].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,1] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  (data->simulationInfo->realParameter[225]/* d[1].ctrl.prm.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[245]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[7,6] = d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  (data->simulationInfo->realParameter[224]/* d[1].ctrl.prm.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[247]/* d[1].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[7,5] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  (data->simulationInfo->realParameter[223]/* d[1].ctrl.prm.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[245]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[7,4] = d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  (data->simulationInfo->realParameter[222]/* d[1].ctrl.prm.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[246]/* d[1].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[7,3] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  (data->simulationInfo->realParameter[221]/* d[1].ctrl.prm.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[246]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[7,2] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  (data->simulationInfo->realParameter[220]/* d[1].ctrl.prm.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[245]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[6,6] = d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  (data->simulationInfo->realParameter[218]/* d[1].ctrl.prm.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[247]/* d[1].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[6,5] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  (data->simulationInfo->realParameter[217]/* d[1].ctrl.prm.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[245]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[6,4] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  (data->simulationInfo->realParameter[216]/* d[1].ctrl.prm.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[246]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[6,2] = d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  (data->simulationInfo->realParameter[214]/* d[1].ctrl.prm.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[245]/* d[1].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[6,1] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  (data->simulationInfo->realParameter[213]/* d[1].ctrl.prm.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[245]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[5,6] = d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  (data->simulationInfo->realParameter[212]/* d[1].ctrl.prm.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[247]/* d[1].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[5,5] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  (data->simulationInfo->realParameter[211]/* d[1].ctrl.prm.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[245]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[5,4] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  (data->simulationInfo->realParameter[210]/* d[1].ctrl.prm.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[246]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[5,2] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  (data->simulationInfo->realParameter[208]/* d[1].ctrl.prm.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[245]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[4,6] = 0.5 * d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  (data->simulationInfo->realParameter[206]/* d[1].ctrl.prm.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[247]/* d[1].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[4,4] = d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  (data->simulationInfo->realParameter[204]/* d[1].ctrl.prm.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[246]/* d[1].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[4,3] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  (data->simulationInfo->realParameter[203]/* d[1].ctrl.prm.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[246]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[4,2] = d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  (data->simulationInfo->realParameter[202]/* d[1].ctrl.prm.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[245]/* d[1].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[4,1] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  (data->simulationInfo->realParameter[201]/* d[1].ctrl.prm.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[245]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[3,6] = 0.5 * d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  (data->simulationInfo->realParameter[200]/* d[1].ctrl.prm.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[247]/* d[1].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[3,4] = d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  (data->simulationInfo->realParameter[198]/* d[1].ctrl.prm.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[246]/* d[1].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[3,3] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  (data->simulationInfo->realParameter[197]/* d[1].ctrl.prm.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[246]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[3,2] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  (data->simulationInfo->realParameter[196]/* d[1].ctrl.prm.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[245]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[2,6] = 0.5 * d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  (data->simulationInfo->realParameter[194]/* d[1].ctrl.prm.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[247]/* d[1].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[2,4] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  (data->simulationInfo->realParameter[192]/* d[1].ctrl.prm.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[246]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[2,2] = d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  (data->simulationInfo->realParameter[190]/* d[1].ctrl.prm.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[245]/* d[1].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[2,1] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  (data->simulationInfo->realParameter[189]/* d[1].ctrl.prm.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[245]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[1,6] = 0.5 * d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  (data->simulationInfo->realParameter[188]/* d[1].ctrl.prm.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[247]/* d[1].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[1,4] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  (data->simulationInfo->realParameter[186]/* d[1].ctrl.prm.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[246]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[1,2] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  (data->simulationInfo->realParameter[184]/* d[1].ctrl.prm.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[245]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
d[1].ctrl.prm.capacity = 18000.0 * d[1].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  (data->simulationInfo->realParameter[234]/* d[1].ctrl.prm.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[261]/* d[1].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
d[1].ctrl.prm.rechargedThreshold = d[1].ctrl.prm.capacity * d[1].ctrl.prm.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  (data->simulationInfo->realParameter[259]/* d[1].ctrl.prm.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[234]/* d[1].ctrl.prm.capacity PARAM */) ) * ((data->simulationInfo->realParameter[258]/* d[1].ctrl.prm.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
d[1].ctrl.prm.dangerousBatteryLevel = d[1].ctrl.prm.capacity * d[1].ctrl.prm.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  (data->simulationInfo->realParameter[240]/* d[1].ctrl.prm.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[234]/* d[1].ctrl.prm.capacity PARAM */) ) * ((data->simulationInfo->realParameter[241]/* d[1].ctrl.prm.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
d[1].ctrl.prm.rechargeRate = 2.5 * d[1].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  (data->simulationInfo->realParameter[257]/* d[1].ctrl.prm.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[261]/* d[1].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
d[1].ctrl.prm.commDischarge = 5.0 * d[1].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  (data->simulationInfo->realParameter[236]/* d[1].ctrl.prm.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[261]/* d[1].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
d[1].ctrl.prm.batteryDischarge = d[1].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  (data->simulationInfo->realParameter[233]/* d[1].ctrl.prm.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[261]/* d[1].ctrl.prm.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
d[1].ctrl.prm.dangerRadius = 3.0 + d[1].ctrl.prm.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  (data->simulationInfo->realParameter[239]/* d[1].ctrl.prm.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[252]/* d[1].ctrl.prm.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,6] = d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  (data->simulationInfo->realParameter[313]/* d[1].d.p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[330]/* d[1].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,5] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  (data->simulationInfo->realParameter[312]/* d[1].d.p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,4] = d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  (data->simulationInfo->realParameter[311]/* d[1].d.p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[329]/* d[1].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,3] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  (data->simulationInfo->realParameter[310]/* d[1].d.p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[329]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,2] = d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  (data->simulationInfo->realParameter[309]/* d[1].d.p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,1] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  (data->simulationInfo->realParameter[308]/* d[1].d.p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
d[1].d.p.areas[7,6] = d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  (data->simulationInfo->realParameter[307]/* d[1].d.p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[330]/* d[1].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
d[1].d.p.areas[7,5] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  (data->simulationInfo->realParameter[306]/* d[1].d.p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
d[1].d.p.areas[7,4] = d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  (data->simulationInfo->realParameter[305]/* d[1].d.p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[329]/* d[1].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
d[1].d.p.areas[7,3] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  (data->simulationInfo->realParameter[304]/* d[1].d.p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[329]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
d[1].d.p.areas[7,2] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  (data->simulationInfo->realParameter[303]/* d[1].d.p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
d[1].d.p.areas[6,6] = d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  (data->simulationInfo->realParameter[301]/* d[1].d.p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[330]/* d[1].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
d[1].d.p.areas[6,5] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  (data->simulationInfo->realParameter[300]/* d[1].d.p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
d[1].d.p.areas[6,4] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  (data->simulationInfo->realParameter[299]/* d[1].d.p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[329]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
d[1].d.p.areas[6,2] = d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  (data->simulationInfo->realParameter[297]/* d[1].d.p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
d[1].d.p.areas[6,1] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  (data->simulationInfo->realParameter[296]/* d[1].d.p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
d[1].d.p.areas[5,6] = d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  (data->simulationInfo->realParameter[295]/* d[1].d.p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[330]/* d[1].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
d[1].d.p.areas[5,5] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  (data->simulationInfo->realParameter[294]/* d[1].d.p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
d[1].d.p.areas[5,4] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  (data->simulationInfo->realParameter[293]/* d[1].d.p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[329]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
d[1].d.p.areas[5,2] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  (data->simulationInfo->realParameter[291]/* d[1].d.p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
d[1].d.p.areas[4,6] = 0.5 * d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  (data->simulationInfo->realParameter[289]/* d[1].d.p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[330]/* d[1].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
d[1].d.p.areas[4,4] = d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  (data->simulationInfo->realParameter[287]/* d[1].d.p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[329]/* d[1].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
d[1].d.p.areas[4,3] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  (data->simulationInfo->realParameter[286]/* d[1].d.p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[329]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
d[1].d.p.areas[4,2] = d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  (data->simulationInfo->realParameter[285]/* d[1].d.p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
d[1].d.p.areas[4,1] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  (data->simulationInfo->realParameter[284]/* d[1].d.p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
d[1].d.p.areas[3,6] = 0.5 * d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  (data->simulationInfo->realParameter[283]/* d[1].d.p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[330]/* d[1].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
d[1].d.p.areas[3,4] = d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  (data->simulationInfo->realParameter[281]/* d[1].d.p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[329]/* d[1].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
d[1].d.p.areas[3,3] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  (data->simulationInfo->realParameter[280]/* d[1].d.p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[329]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
d[1].d.p.areas[3,2] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  (data->simulationInfo->realParameter[279]/* d[1].d.p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
d[1].d.p.areas[2,6] = 0.5 * d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  (data->simulationInfo->realParameter[277]/* d[1].d.p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[330]/* d[1].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
d[1].d.p.areas[2,4] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  (data->simulationInfo->realParameter[275]/* d[1].d.p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[329]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
d[1].d.p.areas[2,2] = d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  (data->simulationInfo->realParameter[273]/* d[1].d.p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
d[1].d.p.areas[2,1] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  (data->simulationInfo->realParameter[272]/* d[1].d.p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
d[1].d.p.areas[1,6] = 0.5 * d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  (data->simulationInfo->realParameter[271]/* d[1].d.p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[330]/* d[1].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
d[1].d.p.areas[1,4] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  (data->simulationInfo->realParameter[269]/* d[1].d.p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[329]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
d[1].d.p.areas[1,2] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  (data->simulationInfo->realParameter[267]/* d[1].d.p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[328]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
d[1].d.p.capacity = 18000.0 * d[1].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  (data->simulationInfo->realParameter[317]/* d[1].d.p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[344]/* d[1].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
d[1].d.p.rechargedThreshold = d[1].d.p.capacity * d[1].d.p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  (data->simulationInfo->realParameter[342]/* d[1].d.p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[317]/* d[1].d.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[341]/* d[1].d.p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
d[1].d.p.dangerousBatteryLevel = d[1].d.p.capacity * d[1].d.p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  (data->simulationInfo->realParameter[323]/* d[1].d.p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[317]/* d[1].d.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[324]/* d[1].d.p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
d[1].d.p.rechargeRate = 2.5 * d[1].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  (data->simulationInfo->realParameter[340]/* d[1].d.p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[344]/* d[1].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
d[1].d.p.commDischarge = 5.0 * d[1].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  (data->simulationInfo->realParameter[319]/* d[1].d.p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[344]/* d[1].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
d[1].d.p.batteryDischarge = d[1].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  (data->simulationInfo->realParameter[316]/* d[1].d.p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[344]/* d[1].d.p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
d[1].d.p.dangerRadius = 3.0 + d[1].d.p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  (data->simulationInfo->realParameter[322]/* d[1].d.p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[335]/* d[1].d.p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
d[1].p.areas[8,6] = d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  (data->simulationInfo->realParameter[396]/* d[1].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[413]/* d[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
d[1].p.areas[8,5] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  (data->simulationInfo->realParameter[395]/* d[1].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
d[1].p.areas[8,4] = d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  (data->simulationInfo->realParameter[394]/* d[1].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[412]/* d[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
d[1].p.areas[8,3] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  (data->simulationInfo->realParameter[393]/* d[1].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[412]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
d[1].p.areas[8,2] = d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  (data->simulationInfo->realParameter[392]/* d[1].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
d[1].p.areas[8,1] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  (data->simulationInfo->realParameter[391]/* d[1].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
d[1].p.areas[7,6] = d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  (data->simulationInfo->realParameter[390]/* d[1].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[413]/* d[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
d[1].p.areas[7,5] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  (data->simulationInfo->realParameter[389]/* d[1].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
d[1].p.areas[7,4] = d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  (data->simulationInfo->realParameter[388]/* d[1].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[412]/* d[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
d[1].p.areas[7,3] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  (data->simulationInfo->realParameter[387]/* d[1].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[412]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
d[1].p.areas[7,2] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  (data->simulationInfo->realParameter[386]/* d[1].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
d[1].p.areas[6,6] = d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  (data->simulationInfo->realParameter[384]/* d[1].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[413]/* d[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
d[1].p.areas[6,5] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  (data->simulationInfo->realParameter[383]/* d[1].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
d[1].p.areas[6,4] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  (data->simulationInfo->realParameter[382]/* d[1].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[412]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
d[1].p.areas[6,2] = d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  (data->simulationInfo->realParameter[380]/* d[1].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
d[1].p.areas[6,1] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  (data->simulationInfo->realParameter[379]/* d[1].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
d[1].p.areas[5,6] = d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  (data->simulationInfo->realParameter[378]/* d[1].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[413]/* d[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
d[1].p.areas[5,5] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  (data->simulationInfo->realParameter[377]/* d[1].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
d[1].p.areas[5,4] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  (data->simulationInfo->realParameter[376]/* d[1].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[412]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
d[1].p.areas[5,2] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  (data->simulationInfo->realParameter[374]/* d[1].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
d[1].p.areas[4,6] = 0.5 * d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  (data->simulationInfo->realParameter[372]/* d[1].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[413]/* d[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
d[1].p.areas[4,4] = d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  (data->simulationInfo->realParameter[370]/* d[1].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[412]/* d[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
d[1].p.areas[4,3] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  (data->simulationInfo->realParameter[369]/* d[1].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[412]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
d[1].p.areas[4,2] = d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  (data->simulationInfo->realParameter[368]/* d[1].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
d[1].p.areas[4,1] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  (data->simulationInfo->realParameter[367]/* d[1].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
d[1].p.areas[3,6] = 0.5 * d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  (data->simulationInfo->realParameter[366]/* d[1].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[413]/* d[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
d[1].p.areas[3,4] = d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  (data->simulationInfo->realParameter[364]/* d[1].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[412]/* d[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
d[1].p.areas[3,3] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  (data->simulationInfo->realParameter[363]/* d[1].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[412]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
d[1].p.areas[3,2] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  (data->simulationInfo->realParameter[362]/* d[1].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
d[1].p.areas[2,6] = 0.5 * d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  (data->simulationInfo->realParameter[360]/* d[1].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[413]/* d[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
d[1].p.areas[2,4] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  (data->simulationInfo->realParameter[358]/* d[1].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[412]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
d[1].p.areas[2,2] = d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  (data->simulationInfo->realParameter[356]/* d[1].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
d[1].p.areas[2,1] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  (data->simulationInfo->realParameter[355]/* d[1].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
d[1].p.areas[1,6] = 0.5 * d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  (data->simulationInfo->realParameter[354]/* d[1].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[413]/* d[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
d[1].p.areas[1,4] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  (data->simulationInfo->realParameter[352]/* d[1].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[412]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
d[1].p.areas[1,2] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  (data->simulationInfo->realParameter[350]/* d[1].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[411]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
d[1].p.capacity = 18000.0 * d[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  (data->simulationInfo->realParameter[400]/* d[1].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[427]/* d[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
d[1].p.rechargedThreshold = d[1].p.capacity * d[1].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  (data->simulationInfo->realParameter[425]/* d[1].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[400]/* d[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[424]/* d[1].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
d[1].p.dangerousBatteryLevel = d[1].p.capacity * d[1].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  (data->simulationInfo->realParameter[406]/* d[1].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[400]/* d[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[407]/* d[1].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
d[1].p.rechargeRate = 2.5 * d[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  (data->simulationInfo->realParameter[423]/* d[1].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[427]/* d[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
d[1].p.commDischarge = 5.0 * d[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  (data->simulationInfo->realParameter[402]/* d[1].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[427]/* d[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
d[1].p.batteryDischarge = d[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  (data->simulationInfo->realParameter[399]/* d[1].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[427]/* d[1].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
d[1].p.dangerRadius = 3.0 + d[1].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  (data->simulationInfo->realParameter[405]/* d[1].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[418]/* d[1].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
p.areas[8,6] = p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  (data->simulationInfo->realParameter[645]/* p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[662]/* p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
p.areas[8,5] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  (data->simulationInfo->realParameter[644]/* p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[660]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
p.areas[8,4] = p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  (data->simulationInfo->realParameter[643]/* p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[661]/* p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
p.areas[8,3] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  (data->simulationInfo->realParameter[642]/* p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[661]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
p.areas[8,2] = p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  (data->simulationInfo->realParameter[641]/* p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[660]/* p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
p.areas[8,1] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  (data->simulationInfo->realParameter[640]/* p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[660]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
p.areas[7,6] = p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  (data->simulationInfo->realParameter[639]/* p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[662]/* p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
p.areas[7,5] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  (data->simulationInfo->realParameter[638]/* p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[660]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
p.areas[7,4] = p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  (data->simulationInfo->realParameter[637]/* p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[661]/* p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
p.areas[7,3] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  (data->simulationInfo->realParameter[636]/* p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[661]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
p.areas[7,2] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  (data->simulationInfo->realParameter[635]/* p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[660]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
p.areas[6,6] = p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  (data->simulationInfo->realParameter[633]/* p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[662]/* p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
p.areas[6,5] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  (data->simulationInfo->realParameter[632]/* p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[660]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
p.areas[6,4] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  (data->simulationInfo->realParameter[631]/* p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[661]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
p.areas[6,2] = p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  (data->simulationInfo->realParameter[629]/* p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[660]/* p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
p.areas[6,1] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  (data->simulationInfo->realParameter[628]/* p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[660]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
p.areas[5,6] = p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  (data->simulationInfo->realParameter[627]/* p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[662]/* p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
p.areas[5,5] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  (data->simulationInfo->realParameter[626]/* p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[660]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 481
type: SIMPLE_ASSIGN
p.areas[5,4] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  (data->simulationInfo->realParameter[625]/* p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[661]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
p.areas[5,2] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  (data->simulationInfo->realParameter[623]/* p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[660]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
p.areas[4,6] = 0.5 * p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  (data->simulationInfo->realParameter[621]/* p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[662]/* p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
p.areas[4,4] = p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  (data->simulationInfo->realParameter[619]/* p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[661]/* p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
p.areas[4,3] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  (data->simulationInfo->realParameter[618]/* p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[661]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
p.areas[4,2] = p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  (data->simulationInfo->realParameter[617]/* p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[660]/* p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
p.areas[4,1] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  (data->simulationInfo->realParameter[616]/* p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[660]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
p.areas[3,6] = 0.5 * p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  (data->simulationInfo->realParameter[615]/* p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[662]/* p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
p.areas[3,4] = p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  (data->simulationInfo->realParameter[613]/* p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[661]/* p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
p.areas[3,3] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  (data->simulationInfo->realParameter[612]/* p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[661]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
p.areas[3,2] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  (data->simulationInfo->realParameter[611]/* p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[660]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
p.areas[2,6] = 0.5 * p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  (data->simulationInfo->realParameter[609]/* p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[662]/* p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
p.areas[2,4] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  (data->simulationInfo->realParameter[607]/* p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[661]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
p.areas[2,2] = p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  (data->simulationInfo->realParameter[605]/* p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[660]/* p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
p.areas[2,1] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  (data->simulationInfo->realParameter[604]/* p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[660]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
p.areas[1,6] = 0.5 * p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  (data->simulationInfo->realParameter[603]/* p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[662]/* p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
p.areas[1,4] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  (data->simulationInfo->realParameter[601]/* p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[661]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
p.areas[1,2] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  (data->simulationInfo->realParameter[599]/* p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[660]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
p.capacity = 18000.0 * p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  (data->simulationInfo->realParameter[649]/* p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[676]/* p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
p.rechargedThreshold = p.capacity * p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  (data->simulationInfo->realParameter[674]/* p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[649]/* p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[673]/* p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
p.dangerousBatteryLevel = p.capacity * p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  (data->simulationInfo->realParameter[655]/* p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[649]/* p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[656]/* p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
p.rechargeRate = 2.5 * p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  (data->simulationInfo->realParameter[672]/* p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[676]/* p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
p.commDischarge = 5.0 * p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  (data->simulationInfo->realParameter[651]/* p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[676]/* p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
p.batteryDischarge = p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  (data->simulationInfo->realParameter[648]/* p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[676]/* p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
p.dangerRadius = 3.0 + p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  (data->simulationInfo->realParameter[654]/* p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[667]/* p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}
OMC_DISABLE_OPT
void System_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  System_eqFunction_140(data, threadData);
  System_eqFunction_141(data, threadData);
  System_eqFunction_142(data, threadData);
  System_eqFunction_143(data, threadData);
  System_eqFunction_144(data, threadData);
  System_eqFunction_145(data, threadData);
  System_eqFunction_146(data, threadData);
  System_eqFunction_147(data, threadData);
  System_eqFunction_148(data, threadData);
  System_eqFunction_149(data, threadData);
  System_eqFunction_150(data, threadData);
  System_eqFunction_151(data, threadData);
  System_eqFunction_152(data, threadData);
  System_eqFunction_153(data, threadData);
  System_eqFunction_154(data, threadData);
  System_eqFunction_155(data, threadData);
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
  System_eqFunction_311(data, threadData);
  System_eqFunction_312(data, threadData);
  System_eqFunction_313(data, threadData);
  System_eqFunction_314(data, threadData);
  System_eqFunction_315(data, threadData);
  System_eqFunction_316(data, threadData);
  System_eqFunction_318(data, threadData);
  System_eqFunction_319(data, threadData);
  System_eqFunction_320(data, threadData);
  System_eqFunction_321(data, threadData);
  System_eqFunction_322(data, threadData);
  System_eqFunction_323(data, threadData);
  System_eqFunction_324(data, threadData);
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
  System_eqFunction_503(data, threadData);
  System_eqFunction_504(data, threadData);
  System_eqFunction_505(data, threadData);
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
  (data->simulationInfo->integerParameter[3]/* cc.p.nDrones PARAM */)  = ((modelica_integer) 1);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  (data->simulationInfo->integerParameter[4]/* cc_to_drone[1].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  (data->simulationInfo->integerParameter[5]/* cc_to_drone[1].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  (data->simulationInfo->integerParameter[18]/* d[1].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[18].time_unvarying = 1;
  (data->simulationInfo->integerParameter[21]/* drone_to_cc[1].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[21].time_unvarying = 1;
  (data->simulationInfo->integerParameter[22]/* drone_to_cc[1].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[22].time_unvarying = 1;
  (data->simulationInfo->integerParameter[27]/* m.p.nAreas PARAM */)  = ((modelica_integer) 8);
  data->modelData->integerParameterData[27].time_unvarying = 1;
  (data->simulationInfo->integerParameter[32]/* p.nDrones PARAM */)  = ((modelica_integer) 1);
  data->modelData->integerParameterData[32].time_unvarying = 1;
  System_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

