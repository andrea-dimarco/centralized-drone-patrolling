#ifndef System__H
#define System__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  modelica_real _g;
  modelica_real _pi;
  modelica_integer _nAreas;
  real_array _areas;
} K;
extern struct record_description K__desc;

void K_construct_p(threadData_t *threadData, void* v_ths );
#define K_construct(td, ths ) K_construct_p(td, &ths )
void K_copy_p(void* v_src, void* v_dst);
#define K_copy(src,dst) K_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// K omc_K(threadData_t *threadData , modelica_real in_g, modelica_real in_pi, modelica_integer in_nAreas, real_array in_areas);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void K_copy_to_vars_p(void* v_src , modelica_real* in_g, modelica_real* in_pi, modelica_integer* in_nAreas, real_array* in_areas);
// #define K_copy_to_vars(src,...) K_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t K_array;
#define alloc_K_array(dst,ndims,...) generic_array_create(NULL, dst, K_construct_p, ndims, sizeof(K), __VA_ARGS__)
#define K_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, K_copy_p, sizeof(K))
#define K_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, K_copy_p, sizeof(K))
#define K_array_get(src,ndims,...)   (*(K*)(generic_array_get(&src, sizeof(K), __VA_ARGS__)))
#define K_set(dst,val,...)           generic_array_set(&dst, &val, K_copy_p, sizeof(K), __VA_ARGS__)

typedef struct {
  modelica_real _stop_simulation;
  modelica_real _Tdrone;
  modelica_real _Tcc;
  modelica_real _Tm;
  modelica_real _monitor_start;
  modelica_real _cc_choice;
  modelica_real _p_worst;
  modelica_real _comm_timeout;
  modelica_real _p_comm_error;
  modelica_real _arrival_timeout;
  modelica_integer _nDrones;
  modelica_real _dDistance;
  modelica_real _arrivalThreshold;
  real_array _flyZone;
  real_array _docking_bay;
  modelica_real _m;
  modelica_real _maxSpeed;
  modelica_real _horizontalODD;
  modelica_real _verticalODD;
  modelica_real _maxAngle;
  modelica_real _dangerRadius;
  modelica_real _minDistanceFromObs;
  modelica_real _capacity;
  modelica_real _batteryDischarge;
  modelica_real _commDischarge;
  modelica_real _rechargeRate;
  modelica_real _dangerousBatteryLevel;
} Prm;
extern struct record_description Prm__desc;

void Prm_construct_p(threadData_t *threadData, void* v_ths );
#define Prm_construct(td, ths ) Prm_construct_p(td, &ths )
void Prm_copy_p(void* v_src, void* v_dst);
#define Prm_copy(src,dst) Prm_copy_p(&src, &dst)

// This function should eventualy replace the default 'modelica' record constructor funcition
// that omc used to generate, i.e., replace functionBodyRecordConstructor template.
// Prm omc_Prm(threadData_t *threadData , modelica_real in_stop_simulation, modelica_real in_Tdrone, modelica_real in_Tcc, modelica_real in_Tm, modelica_real in_monitor_start, modelica_real in_cc_choice, modelica_real in_p_worst, modelica_real in_comm_timeout, modelica_real in_p_comm_error, modelica_real in_arrival_timeout, modelica_integer in_nDrones, modelica_real in_dDistance, modelica_real in_arrivalThreshold, real_array in_flyZone, real_array in_docking_bay, modelica_real in_m, modelica_real in_maxSpeed, modelica_real in_horizontalODD, modelica_real in_verticalODD, modelica_real in_maxAngle, modelica_real in_dangerRadius, modelica_real in_minDistanceFromObs, modelica_real in_capacity, modelica_real in_batteryDischarge, modelica_real in_commDischarge, modelica_real in_rechargeRate, modelica_real in_dangerousBatteryLevel);

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each memeber individualy.
// void Prm_copy_to_vars_p(void* v_src , modelica_real* in_stop_simulation, modelica_real* in_Tdrone, modelica_real* in_Tcc, modelica_real* in_Tm, modelica_real* in_monitor_start, modelica_real* in_cc_choice, modelica_real* in_p_worst, modelica_real* in_comm_timeout, modelica_real* in_p_comm_error, modelica_real* in_arrival_timeout, modelica_integer* in_nDrones, modelica_real* in_dDistance, modelica_real* in_arrivalThreshold, real_array* in_flyZone, real_array* in_docking_bay, modelica_real* in_m, modelica_real* in_maxSpeed, modelica_real* in_horizontalODD, modelica_real* in_verticalODD, modelica_real* in_maxAngle, modelica_real* in_dangerRadius, modelica_real* in_minDistanceFromObs, modelica_real* in_capacity, modelica_real* in_batteryDischarge, modelica_real* in_commDischarge, modelica_real* in_rechargeRate, modelica_real* in_dangerousBatteryLevel);
// #define Prm_copy_to_vars(src,...) Prm_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Prm_array;
#define alloc_Prm_array(dst,ndims,...) generic_array_create(NULL, dst, Prm_construct_p, ndims, sizeof(Prm), __VA_ARGS__)
#define Prm_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Prm_copy_p, sizeof(Prm))
#define Prm_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Prm_copy_p, sizeof(Prm))
#define Prm_array_get(src,ndims,...)   (*(Prm*)(generic_array_get(&src, sizeof(Prm), __VA_ARGS__)))
#define Prm_set(dst,val,...)           generic_array_set(&dst, &val, Prm_copy_p, sizeof(Prm), __VA_ARGS__)

