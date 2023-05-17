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
void System_updateBoundParameters_1(DATA *data, threadData_t *threadData);
OMC_DISABLE_OPT
int System_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  (data->simulationInfo->integerParameter[1]/* cc.p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  (data->simulationInfo->integerParameter[2]/* cc.p.nAreas PARAM */)  = ((modelica_integer) 16);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  (data->simulationInfo->integerParameter[3]/* cc.p.nDrones PARAM */)  = ((modelica_integer) 7);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  (data->simulationInfo->integerParameter[4]/* cc_to_drone[1].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  (data->simulationInfo->integerParameter[5]/* cc_to_drone[2].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  (data->simulationInfo->integerParameter[6]/* cc_to_drone[3].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[6].time_unvarying = 1;
  (data->simulationInfo->integerParameter[7]/* cc_to_drone[4].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  (data->simulationInfo->integerParameter[8]/* cc_to_drone[5].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  (data->simulationInfo->integerParameter[9]/* cc_to_drone[6].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  (data->simulationInfo->integerParameter[10]/* cc_to_drone[7].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[10].time_unvarying = 1;
  (data->simulationInfo->integerParameter[11]/* cc_to_drone[1].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[11].time_unvarying = 1;
  (data->simulationInfo->integerParameter[12]/* cc_to_drone[2].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[12].time_unvarying = 1;
  (data->simulationInfo->integerParameter[13]/* cc_to_drone[3].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[13].time_unvarying = 1;
  (data->simulationInfo->integerParameter[14]/* cc_to_drone[4].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[14].time_unvarying = 1;
  (data->simulationInfo->integerParameter[15]/* cc_to_drone[5].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[15].time_unvarying = 1;
  (data->simulationInfo->integerParameter[16]/* cc_to_drone[6].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[16].time_unvarying = 1;
  (data->simulationInfo->integerParameter[17]/* cc_to_drone[7].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[17].time_unvarying = 1;
  (data->simulationInfo->integerParameter[102]/* d[1].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[102].time_unvarying = 1;
  (data->simulationInfo->integerParameter[103]/* d[2].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[103].time_unvarying = 1;
  (data->simulationInfo->integerParameter[104]/* d[3].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[104].time_unvarying = 1;
  (data->simulationInfo->integerParameter[105]/* d[4].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[105].time_unvarying = 1;
  (data->simulationInfo->integerParameter[106]/* d[5].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[106].time_unvarying = 1;
  (data->simulationInfo->integerParameter[107]/* d[6].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[107].time_unvarying = 1;
  (data->simulationInfo->integerParameter[108]/* d[7].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[108].time_unvarying = 1;
  (data->simulationInfo->integerParameter[123]/* drone_to_cc[1].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[123].time_unvarying = 1;
  (data->simulationInfo->integerParameter[124]/* drone_to_cc[2].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[124].time_unvarying = 1;
  (data->simulationInfo->integerParameter[125]/* drone_to_cc[3].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[125].time_unvarying = 1;
  (data->simulationInfo->integerParameter[126]/* drone_to_cc[4].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[126].time_unvarying = 1;
  (data->simulationInfo->integerParameter[127]/* drone_to_cc[5].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[127].time_unvarying = 1;
  (data->simulationInfo->integerParameter[128]/* drone_to_cc[6].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[128].time_unvarying = 1;
  (data->simulationInfo->integerParameter[129]/* drone_to_cc[7].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[129].time_unvarying = 1;
  (data->simulationInfo->integerParameter[130]/* drone_to_cc[1].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[130].time_unvarying = 1;
  (data->simulationInfo->integerParameter[131]/* drone_to_cc[2].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[131].time_unvarying = 1;
  (data->simulationInfo->integerParameter[132]/* drone_to_cc[3].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[132].time_unvarying = 1;
  (data->simulationInfo->integerParameter[133]/* drone_to_cc[4].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[133].time_unvarying = 1;
  (data->simulationInfo->integerParameter[134]/* drone_to_cc[5].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[134].time_unvarying = 1;
  (data->simulationInfo->integerParameter[135]/* drone_to_cc[6].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[135].time_unvarying = 1;
  (data->simulationInfo->integerParameter[136]/* drone_to_cc[7].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[136].time_unvarying = 1;
  (data->simulationInfo->integerParameter[153]/* m.p.nAreas PARAM */)  = ((modelica_integer) 16);
  data->modelData->integerParameterData[153].time_unvarying = 1;
  (data->simulationInfo->integerParameter[158]/* p.nDrones PARAM */)  = ((modelica_integer) 7);
  data->modelData->integerParameterData[158].time_unvarying = 1;
  System_updateBoundParameters_0(data, threadData);
  System_updateBoundParameters_1(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

