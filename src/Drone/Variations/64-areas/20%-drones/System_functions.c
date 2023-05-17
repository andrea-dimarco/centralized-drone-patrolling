#include "omc_simulation_settings.h"
#include "System_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "System_includes.h"


DLLExport
modelica_boolean omc_FifoIODone(threadData_t *threadData, modelica_integer _x)
{
  modelica_boolean _done;
  _tailrecursive: OMC_LABEL_UNUSED
  // _done has no default value.
  if((_x == ((modelica_integer) 2)))
  {
    _done = 1;
  }
  else
  {
    _done = 0;
  }
  _return: OMC_LABEL_UNUSED
  return _done;
}
modelica_metatype boxptr_FifoIODone(threadData_t *threadData, modelica_metatype _x)
{
  modelica_integer tmp1;
  modelica_boolean _done;
  modelica_metatype out_done;
  tmp1 = mmc_unbox_integer(_x);
  _done = omc_FifoIODone(threadData, tmp1);
  out_done = mmc_mk_icon(_done);
  return out_done;
}

Prm omc_Prm(threadData_t *threadData, modelica_real omc_stop_simulation, modelica_integer omc_fifo_len, modelica_integer omc_msg_len, modelica_real omc_Tdrone, modelica_real omc_Tcc, modelica_real omc_Tm, modelica_real omc_monitor_start, modelica_integer omc_nDrones, modelica_real omc_cc_choice, modelica_real omc_p_worst, modelica_real omc_p_recharge, modelica_real omc_comm_timeout, modelica_real omc_p_comm_error, modelica_real omc_arrival_timeout, modelica_real omc_dDistance, modelica_real omc_arrivalThreshold, real_array omc_flyZone, real_array omc_docking_bay, modelica_real omc_m, modelica_real omc_maxSpeed, modelica_real omc_horizontalODD, modelica_real omc_verticalODD, modelica_real omc_maxAngle, modelica_real omc_minDistanceFromObs, modelica_real omc_dangerRadius, modelica_real omc_unita, modelica_real omc_capacity, modelica_real omc_batteryDischarge, modelica_real omc_commDischarge, modelica_real omc_rechargeRate, modelica_real omc_dangerousBatteryPercentage, modelica_real omc_dangerousBatteryLevel, modelica_real omc_rechargedPercentage, modelica_real omc_rechargedThreshold, modelica_integer omc_nAreas, real_array omc_areas)
{
  Prm tmp1;
  tmp1._stop_simulation = omc_stop_simulation;
  tmp1._fifo_len = omc_fifo_len;
  tmp1._msg_len = omc_msg_len;
  tmp1._Tdrone = omc_Tdrone;
  tmp1._Tcc = omc_Tcc;
  tmp1._Tm = omc_Tm;
  tmp1._monitor_start = omc_monitor_start;
  tmp1._nDrones = omc_nDrones;
  tmp1._cc_choice = omc_cc_choice;
  tmp1._p_worst = omc_p_worst;
  tmp1._p_recharge = omc_p_recharge;
  tmp1._comm_timeout = omc_comm_timeout;
  tmp1._p_comm_error = omc_p_comm_error;
  tmp1._arrival_timeout = omc_arrival_timeout;
  tmp1._dDistance = omc_dDistance;
  tmp1._arrivalThreshold = omc_arrivalThreshold;
  tmp1._flyZone = omc_flyZone;
  tmp1._docking_bay = omc_docking_bay;
  tmp1._m = omc_m;
  tmp1._maxSpeed = omc_maxSpeed;
  tmp1._horizontalODD = omc_horizontalODD;
  tmp1._verticalODD = omc_verticalODD;
  tmp1._maxAngle = omc_maxAngle;
  tmp1._minDistanceFromObs = omc_minDistanceFromObs;
  tmp1._dangerRadius = omc_dangerRadius;
  tmp1._unita = omc_unita;
  tmp1._capacity = omc_capacity;
  tmp1._batteryDischarge = omc_batteryDischarge;
  tmp1._commDischarge = omc_commDischarge;
  tmp1._rechargeRate = omc_rechargeRate;
  tmp1._dangerousBatteryPercentage = omc_dangerousBatteryPercentage;
  tmp1._dangerousBatteryLevel = omc_dangerousBatteryLevel;
  tmp1._rechargedPercentage = omc_rechargedPercentage;
  tmp1._rechargedThreshold = omc_rechargedThreshold;
  tmp1._nAreas = omc_nAreas;
  tmp1._areas = omc_areas;
  return tmp1;
}

modelica_metatype boxptr_Prm(threadData_t *threadData, modelica_metatype _stop_simulation, modelica_metatype _fifo_len, modelica_metatype _msg_len, modelica_metatype _Tdrone, modelica_metatype _Tcc, modelica_metatype _Tm, modelica_metatype _monitor_start, modelica_metatype _nDrones, modelica_metatype _cc_choice, modelica_metatype _p_worst, modelica_metatype _p_recharge, modelica_metatype _comm_timeout, modelica_metatype _p_comm_error, modelica_metatype _arrival_timeout, modelica_metatype _dDistance, modelica_metatype _arrivalThreshold, modelica_metatype _flyZone, modelica_metatype _docking_bay, modelica_metatype _m, modelica_metatype _maxSpeed, modelica_metatype _horizontalODD, modelica_metatype _verticalODD, modelica_metatype _maxAngle, modelica_metatype _minDistanceFromObs, modelica_metatype _dangerRadius, modelica_metatype _unita, modelica_metatype _capacity, modelica_metatype _batteryDischarge, modelica_metatype _commDischarge, modelica_metatype _rechargeRate, modelica_metatype _dangerousBatteryPercentage, modelica_metatype _dangerousBatteryLevel, modelica_metatype _rechargedPercentage, modelica_metatype _rechargedThreshold, modelica_metatype _nAreas, modelica_metatype _areas)
{
  return mmc_mk_box(37, 3, &Prm__desc, _stop_simulation, _fifo_len, _msg_len, _Tdrone, _Tcc, _Tm, _monitor_start, _nDrones, _cc_choice, _p_worst, _p_recharge, _comm_timeout, _p_comm_error, _arrival_timeout, _dDistance, _arrivalThreshold, _flyZone, _docking_bay, _m, _maxSpeed, _horizontalODD, _verticalODD, _maxAngle, _minDistanceFromObs, _dangerRadius, _unita, _capacity, _batteryDischarge, _commDischarge, _rechargeRate, _dangerousBatteryPercentage, _dangerousBatteryLevel, _rechargedPercentage, _rechargedThreshold, _nAreas, _areas);
}

DLLExport
modelica_boolean omc_ReadFromFIFO(threadData_t *threadData, modelica_integer _x, modelica_boolean _datavailable, modelica_boolean _readsignal, modelica_integer *out_new_x)
{
  modelica_boolean _new_readsignal;
  modelica_integer _new_x;
  _tailrecursive: OMC_LABEL_UNUSED
  // _new_readsignal has no default value.
  // _new_x has no default value.
  _new_readsignal = _readsignal;

  if(((_x == ((modelica_integer) 0)) && _datavailable))
  {
    _new_readsignal = (!_readsignal);

    _new_x = ((modelica_integer) 1);
  }
  else
  {
    if((_x == ((modelica_integer) 1)))
    {
      _new_x = ((modelica_integer) 2);
    }
    else
    {
      _new_x = _x;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_new_x) { *out_new_x = _new_x; }
  return _new_readsignal;
}
modelica_metatype boxptr_ReadFromFIFO(threadData_t *threadData, modelica_metatype _x, modelica_metatype _datavailable, modelica_metatype _readsignal, modelica_metatype *out_new_x)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _new_x;
  modelica_boolean _new_readsignal;
  modelica_metatype out_new_readsignal;
  tmp1 = mmc_unbox_integer(_x);
  tmp2 = mmc_unbox_integer(_datavailable);
  tmp3 = mmc_unbox_integer(_readsignal);
  _new_readsignal = omc_ReadFromFIFO(threadData, tmp1, tmp2, tmp3, &_new_x);
  out_new_readsignal = mmc_mk_icon(_new_readsignal);
  if (out_new_x) { *out_new_x = mmc_mk_icon(_new_x); }
  return out_new_readsignal;
}

