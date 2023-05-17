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

  m.std_dev_all_areas := $START.m.std_dev_all_areas;
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
  m.avg_no_drone_time[8] := $START.m.avg_no_drone_time[8];
  m.avg_no_drone_time[7] := $START.m.avg_no_drone_time[7];
  m.avg_no_drone_time[6] := $START.m.avg_no_drone_time[6];
  m.avg_no_drone_time[5] := $START.m.avg_no_drone_time[5];
  m.avg_no_drone_time[4] := $START.m.avg_no_drone_time[4];
  m.avg_no_drone_time[3] := $START.m.avg_no_drone_time[3];
  m.avg_no_drone_time[2] := $START.m.avg_no_drone_time[2];
  m.avg_no_drone_time[1] := $START.m.avg_no_drone_time[1];
  m.no_drone_time[8] := $START.m.no_drone_time[8];
  m.no_drone_time[7] := $START.m.no_drone_time[7];
  m.no_drone_time[6] := $START.m.no_drone_time[6];
  m.no_drone_time[5] := $START.m.no_drone_time[5];
  m.no_drone_time[4] := $START.m.no_drone_time[4];
  m.no_drone_time[3] := $START.m.no_drone_time[3];
  m.no_drone_time[2] := $START.m.no_drone_time[2];
  m.no_drone_time[1] := $START.m.no_drone_time[1];
  m.p_drones_all_areas := $START.m.p_drones_all_areas;
  m.p_drones[8] := $START.m.p_drones[8];
  m.p_drones[7] := $START.m.p_drones[7];
  m.p_drones[6] := $START.m.p_drones[6];
  m.p_drones[5] := $START.m.p_drones[5];
  m.p_drones[4] := $START.m.p_drones[4];
  m.p_drones[3] := $START.m.p_drones[3];
  m.p_drones[2] := $START.m.p_drones[2];
  m.p_drones[1] := $START.m.p_drones[1];
  m.beenVisited[8] := $START.m.beenVisited[8];
  m.beenVisited[7] := $START.m.beenVisited[7];
  m.beenVisited[6] := $START.m.beenVisited[6];
  m.beenVisited[5] := $START.m.beenVisited[5];
  m.beenVisited[4] := $START.m.beenVisited[4];
  m.beenVisited[3] := $START.m.beenVisited[3];
  m.beenVisited[2] := $START.m.beenVisited[2];
  m.beenVisited[1] := $START.m.beenVisited[1];
  m.avg_drones_all_areas := $START.m.avg_drones_all_areas;
  m.avg_drones[8] := $START.m.avg_drones[8];
  m.avg_drones[7] := $START.m.avg_drones[7];
  m.avg_drones[6] := $START.m.avg_drones[6];
  m.avg_drones[5] := $START.m.avg_drones[5];
  m.avg_drones[4] := $START.m.avg_drones[4];
  m.avg_drones[3] := $START.m.avg_drones[3];
  m.avg_drones[2] := $START.m.avg_drones[2];
  m.avg_drones[1] := $START.m.avg_drones[1];
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
  $whenCondition2 := $START.$whenCondition2;
  $whenCondition1 := $START.$whenCondition1;
  $whenCondition1 := false;
  $whenCondition2 := time > m.p.stop_simulation;
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
*/
void System_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  modelica_boolean tmp0;
  integer_array tmp1;
  integer_array tmp2;
  real_array tmp3;
  real_array tmp4;
  integer_array tmp5;
  integer_array tmp6;
  real_array tmp7;
  real_array tmp8;
  real_array tmp9;
  real_array tmp10;
  real_array tmp11;
  real_array tmp12;
  real_array tmp13;
  real_array tmp14;
  (data->localData[0]->realVars[150]/* m.std_dev_all_areas DISCRETE */)  = (data->modelData->realVarsData[150]/* m.std_dev_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[149]/* m.std_dev[8] DISCRETE */)  = (data->modelData->realVarsData[149]/* m.std_dev[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[148]/* m.std_dev[7] DISCRETE */)  = (data->modelData->realVarsData[148]/* m.std_dev[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[147]/* m.std_dev[6] DISCRETE */)  = (data->modelData->realVarsData[147]/* m.std_dev[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[146]/* m.std_dev[5] DISCRETE */)  = (data->modelData->realVarsData[146]/* m.std_dev[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[145]/* m.std_dev[4] DISCRETE */)  = (data->modelData->realVarsData[145]/* m.std_dev[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[144]/* m.std_dev[3] DISCRETE */)  = (data->modelData->realVarsData[144]/* m.std_dev[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[143]/* m.std_dev[2] DISCRETE */)  = (data->modelData->realVarsData[143]/* m.std_dev[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[142]/* m.std_dev[1] DISCRETE */)  = (data->modelData->realVarsData[142]/* m.std_dev[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[124]/* m.max_no_drone_time DISCRETE */)  = (data->modelData->realVarsData[124]/* m.max_no_drone_time DISCRETE */).attribute .start;

  (data->localData[0]->realVars[123]/* m.avg_no_drone_time_all_areas DISCRETE */)  = (data->modelData->realVarsData[123]/* m.avg_no_drone_time_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[122]/* m.avg_no_drone_time[8] DISCRETE */)  = (data->modelData->realVarsData[122]/* m.avg_no_drone_time[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[121]/* m.avg_no_drone_time[7] DISCRETE */)  = (data->modelData->realVarsData[121]/* m.avg_no_drone_time[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[120]/* m.avg_no_drone_time[6] DISCRETE */)  = (data->modelData->realVarsData[120]/* m.avg_no_drone_time[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[119]/* m.avg_no_drone_time[5] DISCRETE */)  = (data->modelData->realVarsData[119]/* m.avg_no_drone_time[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[118]/* m.avg_no_drone_time[4] DISCRETE */)  = (data->modelData->realVarsData[118]/* m.avg_no_drone_time[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[117]/* m.avg_no_drone_time[3] DISCRETE */)  = (data->modelData->realVarsData[117]/* m.avg_no_drone_time[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[116]/* m.avg_no_drone_time[2] DISCRETE */)  = (data->modelData->realVarsData[116]/* m.avg_no_drone_time[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[115]/* m.avg_no_drone_time[1] DISCRETE */)  = (data->modelData->realVarsData[115]/* m.avg_no_drone_time[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[132]/* m.no_drone_time[8] DISCRETE */)  = (data->modelData->realVarsData[132]/* m.no_drone_time[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[131]/* m.no_drone_time[7] DISCRETE */)  = (data->modelData->realVarsData[131]/* m.no_drone_time[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[130]/* m.no_drone_time[6] DISCRETE */)  = (data->modelData->realVarsData[130]/* m.no_drone_time[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[129]/* m.no_drone_time[5] DISCRETE */)  = (data->modelData->realVarsData[129]/* m.no_drone_time[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[128]/* m.no_drone_time[4] DISCRETE */)  = (data->modelData->realVarsData[128]/* m.no_drone_time[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[127]/* m.no_drone_time[3] DISCRETE */)  = (data->modelData->realVarsData[127]/* m.no_drone_time[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[126]/* m.no_drone_time[2] DISCRETE */)  = (data->modelData->realVarsData[126]/* m.no_drone_time[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[125]/* m.no_drone_time[1] DISCRETE */)  = (data->modelData->realVarsData[125]/* m.no_drone_time[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[141]/* m.p_drones_all_areas DISCRETE */)  = (data->modelData->realVarsData[141]/* m.p_drones_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[140]/* m.p_drones[8] DISCRETE */)  = (data->modelData->realVarsData[140]/* m.p_drones[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[139]/* m.p_drones[7] DISCRETE */)  = (data->modelData->realVarsData[139]/* m.p_drones[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[138]/* m.p_drones[6] DISCRETE */)  = (data->modelData->realVarsData[138]/* m.p_drones[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[137]/* m.p_drones[5] DISCRETE */)  = (data->modelData->realVarsData[137]/* m.p_drones[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[136]/* m.p_drones[4] DISCRETE */)  = (data->modelData->realVarsData[136]/* m.p_drones[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[135]/* m.p_drones[3] DISCRETE */)  = (data->modelData->realVarsData[135]/* m.p_drones[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[134]/* m.p_drones[2] DISCRETE */)  = (data->modelData->realVarsData[134]/* m.p_drones[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[133]/* m.p_drones[1] DISCRETE */)  = (data->modelData->realVarsData[133]/* m.p_drones[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[21]/* m.beenVisited[8] DISCRETE */)  = (data->modelData->integerVarsData[21]/* m.beenVisited[8] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[20]/* m.beenVisited[7] DISCRETE */)  = (data->modelData->integerVarsData[20]/* m.beenVisited[7] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[19]/* m.beenVisited[6] DISCRETE */)  = (data->modelData->integerVarsData[19]/* m.beenVisited[6] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[18]/* m.beenVisited[5] DISCRETE */)  = (data->modelData->integerVarsData[18]/* m.beenVisited[5] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[17]/* m.beenVisited[4] DISCRETE */)  = (data->modelData->integerVarsData[17]/* m.beenVisited[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[16]/* m.beenVisited[3] DISCRETE */)  = (data->modelData->integerVarsData[16]/* m.beenVisited[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[15]/* m.beenVisited[2] DISCRETE */)  = (data->modelData->integerVarsData[15]/* m.beenVisited[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[14]/* m.beenVisited[1] DISCRETE */)  = (data->modelData->integerVarsData[14]/* m.beenVisited[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[114]/* m.avg_drones_all_areas DISCRETE */)  = (data->modelData->realVarsData[114]/* m.avg_drones_all_areas DISCRETE */).attribute .start;

  (data->localData[0]->realVars[113]/* m.avg_drones[8] DISCRETE */)  = (data->modelData->realVarsData[113]/* m.avg_drones[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[112]/* m.avg_drones[7] DISCRETE */)  = (data->modelData->realVarsData[112]/* m.avg_drones[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[111]/* m.avg_drones[6] DISCRETE */)  = (data->modelData->realVarsData[111]/* m.avg_drones[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[110]/* m.avg_drones[5] DISCRETE */)  = (data->modelData->realVarsData[110]/* m.avg_drones[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[109]/* m.avg_drones[4] DISCRETE */)  = (data->modelData->realVarsData[109]/* m.avg_drones[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[108]/* m.avg_drones[3] DISCRETE */)  = (data->modelData->realVarsData[108]/* m.avg_drones[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[107]/* m.avg_drones[2] DISCRETE */)  = (data->modelData->realVarsData[107]/* m.avg_drones[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[106]/* m.avg_drones[1] DISCRETE */)  = (data->modelData->realVarsData[106]/* m.avg_drones[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[29]/* m.current_drones[8] DISCRETE */)  = (data->modelData->integerVarsData[29]/* m.current_drones[8] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[28]/* m.current_drones[7] DISCRETE */)  = (data->modelData->integerVarsData[28]/* m.current_drones[7] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[27]/* m.current_drones[6] DISCRETE */)  = (data->modelData->integerVarsData[27]/* m.current_drones[6] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[26]/* m.current_drones[5] DISCRETE */)  = (data->modelData->integerVarsData[26]/* m.current_drones[5] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[25]/* m.current_drones[4] DISCRETE */)  = (data->modelData->integerVarsData[25]/* m.current_drones[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[24]/* m.current_drones[3] DISCRETE */)  = (data->modelData->integerVarsData[24]/* m.current_drones[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[23]/* m.current_drones[2] DISCRETE */)  = (data->modelData->integerVarsData[23]/* m.current_drones[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[22]/* m.current_drones[1] DISCRETE */)  = (data->modelData->integerVarsData[22]/* m.current_drones[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[30]/* m.samples DISCRETE */)  = (data->modelData->integerVarsData[30]/* m.samples DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[31]/* m.z DISCRETE */)  = (data->modelData->integerVarsData[31]/* m.z DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[7]/* $whenCondition2 DISCRETE */)  = (data->modelData->booleanVarsData[7]/* $whenCondition2 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = (data->modelData->booleanVarsData[0]/* $whenCondition1 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = 0;

  tmp0 = Greater(data->localData[0]->timeValue,(data->simulationInfo->realParameter[354]/* m.p.stop_simulation PARAM */) );
  (data->localData[0]->booleanVars[7]/* $whenCondition2 DISCRETE */)  = tmp0;

  (data->localData[0]->integerVars[31]/* m.z DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[30]/* m.samples DISCRETE */)  = ((modelica_integer) 0);

  array_alloc_scalar_integer_array(&tmp1, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp2, ((modelica_integer*)&((&(data->localData[0]->integerVars[22]/* m.current_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  integer_array_copy_data(tmp1, tmp2);

  array_alloc_scalar_real_array(&tmp3, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp4, ((modelica_real*)&((&(data->localData[0]->realVars[106]/* m.avg_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp3, tmp4);

  (data->localData[0]->realVars[114]/* m.avg_drones_all_areas DISCRETE */)  = 0.0;

  array_alloc_scalar_integer_array(&tmp5, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp6, ((modelica_integer*)&((&(data->localData[0]->integerVars[14]/* m.beenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  integer_array_copy_data(tmp5, tmp6);

  array_alloc_scalar_real_array(&tmp7, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp8, ((modelica_real*)&((&(data->localData[0]->realVars[133]/* m.p_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp7, tmp8);

  (data->localData[0]->realVars[141]/* m.p_drones_all_areas DISCRETE */)  = 0.0;

  array_alloc_scalar_real_array(&tmp9, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp10, ((modelica_real*)&((&(data->localData[0]->realVars[125]/* m.no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp9, tmp10);

  array_alloc_scalar_real_array(&tmp11, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp12, ((modelica_real*)&((&(data->localData[0]->realVars[115]/* m.avg_no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp11, tmp12);

  (data->localData[0]->realVars[123]/* m.avg_no_drone_time_all_areas DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[124]/* m.max_no_drone_time DISCRETE */)  = 0.0;

  array_alloc_scalar_real_array(&tmp13, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp14, ((modelica_real*)&((&(data->localData[0]->realVars[142]/* m.std_dev[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp13, tmp14);

  (data->localData[0]->realVars[150]/* m.std_dev_all_areas DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
d[3].ctrl.destZ = 0.0
*/
void System_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[99]/* d[3].ctrl.destZ DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
$PRE.d[3].ctrl.destZ = d[3].ctrl.destZ
*/
void System_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  (data->simulationInfo->realVarsPre[99]/* d[3].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[99]/* d[3].ctrl.destZ DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
d[3].d.Vz = 0.0
*/
void System_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->realVars[8]/* d[3].d.Vz STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_85(DATA *data, threadData_t *threadData);


/*
equation index: 6
type: SIMPLE_ASSIGN
d[3].d.z = d[3].d.p.docking_bay[3] + d[3].d.p.dDistance * (*Real*)(d[3].d.drone_id)
*/
void System_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->realVars[17]/* d[3].d.z STATE(1,d[3].d.Vz) */)  = (data->simulationInfo->realParameter[193]/* d[3].d.p.docking_bay[3] PARAM */)  + ((data->simulationInfo->realParameter[178]/* d[3].d.p.dDistance PARAM */) ) * (((modelica_real)(data->simulationInfo->integerParameter[6]/* d[3].d.drone_id PARAM */) ));
  TRACE_POP
}
extern void System_eqFunction_97(DATA *data, threadData_t *threadData);

extern void System_eqFunction_119(DATA *data, threadData_t *threadData);

extern void System_eqFunction_120(DATA *data, threadData_t *threadData);


/*
equation index: 10
type: SIMPLE_ASSIGN
d[3].ctrl.destY = 0.0
*/
void System_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[96]/* d[3].ctrl.destY DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
$PRE.d[3].ctrl.destY = d[3].ctrl.destY
*/
void System_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  (data->simulationInfo->realVarsPre[96]/* d[3].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[96]/* d[3].ctrl.destY DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
d[3].d.Vy = 0.0
*/
void System_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  (data->localData[0]->realVars[5]/* d[3].d.Vy STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_86(DATA *data, threadData_t *threadData);


/*
equation index: 14
type: SIMPLE_ASSIGN
d[3].d.y = d[3].d.p.docking_bay[2]
*/
void System_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  (data->localData[0]->realVars[14]/* d[3].d.y STATE(1,d[3].d.Vy) */)  = (data->simulationInfo->realParameter[192]/* d[3].d.p.docking_bay[2] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_98(DATA *data, threadData_t *threadData);

extern void System_eqFunction_115(DATA *data, threadData_t *threadData);

extern void System_eqFunction_116(DATA *data, threadData_t *threadData);


/*
equation index: 18
type: SIMPLE_ASSIGN
d[3].ctrl.destX = 0.0
*/
void System_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  (data->localData[0]->realVars[93]/* d[3].ctrl.destX DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
$PRE.d[3].ctrl.destX = d[3].ctrl.destX
*/
void System_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  (data->simulationInfo->realVarsPre[93]/* d[3].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[93]/* d[3].ctrl.destX DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
d[3].d.Vx = 0.0
*/
void System_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  (data->localData[0]->realVars[2]/* d[3].d.Vx STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_87(DATA *data, threadData_t *threadData);


/*
equation index: 22
type: SIMPLE_ASSIGN
d[3].d.x = d[3].d.p.docking_bay[1]
*/
void System_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  (data->localData[0]->realVars[11]/* d[3].d.x STATE(1,d[3].d.Vx) */)  = (data->simulationInfo->realParameter[191]/* d[3].d.p.docking_bay[1] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_99(DATA *data, threadData_t *threadData);

extern void System_eqFunction_117(DATA *data, threadData_t *threadData);

extern void System_eqFunction_118(DATA *data, threadData_t *threadData);


/*
equation index: 26
type: SIMPLE_ASSIGN
d[2].ctrl.destZ = 0.0
*/
void System_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  (data->localData[0]->realVars[98]/* d[2].ctrl.destZ DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
$PRE.d[2].ctrl.destZ = d[2].ctrl.destZ
*/
void System_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  (data->simulationInfo->realVarsPre[98]/* d[2].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[98]/* d[2].ctrl.destZ DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
d[2].d.Vz = 0.0
*/
void System_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  (data->localData[0]->realVars[7]/* d[2].d.Vz STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_88(DATA *data, threadData_t *threadData);


/*
equation index: 30
type: SIMPLE_ASSIGN
d[2].d.z = d[2].d.p.docking_bay[3] + d[2].d.p.dDistance * (*Real*)(d[2].d.drone_id)
*/
void System_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  (data->localData[0]->realVars[16]/* d[2].d.z STATE(1,d[2].d.Vz) */)  = (data->simulationInfo->realParameter[190]/* d[2].d.p.docking_bay[3] PARAM */)  + ((data->simulationInfo->realParameter[177]/* d[2].d.p.dDistance PARAM */) ) * (((modelica_real)(data->simulationInfo->integerParameter[5]/* d[2].d.drone_id PARAM */) ));
  TRACE_POP
}
extern void System_eqFunction_100(DATA *data, threadData_t *threadData);

extern void System_eqFunction_108(DATA *data, threadData_t *threadData);

extern void System_eqFunction_109(DATA *data, threadData_t *threadData);


/*
equation index: 34
type: SIMPLE_ASSIGN
d[2].ctrl.destY = 0.0
*/
void System_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  (data->localData[0]->realVars[95]/* d[2].ctrl.destY DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
$PRE.d[2].ctrl.destY = d[2].ctrl.destY
*/
void System_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  (data->simulationInfo->realVarsPre[95]/* d[2].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[95]/* d[2].ctrl.destY DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
d[2].d.Vy = 0.0
*/
void System_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  (data->localData[0]->realVars[4]/* d[2].d.Vy STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_89(DATA *data, threadData_t *threadData);


/*
equation index: 38
type: SIMPLE_ASSIGN
d[2].d.y = d[2].d.p.docking_bay[2]
*/
void System_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  (data->localData[0]->realVars[13]/* d[2].d.y STATE(1,d[2].d.Vy) */)  = (data->simulationInfo->realParameter[189]/* d[2].d.p.docking_bay[2] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_101(DATA *data, threadData_t *threadData);

extern void System_eqFunction_110(DATA *data, threadData_t *threadData);

extern void System_eqFunction_111(DATA *data, threadData_t *threadData);


/*
equation index: 42
type: SIMPLE_ASSIGN
d[2].ctrl.destX = 0.0
*/
void System_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  (data->localData[0]->realVars[92]/* d[2].ctrl.destX DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
$PRE.d[2].ctrl.destX = d[2].ctrl.destX
*/
void System_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  (data->simulationInfo->realVarsPre[92]/* d[2].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[92]/* d[2].ctrl.destX DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
d[2].d.Vx = 0.0
*/
void System_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  (data->localData[0]->realVars[1]/* d[2].d.Vx STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_90(DATA *data, threadData_t *threadData);


/*
equation index: 46
type: SIMPLE_ASSIGN
d[2].d.x = d[2].d.p.docking_bay[1]
*/
void System_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  (data->localData[0]->realVars[10]/* d[2].d.x STATE(1,d[2].d.Vx) */)  = (data->simulationInfo->realParameter[188]/* d[2].d.p.docking_bay[1] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_102(DATA *data, threadData_t *threadData);

extern void System_eqFunction_112(DATA *data, threadData_t *threadData);

extern void System_eqFunction_113(DATA *data, threadData_t *threadData);


/*
equation index: 50
type: SIMPLE_ASSIGN
d[1].ctrl.destZ = 0.0
*/
void System_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  (data->localData[0]->realVars[97]/* d[1].ctrl.destZ DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.destZ = d[1].ctrl.destZ
*/
void System_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  (data->simulationInfo->realVarsPre[97]/* d[1].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[97]/* d[1].ctrl.destZ DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
d[1].d.Vz = 0.0
*/
void System_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  (data->localData[0]->realVars[6]/* d[1].d.Vz STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_91(DATA *data, threadData_t *threadData);


/*
equation index: 54
type: SIMPLE_ASSIGN
d[1].d.z = d[1].d.p.docking_bay[3] + d[1].d.p.dDistance * (*Real*)(d[1].d.drone_id)
*/
void System_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  (data->localData[0]->realVars[15]/* d[1].d.z STATE(1,d[1].d.Vz) */)  = (data->simulationInfo->realParameter[187]/* d[1].d.p.docking_bay[3] PARAM */)  + ((data->simulationInfo->realParameter[176]/* d[1].d.p.dDistance PARAM */) ) * (((modelica_real)(data->simulationInfo->integerParameter[4]/* d[1].d.drone_id PARAM */) ));
  TRACE_POP
}
extern void System_eqFunction_103(DATA *data, threadData_t *threadData);

extern void System_eqFunction_124(DATA *data, threadData_t *threadData);

extern void System_eqFunction_125(DATA *data, threadData_t *threadData);


/*
equation index: 58
type: SIMPLE_ASSIGN
d[1].ctrl.destY = 0.0
*/
void System_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  (data->localData[0]->realVars[94]/* d[1].ctrl.destY DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.destY = d[1].ctrl.destY
*/
void System_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  (data->simulationInfo->realVarsPre[94]/* d[1].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[94]/* d[1].ctrl.destY DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
d[1].d.Vy = 0.0
*/
void System_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  (data->localData[0]->realVars[3]/* d[1].d.Vy STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_92(DATA *data, threadData_t *threadData);


/*
equation index: 62
type: SIMPLE_ASSIGN
d[1].d.y = d[1].d.p.docking_bay[2]
*/
void System_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  (data->localData[0]->realVars[12]/* d[1].d.y STATE(1,d[1].d.Vy) */)  = (data->simulationInfo->realParameter[186]/* d[1].d.p.docking_bay[2] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_104(DATA *data, threadData_t *threadData);

extern void System_eqFunction_122(DATA *data, threadData_t *threadData);

extern void System_eqFunction_123(DATA *data, threadData_t *threadData);


/*
equation index: 66
type: SIMPLE_ASSIGN
d[1].ctrl.destX = 0.0
*/
void System_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  (data->localData[0]->realVars[91]/* d[1].ctrl.destX DISCRETE */)  = 0.0;
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
$PRE.d[1].ctrl.destX = d[1].ctrl.destX
*/
void System_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  (data->simulationInfo->realVarsPre[91]/* d[1].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[91]/* d[1].ctrl.destX DISCRETE */) ;
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
d[1].d.Vx = 0.0
*/
void System_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  (data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */)  = 0.0;
  TRACE_POP
}
extern void System_eqFunction_93(DATA *data, threadData_t *threadData);


/*
equation index: 70
type: SIMPLE_ASSIGN
d[1].d.x = d[1].d.p.docking_bay[1]
*/
void System_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  (data->localData[0]->realVars[9]/* d[1].d.x STATE(1,d[1].d.Vx) */)  = (data->simulationInfo->realParameter[185]/* d[1].d.p.docking_bay[1] PARAM */) ;
  TRACE_POP
}
extern void System_eqFunction_105(DATA *data, threadData_t *threadData);

extern void System_eqFunction_126(DATA *data, threadData_t *threadData);

extern void System_eqFunction_127(DATA *data, threadData_t *threadData);


/*
equation index: 74
type: ALGORITHM

  cc.setpointChangeTime[3] := $START.cc.setpointChangeTime[3];
  cc.setpointChangeTime[2] := $START.cc.setpointChangeTime[2];
  cc.setpointChangeTime[1] := $START.cc.setpointChangeTime[1];
  cc.setpointChanged[3] := $START.cc.setpointChanged[3];
  cc.setpointChanged[2] := $START.cc.setpointChanged[2];
  cc.setpointChanged[1] := $START.cc.setpointChanged[1];
  cc.lastAnswered[3] := $START.cc.lastAnswered[3];
  cc.lastAnswered[2] := $START.cc.lastAnswered[2];
  cc.lastAnswered[1] := $START.cc.lastAnswered[1];
  cc.isDead[3] := $START.cc.isDead[3];
  cc.isDead[2] := $START.cc.isDead[2];
  cc.isDead[1] := $START.cc.isDead[1];
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
  cc.isBusy[3] := $START.cc.isBusy[3];
  cc.isBusy[2] := $START.cc.isBusy[2];
  cc.isBusy[1] := $START.cc.isBusy[1];
  cc.lastVisited[8] := $START.cc.lastVisited[8];
  cc.lastVisited[7] := $START.cc.lastVisited[7];
  cc.lastVisited[6] := $START.cc.lastVisited[6];
  cc.lastVisited[5] := $START.cc.lastVisited[5];
  cc.lastVisited[4] := $START.cc.lastVisited[4];
  cc.lastVisited[3] := $START.cc.lastVisited[3];
  cc.lastVisited[2] := $START.cc.lastVisited[2];
  cc.lastVisited[1] := $START.cc.lastVisited[1];
  cc.hasBeenVisited[8] := $START.cc.hasBeenVisited[8];
  cc.hasBeenVisited[7] := $START.cc.hasBeenVisited[7];
  cc.hasBeenVisited[6] := $START.cc.hasBeenVisited[6];
  cc.hasBeenVisited[5] := $START.cc.hasBeenVisited[5];
  cc.hasBeenVisited[4] := $START.cc.hasBeenVisited[4];
  cc.hasBeenVisited[3] := $START.cc.hasBeenVisited[3];
  cc.hasBeenVisited[2] := $START.cc.hasBeenVisited[2];
  cc.hasBeenVisited[1] := $START.cc.hasBeenVisited[1];
  cc.setz[3] := $START.cc.setz[3];
  cc.setz[2] := $START.cc.setz[2];
  cc.setz[1] := $START.cc.setz[1];
  cc.sety[3] := $START.cc.sety[3];
  cc.sety[2] := $START.cc.sety[2];
  cc.sety[1] := $START.cc.sety[1];
  cc.setx[3] := $START.cc.setx[3];
  cc.setx[2] := $START.cc.setx[2];
  cc.setx[1] := $START.cc.setx[1];
  cc.z := $START.cc.z;
  cc.err := $START.cc.err;
  $whenCondition3 := $START.$whenCondition3;
  $whenCondition3 := false;
  cc.err := 0.0;
  cc.z := 0;
  cc.setx := {cc.p.flyZone[1], cc.p.flyZone[1], cc.p.flyZone[1]};
  cc.sety := {cc.p.flyZone[2], cc.p.flyZone[2], cc.p.flyZone[2]};
  cc.setz := {cc.p.flyZone[3], cc.p.flyZone[3], cc.p.flyZone[3]};
  cc.hasBeenVisited := {false, false, false, false, false, false, false, false};
  cc.lastVisited := {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
  cc.isBusy := {false, false, false};
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
  cc.isDead := {false, false, false};
  cc.lastAnswered := {0.0, 0.0, 0.0};
  cc.setpointChanged := {false, false, false};
  cc.setpointChangeTime := {0.0, 0.0, 0.0};
  setup_db();
  setup_areas(Prm(cc.p.stop_simulation, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, cc.p.cc_choice, cc.p.p_worst, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, 3, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.dangerRadius, cc.p.minDistanceFromObs, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryLevel));
  setup_drones(Prm(cc.p.stop_simulation, cc.p.Tdrone, cc.p.Tcc, cc.p.Tm, cc.p.monitor_start, cc.p.cc_choice, cc.p.p_worst, cc.p.comm_timeout, cc.p.p_comm_error, cc.p.arrival_timeout, 3, cc.p.dDistance, cc.p.arrivalThreshold, cc.p.flyZone, cc.p.docking_bay, cc.p.m, cc.p.maxSpeed, cc.p.horizontalODD, cc.p.verticalODD, cc.p.maxAngle, cc.p.dangerRadius, cc.p.minDistanceFromObs, cc.p.capacity, cc.p.batteryDischarge, cc.p.commDischarge, cc.p.rechargeRate, cc.p.dangerousBatteryLevel));
*/
void System_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  real_array tmp15;
  real_array tmp16;
  real_array tmp17;
  real_array tmp18;
  real_array tmp19;
  real_array tmp20;
  boolean_array tmp21;
  boolean_array tmp22;
  real_array tmp23;
  real_array tmp24;
  boolean_array tmp25;
  boolean_array tmp26;
  integer_array tmp27;
  integer_array tmp28;
  real_array tmp29;
  modelica_real tmp30;
  boolean_array tmp31;
  boolean_array tmp32;
  real_array tmp33;
  real_array tmp34;
  boolean_array tmp35;
  boolean_array tmp36;
  real_array tmp37;
  real_array tmp38;
  Prm tmp39;
  real_array tmp40;
  real_array tmp41;
  Prm tmp42;
  real_array tmp43;
  real_array tmp44;
  (data->localData[0]->realVars[77]/* cc.setpointChangeTime[3] DISCRETE */)  = (data->modelData->realVarsData[77]/* cc.setpointChangeTime[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[76]/* cc.setpointChangeTime[2] DISCRETE */)  = (data->modelData->realVarsData[76]/* cc.setpointChangeTime[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[75]/* cc.setpointChangeTime[1] DISCRETE */)  = (data->modelData->realVarsData[75]/* cc.setpointChangeTime[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[31]/* cc.setpointChanged[3] DISCRETE */)  = (data->modelData->booleanVarsData[31]/* cc.setpointChanged[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[30]/* cc.setpointChanged[2] DISCRETE */)  = (data->modelData->booleanVarsData[30]/* cc.setpointChanged[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */)  = (data->modelData->booleanVarsData[29]/* cc.setpointChanged[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[64]/* cc.lastAnswered[3] DISCRETE */)  = (data->modelData->realVarsData[64]/* cc.lastAnswered[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[63]/* cc.lastAnswered[2] DISCRETE */)  = (data->modelData->realVarsData[63]/* cc.lastAnswered[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[62]/* cc.lastAnswered[1] DISCRETE */)  = (data->modelData->realVarsData[62]/* cc.lastAnswered[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[28]/* cc.isDead[3] DISCRETE */)  = (data->modelData->booleanVarsData[28]/* cc.isDead[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[27]/* cc.isDead[2] DISCRETE */)  = (data->modelData->booleanVarsData[27]/* cc.isDead[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[26]/* cc.isDead[1] DISCRETE */)  = (data->modelData->booleanVarsData[26]/* cc.isDead[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[90]/* cc.tmp_time DISCRETE */)  = (data->modelData->realVarsData[90]/* cc.tmp_time DISCRETE */).attribute .start;

  (data->localData[0]->realVars[73]/* cc.max_time DISCRETE */)  = (data->modelData->realVarsData[73]/* cc.max_time DISCRETE */).attribute .start;

  (data->localData[0]->realVars[58]/* cc.area_z DISCRETE */)  = (data->modelData->realVarsData[58]/* cc.area_z DISCRETE */).attribute .start;

  (data->localData[0]->realVars[57]/* cc.area_y DISCRETE */)  = (data->modelData->realVarsData[57]/* cc.area_y DISCRETE */).attribute .start;

  (data->localData[0]->realVars[56]/* cc.area_x DISCRETE */)  = (data->modelData->realVarsData[56]/* cc.area_x DISCRETE */).attribute .start;

  (data->localData[0]->realVars[60]/* cc.choice_value_2 DISCRETE */)  = (data->modelData->realVarsData[60]/* cc.choice_value_2 DISCRETE */).attribute .start;

  (data->localData[0]->realVars[59]/* cc.choice_value_1 DISCRETE */)  = (data->modelData->realVarsData[59]/* cc.choice_value_1 DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[9]/* cc.tmp_area_2 DISCRETE */)  = (data->modelData->integerVarsData[9]/* cc.tmp_area_2 DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[8]/* cc.tmp_area_1 DISCRETE */)  = (data->modelData->integerVarsData[8]/* cc.tmp_area_1 DISCRETE */).attribute .start;

  (data->localData[0]->realVars[89]/* cc.tmp_distance DISCRETE */)  = (data->modelData->realVarsData[89]/* cc.tmp_distance DISCRETE */).attribute .start;

  (data->localData[0]->realVars[74]/* cc.min_distance DISCRETE */)  = (data->modelData->realVarsData[74]/* cc.min_distance DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[7]/* cc.hasBeenSelected[8] DISCRETE */)  = (data->modelData->integerVarsData[7]/* cc.hasBeenSelected[8] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[6]/* cc.hasBeenSelected[7] DISCRETE */)  = (data->modelData->integerVarsData[6]/* cc.hasBeenSelected[7] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[5]/* cc.hasBeenSelected[6] DISCRETE */)  = (data->modelData->integerVarsData[5]/* cc.hasBeenSelected[6] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[4]/* cc.hasBeenSelected[5] DISCRETE */)  = (data->modelData->integerVarsData[4]/* cc.hasBeenSelected[5] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[3]/* cc.hasBeenSelected[4] DISCRETE */)  = (data->modelData->integerVarsData[3]/* cc.hasBeenSelected[4] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[2]/* cc.hasBeenSelected[3] DISCRETE */)  = (data->modelData->integerVarsData[2]/* cc.hasBeenSelected[3] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[1]/* cc.hasBeenSelected[2] DISCRETE */)  = (data->modelData->integerVarsData[1]/* cc.hasBeenSelected[2] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[0]/* cc.hasBeenSelected[1] DISCRETE */)  = (data->modelData->integerVarsData[0]/* cc.hasBeenSelected[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[87]/* cc.time_passed_since_last_loop DISCRETE */)  = (data->modelData->realVarsData[87]/* cc.time_passed_since_last_loop DISCRETE */).attribute .start;

  (data->localData[0]->realVars[88]/* cc.time_span DISCRETE */)  = (data->modelData->realVarsData[88]/* cc.time_span DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[25]/* cc.isBusy[3] DISCRETE */)  = (data->modelData->booleanVarsData[25]/* cc.isBusy[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[24]/* cc.isBusy[2] DISCRETE */)  = (data->modelData->booleanVarsData[24]/* cc.isBusy[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[23]/* cc.isBusy[1] DISCRETE */)  = (data->modelData->booleanVarsData[23]/* cc.isBusy[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[72]/* cc.lastVisited[8] DISCRETE */)  = (data->modelData->realVarsData[72]/* cc.lastVisited[8] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[71]/* cc.lastVisited[7] DISCRETE */)  = (data->modelData->realVarsData[71]/* cc.lastVisited[7] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[70]/* cc.lastVisited[6] DISCRETE */)  = (data->modelData->realVarsData[70]/* cc.lastVisited[6] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[69]/* cc.lastVisited[5] DISCRETE */)  = (data->modelData->realVarsData[69]/* cc.lastVisited[5] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[68]/* cc.lastVisited[4] DISCRETE */)  = (data->modelData->realVarsData[68]/* cc.lastVisited[4] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[67]/* cc.lastVisited[3] DISCRETE */)  = (data->modelData->realVarsData[67]/* cc.lastVisited[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[66]/* cc.lastVisited[2] DISCRETE */)  = (data->modelData->realVarsData[66]/* cc.lastVisited[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[65]/* cc.lastVisited[1] DISCRETE */)  = (data->modelData->realVarsData[65]/* cc.lastVisited[1] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[22]/* cc.hasBeenVisited[8] DISCRETE */)  = (data->modelData->booleanVarsData[22]/* cc.hasBeenVisited[8] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[21]/* cc.hasBeenVisited[7] DISCRETE */)  = (data->modelData->booleanVarsData[21]/* cc.hasBeenVisited[7] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[20]/* cc.hasBeenVisited[6] DISCRETE */)  = (data->modelData->booleanVarsData[20]/* cc.hasBeenVisited[6] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[19]/* cc.hasBeenVisited[5] DISCRETE */)  = (data->modelData->booleanVarsData[19]/* cc.hasBeenVisited[5] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[18]/* cc.hasBeenVisited[4] DISCRETE */)  = (data->modelData->booleanVarsData[18]/* cc.hasBeenVisited[4] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[17]/* cc.hasBeenVisited[3] DISCRETE */)  = (data->modelData->booleanVarsData[17]/* cc.hasBeenVisited[3] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[16]/* cc.hasBeenVisited[2] DISCRETE */)  = (data->modelData->booleanVarsData[16]/* cc.hasBeenVisited[2] DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[15]/* cc.hasBeenVisited[1] DISCRETE */)  = (data->modelData->booleanVarsData[15]/* cc.hasBeenVisited[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[86]/* cc.setz[3] DISCRETE */)  = (data->modelData->realVarsData[86]/* cc.setz[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[85]/* cc.setz[2] DISCRETE */)  = (data->modelData->realVarsData[85]/* cc.setz[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[84]/* cc.setz[1] DISCRETE */)  = (data->modelData->realVarsData[84]/* cc.setz[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[83]/* cc.sety[3] DISCRETE */)  = (data->modelData->realVarsData[83]/* cc.sety[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[82]/* cc.sety[2] DISCRETE */)  = (data->modelData->realVarsData[82]/* cc.sety[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[81]/* cc.sety[1] DISCRETE */)  = (data->modelData->realVarsData[81]/* cc.sety[1] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[80]/* cc.setx[3] DISCRETE */)  = (data->modelData->realVarsData[80]/* cc.setx[3] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[79]/* cc.setx[2] DISCRETE */)  = (data->modelData->realVarsData[79]/* cc.setx[2] DISCRETE */).attribute .start;

  (data->localData[0]->realVars[78]/* cc.setx[1] DISCRETE */)  = (data->modelData->realVarsData[78]/* cc.setx[1] DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[10]/* cc.z DISCRETE */)  = (data->modelData->integerVarsData[10]/* cc.z DISCRETE */).attribute .start;

  (data->localData[0]->realVars[61]/* cc.err DISCRETE */)  = (data->modelData->realVarsData[61]/* cc.err DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[8]/* $whenCondition3 DISCRETE */)  = (data->modelData->booleanVarsData[8]/* $whenCondition3 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[8]/* $whenCondition3 DISCRETE */)  = 0;

  (data->localData[0]->realVars[61]/* cc.err DISCRETE */)  = 0.0;

  (data->localData[0]->integerVars[10]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

  array_alloc_scalar_real_array(&tmp15, 3, (modelica_real)(data->simulationInfo->realParameter[18]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[18]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[18]/* cc.p.flyZone[1] PARAM */) );
  real_array_create(&tmp16, ((modelica_real*)&((&(data->localData[0]->realVars[78]/* cc.setx[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_copy_data(tmp15, tmp16);

  array_alloc_scalar_real_array(&tmp17, 3, (modelica_real)(data->simulationInfo->realParameter[19]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[19]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[19]/* cc.p.flyZone[2] PARAM */) );
  real_array_create(&tmp18, ((modelica_real*)&((&(data->localData[0]->realVars[81]/* cc.sety[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_copy_data(tmp17, tmp18);

  array_alloc_scalar_real_array(&tmp19, 3, (modelica_real)(data->simulationInfo->realParameter[20]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[20]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[20]/* cc.p.flyZone[3] PARAM */) );
  real_array_create(&tmp20, ((modelica_real*)&((&(data->localData[0]->realVars[84]/* cc.setz[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_copy_data(tmp19, tmp20);

  array_alloc_scalar_boolean_array(&tmp21, 8, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp22, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[15]/* cc.hasBeenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  boolean_array_copy_data(tmp21, tmp22);

  array_alloc_scalar_real_array(&tmp23, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp24, ((modelica_real*)&((&(data->localData[0]->realVars[65]/* cc.lastVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  real_array_copy_data(tmp23, tmp24);

  array_alloc_scalar_boolean_array(&tmp25, 3, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp26, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[23]/* cc.isBusy[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  boolean_array_copy_data(tmp25, tmp26);

  (data->localData[0]->realVars[88]/* cc.time_span DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[87]/* cc.time_passed_since_last_loop DISCRETE */)  = 0.0;

  array_alloc_scalar_integer_array(&tmp27, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
  integer_array_create(&tmp28, ((modelica_integer*)&((&(data->localData[0]->integerVars[0]/* cc.hasBeenSelected[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
  integer_array_copy_data(tmp27, tmp28);

  real_array_create(&tmp29, ((modelica_real*)&((&data->simulationInfo->realParameter[18]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
  tmp30 = max_real_array(tmp29);
  (data->localData[0]->realVars[74]/* cc.min_distance DISCRETE */)  = tmp30;

  (data->localData[0]->realVars[89]/* cc.tmp_distance DISCRETE */)  = 0.0;

  (data->localData[0]->integerVars[8]/* cc.tmp_area_1 DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->integerVars[9]/* cc.tmp_area_2 DISCRETE */)  = ((modelica_integer) 0);

  (data->localData[0]->realVars[59]/* cc.choice_value_1 DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[60]/* cc.choice_value_2 DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[56]/* cc.area_x DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[57]/* cc.area_y DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[58]/* cc.area_z DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[73]/* cc.max_time DISCRETE */)  = 0.0;

  (data->localData[0]->realVars[90]/* cc.tmp_time DISCRETE */)  = 0.0;

  array_alloc_scalar_boolean_array(&tmp31, 3, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp32, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[26]/* cc.isDead[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  boolean_array_copy_data(tmp31, tmp32);

  array_alloc_scalar_real_array(&tmp33, 3, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp34, ((modelica_real*)&((&(data->localData[0]->realVars[62]/* cc.lastAnswered[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_copy_data(tmp33, tmp34);

  array_alloc_scalar_boolean_array(&tmp35, 3, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
  boolean_array_create(&tmp36, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  boolean_array_copy_data(tmp35, tmp36);

  array_alloc_scalar_real_array(&tmp37, 3, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
  real_array_create(&tmp38, ((modelica_real*)&((&(data->localData[0]->realVars[75]/* cc.setpointChangeTime[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_copy_data(tmp37, tmp38);

  omc_setup__db(threadData);

  real_array_create(&tmp40, ((modelica_real*)&((&data->simulationInfo->realParameter[18]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
  real_array_create(&tmp41, ((modelica_real*)&((&data->simulationInfo->realParameter[15]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
  tmp39._stop_simulation = (data->simulationInfo->realParameter[30]/* cc.p.stop_simulation PARAM */) ;
  tmp39._Tdrone = (data->simulationInfo->realParameter[3]/* cc.p.Tdrone PARAM */) ;
  tmp39._Tcc = (data->simulationInfo->realParameter[2]/* cc.p.Tcc PARAM */) ;
  tmp39._Tm = (data->simulationInfo->realParameter[4]/* cc.p.Tm PARAM */) ;
  tmp39._monitor_start = (data->simulationInfo->realParameter[26]/* cc.p.monitor_start PARAM */) ;
  tmp39._cc_choice = (data->simulationInfo->realParameter[9]/* cc.p.cc_choice PARAM */) ;
  tmp39._p_worst = (data->simulationInfo->realParameter[28]/* cc.p.p_worst PARAM */) ;
  tmp39._comm_timeout = (data->simulationInfo->realParameter[11]/* cc.p.comm_timeout PARAM */) ;
  tmp39._p_comm_error = (data->simulationInfo->realParameter[27]/* cc.p.p_comm_error PARAM */) ;
  tmp39._arrival_timeout = (data->simulationInfo->realParameter[6]/* cc.p.arrival_timeout PARAM */) ;
  tmp39._nDrones = ((modelica_integer) 3);
  tmp39._dDistance = (data->simulationInfo->realParameter[12]/* cc.p.dDistance PARAM */) ;
  tmp39._arrivalThreshold = (data->simulationInfo->realParameter[5]/* cc.p.arrivalThreshold PARAM */) ;
  tmp39._flyZone = tmp40;
  tmp39._docking_bay = tmp41;
  tmp39._m = (data->simulationInfo->realParameter[22]/* cc.p.m PARAM */) ;
  tmp39._maxSpeed = (data->simulationInfo->realParameter[24]/* cc.p.maxSpeed PARAM */) ;
  tmp39._horizontalODD = (data->simulationInfo->realParameter[21]/* cc.p.horizontalODD PARAM */) ;
  tmp39._verticalODD = (data->simulationInfo->realParameter[31]/* cc.p.verticalODD PARAM */) ;
  tmp39._maxAngle = (data->simulationInfo->realParameter[23]/* cc.p.maxAngle PARAM */) ;
  tmp39._dangerRadius = (data->simulationInfo->realParameter[13]/* cc.p.dangerRadius PARAM */) ;
  tmp39._minDistanceFromObs = (data->simulationInfo->realParameter[25]/* cc.p.minDistanceFromObs PARAM */) ;
  tmp39._capacity = (data->simulationInfo->realParameter[8]/* cc.p.capacity PARAM */) ;
  tmp39._batteryDischarge = (data->simulationInfo->realParameter[7]/* cc.p.batteryDischarge PARAM */) ;
  tmp39._commDischarge = (data->simulationInfo->realParameter[10]/* cc.p.commDischarge PARAM */) ;
  tmp39._rechargeRate = (data->simulationInfo->realParameter[29]/* cc.p.rechargeRate PARAM */) ;
  tmp39._dangerousBatteryLevel = (data->simulationInfo->realParameter[14]/* cc.p.dangerousBatteryLevel PARAM */) ;
  omc_setup__areas(threadData, tmp39);

  real_array_create(&tmp43, ((modelica_real*)&((&data->simulationInfo->realParameter[18]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
  real_array_create(&tmp44, ((modelica_real*)&((&data->simulationInfo->realParameter[15]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
  tmp42._stop_simulation = (data->simulationInfo->realParameter[30]/* cc.p.stop_simulation PARAM */) ;
  tmp42._Tdrone = (data->simulationInfo->realParameter[3]/* cc.p.Tdrone PARAM */) ;
  tmp42._Tcc = (data->simulationInfo->realParameter[2]/* cc.p.Tcc PARAM */) ;
  tmp42._Tm = (data->simulationInfo->realParameter[4]/* cc.p.Tm PARAM */) ;
  tmp42._monitor_start = (data->simulationInfo->realParameter[26]/* cc.p.monitor_start PARAM */) ;
  tmp42._cc_choice = (data->simulationInfo->realParameter[9]/* cc.p.cc_choice PARAM */) ;
  tmp42._p_worst = (data->simulationInfo->realParameter[28]/* cc.p.p_worst PARAM */) ;
  tmp42._comm_timeout = (data->simulationInfo->realParameter[11]/* cc.p.comm_timeout PARAM */) ;
  tmp42._p_comm_error = (data->simulationInfo->realParameter[27]/* cc.p.p_comm_error PARAM */) ;
  tmp42._arrival_timeout = (data->simulationInfo->realParameter[6]/* cc.p.arrival_timeout PARAM */) ;
  tmp42._nDrones = ((modelica_integer) 3);
  tmp42._dDistance = (data->simulationInfo->realParameter[12]/* cc.p.dDistance PARAM */) ;
  tmp42._arrivalThreshold = (data->simulationInfo->realParameter[5]/* cc.p.arrivalThreshold PARAM */) ;
  tmp42._flyZone = tmp43;
  tmp42._docking_bay = tmp44;
  tmp42._m = (data->simulationInfo->realParameter[22]/* cc.p.m PARAM */) ;
  tmp42._maxSpeed = (data->simulationInfo->realParameter[24]/* cc.p.maxSpeed PARAM */) ;
  tmp42._horizontalODD = (data->simulationInfo->realParameter[21]/* cc.p.horizontalODD PARAM */) ;
  tmp42._verticalODD = (data->simulationInfo->realParameter[31]/* cc.p.verticalODD PARAM */) ;
  tmp42._maxAngle = (data->simulationInfo->realParameter[23]/* cc.p.maxAngle PARAM */) ;
  tmp42._dangerRadius = (data->simulationInfo->realParameter[13]/* cc.p.dangerRadius PARAM */) ;
  tmp42._minDistanceFromObs = (data->simulationInfo->realParameter[25]/* cc.p.minDistanceFromObs PARAM */) ;
  tmp42._capacity = (data->simulationInfo->realParameter[8]/* cc.p.capacity PARAM */) ;
  tmp42._batteryDischarge = (data->simulationInfo->realParameter[7]/* cc.p.batteryDischarge PARAM */) ;
  tmp42._commDischarge = (data->simulationInfo->realParameter[10]/* cc.p.commDischarge PARAM */) ;
  tmp42._rechargeRate = (data->simulationInfo->realParameter[29]/* cc.p.rechargeRate PARAM */) ;
  tmp42._dangerousBatteryLevel = (data->simulationInfo->realParameter[14]/* cc.p.dangerousBatteryLevel PARAM */) ;
  omc_setup__drones(threadData, tmp42);
  TRACE_POP
}

/*
equation index: 75
type: ALGORITHM

  d[3].d.droneDead := $START.d[3].d.droneDead;
  d[3].d.droneState := $START.d[3].d.droneState;
  d[3].d.tmpBatt := $START.d[3].d.tmpBatt;
  d[3].d.battery := $START.d[3].d.battery;
  $whenCondition7 := $START.$whenCondition7;
  $whenCondition6 := $START.$whenCondition6;
  $whenCondition6 := false;
  $whenCondition7 := false;
  d[3].d.battery := d[3].d.p.capacity;
  d[3].d.tmpBatt := d[3].d.battery;
  d[3].d.droneState := 1;
  d[3].d.droneDead := false;
*/
void System_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  (data->localData[0]->booleanVars[34]/* d[3].d.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[34]/* d[3].d.droneDead DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[13]/* d[3].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[13]/* d[3].d.droneState DISCRETE */).attribute .start;

  (data->localData[0]->realVars[105]/* d[3].d.tmpBatt DISCRETE */)  = (data->modelData->realVarsData[105]/* d[3].d.tmpBatt DISCRETE */).attribute .start;

  (data->localData[0]->realVars[102]/* d[3].d.battery DISCRETE */)  = (data->modelData->realVarsData[102]/* d[3].d.battery DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[12]/* $whenCondition7 DISCRETE */)  = (data->modelData->booleanVarsData[12]/* $whenCondition7 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[11]/* $whenCondition6 DISCRETE */)  = (data->modelData->booleanVarsData[11]/* $whenCondition6 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[11]/* $whenCondition6 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[12]/* $whenCondition7 DISCRETE */)  = 0;

  (data->localData[0]->realVars[102]/* d[3].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[166]/* d[3].d.p.capacity PARAM */) ;

  (data->localData[0]->realVars[105]/* d[3].d.tmpBatt DISCRETE */)  = (data->localData[0]->realVars[102]/* d[3].d.battery DISCRETE */) ;

  (data->localData[0]->integerVars[13]/* d[3].d.droneState DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->booleanVars[34]/* d[3].d.droneDead DISCRETE */)  = 0;
  TRACE_POP
}

/*
equation index: 76
type: ALGORITHM

  $whenCondition5 := $START.$whenCondition5;
  $whenCondition4 := $START.$whenCondition4;
  $whenCondition4 := false;
  $whenCondition5 := false;
*/
void System_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  (data->localData[0]->booleanVars[10]/* $whenCondition5 DISCRETE */)  = (data->modelData->booleanVarsData[10]/* $whenCondition5 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[9]/* $whenCondition4 DISCRETE */)  = (data->modelData->booleanVarsData[9]/* $whenCondition4 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[9]/* $whenCondition4 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[10]/* $whenCondition5 DISCRETE */)  = 0;
  TRACE_POP
}

/*
equation index: 77
type: ALGORITHM

  d[2].d.droneDead := $START.d[2].d.droneDead;
  d[2].d.droneState := $START.d[2].d.droneState;
  d[2].d.tmpBatt := $START.d[2].d.tmpBatt;
  d[2].d.battery := $START.d[2].d.battery;
  $whenCondition11 := $START.$whenCondition11;
  $whenCondition10 := $START.$whenCondition10;
  $whenCondition10 := false;
  $whenCondition11 := false;
  d[2].d.battery := d[2].d.p.capacity;
  d[2].d.tmpBatt := d[2].d.battery;
  d[2].d.droneState := 1;
  d[2].d.droneDead := false;
*/
void System_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  (data->localData[0]->booleanVars[33]/* d[2].d.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[33]/* d[2].d.droneDead DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[12]/* d[2].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[12]/* d[2].d.droneState DISCRETE */).attribute .start;

  (data->localData[0]->realVars[104]/* d[2].d.tmpBatt DISCRETE */)  = (data->modelData->realVarsData[104]/* d[2].d.tmpBatt DISCRETE */).attribute .start;

  (data->localData[0]->realVars[101]/* d[2].d.battery DISCRETE */)  = (data->modelData->realVarsData[101]/* d[2].d.battery DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (data->modelData->booleanVarsData[2]/* $whenCondition11 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = (data->modelData->booleanVarsData[1]/* $whenCondition10 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = 0;

  (data->localData[0]->realVars[101]/* d[2].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[165]/* d[2].d.p.capacity PARAM */) ;

  (data->localData[0]->realVars[104]/* d[2].d.tmpBatt DISCRETE */)  = (data->localData[0]->realVars[101]/* d[2].d.battery DISCRETE */) ;

  (data->localData[0]->integerVars[12]/* d[2].d.droneState DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->booleanVars[33]/* d[2].d.droneDead DISCRETE */)  = 0;
  TRACE_POP
}

/*
equation index: 78
type: ALGORITHM

  $whenCondition9 := $START.$whenCondition9;
  $whenCondition8 := $START.$whenCondition8;
  $whenCondition8 := false;
  $whenCondition9 := false;
*/
void System_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  (data->localData[0]->booleanVars[14]/* $whenCondition9 DISCRETE */)  = (data->modelData->booleanVarsData[14]/* $whenCondition9 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[13]/* $whenCondition8 DISCRETE */)  = (data->modelData->booleanVarsData[13]/* $whenCondition8 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[13]/* $whenCondition8 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[14]/* $whenCondition9 DISCRETE */)  = 0;
  TRACE_POP
}

/*
equation index: 79
type: ALGORITHM

  d[1].d.droneDead := $START.d[1].d.droneDead;
  d[1].d.droneState := $START.d[1].d.droneState;
  d[1].d.tmpBatt := $START.d[1].d.tmpBatt;
  d[1].d.battery := $START.d[1].d.battery;
  $whenCondition15 := $START.$whenCondition15;
  $whenCondition14 := $START.$whenCondition14;
  $whenCondition14 := false;
  $whenCondition15 := false;
  d[1].d.battery := d[1].d.p.capacity;
  d[1].d.tmpBatt := d[1].d.battery;
  d[1].d.droneState := 1;
  d[1].d.droneDead := false;
*/
void System_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  (data->localData[0]->booleanVars[32]/* d[1].d.droneDead DISCRETE */)  = (data->modelData->booleanVarsData[32]/* d[1].d.droneDead DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[11]/* d[1].d.droneState DISCRETE */)  = (data->modelData->integerVarsData[11]/* d[1].d.droneState DISCRETE */).attribute .start;

  (data->localData[0]->realVars[103]/* d[1].d.tmpBatt DISCRETE */)  = (data->modelData->realVarsData[103]/* d[1].d.tmpBatt DISCRETE */).attribute .start;

  (data->localData[0]->realVars[100]/* d[1].d.battery DISCRETE */)  = (data->modelData->realVarsData[100]/* d[1].d.battery DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  = (data->modelData->booleanVarsData[6]/* $whenCondition15 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (data->modelData->booleanVarsData[5]/* $whenCondition14 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  = 0;

  (data->localData[0]->realVars[100]/* d[1].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[164]/* d[1].d.p.capacity PARAM */) ;

  (data->localData[0]->realVars[103]/* d[1].d.tmpBatt DISCRETE */)  = (data->localData[0]->realVars[100]/* d[1].d.battery DISCRETE */) ;

  (data->localData[0]->integerVars[11]/* d[1].d.droneState DISCRETE */)  = ((modelica_integer) 1);

  (data->localData[0]->booleanVars[32]/* d[1].d.droneDead DISCRETE */)  = 0;
  TRACE_POP
}

/*
equation index: 80
type: ALGORITHM

  $whenCondition13 := $START.$whenCondition13;
  $whenCondition12 := $START.$whenCondition12;
  $whenCondition12 := false;
  $whenCondition13 := false;
*/
void System_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = (data->modelData->booleanVarsData[4]/* $whenCondition13 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = (data->modelData->booleanVarsData[3]/* $whenCondition12 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = 0;

  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = 0;
  TRACE_POP
}
extern void System_eqFunction_84(DATA *data, threadData_t *threadData);

extern void System_eqFunction_83(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void System_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  System_eqFunction_1(data, threadData);
  System_eqFunction_2(data, threadData);
  System_eqFunction_3(data, threadData);
  System_eqFunction_4(data, threadData);
  System_eqFunction_85(data, threadData);
  System_eqFunction_6(data, threadData);
  System_eqFunction_97(data, threadData);
  System_eqFunction_119(data, threadData);
  System_eqFunction_120(data, threadData);
  System_eqFunction_10(data, threadData);
  System_eqFunction_11(data, threadData);
  System_eqFunction_12(data, threadData);
  System_eqFunction_86(data, threadData);
  System_eqFunction_14(data, threadData);
  System_eqFunction_98(data, threadData);
  System_eqFunction_115(data, threadData);
  System_eqFunction_116(data, threadData);
  System_eqFunction_18(data, threadData);
  System_eqFunction_19(data, threadData);
  System_eqFunction_20(data, threadData);
  System_eqFunction_87(data, threadData);
  System_eqFunction_22(data, threadData);
  System_eqFunction_99(data, threadData);
  System_eqFunction_117(data, threadData);
  System_eqFunction_118(data, threadData);
  System_eqFunction_26(data, threadData);
  System_eqFunction_27(data, threadData);
  System_eqFunction_28(data, threadData);
  System_eqFunction_88(data, threadData);
  System_eqFunction_30(data, threadData);
  System_eqFunction_100(data, threadData);
  System_eqFunction_108(data, threadData);
  System_eqFunction_109(data, threadData);
  System_eqFunction_34(data, threadData);
  System_eqFunction_35(data, threadData);
  System_eqFunction_36(data, threadData);
  System_eqFunction_89(data, threadData);
  System_eqFunction_38(data, threadData);
  System_eqFunction_101(data, threadData);
  System_eqFunction_110(data, threadData);
  System_eqFunction_111(data, threadData);
  System_eqFunction_42(data, threadData);
  System_eqFunction_43(data, threadData);
  System_eqFunction_44(data, threadData);
  System_eqFunction_90(data, threadData);
  System_eqFunction_46(data, threadData);
  System_eqFunction_102(data, threadData);
  System_eqFunction_112(data, threadData);
  System_eqFunction_113(data, threadData);
  System_eqFunction_50(data, threadData);
  System_eqFunction_51(data, threadData);
  System_eqFunction_52(data, threadData);
  System_eqFunction_91(data, threadData);
  System_eqFunction_54(data, threadData);
  System_eqFunction_103(data, threadData);
  System_eqFunction_124(data, threadData);
  System_eqFunction_125(data, threadData);
  System_eqFunction_58(data, threadData);
  System_eqFunction_59(data, threadData);
  System_eqFunction_60(data, threadData);
  System_eqFunction_92(data, threadData);
  System_eqFunction_62(data, threadData);
  System_eqFunction_104(data, threadData);
  System_eqFunction_122(data, threadData);
  System_eqFunction_123(data, threadData);
  System_eqFunction_66(data, threadData);
  System_eqFunction_67(data, threadData);
  System_eqFunction_68(data, threadData);
  System_eqFunction_93(data, threadData);
  System_eqFunction_70(data, threadData);
  System_eqFunction_105(data, threadData);
  System_eqFunction_126(data, threadData);
  System_eqFunction_127(data, threadData);
  System_eqFunction_74(data, threadData);
  System_eqFunction_75(data, threadData);
  System_eqFunction_76(data, threadData);
  System_eqFunction_77(data, threadData);
  System_eqFunction_78(data, threadData);
  System_eqFunction_79(data, threadData);
  System_eqFunction_80(data, threadData);
  System_eqFunction_84(data, threadData);
  System_eqFunction_83(data, threadData);
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

