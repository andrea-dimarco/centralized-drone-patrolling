/* Additional record code for System generated by the OpenModelica Compiler OpenModelica 1.19.3. */

#include "omc_simulation_settings.h"
#include "meta/meta_modelica.h"
#include "System_functions.h"

#ifdef __cplusplus
extern "C" {
#endif

#define Prm__desc_added 1
const char* Prm__desc__fields[36] = {"stop_simulation","fifo_len","msg_len","Tdrone","Tcc","Tm","monitor_start","nDrones","cc_choice","p_worst","p_recharge","comm_timeout","p_comm_error","arrival_timeout","dDistance","arrivalThreshold","flyZone","docking_bay","m","maxSpeed","horizontalODD","verticalODD","maxAngle","minDistanceFromObs","dangerRadius","unita","capacity","batteryDischarge","commDischarge","rechargeRate","dangerousBatteryPercentage","dangerousBatteryLevel","rechargedPercentage","rechargedThreshold","nAreas","areas"};
struct record_description Prm__desc = {
  "Prm", /* package_record__X */
  "Prm", /* package.record_X */
  Prm__desc__fields
};

void Prm_construct_p(threadData_t *threadData, void* v_ths ) {
  Prm* ths = (Prm*)(v_ths);
  real_array tmp8;
  real_array tmp9;
  real_array tmp10;
  real_array tmp11;
  real_array tmp12;
  real_array tmp13;
  real_array tmp14;
  real_array tmp15;
  real_array tmp16;
  real_array tmp17;
  real_array tmp18;
  ths->_stop_simulation = 172800.0;
  ths->_fifo_len = ((modelica_integer) 10);
  ths->_msg_len = ((modelica_integer) 5);
  ths->_Tdrone = 1.0;
  ths->_Tcc = 1.0;
  ths->_Tm = 60.0;
  ths->_monitor_start = 0.01;
  ths->_nDrones = ((modelica_integer) 2);
  ths->_cc_choice = 0.48557;
  ths->_p_worst = 0.11837;
  ths->_p_recharge = 0.01224;
  ths->_comm_timeout = 300.0;
  ths->_p_comm_error = 0.05;
  ths->_arrival_timeout = 60.0;
  ths->_dDistance = 25.0;
  ths->_arrivalThreshold = 20.0;
  alloc_real_array(&(ths->_flyZone), 1, (_index_t)3);
  array_alloc_scalar_real_array(&tmp8, 3, (modelica_real)200.0, (modelica_real)200.0, (modelica_real)200.0);
  real_array_copy_data(tmp8, ths->_flyZone);
  
  alloc_real_array(&(ths->_docking_bay), 1, (_index_t)3);
  array_alloc_scalar_real_array(&tmp9, 3, (modelica_real)-10.0, (modelica_real)-10.0, (modelica_real)-10.0);
  real_array_copy_data(tmp9, ths->_docking_bay);
  
  ths->_m = 0.895;
  ths->_maxSpeed = 15.0;
  ths->_horizontalODD = 40.0;
  ths->_verticalODD = 30.0;
  ths->_maxAngle = 30.0;
  ths->_minDistanceFromObs = 5.0;
  ths->_dangerRadius = 8.0;
  ths->_unita = 10.0;
  ths->_capacity = 180000.0;
  ths->_batteryDischarge = 10.0;
  ths->_commDischarge = 50.0;
  ths->_rechargeRate = 25.0;
  ths->_dangerousBatteryPercentage = 0.05;
  ths->_dangerousBatteryLevel = 9000.0;
  ths->_rechargedPercentage = 0.99;
  ths->_rechargedThreshold = 178200.0;
  ths->_nAreas = ((modelica_integer) 8);
  alloc_real_array(&(ths->_areas), 2, (_index_t)8, (_index_t)6);
  array_alloc_scalar_real_array(&tmp11, 6, (modelica_real)0.0, (modelica_real)100.0, (modelica_real)0.0, (modelica_real)100.0, (modelica_real)0.0, (modelica_real)100.0);
  array_alloc_scalar_real_array(&tmp12, 6, (modelica_real)100.0, (modelica_real)200.0, (modelica_real)0.0, (modelica_real)100.0, (modelica_real)0.0, (modelica_real)100.0);
  array_alloc_scalar_real_array(&tmp13, 6, (modelica_real)0.0, (modelica_real)100.0, (modelica_real)100.0, (modelica_real)200.0, (modelica_real)0.0, (modelica_real)100.0);
  array_alloc_scalar_real_array(&tmp14, 6, (modelica_real)100.0, (modelica_real)200.0, (modelica_real)100.0, (modelica_real)200.0, (modelica_real)0.0, (modelica_real)100.0);
  array_alloc_scalar_real_array(&tmp15, 6, (modelica_real)0.0, (modelica_real)100.0, (modelica_real)0.0, (modelica_real)100.0, (modelica_real)100.0, (modelica_real)200.0);
  array_alloc_scalar_real_array(&tmp16, 6, (modelica_real)100.0, (modelica_real)200.0, (modelica_real)0.0, (modelica_real)100.0, (modelica_real)100.0, (modelica_real)200.0);
  array_alloc_scalar_real_array(&tmp17, 6, (modelica_real)0.0, (modelica_real)100.0, (modelica_real)100.0, (modelica_real)200.0, (modelica_real)100.0, (modelica_real)200.0);
  array_alloc_scalar_real_array(&tmp18, 6, (modelica_real)100.0, (modelica_real)200.0, (modelica_real)100.0, (modelica_real)200.0, (modelica_real)100.0, (modelica_real)200.0);
  array_alloc_real_array(&tmp10, 8, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18);
  real_array_copy_data(tmp10, ths->_areas);
  
}
// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
/*
Prm omc_Prm(threadData_t *threadData , modelica_real  in_stop_simulation, modelica_integer  in_fifo_len, modelica_integer  in_msg_len, modelica_real  in_Tdrone, modelica_real  in_Tcc, modelica_real  in_Tm, modelica_real  in_monitor_start, modelica_integer  in_nDrones, modelica_real  in_cc_choice, modelica_real  in_p_worst, modelica_real  in_p_recharge, modelica_real  in_comm_timeout, modelica_real  in_p_comm_error, modelica_real  in_arrival_timeout, modelica_real  in_dDistance, modelica_real  in_arrivalThreshold, real_array  in_flyZone, real_array  in_docking_bay, modelica_real  in_m, modelica_real  in_maxSpeed, modelica_real  in_horizontalODD, modelica_real  in_verticalODD, modelica_real  in_maxAngle, modelica_real  in_minDistanceFromObs, modelica_real  in_dangerRadius, modelica_real  in_unita, modelica_real  in_capacity, modelica_real  in_batteryDischarge, modelica_real  in_commDischarge, modelica_real  in_rechargeRate, modelica_real  in_dangerousBatteryPercentage, modelica_real  in_dangerousBatteryLevel, modelica_real  in_rechargedPercentage, modelica_real  in_rechargedThreshold, modelica_integer  in_nAreas, real_array  in_areas) {
  Prm dst;
  // TODO Improve me. No need to initalize the record members with defaults in Prm_construct
  // We should just do the allocs here and then copy the input parameters as default values instead.
  Prm_construct(threadData, dst);
  dst._stop_simulation =  in_stop_simulation;
  dst._fifo_len =  in_fifo_len;
  dst._msg_len =  in_msg_len;
  dst._Tdrone =  in_Tdrone;
  dst._Tcc =  in_Tcc;
  dst._Tm =  in_Tm;
  dst._monitor_start =  in_monitor_start;
  dst._nDrones =  in_nDrones;
  dst._cc_choice =  in_cc_choice;
  dst._p_worst =  in_p_worst;
  dst._p_recharge =  in_p_recharge;
  dst._comm_timeout =  in_comm_timeout;
  dst._p_comm_error =  in_p_comm_error;
  dst._arrival_timeout =  in_arrival_timeout;
  dst._dDistance =  in_dDistance;
  dst._arrivalThreshold =  in_arrivalThreshold;
  real_array_copy_data( in_flyZone, dst._flyZone);
  real_array_copy_data( in_docking_bay, dst._docking_bay);
  dst._m =  in_m;
  dst._maxSpeed =  in_maxSpeed;
  dst._horizontalODD =  in_horizontalODD;
  dst._verticalODD =  in_verticalODD;
  dst._maxAngle =  in_maxAngle;
  dst._minDistanceFromObs =  in_minDistanceFromObs;
  dst._dangerRadius =  in_dangerRadius;
  dst._unita =  in_unita;
  dst._capacity =  in_capacity;
  dst._batteryDischarge =  in_batteryDischarge;
  dst._commDischarge =  in_commDischarge;
  dst._rechargeRate =  in_rechargeRate;
  dst._dangerousBatteryPercentage =  in_dangerousBatteryPercentage;
  dst._dangerousBatteryLevel =  in_dangerousBatteryLevel;
  dst._rechargedPercentage =  in_rechargedPercentage;
  dst._rechargedThreshold =  in_rechargedThreshold;
  dst._nAreas =  in_nAreas;
  real_array_copy_data( in_areas, dst._areas);
  return dst;
}
*/

void Prm_copy_p(void* v_src, void* v_dst) {
  Prm* src = (Prm*)(v_src);
  Prm* dst = (Prm*)(v_dst);
  dst->_stop_simulation = src->_stop_simulation;
  dst->_fifo_len = src->_fifo_len;
  dst->_msg_len = src->_msg_len;
  dst->_Tdrone = src->_Tdrone;
  dst->_Tcc = src->_Tcc;
  dst->_Tm = src->_Tm;
  dst->_monitor_start = src->_monitor_start;
  dst->_nDrones = src->_nDrones;
  dst->_cc_choice = src->_cc_choice;
  dst->_p_worst = src->_p_worst;
  dst->_p_recharge = src->_p_recharge;
  dst->_comm_timeout = src->_comm_timeout;
  dst->_p_comm_error = src->_p_comm_error;
  dst->_arrival_timeout = src->_arrival_timeout;
  dst->_dDistance = src->_dDistance;
  dst->_arrivalThreshold = src->_arrivalThreshold;
  real_array_copy_data(src->_flyZone, dst->_flyZone);
  real_array_copy_data(src->_docking_bay, dst->_docking_bay);
  dst->_m = src->_m;
  dst->_maxSpeed = src->_maxSpeed;
  dst->_horizontalODD = src->_horizontalODD;
  dst->_verticalODD = src->_verticalODD;
  dst->_maxAngle = src->_maxAngle;
  dst->_minDistanceFromObs = src->_minDistanceFromObs;
  dst->_dangerRadius = src->_dangerRadius;
  dst->_unita = src->_unita;
  dst->_capacity = src->_capacity;
  dst->_batteryDischarge = src->_batteryDischarge;
  dst->_commDischarge = src->_commDischarge;
  dst->_rechargeRate = src->_rechargeRate;
  dst->_dangerousBatteryPercentage = src->_dangerousBatteryPercentage;
  dst->_dangerousBatteryLevel = src->_dangerousBatteryLevel;
  dst->_rechargedPercentage = src->_rechargedPercentage;
  dst->_rechargedThreshold = src->_rechargedThreshold;
  dst->_nAreas = src->_nAreas;
  real_array_copy_data(src->_areas, dst->_areas);
}

#ifdef __cplusplus
}
#endif