DLLExport
K omc_K (threadData_t *threadData);

DLLExport
modelica_metatype boxptr_K(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_K,2,0) {(void*) boxptr_K,0}};
#define boxvar_K MMC_REFSTRUCTLIT(boxvar_lit_K)


DLLExport
Prm omc_Prm (threadData_t *threadData, modelica_real omc_stop_simulation, modelica_real omc_Tdrone, modelica_real omc_Tcc, modelica_real omc_Tm, modelica_real omc_monitor_start, modelica_real omc_cc_choice, modelica_real omc_p_worst, modelica_real omc_comm_timeout, modelica_real omc_p_comm_error, modelica_real omc_arrival_timeout, modelica_integer omc_nDrones, modelica_real omc_dDistance, modelica_real omc_arrivalThreshold, real_array omc_flyZone, real_array omc_docking_bay, modelica_real omc_m, modelica_real omc_maxSpeed, modelica_real omc_horizontalODD, modelica_real omc_verticalODD, modelica_real omc_maxAngle, modelica_real omc_dangerRadius, modelica_real omc_minDistanceFromObs, modelica_real omc_capacity, modelica_real omc_batteryDischarge, modelica_real omc_commDischarge, modelica_real omc_rechargeRate, modelica_real omc_dangerousBatteryLevel);

DLLExport
modelica_metatype boxptr_Prm(threadData_t *threadData, modelica_metatype _stop_simulation, modelica_metatype _Tdrone, modelica_metatype _Tcc, modelica_metatype _Tm, modelica_metatype _monitor_start, modelica_metatype _cc_choice, modelica_metatype _p_worst, modelica_metatype _comm_timeout, modelica_metatype _p_comm_error, modelica_metatype _arrival_timeout, modelica_metatype _nDrones, modelica_metatype _dDistance, modelica_metatype _arrivalThreshold, modelica_metatype _flyZone, modelica_metatype _docking_bay, modelica_metatype _m, modelica_metatype _maxSpeed, modelica_metatype _horizontalODD, modelica_metatype _verticalODD, modelica_metatype _maxAngle, modelica_metatype _dangerRadius, modelica_metatype _minDistanceFromObs, modelica_metatype _capacity, modelica_metatype _batteryDischarge, modelica_metatype _commDischarge, modelica_metatype _rechargeRate, modelica_metatype _dangerousBatteryLevel);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Prm,2,0) {(void*) boxptr_Prm,0}};
#define boxvar_Prm MMC_REFSTRUCTLIT(boxvar_lit_Prm)