DLLExport
modelica_boolean omc_WriteToFIFO(threadData_t *threadData, modelica_integer _x, modelica_boolean _writesignal, modelica_boolean _spaceavailable, modelica_integer *out_new_x)
{
  modelica_boolean _new_writesignal;
  modelica_integer _new_x;
  _tailrecursive: OMC_LABEL_UNUSED
  // _new_writesignal has no default value.
  // _new_x has no default value.
  _new_writesignal = _writesignal;

  if((_x == ((modelica_integer) 0)))
  {
    _new_x = ((modelica_integer) 1);
  }
  else
  {
    if(((_x == ((modelica_integer) 1)) && _spaceavailable))
    {
      _new_writesignal = (!_writesignal);

      _new_x = ((modelica_integer) 2);
    }
    else
    {
      _new_x = _x;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_new_x) { *out_new_x = _new_x; }
  return _new_writesignal;
}
modelica_metatype boxptr_WriteToFIFO(threadData_t *threadData, modelica_metatype _x, modelica_metatype _writesignal, modelica_metatype _spaceavailable, modelica_metatype *out_new_x)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _new_x;
  modelica_boolean _new_writesignal;
  modelica_metatype out_new_writesignal;
  tmp1 = mmc_unbox_integer(_x);
  tmp2 = mmc_unbox_integer(_writesignal);
  tmp3 = mmc_unbox_integer(_spaceavailable);
  _new_writesignal = omc_WriteToFIFO(threadData, tmp1, tmp2, tmp3, &_new_x);
  out_new_writesignal = mmc_mk_icon(_new_writesignal);
  if (out_new_x) { *out_new_x = mmc_mk_icon(_new_x); }
  return out_new_writesignal;
}

DLLExport
modelica_real omc_areaCenter(threadData_t *threadData, Prm _k, modelica_integer _id, modelica_real *out_areaY, modelica_real *out_areaZ)
{
  modelica_real _areaX;
  modelica_real _areaY;
  modelica_real _areaZ;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  // _areaX has no default value.
  // _areaY has no default value.
  // _areaZ has no default value.
  tmp1 = 2.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(k.areas[id,1] + k.areas[id,2]) / 2.0");}
  _areaX = (real_array_get(_k._areas, 2, _id, ((modelica_integer) 1)) + real_array_get(_k._areas, 2, _id, ((modelica_integer) 2))) / tmp1;

  tmp2 = 2.0;
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(k.areas[id,3] + k.areas[id,4]) / 2.0");}
  _areaY = (real_array_get(_k._areas, 2, _id, ((modelica_integer) 3)) + real_array_get(_k._areas, 2, _id, ((modelica_integer) 4))) / tmp2;

  tmp3 = 2.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s", "(k.areas[id,5] + k.areas[id,6]) / 2.0");}
  _areaZ = (real_array_get(_k._areas, 2, _id, ((modelica_integer) 5)) + real_array_get(_k._areas, 2, _id, ((modelica_integer) 6))) / tmp3;
  _return: OMC_LABEL_UNUSED
  if (out_areaY) { *out_areaY = _areaY; }
  if (out_areaZ) { *out_areaZ = _areaZ; }
  return _areaX;
}
modelica_metatype boxptr_areaCenter(threadData_t *threadData, modelica_metatype _k, modelica_metatype _id, modelica_metatype *out_areaY, modelica_metatype *out_areaZ)
{
  Prm tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_real tmp11;
  modelica_metatype tmpMeta12;
  modelica_real tmp13;
  modelica_metatype tmpMeta14;
  modelica_real tmp15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_real tmp19;
  modelica_metatype tmpMeta20;
  modelica_real tmp21;
  modelica_metatype tmpMeta22;
  modelica_real tmp23;
  modelica_metatype tmpMeta24;
  modelica_real tmp25;
  modelica_metatype tmpMeta26;
  modelica_real tmp27;
  modelica_metatype tmpMeta28;
  modelica_real tmp29;
  modelica_metatype tmpMeta30;
  modelica_real tmp31;
  modelica_metatype tmpMeta32;
  modelica_real tmp33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_real tmp37;
  modelica_metatype tmpMeta38;
  modelica_real tmp39;
  modelica_metatype tmpMeta40;
  modelica_real tmp41;
  modelica_metatype tmpMeta42;
  modelica_real tmp43;
  modelica_metatype tmpMeta44;
  modelica_real tmp45;
  modelica_metatype tmpMeta46;
  modelica_real tmp47;
  modelica_metatype tmpMeta48;
  modelica_real tmp49;
  modelica_metatype tmpMeta50;
  modelica_real tmp51;
  modelica_metatype tmpMeta52;
  modelica_real tmp53;
  modelica_metatype tmpMeta54;
  modelica_real tmp55;
  modelica_metatype tmpMeta56;
  modelica_real tmp57;
  modelica_metatype tmpMeta58;
  modelica_real tmp59;
  modelica_metatype tmpMeta60;
  modelica_real tmp61;
  modelica_metatype tmpMeta62;
  modelica_real tmp63;
  modelica_metatype tmpMeta64;
  modelica_real tmp65;
  modelica_metatype tmpMeta66;
  modelica_real tmp67;
  modelica_metatype tmpMeta68;
  modelica_integer tmp69;
  modelica_metatype tmpMeta70;
  modelica_integer tmp71;
  modelica_real _areaY;
  modelica_real _areaZ;
  modelica_real _areaX;
  modelica_metatype out_areaX;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._stop_simulation = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 3)));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmp1._fifo_len = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 4)));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmp1._msg_len = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 5)));
  tmp9 = mmc_unbox_real(tmpMeta8);
  tmp1._Tdrone = tmp9;
  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 6)));
  tmp11 = mmc_unbox_real(tmpMeta10);
  tmp1._Tcc = tmp11;
  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 7)));
  tmp13 = mmc_unbox_real(tmpMeta12);
  tmp1._Tm = tmp13;
  tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 8)));
  tmp15 = mmc_unbox_real(tmpMeta14);
  tmp1._monitor_start = tmp15;
  tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 9)));
  tmp17 = mmc_unbox_integer(tmpMeta16);
  tmp1._nDrones = tmp17;
  tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 10)));
  tmp19 = mmc_unbox_real(tmpMeta18);
  tmp1._cc_choice = tmp19;
  tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 11)));
  tmp21 = mmc_unbox_real(tmpMeta20);
  tmp1._p_worst = tmp21;
  tmpMeta22 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 12)));
  tmp23 = mmc_unbox_real(tmpMeta22);
  tmp1._p_recharge = tmp23;
  tmpMeta24 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 13)));
  tmp25 = mmc_unbox_real(tmpMeta24);
  tmp1._comm_timeout = tmp25;
  tmpMeta26 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 14)));
  tmp27 = mmc_unbox_real(tmpMeta26);
  tmp1._p_comm_error = tmp27;
  tmpMeta28 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 15)));
  tmp29 = mmc_unbox_real(tmpMeta28);
  tmp1._arrival_timeout = tmp29;
  tmpMeta30 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 16)));
  tmp31 = mmc_unbox_real(tmpMeta30);
  tmp1._dDistance = tmp31;
  tmpMeta32 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 17)));
  tmp33 = mmc_unbox_real(tmpMeta32);
  tmp1._arrivalThreshold = tmp33;
  tmpMeta34 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 18)));
  tmp1._flyZone = *((base_array_t*)tmpMeta34);
  tmpMeta35 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 19)));
  tmp1._docking_bay = *((base_array_t*)tmpMeta35);
  tmpMeta36 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 20)));
  tmp37 = mmc_unbox_real(tmpMeta36);
  tmp1._m = tmp37;
  tmpMeta38 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 21)));
  tmp39 = mmc_unbox_real(tmpMeta38);
  tmp1._maxSpeed = tmp39;
  tmpMeta40 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 22)));
  tmp41 = mmc_unbox_real(tmpMeta40);
  tmp1._horizontalODD = tmp41;
  tmpMeta42 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 23)));
  tmp43 = mmc_unbox_real(tmpMeta42);
  tmp1._verticalODD = tmp43;
  tmpMeta44 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 24)));
  tmp45 = mmc_unbox_real(tmpMeta44);
  tmp1._maxAngle = tmp45;
  tmpMeta46 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 25)));
  tmp47 = mmc_unbox_real(tmpMeta46);
  tmp1._minDistanceFromObs = tmp47;
  tmpMeta48 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 26)));
  tmp49 = mmc_unbox_real(tmpMeta48);
  tmp1._dangerRadius = tmp49;
  tmpMeta50 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 27)));
  tmp51 = mmc_unbox_real(tmpMeta50);
  tmp1._unita = tmp51;
  tmpMeta52 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 28)));
  tmp53 = mmc_unbox_real(tmpMeta52);
  tmp1._capacity = tmp53;
  tmpMeta54 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 29)));
  tmp55 = mmc_unbox_real(tmpMeta54);
  tmp1._batteryDischarge = tmp55;
  tmpMeta56 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 30)));
  tmp57 = mmc_unbox_real(tmpMeta56);
  tmp1._commDischarge = tmp57;
  tmpMeta58 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 31)));
  tmp59 = mmc_unbox_real(tmpMeta58);
  tmp1._rechargeRate = tmp59;
  tmpMeta60 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 32)));
  tmp61 = mmc_unbox_real(tmpMeta60);
  tmp1._dangerousBatteryPercentage = tmp61;
  tmpMeta62 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 33)));
  tmp63 = mmc_unbox_real(tmpMeta62);
  tmp1._dangerousBatteryLevel = tmp63;
  tmpMeta64 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 34)));
  tmp65 = mmc_unbox_real(tmpMeta64);
  tmp1._rechargedPercentage = tmp65;
  tmpMeta66 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 35)));
  tmp67 = mmc_unbox_real(tmpMeta66);
  tmp1._rechargedThreshold = tmp67;
  tmpMeta68 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 36)));
  tmp69 = mmc_unbox_integer(tmpMeta68);
  tmp1._nAreas = tmp69;
  tmpMeta70 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_k), 37)));
  tmp1._areas = *((base_array_t*)tmpMeta70);tmp71 = mmc_unbox_integer(_id);
  _areaX = omc_areaCenter(threadData, tmp1, tmp71, &_areaY, &_areaZ);
  out_areaX = mmc_mk_rcon(_areaX);
  if (out_areaY) { *out_areaY = mmc_mk_rcon(_areaY); }
  if (out_areaZ) { *out_areaZ = mmc_mk_rcon(_areaZ); }
  return out_areaX;
}

