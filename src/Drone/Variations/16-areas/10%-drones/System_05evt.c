/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "System_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void System_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
  /* sample 1 */
  data->modelData->samplesInfo[i].index = 1;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[678]/* d[1].d.p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 2 */
  data->modelData->samplesInfo[i].index = 2;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[416]/* d[1].ctrl.prm.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 3 */
  data->modelData->samplesInfo[i].index = 3;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[940]/* d[1].p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 4 */
  data->modelData->samplesInfo[i].index = 4;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[679]/* d[2].d.p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 5 */
  data->modelData->samplesInfo[i].index = 5;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[417]/* d[2].ctrl.prm.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 6 */
  data->modelData->samplesInfo[i].index = 6;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[941]/* d[2].p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 7 */
  data->modelData->samplesInfo[i].index = 7;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[0]/* cc.Tcc PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 8 */
  data->modelData->samplesInfo[i].index = 8;
  data->modelData->samplesInfo[i].start = (data->simulationInfo->realParameter[1583]/* m.p.monitor_start PARAM */) ;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[1464]/* m.p.Tm PARAM */)  /* (max int for single time events) */;
  i++;
}

const char *System_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time > m.p.stop_simulation or cc.endSimulation"};
  static const int occurEqs0[] = {1,180};
  static const int *occurEqs[] = {occurEqs0};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void System_eqFunction_173(DATA* data, threadData_t *threadData);

int System_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  System_eqFunction_173(data, threadData);
  
  TRACE_POP
  return 0;
}

int System_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;

  modelica_boolean tmp129;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp129 = GreaterZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[1590]/* m.p.stop_simulation PARAM */) , data->simulationInfo->storedRelations[0]);
  gout[0] = ((tmp129 || (data->localData[0]->booleanVars[29]/* cc.endSimulation DISCRETE */) )) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *System_relationDescription(int i)
{
  const char *res[] = {"time > m.p.stop_simulation"};
  return res[i];
}

int System_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;

  modelica_boolean tmp130;
  
  if(evalforZeroCross) {
    tmp130 = GreaterZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[1590]/* m.p.stop_simulation PARAM */) , data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp130;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue > (data->simulationInfo->realParameter[1590]/* m.p.stop_simulation PARAM */) );
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