DLLExport
modelica_real omc_areaCenter(threadData_t *threadData, K _k, modelica_integer _id, modelica_real *out_areaY, modelica_real *out_areaZ);
DLLExport
modelica_metatype boxptr_areaCenter(threadData_t *threadData, modelica_metatype _k, modelica_metatype _id, modelica_metatype *out_areaY, modelica_metatype *out_areaZ);
static const MMC_DEFSTRUCTLIT(boxvar_lit_areaCenter,2,0) {(void*) boxptr_areaCenter,0}};
#define boxvar_areaCenter MMC_REFSTRUCTLIT(boxvar_lit_areaCenter)


DLLExport
modelica_real omc_batteryMonitor(threadData_t *threadData, modelica_real _battery, modelica_real _dischargeRate);
DLLExport
modelica_metatype boxptr_batteryMonitor(threadData_t *threadData, modelica_metatype _battery, modelica_metatype _dischargeRate);
static const MMC_DEFSTRUCTLIT(boxvar_lit_batteryMonitor,2,0) {(void*) boxptr_batteryMonitor,0}};
#define boxvar_batteryMonitor MMC_REFSTRUCTLIT(boxvar_lit_batteryMonitor)


DLLExport
modelica_real omc_charging(threadData_t *threadData, Prm _p, modelica_real _battery);
DLLExport
modelica_metatype boxptr_charging(threadData_t *threadData, modelica_metatype _p, modelica_metatype _battery);
static const MMC_DEFSTRUCTLIT(boxvar_lit_charging,2,0) {(void*) boxptr_charging,0}};
#define boxvar_charging MMC_REFSTRUCTLIT(boxvar_lit_charging)


DLLExport
modelica_real omc_create__area(threadData_t *threadData, modelica_integer _id, modelica_real _low_x, modelica_real _up_x, modelica_real _low_y, modelica_real _up_y, modelica_real _low_z, modelica_real _up_z);
DLLExport
modelica_metatype boxptr_create__area(threadData_t *threadData, modelica_metatype _id, modelica_metatype _low_x, modelica_metatype _up_x, modelica_metatype _low_y, modelica_metatype _up_y, modelica_metatype _low_z, modelica_metatype _up_z);
static const MMC_DEFSTRUCTLIT(boxvar_lit_create__area,2,0) {(void*) boxptr_create__area,0}};
#define boxvar_create__area MMC_REFSTRUCTLIT(boxvar_lit_create__area)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern double create_area(int (*_id*), double (*_low_x*), double (*_up_x*), double (*_low_y*), double (*_up_y*), double (*_low_z*), double (*_up_z*));
 */


DLLExport
modelica_real omc_create__drone(threadData_t *threadData, modelica_integer _id);
DLLExport
modelica_metatype boxptr_create__drone(threadData_t *threadData, modelica_metatype _id);
static const MMC_DEFSTRUCTLIT(boxvar_lit_create__drone,2,0) {(void*) boxptr_create__drone,0}};
#define boxvar_create__drone MMC_REFSTRUCTLIT(boxvar_lit_create__drone)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern double create_drone(int (*_id*));
 */


DLLExport
modelica_integer omc_how__many__drones__in__area(threadData_t *threadData, modelica_integer _id, modelica_real _time_span);
DLLExport
modelica_metatype boxptr_how__many__drones__in__area(threadData_t *threadData, modelica_metatype _id, modelica_metatype _time_span);
static const MMC_DEFSTRUCTLIT(boxvar_lit_how__many__drones__in__area,2,0) {(void*) boxptr_how__many__drones__in__area,0}};
#define boxvar_how__many__drones__in__area MMC_REFSTRUCTLIT(boxvar_lit_how__many__drones__in__area)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int how_many_drones_in_area(int (*_id*), double (*_time_span*));
 */


DLLExport
modelica_real omc_myrandom(threadData_t *threadData);
DLLExport
modelica_metatype boxptr_myrandom(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_myrandom,2,0) {(void*) boxptr_myrandom,0}};
#define boxvar_myrandom MMC_REFSTRUCTLIT(boxvar_lit_myrandom)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern double myrandom();
 */