DLLExport
modelica_real omc_batteryMonitor(threadData_t *threadData, modelica_real _battery, modelica_real _dischargeRate)
{
  modelica_real _outBattery;
  _tailrecursive: OMC_LABEL_UNUSED
  // _outBattery has no default value.
  if((_battery < 0.0))
  {
    _outBattery = 0.0;
  }
  else
  {
    if((_battery - _dischargeRate < 0.0))
    {
      _outBattery = 0.0;
    }
    else
    {
      _outBattery = _battery - _dischargeRate;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _outBattery;
}
modelica_metatype boxptr_batteryMonitor(threadData_t *threadData, modelica_metatype _battery, modelica_metatype _dischargeRate)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _outBattery;
  modelica_metatype out_outBattery;
  tmp1 = mmc_unbox_real(_battery);
  tmp2 = mmc_unbox_real(_dischargeRate);
  _outBattery = omc_batteryMonitor(threadData, tmp1, tmp2);
  out_outBattery = mmc_mk_rcon(_outBattery);
  return out_outBattery;
}

DLLExport
modelica_real omc_charging(threadData_t *threadData, Prm _p, modelica_real _battery)
{
  modelica_real _new_battery;
  _tailrecursive: OMC_LABEL_UNUSED
  // _new_battery has no default value.
  _new_battery = _battery + _p._rechargeRate;

  if((_new_battery > _p._capacity))
  {
    _new_battery = _p._capacity;
  }
  _return: OMC_LABEL_UNUSED
  return _new_battery;
}
modelica_metatype boxptr_charging(threadData_t *threadData, modelica_metatype _p, modelica_metatype _battery)
{
  Prm tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_real tmp11;
  modelica_metatype tmpMeta12;
  modelica_real tmp13;
  modelica_metatype tmpMeta14;
  modelica_real tmp15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_real tmp19;
  modelica_metatype tmpMeta20;
  modelica_real tmp21;
  modelica_metatype tmpMeta22;
  modelica_real tmp23;
  modelica_metatype tmpMeta24;
  modelica_real tmp25;
  modelica_metatype tmpMeta26;
  modelica_real tmp27;
  modelica_metatype tmpMeta28;
  modelica_real tmp29;
  modelica_metatype tmpMeta30;
  modelica_real tmp31;
  modelica_metatype tmpMeta32;
  modelica_real tmp33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_real tmp37;
  modelica_metatype tmpMeta38;
  modelica_real tmp39;
  modelica_metatype tmpMeta40;
  modelica_real tmp41;
  modelica_metatype tmpMeta42;
  modelica_real tmp43;
  modelica_metatype tmpMeta44;
  modelica_real tmp45;
  modelica_metatype tmpMeta46;
  modelica_real tmp47;
  modelica_metatype tmpMeta48;
  modelica_real tmp49;
  modelica_metatype tmpMeta50;
  modelica_real tmp51;
  modelica_metatype tmpMeta52;
  modelica_real tmp53;
  modelica_metatype tmpMeta54;
  modelica_real tmp55;
  modelica_metatype tmpMeta56;
  modelica_real tmp57;
  modelica_metatype tmpMeta58;
  modelica_real tmp59;
  modelica_metatype tmpMeta60;
  modelica_real tmp61;
  modelica_metatype tmpMeta62;
  modelica_real tmp63;
  modelica_metatype tmpMeta64;
  modelica_real tmp65;
  modelica_metatype tmpMeta66;
  modelica_real tmp67;
  modelica_metatype tmpMeta68;
  modelica_integer tmp69;
  modelica_metatype tmpMeta70;
  modelica_real tmp71;
  modelica_real _new_battery;
  modelica_metatype out_new_battery;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._stop_simulation = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 3)));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmp1._fifo_len = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 4)));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmp1._msg_len = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 5)));
  tmp9 = mmc_unbox_real(tmpMeta8);
  tmp1._Tdrone = tmp9;
  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 6)));
  tmp11 = mmc_unbox_real(tmpMeta10);
  tmp1._Tcc = tmp11;
  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 7)));
  tmp13 = mmc_unbox_real(tmpMeta12);
  tmp1._Tm = tmp13;
  tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 8)));
  tmp15 = mmc_unbox_real(tmpMeta14);
  tmp1._monitor_start = tmp15;
  tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 9)));
  tmp17 = mmc_unbox_integer(tmpMeta16);
  tmp1._nDrones = tmp17;
  tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 10)));
  tmp19 = mmc_unbox_real(tmpMeta18);
  tmp1._cc_choice = tmp19;
  tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 11)));
  tmp21 = mmc_unbox_real(tmpMeta20);
  tmp1._p_worst = tmp21;
  tmpMeta22 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 12)));
  tmp23 = mmc_unbox_real(tmpMeta22);
  tmp1._p_recharge = tmp23;
  tmpMeta24 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 13)));
  tmp25 = mmc_unbox_real(tmpMeta24);
  tmp1._comm_timeout = tmp25;
  tmpMeta26 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 14)));
  tmp27 = mmc_unbox_real(tmpMeta26);
  tmp1._p_comm_error = tmp27;
  tmpMeta28 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 15)));
  tmp29 = mmc_unbox_real(tmpMeta28);
  tmp1._arrival_timeout = tmp29;
  tmpMeta30 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 16)));
  tmp31 = mmc_unbox_real(tmpMeta30);
  tmp1._dDistance = tmp31;
  tmpMeta32 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 17)));
  tmp33 = mmc_unbox_real(tmpMeta32);
  tmp1._arrivalThreshold = tmp33;
  tmpMeta34 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 18)));
  tmp1._flyZone = *((base_array_t*)tmpMeta34);
  tmpMeta35 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 19)));
  tmp1._docking_bay = *((base_array_t*)tmpMeta35);
  tmpMeta36 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 20)));
  tmp37 = mmc_unbox_real(tmpMeta36);
  tmp1._m = tmp37;
  tmpMeta38 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 21)));
  tmp39 = mmc_unbox_real(tmpMeta38);
  tmp1._maxSpeed = tmp39;
  tmpMeta40 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 22)));
  tmp41 = mmc_unbox_real(tmpMeta40);
  tmp1._horizontalODD = tmp41;
  tmpMeta42 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 23)));
  tmp43 = mmc_unbox_real(tmpMeta42);
  tmp1._verticalODD = tmp43;
  tmpMeta44 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 24)));
  tmp45 = mmc_unbox_real(tmpMeta44);
  tmp1._maxAngle = tmp45;
  tmpMeta46 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 25)));
  tmp47 = mmc_unbox_real(tmpMeta46);
  tmp1._minDistanceFromObs = tmp47;
  tmpMeta48 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 26)));
  tmp49 = mmc_unbox_real(tmpMeta48);
  tmp1._dangerRadius = tmp49;
  tmpMeta50 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 27)));
  tmp51 = mmc_unbox_real(tmpMeta50);
  tmp1._unita = tmp51;
  tmpMeta52 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 28)));
  tmp53 = mmc_unbox_real(tmpMeta52);
  tmp1._capacity = tmp53;
  tmpMeta54 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 29)));
  tmp55 = mmc_unbox_real(tmpMeta54);
  tmp1._batteryDischarge = tmp55;
  tmpMeta56 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 30)));
  tmp57 = mmc_unbox_real(tmpMeta56);
  tmp1._commDischarge = tmp57;
  tmpMeta58 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 31)));
  tmp59 = mmc_unbox_real(tmpMeta58);
  tmp1._rechargeRate = tmp59;
  tmpMeta60 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 32)));
  tmp61 = mmc_unbox_real(tmpMeta60);
  tmp1._dangerousBatteryPercentage = tmp61;
  tmpMeta62 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 33)));
  tmp63 = mmc_unbox_real(tmpMeta62);
  tmp1._dangerousBatteryLevel = tmp63;
  tmpMeta64 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 34)));
  tmp65 = mmc_unbox_real(tmpMeta64);
  tmp1._rechargedPercentage = tmp65;
  tmpMeta66 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 35)));
  tmp67 = mmc_unbox_real(tmpMeta66);
  tmp1._rechargedThreshold = tmp67;
  tmpMeta68 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 36)));
  tmp69 = mmc_unbox_integer(tmpMeta68);
  tmp1._nAreas = tmp69;
  tmpMeta70 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 37)));
  tmp1._areas = *((base_array_t*)tmpMeta70);tmp71 = mmc_unbox_real(_battery);
  _new_battery = omc_charging(threadData, tmp1, tmp71);
  out_new_battery = mmc_mk_rcon(_new_battery);
  return out_new_battery;
}

