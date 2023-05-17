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
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[6348]/* d[1].d.p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 2 */
  data->modelData->samplesInfo[i].index = 2;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[3415]/* d[1].ctrl.prm.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 3 */
  data->modelData->samplesInfo[i].index = 3;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[9281]/* d[1].p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 4 */
  data->modelData->samplesInfo[i].index = 4;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[6349]/* d[2].d.p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 5 */
  data->modelData->samplesInfo[i].index = 5;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[3416]/* d[2].ctrl.prm.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 6 */
  data->modelData->samplesInfo[i].index = 6;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[9282]/* d[2].p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 7 */
  data->modelData->samplesInfo[i].index = 7;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[6350]/* d[3].d.p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 8 */
  data->modelData->samplesInfo[i].index = 8;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[3417]/* d[3].ctrl.prm.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 9 */
  data->modelData->samplesInfo[i].index = 9;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[9283]/* d[3].p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 10 */
  data->modelData->samplesInfo[i].index = 10;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[6351]/* d[4].d.p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 11 */
  data->modelData->samplesInfo[i].index = 11;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[3418]/* d[4].ctrl.prm.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 12 */
  data->modelData->samplesInfo[i].index = 12;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[9284]/* d[4].p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 13 */
  data->modelData->samplesInfo[i].index = 13;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[6352]/* d[5].d.p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 14 */
  data->modelData->samplesInfo[i].index = 14;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[3419]/* d[5].ctrl.prm.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 15 */
  data->modelData->samplesInfo[i].index = 15;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[9285]/* d[5].p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 16 */
  data->modelData->samplesInfo[i].index = 16;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[6353]/* d[6].d.p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 17 */
  data->modelData->samplesInfo[i].index = 17;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[3420]/* d[6].ctrl.prm.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 18 */
  data->modelData->samplesInfo[i].index = 18;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[9286]/* d[6].p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 19 */
  data->modelData->samplesInfo[i].index = 19;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[6354]/* d[7].d.p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 20 */
  data->modelData->samplesInfo[i].index = 20;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[3421]/* d[7].ctrl.prm.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 21 */
  data->modelData->samplesInfo[i].index = 21;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[9287]/* d[7].p.Tdrone PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 22 */
  data->modelData->samplesInfo[i].index = 22;
  data->modelData->samplesInfo[i].start = 0.0;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[0]/* cc.Tcc PARAM */)  /* (max int for single time events) */;
  i++;
  /* sample 23 */
  data->modelData->samplesInfo[i].index = 23;
  data->modelData->samplesInfo[i].start = (data->simulationInfo->realParameter[15549]/* m.p.monitor_start PARAM */) ;
  data->modelData->samplesInfo[i].interval = (data->simulationInfo->realParameter[15142]/* m.p.Tm PARAM */)  /* (max int for single time events) */;
  i++;
}

const char *System_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time > m.p.stop_simulation or cc.endSimulation"};
  static const int occurEqs0[] = {1,599};
  static const int *occurEqs[] = {occurEqs0};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void System_eqFunction_563(DATA* data, threadData_t *threadData);

int System_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  System_eqFunction_563(data, threadData);
  
  TRACE_POP
  return 0;
}

int System_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;

  modelica_boolean tmp274;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp274 = GreaterZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[15556]/* m.p.stop_simulation PARAM */) , data->simulationInfo->storedRelations[0]);
  gout[0] = ((tmp274 || (data->localData[0]->booleanVars[94]/* cc.endSimulation DISCRETE */) )) ? 1 : -1;

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

  modelica_boolean tmp275;
  
  if(evalforZeroCross) {
    tmp275 = GreaterZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[15556]/* m.p.stop_simulation PARAM */) , data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp275;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue > (data->simulationInfo->realParameter[15556]/* m.p.stop_simulation PARAM */) );
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

