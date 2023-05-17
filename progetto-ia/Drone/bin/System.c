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

  data->simulationInfo->outputVars[0] = (data->localData[0]->realVars[36]/* Tcc variable */) ;
  data->simulationInfo->outputVars[1] = (data->localData[0]->realVars[46]/* cc_choice variable */) ;
  
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
equation index: 83
type: SIMPLE_ASSIGN
Tcc = p.Tcc
*/
void System_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  (data->localData[0]->realVars[36]/* Tcc variable */)  = (data->simulationInfo->realParameter[356]/* p.Tcc PARAM */) ;
  TRACE_POP
}
/*
equation index: 84
type: SIMPLE_ASSIGN
cc_choice = p.cc_choice
*/
void System_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  (data->localData[0]->realVars[46]/* cc_choice variable */)  = (data->simulationInfo->realParameter[363]/* p.cc_choice PARAM */) ;
  TRACE_POP
}
/*
equation index: 85
type: SIMPLE_ASSIGN
$DER.d[3].d.z = d[3].d.Vz
*/
void System_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  (data->localData[0]->realVars[35]/* der(d[3].d.z) STATE_DER */)  = (data->localData[0]->realVars[8]/* d[3].d.Vz STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 86
type: SIMPLE_ASSIGN
$DER.d[3].d.y = d[3].d.Vy
*/
void System_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  (data->localData[0]->realVars[32]/* der(d[3].d.y) STATE_DER */)  = (data->localData[0]->realVars[5]/* d[3].d.Vy STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 87
type: SIMPLE_ASSIGN
$DER.d[3].d.x = d[3].d.Vx
*/
void System_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  (data->localData[0]->realVars[29]/* der(d[3].d.x) STATE_DER */)  = (data->localData[0]->realVars[2]/* d[3].d.Vx STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 88
type: SIMPLE_ASSIGN
$DER.d[2].d.z = d[2].d.Vz
*/
void System_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  (data->localData[0]->realVars[34]/* der(d[2].d.z) STATE_DER */)  = (data->localData[0]->realVars[7]/* d[2].d.Vz STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 89
type: SIMPLE_ASSIGN
$DER.d[2].d.y = d[2].d.Vy
*/
void System_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  (data->localData[0]->realVars[31]/* der(d[2].d.y) STATE_DER */)  = (data->localData[0]->realVars[4]/* d[2].d.Vy STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 90
type: SIMPLE_ASSIGN
$DER.d[2].d.x = d[2].d.Vx
*/
void System_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  (data->localData[0]->realVars[28]/* der(d[2].d.x) STATE_DER */)  = (data->localData[0]->realVars[1]/* d[2].d.Vx STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 91
type: SIMPLE_ASSIGN
$DER.d[1].d.z = d[1].d.Vz
*/
void System_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  (data->localData[0]->realVars[33]/* der(d[1].d.z) STATE_DER */)  = (data->localData[0]->realVars[6]/* d[1].d.Vz STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 92
type: SIMPLE_ASSIGN
$DER.d[1].d.y = d[1].d.Vy
*/
void System_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  (data->localData[0]->realVars[30]/* der(d[1].d.y) STATE_DER */)  = (data->localData[0]->realVars[3]/* d[1].d.Vy STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 93
type: SIMPLE_ASSIGN
$DER.d[1].d.x = d[1].d.Vx
*/
void System_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  (data->localData[0]->realVars[27]/* der(d[1].d.x) STATE_DER */)  = (data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 94
type: ALGORITHM

  d[3].d.droneDead := pre(d[3].d.droneDead);
  d[3].d.droneState := pre(d[3].d.droneState);
  d[3].d.tmpBatt := pre(d[3].d.tmpBatt);
  d[3].d.battery := pre(d[3].d.battery);
  $whenCondition7 := pre($whenCondition7);
  $whenCondition6 := pre($whenCondition6);
  $whenCondition6 := sample(7, 0.0, d[3].d.p.Tdrone) and d[3].d.droneState == 1;
  $whenCondition7 := sample(7, 0.0, d[3].d.p.Tdrone) and d[3].d.droneState == 0;
  when false then
    d[3].d.battery := d[3].d.p.capacity;
    d[3].d.tmpBatt := d[3].d.battery;
    d[3].d.droneState := 1;
    d[3].d.droneDead := false;
  elsewhen $whenCondition6 then
    if myrandom() > d[3].d.p.p_comm_error then
      d[3].d.battery := batteryMonitor(pre(d[3].d.battery), d[3].d.p.batteryDischarge + d[3].d.p.commDischarge);
    else
      d[3].d.battery := batteryMonitor(pre(d[3].d.battery), d[3].d.p.batteryDischarge);
    end if;
    if returnedHome(d[3].d.p, d[3].d.x, d[3].d.y, d[3].d.z) and d[3].d.battery < d[3].d.p.dangerousBatteryLevel then
      d[3].d.droneState := 0;
    end if;
  elsewhen $whenCondition7 then
    d[3].d.battery := charging(d[3].d.p, pre(d[3].d.battery));
    if abs(d[3].d.battery - d[3].d.p.capacity) < 0.1 then
      d[3].d.droneState := 1;
    end if;
  end when;
*/
void System_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  modelica_boolean tmp5;
  real_array tmp6;
  real_array tmp7;
  modelica_boolean tmp8;
  real_array tmp9;
  real_array tmp10;
  modelica_boolean tmp11;
  (data->localData[0]->booleanVars[34]/* d[3].d.droneDead DISCRETE */)  = (data->simulationInfo->booleanVarsPre[34]/* d[3].d.droneDead DISCRETE */) ;

  (data->localData[0]->integerVars[13]/* d[3].d.droneState DISCRETE */)  = (data->simulationInfo->integerVarsPre[13]/* d[3].d.droneState DISCRETE */) ;

  (data->localData[0]->realVars[105]/* d[3].d.tmpBatt DISCRETE */)  = (data->simulationInfo->realVarsPre[105]/* d[3].d.tmpBatt DISCRETE */) ;

  (data->localData[0]->realVars[102]/* d[3].d.battery DISCRETE */)  = (data->simulationInfo->realVarsPre[102]/* d[3].d.battery DISCRETE */) ;

  (data->localData[0]->booleanVars[12]/* $whenCondition7 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[12]/* $whenCondition7 DISCRETE */) ;

  (data->localData[0]->booleanVars[11]/* $whenCondition6 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[11]/* $whenCondition6 DISCRETE */) ;

  (data->localData[0]->booleanVars[11]/* $whenCondition6 DISCRETE */)  = (data->simulationInfo->samples[6] && ((data->localData[0]->integerVars[13]/* d[3].d.droneState DISCRETE */)  == ((modelica_integer) 1)));

  (data->localData[0]->booleanVars[12]/* $whenCondition7 DISCRETE */)  = (data->simulationInfo->samples[6] && ((data->localData[0]->integerVars[13]/* d[3].d.droneState DISCRETE */)  == ((modelica_integer) 0)));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[102]/* d[3].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[166]/* d[3].d.p.capacity PARAM */) ;

      (data->localData[0]->realVars[105]/* d[3].d.tmpBatt DISCRETE */)  = (data->localData[0]->realVars[102]/* d[3].d.battery DISCRETE */) ;

      (data->localData[0]->integerVars[13]/* d[3].d.droneState DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->booleanVars[34]/* d[3].d.droneDead DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[11]/* $whenCondition6 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[11]/* $whenCondition6 DISCRETE */)  /* edge */))
    {
      tmp5 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[223]/* d[3].d.p.p_comm_error PARAM */) );
      if(tmp5)
      {
        (data->localData[0]->realVars[102]/* d[3].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[102]/* d[3].d.battery DISCRETE */) , (data->simulationInfo->realParameter[163]/* d[3].d.p.batteryDischarge PARAM */)  + (data->simulationInfo->realParameter[172]/* d[3].d.p.commDischarge PARAM */) );
      }
      else
      {
        (data->localData[0]->realVars[102]/* d[3].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[102]/* d[3].d.battery DISCRETE */) , (data->simulationInfo->realParameter[163]/* d[3].d.p.batteryDischarge PARAM */) );
      }

      real_array_create(&tmp6, ((modelica_real*)&((&data->simulationInfo->realParameter[194]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 3) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp7, ((modelica_real*)&((&data->simulationInfo->realParameter[185]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 3) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      tmp8 = Less((data->localData[0]->realVars[102]/* d[3].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[184]/* d[3].d.p.dangerousBatteryLevel PARAM */) );
      if((omc_returnedHome(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[232]/* d[3].d.p.stop_simulation PARAM */) , (data->simulationInfo->realParameter[151]/* d[3].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[148]/* d[3].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[154]/* d[3].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[220]/* d[3].d.p.monitor_start PARAM */) , (data->simulationInfo->realParameter[169]/* d[3].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[226]/* d[3].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[175]/* d[3].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[223]/* d[3].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[160]/* d[3].d.p.arrival_timeout PARAM */) , (data->simulationInfo->integerParameter[9]/* d[3].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[178]/* d[3].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[157]/* d[3].d.p.arrivalThreshold PARAM */) , tmp6, tmp7, (data->simulationInfo->realParameter[208]/* d[3].d.p.m PARAM */) , (data->simulationInfo->realParameter[214]/* d[3].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[205]/* d[3].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[235]/* d[3].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[211]/* d[3].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[181]/* d[3].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[217]/* d[3].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[166]/* d[3].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[163]/* d[3].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[172]/* d[3].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[229]/* d[3].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[184]/* d[3].d.p.dangerousBatteryLevel PARAM */) ), (data->localData[0]->realVars[11]/* d[3].d.x STATE(1,d[3].d.Vx) */) , (data->localData[0]->realVars[14]/* d[3].d.y STATE(1,d[3].d.Vy) */) , (data->localData[0]->realVars[17]/* d[3].d.z STATE(1,d[3].d.Vz) */) ) && tmp8))
      {
        (data->localData[0]->integerVars[13]/* d[3].d.droneState DISCRETE */)  = ((modelica_integer) 0);
      }
    }
    else if(((data->localData[0]->booleanVars[12]/* $whenCondition7 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[12]/* $whenCondition7 DISCRETE */)  /* edge */))
    {
      real_array_create(&tmp9, ((modelica_real*)&((&data->simulationInfo->realParameter[194]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 3) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp10, ((modelica_real*)&((&data->simulationInfo->realParameter[185]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 3) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      (data->localData[0]->realVars[102]/* d[3].d.battery DISCRETE */)  = omc_charging(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[232]/* d[3].d.p.stop_simulation PARAM */) , (data->simulationInfo->realParameter[151]/* d[3].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[148]/* d[3].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[154]/* d[3].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[220]/* d[3].d.p.monitor_start PARAM */) , (data->simulationInfo->realParameter[169]/* d[3].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[226]/* d[3].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[175]/* d[3].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[223]/* d[3].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[160]/* d[3].d.p.arrival_timeout PARAM */) , (data->simulationInfo->integerParameter[9]/* d[3].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[178]/* d[3].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[157]/* d[3].d.p.arrivalThreshold PARAM */) , tmp9, tmp10, (data->simulationInfo->realParameter[208]/* d[3].d.p.m PARAM */) , (data->simulationInfo->realParameter[214]/* d[3].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[205]/* d[3].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[235]/* d[3].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[211]/* d[3].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[181]/* d[3].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[217]/* d[3].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[166]/* d[3].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[163]/* d[3].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[172]/* d[3].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[229]/* d[3].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[184]/* d[3].d.p.dangerousBatteryLevel PARAM */) ), (data->simulationInfo->realVarsPre[102]/* d[3].d.battery DISCRETE */) );

      tmp11 = Less(fabs((data->localData[0]->realVars[102]/* d[3].d.battery DISCRETE */)  - (data->simulationInfo->realParameter[166]/* d[3].d.p.capacity PARAM */) ),0.1);
      if(tmp11)
      {
        (data->localData[0]->integerVars[13]/* d[3].d.droneState DISCRETE */)  = ((modelica_integer) 1);
      }
    }
  }
  TRACE_POP
}
/*
equation index: 95
type: ALGORITHM

  d[2].d.droneDead := pre(d[2].d.droneDead);
  d[2].d.droneState := pre(d[2].d.droneState);
  d[2].d.tmpBatt := pre(d[2].d.tmpBatt);
  d[2].d.battery := pre(d[2].d.battery);
  $whenCondition11 := pre($whenCondition11);
  $whenCondition10 := pre($whenCondition10);
  $whenCondition10 := sample(4, 0.0, d[2].d.p.Tdrone) and d[2].d.droneState == 1;
  $whenCondition11 := sample(4, 0.0, d[2].d.p.Tdrone) and d[2].d.droneState == 0;
  when false then
    d[2].d.battery := d[2].d.p.capacity;
    d[2].d.tmpBatt := d[2].d.battery;
    d[2].d.droneState := 1;
    d[2].d.droneDead := false;
  elsewhen $whenCondition10 then
    if myrandom() > d[2].d.p.p_comm_error then
      d[2].d.battery := batteryMonitor(pre(d[2].d.battery), d[2].d.p.batteryDischarge + d[2].d.p.commDischarge);
    else
      d[2].d.battery := batteryMonitor(pre(d[2].d.battery), d[2].d.p.batteryDischarge);
    end if;
    if returnedHome(d[2].d.p, d[2].d.x, d[2].d.y, d[2].d.z) and d[2].d.battery < d[2].d.p.dangerousBatteryLevel then
      d[2].d.droneState := 0;
    end if;
  elsewhen $whenCondition11 then
    d[2].d.battery := charging(d[2].d.p, pre(d[2].d.battery));
    if abs(d[2].d.battery - d[2].d.p.capacity) < 0.1 then
      d[2].d.droneState := 1;
    end if;
  end when;
*/
void System_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  modelica_boolean tmp14;
  real_array tmp15;
  real_array tmp16;
  modelica_boolean tmp17;
  real_array tmp18;
  real_array tmp19;
  modelica_boolean tmp20;
  (data->localData[0]->booleanVars[33]/* d[2].d.droneDead DISCRETE */)  = (data->simulationInfo->booleanVarsPre[33]/* d[2].d.droneDead DISCRETE */) ;

  (data->localData[0]->integerVars[12]/* d[2].d.droneState DISCRETE */)  = (data->simulationInfo->integerVarsPre[12]/* d[2].d.droneState DISCRETE */) ;

  (data->localData[0]->realVars[104]/* d[2].d.tmpBatt DISCRETE */)  = (data->simulationInfo->realVarsPre[104]/* d[2].d.tmpBatt DISCRETE */) ;

  (data->localData[0]->realVars[101]/* d[2].d.battery DISCRETE */)  = (data->simulationInfo->realVarsPre[101]/* d[2].d.battery DISCRETE */) ;

  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[2]/* $whenCondition11 DISCRETE */) ;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[1]/* $whenCondition10 DISCRETE */) ;

  (data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  = (data->simulationInfo->samples[3] && ((data->localData[0]->integerVars[12]/* d[2].d.droneState DISCRETE */)  == ((modelica_integer) 1)));

  (data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  = (data->simulationInfo->samples[3] && ((data->localData[0]->integerVars[12]/* d[2].d.droneState DISCRETE */)  == ((modelica_integer) 0)));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[101]/* d[2].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[165]/* d[2].d.p.capacity PARAM */) ;

      (data->localData[0]->realVars[104]/* d[2].d.tmpBatt DISCRETE */)  = (data->localData[0]->realVars[101]/* d[2].d.battery DISCRETE */) ;

      (data->localData[0]->integerVars[12]/* d[2].d.droneState DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->booleanVars[33]/* d[2].d.droneDead DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[1]/* $whenCondition10 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[1]/* $whenCondition10 DISCRETE */)  /* edge */))
    {
      tmp14 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[222]/* d[2].d.p.p_comm_error PARAM */) );
      if(tmp14)
      {
        (data->localData[0]->realVars[101]/* d[2].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[101]/* d[2].d.battery DISCRETE */) , (data->simulationInfo->realParameter[162]/* d[2].d.p.batteryDischarge PARAM */)  + (data->simulationInfo->realParameter[171]/* d[2].d.p.commDischarge PARAM */) );
      }
      else
      {
        (data->localData[0]->realVars[101]/* d[2].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[101]/* d[2].d.battery DISCRETE */) , (data->simulationInfo->realParameter[162]/* d[2].d.p.batteryDischarge PARAM */) );
      }

      real_array_create(&tmp15, ((modelica_real*)&((&data->simulationInfo->realParameter[194]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 2) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp16, ((modelica_real*)&((&data->simulationInfo->realParameter[185]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 2) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      tmp17 = Less((data->localData[0]->realVars[101]/* d[2].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[183]/* d[2].d.p.dangerousBatteryLevel PARAM */) );
      if((omc_returnedHome(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[231]/* d[2].d.p.stop_simulation PARAM */) , (data->simulationInfo->realParameter[150]/* d[2].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[147]/* d[2].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[153]/* d[2].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[219]/* d[2].d.p.monitor_start PARAM */) , (data->simulationInfo->realParameter[168]/* d[2].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[225]/* d[2].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[174]/* d[2].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[222]/* d[2].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[159]/* d[2].d.p.arrival_timeout PARAM */) , (data->simulationInfo->integerParameter[8]/* d[2].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[177]/* d[2].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[156]/* d[2].d.p.arrivalThreshold PARAM */) , tmp15, tmp16, (data->simulationInfo->realParameter[207]/* d[2].d.p.m PARAM */) , (data->simulationInfo->realParameter[213]/* d[2].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[204]/* d[2].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[234]/* d[2].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[210]/* d[2].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[180]/* d[2].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[216]/* d[2].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[165]/* d[2].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[162]/* d[2].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[171]/* d[2].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[228]/* d[2].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[183]/* d[2].d.p.dangerousBatteryLevel PARAM */) ), (data->localData[0]->realVars[10]/* d[2].d.x STATE(1,d[2].d.Vx) */) , (data->localData[0]->realVars[13]/* d[2].d.y STATE(1,d[2].d.Vy) */) , (data->localData[0]->realVars[16]/* d[2].d.z STATE(1,d[2].d.Vz) */) ) && tmp17))
      {
        (data->localData[0]->integerVars[12]/* d[2].d.droneState DISCRETE */)  = ((modelica_integer) 0);
      }
    }
    else if(((data->localData[0]->booleanVars[2]/* $whenCondition11 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[2]/* $whenCondition11 DISCRETE */)  /* edge */))
    {
      real_array_create(&tmp18, ((modelica_real*)&((&data->simulationInfo->realParameter[194]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 2) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp19, ((modelica_real*)&((&data->simulationInfo->realParameter[185]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 2) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      (data->localData[0]->realVars[101]/* d[2].d.battery DISCRETE */)  = omc_charging(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[231]/* d[2].d.p.stop_simulation PARAM */) , (data->simulationInfo->realParameter[150]/* d[2].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[147]/* d[2].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[153]/* d[2].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[219]/* d[2].d.p.monitor_start PARAM */) , (data->simulationInfo->realParameter[168]/* d[2].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[225]/* d[2].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[174]/* d[2].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[222]/* d[2].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[159]/* d[2].d.p.arrival_timeout PARAM */) , (data->simulationInfo->integerParameter[8]/* d[2].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[177]/* d[2].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[156]/* d[2].d.p.arrivalThreshold PARAM */) , tmp18, tmp19, (data->simulationInfo->realParameter[207]/* d[2].d.p.m PARAM */) , (data->simulationInfo->realParameter[213]/* d[2].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[204]/* d[2].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[234]/* d[2].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[210]/* d[2].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[180]/* d[2].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[216]/* d[2].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[165]/* d[2].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[162]/* d[2].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[171]/* d[2].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[228]/* d[2].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[183]/* d[2].d.p.dangerousBatteryLevel PARAM */) ), (data->simulationInfo->realVarsPre[101]/* d[2].d.battery DISCRETE */) );

      tmp20 = Less(fabs((data->localData[0]->realVars[101]/* d[2].d.battery DISCRETE */)  - (data->simulationInfo->realParameter[165]/* d[2].d.p.capacity PARAM */) ),0.1);
      if(tmp20)
      {
        (data->localData[0]->integerVars[12]/* d[2].d.droneState DISCRETE */)  = ((modelica_integer) 1);
      }
    }
  }
  TRACE_POP
}
/*
equation index: 96
type: ALGORITHM

  d[1].d.droneDead := pre(d[1].d.droneDead);
  d[1].d.droneState := pre(d[1].d.droneState);
  d[1].d.tmpBatt := pre(d[1].d.tmpBatt);
  d[1].d.battery := pre(d[1].d.battery);
  $whenCondition15 := pre($whenCondition15);
  $whenCondition14 := pre($whenCondition14);
  $whenCondition14 := sample(1, 0.0, d[1].d.p.Tdrone) and d[1].d.droneState == 1;
  $whenCondition15 := sample(1, 0.0, d[1].d.p.Tdrone) and d[1].d.droneState == 0;
  when false then
    d[1].d.battery := d[1].d.p.capacity;
    d[1].d.tmpBatt := d[1].d.battery;
    d[1].d.droneState := 1;
    d[1].d.droneDead := false;
  elsewhen $whenCondition14 then
    if myrandom() > d[1].d.p.p_comm_error then
      d[1].d.battery := batteryMonitor(pre(d[1].d.battery), d[1].d.p.batteryDischarge + d[1].d.p.commDischarge);
    else
      d[1].d.battery := batteryMonitor(pre(d[1].d.battery), d[1].d.p.batteryDischarge);
    end if;
    if returnedHome(d[1].d.p, d[1].d.x, d[1].d.y, d[1].d.z) and d[1].d.battery < d[1].d.p.dangerousBatteryLevel then
      d[1].d.droneState := 0;
    end if;
  elsewhen $whenCondition15 then
    d[1].d.battery := charging(d[1].d.p, pre(d[1].d.battery));
    if abs(d[1].d.battery - d[1].d.p.capacity) < 0.1 then
      d[1].d.droneState := 1;
    end if;
  end when;
*/
void System_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  modelica_boolean tmp23;
  real_array tmp24;
  real_array tmp25;
  modelica_boolean tmp26;
  real_array tmp27;
  real_array tmp28;
  modelica_boolean tmp29;
  (data->localData[0]->booleanVars[32]/* d[1].d.droneDead DISCRETE */)  = (data->simulationInfo->booleanVarsPre[32]/* d[1].d.droneDead DISCRETE */) ;

  (data->localData[0]->integerVars[11]/* d[1].d.droneState DISCRETE */)  = (data->simulationInfo->integerVarsPre[11]/* d[1].d.droneState DISCRETE */) ;

  (data->localData[0]->realVars[103]/* d[1].d.tmpBatt DISCRETE */)  = (data->simulationInfo->realVarsPre[103]/* d[1].d.tmpBatt DISCRETE */) ;

  (data->localData[0]->realVars[100]/* d[1].d.battery DISCRETE */)  = (data->simulationInfo->realVarsPre[100]/* d[1].d.battery DISCRETE */) ;

  (data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[6]/* $whenCondition15 DISCRETE */) ;

  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[5]/* $whenCondition14 DISCRETE */) ;

  (data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  = (data->simulationInfo->samples[0] && ((data->localData[0]->integerVars[11]/* d[1].d.droneState DISCRETE */)  == ((modelica_integer) 1)));

  (data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  = (data->simulationInfo->samples[0] && ((data->localData[0]->integerVars[11]/* d[1].d.droneState DISCRETE */)  == ((modelica_integer) 0)));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[100]/* d[1].d.battery DISCRETE */)  = (data->simulationInfo->realParameter[164]/* d[1].d.p.capacity PARAM */) ;

      (data->localData[0]->realVars[103]/* d[1].d.tmpBatt DISCRETE */)  = (data->localData[0]->realVars[100]/* d[1].d.battery DISCRETE */) ;

      (data->localData[0]->integerVars[11]/* d[1].d.droneState DISCRETE */)  = ((modelica_integer) 1);

      (data->localData[0]->booleanVars[32]/* d[1].d.droneDead DISCRETE */)  = 0;
    }
    else if(((data->localData[0]->booleanVars[5]/* $whenCondition14 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[5]/* $whenCondition14 DISCRETE */)  /* edge */))
    {
      tmp23 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[221]/* d[1].d.p.p_comm_error PARAM */) );
      if(tmp23)
      {
        (data->localData[0]->realVars[100]/* d[1].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[100]/* d[1].d.battery DISCRETE */) , (data->simulationInfo->realParameter[161]/* d[1].d.p.batteryDischarge PARAM */)  + (data->simulationInfo->realParameter[170]/* d[1].d.p.commDischarge PARAM */) );
      }
      else
      {
        (data->localData[0]->realVars[100]/* d[1].d.battery DISCRETE */)  = omc_batteryMonitor(threadData, (data->simulationInfo->realVarsPre[100]/* d[1].d.battery DISCRETE */) , (data->simulationInfo->realParameter[161]/* d[1].d.p.batteryDischarge PARAM */) );
      }

      real_array_create(&tmp24, ((modelica_real*)&((&data->simulationInfo->realParameter[194]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp25, ((modelica_real*)&((&data->simulationInfo->realParameter[185]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      tmp26 = Less((data->localData[0]->realVars[100]/* d[1].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[182]/* d[1].d.p.dangerousBatteryLevel PARAM */) );
      if((omc_returnedHome(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[230]/* d[1].d.p.stop_simulation PARAM */) , (data->simulationInfo->realParameter[149]/* d[1].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[146]/* d[1].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[152]/* d[1].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[218]/* d[1].d.p.monitor_start PARAM */) , (data->simulationInfo->realParameter[167]/* d[1].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[224]/* d[1].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[173]/* d[1].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[221]/* d[1].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[158]/* d[1].d.p.arrival_timeout PARAM */) , (data->simulationInfo->integerParameter[7]/* d[1].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[176]/* d[1].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[155]/* d[1].d.p.arrivalThreshold PARAM */) , tmp24, tmp25, (data->simulationInfo->realParameter[206]/* d[1].d.p.m PARAM */) , (data->simulationInfo->realParameter[212]/* d[1].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[203]/* d[1].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[233]/* d[1].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[209]/* d[1].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[179]/* d[1].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[215]/* d[1].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[164]/* d[1].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[161]/* d[1].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[170]/* d[1].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[227]/* d[1].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[182]/* d[1].d.p.dangerousBatteryLevel PARAM */) ), (data->localData[0]->realVars[9]/* d[1].d.x STATE(1,d[1].d.Vx) */) , (data->localData[0]->realVars[12]/* d[1].d.y STATE(1,d[1].d.Vy) */) , (data->localData[0]->realVars[15]/* d[1].d.z STATE(1,d[1].d.Vz) */) ) && tmp26))
      {
        (data->localData[0]->integerVars[11]/* d[1].d.droneState DISCRETE */)  = ((modelica_integer) 0);
      }
    }
    else if(((data->localData[0]->booleanVars[6]/* $whenCondition15 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[6]/* $whenCondition15 DISCRETE */)  /* edge */))
    {
      real_array_create(&tmp27, ((modelica_real*)&((&data->simulationInfo->realParameter[194]/* d[1].d.p.flyZone[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      real_array_create(&tmp28, ((modelica_real*)&((&data->simulationInfo->realParameter[185]/* d[1].d.p.docking_bay[1] PARAM */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)] )), 1, (_index_t)3);
      (data->localData[0]->realVars[100]/* d[1].d.battery DISCRETE */)  = omc_charging(threadData, omc_Prm(threadData, (data->simulationInfo->realParameter[230]/* d[1].d.p.stop_simulation PARAM */) , (data->simulationInfo->realParameter[149]/* d[1].d.p.Tdrone PARAM */) , (data->simulationInfo->realParameter[146]/* d[1].d.p.Tcc PARAM */) , (data->simulationInfo->realParameter[152]/* d[1].d.p.Tm PARAM */) , (data->simulationInfo->realParameter[218]/* d[1].d.p.monitor_start PARAM */) , (data->simulationInfo->realParameter[167]/* d[1].d.p.cc_choice PARAM */) , (data->simulationInfo->realParameter[224]/* d[1].d.p.p_worst PARAM */) , (data->simulationInfo->realParameter[173]/* d[1].d.p.comm_timeout PARAM */) , (data->simulationInfo->realParameter[221]/* d[1].d.p.p_comm_error PARAM */) , (data->simulationInfo->realParameter[158]/* d[1].d.p.arrival_timeout PARAM */) , (data->simulationInfo->integerParameter[7]/* d[1].d.p.nDrones PARAM */) , (data->simulationInfo->realParameter[176]/* d[1].d.p.dDistance PARAM */) , (data->simulationInfo->realParameter[155]/* d[1].d.p.arrivalThreshold PARAM */) , tmp27, tmp28, (data->simulationInfo->realParameter[206]/* d[1].d.p.m PARAM */) , (data->simulationInfo->realParameter[212]/* d[1].d.p.maxSpeed PARAM */) , (data->simulationInfo->realParameter[203]/* d[1].d.p.horizontalODD PARAM */) , (data->simulationInfo->realParameter[233]/* d[1].d.p.verticalODD PARAM */) , (data->simulationInfo->realParameter[209]/* d[1].d.p.maxAngle PARAM */) , (data->simulationInfo->realParameter[179]/* d[1].d.p.dangerRadius PARAM */) , (data->simulationInfo->realParameter[215]/* d[1].d.p.minDistanceFromObs PARAM */) , (data->simulationInfo->realParameter[164]/* d[1].d.p.capacity PARAM */) , (data->simulationInfo->realParameter[161]/* d[1].d.p.batteryDischarge PARAM */) , (data->simulationInfo->realParameter[170]/* d[1].d.p.commDischarge PARAM */) , (data->simulationInfo->realParameter[227]/* d[1].d.p.rechargeRate PARAM */) , (data->simulationInfo->realParameter[182]/* d[1].d.p.dangerousBatteryLevel PARAM */) ), (data->simulationInfo->realVarsPre[100]/* d[1].d.battery DISCRETE */) );

      tmp29 = Less(fabs((data->localData[0]->realVars[100]/* d[1].d.battery DISCRETE */)  - (data->simulationInfo->realParameter[164]/* d[1].d.p.capacity PARAM */) ),0.1);
      if(tmp29)
      {
        (data->localData[0]->integerVars[11]/* d[1].d.droneState DISCRETE */)  = ((modelica_integer) 1);
      }
    }
  }
  TRACE_POP
}
/*
equation index: 97
type: SIMPLE_ASSIGN
cc.pos[3,3] = d[3].d.z
*/
void System_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  (data->localData[0]->realVars[45]/* cc.pos[3,3] variable */)  = (data->localData[0]->realVars[17]/* d[3].d.z STATE(1,d[3].d.Vz) */) ;
  TRACE_POP
}
/*
equation index: 98
type: SIMPLE_ASSIGN
cc.pos[3,2] = d[3].d.y
*/
void System_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  (data->localData[0]->realVars[44]/* cc.pos[3,2] variable */)  = (data->localData[0]->realVars[14]/* d[3].d.y STATE(1,d[3].d.Vy) */) ;
  TRACE_POP
}
/*
equation index: 99
type: SIMPLE_ASSIGN
cc.pos[3,1] = d[3].d.x
*/
void System_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  (data->localData[0]->realVars[43]/* cc.pos[3,1] variable */)  = (data->localData[0]->realVars[11]/* d[3].d.x STATE(1,d[3].d.Vx) */) ;
  TRACE_POP
}
/*
equation index: 100
type: SIMPLE_ASSIGN
cc.pos[2,3] = d[2].d.z
*/
void System_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  (data->localData[0]->realVars[42]/* cc.pos[2,3] variable */)  = (data->localData[0]->realVars[16]/* d[2].d.z STATE(1,d[2].d.Vz) */) ;
  TRACE_POP
}
/*
equation index: 101
type: SIMPLE_ASSIGN
cc.pos[2,2] = d[2].d.y
*/
void System_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  (data->localData[0]->realVars[41]/* cc.pos[2,2] variable */)  = (data->localData[0]->realVars[13]/* d[2].d.y STATE(1,d[2].d.Vy) */) ;
  TRACE_POP
}
/*
equation index: 102
type: SIMPLE_ASSIGN
cc.pos[2,1] = d[2].d.x
*/
void System_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  (data->localData[0]->realVars[40]/* cc.pos[2,1] variable */)  = (data->localData[0]->realVars[10]/* d[2].d.x STATE(1,d[2].d.Vx) */) ;
  TRACE_POP
}
/*
equation index: 103
type: SIMPLE_ASSIGN
cc.pos[1,3] = d[1].d.z
*/
void System_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  (data->localData[0]->realVars[39]/* cc.pos[1,3] variable */)  = (data->localData[0]->realVars[15]/* d[1].d.z STATE(1,d[1].d.Vz) */) ;
  TRACE_POP
}
/*
equation index: 104
type: SIMPLE_ASSIGN
cc.pos[1,2] = d[1].d.y
*/
void System_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  (data->localData[0]->realVars[38]/* cc.pos[1,2] variable */)  = (data->localData[0]->realVars[12]/* d[1].d.y STATE(1,d[1].d.Vy) */) ;
  TRACE_POP
}
/*
equation index: 105
type: SIMPLE_ASSIGN
cc.pos[1,1] = d[1].d.x
*/
void System_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  (data->localData[0]->realVars[37]/* cc.pos[1,1] variable */)  = (data->localData[0]->realVars[9]/* d[1].d.x STATE(1,d[1].d.Vx) */) ;
  TRACE_POP
}
/*
equation index: 106
type: ALGORITHM

  cc.setpointChangeTime[3] := pre(cc.setpointChangeTime[3]);
  cc.setpointChangeTime[2] := pre(cc.setpointChangeTime[2]);
  cc.setpointChangeTime[1] := pre(cc.setpointChangeTime[1]);
  cc.setpointChanged[3] := pre(cc.setpointChanged[3]);
  cc.setpointChanged[2] := pre(cc.setpointChanged[2]);
  cc.setpointChanged[1] := pre(cc.setpointChanged[1]);
  cc.lastAnswered[3] := pre(cc.lastAnswered[3]);
  cc.lastAnswered[2] := pre(cc.lastAnswered[2]);
  cc.lastAnswered[1] := pre(cc.lastAnswered[1]);
  cc.isDead[3] := pre(cc.isDead[3]);
  cc.isDead[2] := pre(cc.isDead[2]);
  cc.isDead[1] := pre(cc.isDead[1]);
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
  cc.setz[3] := pre(cc.setz[3]);
  cc.setz[2] := pre(cc.setz[2]);
  cc.setz[1] := pre(cc.setz[1]);
  cc.sety[3] := pre(cc.sety[3]);
  cc.sety[2] := pre(cc.sety[2]);
  cc.sety[1] := pre(cc.sety[1]);
  cc.setx[3] := pre(cc.setx[3]);
  cc.setx[2] := pre(cc.setx[2]);
  cc.setx[1] := pre(cc.setx[1]);
  cc.z := pre(cc.z);
  cc.err := pre(cc.err);
  $whenCondition3 := pre($whenCondition3);
  $whenCondition3 := sample(10, 0.0, p.Tcc);
  when false then
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
  elsewhen $whenCondition3 then
    cc.setpointChanged := {false, false, false};
    cc.err := 0.0;
    for drone in 1:3 loop
      if not cc.isDead[drone] then
        if myrandom() > cc.p.p_comm_error then
          cc.lastAnswered[drone] := time;
        else
          if abs(time - cc.lastAnswered[drone]) > cc.p.comm_timeout then
            cc.isDead[drone] := true;
            cc.isBusy[drone] := true;
            for area in 1:8 loop
              if cc.hasBeenSelected[area] == drone then
                cc.hasBeenSelected[area] := 0;
              end if;
            end for;
          end if;
        end if;
        if cc.isBusy[drone] and abs(cc.lastAnswered[drone] - time) < 0.1 and abs(cc.pos[drone,1] - cc.setx[drone]) < cc.p.arrivalThreshold and abs(cc.pos[drone,2] - cc.sety[drone]) < cc.p.arrivalThreshold and abs(cc.pos[drone,3] - cc.setz[drone]) < cc.p.arrivalThreshold then
          cc.isBusy[drone] := false;
          for area in 1:8 loop
            if cc.hasBeenSelected[area] == drone then
              cc.hasBeenSelected[area] := 0;
              cc.hasBeenVisited[area] := true;
              cc.lastVisited[area] := time;
              break;
            end if;
          end for;
        elseif cc.isBusy[drone] then
          if abs(time - cc.setpointChangeTime[drone]) > cc.p.arrival_timeout then
            cc.isBusy[drone] := false;
            for area in 1:8 loop
              if cc.hasBeenSelected[area] == drone then
                cc.hasBeenSelected[area] := 0;
              end if;
            end for;
          end if;
        end if;
      end if;
    end for;
    for drone in 1:3 loop
      if not cc.isDead[drone] then
        cc.err := update_drone_pos(drone, time, cc.pos[drone]);
      end if;
    end for;
    for area in 1:8 loop
      if not cc.hasBeenVisited[area] then
        cc.z := how_many_drones_in_area(area, cc.time_span);
        if cc.z > 0 then
          cc.hasBeenVisited[area] := true;
          cc.lastVisited[area] := time;
        end if;
      end if;
    end for;
    for drone in 1:3 loop
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
      if not cc.isBusy[drone] and not cc.isDead[drone] then
        for area in 1:8 loop
          if not cc.hasBeenVisited[area] and cc.hasBeenSelected[area] == 0 then
            (cc.area_x, cc.area_y, cc.area_z) := areaCenter(K(9.81, 3.14, 8, {{0.0, 100.0, 0.0, 100.0, 0.0, 100.0}, {100.0, 200.0, 0.0, 100.0, 0.0, 100.0}, {0.0, 100.0, 100.0, 200.0, 0.0, 100.0}, {100.0, 200.0, 100.0, 200.0, 0.0, 100.0}, {0.0, 100.0, 0.0, 100.0, 100.0, 200.0}, {100.0, 200.0, 0.0, 100.0, 100.0, 200.0}, {0.0, 100.0, 100.0, 200.0, 100.0, 200.0}, {100.0, 200.0, 100.0, 200.0, 100.0, 200.0}}), area);
            cc.tmp_distance := sqrt((cc.pos[drone,1] - cc.area_x) ^ 2.0 + (cc.pos[drone,2] - cc.area_y) ^ 2.0 + (cc.pos[drone,3] - cc.area_z) ^ 2.0);
            if cc.tmp_distance < cc.min_distance then
              cc.min_distance := cc.tmp_distance;
              cc.tmp_area_1 := area;
            end if;
            cc.tmp_time := time - cc.lastVisited[area];
            if cc.tmp_time > cc.max_time then
              cc.max_time := cc.tmp_time;
              cc.tmp_area_2 := area;
            end if;
          end if;
        end for;
        if not cc.tmp_area_1 == 0 and not cc.tmp_area_2 == 0 then
          cc.choice_value_1 := cc.min_distance * p.cc_choice;
          cc.choice_value_2 := cc.max_time * (1.0 - p.cc_choice);
          if cc.choice_value_1 > cc.choice_value_2 then
            if myrandom() > cc.p.p_worst then
              (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(K(9.81, 3.14, 8, {{0.0, 100.0, 0.0, 100.0, 0.0, 100.0}, {100.0, 200.0, 0.0, 100.0, 0.0, 100.0}, {0.0, 100.0, 100.0, 200.0, 0.0, 100.0}, {100.0, 200.0, 100.0, 200.0, 0.0, 100.0}, {0.0, 100.0, 0.0, 100.0, 100.0, 200.0}, {100.0, 200.0, 0.0, 100.0, 100.0, 200.0}, {0.0, 100.0, 100.0, 200.0, 100.0, 200.0}, {100.0, 200.0, 100.0, 200.0, 100.0, 200.0}}), cc.tmp_area_1);
              cc.isBusy[drone] := true;
              cc.hasBeenSelected[cc.tmp_area_1] := drone;
              cc.setpointChanged[drone] := true;
              cc.setpointChangeTime[drone] := time;
            else
              (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(K(9.81, 3.14, 8, {{0.0, 100.0, 0.0, 100.0, 0.0, 100.0}, {100.0, 200.0, 0.0, 100.0, 0.0, 100.0}, {0.0, 100.0, 100.0, 200.0, 0.0, 100.0}, {100.0, 200.0, 100.0, 200.0, 0.0, 100.0}, {0.0, 100.0, 0.0, 100.0, 100.0, 200.0}, {100.0, 200.0, 0.0, 100.0, 100.0, 200.0}, {0.0, 100.0, 100.0, 200.0, 100.0, 200.0}, {100.0, 200.0, 100.0, 200.0, 100.0, 200.0}}), cc.tmp_area_2);
              cc.isBusy[drone] := true;
              cc.hasBeenSelected[cc.tmp_area_2] := drone;
              cc.setpointChanged[drone] := true;
              cc.setpointChangeTime[drone] := time;
            end if;
          else
            if myrandom() > cc.p.p_worst then
              (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(K(9.81, 3.14, 8, {{0.0, 100.0, 0.0, 100.0, 0.0, 100.0}, {100.0, 200.0, 0.0, 100.0, 0.0, 100.0}, {0.0, 100.0, 100.0, 200.0, 0.0, 100.0}, {100.0, 200.0, 100.0, 200.0, 0.0, 100.0}, {0.0, 100.0, 0.0, 100.0, 100.0, 200.0}, {100.0, 200.0, 0.0, 100.0, 100.0, 200.0}, {0.0, 100.0, 100.0, 200.0, 100.0, 200.0}, {100.0, 200.0, 100.0, 200.0, 100.0, 200.0}}), cc.tmp_area_2);
              cc.isBusy[drone] := true;
              cc.hasBeenSelected[cc.tmp_area_2] := drone;
              cc.setpointChanged[drone] := true;
              cc.setpointChangeTime[drone] := time;
            else
              (cc.setx[drone], cc.sety[drone], cc.setz[drone]) := areaCenter(K(9.81, 3.14, 8, {{0.0, 100.0, 0.0, 100.0, 0.0, 100.0}, {100.0, 200.0, 0.0, 100.0, 0.0, 100.0}, {0.0, 100.0, 100.0, 200.0, 0.0, 100.0}, {100.0, 200.0, 100.0, 200.0, 0.0, 100.0}, {0.0, 100.0, 0.0, 100.0, 100.0, 200.0}, {100.0, 200.0, 0.0, 100.0, 100.0, 200.0}, {0.0, 100.0, 100.0, 200.0, 100.0, 200.0}, {100.0, 200.0, 100.0, 200.0, 100.0, 200.0}}), cc.tmp_area_1);
              cc.isBusy[drone] := true;
              cc.hasBeenSelected[cc.tmp_area_1] := drone;
              cc.setpointChanged[drone] := true;
              cc.setpointChangeTime[drone] := time;
            end if;
          end if;
        end if;
      end if;
    end for;
    for drone in 1:3 loop
    end for;
    cc.err := 0.0;
    for area in 1:8 loop
      if not cc.hasBeenVisited[area] then
        cc.err := 100.0;
        break;
      end if;
    end for;
    if cc.err < 1.0 then
      cc.time_passed_since_last_loop := time - cc.time_span;
      cc.time_span := time;
      cc.hasBeenVisited := {false, false, false, false, false, false, false, false};
      cc.hasBeenSelected := {0, 0, 0, 0, 0, 0, 0, 0};
    end if;
    cc.err := 0.0;
    for drone in 1:3 loop
      if not cc.isDead[drone] then
        cc.err := 100.0;
        break;
      end if;
    end for;
    if cc.err < 1.0 then
      terminate("Every drone has died :(");
    end if;
  end when;
*/
void System_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  real_array tmp30;
  real_array tmp31;
  real_array tmp32;
  real_array tmp33;
  real_array tmp34;
  real_array tmp35;
  boolean_array tmp36;
  boolean_array tmp37;
  real_array tmp38;
  real_array tmp39;
  boolean_array tmp40;
  boolean_array tmp41;
  integer_array tmp42;
  integer_array tmp43;
  real_array tmp44;
  modelica_real tmp45;
  boolean_array tmp46;
  boolean_array tmp47;
  real_array tmp48;
  real_array tmp49;
  boolean_array tmp50;
  boolean_array tmp51;
  real_array tmp52;
  real_array tmp53;
  Prm tmp54;
  real_array tmp55;
  real_array tmp56;
  Prm tmp57;
  real_array tmp58;
  real_array tmp59;
  boolean_array tmp60;
  boolean_array tmp61;
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  modelica_integer tmp65;
  modelica_integer tmp66;
  modelica_integer tmp67;
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_integer tmp73;
  modelica_integer tmp74;
  modelica_integer tmp75;
  modelica_boolean tmp76;
  modelica_integer tmp78;
  modelica_integer tmp79;
  modelica_integer tmp80;
  modelica_integer tmp81;
  modelica_integer tmp82;
  modelica_integer tmp83;
  real_array tmp84;
  modelica_integer tmp85;
  modelica_integer tmp86;
  modelica_integer tmp87;
  modelica_boolean tmp88;
  modelica_integer tmp89;
  modelica_integer tmp90;
  modelica_integer tmp91;
  real_array tmp92;
  modelica_real tmp93;
  K tmp95;
  real_array tmp96;
  modelica_real tmp97;
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  modelica_integer tmp102;
  modelica_integer tmp103;
  modelica_integer tmp104;
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  K tmp109;
  real_array tmp110;
  K tmp111;
  real_array tmp112;
  modelica_boolean tmp113;
  K tmp114;
  real_array tmp115;
  K tmp116;
  real_array tmp117;
  modelica_integer tmp118;
  modelica_integer tmp119;
  modelica_integer tmp120;
  modelica_integer tmp121;
  modelica_integer tmp122;
  modelica_integer tmp123;
  modelica_integer tmp124;
  modelica_integer tmp125;
  modelica_integer tmp126;
  modelica_boolean tmp127;
  boolean_array tmp128;
  boolean_array tmp129;
  integer_array tmp130;
  integer_array tmp131;
  modelica_integer tmp132;
  modelica_integer tmp133;
  modelica_integer tmp134;
  modelica_boolean tmp135;
  static const MMC_DEFSTRINGLIT(tmp136,23,"Every drone has died :(");
  (data->localData[0]->realVars[77]/* cc.setpointChangeTime[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[77]/* cc.setpointChangeTime[3] DISCRETE */) ;

  (data->localData[0]->realVars[76]/* cc.setpointChangeTime[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[76]/* cc.setpointChangeTime[2] DISCRETE */) ;

  (data->localData[0]->realVars[75]/* cc.setpointChangeTime[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[75]/* cc.setpointChangeTime[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[31]/* cc.setpointChanged[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[31]/* cc.setpointChanged[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[30]/* cc.setpointChanged[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[30]/* cc.setpointChanged[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[29]/* cc.setpointChanged[1] DISCRETE */) ;

  (data->localData[0]->realVars[64]/* cc.lastAnswered[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[64]/* cc.lastAnswered[3] DISCRETE */) ;

  (data->localData[0]->realVars[63]/* cc.lastAnswered[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[63]/* cc.lastAnswered[2] DISCRETE */) ;

  (data->localData[0]->realVars[62]/* cc.lastAnswered[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[62]/* cc.lastAnswered[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[28]/* cc.isDead[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[28]/* cc.isDead[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[27]/* cc.isDead[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[27]/* cc.isDead[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[26]/* cc.isDead[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[26]/* cc.isDead[1] DISCRETE */) ;

  (data->localData[0]->realVars[90]/* cc.tmp_time DISCRETE */)  = (data->simulationInfo->realVarsPre[90]/* cc.tmp_time DISCRETE */) ;

  (data->localData[0]->realVars[73]/* cc.max_time DISCRETE */)  = (data->simulationInfo->realVarsPre[73]/* cc.max_time DISCRETE */) ;

  (data->localData[0]->realVars[58]/* cc.area_z DISCRETE */)  = (data->simulationInfo->realVarsPre[58]/* cc.area_z DISCRETE */) ;

  (data->localData[0]->realVars[57]/* cc.area_y DISCRETE */)  = (data->simulationInfo->realVarsPre[57]/* cc.area_y DISCRETE */) ;

  (data->localData[0]->realVars[56]/* cc.area_x DISCRETE */)  = (data->simulationInfo->realVarsPre[56]/* cc.area_x DISCRETE */) ;

  (data->localData[0]->realVars[60]/* cc.choice_value_2 DISCRETE */)  = (data->simulationInfo->realVarsPre[60]/* cc.choice_value_2 DISCRETE */) ;

  (data->localData[0]->realVars[59]/* cc.choice_value_1 DISCRETE */)  = (data->simulationInfo->realVarsPre[59]/* cc.choice_value_1 DISCRETE */) ;

  (data->localData[0]->integerVars[9]/* cc.tmp_area_2 DISCRETE */)  = (data->simulationInfo->integerVarsPre[9]/* cc.tmp_area_2 DISCRETE */) ;

  (data->localData[0]->integerVars[8]/* cc.tmp_area_1 DISCRETE */)  = (data->simulationInfo->integerVarsPre[8]/* cc.tmp_area_1 DISCRETE */) ;

  (data->localData[0]->realVars[89]/* cc.tmp_distance DISCRETE */)  = (data->simulationInfo->realVarsPre[89]/* cc.tmp_distance DISCRETE */) ;

  (data->localData[0]->realVars[74]/* cc.min_distance DISCRETE */)  = (data->simulationInfo->realVarsPre[74]/* cc.min_distance DISCRETE */) ;

  (data->localData[0]->integerVars[7]/* cc.hasBeenSelected[8] DISCRETE */)  = (data->simulationInfo->integerVarsPre[7]/* cc.hasBeenSelected[8] DISCRETE */) ;

  (data->localData[0]->integerVars[6]/* cc.hasBeenSelected[7] DISCRETE */)  = (data->simulationInfo->integerVarsPre[6]/* cc.hasBeenSelected[7] DISCRETE */) ;

  (data->localData[0]->integerVars[5]/* cc.hasBeenSelected[6] DISCRETE */)  = (data->simulationInfo->integerVarsPre[5]/* cc.hasBeenSelected[6] DISCRETE */) ;

  (data->localData[0]->integerVars[4]/* cc.hasBeenSelected[5] DISCRETE */)  = (data->simulationInfo->integerVarsPre[4]/* cc.hasBeenSelected[5] DISCRETE */) ;

  (data->localData[0]->integerVars[3]/* cc.hasBeenSelected[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[3]/* cc.hasBeenSelected[4] DISCRETE */) ;

  (data->localData[0]->integerVars[2]/* cc.hasBeenSelected[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[2]/* cc.hasBeenSelected[3] DISCRETE */) ;

  (data->localData[0]->integerVars[1]/* cc.hasBeenSelected[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[1]/* cc.hasBeenSelected[2] DISCRETE */) ;

  (data->localData[0]->integerVars[0]/* cc.hasBeenSelected[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[0]/* cc.hasBeenSelected[1] DISCRETE */) ;

  (data->localData[0]->realVars[87]/* cc.time_passed_since_last_loop DISCRETE */)  = (data->simulationInfo->realVarsPre[87]/* cc.time_passed_since_last_loop DISCRETE */) ;

  (data->localData[0]->realVars[88]/* cc.time_span DISCRETE */)  = (data->simulationInfo->realVarsPre[88]/* cc.time_span DISCRETE */) ;

  (data->localData[0]->booleanVars[25]/* cc.isBusy[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[25]/* cc.isBusy[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[24]/* cc.isBusy[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[24]/* cc.isBusy[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[23]/* cc.isBusy[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[23]/* cc.isBusy[1] DISCRETE */) ;

  (data->localData[0]->realVars[72]/* cc.lastVisited[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[72]/* cc.lastVisited[8] DISCRETE */) ;

  (data->localData[0]->realVars[71]/* cc.lastVisited[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[71]/* cc.lastVisited[7] DISCRETE */) ;

  (data->localData[0]->realVars[70]/* cc.lastVisited[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[70]/* cc.lastVisited[6] DISCRETE */) ;

  (data->localData[0]->realVars[69]/* cc.lastVisited[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[69]/* cc.lastVisited[5] DISCRETE */) ;

  (data->localData[0]->realVars[68]/* cc.lastVisited[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[68]/* cc.lastVisited[4] DISCRETE */) ;

  (data->localData[0]->realVars[67]/* cc.lastVisited[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[67]/* cc.lastVisited[3] DISCRETE */) ;

  (data->localData[0]->realVars[66]/* cc.lastVisited[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[66]/* cc.lastVisited[2] DISCRETE */) ;

  (data->localData[0]->realVars[65]/* cc.lastVisited[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[65]/* cc.lastVisited[1] DISCRETE */) ;

  (data->localData[0]->booleanVars[22]/* cc.hasBeenVisited[8] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[22]/* cc.hasBeenVisited[8] DISCRETE */) ;

  (data->localData[0]->booleanVars[21]/* cc.hasBeenVisited[7] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[21]/* cc.hasBeenVisited[7] DISCRETE */) ;

  (data->localData[0]->booleanVars[20]/* cc.hasBeenVisited[6] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[20]/* cc.hasBeenVisited[6] DISCRETE */) ;

  (data->localData[0]->booleanVars[19]/* cc.hasBeenVisited[5] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[19]/* cc.hasBeenVisited[5] DISCRETE */) ;

  (data->localData[0]->booleanVars[18]/* cc.hasBeenVisited[4] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[18]/* cc.hasBeenVisited[4] DISCRETE */) ;

  (data->localData[0]->booleanVars[17]/* cc.hasBeenVisited[3] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[17]/* cc.hasBeenVisited[3] DISCRETE */) ;

  (data->localData[0]->booleanVars[16]/* cc.hasBeenVisited[2] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[16]/* cc.hasBeenVisited[2] DISCRETE */) ;

  (data->localData[0]->booleanVars[15]/* cc.hasBeenVisited[1] DISCRETE */)  = (data->simulationInfo->booleanVarsPre[15]/* cc.hasBeenVisited[1] DISCRETE */) ;

  (data->localData[0]->realVars[86]/* cc.setz[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[86]/* cc.setz[3] DISCRETE */) ;

  (data->localData[0]->realVars[85]/* cc.setz[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[85]/* cc.setz[2] DISCRETE */) ;

  (data->localData[0]->realVars[84]/* cc.setz[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[84]/* cc.setz[1] DISCRETE */) ;

  (data->localData[0]->realVars[83]/* cc.sety[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[83]/* cc.sety[3] DISCRETE */) ;

  (data->localData[0]->realVars[82]/* cc.sety[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[82]/* cc.sety[2] DISCRETE */) ;

  (data->localData[0]->realVars[81]/* cc.sety[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[81]/* cc.sety[1] DISCRETE */) ;

  (data->localData[0]->realVars[80]/* cc.setx[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[80]/* cc.setx[3] DISCRETE */) ;

  (data->localData[0]->realVars[79]/* cc.setx[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[79]/* cc.setx[2] DISCRETE */) ;

  (data->localData[0]->realVars[78]/* cc.setx[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[78]/* cc.setx[1] DISCRETE */) ;

  (data->localData[0]->integerVars[10]/* cc.z DISCRETE */)  = (data->simulationInfo->integerVarsPre[10]/* cc.z DISCRETE */) ;

  (data->localData[0]->realVars[61]/* cc.err DISCRETE */)  = (data->simulationInfo->realVarsPre[61]/* cc.err DISCRETE */) ;

  (data->localData[0]->booleanVars[8]/* $whenCondition3 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[8]/* $whenCondition3 DISCRETE */) ;

  (data->localData[0]->booleanVars[8]/* $whenCondition3 DISCRETE */)  = data->simulationInfo->samples[9];

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->realVars[61]/* cc.err DISCRETE */)  = 0.0;

      (data->localData[0]->integerVars[10]/* cc.z DISCRETE */)  = ((modelica_integer) 0);

      array_alloc_scalar_real_array(&tmp30, 3, (modelica_real)(data->simulationInfo->realParameter[18]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[18]/* cc.p.flyZone[1] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[18]/* cc.p.flyZone[1] PARAM */) );
      real_array_create(&tmp31, ((modelica_real*)&((&(data->localData[0]->realVars[78]/* cc.setx[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
      real_array_copy_data(tmp30, tmp31);

      array_alloc_scalar_real_array(&tmp32, 3, (modelica_real)(data->simulationInfo->realParameter[19]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[19]/* cc.p.flyZone[2] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[19]/* cc.p.flyZone[2] PARAM */) );
      real_array_create(&tmp33, ((modelica_real*)&((&(data->localData[0]->realVars[81]/* cc.sety[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
      real_array_copy_data(tmp32, tmp33);

      array_alloc_scalar_real_array(&tmp34, 3, (modelica_real)(data->simulationInfo->realParameter[20]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[20]/* cc.p.flyZone[3] PARAM */) , (modelica_real)(data->simulationInfo->realParameter[20]/* cc.p.flyZone[3] PARAM */) );
      real_array_create(&tmp35, ((modelica_real*)&((&(data->localData[0]->realVars[84]/* cc.setz[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
      real_array_copy_data(tmp34, tmp35);

      array_alloc_scalar_boolean_array(&tmp36, 8, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp37, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[15]/* cc.hasBeenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      boolean_array_copy_data(tmp36, tmp37);

      array_alloc_scalar_real_array(&tmp38, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp39, ((modelica_real*)&((&(data->localData[0]->realVars[65]/* cc.lastVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp38, tmp39);

      array_alloc_scalar_boolean_array(&tmp40, 3, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp41, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[23]/* cc.isBusy[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
      boolean_array_copy_data(tmp40, tmp41);

      (data->localData[0]->realVars[88]/* cc.time_span DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[87]/* cc.time_passed_since_last_loop DISCRETE */)  = 0.0;

      array_alloc_scalar_integer_array(&tmp42, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp43, ((modelica_integer*)&((&(data->localData[0]->integerVars[0]/* cc.hasBeenSelected[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      integer_array_copy_data(tmp42, tmp43);

      real_array_create(&tmp44, ((modelica_real*)&((&data->simulationInfo->realParameter[18]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
      tmp45 = max_real_array(tmp44);
      (data->localData[0]->realVars[74]/* cc.min_distance DISCRETE */)  = tmp45;

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

      array_alloc_scalar_boolean_array(&tmp46, 3, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp47, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[26]/* cc.isDead[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
      boolean_array_copy_data(tmp46, tmp47);

      array_alloc_scalar_real_array(&tmp48, 3, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp49, ((modelica_real*)&((&(data->localData[0]->realVars[62]/* cc.lastAnswered[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
      real_array_copy_data(tmp48, tmp49);

      array_alloc_scalar_boolean_array(&tmp50, 3, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp51, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
      boolean_array_copy_data(tmp50, tmp51);

      array_alloc_scalar_real_array(&tmp52, 3, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp53, ((modelica_real*)&((&(data->localData[0]->realVars[75]/* cc.setpointChangeTime[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
      real_array_copy_data(tmp52, tmp53);

      omc_setup__db(threadData);

      real_array_create(&tmp55, ((modelica_real*)&((&data->simulationInfo->realParameter[18]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
      real_array_create(&tmp56, ((modelica_real*)&((&data->simulationInfo->realParameter[15]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
      tmp54._stop_simulation = (data->simulationInfo->realParameter[30]/* cc.p.stop_simulation PARAM */) ;
      tmp54._Tdrone = (data->simulationInfo->realParameter[3]/* cc.p.Tdrone PARAM */) ;
      tmp54._Tcc = (data->simulationInfo->realParameter[2]/* cc.p.Tcc PARAM */) ;
      tmp54._Tm = (data->simulationInfo->realParameter[4]/* cc.p.Tm PARAM */) ;
      tmp54._monitor_start = (data->simulationInfo->realParameter[26]/* cc.p.monitor_start PARAM */) ;
      tmp54._cc_choice = (data->simulationInfo->realParameter[9]/* cc.p.cc_choice PARAM */) ;
      tmp54._p_worst = (data->simulationInfo->realParameter[28]/* cc.p.p_worst PARAM */) ;
      tmp54._comm_timeout = (data->simulationInfo->realParameter[11]/* cc.p.comm_timeout PARAM */) ;
      tmp54._p_comm_error = (data->simulationInfo->realParameter[27]/* cc.p.p_comm_error PARAM */) ;
      tmp54._arrival_timeout = (data->simulationInfo->realParameter[6]/* cc.p.arrival_timeout PARAM */) ;
      tmp54._nDrones = ((modelica_integer) 3);
      tmp54._dDistance = (data->simulationInfo->realParameter[12]/* cc.p.dDistance PARAM */) ;
      tmp54._arrivalThreshold = (data->simulationInfo->realParameter[5]/* cc.p.arrivalThreshold PARAM */) ;
      tmp54._flyZone = tmp55;
      tmp54._docking_bay = tmp56;
      tmp54._m = (data->simulationInfo->realParameter[22]/* cc.p.m PARAM */) ;
      tmp54._maxSpeed = (data->simulationInfo->realParameter[24]/* cc.p.maxSpeed PARAM */) ;
      tmp54._horizontalODD = (data->simulationInfo->realParameter[21]/* cc.p.horizontalODD PARAM */) ;
      tmp54._verticalODD = (data->simulationInfo->realParameter[31]/* cc.p.verticalODD PARAM */) ;
      tmp54._maxAngle = (data->simulationInfo->realParameter[23]/* cc.p.maxAngle PARAM */) ;
      tmp54._dangerRadius = (data->simulationInfo->realParameter[13]/* cc.p.dangerRadius PARAM */) ;
      tmp54._minDistanceFromObs = (data->simulationInfo->realParameter[25]/* cc.p.minDistanceFromObs PARAM */) ;
      tmp54._capacity = (data->simulationInfo->realParameter[8]/* cc.p.capacity PARAM */) ;
      tmp54._batteryDischarge = (data->simulationInfo->realParameter[7]/* cc.p.batteryDischarge PARAM */) ;
      tmp54._commDischarge = (data->simulationInfo->realParameter[10]/* cc.p.commDischarge PARAM */) ;
      tmp54._rechargeRate = (data->simulationInfo->realParameter[29]/* cc.p.rechargeRate PARAM */) ;
      tmp54._dangerousBatteryLevel = (data->simulationInfo->realParameter[14]/* cc.p.dangerousBatteryLevel PARAM */) ;
      omc_setup__areas(threadData, tmp54);

      real_array_create(&tmp58, ((modelica_real*)&((&data->simulationInfo->realParameter[18]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
      real_array_create(&tmp59, ((modelica_real*)&((&data->simulationInfo->realParameter[15]/* cc.p.docking_bay[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
      tmp57._stop_simulation = (data->simulationInfo->realParameter[30]/* cc.p.stop_simulation PARAM */) ;
      tmp57._Tdrone = (data->simulationInfo->realParameter[3]/* cc.p.Tdrone PARAM */) ;
      tmp57._Tcc = (data->simulationInfo->realParameter[2]/* cc.p.Tcc PARAM */) ;
      tmp57._Tm = (data->simulationInfo->realParameter[4]/* cc.p.Tm PARAM */) ;
      tmp57._monitor_start = (data->simulationInfo->realParameter[26]/* cc.p.monitor_start PARAM */) ;
      tmp57._cc_choice = (data->simulationInfo->realParameter[9]/* cc.p.cc_choice PARAM */) ;
      tmp57._p_worst = (data->simulationInfo->realParameter[28]/* cc.p.p_worst PARAM */) ;
      tmp57._comm_timeout = (data->simulationInfo->realParameter[11]/* cc.p.comm_timeout PARAM */) ;
      tmp57._p_comm_error = (data->simulationInfo->realParameter[27]/* cc.p.p_comm_error PARAM */) ;
      tmp57._arrival_timeout = (data->simulationInfo->realParameter[6]/* cc.p.arrival_timeout PARAM */) ;
      tmp57._nDrones = ((modelica_integer) 3);
      tmp57._dDistance = (data->simulationInfo->realParameter[12]/* cc.p.dDistance PARAM */) ;
      tmp57._arrivalThreshold = (data->simulationInfo->realParameter[5]/* cc.p.arrivalThreshold PARAM */) ;
      tmp57._flyZone = tmp58;
      tmp57._docking_bay = tmp59;
      tmp57._m = (data->simulationInfo->realParameter[22]/* cc.p.m PARAM */) ;
      tmp57._maxSpeed = (data->simulationInfo->realParameter[24]/* cc.p.maxSpeed PARAM */) ;
      tmp57._horizontalODD = (data->simulationInfo->realParameter[21]/* cc.p.horizontalODD PARAM */) ;
      tmp57._verticalODD = (data->simulationInfo->realParameter[31]/* cc.p.verticalODD PARAM */) ;
      tmp57._maxAngle = (data->simulationInfo->realParameter[23]/* cc.p.maxAngle PARAM */) ;
      tmp57._dangerRadius = (data->simulationInfo->realParameter[13]/* cc.p.dangerRadius PARAM */) ;
      tmp57._minDistanceFromObs = (data->simulationInfo->realParameter[25]/* cc.p.minDistanceFromObs PARAM */) ;
      tmp57._capacity = (data->simulationInfo->realParameter[8]/* cc.p.capacity PARAM */) ;
      tmp57._batteryDischarge = (data->simulationInfo->realParameter[7]/* cc.p.batteryDischarge PARAM */) ;
      tmp57._commDischarge = (data->simulationInfo->realParameter[10]/* cc.p.commDischarge PARAM */) ;
      tmp57._rechargeRate = (data->simulationInfo->realParameter[29]/* cc.p.rechargeRate PARAM */) ;
      tmp57._dangerousBatteryLevel = (data->simulationInfo->realParameter[14]/* cc.p.dangerousBatteryLevel PARAM */) ;
      omc_setup__drones(threadData, tmp57);
    }
    else if(((data->localData[0]->booleanVars[8]/* $whenCondition3 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[8]/* $whenCondition3 DISCRETE */)  /* edge */))
    {
      array_alloc_scalar_boolean_array(&tmp60, 3, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
      boolean_array_create(&tmp61, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)3);
      boolean_array_copy_data(tmp60, tmp61);

      (data->localData[0]->realVars[61]/* cc.err DISCRETE */)  = 0.0;

      tmp81 = ((modelica_integer) 1); tmp82 = 1; tmp83 = ((modelica_integer) 3);
      if(!(((tmp82 > 0) && (tmp81 > tmp83)) || ((tmp82 < 0) && (tmp81 < tmp83))))
      {
        modelica_integer drone;
        for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp81, tmp83); drone += tmp82)
        {
          if((!(&data->localData[0]->booleanVars[26]/* cc.isDead[1] DISCRETE */)[drone - 1] ))
          {
            tmp62 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[27]/* cc.p.p_comm_error PARAM */) );
            if(tmp62)
            {
              (&(data->localData[0]->realVars[62]/* cc.lastAnswered[1] DISCRETE */) )[drone - 1] = data->localData[0]->timeValue;
            }
            else
            {
              tmp63 = Greater(fabs(data->localData[0]->timeValue - (&data->localData[0]->realVars[62]/* cc.lastAnswered[1] DISCRETE */)[drone - 1] ),(data->simulationInfo->realParameter[11]/* cc.p.comm_timeout PARAM */) );
              if(tmp63)
              {
                (&(data->localData[0]->booleanVars[26]/* cc.isDead[1] DISCRETE */) )[drone - 1] = 1;

                (&(data->localData[0]->booleanVars[23]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                tmp65 = ((modelica_integer) 1); tmp66 = 1; tmp67 = ((modelica_integer) 8);
                if(!(((tmp66 > 0) && (tmp65 > tmp67)) || ((tmp66 < 0) && (tmp65 < tmp67))))
                {
                  modelica_integer area;
                  for(area = ((modelica_integer) 1); in_range_integer(area, tmp65, tmp67); area += tmp66)
                  {
                    if(((&data->localData[0]->integerVars[0]/* cc.hasBeenSelected[1] DISCRETE */)[area - 1]  == drone))
                    {
                      (&(data->localData[0]->integerVars[0]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);
                    }
                  }
                }
              }
            }

            tmp68 = Less(fabs((&data->localData[0]->realVars[62]/* cc.lastAnswered[1] DISCRETE */)[drone - 1]  - data->localData[0]->timeValue),0.1);
            tmp69 = Less(fabs((&data->localData[0]->realVars[37]/* cc.pos[1,1] variable */)[(drone - 1) * 3 + (((modelica_integer) 1)-1)]  - (&data->localData[0]->realVars[78]/* cc.setx[1] DISCRETE */)[drone - 1] ),(data->simulationInfo->realParameter[5]/* cc.p.arrivalThreshold PARAM */) );
            tmp70 = Less(fabs((&data->localData[0]->realVars[37]/* cc.pos[1,1] variable */)[(drone - 1) * 3 + (((modelica_integer) 2)-1)]  - (&data->localData[0]->realVars[81]/* cc.sety[1] DISCRETE */)[drone - 1] ),(data->simulationInfo->realParameter[5]/* cc.p.arrivalThreshold PARAM */) );
            tmp71 = Less(fabs((&data->localData[0]->realVars[37]/* cc.pos[1,1] variable */)[(drone - 1) * 3 + (((modelica_integer) 3)-1)]  - (&data->localData[0]->realVars[84]/* cc.setz[1] DISCRETE */)[drone - 1] ),(data->simulationInfo->realParameter[5]/* cc.p.arrivalThreshold PARAM */) );
            if((((((&data->localData[0]->booleanVars[23]/* cc.isBusy[1] DISCRETE */)[drone - 1]  && tmp68) && tmp69) && tmp70) && tmp71))
            {
              (&(data->localData[0]->booleanVars[23]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 0;

              tmp73 = ((modelica_integer) 1); tmp74 = 1; tmp75 = ((modelica_integer) 8);
              if(!(((tmp74 > 0) && (tmp73 > tmp75)) || ((tmp74 < 0) && (tmp73 < tmp75))))
              {
                modelica_integer area;
                for(area = ((modelica_integer) 1); in_range_integer(area, tmp73, tmp75); area += tmp74)
                {
                  if(((&data->localData[0]->integerVars[0]/* cc.hasBeenSelected[1] DISCRETE */)[area - 1]  == drone))
                  {
                    (&(data->localData[0]->integerVars[0]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);

                    (&(data->localData[0]->booleanVars[15]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1] = 1;

                    (&(data->localData[0]->realVars[65]/* cc.lastVisited[1] DISCRETE */) )[area - 1] = data->localData[0]->timeValue;

                    break;
                  }
                }
              }
            }
            else
            {
              if((&data->localData[0]->booleanVars[23]/* cc.isBusy[1] DISCRETE */)[drone - 1] )
              {
                tmp76 = Greater(fabs(data->localData[0]->timeValue - (&data->localData[0]->realVars[75]/* cc.setpointChangeTime[1] DISCRETE */)[drone - 1] ),(data->simulationInfo->realParameter[6]/* cc.p.arrival_timeout PARAM */) );
                if(tmp76)
                {
                  (&(data->localData[0]->booleanVars[23]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 0;

                  tmp78 = ((modelica_integer) 1); tmp79 = 1; tmp80 = ((modelica_integer) 8);
                  if(!(((tmp79 > 0) && (tmp78 > tmp80)) || ((tmp79 < 0) && (tmp78 < tmp80))))
                  {
                    modelica_integer area;
                    for(area = ((modelica_integer) 1); in_range_integer(area, tmp78, tmp80); area += tmp79)
                    {
                      if(((&data->localData[0]->integerVars[0]/* cc.hasBeenSelected[1] DISCRETE */)[area - 1]  == drone))
                      {
                        (&(data->localData[0]->integerVars[0]/* cc.hasBeenSelected[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }

      tmp85 = ((modelica_integer) 1); tmp86 = 1; tmp87 = ((modelica_integer) 3);
      if(!(((tmp86 > 0) && (tmp85 > tmp87)) || ((tmp86 < 0) && (tmp85 < tmp87))))
      {
        modelica_integer drone;
        for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp85, tmp87); drone += tmp86)
        {
          if((!(&data->localData[0]->booleanVars[26]/* cc.isDead[1] DISCRETE */)[drone - 1] ))
          {
            array_alloc_scalar_real_array(&tmp84, 3, (modelica_real)(&data->localData[0]->realVars[37]/* cc.pos[1,1] variable */)[(drone - 1) * 3 + (((modelica_integer) 1)-1)] , (modelica_real)(&data->localData[0]->realVars[37]/* cc.pos[1,1] variable */)[(drone - 1) * 3 + (((modelica_integer) 2)-1)] , (modelica_real)(&data->localData[0]->realVars[37]/* cc.pos[1,1] variable */)[(drone - 1) * 3 + (((modelica_integer) 3)-1)] );
            (data->localData[0]->realVars[61]/* cc.err DISCRETE */)  = omc_update__drone__pos(threadData, drone, data->localData[0]->timeValue, tmp84);
          }
        }
      }

      tmp89 = ((modelica_integer) 1); tmp90 = 1; tmp91 = ((modelica_integer) 8);
      if(!(((tmp90 > 0) && (tmp89 > tmp91)) || ((tmp90 < 0) && (tmp89 < tmp91))))
      {
        modelica_integer area;
        for(area = ((modelica_integer) 1); in_range_integer(area, tmp89, tmp91); area += tmp90)
        {
          if((!(&data->localData[0]->booleanVars[15]/* cc.hasBeenVisited[1] DISCRETE */)[area - 1] ))
          {
            (data->localData[0]->integerVars[10]/* cc.z DISCRETE */)  = omc_how__many__drones__in__area(threadData, area, (data->localData[0]->realVars[88]/* cc.time_span DISCRETE */) );

            tmp88 = Greater((data->localData[0]->integerVars[10]/* cc.z DISCRETE */) ,((modelica_integer) 0));
            if(tmp88)
            {
              (&(data->localData[0]->booleanVars[15]/* cc.hasBeenVisited[1] DISCRETE */) )[area - 1] = 1;

              (&(data->localData[0]->realVars[65]/* cc.lastVisited[1] DISCRETE */) )[area - 1] = data->localData[0]->timeValue;
            }
          }
        }
      }

      tmp118 = ((modelica_integer) 1); tmp119 = 1; tmp120 = ((modelica_integer) 3);
      if(!(((tmp119 > 0) && (tmp118 > tmp120)) || ((tmp119 < 0) && (tmp118 < tmp120))))
      {
        modelica_integer drone;
        for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp118, tmp120); drone += tmp119)
        {
          real_array_create(&tmp92, ((modelica_real*)&((&data->simulationInfo->realParameter[18]/* cc.p.flyZone[1] PARAM */)[((modelica_integer) 1) - 1] )), 1, (_index_t)3);
          tmp93 = max_real_array(tmp92);
          (data->localData[0]->realVars[74]/* cc.min_distance DISCRETE */)  = tmp93;

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

          if(((!(&data->localData[0]->booleanVars[23]/* cc.isBusy[1] DISCRETE */)[drone - 1] ) && (!(&data->localData[0]->booleanVars[26]/* cc.isDead[1] DISCRETE */)[drone - 1] )))
          {
            tmp102 = ((modelica_integer) 1); tmp103 = 1; tmp104 = ((modelica_integer) 8);
            if(!(((tmp103 > 0) && (tmp102 > tmp104)) || ((tmp103 < 0) && (tmp102 < tmp104))))
            {
              modelica_integer area;
              for(area = ((modelica_integer) 1); in_range_integer(area, tmp102, tmp104); area += tmp103)
              {
                if(((!(&data->localData[0]->booleanVars[15]/* cc.hasBeenVisited[1] DISCRETE */)[area - 1] ) && ((&data->localData[0]->integerVars[0]/* cc.hasBeenSelected[1] DISCRETE */)[area - 1]  == ((modelica_integer) 0))))
                {
                  /* -- start: matrix[8,6] -- */
                  alloc_real_array(&tmp96, 2, (_index_t)8, (_index_t)6);
                  put_real_matrix_element(0.0, 0, 0, &tmp96);
                  put_real_matrix_element(100.0, 0, 1, &tmp96);
                  put_real_matrix_element(0.0, 0, 2, &tmp96);
                  put_real_matrix_element(100.0, 0, 3, &tmp96);
                  put_real_matrix_element(0.0, 0, 4, &tmp96);
                  put_real_matrix_element(100.0, 0, 5, &tmp96);
                  put_real_matrix_element(100.0, 1, 0, &tmp96);
                  put_real_matrix_element(200.0, 1, 1, &tmp96);
                  put_real_matrix_element(0.0, 1, 2, &tmp96);
                  put_real_matrix_element(100.0, 1, 3, &tmp96);
                  put_real_matrix_element(0.0, 1, 4, &tmp96);
                  put_real_matrix_element(100.0, 1, 5, &tmp96);
                  put_real_matrix_element(0.0, 2, 0, &tmp96);
                  put_real_matrix_element(100.0, 2, 1, &tmp96);
                  put_real_matrix_element(100.0, 2, 2, &tmp96);
                  put_real_matrix_element(200.0, 2, 3, &tmp96);
                  put_real_matrix_element(0.0, 2, 4, &tmp96);
                  put_real_matrix_element(100.0, 2, 5, &tmp96);
                  put_real_matrix_element(100.0, 3, 0, &tmp96);
                  put_real_matrix_element(200.0, 3, 1, &tmp96);
                  put_real_matrix_element(100.0, 3, 2, &tmp96);
                  put_real_matrix_element(200.0, 3, 3, &tmp96);
                  put_real_matrix_element(0.0, 3, 4, &tmp96);
                  put_real_matrix_element(100.0, 3, 5, &tmp96);
                  put_real_matrix_element(0.0, 4, 0, &tmp96);
                  put_real_matrix_element(100.0, 4, 1, &tmp96);
                  put_real_matrix_element(0.0, 4, 2, &tmp96);
                  put_real_matrix_element(100.0, 4, 3, &tmp96);
                  put_real_matrix_element(100.0, 4, 4, &tmp96);
                  put_real_matrix_element(200.0, 4, 5, &tmp96);
                  put_real_matrix_element(100.0, 5, 0, &tmp96);
                  put_real_matrix_element(200.0, 5, 1, &tmp96);
                  put_real_matrix_element(0.0, 5, 2, &tmp96);
                  put_real_matrix_element(100.0, 5, 3, &tmp96);
                  put_real_matrix_element(100.0, 5, 4, &tmp96);
                  put_real_matrix_element(200.0, 5, 5, &tmp96);
                  put_real_matrix_element(0.0, 6, 0, &tmp96);
                  put_real_matrix_element(100.0, 6, 1, &tmp96);
                  put_real_matrix_element(100.0, 6, 2, &tmp96);
                  put_real_matrix_element(200.0, 6, 3, &tmp96);
                  put_real_matrix_element(100.0, 6, 4, &tmp96);
                  put_real_matrix_element(200.0, 6, 5, &tmp96);
                  put_real_matrix_element(100.0, 7, 0, &tmp96);
                  put_real_matrix_element(200.0, 7, 1, &tmp96);
                  put_real_matrix_element(100.0, 7, 2, &tmp96);
                  put_real_matrix_element(200.0, 7, 3, &tmp96);
                  put_real_matrix_element(100.0, 7, 4, &tmp96);
                  put_real_matrix_element(200.0, 7, 5, &tmp96);
                  /* -- end: matrix[8,6] -- */
                  tmp95._g = 9.81;
                  tmp95._pi = 3.14;
                  tmp95._nAreas = ((modelica_integer) 8);
                  tmp95._areas = tmp96;
                  (data->localData[0]->realVars[56]/* cc.area_x DISCRETE */)  = omc_areaCenter(threadData, tmp95, area ,&(data->localData[0]->realVars[57]/* cc.area_y DISCRETE */)  ,&(data->localData[0]->realVars[58]/* cc.area_z DISCRETE */) );

                  tmp97 = (&data->localData[0]->realVars[37]/* cc.pos[1,1] variable */)[(drone - 1) * 3 + (((modelica_integer) 1)-1)]  - (data->localData[0]->realVars[56]/* cc.area_x DISCRETE */) ;
                  tmp98 = (&data->localData[0]->realVars[37]/* cc.pos[1,1] variable */)[(drone - 1) * 3 + (((modelica_integer) 2)-1)]  - (data->localData[0]->realVars[57]/* cc.area_y DISCRETE */) ;
                  tmp99 = (&data->localData[0]->realVars[37]/* cc.pos[1,1] variable */)[(drone - 1) * 3 + (((modelica_integer) 3)-1)]  - (data->localData[0]->realVars[58]/* cc.area_z DISCRETE */) ;
                  (data->localData[0]->realVars[89]/* cc.tmp_distance DISCRETE */)  = sqrt((tmp97 * tmp97) + (tmp98 * tmp98) + (tmp99 * tmp99));

                  tmp100 = Less((data->localData[0]->realVars[89]/* cc.tmp_distance DISCRETE */) ,(data->localData[0]->realVars[74]/* cc.min_distance DISCRETE */) );
                  if(tmp100)
                  {
                    (data->localData[0]->realVars[74]/* cc.min_distance DISCRETE */)  = (data->localData[0]->realVars[89]/* cc.tmp_distance DISCRETE */) ;

                    (data->localData[0]->integerVars[8]/* cc.tmp_area_1 DISCRETE */)  = area;
                  }

                  (data->localData[0]->realVars[90]/* cc.tmp_time DISCRETE */)  = data->localData[0]->timeValue - (&data->localData[0]->realVars[65]/* cc.lastVisited[1] DISCRETE */)[area - 1] ;

                  tmp101 = Greater((data->localData[0]->realVars[90]/* cc.tmp_time DISCRETE */) ,(data->localData[0]->realVars[73]/* cc.max_time DISCRETE */) );
                  if(tmp101)
                  {
                    (data->localData[0]->realVars[73]/* cc.max_time DISCRETE */)  = (data->localData[0]->realVars[90]/* cc.tmp_time DISCRETE */) ;

                    (data->localData[0]->integerVars[9]/* cc.tmp_area_2 DISCRETE */)  = area;
                  }
                }
              }
            }

            if(((!((data->localData[0]->integerVars[8]/* cc.tmp_area_1 DISCRETE */)  == ((modelica_integer) 0))) && (!((data->localData[0]->integerVars[9]/* cc.tmp_area_2 DISCRETE */)  == ((modelica_integer) 0)))))
            {
              (data->localData[0]->realVars[59]/* cc.choice_value_1 DISCRETE */)  = ((data->localData[0]->realVars[74]/* cc.min_distance DISCRETE */) ) * ((data->simulationInfo->realParameter[363]/* p.cc_choice PARAM */) );

              (data->localData[0]->realVars[60]/* cc.choice_value_2 DISCRETE */)  = ((data->localData[0]->realVars[73]/* cc.max_time DISCRETE */) ) * (1.0 - (data->simulationInfo->realParameter[363]/* p.cc_choice PARAM */) );

              tmp107 = Greater((data->localData[0]->realVars[59]/* cc.choice_value_1 DISCRETE */) ,(data->localData[0]->realVars[60]/* cc.choice_value_2 DISCRETE */) );
              if(tmp107)
              {
                tmp108 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[28]/* cc.p.p_worst PARAM */) );
                if(tmp108)
                {
                  /* -- start: matrix[8,6] -- */
                  alloc_real_array(&tmp110, 2, (_index_t)8, (_index_t)6);
                  put_real_matrix_element(0.0, 0, 0, &tmp110);
                  put_real_matrix_element(100.0, 0, 1, &tmp110);
                  put_real_matrix_element(0.0, 0, 2, &tmp110);
                  put_real_matrix_element(100.0, 0, 3, &tmp110);
                  put_real_matrix_element(0.0, 0, 4, &tmp110);
                  put_real_matrix_element(100.0, 0, 5, &tmp110);
                  put_real_matrix_element(100.0, 1, 0, &tmp110);
                  put_real_matrix_element(200.0, 1, 1, &tmp110);
                  put_real_matrix_element(0.0, 1, 2, &tmp110);
                  put_real_matrix_element(100.0, 1, 3, &tmp110);
                  put_real_matrix_element(0.0, 1, 4, &tmp110);
                  put_real_matrix_element(100.0, 1, 5, &tmp110);
                  put_real_matrix_element(0.0, 2, 0, &tmp110);
                  put_real_matrix_element(100.0, 2, 1, &tmp110);
                  put_real_matrix_element(100.0, 2, 2, &tmp110);
                  put_real_matrix_element(200.0, 2, 3, &tmp110);
                  put_real_matrix_element(0.0, 2, 4, &tmp110);
                  put_real_matrix_element(100.0, 2, 5, &tmp110);
                  put_real_matrix_element(100.0, 3, 0, &tmp110);
                  put_real_matrix_element(200.0, 3, 1, &tmp110);
                  put_real_matrix_element(100.0, 3, 2, &tmp110);
                  put_real_matrix_element(200.0, 3, 3, &tmp110);
                  put_real_matrix_element(0.0, 3, 4, &tmp110);
                  put_real_matrix_element(100.0, 3, 5, &tmp110);
                  put_real_matrix_element(0.0, 4, 0, &tmp110);
                  put_real_matrix_element(100.0, 4, 1, &tmp110);
                  put_real_matrix_element(0.0, 4, 2, &tmp110);
                  put_real_matrix_element(100.0, 4, 3, &tmp110);
                  put_real_matrix_element(100.0, 4, 4, &tmp110);
                  put_real_matrix_element(200.0, 4, 5, &tmp110);
                  put_real_matrix_element(100.0, 5, 0, &tmp110);
                  put_real_matrix_element(200.0, 5, 1, &tmp110);
                  put_real_matrix_element(0.0, 5, 2, &tmp110);
                  put_real_matrix_element(100.0, 5, 3, &tmp110);
                  put_real_matrix_element(100.0, 5, 4, &tmp110);
                  put_real_matrix_element(200.0, 5, 5, &tmp110);
                  put_real_matrix_element(0.0, 6, 0, &tmp110);
                  put_real_matrix_element(100.0, 6, 1, &tmp110);
                  put_real_matrix_element(100.0, 6, 2, &tmp110);
                  put_real_matrix_element(200.0, 6, 3, &tmp110);
                  put_real_matrix_element(100.0, 6, 4, &tmp110);
                  put_real_matrix_element(200.0, 6, 5, &tmp110);
                  put_real_matrix_element(100.0, 7, 0, &tmp110);
                  put_real_matrix_element(200.0, 7, 1, &tmp110);
                  put_real_matrix_element(100.0, 7, 2, &tmp110);
                  put_real_matrix_element(200.0, 7, 3, &tmp110);
                  put_real_matrix_element(100.0, 7, 4, &tmp110);
                  put_real_matrix_element(200.0, 7, 5, &tmp110);
                  /* -- end: matrix[8,6] -- */
                  tmp109._g = 9.81;
                  tmp109._pi = 3.14;
                  tmp109._nAreas = ((modelica_integer) 8);
                  tmp109._areas = tmp110;
                  (&(data->localData[0]->realVars[78]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp109, (data->localData[0]->integerVars[8]/* cc.tmp_area_1 DISCRETE */)  ,&(&(data->localData[0]->realVars[81]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[84]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                  (&(data->localData[0]->booleanVars[23]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                  (&(data->localData[0]->integerVars[0]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[8]/* cc.tmp_area_1 DISCRETE */)  - 1] = drone;

                  (&(data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                  (&(data->localData[0]->realVars[75]/* cc.setpointChangeTime[1] DISCRETE */) )[drone - 1] = data->localData[0]->timeValue;
                }
                else
                {
                  /* -- start: matrix[8,6] -- */
                  alloc_real_array(&tmp112, 2, (_index_t)8, (_index_t)6);
                  put_real_matrix_element(0.0, 0, 0, &tmp112);
                  put_real_matrix_element(100.0, 0, 1, &tmp112);
                  put_real_matrix_element(0.0, 0, 2, &tmp112);
                  put_real_matrix_element(100.0, 0, 3, &tmp112);
                  put_real_matrix_element(0.0, 0, 4, &tmp112);
                  put_real_matrix_element(100.0, 0, 5, &tmp112);
                  put_real_matrix_element(100.0, 1, 0, &tmp112);
                  put_real_matrix_element(200.0, 1, 1, &tmp112);
                  put_real_matrix_element(0.0, 1, 2, &tmp112);
                  put_real_matrix_element(100.0, 1, 3, &tmp112);
                  put_real_matrix_element(0.0, 1, 4, &tmp112);
                  put_real_matrix_element(100.0, 1, 5, &tmp112);
                  put_real_matrix_element(0.0, 2, 0, &tmp112);
                  put_real_matrix_element(100.0, 2, 1, &tmp112);
                  put_real_matrix_element(100.0, 2, 2, &tmp112);
                  put_real_matrix_element(200.0, 2, 3, &tmp112);
                  put_real_matrix_element(0.0, 2, 4, &tmp112);
                  put_real_matrix_element(100.0, 2, 5, &tmp112);
                  put_real_matrix_element(100.0, 3, 0, &tmp112);
                  put_real_matrix_element(200.0, 3, 1, &tmp112);
                  put_real_matrix_element(100.0, 3, 2, &tmp112);
                  put_real_matrix_element(200.0, 3, 3, &tmp112);
                  put_real_matrix_element(0.0, 3, 4, &tmp112);
                  put_real_matrix_element(100.0, 3, 5, &tmp112);
                  put_real_matrix_element(0.0, 4, 0, &tmp112);
                  put_real_matrix_element(100.0, 4, 1, &tmp112);
                  put_real_matrix_element(0.0, 4, 2, &tmp112);
                  put_real_matrix_element(100.0, 4, 3, &tmp112);
                  put_real_matrix_element(100.0, 4, 4, &tmp112);
                  put_real_matrix_element(200.0, 4, 5, &tmp112);
                  put_real_matrix_element(100.0, 5, 0, &tmp112);
                  put_real_matrix_element(200.0, 5, 1, &tmp112);
                  put_real_matrix_element(0.0, 5, 2, &tmp112);
                  put_real_matrix_element(100.0, 5, 3, &tmp112);
                  put_real_matrix_element(100.0, 5, 4, &tmp112);
                  put_real_matrix_element(200.0, 5, 5, &tmp112);
                  put_real_matrix_element(0.0, 6, 0, &tmp112);
                  put_real_matrix_element(100.0, 6, 1, &tmp112);
                  put_real_matrix_element(100.0, 6, 2, &tmp112);
                  put_real_matrix_element(200.0, 6, 3, &tmp112);
                  put_real_matrix_element(100.0, 6, 4, &tmp112);
                  put_real_matrix_element(200.0, 6, 5, &tmp112);
                  put_real_matrix_element(100.0, 7, 0, &tmp112);
                  put_real_matrix_element(200.0, 7, 1, &tmp112);
                  put_real_matrix_element(100.0, 7, 2, &tmp112);
                  put_real_matrix_element(200.0, 7, 3, &tmp112);
                  put_real_matrix_element(100.0, 7, 4, &tmp112);
                  put_real_matrix_element(200.0, 7, 5, &tmp112);
                  /* -- end: matrix[8,6] -- */
                  tmp111._g = 9.81;
                  tmp111._pi = 3.14;
                  tmp111._nAreas = ((modelica_integer) 8);
                  tmp111._areas = tmp112;
                  (&(data->localData[0]->realVars[78]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp111, (data->localData[0]->integerVars[9]/* cc.tmp_area_2 DISCRETE */)  ,&(&(data->localData[0]->realVars[81]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[84]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                  (&(data->localData[0]->booleanVars[23]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                  (&(data->localData[0]->integerVars[0]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[9]/* cc.tmp_area_2 DISCRETE */)  - 1] = drone;

                  (&(data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                  (&(data->localData[0]->realVars[75]/* cc.setpointChangeTime[1] DISCRETE */) )[drone - 1] = data->localData[0]->timeValue;
                }
              }
              else
              {
                tmp113 = Greater(omc_myrandom(threadData),(data->simulationInfo->realParameter[28]/* cc.p.p_worst PARAM */) );
                if(tmp113)
                {
                  /* -- start: matrix[8,6] -- */
                  alloc_real_array(&tmp115, 2, (_index_t)8, (_index_t)6);
                  put_real_matrix_element(0.0, 0, 0, &tmp115);
                  put_real_matrix_element(100.0, 0, 1, &tmp115);
                  put_real_matrix_element(0.0, 0, 2, &tmp115);
                  put_real_matrix_element(100.0, 0, 3, &tmp115);
                  put_real_matrix_element(0.0, 0, 4, &tmp115);
                  put_real_matrix_element(100.0, 0, 5, &tmp115);
                  put_real_matrix_element(100.0, 1, 0, &tmp115);
                  put_real_matrix_element(200.0, 1, 1, &tmp115);
                  put_real_matrix_element(0.0, 1, 2, &tmp115);
                  put_real_matrix_element(100.0, 1, 3, &tmp115);
                  put_real_matrix_element(0.0, 1, 4, &tmp115);
                  put_real_matrix_element(100.0, 1, 5, &tmp115);
                  put_real_matrix_element(0.0, 2, 0, &tmp115);
                  put_real_matrix_element(100.0, 2, 1, &tmp115);
                  put_real_matrix_element(100.0, 2, 2, &tmp115);
                  put_real_matrix_element(200.0, 2, 3, &tmp115);
                  put_real_matrix_element(0.0, 2, 4, &tmp115);
                  put_real_matrix_element(100.0, 2, 5, &tmp115);
                  put_real_matrix_element(100.0, 3, 0, &tmp115);
                  put_real_matrix_element(200.0, 3, 1, &tmp115);
                  put_real_matrix_element(100.0, 3, 2, &tmp115);
                  put_real_matrix_element(200.0, 3, 3, &tmp115);
                  put_real_matrix_element(0.0, 3, 4, &tmp115);
                  put_real_matrix_element(100.0, 3, 5, &tmp115);
                  put_real_matrix_element(0.0, 4, 0, &tmp115);
                  put_real_matrix_element(100.0, 4, 1, &tmp115);
                  put_real_matrix_element(0.0, 4, 2, &tmp115);
                  put_real_matrix_element(100.0, 4, 3, &tmp115);
                  put_real_matrix_element(100.0, 4, 4, &tmp115);
                  put_real_matrix_element(200.0, 4, 5, &tmp115);
                  put_real_matrix_element(100.0, 5, 0, &tmp115);
                  put_real_matrix_element(200.0, 5, 1, &tmp115);
                  put_real_matrix_element(0.0, 5, 2, &tmp115);
                  put_real_matrix_element(100.0, 5, 3, &tmp115);
                  put_real_matrix_element(100.0, 5, 4, &tmp115);
                  put_real_matrix_element(200.0, 5, 5, &tmp115);
                  put_real_matrix_element(0.0, 6, 0, &tmp115);
                  put_real_matrix_element(100.0, 6, 1, &tmp115);
                  put_real_matrix_element(100.0, 6, 2, &tmp115);
                  put_real_matrix_element(200.0, 6, 3, &tmp115);
                  put_real_matrix_element(100.0, 6, 4, &tmp115);
                  put_real_matrix_element(200.0, 6, 5, &tmp115);
                  put_real_matrix_element(100.0, 7, 0, &tmp115);
                  put_real_matrix_element(200.0, 7, 1, &tmp115);
                  put_real_matrix_element(100.0, 7, 2, &tmp115);
                  put_real_matrix_element(200.0, 7, 3, &tmp115);
                  put_real_matrix_element(100.0, 7, 4, &tmp115);
                  put_real_matrix_element(200.0, 7, 5, &tmp115);
                  /* -- end: matrix[8,6] -- */
                  tmp114._g = 9.81;
                  tmp114._pi = 3.14;
                  tmp114._nAreas = ((modelica_integer) 8);
                  tmp114._areas = tmp115;
                  (&(data->localData[0]->realVars[78]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp114, (data->localData[0]->integerVars[9]/* cc.tmp_area_2 DISCRETE */)  ,&(&(data->localData[0]->realVars[81]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[84]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                  (&(data->localData[0]->booleanVars[23]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                  (&(data->localData[0]->integerVars[0]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[9]/* cc.tmp_area_2 DISCRETE */)  - 1] = drone;

                  (&(data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                  (&(data->localData[0]->realVars[75]/* cc.setpointChangeTime[1] DISCRETE */) )[drone - 1] = data->localData[0]->timeValue;
                }
                else
                {
                  /* -- start: matrix[8,6] -- */
                  alloc_real_array(&tmp117, 2, (_index_t)8, (_index_t)6);
                  put_real_matrix_element(0.0, 0, 0, &tmp117);
                  put_real_matrix_element(100.0, 0, 1, &tmp117);
                  put_real_matrix_element(0.0, 0, 2, &tmp117);
                  put_real_matrix_element(100.0, 0, 3, &tmp117);
                  put_real_matrix_element(0.0, 0, 4, &tmp117);
                  put_real_matrix_element(100.0, 0, 5, &tmp117);
                  put_real_matrix_element(100.0, 1, 0, &tmp117);
                  put_real_matrix_element(200.0, 1, 1, &tmp117);
                  put_real_matrix_element(0.0, 1, 2, &tmp117);
                  put_real_matrix_element(100.0, 1, 3, &tmp117);
                  put_real_matrix_element(0.0, 1, 4, &tmp117);
                  put_real_matrix_element(100.0, 1, 5, &tmp117);
                  put_real_matrix_element(0.0, 2, 0, &tmp117);
                  put_real_matrix_element(100.0, 2, 1, &tmp117);
                  put_real_matrix_element(100.0, 2, 2, &tmp117);
                  put_real_matrix_element(200.0, 2, 3, &tmp117);
                  put_real_matrix_element(0.0, 2, 4, &tmp117);
                  put_real_matrix_element(100.0, 2, 5, &tmp117);
                  put_real_matrix_element(100.0, 3, 0, &tmp117);
                  put_real_matrix_element(200.0, 3, 1, &tmp117);
                  put_real_matrix_element(100.0, 3, 2, &tmp117);
                  put_real_matrix_element(200.0, 3, 3, &tmp117);
                  put_real_matrix_element(0.0, 3, 4, &tmp117);
                  put_real_matrix_element(100.0, 3, 5, &tmp117);
                  put_real_matrix_element(0.0, 4, 0, &tmp117);
                  put_real_matrix_element(100.0, 4, 1, &tmp117);
                  put_real_matrix_element(0.0, 4, 2, &tmp117);
                  put_real_matrix_element(100.0, 4, 3, &tmp117);
                  put_real_matrix_element(100.0, 4, 4, &tmp117);
                  put_real_matrix_element(200.0, 4, 5, &tmp117);
                  put_real_matrix_element(100.0, 5, 0, &tmp117);
                  put_real_matrix_element(200.0, 5, 1, &tmp117);
                  put_real_matrix_element(0.0, 5, 2, &tmp117);
                  put_real_matrix_element(100.0, 5, 3, &tmp117);
                  put_real_matrix_element(100.0, 5, 4, &tmp117);
                  put_real_matrix_element(200.0, 5, 5, &tmp117);
                  put_real_matrix_element(0.0, 6, 0, &tmp117);
                  put_real_matrix_element(100.0, 6, 1, &tmp117);
                  put_real_matrix_element(100.0, 6, 2, &tmp117);
                  put_real_matrix_element(200.0, 6, 3, &tmp117);
                  put_real_matrix_element(100.0, 6, 4, &tmp117);
                  put_real_matrix_element(200.0, 6, 5, &tmp117);
                  put_real_matrix_element(100.0, 7, 0, &tmp117);
                  put_real_matrix_element(200.0, 7, 1, &tmp117);
                  put_real_matrix_element(100.0, 7, 2, &tmp117);
                  put_real_matrix_element(200.0, 7, 3, &tmp117);
                  put_real_matrix_element(100.0, 7, 4, &tmp117);
                  put_real_matrix_element(200.0, 7, 5, &tmp117);
                  /* -- end: matrix[8,6] -- */
                  tmp116._g = 9.81;
                  tmp116._pi = 3.14;
                  tmp116._nAreas = ((modelica_integer) 8);
                  tmp116._areas = tmp117;
                  (&(data->localData[0]->realVars[78]/* cc.setx[1] DISCRETE */) )[drone - 1] = omc_areaCenter(threadData, tmp116, (data->localData[0]->integerVars[8]/* cc.tmp_area_1 DISCRETE */)  ,&(&(data->localData[0]->realVars[81]/* cc.sety[1] DISCRETE */) )[drone - 1] ,&(&(data->localData[0]->realVars[84]/* cc.setz[1] DISCRETE */) )[drone - 1]);

                  (&(data->localData[0]->booleanVars[23]/* cc.isBusy[1] DISCRETE */) )[drone - 1] = 1;

                  (&(data->localData[0]->integerVars[0]/* cc.hasBeenSelected[1] DISCRETE */) )[(data->localData[0]->integerVars[8]/* cc.tmp_area_1 DISCRETE */)  - 1] = drone;

                  (&(data->localData[0]->booleanVars[29]/* cc.setpointChanged[1] DISCRETE */) )[drone - 1] = 1;

                  (&(data->localData[0]->realVars[75]/* cc.setpointChangeTime[1] DISCRETE */) )[drone - 1] = data->localData[0]->timeValue;
                }
              }
            }
          }
        }
      }

      tmp121 = ((modelica_integer) 1); tmp122 = 1; tmp123 = ((modelica_integer) 3);
      if(!(((tmp122 > 0) && (tmp121 > tmp123)) || ((tmp122 < 0) && (tmp121 < tmp123))))
      {
        modelica_integer drone;
        for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp121, tmp123); drone += tmp122)
        {
        }
      }

      (data->localData[0]->realVars[61]/* cc.err DISCRETE */)  = 0.0;

      tmp124 = ((modelica_integer) 1); tmp125 = 1; tmp126 = ((modelica_integer) 8);
      if(!(((tmp125 > 0) && (tmp124 > tmp126)) || ((tmp125 < 0) && (tmp124 < tmp126))))
      {
        modelica_integer area;
        for(area = ((modelica_integer) 1); in_range_integer(area, tmp124, tmp126); area += tmp125)
        {
          if((!(&data->localData[0]->booleanVars[15]/* cc.hasBeenVisited[1] DISCRETE */)[area - 1] ))
          {
            (data->localData[0]->realVars[61]/* cc.err DISCRETE */)  = 100.0;

            break;
          }
        }
      }

      tmp127 = Less((data->localData[0]->realVars[61]/* cc.err DISCRETE */) ,1.0);
      if(tmp127)
      {
        (data->localData[0]->realVars[87]/* cc.time_passed_since_last_loop DISCRETE */)  = data->localData[0]->timeValue - (data->localData[0]->realVars[88]/* cc.time_span DISCRETE */) ;

        (data->localData[0]->realVars[88]/* cc.time_span DISCRETE */)  = data->localData[0]->timeValue;

        array_alloc_scalar_boolean_array(&tmp128, 8, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0, (modelica_boolean)0);
        boolean_array_create(&tmp129, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[15]/* cc.hasBeenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
        boolean_array_copy_data(tmp128, tmp129);

        array_alloc_scalar_integer_array(&tmp130, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
        integer_array_create(&tmp131, ((modelica_integer*)&((&(data->localData[0]->integerVars[0]/* cc.hasBeenSelected[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
        integer_array_copy_data(tmp130, tmp131);
      }

      (data->localData[0]->realVars[61]/* cc.err DISCRETE */)  = 0.0;

      tmp132 = ((modelica_integer) 1); tmp133 = 1; tmp134 = ((modelica_integer) 3);
      if(!(((tmp133 > 0) && (tmp132 > tmp134)) || ((tmp133 < 0) && (tmp132 < tmp134))))
      {
        modelica_integer drone;
        for(drone = ((modelica_integer) 1); in_range_integer(drone, tmp132, tmp134); drone += tmp133)
        {
          if((!(&data->localData[0]->booleanVars[26]/* cc.isDead[1] DISCRETE */)[drone - 1] ))
          {
            (data->localData[0]->realVars[61]/* cc.err DISCRETE */)  = 100.0;

            break;
          }
        }
      }

      tmp135 = Less((data->localData[0]->realVars[61]/* cc.err DISCRETE */) ,1.0);
      if(tmp135)
      {
        {
          FILE_INFO info = {"/home/parallels/Desktop/Tesi/progetto-ia/Drone/control-center.mo",303,3,303,39,0};
          omc_terminate(info, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp136)));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 107
type: ALGORITHM

  d[2].ctrl.destZ := pre(d[2].ctrl.destZ);
  d[2].ctrl.destY := pre(d[2].ctrl.destY);
  d[2].ctrl.destX := pre(d[2].ctrl.destX);
  $whenCondition9 := pre($whenCondition9);
  $whenCondition8 := pre($whenCondition8);
  $whenCondition8 := sample(6, 0.0, d[2].ctrl.prm.Tdrone) and d[2].d.droneState == 1 and d[2].d.battery > d[2].ctrl.prm.dangerousBatteryLevel;
  $whenCondition9 := sample(5, 0.0, d[2].ctrl.T) and (d[2].d.battery < d[2].ctrl.prm.dangerousBatteryLevel or d[2].d.droneState == 0);
  when $whenCondition8 then
    d[2].ctrl.destX := cc.setx[2];
    d[2].ctrl.destY := cc.sety[2];
    d[2].ctrl.destZ := cc.setz[2];
  elsewhen $whenCondition9 then
    d[2].ctrl.destX := d[2].ctrl.prm.docking_bay[1];
    d[2].ctrl.destY := d[2].ctrl.prm.docking_bay[2];
    d[2].ctrl.destZ := d[2].ctrl.prm.docking_bay[3];
  end when;
*/
void System_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  modelica_boolean tmp138;
  modelica_boolean tmp139;
  (data->localData[0]->realVars[98]/* d[2].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[98]/* d[2].ctrl.destZ DISCRETE */) ;

  (data->localData[0]->realVars[95]/* d[2].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[95]/* d[2].ctrl.destY DISCRETE */) ;

  (data->localData[0]->realVars[92]/* d[2].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[92]/* d[2].ctrl.destX DISCRETE */) ;

  (data->localData[0]->booleanVars[14]/* $whenCondition9 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[14]/* $whenCondition9 DISCRETE */) ;

  (data->localData[0]->booleanVars[13]/* $whenCondition8 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[13]/* $whenCondition8 DISCRETE */) ;

  tmp138 = Greater((data->localData[0]->realVars[101]/* d[2].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[93]/* d[2].ctrl.prm.dangerousBatteryLevel PARAM */) );
  (data->localData[0]->booleanVars[13]/* $whenCondition8 DISCRETE */)  = ((data->simulationInfo->samples[5] && ((data->localData[0]->integerVars[12]/* d[2].d.droneState DISCRETE */)  == ((modelica_integer) 1))) && tmp138);

  tmp139 = Less((data->localData[0]->realVars[101]/* d[2].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[93]/* d[2].ctrl.prm.dangerousBatteryLevel PARAM */) );
  (data->localData[0]->booleanVars[14]/* $whenCondition9 DISCRETE */)  = (data->simulationInfo->samples[4] && (tmp139 || ((data->localData[0]->integerVars[12]/* d[2].d.droneState DISCRETE */)  == ((modelica_integer) 0))));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[13]/* $whenCondition8 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[13]/* $whenCondition8 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[92]/* d[2].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[79]/* cc.setx[2] DISCRETE */) ;

      (data->localData[0]->realVars[95]/* d[2].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[82]/* cc.sety[2] DISCRETE */) ;

      (data->localData[0]->realVars[98]/* d[2].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[85]/* cc.setz[2] DISCRETE */) ;
    }
    else if(((data->localData[0]->booleanVars[14]/* $whenCondition9 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[14]/* $whenCondition9 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[92]/* d[2].ctrl.destX DISCRETE */)  = (data->simulationInfo->realParameter[98]/* d[2].ctrl.prm.docking_bay[1] PARAM */) ;

      (data->localData[0]->realVars[95]/* d[2].ctrl.destY DISCRETE */)  = (data->simulationInfo->realParameter[99]/* d[2].ctrl.prm.docking_bay[2] PARAM */) ;

      (data->localData[0]->realVars[98]/* d[2].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realParameter[100]/* d[2].ctrl.prm.docking_bay[3] PARAM */) ;
    }
  }
  TRACE_POP
}
/*
equation index: 108
type: SIMPLE_ASSIGN
d[2].ctrl.Trustz = d[2].ctrl.prm.m * (9.81 + d[2].ctrl.kz1 * (d[2].d.z - d[2].ctrl.destZ) + d[2].ctrl.kz2 * d[2].d.Vz)
*/
void System_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  (data->localData[0]->realVars[54]/* d[2].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[117]/* d[2].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[48]/* d[2].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[16]/* d[2].d.z STATE(1,d[2].d.Vz) */)  - (data->localData[0]->realVars[98]/* d[2].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[51]/* d[2].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[7]/* d[2].d.Vz STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 109
type: SIMPLE_ASSIGN
$DER.d[2].d.Vz = -9.81 + d[2].ctrl.Trustz / d[2].d.p.m
*/
void System_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  (data->localData[0]->realVars[25]/* der(d[2].d.Vz) STATE_DER */)  = -9.81 + DIVISION_SIM((data->localData[0]->realVars[54]/* d[2].ctrl.Trustz variable */) ,(data->simulationInfo->realParameter[207]/* d[2].d.p.m PARAM */) ,"d[2].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 110
type: SIMPLE_ASSIGN
d[2].ctrl.Trusty = d[2].ctrl.prm.m * (d[2].ctrl.ky1 * (d[2].d.y - d[2].ctrl.destY) + d[2].ctrl.ky2 * d[2].d.Vy)
*/
void System_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  (data->localData[0]->realVars[51]/* d[2].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[117]/* d[2].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[42]/* d[2].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[13]/* d[2].d.y STATE(1,d[2].d.Vy) */)  - (data->localData[0]->realVars[95]/* d[2].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[45]/* d[2].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[4]/* d[2].d.Vy STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 111
type: SIMPLE_ASSIGN
$DER.d[2].d.Vy = d[2].ctrl.Trusty / d[2].d.p.m
*/
void System_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  (data->localData[0]->realVars[22]/* der(d[2].d.Vy) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[51]/* d[2].ctrl.Trusty variable */) ,(data->simulationInfo->realParameter[207]/* d[2].d.p.m PARAM */) ,"d[2].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 112
type: SIMPLE_ASSIGN
d[2].ctrl.Trustx = d[2].ctrl.prm.m * (d[2].ctrl.kx1 * (d[2].d.x - d[2].ctrl.destX) + d[2].ctrl.kx2 * d[2].d.Vx)
*/
void System_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  (data->localData[0]->realVars[48]/* d[2].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[117]/* d[2].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[36]/* d[2].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[10]/* d[2].d.x STATE(1,d[2].d.Vx) */)  - (data->localData[0]->realVars[92]/* d[2].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[39]/* d[2].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[1]/* d[2].d.Vx STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 113
type: SIMPLE_ASSIGN
$DER.d[2].d.Vx = d[2].ctrl.Trustx / d[2].d.p.m
*/
void System_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  (data->localData[0]->realVars[19]/* der(d[2].d.Vx) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[48]/* d[2].ctrl.Trustx variable */) ,(data->simulationInfo->realParameter[207]/* d[2].d.p.m PARAM */) ,"d[2].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 114
type: ALGORITHM

  d[3].ctrl.destZ := pre(d[3].ctrl.destZ);
  d[3].ctrl.destY := pre(d[3].ctrl.destY);
  d[3].ctrl.destX := pre(d[3].ctrl.destX);
  $whenCondition5 := pre($whenCondition5);
  $whenCondition4 := pre($whenCondition4);
  $whenCondition4 := sample(9, 0.0, d[3].ctrl.prm.Tdrone) and d[3].d.droneState == 1 and d[3].d.battery > d[3].ctrl.prm.dangerousBatteryLevel;
  $whenCondition5 := sample(8, 0.0, d[3].ctrl.T) and (d[3].d.battery < d[3].ctrl.prm.dangerousBatteryLevel or d[3].d.droneState == 0);
  when $whenCondition4 then
    d[3].ctrl.destX := cc.setx[3];
    d[3].ctrl.destY := cc.sety[3];
    d[3].ctrl.destZ := cc.setz[3];
  elsewhen $whenCondition5 then
    d[3].ctrl.destX := d[3].ctrl.prm.docking_bay[1];
    d[3].ctrl.destY := d[3].ctrl.prm.docking_bay[2];
    d[3].ctrl.destZ := d[3].ctrl.prm.docking_bay[3];
  end when;
*/
void System_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  modelica_boolean tmp142;
  modelica_boolean tmp143;
  (data->localData[0]->realVars[99]/* d[3].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[99]/* d[3].ctrl.destZ DISCRETE */) ;

  (data->localData[0]->realVars[96]/* d[3].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[96]/* d[3].ctrl.destY DISCRETE */) ;

  (data->localData[0]->realVars[93]/* d[3].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[93]/* d[3].ctrl.destX DISCRETE */) ;

  (data->localData[0]->booleanVars[10]/* $whenCondition5 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[10]/* $whenCondition5 DISCRETE */) ;

  (data->localData[0]->booleanVars[9]/* $whenCondition4 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[9]/* $whenCondition4 DISCRETE */) ;

  tmp142 = Greater((data->localData[0]->realVars[102]/* d[3].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[94]/* d[3].ctrl.prm.dangerousBatteryLevel PARAM */) );
  (data->localData[0]->booleanVars[9]/* $whenCondition4 DISCRETE */)  = ((data->simulationInfo->samples[8] && ((data->localData[0]->integerVars[13]/* d[3].d.droneState DISCRETE */)  == ((modelica_integer) 1))) && tmp142);

  tmp143 = Less((data->localData[0]->realVars[102]/* d[3].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[94]/* d[3].ctrl.prm.dangerousBatteryLevel PARAM */) );
  (data->localData[0]->booleanVars[10]/* $whenCondition5 DISCRETE */)  = (data->simulationInfo->samples[7] && (tmp143 || ((data->localData[0]->integerVars[13]/* d[3].d.droneState DISCRETE */)  == ((modelica_integer) 0))));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[9]/* $whenCondition4 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[9]/* $whenCondition4 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[93]/* d[3].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[80]/* cc.setx[3] DISCRETE */) ;

      (data->localData[0]->realVars[96]/* d[3].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[83]/* cc.sety[3] DISCRETE */) ;

      (data->localData[0]->realVars[99]/* d[3].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[86]/* cc.setz[3] DISCRETE */) ;
    }
    else if(((data->localData[0]->booleanVars[10]/* $whenCondition5 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[10]/* $whenCondition5 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[93]/* d[3].ctrl.destX DISCRETE */)  = (data->simulationInfo->realParameter[101]/* d[3].ctrl.prm.docking_bay[1] PARAM */) ;

      (data->localData[0]->realVars[96]/* d[3].ctrl.destY DISCRETE */)  = (data->simulationInfo->realParameter[102]/* d[3].ctrl.prm.docking_bay[2] PARAM */) ;

      (data->localData[0]->realVars[99]/* d[3].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realParameter[103]/* d[3].ctrl.prm.docking_bay[3] PARAM */) ;
    }
  }
  TRACE_POP
}
/*
equation index: 115
type: SIMPLE_ASSIGN
d[3].ctrl.Trusty = d[3].ctrl.prm.m * (d[3].ctrl.ky1 * (d[3].d.y - d[3].ctrl.destY) + d[3].ctrl.ky2 * d[3].d.Vy)
*/
void System_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  (data->localData[0]->realVars[52]/* d[3].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[118]/* d[3].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[43]/* d[3].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[14]/* d[3].d.y STATE(1,d[3].d.Vy) */)  - (data->localData[0]->realVars[96]/* d[3].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[46]/* d[3].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[5]/* d[3].d.Vy STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 116
type: SIMPLE_ASSIGN
$DER.d[3].d.Vy = d[3].ctrl.Trusty / d[3].d.p.m
*/
void System_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  (data->localData[0]->realVars[23]/* der(d[3].d.Vy) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[52]/* d[3].ctrl.Trusty variable */) ,(data->simulationInfo->realParameter[208]/* d[3].d.p.m PARAM */) ,"d[3].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 117
type: SIMPLE_ASSIGN
d[3].ctrl.Trustx = d[3].ctrl.prm.m * (d[3].ctrl.kx1 * (d[3].d.x - d[3].ctrl.destX) + d[3].ctrl.kx2 * d[3].d.Vx)
*/
void System_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  (data->localData[0]->realVars[49]/* d[3].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[118]/* d[3].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[37]/* d[3].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[11]/* d[3].d.x STATE(1,d[3].d.Vx) */)  - (data->localData[0]->realVars[93]/* d[3].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[40]/* d[3].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[2]/* d[3].d.Vx STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 118
type: SIMPLE_ASSIGN
$DER.d[3].d.Vx = d[3].ctrl.Trustx / d[3].d.p.m
*/
void System_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  (data->localData[0]->realVars[20]/* der(d[3].d.Vx) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[49]/* d[3].ctrl.Trustx variable */) ,(data->simulationInfo->realParameter[208]/* d[3].d.p.m PARAM */) ,"d[3].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 119
type: SIMPLE_ASSIGN
d[3].ctrl.Trustz = d[3].ctrl.prm.m * (9.81 + d[3].ctrl.kz1 * (d[3].d.z - d[3].ctrl.destZ) + d[3].ctrl.kz2 * d[3].d.Vz)
*/
void System_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  (data->localData[0]->realVars[55]/* d[3].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[118]/* d[3].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[49]/* d[3].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[17]/* d[3].d.z STATE(1,d[3].d.Vz) */)  - (data->localData[0]->realVars[99]/* d[3].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[52]/* d[3].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[8]/* d[3].d.Vz STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 120
type: SIMPLE_ASSIGN
$DER.d[3].d.Vz = -9.81 + d[3].ctrl.Trustz / d[3].d.p.m
*/
void System_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  (data->localData[0]->realVars[26]/* der(d[3].d.Vz) STATE_DER */)  = -9.81 + DIVISION_SIM((data->localData[0]->realVars[55]/* d[3].ctrl.Trustz variable */) ,(data->simulationInfo->realParameter[208]/* d[3].d.p.m PARAM */) ,"d[3].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 121
type: ALGORITHM

  d[1].ctrl.destZ := pre(d[1].ctrl.destZ);
  d[1].ctrl.destY := pre(d[1].ctrl.destY);
  d[1].ctrl.destX := pre(d[1].ctrl.destX);
  $whenCondition13 := pre($whenCondition13);
  $whenCondition12 := pre($whenCondition12);
  $whenCondition12 := sample(3, 0.0, d[1].ctrl.prm.Tdrone) and d[1].d.droneState == 1 and d[1].d.battery > d[1].ctrl.prm.dangerousBatteryLevel;
  $whenCondition13 := sample(2, 0.0, d[1].ctrl.T) and (d[1].d.battery < d[1].ctrl.prm.dangerousBatteryLevel or d[1].d.droneState == 0);
  when $whenCondition12 then
    d[1].ctrl.destX := cc.setx[1];
    d[1].ctrl.destY := cc.sety[1];
    d[1].ctrl.destZ := cc.setz[1];
  elsewhen $whenCondition13 then
    d[1].ctrl.destX := d[1].ctrl.prm.docking_bay[1];
    d[1].ctrl.destY := d[1].ctrl.prm.docking_bay[2];
    d[1].ctrl.destZ := d[1].ctrl.prm.docking_bay[3];
  end when;
*/
void System_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  modelica_boolean tmp146;
  modelica_boolean tmp147;
  (data->localData[0]->realVars[97]/* d[1].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realVarsPre[97]/* d[1].ctrl.destZ DISCRETE */) ;

  (data->localData[0]->realVars[94]/* d[1].ctrl.destY DISCRETE */)  = (data->simulationInfo->realVarsPre[94]/* d[1].ctrl.destY DISCRETE */) ;

  (data->localData[0]->realVars[91]/* d[1].ctrl.destX DISCRETE */)  = (data->simulationInfo->realVarsPre[91]/* d[1].ctrl.destX DISCRETE */) ;

  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[4]/* $whenCondition13 DISCRETE */) ;

  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[3]/* $whenCondition12 DISCRETE */) ;

  tmp146 = Greater((data->localData[0]->realVars[100]/* d[1].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[92]/* d[1].ctrl.prm.dangerousBatteryLevel PARAM */) );
  (data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  = ((data->simulationInfo->samples[2] && ((data->localData[0]->integerVars[11]/* d[1].d.droneState DISCRETE */)  == ((modelica_integer) 1))) && tmp146);

  tmp147 = Less((data->localData[0]->realVars[100]/* d[1].d.battery DISCRETE */) ,(data->simulationInfo->realParameter[92]/* d[1].ctrl.prm.dangerousBatteryLevel PARAM */) );
  (data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  = (data->simulationInfo->samples[1] && (tmp147 || ((data->localData[0]->integerVars[11]/* d[1].d.droneState DISCRETE */)  == ((modelica_integer) 0))));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[3]/* $whenCondition12 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[3]/* $whenCondition12 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[91]/* d[1].ctrl.destX DISCRETE */)  = (data->localData[0]->realVars[78]/* cc.setx[1] DISCRETE */) ;

      (data->localData[0]->realVars[94]/* d[1].ctrl.destY DISCRETE */)  = (data->localData[0]->realVars[81]/* cc.sety[1] DISCRETE */) ;

      (data->localData[0]->realVars[97]/* d[1].ctrl.destZ DISCRETE */)  = (data->localData[0]->realVars[84]/* cc.setz[1] DISCRETE */) ;
    }
    else if(((data->localData[0]->booleanVars[4]/* $whenCondition13 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[4]/* $whenCondition13 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->realVars[91]/* d[1].ctrl.destX DISCRETE */)  = (data->simulationInfo->realParameter[95]/* d[1].ctrl.prm.docking_bay[1] PARAM */) ;

      (data->localData[0]->realVars[94]/* d[1].ctrl.destY DISCRETE */)  = (data->simulationInfo->realParameter[96]/* d[1].ctrl.prm.docking_bay[2] PARAM */) ;

      (data->localData[0]->realVars[97]/* d[1].ctrl.destZ DISCRETE */)  = (data->simulationInfo->realParameter[97]/* d[1].ctrl.prm.docking_bay[3] PARAM */) ;
    }
  }
  TRACE_POP
}
/*
equation index: 122
type: SIMPLE_ASSIGN
d[1].ctrl.Trusty = d[1].ctrl.prm.m * (d[1].ctrl.ky1 * (d[1].d.y - d[1].ctrl.destY) + d[1].ctrl.ky2 * d[1].d.Vy)
*/
void System_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  (data->localData[0]->realVars[50]/* d[1].ctrl.Trusty variable */)  = ((data->simulationInfo->realParameter[116]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[41]/* d[1].ctrl.ky1 PARAM */) ) * ((data->localData[0]->realVars[12]/* d[1].d.y STATE(1,d[1].d.Vy) */)  - (data->localData[0]->realVars[94]/* d[1].ctrl.destY DISCRETE */) ) + ((data->simulationInfo->realParameter[44]/* d[1].ctrl.ky2 PARAM */) ) * ((data->localData[0]->realVars[3]/* d[1].d.Vy STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 123
type: SIMPLE_ASSIGN
$DER.d[1].d.Vy = d[1].ctrl.Trusty / d[1].d.p.m
*/
void System_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  (data->localData[0]->realVars[21]/* der(d[1].d.Vy) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[50]/* d[1].ctrl.Trusty variable */) ,(data->simulationInfo->realParameter[206]/* d[1].d.p.m PARAM */) ,"d[1].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 124
type: SIMPLE_ASSIGN
d[1].ctrl.Trustz = d[1].ctrl.prm.m * (9.81 + d[1].ctrl.kz1 * (d[1].d.z - d[1].ctrl.destZ) + d[1].ctrl.kz2 * d[1].d.Vz)
*/
void System_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  (data->localData[0]->realVars[53]/* d[1].ctrl.Trustz variable */)  = ((data->simulationInfo->realParameter[116]/* d[1].ctrl.prm.m PARAM */) ) * (9.81 + ((data->simulationInfo->realParameter[47]/* d[1].ctrl.kz1 PARAM */) ) * ((data->localData[0]->realVars[15]/* d[1].d.z STATE(1,d[1].d.Vz) */)  - (data->localData[0]->realVars[97]/* d[1].ctrl.destZ DISCRETE */) ) + ((data->simulationInfo->realParameter[50]/* d[1].ctrl.kz2 PARAM */) ) * ((data->localData[0]->realVars[6]/* d[1].d.Vz STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 125
type: SIMPLE_ASSIGN
$DER.d[1].d.Vz = -9.81 + d[1].ctrl.Trustz / d[1].d.p.m
*/
void System_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  (data->localData[0]->realVars[24]/* der(d[1].d.Vz) STATE_DER */)  = -9.81 + DIVISION_SIM((data->localData[0]->realVars[53]/* d[1].ctrl.Trustz variable */) ,(data->simulationInfo->realParameter[206]/* d[1].d.p.m PARAM */) ,"d[1].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 126
type: SIMPLE_ASSIGN
d[1].ctrl.Trustx = d[1].ctrl.prm.m * (d[1].ctrl.kx1 * (d[1].d.x - d[1].ctrl.destX) + d[1].ctrl.kx2 * d[1].d.Vx)
*/
void System_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  (data->localData[0]->realVars[47]/* d[1].ctrl.Trustx variable */)  = ((data->simulationInfo->realParameter[116]/* d[1].ctrl.prm.m PARAM */) ) * (((data->simulationInfo->realParameter[35]/* d[1].ctrl.kx1 PARAM */) ) * ((data->localData[0]->realVars[9]/* d[1].d.x STATE(1,d[1].d.Vx) */)  - (data->localData[0]->realVars[91]/* d[1].ctrl.destX DISCRETE */) ) + ((data->simulationInfo->realParameter[38]/* d[1].ctrl.kx2 PARAM */) ) * ((data->localData[0]->realVars[0]/* d[1].d.Vx STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 127
type: SIMPLE_ASSIGN
$DER.d[1].d.Vx = d[1].ctrl.Trustx / d[1].d.p.m
*/
void System_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  (data->localData[0]->realVars[18]/* der(d[1].d.Vx) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[47]/* d[1].ctrl.Trustx variable */) ,(data->simulationInfo->realParameter[206]/* d[1].d.p.m PARAM */) ,"d[1].d.p.m",equationIndexes);
  TRACE_POP
}
/*
equation index: 128
type: ALGORITHM

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
  $whenCondition2 := pre($whenCondition2);
  $whenCondition1 := pre($whenCondition1);
  $whenCondition1 := sample(11, m.p.monitor_start, m.p.Tm);
  $whenCondition2 := time > m.p.stop_simulation;
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
  elsewhen $whenCondition1 then
    m.samples := pre(m.samples) + 1;
    m.current_drones := {0, 0, 0, 0, 0, 0, 0, 0};
    for area in 1:8 loop
      m.current_drones[area] := 0;
      m.beenVisited[area] := 0;
      m.z := how_many_drones_in_area(area, time - m.p.Tm);
      if m.z > 0 then
        m.current_drones[area] := m.current_drones[area] + m.z;
        m.beenVisited[area] := 1;
        m.no_drone_time[area] := 0.0;
      else
        m.no_drone_time[area] := m.no_drone_time[area] + m.p.Tm;
      end if;
      m.avg_drones[area] := pre(m.avg_drones[area]) * (*Real*)(pre(m.samples)) / (*Real*)(pre(m.samples) + 1) + (*Real*)(pre(m.current_drones[area])) / (*Real*)(pre(m.samples) + 1);
      m.p_drones[area] := pre(m.p_drones[area]) * (*Real*)(pre(m.samples)) / (*Real*)(pre(m.samples) + 1) + (*Real*)(pre(m.beenVisited[area])) / (*Real*)(pre(m.samples) + 1);
      m.avg_no_drone_time[area] := pre(m.avg_no_drone_time[area]) * (*Real*)(pre(m.samples)) / (*Real*)(pre(m.samples) + 1) + pre(m.no_drone_time[area]) / (*Real*)(pre(m.samples) + 1);
      m.std_dev[area] := sqrt((*Real*)(m.current_drones[area]) - m.avg_drones[area] ^ 2.0);
    end for;
    m.avg_drones_all_areas := 0.125 * (m.avg_drones[1] + m.avg_drones[2] + m.avg_drones[3] + m.avg_drones[4] + m.avg_drones[5] + m.avg_drones[6] + m.avg_drones[7] + m.avg_drones[8]);
    m.p_drones_all_areas := 0.125 * (m.p_drones[1] + m.p_drones[2] + m.p_drones[3] + m.p_drones[4] + m.p_drones[5] + m.p_drones[6] + m.p_drones[7] + m.p_drones[8]);
    m.avg_no_drone_time_all_areas := 0.125 * (m.no_drone_time[1] + m.no_drone_time[2] + m.no_drone_time[3] + m.no_drone_time[4] + m.no_drone_time[5] + m.no_drone_time[6] + m.no_drone_time[7] + m.no_drone_time[8]);
    if m.max_no_drone_time < max(m.no_drone_time) then
      m.max_no_drone_time := max(m.no_drone_time);
    end if;
    m.std_dev_all_areas := sqrt(m.avg_drones_all_areas - pre(m.avg_drones_all_areas) ^ 2.0);
  elsewhen $whenCondition2 then
    Modelica.Utilities.Files.remove("outputs.txt");
    Modelica.Utilities.Streams.print("AvgDrones AvgNoDrone MaxNoDrone PrDrones StdDev (time = " + String(time, 6, 0, true) + " )", "outputs.txt");
    Modelica.Utilities.Streams.print(String(m.avg_drones_all_areas, 6, 0, true) + "  " + String(m.avg_no_drone_time_all_areas, 6, 0, true) + "  " + String(m.max_no_drone_time, 6, 0, true) + "  " + String(m.p_drones_all_areas, 6, 0, true) + "  " + String(m.std_dev_all_areas, 6, 0, true), "outputs.txt");
    terminate("Simulation limit reached. Go home now.");
  end when;
*/
void System_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  modelica_boolean tmp149;
  integer_array tmp150;
  integer_array tmp151;
  real_array tmp152;
  real_array tmp153;
  integer_array tmp154;
  integer_array tmp155;
  real_array tmp156;
  real_array tmp157;
  real_array tmp158;
  real_array tmp159;
  real_array tmp160;
  real_array tmp161;
  real_array tmp162;
  real_array tmp163;
  integer_array tmp164;
  integer_array tmp165;
  modelica_boolean tmp166;
  modelica_real tmp167;
  modelica_real tmp168;
  modelica_integer tmp169;
  modelica_integer tmp170;
  modelica_integer tmp171;
  real_array tmp172;
  modelica_real tmp173;
  modelica_boolean tmp174;
  real_array tmp175;
  modelica_real tmp176;
  modelica_real tmp177;
  modelica_real tmp178;
  static const MMC_DEFSTRINGLIT(tmp179,11,"outputs.txt");
  static const MMC_DEFSTRINGLIT(tmp180,56,"AvgDrones AvgNoDrone MaxNoDrone PrDrones StdDev (time = ");
  modelica_string tmp181;
  modelica_metatype tmpMeta182;
  static const MMC_DEFSTRINGLIT(tmp183,2," )");
  modelica_metatype tmpMeta184;
  static const MMC_DEFSTRINGLIT(tmp185,11,"outputs.txt");
  modelica_string tmp186;
  static const MMC_DEFSTRINGLIT(tmp187,2,"  ");
  modelica_metatype tmpMeta188;
  modelica_string tmp189;
  modelica_metatype tmpMeta190;
  static const MMC_DEFSTRINGLIT(tmp191,2,"  ");
  modelica_metatype tmpMeta192;
  modelica_string tmp193;
  modelica_metatype tmpMeta194;
  static const MMC_DEFSTRINGLIT(tmp195,2,"  ");
  modelica_metatype tmpMeta196;
  modelica_string tmp197;
  modelica_metatype tmpMeta198;
  static const MMC_DEFSTRINGLIT(tmp199,2,"  ");
  modelica_metatype tmpMeta200;
  modelica_string tmp201;
  modelica_metatype tmpMeta202;
  static const MMC_DEFSTRINGLIT(tmp203,11,"outputs.txt");
  static const MMC_DEFSTRINGLIT(tmp204,38,"Simulation limit reached. Go home now.");
  (data->localData[0]->realVars[150]/* m.std_dev_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[150]/* m.std_dev_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[149]/* m.std_dev[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[149]/* m.std_dev[8] DISCRETE */) ;

  (data->localData[0]->realVars[148]/* m.std_dev[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[148]/* m.std_dev[7] DISCRETE */) ;

  (data->localData[0]->realVars[147]/* m.std_dev[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[147]/* m.std_dev[6] DISCRETE */) ;

  (data->localData[0]->realVars[146]/* m.std_dev[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[146]/* m.std_dev[5] DISCRETE */) ;

  (data->localData[0]->realVars[145]/* m.std_dev[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[145]/* m.std_dev[4] DISCRETE */) ;

  (data->localData[0]->realVars[144]/* m.std_dev[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[144]/* m.std_dev[3] DISCRETE */) ;

  (data->localData[0]->realVars[143]/* m.std_dev[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[143]/* m.std_dev[2] DISCRETE */) ;

  (data->localData[0]->realVars[142]/* m.std_dev[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[142]/* m.std_dev[1] DISCRETE */) ;

  (data->localData[0]->realVars[124]/* m.max_no_drone_time DISCRETE */)  = (data->simulationInfo->realVarsPre[124]/* m.max_no_drone_time DISCRETE */) ;

  (data->localData[0]->realVars[123]/* m.avg_no_drone_time_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[123]/* m.avg_no_drone_time_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[122]/* m.avg_no_drone_time[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[122]/* m.avg_no_drone_time[8] DISCRETE */) ;

  (data->localData[0]->realVars[121]/* m.avg_no_drone_time[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[121]/* m.avg_no_drone_time[7] DISCRETE */) ;

  (data->localData[0]->realVars[120]/* m.avg_no_drone_time[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[120]/* m.avg_no_drone_time[6] DISCRETE */) ;

  (data->localData[0]->realVars[119]/* m.avg_no_drone_time[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[119]/* m.avg_no_drone_time[5] DISCRETE */) ;

  (data->localData[0]->realVars[118]/* m.avg_no_drone_time[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[118]/* m.avg_no_drone_time[4] DISCRETE */) ;

  (data->localData[0]->realVars[117]/* m.avg_no_drone_time[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[117]/* m.avg_no_drone_time[3] DISCRETE */) ;

  (data->localData[0]->realVars[116]/* m.avg_no_drone_time[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[116]/* m.avg_no_drone_time[2] DISCRETE */) ;

  (data->localData[0]->realVars[115]/* m.avg_no_drone_time[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[115]/* m.avg_no_drone_time[1] DISCRETE */) ;

  (data->localData[0]->realVars[132]/* m.no_drone_time[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[132]/* m.no_drone_time[8] DISCRETE */) ;

  (data->localData[0]->realVars[131]/* m.no_drone_time[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[131]/* m.no_drone_time[7] DISCRETE */) ;

  (data->localData[0]->realVars[130]/* m.no_drone_time[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[130]/* m.no_drone_time[6] DISCRETE */) ;

  (data->localData[0]->realVars[129]/* m.no_drone_time[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[129]/* m.no_drone_time[5] DISCRETE */) ;

  (data->localData[0]->realVars[128]/* m.no_drone_time[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[128]/* m.no_drone_time[4] DISCRETE */) ;

  (data->localData[0]->realVars[127]/* m.no_drone_time[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[127]/* m.no_drone_time[3] DISCRETE */) ;

  (data->localData[0]->realVars[126]/* m.no_drone_time[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[126]/* m.no_drone_time[2] DISCRETE */) ;

  (data->localData[0]->realVars[125]/* m.no_drone_time[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[125]/* m.no_drone_time[1] DISCRETE */) ;

  (data->localData[0]->realVars[141]/* m.p_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[141]/* m.p_drones_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[140]/* m.p_drones[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[140]/* m.p_drones[8] DISCRETE */) ;

  (data->localData[0]->realVars[139]/* m.p_drones[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[139]/* m.p_drones[7] DISCRETE */) ;

  (data->localData[0]->realVars[138]/* m.p_drones[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[138]/* m.p_drones[6] DISCRETE */) ;

  (data->localData[0]->realVars[137]/* m.p_drones[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[137]/* m.p_drones[5] DISCRETE */) ;

  (data->localData[0]->realVars[136]/* m.p_drones[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[136]/* m.p_drones[4] DISCRETE */) ;

  (data->localData[0]->realVars[135]/* m.p_drones[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[135]/* m.p_drones[3] DISCRETE */) ;

  (data->localData[0]->realVars[134]/* m.p_drones[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[134]/* m.p_drones[2] DISCRETE */) ;

  (data->localData[0]->realVars[133]/* m.p_drones[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[133]/* m.p_drones[1] DISCRETE */) ;

  (data->localData[0]->integerVars[21]/* m.beenVisited[8] DISCRETE */)  = (data->simulationInfo->integerVarsPre[21]/* m.beenVisited[8] DISCRETE */) ;

  (data->localData[0]->integerVars[20]/* m.beenVisited[7] DISCRETE */)  = (data->simulationInfo->integerVarsPre[20]/* m.beenVisited[7] DISCRETE */) ;

  (data->localData[0]->integerVars[19]/* m.beenVisited[6] DISCRETE */)  = (data->simulationInfo->integerVarsPre[19]/* m.beenVisited[6] DISCRETE */) ;

  (data->localData[0]->integerVars[18]/* m.beenVisited[5] DISCRETE */)  = (data->simulationInfo->integerVarsPre[18]/* m.beenVisited[5] DISCRETE */) ;

  (data->localData[0]->integerVars[17]/* m.beenVisited[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[17]/* m.beenVisited[4] DISCRETE */) ;

  (data->localData[0]->integerVars[16]/* m.beenVisited[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[16]/* m.beenVisited[3] DISCRETE */) ;

  (data->localData[0]->integerVars[15]/* m.beenVisited[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[15]/* m.beenVisited[2] DISCRETE */) ;

  (data->localData[0]->integerVars[14]/* m.beenVisited[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[14]/* m.beenVisited[1] DISCRETE */) ;

  (data->localData[0]->realVars[114]/* m.avg_drones_all_areas DISCRETE */)  = (data->simulationInfo->realVarsPre[114]/* m.avg_drones_all_areas DISCRETE */) ;

  (data->localData[0]->realVars[113]/* m.avg_drones[8] DISCRETE */)  = (data->simulationInfo->realVarsPre[113]/* m.avg_drones[8] DISCRETE */) ;

  (data->localData[0]->realVars[112]/* m.avg_drones[7] DISCRETE */)  = (data->simulationInfo->realVarsPre[112]/* m.avg_drones[7] DISCRETE */) ;

  (data->localData[0]->realVars[111]/* m.avg_drones[6] DISCRETE */)  = (data->simulationInfo->realVarsPre[111]/* m.avg_drones[6] DISCRETE */) ;

  (data->localData[0]->realVars[110]/* m.avg_drones[5] DISCRETE */)  = (data->simulationInfo->realVarsPre[110]/* m.avg_drones[5] DISCRETE */) ;

  (data->localData[0]->realVars[109]/* m.avg_drones[4] DISCRETE */)  = (data->simulationInfo->realVarsPre[109]/* m.avg_drones[4] DISCRETE */) ;

  (data->localData[0]->realVars[108]/* m.avg_drones[3] DISCRETE */)  = (data->simulationInfo->realVarsPre[108]/* m.avg_drones[3] DISCRETE */) ;

  (data->localData[0]->realVars[107]/* m.avg_drones[2] DISCRETE */)  = (data->simulationInfo->realVarsPre[107]/* m.avg_drones[2] DISCRETE */) ;

  (data->localData[0]->realVars[106]/* m.avg_drones[1] DISCRETE */)  = (data->simulationInfo->realVarsPre[106]/* m.avg_drones[1] DISCRETE */) ;

  (data->localData[0]->integerVars[29]/* m.current_drones[8] DISCRETE */)  = (data->simulationInfo->integerVarsPre[29]/* m.current_drones[8] DISCRETE */) ;

  (data->localData[0]->integerVars[28]/* m.current_drones[7] DISCRETE */)  = (data->simulationInfo->integerVarsPre[28]/* m.current_drones[7] DISCRETE */) ;

  (data->localData[0]->integerVars[27]/* m.current_drones[6] DISCRETE */)  = (data->simulationInfo->integerVarsPre[27]/* m.current_drones[6] DISCRETE */) ;

  (data->localData[0]->integerVars[26]/* m.current_drones[5] DISCRETE */)  = (data->simulationInfo->integerVarsPre[26]/* m.current_drones[5] DISCRETE */) ;

  (data->localData[0]->integerVars[25]/* m.current_drones[4] DISCRETE */)  = (data->simulationInfo->integerVarsPre[25]/* m.current_drones[4] DISCRETE */) ;

  (data->localData[0]->integerVars[24]/* m.current_drones[3] DISCRETE */)  = (data->simulationInfo->integerVarsPre[24]/* m.current_drones[3] DISCRETE */) ;

  (data->localData[0]->integerVars[23]/* m.current_drones[2] DISCRETE */)  = (data->simulationInfo->integerVarsPre[23]/* m.current_drones[2] DISCRETE */) ;

  (data->localData[0]->integerVars[22]/* m.current_drones[1] DISCRETE */)  = (data->simulationInfo->integerVarsPre[22]/* m.current_drones[1] DISCRETE */) ;

  (data->localData[0]->integerVars[30]/* m.samples DISCRETE */)  = (data->simulationInfo->integerVarsPre[30]/* m.samples DISCRETE */) ;

  (data->localData[0]->integerVars[31]/* m.z DISCRETE */)  = (data->simulationInfo->integerVarsPre[31]/* m.z DISCRETE */) ;

  (data->localData[0]->booleanVars[7]/* $whenCondition2 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[7]/* $whenCondition2 DISCRETE */) ;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = (data->simulationInfo->booleanVarsPre[0]/* $whenCondition1 DISCRETE */) ;

  (data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  = data->simulationInfo->samples[10];

  relationhysteresis(data, &tmp149, data->localData[0]->timeValue, (data->simulationInfo->realParameter[354]/* m.p.stop_simulation PARAM */) , 0, Greater, GreaterZC);
  (data->localData[0]->booleanVars[7]/* $whenCondition2 DISCRETE */)  = tmp149;

  if(data->simulationInfo->discreteCall == 1)
  {
    if(0)
    {
      (data->localData[0]->integerVars[31]/* m.z DISCRETE */)  = ((modelica_integer) 0);

      (data->localData[0]->integerVars[30]/* m.samples DISCRETE */)  = ((modelica_integer) 0);

      array_alloc_scalar_integer_array(&tmp150, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp151, ((modelica_integer*)&((&(data->localData[0]->integerVars[22]/* m.current_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      integer_array_copy_data(tmp150, tmp151);

      array_alloc_scalar_real_array(&tmp152, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp153, ((modelica_real*)&((&(data->localData[0]->realVars[106]/* m.avg_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp152, tmp153);

      (data->localData[0]->realVars[114]/* m.avg_drones_all_areas DISCRETE */)  = 0.0;

      array_alloc_scalar_integer_array(&tmp154, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp155, ((modelica_integer*)&((&(data->localData[0]->integerVars[14]/* m.beenVisited[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      integer_array_copy_data(tmp154, tmp155);

      array_alloc_scalar_real_array(&tmp156, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp157, ((modelica_real*)&((&(data->localData[0]->realVars[133]/* m.p_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp156, tmp157);

      (data->localData[0]->realVars[141]/* m.p_drones_all_areas DISCRETE */)  = 0.0;

      array_alloc_scalar_real_array(&tmp158, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp159, ((modelica_real*)&((&(data->localData[0]->realVars[125]/* m.no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp158, tmp159);

      array_alloc_scalar_real_array(&tmp160, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp161, ((modelica_real*)&((&(data->localData[0]->realVars[115]/* m.avg_no_drone_time[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp160, tmp161);

      (data->localData[0]->realVars[123]/* m.avg_no_drone_time_all_areas DISCRETE */)  = 0.0;

      (data->localData[0]->realVars[124]/* m.max_no_drone_time DISCRETE */)  = 0.0;

      array_alloc_scalar_real_array(&tmp162, 8, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0, (modelica_real)0.0);
      real_array_create(&tmp163, ((modelica_real*)&((&(data->localData[0]->realVars[142]/* m.std_dev[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      real_array_copy_data(tmp162, tmp163);

      (data->localData[0]->realVars[150]/* m.std_dev_all_areas DISCRETE */)  = 0.0;
    }
    else if(((data->localData[0]->booleanVars[0]/* $whenCondition1 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[0]/* $whenCondition1 DISCRETE */)  /* edge */))
    {
      (data->localData[0]->integerVars[30]/* m.samples DISCRETE */)  = (data->simulationInfo->integerVarsPre[30]/* m.samples DISCRETE */)  + ((modelica_integer) 1);

      array_alloc_scalar_integer_array(&tmp164, 8, (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0), (modelica_integer)((modelica_integer) 0));
      integer_array_create(&tmp165, ((modelica_integer*)&((&(data->localData[0]->integerVars[22]/* m.current_drones[1] DISCRETE */) )[((modelica_integer) 1) - 1])), 1, (_index_t)8);
      integer_array_copy_data(tmp164, tmp165);

      tmp169 = ((modelica_integer) 1); tmp170 = 1; tmp171 = ((modelica_integer) 8);
      if(!(((tmp170 > 0) && (tmp169 > tmp171)) || ((tmp170 < 0) && (tmp169 < tmp171))))
      {
        modelica_integer area;
        for(area = ((modelica_integer) 1); in_range_integer(area, tmp169, tmp171); area += tmp170)
        {
          (&(data->localData[0]->integerVars[22]/* m.current_drones[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);

          (&(data->localData[0]->integerVars[14]/* m.beenVisited[1] DISCRETE */) )[area - 1] = ((modelica_integer) 0);

          (data->localData[0]->integerVars[31]/* m.z DISCRETE */)  = omc_how__many__drones__in__area(threadData, area, data->localData[0]->timeValue - (data->simulationInfo->realParameter[328]/* m.p.Tm PARAM */) );

          tmp166 = Greater((data->localData[0]->integerVars[31]/* m.z DISCRETE */) ,((modelica_integer) 0));
          if(tmp166)
          {
            (&(data->localData[0]->integerVars[22]/* m.current_drones[1] DISCRETE */) )[area - 1] = (&data->localData[0]->integerVars[22]/* m.current_drones[1] DISCRETE */)[area - 1]  + (data->localData[0]->integerVars[31]/* m.z DISCRETE */) ;

            (&(data->localData[0]->integerVars[14]/* m.beenVisited[1] DISCRETE */) )[area - 1] = ((modelica_integer) 1);

            (&(data->localData[0]->realVars[125]/* m.no_drone_time[1] DISCRETE */) )[area - 1] = 0.0;
          }
          else
          {
            (&(data->localData[0]->realVars[125]/* m.no_drone_time[1] DISCRETE */) )[area - 1] = (&data->localData[0]->realVars[125]/* m.no_drone_time[1] DISCRETE */)[area - 1]  + (data->simulationInfo->realParameter[328]/* m.p.Tm PARAM */) ;
          }

          (&(data->localData[0]->realVars[106]/* m.avg_drones[1] DISCRETE */) )[area - 1] = ((&(data->simulationInfo->realVarsPre[106]/* m.avg_drones[1] DISCRETE */) )[area - 1]) * (DIVISION_SIM(((modelica_real)(data->simulationInfo->integerVarsPre[30]/* m.samples DISCRETE */) ),((modelica_real)(data->simulationInfo->integerVarsPre[30]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes)) + DIVISION_SIM(((modelica_real)(&(data->simulationInfo->integerVarsPre[22]/* m.current_drones[1] DISCRETE */) )[area - 1]),((modelica_real)(data->simulationInfo->integerVarsPre[30]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes);

          (&(data->localData[0]->realVars[133]/* m.p_drones[1] DISCRETE */) )[area - 1] = ((&(data->simulationInfo->realVarsPre[133]/* m.p_drones[1] DISCRETE */) )[area - 1]) * (DIVISION_SIM(((modelica_real)(data->simulationInfo->integerVarsPre[30]/* m.samples DISCRETE */) ),((modelica_real)(data->simulationInfo->integerVarsPre[30]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes)) + DIVISION_SIM(((modelica_real)(&(data->simulationInfo->integerVarsPre[14]/* m.beenVisited[1] DISCRETE */) )[area - 1]),((modelica_real)(data->simulationInfo->integerVarsPre[30]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes);

          (&(data->localData[0]->realVars[115]/* m.avg_no_drone_time[1] DISCRETE */) )[area - 1] = ((&(data->simulationInfo->realVarsPre[115]/* m.avg_no_drone_time[1] DISCRETE */) )[area - 1]) * (DIVISION_SIM(((modelica_real)(data->simulationInfo->integerVarsPre[30]/* m.samples DISCRETE */) ),((modelica_real)(data->simulationInfo->integerVarsPre[30]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes)) + DIVISION_SIM((&(data->simulationInfo->realVarsPre[125]/* m.no_drone_time[1] DISCRETE */) )[area - 1],((modelica_real)(data->simulationInfo->integerVarsPre[30]/* m.samples DISCRETE */)  + ((modelica_integer) 1)),"/*Real*/(pre(m.samples) + 1)",equationIndexes);

          tmp167 = (&data->localData[0]->realVars[106]/* m.avg_drones[1] DISCRETE */)[area - 1] ;
          tmp168 = ((modelica_real)(&data->localData[0]->integerVars[22]/* m.current_drones[1] DISCRETE */)[area - 1] ) - ((tmp167 * tmp167));
          if(!(tmp168 >= 0.0))
          {
            if (data->simulationInfo->noThrowAsserts) {
              infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
              data->simulationInfo->needToReThrow = 1;
            } else {
              FILE_INFO info = {"",0,0,0,0,0};
              omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
              throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(/*Real*/(m.current_drones[area]) - m.avg_drones[area] ^ 2.0) was %g should be >= 0", tmp168);
            }
          }
          (&(data->localData[0]->realVars[142]/* m.std_dev[1] DISCRETE */) )[area - 1] = sqrt(tmp168);
        }
      }

      (data->localData[0]->realVars[114]/* m.avg_drones_all_areas DISCRETE */)  = (0.125) * ((data->localData[0]->realVars[106]/* m.avg_drones[1] DISCRETE */)  + (data->localData[0]->realVars[107]/* m.avg_drones[2] DISCRETE */)  + (data->localData[0]->realVars[108]/* m.avg_drones[3] DISCRETE */)  + (data->localData[0]->realVars[109]/* m.avg_drones[4] DISCRETE */)  + (data->localData[0]->realVars[110]/* m.avg_drones[5] DISCRETE */)  + (data->localData[0]->realVars[111]/* m.avg_drones[6] DISCRETE */)  + (data->localData[0]->realVars[112]/* m.avg_drones[7] DISCRETE */)  + (data->localData[0]->realVars[113]/* m.avg_drones[8] DISCRETE */) );

      (data->localData[0]->realVars[141]/* m.p_drones_all_areas DISCRETE */)  = (0.125) * ((data->localData[0]->realVars[133]/* m.p_drones[1] DISCRETE */)  + (data->localData[0]->realVars[134]/* m.p_drones[2] DISCRETE */)  + (data->localData[0]->realVars[135]/* m.p_drones[3] DISCRETE */)  + (data->localData[0]->realVars[136]/* m.p_drones[4] DISCRETE */)  + (data->localData[0]->realVars[137]/* m.p_drones[5] DISCRETE */)  + (data->localData[0]->realVars[138]/* m.p_drones[6] DISCRETE */)  + (data->localData[0]->realVars[139]/* m.p_drones[7] DISCRETE */)  + (data->localData[0]->realVars[140]/* m.p_drones[8] DISCRETE */) );

      (data->localData[0]->realVars[123]/* m.avg_no_drone_time_all_areas DISCRETE */)  = (0.125) * ((data->localData[0]->realVars[125]/* m.no_drone_time[1] DISCRETE */)  + (data->localData[0]->realVars[126]/* m.no_drone_time[2] DISCRETE */)  + (data->localData[0]->realVars[127]/* m.no_drone_time[3] DISCRETE */)  + (data->localData[0]->realVars[128]/* m.no_drone_time[4] DISCRETE */)  + (data->localData[0]->realVars[129]/* m.no_drone_time[5] DISCRETE */)  + (data->localData[0]->realVars[130]/* m.no_drone_time[6] DISCRETE */)  + (data->localData[0]->realVars[131]/* m.no_drone_time[7] DISCRETE */)  + (data->localData[0]->realVars[132]/* m.no_drone_time[8] DISCRETE */) );

      real_array_create(&tmp172, ((modelica_real*)&((&data->localData[0]->realVars[125]/* m.no_drone_time[1] DISCRETE */)[((modelica_integer) 1) - 1] )), 1, (_index_t)8);
      tmp173 = max_real_array(tmp172);
      tmp174 = Less((data->localData[0]->realVars[124]/* m.max_no_drone_time DISCRETE */) ,tmp173);
      if(tmp174)
      {
        real_array_create(&tmp175, ((modelica_real*)&((&data->localData[0]->realVars[125]/* m.no_drone_time[1] DISCRETE */)[((modelica_integer) 1) - 1] )), 1, (_index_t)8);
        tmp176 = max_real_array(tmp175);
        (data->localData[0]->realVars[124]/* m.max_no_drone_time DISCRETE */)  = tmp176;
      }

      tmp177 = (data->simulationInfo->realVarsPre[114]/* m.avg_drones_all_areas DISCRETE */) ;
      tmp178 = (data->localData[0]->realVars[114]/* m.avg_drones_all_areas DISCRETE */)  - ((tmp177 * tmp177));
      if(!(tmp178 >= 0.0))
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"",0,0,0,0,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(m.avg_drones_all_areas - pre(m.avg_drones_all_areas) ^ 2.0) was %g should be >= 0", tmp178);
        }
      }
      (data->localData[0]->realVars[150]/* m.std_dev_all_areas DISCRETE */)  = sqrt(tmp178);
    }
    else if(((data->localData[0]->booleanVars[7]/* $whenCondition2 DISCRETE */)  && !(data->simulationInfo->booleanVarsPre[7]/* $whenCondition2 DISCRETE */)  /* edge */))
    {
      omc_Modelica_Utilities_Files_remove(threadData, MMC_REFSTRINGLIT(tmp179));

      tmp181 = modelica_real_to_modelica_string(data->localData[0]->timeValue, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta182 = stringAppend(MMC_REFSTRINGLIT(tmp180),tmp181);
      tmpMeta184 = stringAppend(tmpMeta182,MMC_REFSTRINGLIT(tmp183));
      omc_Modelica_Utilities_Streams_print(threadData, tmpMeta184, MMC_REFSTRINGLIT(tmp185));

      tmp186 = modelica_real_to_modelica_string((data->localData[0]->realVars[114]/* m.avg_drones_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta188 = stringAppend(tmp186,MMC_REFSTRINGLIT(tmp187));
      tmp189 = modelica_real_to_modelica_string((data->localData[0]->realVars[123]/* m.avg_no_drone_time_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta190 = stringAppend(tmpMeta188,tmp189);
      tmpMeta192 = stringAppend(tmpMeta190,MMC_REFSTRINGLIT(tmp191));
      tmp193 = modelica_real_to_modelica_string((data->localData[0]->realVars[124]/* m.max_no_drone_time DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta194 = stringAppend(tmpMeta192,tmp193);
      tmpMeta196 = stringAppend(tmpMeta194,MMC_REFSTRINGLIT(tmp195));
      tmp197 = modelica_real_to_modelica_string((data->localData[0]->realVars[141]/* m.p_drones_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta198 = stringAppend(tmpMeta196,tmp197);
      tmpMeta200 = stringAppend(tmpMeta198,MMC_REFSTRINGLIT(tmp199));
      tmp201 = modelica_real_to_modelica_string((data->localData[0]->realVars[150]/* m.std_dev_all_areas DISCRETE */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta202 = stringAppend(tmpMeta200,tmp201);
      omc_Modelica_Utilities_Streams_print(threadData, tmpMeta202, MMC_REFSTRINGLIT(tmp203));

      {
        FILE_INFO info = {"/home/parallels/Desktop/Tesi/progetto-ia/Drone/monitor.mo",139,2,139,53,0};
        omc_terminate(info, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp204)));
      }
    }
  }
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
  System_eqFunction_83(data, threadData);

  System_eqFunction_84(data, threadData);

  System_eqFunction_85(data, threadData);

  System_eqFunction_86(data, threadData);

  System_eqFunction_87(data, threadData);

  System_eqFunction_88(data, threadData);

  System_eqFunction_89(data, threadData);

  System_eqFunction_90(data, threadData);

  System_eqFunction_91(data, threadData);

  System_eqFunction_92(data, threadData);

  System_eqFunction_93(data, threadData);

  System_eqFunction_94(data, threadData);

  System_eqFunction_95(data, threadData);

  System_eqFunction_96(data, threadData);

  System_eqFunction_97(data, threadData);

  System_eqFunction_98(data, threadData);

  System_eqFunction_99(data, threadData);

  System_eqFunction_100(data, threadData);

  System_eqFunction_101(data, threadData);

  System_eqFunction_102(data, threadData);

  System_eqFunction_103(data, threadData);

  System_eqFunction_104(data, threadData);

  System_eqFunction_105(data, threadData);

  System_eqFunction_106(data, threadData);

  System_eqFunction_107(data, threadData);

  System_eqFunction_108(data, threadData);

  System_eqFunction_109(data, threadData);

  System_eqFunction_110(data, threadData);

  System_eqFunction_111(data, threadData);

  System_eqFunction_112(data, threadData);

  System_eqFunction_113(data, threadData);

  System_eqFunction_114(data, threadData);

  System_eqFunction_115(data, threadData);

  System_eqFunction_116(data, threadData);

  System_eqFunction_117(data, threadData);

  System_eqFunction_118(data, threadData);

  System_eqFunction_119(data, threadData);

  System_eqFunction_120(data, threadData);

  System_eqFunction_121(data, threadData);

  System_eqFunction_122(data, threadData);

  System_eqFunction_123(data, threadData);

  System_eqFunction_124(data, threadData);

  System_eqFunction_125(data, threadData);

  System_eqFunction_126(data, threadData);

  System_eqFunction_127(data, threadData);

  System_eqFunction_128(data, threadData);
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
extern void System_eqFunction_85(DATA* data, threadData_t *threadData);
extern void System_eqFunction_86(DATA* data, threadData_t *threadData);
extern void System_eqFunction_87(DATA* data, threadData_t *threadData);
extern void System_eqFunction_88(DATA* data, threadData_t *threadData);
extern void System_eqFunction_89(DATA* data, threadData_t *threadData);
extern void System_eqFunction_90(DATA* data, threadData_t *threadData);
extern void System_eqFunction_91(DATA* data, threadData_t *threadData);
extern void System_eqFunction_92(DATA* data, threadData_t *threadData);
extern void System_eqFunction_93(DATA* data, threadData_t *threadData);
extern void System_eqFunction_94(DATA* data, threadData_t *threadData);
extern void System_eqFunction_95(DATA* data, threadData_t *threadData);
extern void System_eqFunction_96(DATA* data, threadData_t *threadData);
extern void System_eqFunction_97(DATA* data, threadData_t *threadData);
extern void System_eqFunction_98(DATA* data, threadData_t *threadData);
extern void System_eqFunction_99(DATA* data, threadData_t *threadData);
extern void System_eqFunction_100(DATA* data, threadData_t *threadData);
extern void System_eqFunction_101(DATA* data, threadData_t *threadData);
extern void System_eqFunction_102(DATA* data, threadData_t *threadData);
extern void System_eqFunction_103(DATA* data, threadData_t *threadData);
extern void System_eqFunction_104(DATA* data, threadData_t *threadData);
extern void System_eqFunction_105(DATA* data, threadData_t *threadData);
extern void System_eqFunction_106(DATA* data, threadData_t *threadData);
extern void System_eqFunction_107(DATA* data, threadData_t *threadData);
extern void System_eqFunction_108(DATA* data, threadData_t *threadData);
extern void System_eqFunction_109(DATA* data, threadData_t *threadData);
extern void System_eqFunction_110(DATA* data, threadData_t *threadData);
extern void System_eqFunction_111(DATA* data, threadData_t *threadData);
extern void System_eqFunction_112(DATA* data, threadData_t *threadData);
extern void System_eqFunction_113(DATA* data, threadData_t *threadData);
extern void System_eqFunction_114(DATA* data, threadData_t *threadData);
extern void System_eqFunction_115(DATA* data, threadData_t *threadData);
extern void System_eqFunction_116(DATA* data, threadData_t *threadData);
extern void System_eqFunction_117(DATA* data, threadData_t *threadData);
extern void System_eqFunction_118(DATA* data, threadData_t *threadData);
extern void System_eqFunction_119(DATA* data, threadData_t *threadData);
extern void System_eqFunction_120(DATA* data, threadData_t *threadData);
extern void System_eqFunction_121(DATA* data, threadData_t *threadData);
extern void System_eqFunction_122(DATA* data, threadData_t *threadData);
extern void System_eqFunction_123(DATA* data, threadData_t *threadData);
extern void System_eqFunction_124(DATA* data, threadData_t *threadData);
extern void System_eqFunction_125(DATA* data, threadData_t *threadData);
extern void System_eqFunction_126(DATA* data, threadData_t *threadData);
extern void System_eqFunction_127(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  {
    System_eqFunction_85(data, threadData);
    threadData->lastEquationSolved = 85;
  }
  {
    System_eqFunction_86(data, threadData);
    threadData->lastEquationSolved = 86;
  }
  {
    System_eqFunction_87(data, threadData);
    threadData->lastEquationSolved = 87;
  }
  {
    System_eqFunction_88(data, threadData);
    threadData->lastEquationSolved = 88;
  }
  {
    System_eqFunction_89(data, threadData);
    threadData->lastEquationSolved = 89;
  }
  {
    System_eqFunction_90(data, threadData);
    threadData->lastEquationSolved = 90;
  }
  {
    System_eqFunction_91(data, threadData);
    threadData->lastEquationSolved = 91;
  }
  {
    System_eqFunction_92(data, threadData);
    threadData->lastEquationSolved = 92;
  }
  {
    System_eqFunction_93(data, threadData);
    threadData->lastEquationSolved = 93;
  }
  {
    System_eqFunction_94(data, threadData);
    threadData->lastEquationSolved = 94;
  }
  {
    System_eqFunction_95(data, threadData);
    threadData->lastEquationSolved = 95;
  }
  {
    System_eqFunction_96(data, threadData);
    threadData->lastEquationSolved = 96;
  }
  {
    System_eqFunction_97(data, threadData);
    threadData->lastEquationSolved = 97;
  }
  {
    System_eqFunction_98(data, threadData);
    threadData->lastEquationSolved = 98;
  }
  {
    System_eqFunction_99(data, threadData);
    threadData->lastEquationSolved = 99;
  }
  {
    System_eqFunction_100(data, threadData);
    threadData->lastEquationSolved = 100;
  }
  {
    System_eqFunction_101(data, threadData);
    threadData->lastEquationSolved = 101;
  }
  {
    System_eqFunction_102(data, threadData);
    threadData->lastEquationSolved = 102;
  }
  {
    System_eqFunction_103(data, threadData);
    threadData->lastEquationSolved = 103;
  }
  {
    System_eqFunction_104(data, threadData);
    threadData->lastEquationSolved = 104;
  }
  {
    System_eqFunction_105(data, threadData);
    threadData->lastEquationSolved = 105;
  }
  {
    System_eqFunction_106(data, threadData);
    threadData->lastEquationSolved = 106;
  }
  {
    System_eqFunction_107(data, threadData);
    threadData->lastEquationSolved = 107;
  }
  {
    System_eqFunction_108(data, threadData);
    threadData->lastEquationSolved = 108;
  }
  {
    System_eqFunction_109(data, threadData);
    threadData->lastEquationSolved = 109;
  }
  {
    System_eqFunction_110(data, threadData);
    threadData->lastEquationSolved = 110;
  }
  {
    System_eqFunction_111(data, threadData);
    threadData->lastEquationSolved = 111;
  }
  {
    System_eqFunction_112(data, threadData);
    threadData->lastEquationSolved = 112;
  }
  {
    System_eqFunction_113(data, threadData);
    threadData->lastEquationSolved = 113;
  }
  {
    System_eqFunction_114(data, threadData);
    threadData->lastEquationSolved = 114;
  }
  {
    System_eqFunction_115(data, threadData);
    threadData->lastEquationSolved = 115;
  }
  {
    System_eqFunction_116(data, threadData);
    threadData->lastEquationSolved = 116;
  }
  {
    System_eqFunction_117(data, threadData);
    threadData->lastEquationSolved = 117;
  }
  {
    System_eqFunction_118(data, threadData);
    threadData->lastEquationSolved = 118;
  }
  {
    System_eqFunction_119(data, threadData);
    threadData->lastEquationSolved = 119;
  }
  {
    System_eqFunction_120(data, threadData);
    threadData->lastEquationSolved = 120;
  }
  {
    System_eqFunction_121(data, threadData);
    threadData->lastEquationSolved = 121;
  }
  {
    System_eqFunction_122(data, threadData);
    threadData->lastEquationSolved = 122;
  }
  {
    System_eqFunction_123(data, threadData);
    threadData->lastEquationSolved = 123;
  }
  {
    System_eqFunction_124(data, threadData);
    threadData->lastEquationSolved = 124;
  }
  {
    System_eqFunction_125(data, threadData);
    threadData->lastEquationSolved = 125;
  }
  {
    System_eqFunction_126(data, threadData);
    threadData->lastEquationSolved = 126;
  }
  {
    System_eqFunction_127(data, threadData);
    threadData->lastEquationSolved = 127;
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
#define _OMC_LIT_RESOURCE_1_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,13,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,46,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Controller"
#define _OMC_LIT_RESOURCE_2_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,10,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,46,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "Drone"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,5,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,46,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "DroneHW"
#define _OMC_LIT_RESOURCE_4_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,7,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,46,_OMC_LIT_RESOURCE_4_dir_data);

#define _OMC_LIT_RESOURCE_5_name_data "InputBoolean"
#define _OMC_LIT_RESOURCE_5_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_name,12,_OMC_LIT_RESOURCE_5_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir,46,_OMC_LIT_RESOURCE_5_dir_data);

#define _OMC_LIT_RESOURCE_6_name_data "InputInteger"
#define _OMC_LIT_RESOURCE_6_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_name,12,_OMC_LIT_RESOURCE_6_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir,46,_OMC_LIT_RESOURCE_6_dir_data);

#define _OMC_LIT_RESOURCE_7_name_data "InputReal"
#define _OMC_LIT_RESOURCE_7_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_name,9,_OMC_LIT_RESOURCE_7_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_dir,46,_OMC_LIT_RESOURCE_7_dir_data);

#define _OMC_LIT_RESOURCE_8_name_data "K"
#define _OMC_LIT_RESOURCE_8_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_8_name,1,_OMC_LIT_RESOURCE_8_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_8_dir,46,_OMC_LIT_RESOURCE_8_dir_data);

#define _OMC_LIT_RESOURCE_9_name_data "Modelica"
#define _OMC_LIT_RESOURCE_9_dir_data "/usr/lib/omlibrary/Modelica 4.0.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_9_name,8,_OMC_LIT_RESOURCE_9_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_9_dir,33,_OMC_LIT_RESOURCE_9_dir_data);

#define _OMC_LIT_RESOURCE_10_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_10_dir_data "/usr/lib/omlibrary/ModelicaServices 4.0.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_10_name,16,_OMC_LIT_RESOURCE_10_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_10_dir,41,_OMC_LIT_RESOURCE_10_dir_data);

#define _OMC_LIT_RESOURCE_11_name_data "Monitor"
#define _OMC_LIT_RESOURCE_11_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_11_name,7,_OMC_LIT_RESOURCE_11_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_11_dir,46,_OMC_LIT_RESOURCE_11_dir_data);

#define _OMC_LIT_RESOURCE_12_name_data "OutputBoolean"
#define _OMC_LIT_RESOURCE_12_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_12_name,13,_OMC_LIT_RESOURCE_12_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_12_dir,46,_OMC_LIT_RESOURCE_12_dir_data);

#define _OMC_LIT_RESOURCE_13_name_data "OutputInteger"
#define _OMC_LIT_RESOURCE_13_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_13_name,13,_OMC_LIT_RESOURCE_13_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_13_dir,46,_OMC_LIT_RESOURCE_13_dir_data);

#define _OMC_LIT_RESOURCE_14_name_data "OutputReal"
#define _OMC_LIT_RESOURCE_14_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_14_name,10,_OMC_LIT_RESOURCE_14_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_14_dir,46,_OMC_LIT_RESOURCE_14_dir_data);

#define _OMC_LIT_RESOURCE_15_name_data "Prm"
#define _OMC_LIT_RESOURCE_15_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_15_name,3,_OMC_LIT_RESOURCE_15_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_15_dir,46,_OMC_LIT_RESOURCE_15_dir_data);

#define _OMC_LIT_RESOURCE_16_name_data "System"
#define _OMC_LIT_RESOURCE_16_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_16_name,6,_OMC_LIT_RESOURCE_16_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_16_dir,46,_OMC_LIT_RESOURCE_16_dir_data);

#define _OMC_LIT_RESOURCE_17_name_data "areaCenter"
#define _OMC_LIT_RESOURCE_17_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_17_name,10,_OMC_LIT_RESOURCE_17_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_17_dir,46,_OMC_LIT_RESOURCE_17_dir_data);

#define _OMC_LIT_RESOURCE_18_name_data "batteryMonitor"
#define _OMC_LIT_RESOURCE_18_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_18_name,14,_OMC_LIT_RESOURCE_18_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_18_dir,46,_OMC_LIT_RESOURCE_18_dir_data);

#define _OMC_LIT_RESOURCE_19_name_data "charging"
#define _OMC_LIT_RESOURCE_19_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_19_name,8,_OMC_LIT_RESOURCE_19_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_19_dir,46,_OMC_LIT_RESOURCE_19_dir_data);

#define _OMC_LIT_RESOURCE_20_name_data "check_pos"
#define _OMC_LIT_RESOURCE_20_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_20_name,9,_OMC_LIT_RESOURCE_20_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_20_dir,46,_OMC_LIT_RESOURCE_20_dir_data);

#define _OMC_LIT_RESOURCE_21_name_data "check_pos_x"
#define _OMC_LIT_RESOURCE_21_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_21_name,11,_OMC_LIT_RESOURCE_21_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_21_dir,46,_OMC_LIT_RESOURCE_21_dir_data);

#define _OMC_LIT_RESOURCE_22_name_data "check_pos_y"
#define _OMC_LIT_RESOURCE_22_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_22_name,11,_OMC_LIT_RESOURCE_22_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_22_dir,46,_OMC_LIT_RESOURCE_22_dir_data);

#define _OMC_LIT_RESOURCE_23_name_data "check_pos_z"
#define _OMC_LIT_RESOURCE_23_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_23_name,11,_OMC_LIT_RESOURCE_23_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_23_dir,46,_OMC_LIT_RESOURCE_23_dir_data);

#define _OMC_LIT_RESOURCE_24_name_data "create_area"
#define _OMC_LIT_RESOURCE_24_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_24_name,11,_OMC_LIT_RESOURCE_24_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_24_dir,46,_OMC_LIT_RESOURCE_24_dir_data);

#define _OMC_LIT_RESOURCE_25_name_data "create_drone"
#define _OMC_LIT_RESOURCE_25_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_25_name,12,_OMC_LIT_RESOURCE_25_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_25_dir,46,_OMC_LIT_RESOURCE_25_dir_data);

#define _OMC_LIT_RESOURCE_26_name_data "flush_history"
#define _OMC_LIT_RESOURCE_26_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_26_name,13,_OMC_LIT_RESOURCE_26_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_26_dir,46,_OMC_LIT_RESOURCE_26_dir_data);

#define _OMC_LIT_RESOURCE_27_name_data "generate_areas"
#define _OMC_LIT_RESOURCE_27_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_27_name,14,_OMC_LIT_RESOURCE_27_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_27_dir,46,_OMC_LIT_RESOURCE_27_dir_data);

#define _OMC_LIT_RESOURCE_28_name_data "get_drone_pos"
#define _OMC_LIT_RESOURCE_28_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_28_name,13,_OMC_LIT_RESOURCE_28_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_28_dir,46,_OMC_LIT_RESOURCE_28_dir_data);

#define _OMC_LIT_RESOURCE_29_name_data "get_drone_pos_1"
#define _OMC_LIT_RESOURCE_29_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_29_name,15,_OMC_LIT_RESOURCE_29_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_29_dir,46,_OMC_LIT_RESOURCE_29_dir_data);

#define _OMC_LIT_RESOURCE_30_name_data "get_drone_pos_2"
#define _OMC_LIT_RESOURCE_30_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_30_name,15,_OMC_LIT_RESOURCE_30_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_30_dir,46,_OMC_LIT_RESOURCE_30_dir_data);

#define _OMC_LIT_RESOURCE_31_name_data "get_drone_pos_3"
#define _OMC_LIT_RESOURCE_31_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_31_name,15,_OMC_LIT_RESOURCE_31_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_31_dir,46,_OMC_LIT_RESOURCE_31_dir_data);

#define _OMC_LIT_RESOURCE_32_name_data "has_area_been_visited"
#define _OMC_LIT_RESOURCE_32_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_32_name,21,_OMC_LIT_RESOURCE_32_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_32_dir,46,_OMC_LIT_RESOURCE_32_dir_data);

#define _OMC_LIT_RESOURCE_33_name_data "has_drone_been_in_area"
#define _OMC_LIT_RESOURCE_33_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_33_name,22,_OMC_LIT_RESOURCE_33_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_33_dir,46,_OMC_LIT_RESOURCE_33_dir_data);

#define _OMC_LIT_RESOURCE_34_name_data "how_many_drones_in_area"
#define _OMC_LIT_RESOURCE_34_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_34_name,23,_OMC_LIT_RESOURCE_34_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_34_dir,46,_OMC_LIT_RESOURCE_34_dir_data);

#define _OMC_LIT_RESOURCE_35_name_data "myrandom"
#define _OMC_LIT_RESOURCE_35_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_35_name,8,_OMC_LIT_RESOURCE_35_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_35_dir,46,_OMC_LIT_RESOURCE_35_dir_data);

#define _OMC_LIT_RESOURCE_36_name_data "returnedHome"
#define _OMC_LIT_RESOURCE_36_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_36_name,12,_OMC_LIT_RESOURCE_36_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_36_dir,46,_OMC_LIT_RESOURCE_36_dir_data);

#define _OMC_LIT_RESOURCE_37_name_data "setup_areas"
#define _OMC_LIT_RESOURCE_37_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_37_name,11,_OMC_LIT_RESOURCE_37_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_37_dir,46,_OMC_LIT_RESOURCE_37_dir_data);

#define _OMC_LIT_RESOURCE_38_name_data "setup_db"
#define _OMC_LIT_RESOURCE_38_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_38_name,8,_OMC_LIT_RESOURCE_38_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_38_dir,46,_OMC_LIT_RESOURCE_38_dir_data);

#define _OMC_LIT_RESOURCE_39_name_data "setup_drones"
#define _OMC_LIT_RESOURCE_39_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_39_name,12,_OMC_LIT_RESOURCE_39_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_39_dir,46,_OMC_LIT_RESOURCE_39_dir_data);

#define _OMC_LIT_RESOURCE_40_name_data "turn_off"
#define _OMC_LIT_RESOURCE_40_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_40_name,8,_OMC_LIT_RESOURCE_40_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_40_dir,46,_OMC_LIT_RESOURCE_40_dir_data);

#define _OMC_LIT_RESOURCE_41_name_data "update_drone_pos"
#define _OMC_LIT_RESOURCE_41_dir_data "/home/parallels/Desktop/Tesi/progetto-ia/Drone"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_41_name,16,_OMC_LIT_RESOURCE_41_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_41_dir,46,_OMC_LIT_RESOURCE_41_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,84,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_7_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_7_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_8_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_8_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_9_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_9_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_10_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_10_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_11_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_11_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_12_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_12_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_13_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_13_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_14_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_14_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_15_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_15_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_16_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_16_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_17_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_17_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_18_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_18_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_19_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_19_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_20_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_20_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_21_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_21_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_22_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_22_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_23_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_23_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_24_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_24_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_25_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_25_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_26_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_26_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_27_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_27_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_28_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_28_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_29_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_29_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_30_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_30_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_31_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_31_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_32_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_32_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_33_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_33_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_34_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_34_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_35_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_35_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_36_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_36_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_37_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_37_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_38_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_38_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_39_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_39_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_40_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_40_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_41_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_41_dir)}};
void System_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &System_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "System";
  data->modelData->modelFilePrefix = "System";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/parallels/Desktop/Tesi/progetto-ia/Drone";
  data->modelData->modelGUID = "{12fe1558-fc0d-474d-b42a-578255f50e11}";
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
  
  data->modelData->nStates = 18;
  data->modelData->nVariablesReal = 151;
  data->modelData->nDiscreteReal = 95;
  data->modelData->nVariablesInteger = 32;
  data->modelData->nVariablesBoolean = 35;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 386;
  data->modelData->nParametersInteger = 15;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 2;
  
  data->modelData->nAliasReal = 57;
  data->modelData->nAliasInteger = 3;
  data->modelData->nAliasBoolean = 3;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 1;
  data->modelData->nSamples = 11;
  data->modelData->nRelations = 1;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "System_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 26;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 154;
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