modelica_real omc_create__area(threadData_t *threadData, modelica_integer _id, modelica_real _low_x, modelica_real _up_x, modelica_real _low_y, modelica_real _up_y, modelica_real _low_z, modelica_real _up_z)
{
  int _id_ext;
  double _low_x_ext;
  double _up_x_ext;
  double _low_y_ext;
  double _up_y_ext;
  double _low_z_ext;
  double _up_z_ext;
  double _result_ext;
  modelica_real _result;
  _result = 0.0;
  _id_ext = (int)_id;

  _low_x_ext = (double)_low_x;

  _up_x_ext = (double)_up_x;

  _low_y_ext = (double)_low_y;

  _up_y_ext = (double)_up_y;

  _low_z_ext = (double)_low_z;

  _up_z_ext = (double)_up_z;
  _result_ext = create_area(_id_ext, _low_x_ext, _up_x_ext, _low_y_ext, _up_y_ext, _low_z_ext, _up_z_ext);
  _result = (modelica_real)_result_ext;
  return _result;
}
modelica_metatype boxptr_create__area(threadData_t *threadData, modelica_metatype _id, modelica_metatype _low_x, modelica_metatype _up_x, modelica_metatype _low_y, modelica_metatype _up_y, modelica_metatype _low_z, modelica_metatype _up_z)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real _result;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_integer(_id);
  tmp2 = mmc_unbox_real(_low_x);
  tmp3 = mmc_unbox_real(_up_x);
  tmp4 = mmc_unbox_real(_low_y);
  tmp5 = mmc_unbox_real(_up_y);
  tmp6 = mmc_unbox_real(_low_z);
  tmp7 = mmc_unbox_real(_up_z);
  _result = omc_create__area(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7);
  out_result = mmc_mk_rcon(_result);
  return out_result;
}

modelica_real omc_create__drone(threadData_t *threadData, modelica_integer _id)
{
  int _id_ext;
  double _result_ext;
  modelica_real _result;
  // _result has no default value.
  _id_ext = (int)_id;
  _result_ext = create_drone(_id_ext);
  _result = (modelica_real)_result_ext;
  return _result;
}
modelica_metatype boxptr_create__drone(threadData_t *threadData, modelica_metatype _id)
{
  modelica_integer tmp1;
  modelica_real _result;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_integer(_id);
  _result = omc_create__drone(threadData, tmp1);
  out_result = mmc_mk_rcon(_result);
  return out_result;
}

modelica_real omc_disconnect__from__db(threadData_t *threadData)
{
  double _result_ext;
  modelica_real _result;
  // _result has no default value.
  _result_ext = disconnect_from_db();
  _result = (modelica_real)_result_ext;
  return _result;
}
modelica_metatype boxptr_disconnect__from__db(threadData_t *threadData)
{
  modelica_real _result;
  modelica_metatype out_result;
  _result = omc_disconnect__from__db(threadData);
  out_result = mmc_mk_rcon(_result);
  return out_result;
}

modelica_integer omc_how__many__drones__in__area(threadData_t *threadData, modelica_integer _area_id, modelica_real _time_span)
{
  int _area_id_ext;
  double _time_span_ext;
  int _result_ext;
  modelica_integer _result;
  // _result has no default value.
  _area_id_ext = (int)_area_id;

  _time_span_ext = (double)_time_span;
  _result_ext = how_many_drones_in_area(_area_id_ext, _time_span_ext);
  _result = (modelica_integer)_result_ext;
  return _result;
}
modelica_metatype boxptr_how__many__drones__in__area(threadData_t *threadData, modelica_metatype _area_id, modelica_metatype _time_span)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_integer _result;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_integer(_area_id);
  tmp2 = mmc_unbox_real(_time_span);
  _result = omc_how__many__drones__in__area(threadData, tmp1, tmp2);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

modelica_real omc_myrandom(threadData_t *threadData)
{
  double _result_ext;
  modelica_real _result;
  // _result has no default value.
  _result_ext = myrandom();
  _result = (modelica_real)_result_ext;
  return _result;
}
modelica_metatype boxptr_myrandom(threadData_t *threadData)
{
  modelica_real _result;
  modelica_metatype out_result;
  _result = omc_myrandom(threadData);
  out_result = mmc_mk_rcon(_result);
  return out_result;
}

