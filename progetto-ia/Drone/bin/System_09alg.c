/* Algebraic */
#include "System_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void System_eqFunction_83(DATA* data, threadData_t *threadData);
extern void System_eqFunction_84(DATA* data, threadData_t *threadData);
extern void System_eqFunction_128(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
  {
    System_eqFunction_83(data, threadData);
    threadData->lastEquationSolved = 83;
  }
  {
    System_eqFunction_84(data, threadData);
    threadData->lastEquationSolved = 84;
  }
  {
    System_eqFunction_128(data, threadData);
    threadData->lastEquationSolved = 128;
  }
}
/* for continuous time variables */
int System_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  System_function_savePreSynchronous(data, threadData);
  
  functionAlg_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