DLLExport
modelica_boolean omc_returnedHome(threadData_t *threadData, Prm _p, modelica_real _x, modelica_real _y, modelica_real _z);
DLLExport
modelica_metatype boxptr_returnedHome(threadData_t *threadData, modelica_metatype _p, modelica_metatype _x, modelica_metatype _y, modelica_metatype _z);
static const MMC_DEFSTRUCTLIT(boxvar_lit_returnedHome,2,0) {(void*) boxptr_returnedHome,0}};
#define boxvar_returnedHome MMC_REFSTRUCTLIT(boxvar_lit_returnedHome)


DLLExport
void omc_setup__areas(threadData_t *threadData, Prm _p);
DLLExport
void boxptr_setup__areas(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_setup__areas,2,0) {(void*) boxptr_setup__areas,0}};
#define boxvar_setup__areas MMC_REFSTRUCTLIT(boxvar_lit_setup__areas)


DLLExport
modelica_real omc_setup__db(threadData_t *threadData);
DLLExport
modelica_metatype boxptr_setup__db(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_setup__db,2,0) {(void*) boxptr_setup__db,0}};
#define boxvar_setup__db MMC_REFSTRUCTLIT(boxvar_lit_setup__db)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern double setup_db();
 */


DLLExport
void omc_setup__drones(threadData_t *threadData, Prm _p);
DLLExport
void boxptr_setup__drones(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_setup__drones,2,0) {(void*) boxptr_setup__drones,0}};
#define boxvar_setup__drones MMC_REFSTRUCTLIT(boxvar_lit_setup__drones)


DLLExport
modelica_real omc_update__drone__pos(threadData_t *threadData, modelica_integer _drone_id, modelica_real _position_time, real_array _pos);
DLLExport
modelica_metatype boxptr_update__drone__pos(threadData_t *threadData, modelica_metatype _drone_id, modelica_metatype _position_time, modelica_metatype _pos);
static const MMC_DEFSTRUCTLIT(boxvar_lit_update__drone__pos,2,0) {(void*) boxptr_update__drone__pos,0}};
#define boxvar_update__drone__pos MMC_REFSTRUCTLIT(boxvar_lit_update__drone__pos)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern double update_drone_pos(int (*_drone_id*), double (*_position_time*), double (*real_array_get(_pos, 1, ((modelica_integer) 1))*), double (*real_array_get(_pos, 1, ((modelica_integer) 2))*), double (*real_array_get(_pos, 1, ((modelica_integer) 3))*));
 */


DLLExport
modelica_string omc_Modelica_Utilities_Files_fullPathName(threadData_t *threadData, modelica_string _name);
#define boxptr_Modelica_Utilities_Files_fullPathName omc_Modelica_Utilities_Files_fullPathName
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Files_fullPathName,2,0) {(void*) boxptr_Modelica_Utilities_Files_fullPathName,0}};
#define boxvar_Modelica_Utilities_Files_fullPathName MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Files_fullPathName)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern const char* ModelicaInternal_fullPathName(const char* (*_name*));
 */


DLLExport
void omc_Modelica_Utilities_Files_remove(threadData_t *threadData, modelica_string _name);
#define boxptr_Modelica_Utilities_Files_remove omc_Modelica_Utilities_Files_remove
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Files_remove,2,0) {(void*) boxptr_Modelica_Utilities_Files_remove,0}};
#define boxvar_Modelica_Utilities_Files_remove MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Files_remove)


DLLExport
void omc_Modelica_Utilities_Files_remove_removeDirectory(threadData_t *threadData, modelica_string _name);
#define boxptr_Modelica_Utilities_Files_remove_removeDirectory omc_Modelica_Utilities_Files_remove_removeDirectory
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Files_remove_removeDirectory,2,0) {(void*) boxptr_Modelica_Utilities_Files_remove_removeDirectory,0}};
#define boxvar_Modelica_Utilities_Files_remove_removeDirectory MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Files_remove_removeDirectory)


DLLExport
void omc_Modelica_Utilities_Files_remove_removeDirectoryContents(threadData_t *threadData, string_array _fileNames, modelica_string _name2);
DLLExport
void boxptr_Modelica_Utilities_Files_remove_removeDirectoryContents(threadData_t *threadData, modelica_metatype _fileNames, modelica_metatype _name2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Files_remove_removeDirectoryContents,2,0) {(void*) boxptr_Modelica_Utilities_Files_remove_removeDirectoryContents,0}};
#define boxvar_Modelica_Utilities_Files_remove_removeDirectoryContents MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Files_remove_removeDirectoryContents)