DLLExport
modelica_boolean omc_returnedHome(threadData_t *threadData, Prm _p, modelica_real _x, modelica_real _y, modelica_real _z)
{
  modelica_boolean _res;
  _tailrecursive: OMC_LABEL_UNUSED
  // _res has no default value.
  if((((fabs(_x - real_array_get(_p._docking_bay, 1, ((modelica_integer) 1))) < _p._arrivalThreshold) && (fabs(_y - real_array_get(_p._docking_bay, 1, ((modelica_integer) 2))) < _p._arrivalThreshold)) && (fabs(_z - real_array_get(_p._docking_bay, 1, ((modelica_integer) 3))) < _p._arrivalThreshold)))
  {
    _res = 1;
  }
  else
  {
    _res = 0;
  }
  _return: OMC_LABEL_UNUSED
  return _res;
}
modelica_metatype boxptr_returnedHome(threadData_t *threadData, modelica_metatype _p, modelica_metatype _x, modelica_metatype _y, modelica_metatype _z)
{
  Prm tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_real tmp11;
  modelica_metatype tmpMeta12;
  modelica_real tmp13;
  modelica_metatype tmpMeta14;
  modelica_real tmp15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_real tmp19;
  modelica_metatype tmpMeta20;
  modelica_real tmp21;
  modelica_metatype tmpMeta22;
  modelica_real tmp23;
  modelica_metatype tmpMeta24;
  modelica_real tmp25;
  modelica_metatype tmpMeta26;
  modelica_real tmp27;
  modelica_metatype tmpMeta28;
  modelica_real tmp29;
  modelica_metatype tmpMeta30;
  modelica_real tmp31;
  modelica_metatype tmpMeta32;
  modelica_real tmp33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_real tmp37;
  modelica_metatype tmpMeta38;
  modelica_real tmp39;
  modelica_metatype tmpMeta40;
  modelica_real tmp41;
  modelica_metatype tmpMeta42;
  modelica_real tmp43;
  modelica_metatype tmpMeta44;
  modelica_real tmp45;
  modelica_metatype tmpMeta46;
  modelica_real tmp47;
  modelica_metatype tmpMeta48;
  modelica_real tmp49;
  modelica_metatype tmpMeta50;
  modelica_real tmp51;
  modelica_metatype tmpMeta52;
  modelica_real tmp53;
  modelica_metatype tmpMeta54;
  modelica_real tmp55;
  modelica_metatype tmpMeta56;
  modelica_real tmp57;
  modelica_metatype tmpMeta58;
  modelica_real tmp59;
  modelica_metatype tmpMeta60;
  modelica_real tmp61;
  modelica_metatype tmpMeta62;
  modelica_real tmp63;
  modelica_metatype tmpMeta64;
  modelica_real tmp65;
  modelica_metatype tmpMeta66;
  modelica_real tmp67;
  modelica_metatype tmpMeta68;
  modelica_integer tmp69;
  modelica_metatype tmpMeta70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_boolean _res;
  modelica_metatype out_res;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._stop_simulation = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 3)));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmp1._fifo_len = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 4)));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmp1._msg_len = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 5)));
  tmp9 = mmc_unbox_real(tmpMeta8);
  tmp1._Tdrone = tmp9;
  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 6)));
  tmp11 = mmc_unbox_real(tmpMeta10);
  tmp1._Tcc = tmp11;
  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 7)));
  tmp13 = mmc_unbox_real(tmpMeta12);
  tmp1._Tm = tmp13;
  tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 8)));
  tmp15 = mmc_unbox_real(tmpMeta14);
  tmp1._monitor_start = tmp15;
  tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 9)));
  tmp17 = mmc_unbox_integer(tmpMeta16);
  tmp1._nDrones = tmp17;
  tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 10)));
  tmp19 = mmc_unbox_real(tmpMeta18);
  tmp1._cc_choice = tmp19;
  tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 11)));
  tmp21 = mmc_unbox_real(tmpMeta20);
  tmp1._p_worst = tmp21;
  tmpMeta22 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 12)));
  tmp23 = mmc_unbox_real(tmpMeta22);
  tmp1._p_recharge = tmp23;
  tmpMeta24 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 13)));
  tmp25 = mmc_unbox_real(tmpMeta24);
  tmp1._comm_timeout = tmp25;
  tmpMeta26 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 14)));
  tmp27 = mmc_unbox_real(tmpMeta26);
  tmp1._p_comm_error = tmp27;
  tmpMeta28 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 15)));
  tmp29 = mmc_unbox_real(tmpMeta28);
  tmp1._arrival_timeout = tmp29;
  tmpMeta30 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 16)));
  tmp31 = mmc_unbox_real(tmpMeta30);
  tmp1._dDistance = tmp31;
  tmpMeta32 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 17)));
  tmp33 = mmc_unbox_real(tmpMeta32);
  tmp1._arrivalThreshold = tmp33;
  tmpMeta34 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 18)));
  tmp1._flyZone = *((base_array_t*)tmpMeta34);
  tmpMeta35 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 19)));
  tmp1._docking_bay = *((base_array_t*)tmpMeta35);
  tmpMeta36 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 20)));
  tmp37 = mmc_unbox_real(tmpMeta36);
  tmp1._m = tmp37;
  tmpMeta38 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 21)));
  tmp39 = mmc_unbox_real(tmpMeta38);
  tmp1._maxSpeed = tmp39;
  tmpMeta40 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 22)));
  tmp41 = mmc_unbox_real(tmpMeta40);
  tmp1._horizontalODD = tmp41;
  tmpMeta42 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 23)));
  tmp43 = mmc_unbox_real(tmpMeta42);
  tmp1._verticalODD = tmp43;
  tmpMeta44 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 24)));
  tmp45 = mmc_unbox_real(tmpMeta44);
  tmp1._maxAngle = tmp45;
  tmpMeta46 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 25)));
  tmp47 = mmc_unbox_real(tmpMeta46);
  tmp1._minDistanceFromObs = tmp47;
  tmpMeta48 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 26)));
  tmp49 = mmc_unbox_real(tmpMeta48);
  tmp1._dangerRadius = tmp49;
  tmpMeta50 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 27)));
  tmp51 = mmc_unbox_real(tmpMeta50);
  tmp1._unita = tmp51;
  tmpMeta52 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 28)));
  tmp53 = mmc_unbox_real(tmpMeta52);
  tmp1._capacity = tmp53;
  tmpMeta54 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 29)));
  tmp55 = mmc_unbox_real(tmpMeta54);
  tmp1._batteryDischarge = tmp55;
  tmpMeta56 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 30)));
  tmp57 = mmc_unbox_real(tmpMeta56);
  tmp1._commDischarge = tmp57;
  tmpMeta58 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 31)));
  tmp59 = mmc_unbox_real(tmpMeta58);
  tmp1._rechargeRate = tmp59;
  tmpMeta60 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 32)));
  tmp61 = mmc_unbox_real(tmpMeta60);
  tmp1._dangerousBatteryPercentage = tmp61;
  tmpMeta62 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 33)));
  tmp63 = mmc_unbox_real(tmpMeta62);
  tmp1._dangerousBatteryLevel = tmp63;
  tmpMeta64 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 34)));
  tmp65 = mmc_unbox_real(tmpMeta64);
  tmp1._rechargedPercentage = tmp65;
  tmpMeta66 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 35)));
  tmp67 = mmc_unbox_real(tmpMeta66);
  tmp1._rechargedThreshold = tmp67;
  tmpMeta68 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 36)));
  tmp69 = mmc_unbox_integer(tmpMeta68);
  tmp1._nAreas = tmp69;
  tmpMeta70 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 37)));
  tmp1._areas = *((base_array_t*)tmpMeta70);tmp71 = mmc_unbox_real(_x);
  tmp72 = mmc_unbox_real(_y);
  tmp73 = mmc_unbox_real(_z);
  _res = omc_returnedHome(threadData, tmp1, tmp71, tmp72, tmp73);
  out_res = mmc_mk_icon(_res);
  return out_res;
}

