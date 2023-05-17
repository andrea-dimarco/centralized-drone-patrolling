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
equation index: 129
type: SIMPLE_ASSIGN
cc.choice = p.cc_choice
*/
OMC_DISABLE_OPT
static void System_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  (data->simulationInfo->realParameter[1]/* cc.choice PARAM */)  = (data->simulationInfo->realParameter[363]/* p.cc_choice PARAM */) ;
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
cc.Tcc = p.Tcc
*/
OMC_DISABLE_OPT
static void System_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  (data->simulationInfo->realParameter[0]/* cc.Tcc PARAM */)  = (data->simulationInfo->realParameter[356]/* p.Tcc PARAM */) ;
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
d[3].ctrl.kx2 = 2.0 * d[3].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  (data->simulationInfo->realParameter[40]/* d[3].ctrl.kx2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[55]/* d[3].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
d[3].ctrl.kx1 = -d[3].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  modelica_real tmp0;
  tmp0 = (data->simulationInfo->realParameter[55]/* d[3].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[37]/* d[3].ctrl.kx1 PARAM */)  = (-((tmp0 * tmp0)));
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
d[3].ctrl.ky2 = 2.0 * d[3].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  (data->simulationInfo->realParameter[46]/* d[3].ctrl.ky2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[55]/* d[3].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
d[3].ctrl.ky1 = -d[3].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  modelica_real tmp1;
  tmp1 = (data->simulationInfo->realParameter[55]/* d[3].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[43]/* d[3].ctrl.ky1 PARAM */)  = (-((tmp1 * tmp1)));
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
d[3].ctrl.kz2 = 2.0 * d[3].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  (data->simulationInfo->realParameter[52]/* d[3].ctrl.kz2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[55]/* d[3].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
d[3].ctrl.kz1 = -d[3].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  modelica_real tmp2;
  tmp2 = (data->simulationInfo->realParameter[55]/* d[3].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[49]/* d[3].ctrl.kz1 PARAM */)  = (-((tmp2 * tmp2)));
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
d[2].ctrl.kx2 = 2.0 * d[2].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  (data->simulationInfo->realParameter[39]/* d[2].ctrl.kx2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[54]/* d[2].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
d[2].ctrl.kx1 = -d[2].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  modelica_real tmp3;
  tmp3 = (data->simulationInfo->realParameter[54]/* d[2].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[36]/* d[2].ctrl.kx1 PARAM */)  = (-((tmp3 * tmp3)));
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
d[2].ctrl.ky2 = 2.0 * d[2].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  (data->simulationInfo->realParameter[45]/* d[2].ctrl.ky2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[54]/* d[2].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
d[2].ctrl.ky1 = -d[2].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  modelica_real tmp4;
  tmp4 = (data->simulationInfo->realParameter[54]/* d[2].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[42]/* d[2].ctrl.ky1 PARAM */)  = (-((tmp4 * tmp4)));
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
d[2].ctrl.kz2 = 2.0 * d[2].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  (data->simulationInfo->realParameter[51]/* d[2].ctrl.kz2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[54]/* d[2].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
d[2].ctrl.kz1 = -d[2].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  modelica_real tmp5;
  tmp5 = (data->simulationInfo->realParameter[54]/* d[2].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[48]/* d[2].ctrl.kz1 PARAM */)  = (-((tmp5 * tmp5)));
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
d[1].ctrl.kx2 = 2.0 * d[1].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  (data->simulationInfo->realParameter[38]/* d[1].ctrl.kx2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[53]/* d[1].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
d[1].ctrl.kx1 = -d[1].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  modelica_real tmp6;
  tmp6 = (data->simulationInfo->realParameter[53]/* d[1].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[35]/* d[1].ctrl.kx1 PARAM */)  = (-((tmp6 * tmp6)));
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
d[1].ctrl.ky2 = 2.0 * d[1].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  (data->simulationInfo->realParameter[44]/* d[1].ctrl.ky2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[53]/* d[1].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
d[1].ctrl.ky1 = -d[1].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  modelica_real tmp7;
  tmp7 = (data->simulationInfo->realParameter[53]/* d[1].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[41]/* d[1].ctrl.ky1 PARAM */)  = (-((tmp7 * tmp7)));
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
d[1].ctrl.kz2 = 2.0 * d[1].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  (data->simulationInfo->realParameter[50]/* d[1].ctrl.kz2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[53]/* d[1].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
d[1].ctrl.kz1 = -d[1].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  modelica_real tmp8;
  tmp8 = (data->simulationInfo->realParameter[53]/* d[1].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[47]/* d[1].ctrl.kz1 PARAM */)  = (-((tmp8 * tmp8)));
  TRACE_POP
}
OMC_DISABLE_OPT
void System_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  System_eqFunction_129(data, threadData);
  System_eqFunction_130(data, threadData);
  System_eqFunction_132(data, threadData);
  System_eqFunction_133(data, threadData);
  System_eqFunction_134(data, threadData);
  System_eqFunction_135(data, threadData);
  System_eqFunction_136(data, threadData);
  System_eqFunction_137(data, threadData);
  System_eqFunction_139(data, threadData);
  System_eqFunction_140(data, threadData);
  System_eqFunction_141(data, threadData);
  System_eqFunction_142(data, threadData);
  System_eqFunction_143(data, threadData);
  System_eqFunction_144(data, threadData);
  System_eqFunction_146(data, threadData);
  System_eqFunction_147(data, threadData);
  System_eqFunction_148(data, threadData);
  System_eqFunction_149(data, threadData);
  System_eqFunction_150(data, threadData);
  System_eqFunction_151(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int System_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  (data->simulationInfo->integerParameter[0]/* cc.p.nDrones PARAM */)  = ((modelica_integer) 3);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  (data->simulationInfo->integerParameter[4]/* d[1].d.drone_id PARAM */)  = ((modelica_integer) 1);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  (data->simulationInfo->integerParameter[5]/* d[2].d.drone_id PARAM */)  = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  (data->simulationInfo->integerParameter[6]/* d[3].d.drone_id PARAM */)  = ((modelica_integer) 1);
  data->modelData->integerParameterData[6].time_unvarying = 1;
  (data->simulationInfo->integerParameter[14]/* p.nDrones PARAM */)  = ((modelica_integer) 3);
  data->modelData->integerParameterData[14].time_unvarying = 1;
  System_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