DLLExport
modelica_integer omc_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles(threadData_t *threadData, modelica_string _directory);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles(threadData_t *threadData, modelica_metatype _directory);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles,2,0) {(void*) boxptr_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles,0}};
#define boxvar_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_getNumberOfFiles)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int ModelicaInternal_getNumberOfFiles(const char* (*_directory*));
 */


DLLExport
string_array omc_Modelica_Utilities_Internal_FileSystem_readDirectory(threadData_t *threadData, modelica_string _directory, modelica_integer _nNames);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Internal_FileSystem_readDirectory(threadData_t *threadData, modelica_metatype _directory, modelica_metatype _nNames);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_readDirectory,2,0) {(void*) boxptr_Modelica_Utilities_Internal_FileSystem_readDirectory,0}};
#define boxvar_Modelica_Utilities_Internal_FileSystem_readDirectory MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_readDirectory)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void ModelicaInternal_readDirectory(const char* (*_directory*), int (*_nNames*), const char** (*_names*));
 */


DLLExport
void omc_Modelica_Utilities_Internal_FileSystem_removeFile(threadData_t *threadData, modelica_string _fileName);
#define boxptr_Modelica_Utilities_Internal_FileSystem_removeFile omc_Modelica_Utilities_Internal_FileSystem_removeFile
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_removeFile,2,0) {(void*) boxptr_Modelica_Utilities_Internal_FileSystem_removeFile,0}};
#define boxvar_Modelica_Utilities_Internal_FileSystem_removeFile MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_removeFile)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void ModelicaInternal_removeFile(const char* (*_fileName*));
 */


DLLExport
void omc_Modelica_Utilities_Internal_FileSystem_rmdir(threadData_t *threadData, modelica_string _directoryName);
#define boxptr_Modelica_Utilities_Internal_FileSystem_rmdir omc_Modelica_Utilities_Internal_FileSystem_rmdir
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_rmdir,2,0) {(void*) boxptr_Modelica_Utilities_Internal_FileSystem_rmdir,0}};
#define boxvar_Modelica_Utilities_Internal_FileSystem_rmdir MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_rmdir)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void ModelicaInternal_rmdir(const char* (*_directoryName*));
 */


DLLExport
modelica_integer omc_Modelica_Utilities_Internal_FileSystem_stat(threadData_t *threadData, modelica_string _name);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Internal_FileSystem_stat(threadData_t *threadData, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_stat,2,0) {(void*) boxptr_Modelica_Utilities_Internal_FileSystem_stat,0}};
#define boxvar_Modelica_Utilities_Internal_FileSystem_stat MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Internal_FileSystem_stat)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int ModelicaInternal_stat(const char* (*_name*));
 */


DLLExport
void omc_Modelica_Utilities_Streams_print(threadData_t *threadData, modelica_string _string, modelica_string _fileName);
#define boxptr_Modelica_Utilities_Streams_print omc_Modelica_Utilities_Streams_print
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_print,2,0) {(void*) boxptr_Modelica_Utilities_Streams_print,0}};
#define boxvar_Modelica_Utilities_Streams_print MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_print)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void ModelicaInternal_print(const char* (*_string*), const char* (*_fileName*));
 */


DLLExport
modelica_integer omc_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_string _string);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_metatype _string);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_length,2,0) {(void*) boxptr_Modelica_Utilities_Strings_length,0}};
#define boxvar_Modelica_Utilities_Strings_length MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_length)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int ModelicaStrings_length(const char* (*_string*));
 */


DLLExport
modelica_string omc_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_integer _endIndex);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _endIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_substring,2,0) {(void*) boxptr_Modelica_Utilities_Strings_substring,0}};
#define boxvar_Modelica_Utilities_Strings_substring MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_substring)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern const char* ModelicaStrings_substring(const char* (*_string*), int (*_startIndex*), int (*_endIndex*));
 */
#include "System_model.h"


#ifdef __cplusplus
}
#endif
#endif