DLLExport
void omc_setup__areas(threadData_t *threadData, Prm _p)
{
  modelica_integer _id;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  // _id has no default value.
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _p._nAreas;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _id;
    for(_id = ((modelica_integer) 1); in_range_integer(_id, tmp1, tmp3); _id += tmp2)
    {
      omc_create__area(threadData, _id, real_array_get(_p._areas, 2, _id, ((modelica_integer) 1)), real_array_get(_p._areas, 2, _id, ((modelica_integer) 2)), real_array_get(_p._areas, 2, _id, ((modelica_integer) 3)), real_array_get(_p._areas, 2, _id, ((modelica_integer) 4)), real_array_get(_p._areas, 2, _id, ((modelica_integer) 5)), real_array_get(_p._areas, 2, _id, ((modelica_integer) 6)));
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_setup__areas(threadData_t *threadData, modelica_metatype _p)
{
  Prm tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_real tmp11;
  modelica_metatype tmpMeta12;
  modelica_real tmp13;
  modelica_metatype tmpMeta14;
  modelica_real tmp15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_real tmp19;
  modelica_metatype tmpMeta20;
  modelica_real tmp21;
  modelica_metatype tmpMeta22;
  modelica_real tmp23;
  modelica_metatype tmpMeta24;
  modelica_real tmp25;
  modelica_metatype tmpMeta26;
  modelica_real tmp27;
  modelica_metatype tmpMeta28;
  modelica_real tmp29;
  modelica_metatype tmpMeta30;
  modelica_real tmp31;
  modelica_metatype tmpMeta32;
  modelica_real tmp33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_real tmp37;
  modelica_metatype tmpMeta38;
  modelica_real tmp39;
  modelica_metatype tmpMeta40;
  modelica_real tmp41;
  modelica_metatype tmpMeta42;
  modelica_real tmp43;
  modelica_metatype tmpMeta44;
  modelica_real tmp45;
  modelica_metatype tmpMeta46;
  modelica_real tmp47;
  modelica_metatype tmpMeta48;
  modelica_real tmp49;
  modelica_metatype tmpMeta50;
  modelica_real tmp51;
  modelica_metatype tmpMeta52;
  modelica_real tmp53;
  modelica_metatype tmpMeta54;
  modelica_real tmp55;
  modelica_metatype tmpMeta56;
  modelica_real tmp57;
  modelica_metatype tmpMeta58;
  modelica_real tmp59;
  modelica_metatype tmpMeta60;
  modelica_real tmp61;
  modelica_metatype tmpMeta62;
  modelica_real tmp63;
  modelica_metatype tmpMeta64;
  modelica_real tmp65;
  modelica_metatype tmpMeta66;
  modelica_real tmp67;
  modelica_metatype tmpMeta68;
  modelica_integer tmp69;
  modelica_metatype tmpMeta70;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._stop_simulation = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 3)));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmp1._fifo_len = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 4)));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmp1._msg_len = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 5)));
  tmp9 = mmc_unbox_real(tmpMeta8);
  tmp1._Tdrone = tmp9;
  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 6)));
  tmp11 = mmc_unbox_real(tmpMeta10);
  tmp1._Tcc = tmp11;
  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 7)));
  tmp13 = mmc_unbox_real(tmpMeta12);
  tmp1._Tm = tmp13;
  tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 8)));
  tmp15 = mmc_unbox_real(tmpMeta14);
  tmp1._monitor_start = tmp15;
  tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 9)));
  tmp17 = mmc_unbox_integer(tmpMeta16);
  tmp1._nDrones = tmp17;
  tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 10)));
  tmp19 = mmc_unbox_real(tmpMeta18);
  tmp1._cc_choice = tmp19;
  tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 11)));
  tmp21 = mmc_unbox_real(tmpMeta20);
  tmp1._p_worst = tmp21;
  tmpMeta22 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 12)));
  tmp23 = mmc_unbox_real(tmpMeta22);
  tmp1._p_recharge = tmp23;
  tmpMeta24 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 13)));
  tmp25 = mmc_unbox_real(tmpMeta24);
  tmp1._comm_timeout = tmp25;
  tmpMeta26 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 14)));
  tmp27 = mmc_unbox_real(tmpMeta26);
  tmp1._p_comm_error = tmp27;
  tmpMeta28 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 15)));
  tmp29 = mmc_unbox_real(tmpMeta28);
  tmp1._arrival_timeout = tmp29;
  tmpMeta30 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 16)));
  tmp31 = mmc_unbox_real(tmpMeta30);
  tmp1._dDistance = tmp31;
  tmpMeta32 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 17)));
  tmp33 = mmc_unbox_real(tmpMeta32);
  tmp1._arrivalThreshold = tmp33;
  tmpMeta34 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 18)));
  tmp1._flyZone = *((base_array_t*)tmpMeta34);
  tmpMeta35 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 19)));
  tmp1._docking_bay = *((base_array_t*)tmpMeta35);
  tmpMeta36 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 20)));
  tmp37 = mmc_unbox_real(tmpMeta36);
  tmp1._m = tmp37;
  tmpMeta38 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 21)));
  tmp39 = mmc_unbox_real(tmpMeta38);
  tmp1._maxSpeed = tmp39;
  tmpMeta40 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 22)));
  tmp41 = mmc_unbox_real(tmpMeta40);
  tmp1._horizontalODD = tmp41;
  tmpMeta42 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 23)));
  tmp43 = mmc_unbox_real(tmpMeta42);
  tmp1._verticalODD = tmp43;
  tmpMeta44 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 24)));
  tmp45 = mmc_unbox_real(tmpMeta44);
  tmp1._maxAngle = tmp45;
  tmpMeta46 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 25)));
  tmp47 = mmc_unbox_real(tmpMeta46);
  tmp1._minDistanceFromObs = tmp47;
  tmpMeta48 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 26)));
  tmp49 = mmc_unbox_real(tmpMeta48);
  tmp1._dangerRadius = tmp49;
  tmpMeta50 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 27)));
  tmp51 = mmc_unbox_real(tmpMeta50);
  tmp1._unita = tmp51;
  tmpMeta52 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 28)));
  tmp53 = mmc_unbox_real(tmpMeta52);
  tmp1._capacity = tmp53;
  tmpMeta54 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 29)));
  tmp55 = mmc_unbox_real(tmpMeta54);
  tmp1._batteryDischarge = tmp55;
  tmpMeta56 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 30)));
  tmp57 = mmc_unbox_real(tmpMeta56);
  tmp1._commDischarge = tmp57;
  tmpMeta58 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 31)));
  tmp59 = mmc_unbox_real(tmpMeta58);
  tmp1._rechargeRate = tmp59;
  tmpMeta60 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 32)));
  tmp61 = mmc_unbox_real(tmpMeta60);
  tmp1._dangerousBatteryPercentage = tmp61;
  tmpMeta62 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 33)));
  tmp63 = mmc_unbox_real(tmpMeta62);
  tmp1._dangerousBatteryLevel = tmp63;
  tmpMeta64 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 34)));
  tmp65 = mmc_unbox_real(tmpMeta64);
  tmp1._rechargedPercentage = tmp65;
  tmpMeta66 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 35)));
  tmp67 = mmc_unbox_real(tmpMeta66);
  tmp1._rechargedThreshold = tmp67;
  tmpMeta68 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 36)));
  tmp69 = mmc_unbox_integer(tmpMeta68);
  tmp1._nAreas = tmp69;
  tmpMeta70 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 37)));
  tmp1._areas = *((base_array_t*)tmpMeta70);
  omc_setup__areas(threadData, tmp1);
  return;
}

modelica_real omc_setup__db(threadData_t *threadData)
{
  double _result_ext;
  modelica_real _result;
  // _result has no default value.
  _result_ext = setup_db();
  _result = (modelica_real)_result_ext;
  return _result;
}
modelica_metatype boxptr_setup__db(threadData_t *threadData)
{
  modelica_real _result;
  modelica_metatype out_result;
  _result = omc_setup__db(threadData);
  out_result = mmc_mk_rcon(_result);
  return out_result;
}

DLLExport
void omc_setup__drones(threadData_t *threadData, Prm _p)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _p._nDrones;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      omc_create__drone(threadData, _i);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_setup__drones(threadData_t *threadData, modelica_metatype _p)
{
  Prm tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_real tmp11;
  modelica_metatype tmpMeta12;
  modelica_real tmp13;
  modelica_metatype tmpMeta14;
  modelica_real tmp15;
  modelica_metatype tmpMeta16;
  modelica_integer tmp17;
  modelica_metatype tmpMeta18;
  modelica_real tmp19;
  modelica_metatype tmpMeta20;
  modelica_real tmp21;
  modelica_metatype tmpMeta22;
  modelica_real tmp23;
  modelica_metatype tmpMeta24;
  modelica_real tmp25;
  modelica_metatype tmpMeta26;
  modelica_real tmp27;
  modelica_metatype tmpMeta28;
  modelica_real tmp29;
  modelica_metatype tmpMeta30;
  modelica_real tmp31;
  modelica_metatype tmpMeta32;
  modelica_real tmp33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_real tmp37;
  modelica_metatype tmpMeta38;
  modelica_real tmp39;
  modelica_metatype tmpMeta40;
  modelica_real tmp41;
  modelica_metatype tmpMeta42;
  modelica_real tmp43;
  modelica_metatype tmpMeta44;
  modelica_real tmp45;
  modelica_metatype tmpMeta46;
  modelica_real tmp47;
  modelica_metatype tmpMeta48;
  modelica_real tmp49;
  modelica_metatype tmpMeta50;
  modelica_real tmp51;
  modelica_metatype tmpMeta52;
  modelica_real tmp53;
  modelica_metatype tmpMeta54;
  modelica_real tmp55;
  modelica_metatype tmpMeta56;
  modelica_real tmp57;
  modelica_metatype tmpMeta58;
  modelica_real tmp59;
  modelica_metatype tmpMeta60;
  modelica_real tmp61;
  modelica_metatype tmpMeta62;
  modelica_real tmp63;
  modelica_metatype tmpMeta64;
  modelica_real tmp65;
  modelica_metatype tmpMeta66;
  modelica_real tmp67;
  modelica_metatype tmpMeta68;
  modelica_integer tmp69;
  modelica_metatype tmpMeta70;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._stop_simulation = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 3)));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmp1._fifo_len = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 4)));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmp1._msg_len = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 5)));
  tmp9 = mmc_unbox_real(tmpMeta8);
  tmp1._Tdrone = tmp9;
  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 6)));
  tmp11 = mmc_unbox_real(tmpMeta10);
  tmp1._Tcc = tmp11;
  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 7)));
  tmp13 = mmc_unbox_real(tmpMeta12);
  tmp1._Tm = tmp13;
  tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 8)));
  tmp15 = mmc_unbox_real(tmpMeta14);
  tmp1._monitor_start = tmp15;
  tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 9)));
  tmp17 = mmc_unbox_integer(tmpMeta16);
  tmp1._nDrones = tmp17;
  tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 10)));
  tmp19 = mmc_unbox_real(tmpMeta18);
  tmp1._cc_choice = tmp19;
  tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 11)));
  tmp21 = mmc_unbox_real(tmpMeta20);
  tmp1._p_worst = tmp21;
  tmpMeta22 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 12)));
  tmp23 = mmc_unbox_real(tmpMeta22);
  tmp1._p_recharge = tmp23;
  tmpMeta24 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 13)));
  tmp25 = mmc_unbox_real(tmpMeta24);
  tmp1._comm_timeout = tmp25;
  tmpMeta26 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 14)));
  tmp27 = mmc_unbox_real(tmpMeta26);
  tmp1._p_comm_error = tmp27;
  tmpMeta28 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 15)));
  tmp29 = mmc_unbox_real(tmpMeta28);
  tmp1._arrival_timeout = tmp29;
  tmpMeta30 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 16)));
  tmp31 = mmc_unbox_real(tmpMeta30);
  tmp1._dDistance = tmp31;
  tmpMeta32 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 17)));
  tmp33 = mmc_unbox_real(tmpMeta32);
  tmp1._arrivalThreshold = tmp33;
  tmpMeta34 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 18)));
  tmp1._flyZone = *((base_array_t*)tmpMeta34);
  tmpMeta35 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 19)));
  tmp1._docking_bay = *((base_array_t*)tmpMeta35);
  tmpMeta36 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 20)));
  tmp37 = mmc_unbox_real(tmpMeta36);
  tmp1._m = tmp37;
  tmpMeta38 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 21)));
  tmp39 = mmc_unbox_real(tmpMeta38);
  tmp1._maxSpeed = tmp39;
  tmpMeta40 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 22)));
  tmp41 = mmc_unbox_real(tmpMeta40);
  tmp1._horizontalODD = tmp41;
  tmpMeta42 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 23)));
  tmp43 = mmc_unbox_real(tmpMeta42);
  tmp1._verticalODD = tmp43;
  tmpMeta44 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 24)));
  tmp45 = mmc_unbox_real(tmpMeta44);
  tmp1._maxAngle = tmp45;
  tmpMeta46 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 25)));
  tmp47 = mmc_unbox_real(tmpMeta46);
  tmp1._minDistanceFromObs = tmp47;
  tmpMeta48 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 26)));
  tmp49 = mmc_unbox_real(tmpMeta48);
  tmp1._dangerRadius = tmp49;
  tmpMeta50 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 27)));
  tmp51 = mmc_unbox_real(tmpMeta50);
  tmp1._unita = tmp51;
  tmpMeta52 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 28)));
  tmp53 = mmc_unbox_real(tmpMeta52);
  tmp1._capacity = tmp53;
  tmpMeta54 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 29)));
  tmp55 = mmc_unbox_real(tmpMeta54);
  tmp1._batteryDischarge = tmp55;
  tmpMeta56 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 30)));
  tmp57 = mmc_unbox_real(tmpMeta56);
  tmp1._commDischarge = tmp57;
  tmpMeta58 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 31)));
  tmp59 = mmc_unbox_real(tmpMeta58);
  tmp1._rechargeRate = tmp59;
  tmpMeta60 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 32)));
  tmp61 = mmc_unbox_real(tmpMeta60);
  tmp1._dangerousBatteryPercentage = tmp61;
  tmpMeta62 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 33)));
  tmp63 = mmc_unbox_real(tmpMeta62);
  tmp1._dangerousBatteryLevel = tmp63;
  tmpMeta64 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 34)));
  tmp65 = mmc_unbox_real(tmpMeta64);
  tmp1._rechargedPercentage = tmp65;
  tmpMeta66 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 35)));
  tmp67 = mmc_unbox_real(tmpMeta66);
  tmp1._rechargedThreshold = tmp67;
  tmpMeta68 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 36)));
  tmp69 = mmc_unbox_integer(tmpMeta68);
  tmp1._nAreas = tmp69;
  tmpMeta70 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_p), 37)));
  tmp1._areas = *((base_array_t*)tmpMeta70);
  omc_setup__drones(threadData, tmp1);
  return;
}

modelica_real omc_update__drone__pos(threadData_t *threadData, modelica_integer _drone_id, modelica_real _position_time, real_array _pos)
{
  int _drone_id_ext;
  double _position_time_ext;
  double _pos_extlB1rB;
  double _pos_extlB2rB;
  double _pos_extlB3rB;
  double _result_ext;
  modelica_real _result;
  _result = 0.0;
  _drone_id_ext = (int)_drone_id;

  _position_time_ext = (double)_position_time;

  _pos_extlB1rB = (double)real_array_get(_pos, 1, ((modelica_integer) 1));

  _pos_extlB2rB = (double)real_array_get(_pos, 1, ((modelica_integer) 2));

  _pos_extlB3rB = (double)real_array_get(_pos, 1, ((modelica_integer) 3));
  _result_ext = update_drone_pos(_drone_id_ext, _position_time_ext, _pos_extlB1rB, _pos_extlB2rB, _pos_extlB3rB);
  _result = (modelica_real)_result_ext;
  return _result;
}
modelica_metatype boxptr_update__drone__pos(threadData_t *threadData, modelica_metatype _drone_id, modelica_metatype _position_time, modelica_metatype _pos)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_real _result;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_integer(_drone_id);
  tmp2 = mmc_unbox_real(_position_time);
  _result = omc_update__drone__pos(threadData, tmp1, tmp2, *((base_array_t*)_pos));
  out_result = mmc_mk_rcon(_result);
  return out_result;
}

modelica_string omc_Modelica_Utilities_Files_fullPathName(threadData_t *threadData, modelica_string _name)
{
  const char* _fullName_ext;
  modelica_string _fullName = NULL;
  // _fullName has no default value.
  _fullName_ext = ModelicaInternal_fullPathName(MMC_STRINGDATA(_name));
  _fullName = (modelica_string)mmc_mk_scon(_fullName_ext);
  return _fullName;
}

DLLExport
void omc_Modelica_Utilities_Files_remove(threadData_t *threadData, modelica_string _name)
{
  modelica_string _fullName = NULL;
  modelica_integer _fileType;
  _tailrecursive: OMC_LABEL_UNUSED
  // _fullName has no default value.
  _fileType = omc_Modelica_Utilities_Internal_FileSystem_stat(threadData, _name);
  if((((modelica_integer)_fileType == 2) || ((modelica_integer)_fileType == 4)))
  {
    omc_Modelica_Utilities_Internal_FileSystem_removeFile(threadData, _name);
  }
  else
  {
    if(((modelica_integer)_fileType == 3))
    {
      _fullName = omc_Modelica_Utilities_Files_fullPathName(threadData, _name);

      omc_Modelica_Utilities_Files_remove_removeDirectory(threadData, _fullName);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
void omc_Modelica_Utilities_Files_remove_removeDirectory(threadData_t *threadData, modelica_string _name)
{
  modelica_integer _lenName;
  modelica_string _name2 = NULL;
  _tailrecursive: OMC_LABEL_UNUSED
  _lenName = omc_Modelica_Utilities_Strings_length(threadData, _name);
  _name2 = ((stringEqual(omc_Modelica_Utilities_Strings_substring(threadData, _name, _lenName, _lenName), _OMC_LIT3))?omc_Modelica_Utilities_Strings_substring(threadData, _name, _lenName - ((modelica_integer) 1), _lenName - ((modelica_integer) 1)):_name);
  omc_Modelica_Utilities_Files_remove_removeDirectoryContents(threadData, omc_Modelica_Utilities_Internal_FileSystem_readDirectory(threadData, _name2, omc_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles(threadData, _name2)), _name2);

  omc_Modelica_Utilities_Internal_FileSystem_rmdir(threadData, _name2);
  _return: OMC_LABEL_UNUSED
  return;
}

DLLExport
void omc_Modelica_Utilities_Files_remove_removeDirectoryContents(threadData_t *threadData, string_array _fileNames, modelica_string _name2)
{
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp6 = size_of_dimension_base_array(_fileNames, ((modelica_integer) 1));
  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = tmp6;
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp3, tmp5); _i += tmp4)
    {
      tmpMeta1 = stringAppend(_name2,_OMC_LIT3);
      tmpMeta2 = stringAppend(tmpMeta1,string_array_get(_fileNames, 1, _i));
      omc_Modelica_Utilities_Files_remove(threadData, tmpMeta2);
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_Modelica_Utilities_Files_remove_removeDirectoryContents(threadData_t *threadData, modelica_metatype _fileNames, modelica_metatype _name2)
{
  omc_Modelica_Utilities_Files_remove_removeDirectoryContents(threadData, *((base_array_t*)_fileNames), _name2);
  return;
}

modelica_integer omc_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles(threadData_t *threadData, modelica_string _directory)
{
  int _result_ext;
  modelica_integer _result;
  // _result has no default value.
  _result_ext = ModelicaInternal_getNumberOfFiles(MMC_STRINGDATA(_directory));
  _result = (modelica_integer)_result_ext;
  return _result;
}
modelica_metatype boxptr_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles(threadData_t *threadData, modelica_metatype _directory)
{
  modelica_integer _result;
  modelica_metatype out_result;
  _result = omc_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles(threadData, _directory);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

string_array omc_Modelica_Utilities_Internal_FileSystem_readDirectory(threadData_t *threadData, modelica_string _directory, modelica_integer _nNames)
{
  int _nNames_ext;
  void *_names_c89;
  string_array _names;
  alloc_string_array(&(_names), 1, (_index_t)_nNames); // _names has no default value.
  _nNames_ext = (int)_nNames;

  fill_string_array(&_names, mmc_string_uninitialized);
  _names_c89 = (void*) data_of_string_c89_array(_names);
  ModelicaInternal_readDirectory(MMC_STRINGDATA(_directory), _nNames_ext, (const char**) _names_c89);
  unpack_string_array(&_names, _names_c89);
  return _names;
}
modelica_metatype boxptr_Modelica_Utilities_Internal_FileSystem_readDirectory(threadData_t *threadData, modelica_metatype _directory, modelica_metatype _nNames)
{
  modelica_integer tmp1;
  string_array _names;
  modelica_metatype out_names;
  tmp1 = mmc_unbox_integer(_nNames);
  _names = omc_Modelica_Utilities_Internal_FileSystem_readDirectory(threadData, _directory, tmp1);
  out_names = mmc_mk_modelica_array(_names);
  return out_names;
}

void omc_Modelica_Utilities_Internal_FileSystem_removeFile(threadData_t *threadData, modelica_string _fileName)
{
  ModelicaInternal_removeFile(MMC_STRINGDATA(_fileName));
  return;
}

void omc_Modelica_Utilities_Internal_FileSystem_rmdir(threadData_t *threadData, modelica_string _directoryName)
{
  ModelicaInternal_rmdir(MMC_STRINGDATA(_directoryName));
  return;
}

modelica_integer omc_Modelica_Utilities_Internal_FileSystem_stat(threadData_t *threadData, modelica_string _name)
{
  int _fileType_ext;
  modelica_integer _fileType;
  // _fileType has no default value.
  _fileType_ext = ModelicaInternal_stat(MMC_STRINGDATA(_name));
  _fileType = (modelica_integer)_fileType_ext;
  return _fileType;
}
modelica_metatype boxptr_Modelica_Utilities_Internal_FileSystem_stat(threadData_t *threadData, modelica_metatype _name)
{
  modelica_integer _fileType;
  modelica_metatype out_fileType;
  _fileType = omc_Modelica_Utilities_Internal_FileSystem_stat(threadData, _name);
  out_fileType = mmc_mk_icon(_fileType);
  return out_fileType;
}

void omc_Modelica_Utilities_Streams_print(threadData_t *threadData, modelica_string _string, modelica_string _fileName)
{
  ModelicaInternal_print(MMC_STRINGDATA(_string), MMC_STRINGDATA(_fileName));
  return;
}

modelica_integer omc_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_string _string)
{
  int _result_ext;
  modelica_integer _result;
  // _result has no default value.
  _result_ext = ModelicaStrings_length(MMC_STRINGDATA(_string));
  _result = (modelica_integer)_result_ext;
  return _result;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_metatype _string)
{
  modelica_integer _result;
  modelica_metatype out_result;
  _result = omc_Modelica_Utilities_Strings_length(threadData, _string);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

modelica_string omc_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_integer _endIndex)
{
  int _startIndex_ext;
  int _endIndex_ext;
  const char* _result_ext;
  modelica_string _result = NULL;
  // _result has no default value.
  _startIndex_ext = (int)_startIndex;

  _endIndex_ext = (int)_endIndex;
  _result_ext = ModelicaStrings_substring(MMC_STRINGDATA(_string), _startIndex_ext, _endIndex_ext);
  _result = (modelica_string)mmc_mk_scon(_result_ext);
  return _result;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _endIndex)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_string _result = NULL;
  tmp1 = mmc_unbox_integer(_startIndex);
  tmp2 = mmc_unbox_integer(_endIndex);
  _result = omc_Modelica_Utilities_Strings_substring(threadData, _string, tmp1, tmp2);
  /* skip box _result; String */
  return _result;
}

#ifdef __cplusplus
}
#endif
