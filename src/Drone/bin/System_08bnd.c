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
equation index: 503
type: SIMPLE_ASSIGN
cc.choice = p.cc_choice
*/
OMC_DISABLE_OPT
static void System_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  (data->simulationInfo->realParameter[3]/* cc.choice PARAM */)  = (data->simulationInfo->realParameter[1916]/* p.cc_choice PARAM */) ;
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
cc.Tcc = p.Tcc
*/
OMC_DISABLE_OPT
static void System_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  (data->simulationInfo->realParameter[0]/* cc.Tcc PARAM */)  = (data->simulationInfo->realParameter[1861]/* p.Tcc PARAM */) ;
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
cc.comm_timeout = p.comm_timeout
*/
OMC_DISABLE_OPT
static void System_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  (data->simulationInfo->realParameter[4]/* cc.comm_timeout PARAM */)  = (data->simulationInfo->realParameter[1918]/* p.comm_timeout PARAM */) ;
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
cc.p_worst = p.p_worst
*/
OMC_DISABLE_OPT
static void System_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  (data->simulationInfo->realParameter[89]/* cc.p_worst PARAM */)  = (data->simulationInfo->realParameter[1937]/* p.p_worst PARAM */) ;
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
cc.arrival_timeout = p.arrival_timeout
*/
OMC_DISABLE_OPT
static void System_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  (data->simulationInfo->realParameter[2]/* cc.arrival_timeout PARAM */)  = (data->simulationInfo->realParameter[1913]/* p.arrival_timeout PARAM */) ;
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
cc.arrivalThreshold = p.arrivalThreshold
*/
OMC_DISABLE_OPT
static void System_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  (data->simulationInfo->realParameter[1]/* cc.arrivalThreshold PARAM */)  = (data->simulationInfo->realParameter[1912]/* p.arrivalThreshold PARAM */) ;
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
cc.p_recharge = p.p_recharge
*/
OMC_DISABLE_OPT
static void System_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  (data->simulationInfo->realParameter[88]/* cc.p_recharge PARAM */)  = (data->simulationInfo->realParameter[1936]/* p.p_recharge PARAM */) ;
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[8,6] = drone_to_cc[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  (data->simulationInfo->realParameter[1649]/* drone_to_cc[4].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[1717]/* drone_to_cc[4].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[8,5] = 0.5 * drone_to_cc[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  (data->simulationInfo->realParameter[1648]/* drone_to_cc[4].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1715]/* drone_to_cc[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[8,4] = drone_to_cc[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  (data->simulationInfo->realParameter[1647]/* drone_to_cc[4].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[1716]/* drone_to_cc[4].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[8,3] = 0.5 * drone_to_cc[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  (data->simulationInfo->realParameter[1646]/* drone_to_cc[4].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1716]/* drone_to_cc[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 514
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[8,2] = drone_to_cc[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  (data->simulationInfo->realParameter[1645]/* drone_to_cc[4].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[1715]/* drone_to_cc[4].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 515
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[8,1] = 0.5 * drone_to_cc[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  (data->simulationInfo->realParameter[1644]/* drone_to_cc[4].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1715]/* drone_to_cc[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 516
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[7,6] = drone_to_cc[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  (data->simulationInfo->realParameter[1643]/* drone_to_cc[4].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[1717]/* drone_to_cc[4].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 517
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[7,5] = 0.5 * drone_to_cc[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  (data->simulationInfo->realParameter[1642]/* drone_to_cc[4].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1715]/* drone_to_cc[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[7,4] = drone_to_cc[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  (data->simulationInfo->realParameter[1641]/* drone_to_cc[4].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[1716]/* drone_to_cc[4].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 519
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[7,3] = 0.5 * drone_to_cc[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  (data->simulationInfo->realParameter[1640]/* drone_to_cc[4].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1716]/* drone_to_cc[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 520
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[7,2] = 0.5 * drone_to_cc[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  (data->simulationInfo->realParameter[1639]/* drone_to_cc[4].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1715]/* drone_to_cc[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 521
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[6,6] = drone_to_cc[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  (data->simulationInfo->realParameter[1637]/* drone_to_cc[4].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[1717]/* drone_to_cc[4].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 522
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[6,5] = 0.5 * drone_to_cc[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  (data->simulationInfo->realParameter[1636]/* drone_to_cc[4].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1715]/* drone_to_cc[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 523
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[6,4] = 0.5 * drone_to_cc[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  (data->simulationInfo->realParameter[1635]/* drone_to_cc[4].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1716]/* drone_to_cc[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 524
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[6,2] = drone_to_cc[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  (data->simulationInfo->realParameter[1633]/* drone_to_cc[4].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[1715]/* drone_to_cc[4].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 525
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[6,1] = 0.5 * drone_to_cc[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  (data->simulationInfo->realParameter[1632]/* drone_to_cc[4].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1715]/* drone_to_cc[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 526
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[5,6] = drone_to_cc[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  (data->simulationInfo->realParameter[1631]/* drone_to_cc[4].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[1717]/* drone_to_cc[4].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 527
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[5,5] = 0.5 * drone_to_cc[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  (data->simulationInfo->realParameter[1630]/* drone_to_cc[4].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1715]/* drone_to_cc[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 528
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[5,4] = 0.5 * drone_to_cc[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  (data->simulationInfo->realParameter[1629]/* drone_to_cc[4].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1716]/* drone_to_cc[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 529
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[5,2] = 0.5 * drone_to_cc[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  (data->simulationInfo->realParameter[1627]/* drone_to_cc[4].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1715]/* drone_to_cc[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 530
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[4,6] = 0.5 * drone_to_cc[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  (data->simulationInfo->realParameter[1625]/* drone_to_cc[4].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1717]/* drone_to_cc[4].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 531
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[4,4] = drone_to_cc[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  (data->simulationInfo->realParameter[1623]/* drone_to_cc[4].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[1716]/* drone_to_cc[4].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 532
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[4,3] = 0.5 * drone_to_cc[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  (data->simulationInfo->realParameter[1622]/* drone_to_cc[4].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1716]/* drone_to_cc[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 533
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[4,2] = drone_to_cc[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  (data->simulationInfo->realParameter[1621]/* drone_to_cc[4].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[1715]/* drone_to_cc[4].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 534
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[4,1] = 0.5 * drone_to_cc[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  (data->simulationInfo->realParameter[1620]/* drone_to_cc[4].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1715]/* drone_to_cc[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 535
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[3,6] = 0.5 * drone_to_cc[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  (data->simulationInfo->realParameter[1619]/* drone_to_cc[4].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1717]/* drone_to_cc[4].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 536
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[3,4] = drone_to_cc[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  (data->simulationInfo->realParameter[1617]/* drone_to_cc[4].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[1716]/* drone_to_cc[4].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 537
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[3,3] = 0.5 * drone_to_cc[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  (data->simulationInfo->realParameter[1616]/* drone_to_cc[4].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1716]/* drone_to_cc[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 538
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[3,2] = 0.5 * drone_to_cc[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  (data->simulationInfo->realParameter[1615]/* drone_to_cc[4].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1715]/* drone_to_cc[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 539
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[2,6] = 0.5 * drone_to_cc[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  (data->simulationInfo->realParameter[1613]/* drone_to_cc[4].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1717]/* drone_to_cc[4].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 540
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[2,4] = 0.5 * drone_to_cc[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  (data->simulationInfo->realParameter[1611]/* drone_to_cc[4].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1716]/* drone_to_cc[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 541
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[2,2] = drone_to_cc[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  (data->simulationInfo->realParameter[1609]/* drone_to_cc[4].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[1715]/* drone_to_cc[4].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 542
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[2,1] = 0.5 * drone_to_cc[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  (data->simulationInfo->realParameter[1608]/* drone_to_cc[4].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1715]/* drone_to_cc[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[1,6] = 0.5 * drone_to_cc[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  (data->simulationInfo->realParameter[1607]/* drone_to_cc[4].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1717]/* drone_to_cc[4].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[1,4] = 0.5 * drone_to_cc[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  (data->simulationInfo->realParameter[1605]/* drone_to_cc[4].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1716]/* drone_to_cc[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
drone_to_cc[4].p.areas[1,2] = 0.5 * drone_to_cc[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  (data->simulationInfo->realParameter[1603]/* drone_to_cc[4].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1715]/* drone_to_cc[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
drone_to_cc[4].p.capacity = 18000.0 * drone_to_cc[4].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  (data->simulationInfo->realParameter[1665]/* drone_to_cc[4].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[1773]/* drone_to_cc[4].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
drone_to_cc[4].p.rechargedThreshold = drone_to_cc[4].p.capacity * drone_to_cc[4].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  (data->simulationInfo->realParameter[1765]/* drone_to_cc[4].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[1665]/* drone_to_cc[4].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1761]/* drone_to_cc[4].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
drone_to_cc[4].p.dangerousBatteryLevel = drone_to_cc[4].p.capacity * drone_to_cc[4].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  (data->simulationInfo->realParameter[1689]/* drone_to_cc[4].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[1665]/* drone_to_cc[4].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1693]/* drone_to_cc[4].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
drone_to_cc[4].p.rechargeRate = 2.5 * drone_to_cc[4].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  (data->simulationInfo->realParameter[1757]/* drone_to_cc[4].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[1773]/* drone_to_cc[4].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
drone_to_cc[4].p.commDischarge = 5.0 * drone_to_cc[4].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  (data->simulationInfo->realParameter[1673]/* drone_to_cc[4].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[1773]/* drone_to_cc[4].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
drone_to_cc[4].p.batteryDischarge = drone_to_cc[4].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  (data->simulationInfo->realParameter[1661]/* drone_to_cc[4].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[1773]/* drone_to_cc[4].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
drone_to_cc[4].p.dangerRadius = 3.0 + drone_to_cc[4].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  (data->simulationInfo->realParameter[1685]/* drone_to_cc[4].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[1737]/* drone_to_cc[4].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[8,6] = drone_to_cc[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  (data->simulationInfo->realParameter[1601]/* drone_to_cc[3].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[1714]/* drone_to_cc[3].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[8,5] = 0.5 * drone_to_cc[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  (data->simulationInfo->realParameter[1600]/* drone_to_cc[3].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1712]/* drone_to_cc[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[8,4] = drone_to_cc[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  (data->simulationInfo->realParameter[1599]/* drone_to_cc[3].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[1713]/* drone_to_cc[3].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 558
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[8,3] = 0.5 * drone_to_cc[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  (data->simulationInfo->realParameter[1598]/* drone_to_cc[3].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1713]/* drone_to_cc[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[8,2] = drone_to_cc[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  (data->simulationInfo->realParameter[1597]/* drone_to_cc[3].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[1712]/* drone_to_cc[3].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[8,1] = 0.5 * drone_to_cc[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  (data->simulationInfo->realParameter[1596]/* drone_to_cc[3].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1712]/* drone_to_cc[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[7,6] = drone_to_cc[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  (data->simulationInfo->realParameter[1595]/* drone_to_cc[3].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[1714]/* drone_to_cc[3].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[7,5] = 0.5 * drone_to_cc[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  (data->simulationInfo->realParameter[1594]/* drone_to_cc[3].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1712]/* drone_to_cc[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[7,4] = drone_to_cc[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  (data->simulationInfo->realParameter[1593]/* drone_to_cc[3].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[1713]/* drone_to_cc[3].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 564
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[7,3] = 0.5 * drone_to_cc[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  (data->simulationInfo->realParameter[1592]/* drone_to_cc[3].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1713]/* drone_to_cc[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[7,2] = 0.5 * drone_to_cc[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  (data->simulationInfo->realParameter[1591]/* drone_to_cc[3].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1712]/* drone_to_cc[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 566
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[6,6] = drone_to_cc[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  (data->simulationInfo->realParameter[1589]/* drone_to_cc[3].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[1714]/* drone_to_cc[3].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 567
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[6,5] = 0.5 * drone_to_cc[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  (data->simulationInfo->realParameter[1588]/* drone_to_cc[3].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1712]/* drone_to_cc[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[6,4] = 0.5 * drone_to_cc[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  (data->simulationInfo->realParameter[1587]/* drone_to_cc[3].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1713]/* drone_to_cc[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[6,2] = drone_to_cc[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  (data->simulationInfo->realParameter[1585]/* drone_to_cc[3].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[1712]/* drone_to_cc[3].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 570
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[6,1] = 0.5 * drone_to_cc[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  (data->simulationInfo->realParameter[1584]/* drone_to_cc[3].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1712]/* drone_to_cc[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[5,6] = drone_to_cc[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  (data->simulationInfo->realParameter[1583]/* drone_to_cc[3].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[1714]/* drone_to_cc[3].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 572
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[5,5] = 0.5 * drone_to_cc[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  (data->simulationInfo->realParameter[1582]/* drone_to_cc[3].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1712]/* drone_to_cc[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[5,4] = 0.5 * drone_to_cc[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  (data->simulationInfo->realParameter[1581]/* drone_to_cc[3].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1713]/* drone_to_cc[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[5,2] = 0.5 * drone_to_cc[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  (data->simulationInfo->realParameter[1579]/* drone_to_cc[3].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1712]/* drone_to_cc[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[4,6] = 0.5 * drone_to_cc[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  (data->simulationInfo->realParameter[1577]/* drone_to_cc[3].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1714]/* drone_to_cc[3].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[4,4] = drone_to_cc[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  (data->simulationInfo->realParameter[1575]/* drone_to_cc[3].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[1713]/* drone_to_cc[3].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[4,3] = 0.5 * drone_to_cc[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  (data->simulationInfo->realParameter[1574]/* drone_to_cc[3].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1713]/* drone_to_cc[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[4,2] = drone_to_cc[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  (data->simulationInfo->realParameter[1573]/* drone_to_cc[3].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[1712]/* drone_to_cc[3].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 579
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[4,1] = 0.5 * drone_to_cc[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  (data->simulationInfo->realParameter[1572]/* drone_to_cc[3].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1712]/* drone_to_cc[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 580
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[3,6] = 0.5 * drone_to_cc[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  (data->simulationInfo->realParameter[1571]/* drone_to_cc[3].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1714]/* drone_to_cc[3].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[3,4] = drone_to_cc[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  (data->simulationInfo->realParameter[1569]/* drone_to_cc[3].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[1713]/* drone_to_cc[3].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 582
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[3,3] = 0.5 * drone_to_cc[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  (data->simulationInfo->realParameter[1568]/* drone_to_cc[3].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1713]/* drone_to_cc[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 583
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[3,2] = 0.5 * drone_to_cc[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  (data->simulationInfo->realParameter[1567]/* drone_to_cc[3].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1712]/* drone_to_cc[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 584
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[2,6] = 0.5 * drone_to_cc[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  (data->simulationInfo->realParameter[1565]/* drone_to_cc[3].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1714]/* drone_to_cc[3].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[2,4] = 0.5 * drone_to_cc[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  (data->simulationInfo->realParameter[1563]/* drone_to_cc[3].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1713]/* drone_to_cc[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[2,2] = drone_to_cc[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  (data->simulationInfo->realParameter[1561]/* drone_to_cc[3].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[1712]/* drone_to_cc[3].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 587
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[2,1] = 0.5 * drone_to_cc[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  (data->simulationInfo->realParameter[1560]/* drone_to_cc[3].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1712]/* drone_to_cc[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 588
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[1,6] = 0.5 * drone_to_cc[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  (data->simulationInfo->realParameter[1559]/* drone_to_cc[3].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1714]/* drone_to_cc[3].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 589
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[1,4] = 0.5 * drone_to_cc[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  (data->simulationInfo->realParameter[1557]/* drone_to_cc[3].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1713]/* drone_to_cc[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 590
type: SIMPLE_ASSIGN
drone_to_cc[3].p.areas[1,2] = 0.5 * drone_to_cc[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  (data->simulationInfo->realParameter[1555]/* drone_to_cc[3].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1712]/* drone_to_cc[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 591
type: SIMPLE_ASSIGN
drone_to_cc[3].p.capacity = 18000.0 * drone_to_cc[3].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  (data->simulationInfo->realParameter[1664]/* drone_to_cc[3].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[1772]/* drone_to_cc[3].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 592
type: SIMPLE_ASSIGN
drone_to_cc[3].p.rechargedThreshold = drone_to_cc[3].p.capacity * drone_to_cc[3].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  (data->simulationInfo->realParameter[1764]/* drone_to_cc[3].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[1664]/* drone_to_cc[3].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1760]/* drone_to_cc[3].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 593
type: SIMPLE_ASSIGN
drone_to_cc[3].p.dangerousBatteryLevel = drone_to_cc[3].p.capacity * drone_to_cc[3].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  (data->simulationInfo->realParameter[1688]/* drone_to_cc[3].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[1664]/* drone_to_cc[3].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1692]/* drone_to_cc[3].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 594
type: SIMPLE_ASSIGN
drone_to_cc[3].p.rechargeRate = 2.5 * drone_to_cc[3].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  (data->simulationInfo->realParameter[1756]/* drone_to_cc[3].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[1772]/* drone_to_cc[3].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 595
type: SIMPLE_ASSIGN
drone_to_cc[3].p.commDischarge = 5.0 * drone_to_cc[3].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  (data->simulationInfo->realParameter[1672]/* drone_to_cc[3].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[1772]/* drone_to_cc[3].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 596
type: SIMPLE_ASSIGN
drone_to_cc[3].p.batteryDischarge = drone_to_cc[3].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  (data->simulationInfo->realParameter[1660]/* drone_to_cc[3].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[1772]/* drone_to_cc[3].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
drone_to_cc[3].p.dangerRadius = 3.0 + drone_to_cc[3].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  (data->simulationInfo->realParameter[1684]/* drone_to_cc[3].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[1736]/* drone_to_cc[3].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 600
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[8,6] = drone_to_cc[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  (data->simulationInfo->realParameter[1553]/* drone_to_cc[2].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[1711]/* drone_to_cc[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[8,5] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  (data->simulationInfo->realParameter[1552]/* drone_to_cc[2].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1709]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 602
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[8,4] = drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  (data->simulationInfo->realParameter[1551]/* drone_to_cc[2].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[1710]/* drone_to_cc[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 603
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[8,3] = 0.5 * drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  (data->simulationInfo->realParameter[1550]/* drone_to_cc[2].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1710]/* drone_to_cc[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 604
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[8,2] = drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  (data->simulationInfo->realParameter[1549]/* drone_to_cc[2].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[1709]/* drone_to_cc[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 605
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[8,1] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  (data->simulationInfo->realParameter[1548]/* drone_to_cc[2].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1709]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 606
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[7,6] = drone_to_cc[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  (data->simulationInfo->realParameter[1547]/* drone_to_cc[2].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[1711]/* drone_to_cc[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 607
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[7,5] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  (data->simulationInfo->realParameter[1546]/* drone_to_cc[2].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1709]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 608
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[7,4] = drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  (data->simulationInfo->realParameter[1545]/* drone_to_cc[2].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[1710]/* drone_to_cc[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 609
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[7,3] = 0.5 * drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  (data->simulationInfo->realParameter[1544]/* drone_to_cc[2].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1710]/* drone_to_cc[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 610
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[7,2] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  (data->simulationInfo->realParameter[1543]/* drone_to_cc[2].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1709]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 611
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[6,6] = drone_to_cc[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  (data->simulationInfo->realParameter[1541]/* drone_to_cc[2].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[1711]/* drone_to_cc[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 612
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[6,5] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  (data->simulationInfo->realParameter[1540]/* drone_to_cc[2].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1709]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 613
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[6,4] = 0.5 * drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  (data->simulationInfo->realParameter[1539]/* drone_to_cc[2].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1710]/* drone_to_cc[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 614
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[6,2] = drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  (data->simulationInfo->realParameter[1537]/* drone_to_cc[2].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[1709]/* drone_to_cc[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 615
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[6,1] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  (data->simulationInfo->realParameter[1536]/* drone_to_cc[2].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1709]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 616
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[5,6] = drone_to_cc[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  (data->simulationInfo->realParameter[1535]/* drone_to_cc[2].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[1711]/* drone_to_cc[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 617
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[5,5] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  (data->simulationInfo->realParameter[1534]/* drone_to_cc[2].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1709]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 618
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[5,4] = 0.5 * drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  (data->simulationInfo->realParameter[1533]/* drone_to_cc[2].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1710]/* drone_to_cc[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 619
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[5,2] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  (data->simulationInfo->realParameter[1531]/* drone_to_cc[2].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1709]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 620
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[4,6] = 0.5 * drone_to_cc[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  (data->simulationInfo->realParameter[1529]/* drone_to_cc[2].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1711]/* drone_to_cc[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 621
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[4,4] = drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  (data->simulationInfo->realParameter[1527]/* drone_to_cc[2].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[1710]/* drone_to_cc[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 622
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[4,3] = 0.5 * drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  (data->simulationInfo->realParameter[1526]/* drone_to_cc[2].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1710]/* drone_to_cc[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 623
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[4,2] = drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  (data->simulationInfo->realParameter[1525]/* drone_to_cc[2].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[1709]/* drone_to_cc[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 624
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[4,1] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  (data->simulationInfo->realParameter[1524]/* drone_to_cc[2].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1709]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 625
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[3,6] = 0.5 * drone_to_cc[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  (data->simulationInfo->realParameter[1523]/* drone_to_cc[2].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1711]/* drone_to_cc[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 626
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[3,4] = drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  (data->simulationInfo->realParameter[1521]/* drone_to_cc[2].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[1710]/* drone_to_cc[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 627
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[3,3] = 0.5 * drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  (data->simulationInfo->realParameter[1520]/* drone_to_cc[2].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1710]/* drone_to_cc[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 628
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[3,2] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  (data->simulationInfo->realParameter[1519]/* drone_to_cc[2].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1709]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 629
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[2,6] = 0.5 * drone_to_cc[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  (data->simulationInfo->realParameter[1517]/* drone_to_cc[2].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1711]/* drone_to_cc[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 630
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[2,4] = 0.5 * drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  (data->simulationInfo->realParameter[1515]/* drone_to_cc[2].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1710]/* drone_to_cc[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 631
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[2,2] = drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  (data->simulationInfo->realParameter[1513]/* drone_to_cc[2].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[1709]/* drone_to_cc[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 632
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[2,1] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  (data->simulationInfo->realParameter[1512]/* drone_to_cc[2].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1709]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 633
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[1,6] = 0.5 * drone_to_cc[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  (data->simulationInfo->realParameter[1511]/* drone_to_cc[2].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1711]/* drone_to_cc[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 634
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[1,4] = 0.5 * drone_to_cc[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  (data->simulationInfo->realParameter[1509]/* drone_to_cc[2].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1710]/* drone_to_cc[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 635
type: SIMPLE_ASSIGN
drone_to_cc[2].p.areas[1,2] = 0.5 * drone_to_cc[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  (data->simulationInfo->realParameter[1507]/* drone_to_cc[2].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1709]/* drone_to_cc[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 636
type: SIMPLE_ASSIGN
drone_to_cc[2].p.capacity = 18000.0 * drone_to_cc[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  (data->simulationInfo->realParameter[1663]/* drone_to_cc[2].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[1771]/* drone_to_cc[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 637
type: SIMPLE_ASSIGN
drone_to_cc[2].p.rechargedThreshold = drone_to_cc[2].p.capacity * drone_to_cc[2].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  (data->simulationInfo->realParameter[1763]/* drone_to_cc[2].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[1663]/* drone_to_cc[2].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1759]/* drone_to_cc[2].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 638
type: SIMPLE_ASSIGN
drone_to_cc[2].p.dangerousBatteryLevel = drone_to_cc[2].p.capacity * drone_to_cc[2].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  (data->simulationInfo->realParameter[1687]/* drone_to_cc[2].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[1663]/* drone_to_cc[2].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1691]/* drone_to_cc[2].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 639
type: SIMPLE_ASSIGN
drone_to_cc[2].p.rechargeRate = 2.5 * drone_to_cc[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  (data->simulationInfo->realParameter[1755]/* drone_to_cc[2].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[1771]/* drone_to_cc[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 640
type: SIMPLE_ASSIGN
drone_to_cc[2].p.commDischarge = 5.0 * drone_to_cc[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  (data->simulationInfo->realParameter[1671]/* drone_to_cc[2].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[1771]/* drone_to_cc[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 641
type: SIMPLE_ASSIGN
drone_to_cc[2].p.batteryDischarge = drone_to_cc[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  (data->simulationInfo->realParameter[1659]/* drone_to_cc[2].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[1771]/* drone_to_cc[2].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 642
type: SIMPLE_ASSIGN
drone_to_cc[2].p.dangerRadius = 3.0 + drone_to_cc[2].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  (data->simulationInfo->realParameter[1683]/* drone_to_cc[2].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[1735]/* drone_to_cc[2].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 645
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,6] = drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  (data->simulationInfo->realParameter[1505]/* drone_to_cc[1].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[1708]/* drone_to_cc[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 646
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,5] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  (data->simulationInfo->realParameter[1504]/* drone_to_cc[1].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1706]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 647
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,4] = drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  (data->simulationInfo->realParameter[1503]/* drone_to_cc[1].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[1707]/* drone_to_cc[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 648
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,3] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  (data->simulationInfo->realParameter[1502]/* drone_to_cc[1].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1707]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 649
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,2] = drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  (data->simulationInfo->realParameter[1501]/* drone_to_cc[1].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[1706]/* drone_to_cc[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 650
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[8,1] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  (data->simulationInfo->realParameter[1500]/* drone_to_cc[1].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1706]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 651
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[7,6] = drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  (data->simulationInfo->realParameter[1499]/* drone_to_cc[1].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[1708]/* drone_to_cc[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 652
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[7,5] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  (data->simulationInfo->realParameter[1498]/* drone_to_cc[1].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1706]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 653
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[7,4] = drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  (data->simulationInfo->realParameter[1497]/* drone_to_cc[1].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[1707]/* drone_to_cc[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 654
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[7,3] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  (data->simulationInfo->realParameter[1496]/* drone_to_cc[1].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1707]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 655
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[7,2] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  (data->simulationInfo->realParameter[1495]/* drone_to_cc[1].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1706]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 656
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[6,6] = drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  (data->simulationInfo->realParameter[1493]/* drone_to_cc[1].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[1708]/* drone_to_cc[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 657
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[6,5] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  (data->simulationInfo->realParameter[1492]/* drone_to_cc[1].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1706]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 658
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[6,4] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  (data->simulationInfo->realParameter[1491]/* drone_to_cc[1].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1707]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 659
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[6,2] = drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  (data->simulationInfo->realParameter[1489]/* drone_to_cc[1].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[1706]/* drone_to_cc[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 660
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[6,1] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  (data->simulationInfo->realParameter[1488]/* drone_to_cc[1].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1706]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 661
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[5,6] = drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  (data->simulationInfo->realParameter[1487]/* drone_to_cc[1].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[1708]/* drone_to_cc[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 662
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[5,5] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  (data->simulationInfo->realParameter[1486]/* drone_to_cc[1].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1706]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 663
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[5,4] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  (data->simulationInfo->realParameter[1485]/* drone_to_cc[1].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1707]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 664
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[5,2] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  (data->simulationInfo->realParameter[1483]/* drone_to_cc[1].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1706]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 665
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[4,6] = 0.5 * drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  (data->simulationInfo->realParameter[1481]/* drone_to_cc[1].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1708]/* drone_to_cc[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 666
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[4,4] = drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  (data->simulationInfo->realParameter[1479]/* drone_to_cc[1].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[1707]/* drone_to_cc[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 667
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[4,3] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  (data->simulationInfo->realParameter[1478]/* drone_to_cc[1].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1707]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 668
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[4,2] = drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  (data->simulationInfo->realParameter[1477]/* drone_to_cc[1].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[1706]/* drone_to_cc[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 669
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[4,1] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  (data->simulationInfo->realParameter[1476]/* drone_to_cc[1].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1706]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 670
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[3,6] = 0.5 * drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  (data->simulationInfo->realParameter[1475]/* drone_to_cc[1].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1708]/* drone_to_cc[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 671
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[3,4] = drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  (data->simulationInfo->realParameter[1473]/* drone_to_cc[1].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[1707]/* drone_to_cc[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 672
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[3,3] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  (data->simulationInfo->realParameter[1472]/* drone_to_cc[1].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1707]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 673
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[3,2] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  (data->simulationInfo->realParameter[1471]/* drone_to_cc[1].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1706]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 674
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[2,6] = 0.5 * drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  (data->simulationInfo->realParameter[1469]/* drone_to_cc[1].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1708]/* drone_to_cc[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 675
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[2,4] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  (data->simulationInfo->realParameter[1467]/* drone_to_cc[1].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1707]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 676
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[2,2] = drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  (data->simulationInfo->realParameter[1465]/* drone_to_cc[1].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[1706]/* drone_to_cc[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 677
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[2,1] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  (data->simulationInfo->realParameter[1464]/* drone_to_cc[1].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1706]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 678
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[1,6] = 0.5 * drone_to_cc[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  (data->simulationInfo->realParameter[1463]/* drone_to_cc[1].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1708]/* drone_to_cc[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 679
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[1,4] = 0.5 * drone_to_cc[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  (data->simulationInfo->realParameter[1461]/* drone_to_cc[1].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1707]/* drone_to_cc[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 680
type: SIMPLE_ASSIGN
drone_to_cc[1].p.areas[1,2] = 0.5 * drone_to_cc[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  (data->simulationInfo->realParameter[1459]/* drone_to_cc[1].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1706]/* drone_to_cc[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 681
type: SIMPLE_ASSIGN
drone_to_cc[1].p.capacity = 18000.0 * drone_to_cc[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  (data->simulationInfo->realParameter[1662]/* drone_to_cc[1].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[1770]/* drone_to_cc[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 682
type: SIMPLE_ASSIGN
drone_to_cc[1].p.rechargedThreshold = drone_to_cc[1].p.capacity * drone_to_cc[1].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  (data->simulationInfo->realParameter[1762]/* drone_to_cc[1].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[1662]/* drone_to_cc[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1758]/* drone_to_cc[1].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 683
type: SIMPLE_ASSIGN
drone_to_cc[1].p.dangerousBatteryLevel = drone_to_cc[1].p.capacity * drone_to_cc[1].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  (data->simulationInfo->realParameter[1686]/* drone_to_cc[1].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[1662]/* drone_to_cc[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1690]/* drone_to_cc[1].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 684
type: SIMPLE_ASSIGN
drone_to_cc[1].p.rechargeRate = 2.5 * drone_to_cc[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  (data->simulationInfo->realParameter[1754]/* drone_to_cc[1].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[1770]/* drone_to_cc[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 685
type: SIMPLE_ASSIGN
drone_to_cc[1].p.commDischarge = 5.0 * drone_to_cc[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  (data->simulationInfo->realParameter[1670]/* drone_to_cc[1].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[1770]/* drone_to_cc[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 686
type: SIMPLE_ASSIGN
drone_to_cc[1].p.batteryDischarge = drone_to_cc[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  (data->simulationInfo->realParameter[1658]/* drone_to_cc[1].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[1770]/* drone_to_cc[1].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 687
type: SIMPLE_ASSIGN
drone_to_cc[1].p.dangerRadius = 3.0 + drone_to_cc[1].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  (data->simulationInfo->realParameter[1682]/* drone_to_cc[1].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[1734]/* drone_to_cc[1].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 690
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[8,6] = cc_to_drone[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  (data->simulationInfo->realParameter[293]/* cc_to_drone[4].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[361]/* cc_to_drone[4].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 691
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[8,5] = 0.5 * cc_to_drone[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  (data->simulationInfo->realParameter[292]/* cc_to_drone[4].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[359]/* cc_to_drone[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 692
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[8,4] = cc_to_drone[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  (data->simulationInfo->realParameter[291]/* cc_to_drone[4].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[360]/* cc_to_drone[4].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 693
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[8,3] = 0.5 * cc_to_drone[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  (data->simulationInfo->realParameter[290]/* cc_to_drone[4].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[360]/* cc_to_drone[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 694
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[8,2] = cc_to_drone[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  (data->simulationInfo->realParameter[289]/* cc_to_drone[4].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[359]/* cc_to_drone[4].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 695
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[8,1] = 0.5 * cc_to_drone[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  (data->simulationInfo->realParameter[288]/* cc_to_drone[4].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[359]/* cc_to_drone[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 696
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[7,6] = cc_to_drone[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  (data->simulationInfo->realParameter[287]/* cc_to_drone[4].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[361]/* cc_to_drone[4].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 697
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[7,5] = 0.5 * cc_to_drone[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  (data->simulationInfo->realParameter[286]/* cc_to_drone[4].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[359]/* cc_to_drone[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 698
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[7,4] = cc_to_drone[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  (data->simulationInfo->realParameter[285]/* cc_to_drone[4].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[360]/* cc_to_drone[4].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 699
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[7,3] = 0.5 * cc_to_drone[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  (data->simulationInfo->realParameter[284]/* cc_to_drone[4].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[360]/* cc_to_drone[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 700
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[7,2] = 0.5 * cc_to_drone[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
  (data->simulationInfo->realParameter[283]/* cc_to_drone[4].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[359]/* cc_to_drone[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 701
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[6,6] = cc_to_drone[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,701};
  (data->simulationInfo->realParameter[281]/* cc_to_drone[4].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[361]/* cc_to_drone[4].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 702
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[6,5] = 0.5 * cc_to_drone[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,702};
  (data->simulationInfo->realParameter[280]/* cc_to_drone[4].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[359]/* cc_to_drone[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 703
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[6,4] = 0.5 * cc_to_drone[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  (data->simulationInfo->realParameter[279]/* cc_to_drone[4].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[360]/* cc_to_drone[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 704
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[6,2] = cc_to_drone[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  (data->simulationInfo->realParameter[277]/* cc_to_drone[4].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[359]/* cc_to_drone[4].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 705
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[6,1] = 0.5 * cc_to_drone[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,705};
  (data->simulationInfo->realParameter[276]/* cc_to_drone[4].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[359]/* cc_to_drone[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 706
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[5,6] = cc_to_drone[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  (data->simulationInfo->realParameter[275]/* cc_to_drone[4].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[361]/* cc_to_drone[4].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 707
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[5,5] = 0.5 * cc_to_drone[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  (data->simulationInfo->realParameter[274]/* cc_to_drone[4].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[359]/* cc_to_drone[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 708
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[5,4] = 0.5 * cc_to_drone[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  (data->simulationInfo->realParameter[273]/* cc_to_drone[4].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[360]/* cc_to_drone[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 709
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[5,2] = 0.5 * cc_to_drone[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,709};
  (data->simulationInfo->realParameter[271]/* cc_to_drone[4].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[359]/* cc_to_drone[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 710
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[4,6] = 0.5 * cc_to_drone[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,710};
  (data->simulationInfo->realParameter[269]/* cc_to_drone[4].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[361]/* cc_to_drone[4].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 711
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[4,4] = cc_to_drone[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,711};
  (data->simulationInfo->realParameter[267]/* cc_to_drone[4].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[360]/* cc_to_drone[4].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 712
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[4,3] = 0.5 * cc_to_drone[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  (data->simulationInfo->realParameter[266]/* cc_to_drone[4].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[360]/* cc_to_drone[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 713
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[4,2] = cc_to_drone[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  (data->simulationInfo->realParameter[265]/* cc_to_drone[4].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[359]/* cc_to_drone[4].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 714
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[4,1] = 0.5 * cc_to_drone[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,714};
  (data->simulationInfo->realParameter[264]/* cc_to_drone[4].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[359]/* cc_to_drone[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 715
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[3,6] = 0.5 * cc_to_drone[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,715};
  (data->simulationInfo->realParameter[263]/* cc_to_drone[4].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[361]/* cc_to_drone[4].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 716
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[3,4] = cc_to_drone[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  (data->simulationInfo->realParameter[261]/* cc_to_drone[4].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[360]/* cc_to_drone[4].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 717
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[3,3] = 0.5 * cc_to_drone[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  (data->simulationInfo->realParameter[260]/* cc_to_drone[4].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[360]/* cc_to_drone[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 718
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[3,2] = 0.5 * cc_to_drone[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  (data->simulationInfo->realParameter[259]/* cc_to_drone[4].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[359]/* cc_to_drone[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 719
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[2,6] = 0.5 * cc_to_drone[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  (data->simulationInfo->realParameter[257]/* cc_to_drone[4].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[361]/* cc_to_drone[4].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 720
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[2,4] = 0.5 * cc_to_drone[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  (data->simulationInfo->realParameter[255]/* cc_to_drone[4].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[360]/* cc_to_drone[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 721
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[2,2] = cc_to_drone[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  (data->simulationInfo->realParameter[253]/* cc_to_drone[4].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[359]/* cc_to_drone[4].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 722
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[2,1] = 0.5 * cc_to_drone[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  (data->simulationInfo->realParameter[252]/* cc_to_drone[4].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[359]/* cc_to_drone[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 723
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[1,6] = 0.5 * cc_to_drone[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  (data->simulationInfo->realParameter[251]/* cc_to_drone[4].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[361]/* cc_to_drone[4].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 724
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[1,4] = 0.5 * cc_to_drone[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,724};
  (data->simulationInfo->realParameter[249]/* cc_to_drone[4].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[360]/* cc_to_drone[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 725
type: SIMPLE_ASSIGN
cc_to_drone[4].p.areas[1,2] = 0.5 * cc_to_drone[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,725};
  (data->simulationInfo->realParameter[247]/* cc_to_drone[4].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[359]/* cc_to_drone[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 726
type: SIMPLE_ASSIGN
cc_to_drone[4].p.capacity = 18000.0 * cc_to_drone[4].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,726};
  (data->simulationInfo->realParameter[309]/* cc_to_drone[4].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[417]/* cc_to_drone[4].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 727
type: SIMPLE_ASSIGN
cc_to_drone[4].p.rechargedThreshold = cc_to_drone[4].p.capacity * cc_to_drone[4].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,727};
  (data->simulationInfo->realParameter[409]/* cc_to_drone[4].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[309]/* cc_to_drone[4].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[405]/* cc_to_drone[4].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 728
type: SIMPLE_ASSIGN
cc_to_drone[4].p.dangerousBatteryLevel = cc_to_drone[4].p.capacity * cc_to_drone[4].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,728};
  (data->simulationInfo->realParameter[333]/* cc_to_drone[4].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[309]/* cc_to_drone[4].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[337]/* cc_to_drone[4].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 729
type: SIMPLE_ASSIGN
cc_to_drone[4].p.rechargeRate = 2.5 * cc_to_drone[4].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  (data->simulationInfo->realParameter[401]/* cc_to_drone[4].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[417]/* cc_to_drone[4].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 730
type: SIMPLE_ASSIGN
cc_to_drone[4].p.commDischarge = 5.0 * cc_to_drone[4].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  (data->simulationInfo->realParameter[317]/* cc_to_drone[4].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[417]/* cc_to_drone[4].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 731
type: SIMPLE_ASSIGN
cc_to_drone[4].p.batteryDischarge = cc_to_drone[4].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  (data->simulationInfo->realParameter[305]/* cc_to_drone[4].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[417]/* cc_to_drone[4].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 732
type: SIMPLE_ASSIGN
cc_to_drone[4].p.dangerRadius = 3.0 + cc_to_drone[4].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  (data->simulationInfo->realParameter[329]/* cc_to_drone[4].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[381]/* cc_to_drone[4].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 735
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[8,6] = cc_to_drone[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  (data->simulationInfo->realParameter[245]/* cc_to_drone[3].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[358]/* cc_to_drone[3].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 736
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[8,5] = 0.5 * cc_to_drone[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  (data->simulationInfo->realParameter[244]/* cc_to_drone[3].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[356]/* cc_to_drone[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 737
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[8,4] = cc_to_drone[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  (data->simulationInfo->realParameter[243]/* cc_to_drone[3].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[357]/* cc_to_drone[3].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 738
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[8,3] = 0.5 * cc_to_drone[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  (data->simulationInfo->realParameter[242]/* cc_to_drone[3].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[357]/* cc_to_drone[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 739
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[8,2] = cc_to_drone[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  (data->simulationInfo->realParameter[241]/* cc_to_drone[3].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[356]/* cc_to_drone[3].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 740
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[8,1] = 0.5 * cc_to_drone[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  (data->simulationInfo->realParameter[240]/* cc_to_drone[3].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[356]/* cc_to_drone[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 741
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[7,6] = cc_to_drone[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  (data->simulationInfo->realParameter[239]/* cc_to_drone[3].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[358]/* cc_to_drone[3].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 742
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[7,5] = 0.5 * cc_to_drone[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  (data->simulationInfo->realParameter[238]/* cc_to_drone[3].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[356]/* cc_to_drone[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 743
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[7,4] = cc_to_drone[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  (data->simulationInfo->realParameter[237]/* cc_to_drone[3].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[357]/* cc_to_drone[3].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 744
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[7,3] = 0.5 * cc_to_drone[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  (data->simulationInfo->realParameter[236]/* cc_to_drone[3].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[357]/* cc_to_drone[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 745
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[7,2] = 0.5 * cc_to_drone[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  (data->simulationInfo->realParameter[235]/* cc_to_drone[3].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[356]/* cc_to_drone[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 746
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[6,6] = cc_to_drone[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  (data->simulationInfo->realParameter[233]/* cc_to_drone[3].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[358]/* cc_to_drone[3].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 747
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[6,5] = 0.5 * cc_to_drone[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  (data->simulationInfo->realParameter[232]/* cc_to_drone[3].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[356]/* cc_to_drone[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 748
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[6,4] = 0.5 * cc_to_drone[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  (data->simulationInfo->realParameter[231]/* cc_to_drone[3].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[357]/* cc_to_drone[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 749
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[6,2] = cc_to_drone[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  (data->simulationInfo->realParameter[229]/* cc_to_drone[3].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[356]/* cc_to_drone[3].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 750
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[6,1] = 0.5 * cc_to_drone[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  (data->simulationInfo->realParameter[228]/* cc_to_drone[3].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[356]/* cc_to_drone[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 751
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[5,6] = cc_to_drone[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  (data->simulationInfo->realParameter[227]/* cc_to_drone[3].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[358]/* cc_to_drone[3].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 752
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[5,5] = 0.5 * cc_to_drone[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  (data->simulationInfo->realParameter[226]/* cc_to_drone[3].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[356]/* cc_to_drone[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 753
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[5,4] = 0.5 * cc_to_drone[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  (data->simulationInfo->realParameter[225]/* cc_to_drone[3].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[357]/* cc_to_drone[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 754
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[5,2] = 0.5 * cc_to_drone[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  (data->simulationInfo->realParameter[223]/* cc_to_drone[3].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[356]/* cc_to_drone[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 755
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[4,6] = 0.5 * cc_to_drone[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  (data->simulationInfo->realParameter[221]/* cc_to_drone[3].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[358]/* cc_to_drone[3].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 756
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[4,4] = cc_to_drone[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  (data->simulationInfo->realParameter[219]/* cc_to_drone[3].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[357]/* cc_to_drone[3].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 757
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[4,3] = 0.5 * cc_to_drone[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  (data->simulationInfo->realParameter[218]/* cc_to_drone[3].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[357]/* cc_to_drone[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 758
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[4,2] = cc_to_drone[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  (data->simulationInfo->realParameter[217]/* cc_to_drone[3].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[356]/* cc_to_drone[3].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 759
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[4,1] = 0.5 * cc_to_drone[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  (data->simulationInfo->realParameter[216]/* cc_to_drone[3].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[356]/* cc_to_drone[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 760
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[3,6] = 0.5 * cc_to_drone[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  (data->simulationInfo->realParameter[215]/* cc_to_drone[3].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[358]/* cc_to_drone[3].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 761
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[3,4] = cc_to_drone[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  (data->simulationInfo->realParameter[213]/* cc_to_drone[3].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[357]/* cc_to_drone[3].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 762
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[3,3] = 0.5 * cc_to_drone[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  (data->simulationInfo->realParameter[212]/* cc_to_drone[3].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[357]/* cc_to_drone[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 763
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[3,2] = 0.5 * cc_to_drone[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  (data->simulationInfo->realParameter[211]/* cc_to_drone[3].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[356]/* cc_to_drone[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 764
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[2,6] = 0.5 * cc_to_drone[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  (data->simulationInfo->realParameter[209]/* cc_to_drone[3].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[358]/* cc_to_drone[3].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 765
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[2,4] = 0.5 * cc_to_drone[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  (data->simulationInfo->realParameter[207]/* cc_to_drone[3].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[357]/* cc_to_drone[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 766
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[2,2] = cc_to_drone[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  (data->simulationInfo->realParameter[205]/* cc_to_drone[3].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[356]/* cc_to_drone[3].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 767
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[2,1] = 0.5 * cc_to_drone[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  (data->simulationInfo->realParameter[204]/* cc_to_drone[3].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[356]/* cc_to_drone[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 768
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[1,6] = 0.5 * cc_to_drone[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  (data->simulationInfo->realParameter[203]/* cc_to_drone[3].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[358]/* cc_to_drone[3].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 769
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[1,4] = 0.5 * cc_to_drone[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  (data->simulationInfo->realParameter[201]/* cc_to_drone[3].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[357]/* cc_to_drone[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 770
type: SIMPLE_ASSIGN
cc_to_drone[3].p.areas[1,2] = 0.5 * cc_to_drone[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  (data->simulationInfo->realParameter[199]/* cc_to_drone[3].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[356]/* cc_to_drone[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 771
type: SIMPLE_ASSIGN
cc_to_drone[3].p.capacity = 18000.0 * cc_to_drone[3].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  (data->simulationInfo->realParameter[308]/* cc_to_drone[3].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[416]/* cc_to_drone[3].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 772
type: SIMPLE_ASSIGN
cc_to_drone[3].p.rechargedThreshold = cc_to_drone[3].p.capacity * cc_to_drone[3].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  (data->simulationInfo->realParameter[408]/* cc_to_drone[3].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[308]/* cc_to_drone[3].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[404]/* cc_to_drone[3].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 773
type: SIMPLE_ASSIGN
cc_to_drone[3].p.dangerousBatteryLevel = cc_to_drone[3].p.capacity * cc_to_drone[3].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  (data->simulationInfo->realParameter[332]/* cc_to_drone[3].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[308]/* cc_to_drone[3].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[336]/* cc_to_drone[3].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 774
type: SIMPLE_ASSIGN
cc_to_drone[3].p.rechargeRate = 2.5 * cc_to_drone[3].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  (data->simulationInfo->realParameter[400]/* cc_to_drone[3].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[416]/* cc_to_drone[3].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 775
type: SIMPLE_ASSIGN
cc_to_drone[3].p.commDischarge = 5.0 * cc_to_drone[3].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  (data->simulationInfo->realParameter[316]/* cc_to_drone[3].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[416]/* cc_to_drone[3].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 776
type: SIMPLE_ASSIGN
cc_to_drone[3].p.batteryDischarge = cc_to_drone[3].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  (data->simulationInfo->realParameter[304]/* cc_to_drone[3].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[416]/* cc_to_drone[3].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 777
type: SIMPLE_ASSIGN
cc_to_drone[3].p.dangerRadius = 3.0 + cc_to_drone[3].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  (data->simulationInfo->realParameter[328]/* cc_to_drone[3].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[380]/* cc_to_drone[3].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 780
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[8,6] = cc_to_drone[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  (data->simulationInfo->realParameter[197]/* cc_to_drone[2].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[355]/* cc_to_drone[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 781
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[8,5] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  (data->simulationInfo->realParameter[196]/* cc_to_drone[2].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[353]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 782
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[8,4] = cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  (data->simulationInfo->realParameter[195]/* cc_to_drone[2].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[354]/* cc_to_drone[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 783
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[8,3] = 0.5 * cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  (data->simulationInfo->realParameter[194]/* cc_to_drone[2].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[354]/* cc_to_drone[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 784
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[8,2] = cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  (data->simulationInfo->realParameter[193]/* cc_to_drone[2].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[353]/* cc_to_drone[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 785
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[8,1] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  (data->simulationInfo->realParameter[192]/* cc_to_drone[2].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[353]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 786
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[7,6] = cc_to_drone[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  (data->simulationInfo->realParameter[191]/* cc_to_drone[2].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[355]/* cc_to_drone[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 787
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[7,5] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  (data->simulationInfo->realParameter[190]/* cc_to_drone[2].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[353]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 788
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[7,4] = cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  (data->simulationInfo->realParameter[189]/* cc_to_drone[2].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[354]/* cc_to_drone[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 789
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[7,3] = 0.5 * cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  (data->simulationInfo->realParameter[188]/* cc_to_drone[2].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[354]/* cc_to_drone[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 790
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[7,2] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  (data->simulationInfo->realParameter[187]/* cc_to_drone[2].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[353]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 791
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[6,6] = cc_to_drone[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  (data->simulationInfo->realParameter[185]/* cc_to_drone[2].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[355]/* cc_to_drone[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 792
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[6,5] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  (data->simulationInfo->realParameter[184]/* cc_to_drone[2].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[353]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 793
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[6,4] = 0.5 * cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  (data->simulationInfo->realParameter[183]/* cc_to_drone[2].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[354]/* cc_to_drone[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 794
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[6,2] = cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  (data->simulationInfo->realParameter[181]/* cc_to_drone[2].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[353]/* cc_to_drone[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 795
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[6,1] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  (data->simulationInfo->realParameter[180]/* cc_to_drone[2].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[353]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 796
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[5,6] = cc_to_drone[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  (data->simulationInfo->realParameter[179]/* cc_to_drone[2].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[355]/* cc_to_drone[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 797
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[5,5] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,797};
  (data->simulationInfo->realParameter[178]/* cc_to_drone[2].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[353]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 798
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[5,4] = 0.5 * cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  (data->simulationInfo->realParameter[177]/* cc_to_drone[2].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[354]/* cc_to_drone[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 799
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[5,2] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  (data->simulationInfo->realParameter[175]/* cc_to_drone[2].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[353]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 800
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[4,6] = 0.5 * cc_to_drone[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,800};
  (data->simulationInfo->realParameter[173]/* cc_to_drone[2].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[355]/* cc_to_drone[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 801
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[4,4] = cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,801};
  (data->simulationInfo->realParameter[171]/* cc_to_drone[2].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[354]/* cc_to_drone[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 802
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[4,3] = 0.5 * cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,802};
  (data->simulationInfo->realParameter[170]/* cc_to_drone[2].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[354]/* cc_to_drone[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 803
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[4,2] = cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  (data->simulationInfo->realParameter[169]/* cc_to_drone[2].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[353]/* cc_to_drone[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 804
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[4,1] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,804};
  (data->simulationInfo->realParameter[168]/* cc_to_drone[2].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[353]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 805
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[3,6] = 0.5 * cc_to_drone[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,805};
  (data->simulationInfo->realParameter[167]/* cc_to_drone[2].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[355]/* cc_to_drone[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 806
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[3,4] = cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,806};
  (data->simulationInfo->realParameter[165]/* cc_to_drone[2].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[354]/* cc_to_drone[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 807
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[3,3] = 0.5 * cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,807};
  (data->simulationInfo->realParameter[164]/* cc_to_drone[2].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[354]/* cc_to_drone[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 808
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[3,2] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,808};
  (data->simulationInfo->realParameter[163]/* cc_to_drone[2].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[353]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 809
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[2,6] = 0.5 * cc_to_drone[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,809};
  (data->simulationInfo->realParameter[161]/* cc_to_drone[2].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[355]/* cc_to_drone[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 810
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[2,4] = 0.5 * cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,810};
  (data->simulationInfo->realParameter[159]/* cc_to_drone[2].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[354]/* cc_to_drone[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 811
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[2,2] = cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,811};
  (data->simulationInfo->realParameter[157]/* cc_to_drone[2].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[353]/* cc_to_drone[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 812
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[2,1] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  (data->simulationInfo->realParameter[156]/* cc_to_drone[2].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[353]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 813
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[1,6] = 0.5 * cc_to_drone[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,813};
  (data->simulationInfo->realParameter[155]/* cc_to_drone[2].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[355]/* cc_to_drone[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 814
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[1,4] = 0.5 * cc_to_drone[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,814};
  (data->simulationInfo->realParameter[153]/* cc_to_drone[2].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[354]/* cc_to_drone[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 815
type: SIMPLE_ASSIGN
cc_to_drone[2].p.areas[1,2] = 0.5 * cc_to_drone[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,815};
  (data->simulationInfo->realParameter[151]/* cc_to_drone[2].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[353]/* cc_to_drone[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 816
type: SIMPLE_ASSIGN
cc_to_drone[2].p.capacity = 18000.0 * cc_to_drone[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,816};
  (data->simulationInfo->realParameter[307]/* cc_to_drone[2].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[415]/* cc_to_drone[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 817
type: SIMPLE_ASSIGN
cc_to_drone[2].p.rechargedThreshold = cc_to_drone[2].p.capacity * cc_to_drone[2].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,817};
  (data->simulationInfo->realParameter[407]/* cc_to_drone[2].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[307]/* cc_to_drone[2].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[403]/* cc_to_drone[2].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 818
type: SIMPLE_ASSIGN
cc_to_drone[2].p.dangerousBatteryLevel = cc_to_drone[2].p.capacity * cc_to_drone[2].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,818};
  (data->simulationInfo->realParameter[331]/* cc_to_drone[2].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[307]/* cc_to_drone[2].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[335]/* cc_to_drone[2].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 819
type: SIMPLE_ASSIGN
cc_to_drone[2].p.rechargeRate = 2.5 * cc_to_drone[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,819};
  (data->simulationInfo->realParameter[399]/* cc_to_drone[2].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[415]/* cc_to_drone[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 820
type: SIMPLE_ASSIGN
cc_to_drone[2].p.commDischarge = 5.0 * cc_to_drone[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,820};
  (data->simulationInfo->realParameter[315]/* cc_to_drone[2].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[415]/* cc_to_drone[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 821
type: SIMPLE_ASSIGN
cc_to_drone[2].p.batteryDischarge = cc_to_drone[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,821};
  (data->simulationInfo->realParameter[303]/* cc_to_drone[2].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[415]/* cc_to_drone[2].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 822
type: SIMPLE_ASSIGN
cc_to_drone[2].p.dangerRadius = 3.0 + cc_to_drone[2].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,822};
  (data->simulationInfo->realParameter[327]/* cc_to_drone[2].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[379]/* cc_to_drone[2].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 825
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,6] = cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,825};
  (data->simulationInfo->realParameter[149]/* cc_to_drone[1].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[352]/* cc_to_drone[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 826
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,5] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,826};
  (data->simulationInfo->realParameter[148]/* cc_to_drone[1].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[350]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 827
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,4] = cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,827};
  (data->simulationInfo->realParameter[147]/* cc_to_drone[1].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[351]/* cc_to_drone[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 828
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,3] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,828};
  (data->simulationInfo->realParameter[146]/* cc_to_drone[1].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[351]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 829
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,2] = cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,829};
  (data->simulationInfo->realParameter[145]/* cc_to_drone[1].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[350]/* cc_to_drone[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 830
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[8,1] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,830};
  (data->simulationInfo->realParameter[144]/* cc_to_drone[1].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[350]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 831
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[7,6] = cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,831};
  (data->simulationInfo->realParameter[143]/* cc_to_drone[1].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[352]/* cc_to_drone[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 832
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[7,5] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,832};
  (data->simulationInfo->realParameter[142]/* cc_to_drone[1].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[350]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 833
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[7,4] = cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,833};
  (data->simulationInfo->realParameter[141]/* cc_to_drone[1].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[351]/* cc_to_drone[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 834
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[7,3] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,834};
  (data->simulationInfo->realParameter[140]/* cc_to_drone[1].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[351]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 835
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[7,2] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,835};
  (data->simulationInfo->realParameter[139]/* cc_to_drone[1].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[350]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 836
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[6,6] = cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,836};
  (data->simulationInfo->realParameter[137]/* cc_to_drone[1].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[352]/* cc_to_drone[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 837
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[6,5] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,837};
  (data->simulationInfo->realParameter[136]/* cc_to_drone[1].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[350]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 838
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[6,4] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,838};
  (data->simulationInfo->realParameter[135]/* cc_to_drone[1].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[351]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 839
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[6,2] = cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,839};
  (data->simulationInfo->realParameter[133]/* cc_to_drone[1].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[350]/* cc_to_drone[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 840
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[6,1] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,840};
  (data->simulationInfo->realParameter[132]/* cc_to_drone[1].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[350]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 841
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[5,6] = cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,841};
  (data->simulationInfo->realParameter[131]/* cc_to_drone[1].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[352]/* cc_to_drone[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 842
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[5,5] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,842};
  (data->simulationInfo->realParameter[130]/* cc_to_drone[1].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[350]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 843
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[5,4] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,843};
  (data->simulationInfo->realParameter[129]/* cc_to_drone[1].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[351]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 844
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[5,2] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,844};
  (data->simulationInfo->realParameter[127]/* cc_to_drone[1].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[350]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 845
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[4,6] = 0.5 * cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,845};
  (data->simulationInfo->realParameter[125]/* cc_to_drone[1].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[352]/* cc_to_drone[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 846
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[4,4] = cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,846};
  (data->simulationInfo->realParameter[123]/* cc_to_drone[1].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[351]/* cc_to_drone[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 847
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[4,3] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,847};
  (data->simulationInfo->realParameter[122]/* cc_to_drone[1].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[351]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 848
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[4,2] = cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,848};
  (data->simulationInfo->realParameter[121]/* cc_to_drone[1].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[350]/* cc_to_drone[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 849
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[4,1] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,849};
  (data->simulationInfo->realParameter[120]/* cc_to_drone[1].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[350]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 850
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[3,6] = 0.5 * cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,850};
  (data->simulationInfo->realParameter[119]/* cc_to_drone[1].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[352]/* cc_to_drone[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 851
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[3,4] = cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,851};
  (data->simulationInfo->realParameter[117]/* cc_to_drone[1].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[351]/* cc_to_drone[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 852
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[3,3] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,852};
  (data->simulationInfo->realParameter[116]/* cc_to_drone[1].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[351]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 853
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[3,2] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,853};
  (data->simulationInfo->realParameter[115]/* cc_to_drone[1].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[350]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 854
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[2,6] = 0.5 * cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,854};
  (data->simulationInfo->realParameter[113]/* cc_to_drone[1].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[352]/* cc_to_drone[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 855
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[2,4] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,855};
  (data->simulationInfo->realParameter[111]/* cc_to_drone[1].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[351]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 856
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[2,2] = cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,856};
  (data->simulationInfo->realParameter[109]/* cc_to_drone[1].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[350]/* cc_to_drone[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 857
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[2,1] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,857};
  (data->simulationInfo->realParameter[108]/* cc_to_drone[1].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[350]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 858
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[1,6] = 0.5 * cc_to_drone[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,858};
  (data->simulationInfo->realParameter[107]/* cc_to_drone[1].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[352]/* cc_to_drone[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 859
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[1,4] = 0.5 * cc_to_drone[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,859};
  (data->simulationInfo->realParameter[105]/* cc_to_drone[1].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[351]/* cc_to_drone[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 860
type: SIMPLE_ASSIGN
cc_to_drone[1].p.areas[1,2] = 0.5 * cc_to_drone[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,860};
  (data->simulationInfo->realParameter[103]/* cc_to_drone[1].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[350]/* cc_to_drone[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 861
type: SIMPLE_ASSIGN
cc_to_drone[1].p.capacity = 18000.0 * cc_to_drone[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,861};
  (data->simulationInfo->realParameter[306]/* cc_to_drone[1].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[414]/* cc_to_drone[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 862
type: SIMPLE_ASSIGN
cc_to_drone[1].p.rechargedThreshold = cc_to_drone[1].p.capacity * cc_to_drone[1].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,862};
  (data->simulationInfo->realParameter[406]/* cc_to_drone[1].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[306]/* cc_to_drone[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[402]/* cc_to_drone[1].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 863
type: SIMPLE_ASSIGN
cc_to_drone[1].p.dangerousBatteryLevel = cc_to_drone[1].p.capacity * cc_to_drone[1].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,863};
  (data->simulationInfo->realParameter[330]/* cc_to_drone[1].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[306]/* cc_to_drone[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[334]/* cc_to_drone[1].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 864
type: SIMPLE_ASSIGN
cc_to_drone[1].p.rechargeRate = 2.5 * cc_to_drone[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,864};
  (data->simulationInfo->realParameter[398]/* cc_to_drone[1].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[414]/* cc_to_drone[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 865
type: SIMPLE_ASSIGN
cc_to_drone[1].p.commDischarge = 5.0 * cc_to_drone[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,865};
  (data->simulationInfo->realParameter[314]/* cc_to_drone[1].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[414]/* cc_to_drone[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 866
type: SIMPLE_ASSIGN
cc_to_drone[1].p.batteryDischarge = cc_to_drone[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,866};
  (data->simulationInfo->realParameter[302]/* cc_to_drone[1].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[414]/* cc_to_drone[1].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 867
type: SIMPLE_ASSIGN
cc_to_drone[1].p.dangerRadius = 3.0 + cc_to_drone[1].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,867};
  (data->simulationInfo->realParameter[326]/* cc_to_drone[1].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[378]/* cc_to_drone[1].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 870
type: SIMPLE_ASSIGN
m.p.areas[8,6] = m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,870};
  (data->simulationInfo->realParameter[1828]/* m.p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[1845]/* m.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 871
type: SIMPLE_ASSIGN
m.p.areas[8,5] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  (data->simulationInfo->realParameter[1827]/* m.p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1843]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 872
type: SIMPLE_ASSIGN
m.p.areas[8,4] = m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,872};
  (data->simulationInfo->realParameter[1826]/* m.p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[1844]/* m.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 873
type: SIMPLE_ASSIGN
m.p.areas[8,3] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,873};
  (data->simulationInfo->realParameter[1825]/* m.p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1844]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 874
type: SIMPLE_ASSIGN
m.p.areas[8,2] = m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,874};
  (data->simulationInfo->realParameter[1824]/* m.p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[1843]/* m.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 875
type: SIMPLE_ASSIGN
m.p.areas[8,1] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,875};
  (data->simulationInfo->realParameter[1823]/* m.p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1843]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 876
type: SIMPLE_ASSIGN
m.p.areas[7,6] = m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,876};
  (data->simulationInfo->realParameter[1822]/* m.p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[1845]/* m.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 877
type: SIMPLE_ASSIGN
m.p.areas[7,5] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,877};
  (data->simulationInfo->realParameter[1821]/* m.p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1843]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 878
type: SIMPLE_ASSIGN
m.p.areas[7,4] = m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,878};
  (data->simulationInfo->realParameter[1820]/* m.p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[1844]/* m.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 879
type: SIMPLE_ASSIGN
m.p.areas[7,3] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,879};
  (data->simulationInfo->realParameter[1819]/* m.p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1844]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 880
type: SIMPLE_ASSIGN
m.p.areas[7,2] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,880};
  (data->simulationInfo->realParameter[1818]/* m.p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1843]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 881
type: SIMPLE_ASSIGN
m.p.areas[6,6] = m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,881};
  (data->simulationInfo->realParameter[1816]/* m.p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[1845]/* m.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 882
type: SIMPLE_ASSIGN
m.p.areas[6,5] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,882};
  (data->simulationInfo->realParameter[1815]/* m.p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1843]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 883
type: SIMPLE_ASSIGN
m.p.areas[6,4] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,883};
  (data->simulationInfo->realParameter[1814]/* m.p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1844]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 884
type: SIMPLE_ASSIGN
m.p.areas[6,2] = m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,884};
  (data->simulationInfo->realParameter[1812]/* m.p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[1843]/* m.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 885
type: SIMPLE_ASSIGN
m.p.areas[6,1] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,885};
  (data->simulationInfo->realParameter[1811]/* m.p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1843]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 886
type: SIMPLE_ASSIGN
m.p.areas[5,6] = m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,886};
  (data->simulationInfo->realParameter[1810]/* m.p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[1845]/* m.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 887
type: SIMPLE_ASSIGN
m.p.areas[5,5] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,887};
  (data->simulationInfo->realParameter[1809]/* m.p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1843]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 888
type: SIMPLE_ASSIGN
m.p.areas[5,4] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,888};
  (data->simulationInfo->realParameter[1808]/* m.p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1844]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 889
type: SIMPLE_ASSIGN
m.p.areas[5,2] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,889};
  (data->simulationInfo->realParameter[1806]/* m.p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1843]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 890
type: SIMPLE_ASSIGN
m.p.areas[4,6] = 0.5 * m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,890};
  (data->simulationInfo->realParameter[1804]/* m.p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1845]/* m.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 891
type: SIMPLE_ASSIGN
m.p.areas[4,4] = m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,891};
  (data->simulationInfo->realParameter[1802]/* m.p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[1844]/* m.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 892
type: SIMPLE_ASSIGN
m.p.areas[4,3] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,892};
  (data->simulationInfo->realParameter[1801]/* m.p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1844]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 893
type: SIMPLE_ASSIGN
m.p.areas[4,2] = m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,893};
  (data->simulationInfo->realParameter[1800]/* m.p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[1843]/* m.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 894
type: SIMPLE_ASSIGN
m.p.areas[4,1] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,894};
  (data->simulationInfo->realParameter[1799]/* m.p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1843]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 895
type: SIMPLE_ASSIGN
m.p.areas[3,6] = 0.5 * m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
  (data->simulationInfo->realParameter[1798]/* m.p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1845]/* m.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 896
type: SIMPLE_ASSIGN
m.p.areas[3,4] = m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  (data->simulationInfo->realParameter[1796]/* m.p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[1844]/* m.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 897
type: SIMPLE_ASSIGN
m.p.areas[3,3] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,897};
  (data->simulationInfo->realParameter[1795]/* m.p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1844]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 898
type: SIMPLE_ASSIGN
m.p.areas[3,2] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  (data->simulationInfo->realParameter[1794]/* m.p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1843]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 899
type: SIMPLE_ASSIGN
m.p.areas[2,6] = 0.5 * m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  (data->simulationInfo->realParameter[1792]/* m.p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1845]/* m.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 900
type: SIMPLE_ASSIGN
m.p.areas[2,4] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  (data->simulationInfo->realParameter[1790]/* m.p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1844]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 901
type: SIMPLE_ASSIGN
m.p.areas[2,2] = m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  (data->simulationInfo->realParameter[1788]/* m.p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[1843]/* m.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 902
type: SIMPLE_ASSIGN
m.p.areas[2,1] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  (data->simulationInfo->realParameter[1787]/* m.p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1843]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 903
type: SIMPLE_ASSIGN
m.p.areas[1,6] = 0.5 * m.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  (data->simulationInfo->realParameter[1786]/* m.p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1845]/* m.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 904
type: SIMPLE_ASSIGN
m.p.areas[1,4] = 0.5 * m.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  (data->simulationInfo->realParameter[1784]/* m.p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1844]/* m.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 905
type: SIMPLE_ASSIGN
m.p.areas[1,2] = 0.5 * m.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  (data->simulationInfo->realParameter[1782]/* m.p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1843]/* m.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 907
type: SIMPLE_ASSIGN
m.p.capacity = 18000.0 * m.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  (data->simulationInfo->realParameter[1832]/* m.p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[1859]/* m.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 908
type: SIMPLE_ASSIGN
m.p.rechargedThreshold = m.p.capacity * m.p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  (data->simulationInfo->realParameter[1857]/* m.p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[1832]/* m.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1856]/* m.p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 909
type: SIMPLE_ASSIGN
m.p.dangerousBatteryLevel = m.p.capacity * m.p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
  (data->simulationInfo->realParameter[1838]/* m.p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[1832]/* m.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1839]/* m.p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 910
type: SIMPLE_ASSIGN
m.p.rechargeRate = 2.5 * m.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  (data->simulationInfo->realParameter[1855]/* m.p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[1859]/* m.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 911
type: SIMPLE_ASSIGN
m.p.commDischarge = 5.0 * m.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  (data->simulationInfo->realParameter[1834]/* m.p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[1859]/* m.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 912
type: SIMPLE_ASSIGN
m.p.batteryDischarge = m.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  (data->simulationInfo->realParameter[1831]/* m.p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[1859]/* m.p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 913
type: SIMPLE_ASSIGN
m.p.dangerRadius = 3.0 + m.p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  (data->simulationInfo->realParameter[1837]/* m.p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[1850]/* m.p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 914
type: SIMPLE_ASSIGN
cc.p.areas[8,6] = cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  (data->simulationInfo->realParameter[55]/* cc.p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 915
type: SIMPLE_ASSIGN
cc.p.areas[8,5] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  (data->simulationInfo->realParameter[54]/* cc.p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 916
type: SIMPLE_ASSIGN
cc.p.areas[8,4] = cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  (data->simulationInfo->realParameter[53]/* cc.p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 917
type: SIMPLE_ASSIGN
cc.p.areas[8,3] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  (data->simulationInfo->realParameter[52]/* cc.p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 918
type: SIMPLE_ASSIGN
cc.p.areas[8,2] = cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  (data->simulationInfo->realParameter[51]/* cc.p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 919
type: SIMPLE_ASSIGN
cc.p.areas[8,1] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  (data->simulationInfo->realParameter[50]/* cc.p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 920
type: SIMPLE_ASSIGN
cc.p.areas[7,6] = cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  (data->simulationInfo->realParameter[49]/* cc.p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 921
type: SIMPLE_ASSIGN
cc.p.areas[7,5] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  (data->simulationInfo->realParameter[48]/* cc.p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 922
type: SIMPLE_ASSIGN
cc.p.areas[7,4] = cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  (data->simulationInfo->realParameter[47]/* cc.p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 923
type: SIMPLE_ASSIGN
cc.p.areas[7,3] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  (data->simulationInfo->realParameter[46]/* cc.p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 924
type: SIMPLE_ASSIGN
cc.p.areas[7,2] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  (data->simulationInfo->realParameter[45]/* cc.p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 925
type: SIMPLE_ASSIGN
cc.p.areas[6,6] = cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  (data->simulationInfo->realParameter[43]/* cc.p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 926
type: SIMPLE_ASSIGN
cc.p.areas[6,5] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  (data->simulationInfo->realParameter[42]/* cc.p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 927
type: SIMPLE_ASSIGN
cc.p.areas[6,4] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  (data->simulationInfo->realParameter[41]/* cc.p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 928
type: SIMPLE_ASSIGN
cc.p.areas[6,2] = cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  (data->simulationInfo->realParameter[39]/* cc.p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 929
type: SIMPLE_ASSIGN
cc.p.areas[6,1] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  (data->simulationInfo->realParameter[38]/* cc.p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 930
type: SIMPLE_ASSIGN
cc.p.areas[5,6] = cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,930};
  (data->simulationInfo->realParameter[37]/* cc.p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 931
type: SIMPLE_ASSIGN
cc.p.areas[5,5] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,931};
  (data->simulationInfo->realParameter[36]/* cc.p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 932
type: SIMPLE_ASSIGN
cc.p.areas[5,4] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  (data->simulationInfo->realParameter[35]/* cc.p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 933
type: SIMPLE_ASSIGN
cc.p.areas[5,2] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,933};
  (data->simulationInfo->realParameter[33]/* cc.p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 934
type: SIMPLE_ASSIGN
cc.p.areas[4,6] = 0.5 * cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,934};
  (data->simulationInfo->realParameter[31]/* cc.p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 935
type: SIMPLE_ASSIGN
cc.p.areas[4,4] = cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,935};
  (data->simulationInfo->realParameter[29]/* cc.p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 936
type: SIMPLE_ASSIGN
cc.p.areas[4,3] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  (data->simulationInfo->realParameter[28]/* cc.p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 937
type: SIMPLE_ASSIGN
cc.p.areas[4,2] = cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,937};
  (data->simulationInfo->realParameter[27]/* cc.p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 938
type: SIMPLE_ASSIGN
cc.p.areas[4,1] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,938};
  (data->simulationInfo->realParameter[26]/* cc.p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 939
type: SIMPLE_ASSIGN
cc.p.areas[3,6] = 0.5 * cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,939};
  (data->simulationInfo->realParameter[25]/* cc.p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 940
type: SIMPLE_ASSIGN
cc.p.areas[3,4] = cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,940};
  (data->simulationInfo->realParameter[23]/* cc.p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 941
type: SIMPLE_ASSIGN
cc.p.areas[3,3] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,941};
  (data->simulationInfo->realParameter[22]/* cc.p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 942
type: SIMPLE_ASSIGN
cc.p.areas[3,2] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,942};
  (data->simulationInfo->realParameter[21]/* cc.p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 943
type: SIMPLE_ASSIGN
cc.p.areas[2,6] = 0.5 * cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,943};
  (data->simulationInfo->realParameter[19]/* cc.p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 944
type: SIMPLE_ASSIGN
cc.p.areas[2,4] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,944};
  (data->simulationInfo->realParameter[17]/* cc.p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 945
type: SIMPLE_ASSIGN
cc.p.areas[2,2] = cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,945};
  (data->simulationInfo->realParameter[15]/* cc.p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 946
type: SIMPLE_ASSIGN
cc.p.areas[2,1] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,946};
  (data->simulationInfo->realParameter[14]/* cc.p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 947
type: SIMPLE_ASSIGN
cc.p.areas[1,6] = 0.5 * cc.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,947};
  (data->simulationInfo->realParameter[13]/* cc.p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[72]/* cc.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 948
type: SIMPLE_ASSIGN
cc.p.areas[1,4] = 0.5 * cc.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,948};
  (data->simulationInfo->realParameter[11]/* cc.p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[71]/* cc.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 949
type: SIMPLE_ASSIGN
cc.p.areas[1,2] = 0.5 * cc.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,949};
  (data->simulationInfo->realParameter[9]/* cc.p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[70]/* cc.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 951
type: SIMPLE_ASSIGN
cc.p.capacity = 18000.0 * cc.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,951};
  (data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 952
type: SIMPLE_ASSIGN
cc.p.rechargedThreshold = cc.p.capacity * cc.p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,952};
  (data->simulationInfo->realParameter[84]/* cc.p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[83]/* cc.p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 953
type: SIMPLE_ASSIGN
cc.p.dangerousBatteryLevel = cc.p.capacity * cc.p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,953};
  (data->simulationInfo->realParameter[65]/* cc.p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[59]/* cc.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[66]/* cc.p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 954
type: SIMPLE_ASSIGN
cc.p.rechargeRate = 2.5 * cc.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,954};
  (data->simulationInfo->realParameter[82]/* cc.p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 955
type: SIMPLE_ASSIGN
cc.p.commDischarge = 5.0 * cc.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,955};
  (data->simulationInfo->realParameter[61]/* cc.p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 956
type: SIMPLE_ASSIGN
cc.p.batteryDischarge = cc.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,956};
  (data->simulationInfo->realParameter[58]/* cc.p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[86]/* cc.p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 957
type: SIMPLE_ASSIGN
cc.p.dangerRadius = 3.0 + cc.p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,957};
  (data->simulationInfo->realParameter[64]/* cc.p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[77]/* cc.p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 960
type: SIMPLE_ASSIGN
d[4].ctrl.kx2 = 2.0 * d[4].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,960};
  (data->simulationInfo->realParameter[429]/* d[4].ctrl.kx2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[449]/* d[4].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 961
type: SIMPLE_ASSIGN
d[4].ctrl.kx1 = -d[4].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,961};
  modelica_real tmp0;
  tmp0 = (data->simulationInfo->realParameter[449]/* d[4].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[425]/* d[4].ctrl.kx1 PARAM */)  = (-((tmp0 * tmp0)));
  TRACE_POP
}

/*
equation index: 962
type: SIMPLE_ASSIGN
d[4].ctrl.ky2 = 2.0 * d[4].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,962};
  (data->simulationInfo->realParameter[437]/* d[4].ctrl.ky2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[449]/* d[4].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 963
type: SIMPLE_ASSIGN
d[4].ctrl.ky1 = -d[4].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,963};
  modelica_real tmp1;
  tmp1 = (data->simulationInfo->realParameter[449]/* d[4].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[433]/* d[4].ctrl.ky1 PARAM */)  = (-((tmp1 * tmp1)));
  TRACE_POP
}

/*
equation index: 964
type: SIMPLE_ASSIGN
d[4].ctrl.kz2 = 2.0 * d[4].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,964};
  (data->simulationInfo->realParameter[445]/* d[4].ctrl.kz2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[449]/* d[4].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 965
type: SIMPLE_ASSIGN
d[4].ctrl.kz1 = -d[4].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,965};
  modelica_real tmp2;
  tmp2 = (data->simulationInfo->realParameter[449]/* d[4].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[441]/* d[4].ctrl.kz1 PARAM */)  = (-((tmp2 * tmp2)));
  TRACE_POP
}

/*
equation index: 966
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[8,6] = d[4].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,966};
  (data->simulationInfo->realParameter[653]/* d[4].ctrl.prm.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[721]/* d[4].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 967
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[8,5] = 0.5 * d[4].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,967};
  (data->simulationInfo->realParameter[652]/* d[4].ctrl.prm.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[719]/* d[4].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 968
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[8,4] = d[4].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,968};
  (data->simulationInfo->realParameter[651]/* d[4].ctrl.prm.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[720]/* d[4].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 969
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[8,3] = 0.5 * d[4].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,969};
  (data->simulationInfo->realParameter[650]/* d[4].ctrl.prm.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[720]/* d[4].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 970
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[8,2] = d[4].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,970};
  (data->simulationInfo->realParameter[649]/* d[4].ctrl.prm.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[719]/* d[4].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 971
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[8,1] = 0.5 * d[4].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,971};
  (data->simulationInfo->realParameter[648]/* d[4].ctrl.prm.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[719]/* d[4].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 972
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[7,6] = d[4].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,972};
  (data->simulationInfo->realParameter[647]/* d[4].ctrl.prm.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[721]/* d[4].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 973
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[7,5] = 0.5 * d[4].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,973};
  (data->simulationInfo->realParameter[646]/* d[4].ctrl.prm.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[719]/* d[4].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 974
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[7,4] = d[4].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,974};
  (data->simulationInfo->realParameter[645]/* d[4].ctrl.prm.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[720]/* d[4].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 975
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[7,3] = 0.5 * d[4].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,975};
  (data->simulationInfo->realParameter[644]/* d[4].ctrl.prm.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[720]/* d[4].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 976
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[7,2] = 0.5 * d[4].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,976};
  (data->simulationInfo->realParameter[643]/* d[4].ctrl.prm.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[719]/* d[4].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 977
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[6,6] = d[4].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,977};
  (data->simulationInfo->realParameter[641]/* d[4].ctrl.prm.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[721]/* d[4].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 978
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[6,5] = 0.5 * d[4].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,978};
  (data->simulationInfo->realParameter[640]/* d[4].ctrl.prm.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[719]/* d[4].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 979
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[6,4] = 0.5 * d[4].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,979};
  (data->simulationInfo->realParameter[639]/* d[4].ctrl.prm.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[720]/* d[4].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 980
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[6,2] = d[4].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,980};
  (data->simulationInfo->realParameter[637]/* d[4].ctrl.prm.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[719]/* d[4].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 981
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[6,1] = 0.5 * d[4].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,981};
  (data->simulationInfo->realParameter[636]/* d[4].ctrl.prm.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[719]/* d[4].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 982
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[5,6] = d[4].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,982};
  (data->simulationInfo->realParameter[635]/* d[4].ctrl.prm.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[721]/* d[4].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 983
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[5,5] = 0.5 * d[4].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,983};
  (data->simulationInfo->realParameter[634]/* d[4].ctrl.prm.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[719]/* d[4].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 984
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[5,4] = 0.5 * d[4].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,984};
  (data->simulationInfo->realParameter[633]/* d[4].ctrl.prm.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[720]/* d[4].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 985
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[5,2] = 0.5 * d[4].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,985};
  (data->simulationInfo->realParameter[631]/* d[4].ctrl.prm.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[719]/* d[4].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 986
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[4,6] = 0.5 * d[4].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,986};
  (data->simulationInfo->realParameter[629]/* d[4].ctrl.prm.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[721]/* d[4].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 987
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[4,4] = d[4].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,987};
  (data->simulationInfo->realParameter[627]/* d[4].ctrl.prm.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[720]/* d[4].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 988
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[4,3] = 0.5 * d[4].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,988};
  (data->simulationInfo->realParameter[626]/* d[4].ctrl.prm.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[720]/* d[4].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 989
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[4,2] = d[4].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,989};
  (data->simulationInfo->realParameter[625]/* d[4].ctrl.prm.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[719]/* d[4].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 990
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[4,1] = 0.5 * d[4].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,990};
  (data->simulationInfo->realParameter[624]/* d[4].ctrl.prm.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[719]/* d[4].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 991
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[3,6] = 0.5 * d[4].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,991};
  (data->simulationInfo->realParameter[623]/* d[4].ctrl.prm.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[721]/* d[4].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 992
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[3,4] = d[4].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,992};
  (data->simulationInfo->realParameter[621]/* d[4].ctrl.prm.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[720]/* d[4].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 993
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[3,3] = 0.5 * d[4].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,993};
  (data->simulationInfo->realParameter[620]/* d[4].ctrl.prm.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[720]/* d[4].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 994
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[3,2] = 0.5 * d[4].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,994};
  (data->simulationInfo->realParameter[619]/* d[4].ctrl.prm.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[719]/* d[4].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 995
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[2,6] = 0.5 * d[4].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,995};
  (data->simulationInfo->realParameter[617]/* d[4].ctrl.prm.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[721]/* d[4].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 996
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[2,4] = 0.5 * d[4].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,996};
  (data->simulationInfo->realParameter[615]/* d[4].ctrl.prm.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[720]/* d[4].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 997
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[2,2] = d[4].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,997};
  (data->simulationInfo->realParameter[613]/* d[4].ctrl.prm.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[719]/* d[4].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 998
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[2,1] = 0.5 * d[4].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,998};
  (data->simulationInfo->realParameter[612]/* d[4].ctrl.prm.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[719]/* d[4].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 999
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[1,6] = 0.5 * d[4].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,999};
  (data->simulationInfo->realParameter[611]/* d[4].ctrl.prm.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[721]/* d[4].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1000
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[1,4] = 0.5 * d[4].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1000};
  (data->simulationInfo->realParameter[609]/* d[4].ctrl.prm.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[720]/* d[4].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1001
type: SIMPLE_ASSIGN
d[4].ctrl.prm.areas[1,2] = 0.5 * d[4].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1001};
  (data->simulationInfo->realParameter[607]/* d[4].ctrl.prm.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[719]/* d[4].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1002
type: SIMPLE_ASSIGN
d[4].ctrl.prm.capacity = 18000.0 * d[4].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1002};
  (data->simulationInfo->realParameter[669]/* d[4].ctrl.prm.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[777]/* d[4].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1003
type: SIMPLE_ASSIGN
d[4].ctrl.prm.rechargedThreshold = d[4].ctrl.prm.capacity * d[4].ctrl.prm.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1003};
  (data->simulationInfo->realParameter[769]/* d[4].ctrl.prm.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[669]/* d[4].ctrl.prm.capacity PARAM */) ) * ((data->simulationInfo->realParameter[765]/* d[4].ctrl.prm.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1004
type: SIMPLE_ASSIGN
d[4].ctrl.prm.dangerousBatteryLevel = d[4].ctrl.prm.capacity * d[4].ctrl.prm.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1004};
  (data->simulationInfo->realParameter[693]/* d[4].ctrl.prm.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[669]/* d[4].ctrl.prm.capacity PARAM */) ) * ((data->simulationInfo->realParameter[697]/* d[4].ctrl.prm.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1005
type: SIMPLE_ASSIGN
d[4].ctrl.prm.rechargeRate = 2.5 * d[4].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1005};
  (data->simulationInfo->realParameter[761]/* d[4].ctrl.prm.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[777]/* d[4].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1006
type: SIMPLE_ASSIGN
d[4].ctrl.prm.commDischarge = 5.0 * d[4].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1006};
  (data->simulationInfo->realParameter[677]/* d[4].ctrl.prm.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[777]/* d[4].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1007
type: SIMPLE_ASSIGN
d[4].ctrl.prm.batteryDischarge = d[4].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1007};
  (data->simulationInfo->realParameter[665]/* d[4].ctrl.prm.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[777]/* d[4].ctrl.prm.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 1008
type: SIMPLE_ASSIGN
d[4].ctrl.prm.dangerRadius = 3.0 + d[4].ctrl.prm.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1008};
  (data->simulationInfo->realParameter[689]/* d[4].ctrl.prm.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[741]/* d[4].ctrl.prm.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 1009
type: SIMPLE_ASSIGN
d[4].d.p.areas[8,6] = d[4].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1009};
  (data->simulationInfo->realParameter[985]/* d[4].d.p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[1053]/* d[4].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1010
type: SIMPLE_ASSIGN
d[4].d.p.areas[8,5] = 0.5 * d[4].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1010};
  (data->simulationInfo->realParameter[984]/* d[4].d.p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1051]/* d[4].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1011
type: SIMPLE_ASSIGN
d[4].d.p.areas[8,4] = d[4].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1011};
  (data->simulationInfo->realParameter[983]/* d[4].d.p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[1052]/* d[4].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1012
type: SIMPLE_ASSIGN
d[4].d.p.areas[8,3] = 0.5 * d[4].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1012};
  (data->simulationInfo->realParameter[982]/* d[4].d.p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1052]/* d[4].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1013
type: SIMPLE_ASSIGN
d[4].d.p.areas[8,2] = d[4].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1013};
  (data->simulationInfo->realParameter[981]/* d[4].d.p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[1051]/* d[4].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1014
type: SIMPLE_ASSIGN
d[4].d.p.areas[8,1] = 0.5 * d[4].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1014};
  (data->simulationInfo->realParameter[980]/* d[4].d.p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1051]/* d[4].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1015
type: SIMPLE_ASSIGN
d[4].d.p.areas[7,6] = d[4].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1015};
  (data->simulationInfo->realParameter[979]/* d[4].d.p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[1053]/* d[4].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1016
type: SIMPLE_ASSIGN
d[4].d.p.areas[7,5] = 0.5 * d[4].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1016};
  (data->simulationInfo->realParameter[978]/* d[4].d.p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1051]/* d[4].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1017
type: SIMPLE_ASSIGN
d[4].d.p.areas[7,4] = d[4].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1017};
  (data->simulationInfo->realParameter[977]/* d[4].d.p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[1052]/* d[4].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1018
type: SIMPLE_ASSIGN
d[4].d.p.areas[7,3] = 0.5 * d[4].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1018};
  (data->simulationInfo->realParameter[976]/* d[4].d.p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1052]/* d[4].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1019
type: SIMPLE_ASSIGN
d[4].d.p.areas[7,2] = 0.5 * d[4].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1019};
  (data->simulationInfo->realParameter[975]/* d[4].d.p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1051]/* d[4].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1020
type: SIMPLE_ASSIGN
d[4].d.p.areas[6,6] = d[4].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1020};
  (data->simulationInfo->realParameter[973]/* d[4].d.p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[1053]/* d[4].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1021
type: SIMPLE_ASSIGN
d[4].d.p.areas[6,5] = 0.5 * d[4].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1021};
  (data->simulationInfo->realParameter[972]/* d[4].d.p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1051]/* d[4].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1022
type: SIMPLE_ASSIGN
d[4].d.p.areas[6,4] = 0.5 * d[4].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1022};
  (data->simulationInfo->realParameter[971]/* d[4].d.p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1052]/* d[4].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1023
type: SIMPLE_ASSIGN
d[4].d.p.areas[6,2] = d[4].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1023};
  (data->simulationInfo->realParameter[969]/* d[4].d.p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[1051]/* d[4].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1024
type: SIMPLE_ASSIGN
d[4].d.p.areas[6,1] = 0.5 * d[4].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1024};
  (data->simulationInfo->realParameter[968]/* d[4].d.p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1051]/* d[4].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1025
type: SIMPLE_ASSIGN
d[4].d.p.areas[5,6] = d[4].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1025};
  (data->simulationInfo->realParameter[967]/* d[4].d.p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[1053]/* d[4].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1026
type: SIMPLE_ASSIGN
d[4].d.p.areas[5,5] = 0.5 * d[4].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1026};
  (data->simulationInfo->realParameter[966]/* d[4].d.p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1051]/* d[4].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1027
type: SIMPLE_ASSIGN
d[4].d.p.areas[5,4] = 0.5 * d[4].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1027};
  (data->simulationInfo->realParameter[965]/* d[4].d.p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1052]/* d[4].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1028
type: SIMPLE_ASSIGN
d[4].d.p.areas[5,2] = 0.5 * d[4].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1028};
  (data->simulationInfo->realParameter[963]/* d[4].d.p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1051]/* d[4].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1029
type: SIMPLE_ASSIGN
d[4].d.p.areas[4,6] = 0.5 * d[4].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1029};
  (data->simulationInfo->realParameter[961]/* d[4].d.p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1053]/* d[4].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1030
type: SIMPLE_ASSIGN
d[4].d.p.areas[4,4] = d[4].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1030};
  (data->simulationInfo->realParameter[959]/* d[4].d.p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[1052]/* d[4].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1031
type: SIMPLE_ASSIGN
d[4].d.p.areas[4,3] = 0.5 * d[4].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1031};
  (data->simulationInfo->realParameter[958]/* d[4].d.p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1052]/* d[4].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1032
type: SIMPLE_ASSIGN
d[4].d.p.areas[4,2] = d[4].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1032};
  (data->simulationInfo->realParameter[957]/* d[4].d.p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[1051]/* d[4].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1033
type: SIMPLE_ASSIGN
d[4].d.p.areas[4,1] = 0.5 * d[4].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1033};
  (data->simulationInfo->realParameter[956]/* d[4].d.p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1051]/* d[4].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1034
type: SIMPLE_ASSIGN
d[4].d.p.areas[3,6] = 0.5 * d[4].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1034};
  (data->simulationInfo->realParameter[955]/* d[4].d.p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1053]/* d[4].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1035
type: SIMPLE_ASSIGN
d[4].d.p.areas[3,4] = d[4].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1035};
  (data->simulationInfo->realParameter[953]/* d[4].d.p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[1052]/* d[4].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1036
type: SIMPLE_ASSIGN
d[4].d.p.areas[3,3] = 0.5 * d[4].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1036};
  (data->simulationInfo->realParameter[952]/* d[4].d.p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1052]/* d[4].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1037
type: SIMPLE_ASSIGN
d[4].d.p.areas[3,2] = 0.5 * d[4].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1037};
  (data->simulationInfo->realParameter[951]/* d[4].d.p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1051]/* d[4].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1038
type: SIMPLE_ASSIGN
d[4].d.p.areas[2,6] = 0.5 * d[4].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1038};
  (data->simulationInfo->realParameter[949]/* d[4].d.p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1053]/* d[4].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1039
type: SIMPLE_ASSIGN
d[4].d.p.areas[2,4] = 0.5 * d[4].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1039};
  (data->simulationInfo->realParameter[947]/* d[4].d.p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1052]/* d[4].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1040
type: SIMPLE_ASSIGN
d[4].d.p.areas[2,2] = d[4].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1040(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1040};
  (data->simulationInfo->realParameter[945]/* d[4].d.p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[1051]/* d[4].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1041
type: SIMPLE_ASSIGN
d[4].d.p.areas[2,1] = 0.5 * d[4].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1041};
  (data->simulationInfo->realParameter[944]/* d[4].d.p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1051]/* d[4].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1042
type: SIMPLE_ASSIGN
d[4].d.p.areas[1,6] = 0.5 * d[4].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1042};
  (data->simulationInfo->realParameter[943]/* d[4].d.p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1053]/* d[4].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1043
type: SIMPLE_ASSIGN
d[4].d.p.areas[1,4] = 0.5 * d[4].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1043};
  (data->simulationInfo->realParameter[941]/* d[4].d.p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1052]/* d[4].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1044
type: SIMPLE_ASSIGN
d[4].d.p.areas[1,2] = 0.5 * d[4].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1044};
  (data->simulationInfo->realParameter[939]/* d[4].d.p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1051]/* d[4].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1045
type: SIMPLE_ASSIGN
d[4].d.p.capacity = 18000.0 * d[4].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1045};
  (data->simulationInfo->realParameter[1001]/* d[4].d.p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[1109]/* d[4].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1046
type: SIMPLE_ASSIGN
d[4].d.p.rechargedThreshold = d[4].d.p.capacity * d[4].d.p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1046};
  (data->simulationInfo->realParameter[1101]/* d[4].d.p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[1001]/* d[4].d.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1097]/* d[4].d.p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1047
type: SIMPLE_ASSIGN
d[4].d.p.dangerousBatteryLevel = d[4].d.p.capacity * d[4].d.p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1047};
  (data->simulationInfo->realParameter[1025]/* d[4].d.p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[1001]/* d[4].d.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1029]/* d[4].d.p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1048
type: SIMPLE_ASSIGN
d[4].d.p.rechargeRate = 2.5 * d[4].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1048};
  (data->simulationInfo->realParameter[1093]/* d[4].d.p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[1109]/* d[4].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1049
type: SIMPLE_ASSIGN
d[4].d.p.commDischarge = 5.0 * d[4].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1049};
  (data->simulationInfo->realParameter[1009]/* d[4].d.p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[1109]/* d[4].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1050
type: SIMPLE_ASSIGN
d[4].d.p.batteryDischarge = d[4].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1050};
  (data->simulationInfo->realParameter[997]/* d[4].d.p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[1109]/* d[4].d.p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 1051
type: SIMPLE_ASSIGN
d[4].d.p.dangerRadius = 3.0 + d[4].d.p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_1051(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1051};
  (data->simulationInfo->realParameter[1021]/* d[4].d.p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[1073]/* d[4].d.p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 1052
type: SIMPLE_ASSIGN
d[4].p.areas[8,6] = d[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1052};
  (data->simulationInfo->realParameter[1317]/* d[4].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[1385]/* d[4].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1053
type: SIMPLE_ASSIGN
d[4].p.areas[8,5] = 0.5 * d[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1053(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1053};
  (data->simulationInfo->realParameter[1316]/* d[4].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1383]/* d[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1054
type: SIMPLE_ASSIGN
d[4].p.areas[8,4] = d[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1054(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1054};
  (data->simulationInfo->realParameter[1315]/* d[4].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[1384]/* d[4].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1055
type: SIMPLE_ASSIGN
d[4].p.areas[8,3] = 0.5 * d[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1055};
  (data->simulationInfo->realParameter[1314]/* d[4].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1384]/* d[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1056
type: SIMPLE_ASSIGN
d[4].p.areas[8,2] = d[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1056};
  (data->simulationInfo->realParameter[1313]/* d[4].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[1383]/* d[4].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1057
type: SIMPLE_ASSIGN
d[4].p.areas[8,1] = 0.5 * d[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1057};
  (data->simulationInfo->realParameter[1312]/* d[4].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1383]/* d[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1058
type: SIMPLE_ASSIGN
d[4].p.areas[7,6] = d[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1058(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1058};
  (data->simulationInfo->realParameter[1311]/* d[4].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[1385]/* d[4].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1059
type: SIMPLE_ASSIGN
d[4].p.areas[7,5] = 0.5 * d[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1059};
  (data->simulationInfo->realParameter[1310]/* d[4].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1383]/* d[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1060
type: SIMPLE_ASSIGN
d[4].p.areas[7,4] = d[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1060};
  (data->simulationInfo->realParameter[1309]/* d[4].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[1384]/* d[4].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1061
type: SIMPLE_ASSIGN
d[4].p.areas[7,3] = 0.5 * d[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1061};
  (data->simulationInfo->realParameter[1308]/* d[4].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1384]/* d[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1062
type: SIMPLE_ASSIGN
d[4].p.areas[7,2] = 0.5 * d[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1062};
  (data->simulationInfo->realParameter[1307]/* d[4].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1383]/* d[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1063
type: SIMPLE_ASSIGN
d[4].p.areas[6,6] = d[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1063};
  (data->simulationInfo->realParameter[1305]/* d[4].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[1385]/* d[4].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1064
type: SIMPLE_ASSIGN
d[4].p.areas[6,5] = 0.5 * d[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1064};
  (data->simulationInfo->realParameter[1304]/* d[4].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1383]/* d[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1065
type: SIMPLE_ASSIGN
d[4].p.areas[6,4] = 0.5 * d[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1065};
  (data->simulationInfo->realParameter[1303]/* d[4].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1384]/* d[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1066
type: SIMPLE_ASSIGN
d[4].p.areas[6,2] = d[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1066};
  (data->simulationInfo->realParameter[1301]/* d[4].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[1383]/* d[4].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1067
type: SIMPLE_ASSIGN
d[4].p.areas[6,1] = 0.5 * d[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1067};
  (data->simulationInfo->realParameter[1300]/* d[4].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1383]/* d[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1068
type: SIMPLE_ASSIGN
d[4].p.areas[5,6] = d[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1068};
  (data->simulationInfo->realParameter[1299]/* d[4].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[1385]/* d[4].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1069
type: SIMPLE_ASSIGN
d[4].p.areas[5,5] = 0.5 * d[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1069};
  (data->simulationInfo->realParameter[1298]/* d[4].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1383]/* d[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1070
type: SIMPLE_ASSIGN
d[4].p.areas[5,4] = 0.5 * d[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1070};
  (data->simulationInfo->realParameter[1297]/* d[4].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1384]/* d[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1071
type: SIMPLE_ASSIGN
d[4].p.areas[5,2] = 0.5 * d[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1071};
  (data->simulationInfo->realParameter[1295]/* d[4].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1383]/* d[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1072
type: SIMPLE_ASSIGN
d[4].p.areas[4,6] = 0.5 * d[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1072};
  (data->simulationInfo->realParameter[1293]/* d[4].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1385]/* d[4].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1073
type: SIMPLE_ASSIGN
d[4].p.areas[4,4] = d[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1073(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1073};
  (data->simulationInfo->realParameter[1291]/* d[4].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[1384]/* d[4].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1074
type: SIMPLE_ASSIGN
d[4].p.areas[4,3] = 0.5 * d[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1074};
  (data->simulationInfo->realParameter[1290]/* d[4].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1384]/* d[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1075
type: SIMPLE_ASSIGN
d[4].p.areas[4,2] = d[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1075};
  (data->simulationInfo->realParameter[1289]/* d[4].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[1383]/* d[4].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1076
type: SIMPLE_ASSIGN
d[4].p.areas[4,1] = 0.5 * d[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1076};
  (data->simulationInfo->realParameter[1288]/* d[4].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1383]/* d[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1077
type: SIMPLE_ASSIGN
d[4].p.areas[3,6] = 0.5 * d[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1077};
  (data->simulationInfo->realParameter[1287]/* d[4].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1385]/* d[4].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1078
type: SIMPLE_ASSIGN
d[4].p.areas[3,4] = d[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1078};
  (data->simulationInfo->realParameter[1285]/* d[4].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[1384]/* d[4].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1079
type: SIMPLE_ASSIGN
d[4].p.areas[3,3] = 0.5 * d[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1079};
  (data->simulationInfo->realParameter[1284]/* d[4].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1384]/* d[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1080
type: SIMPLE_ASSIGN
d[4].p.areas[3,2] = 0.5 * d[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1080};
  (data->simulationInfo->realParameter[1283]/* d[4].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1383]/* d[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1081
type: SIMPLE_ASSIGN
d[4].p.areas[2,6] = 0.5 * d[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1081};
  (data->simulationInfo->realParameter[1281]/* d[4].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1385]/* d[4].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1082
type: SIMPLE_ASSIGN
d[4].p.areas[2,4] = 0.5 * d[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1082};
  (data->simulationInfo->realParameter[1279]/* d[4].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1384]/* d[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1083
type: SIMPLE_ASSIGN
d[4].p.areas[2,2] = d[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1083};
  (data->simulationInfo->realParameter[1277]/* d[4].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[1383]/* d[4].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1084
type: SIMPLE_ASSIGN
d[4].p.areas[2,1] = 0.5 * d[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1084};
  (data->simulationInfo->realParameter[1276]/* d[4].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1383]/* d[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1085
type: SIMPLE_ASSIGN
d[4].p.areas[1,6] = 0.5 * d[4].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1085};
  (data->simulationInfo->realParameter[1275]/* d[4].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1385]/* d[4].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1086
type: SIMPLE_ASSIGN
d[4].p.areas[1,4] = 0.5 * d[4].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1086};
  (data->simulationInfo->realParameter[1273]/* d[4].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1384]/* d[4].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1087
type: SIMPLE_ASSIGN
d[4].p.areas[1,2] = 0.5 * d[4].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1087};
  (data->simulationInfo->realParameter[1271]/* d[4].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1383]/* d[4].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1088
type: SIMPLE_ASSIGN
d[4].p.capacity = 18000.0 * d[4].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1088};
  (data->simulationInfo->realParameter[1333]/* d[4].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[1441]/* d[4].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1089
type: SIMPLE_ASSIGN
d[4].p.rechargedThreshold = d[4].p.capacity * d[4].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1089};
  (data->simulationInfo->realParameter[1433]/* d[4].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[1333]/* d[4].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1429]/* d[4].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1090
type: SIMPLE_ASSIGN
d[4].p.dangerousBatteryLevel = d[4].p.capacity * d[4].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1090};
  (data->simulationInfo->realParameter[1357]/* d[4].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[1333]/* d[4].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1361]/* d[4].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1091
type: SIMPLE_ASSIGN
d[4].p.rechargeRate = 2.5 * d[4].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1091};
  (data->simulationInfo->realParameter[1425]/* d[4].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[1441]/* d[4].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1092
type: SIMPLE_ASSIGN
d[4].p.commDischarge = 5.0 * d[4].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1092};
  (data->simulationInfo->realParameter[1341]/* d[4].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[1441]/* d[4].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1093
type: SIMPLE_ASSIGN
d[4].p.batteryDischarge = d[4].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1093};
  (data->simulationInfo->realParameter[1329]/* d[4].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[1441]/* d[4].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 1094
type: SIMPLE_ASSIGN
d[4].p.dangerRadius = 3.0 + d[4].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1094};
  (data->simulationInfo->realParameter[1353]/* d[4].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[1405]/* d[4].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 1096
type: SIMPLE_ASSIGN
d[3].ctrl.kx2 = 2.0 * d[3].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_1096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1096};
  (data->simulationInfo->realParameter[428]/* d[3].ctrl.kx2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[448]/* d[3].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 1097
type: SIMPLE_ASSIGN
d[3].ctrl.kx1 = -d[3].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1097};
  modelica_real tmp3;
  tmp3 = (data->simulationInfo->realParameter[448]/* d[3].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[424]/* d[3].ctrl.kx1 PARAM */)  = (-((tmp3 * tmp3)));
  TRACE_POP
}

/*
equation index: 1098
type: SIMPLE_ASSIGN
d[3].ctrl.ky2 = 2.0 * d[3].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1098};
  (data->simulationInfo->realParameter[436]/* d[3].ctrl.ky2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[448]/* d[3].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 1099
type: SIMPLE_ASSIGN
d[3].ctrl.ky1 = -d[3].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1099};
  modelica_real tmp4;
  tmp4 = (data->simulationInfo->realParameter[448]/* d[3].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[432]/* d[3].ctrl.ky1 PARAM */)  = (-((tmp4 * tmp4)));
  TRACE_POP
}

/*
equation index: 1100
type: SIMPLE_ASSIGN
d[3].ctrl.kz2 = 2.0 * d[3].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1100};
  (data->simulationInfo->realParameter[444]/* d[3].ctrl.kz2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[448]/* d[3].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 1101
type: SIMPLE_ASSIGN
d[3].ctrl.kz1 = -d[3].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1101};
  modelica_real tmp5;
  tmp5 = (data->simulationInfo->realParameter[448]/* d[3].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[440]/* d[3].ctrl.kz1 PARAM */)  = (-((tmp5 * tmp5)));
  TRACE_POP
}

/*
equation index: 1102
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[8,6] = d[3].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1102};
  (data->simulationInfo->realParameter[605]/* d[3].ctrl.prm.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[718]/* d[3].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1103
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[8,5] = 0.5 * d[3].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1103};
  (data->simulationInfo->realParameter[604]/* d[3].ctrl.prm.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[716]/* d[3].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1104
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[8,4] = d[3].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1104};
  (data->simulationInfo->realParameter[603]/* d[3].ctrl.prm.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[717]/* d[3].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1105
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[8,3] = 0.5 * d[3].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1105};
  (data->simulationInfo->realParameter[602]/* d[3].ctrl.prm.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[717]/* d[3].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1106
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[8,2] = d[3].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1106};
  (data->simulationInfo->realParameter[601]/* d[3].ctrl.prm.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[716]/* d[3].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1107
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[8,1] = 0.5 * d[3].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1107};
  (data->simulationInfo->realParameter[600]/* d[3].ctrl.prm.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[716]/* d[3].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1108
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[7,6] = d[3].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1108};
  (data->simulationInfo->realParameter[599]/* d[3].ctrl.prm.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[718]/* d[3].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1109
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[7,5] = 0.5 * d[3].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1109};
  (data->simulationInfo->realParameter[598]/* d[3].ctrl.prm.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[716]/* d[3].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1110
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[7,4] = d[3].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1110};
  (data->simulationInfo->realParameter[597]/* d[3].ctrl.prm.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[717]/* d[3].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1111
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[7,3] = 0.5 * d[3].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1111};
  (data->simulationInfo->realParameter[596]/* d[3].ctrl.prm.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[717]/* d[3].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1112
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[7,2] = 0.5 * d[3].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1112};
  (data->simulationInfo->realParameter[595]/* d[3].ctrl.prm.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[716]/* d[3].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1113
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[6,6] = d[3].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1113};
  (data->simulationInfo->realParameter[593]/* d[3].ctrl.prm.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[718]/* d[3].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1114
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[6,5] = 0.5 * d[3].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1114};
  (data->simulationInfo->realParameter[592]/* d[3].ctrl.prm.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[716]/* d[3].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1115
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[6,4] = 0.5 * d[3].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1115};
  (data->simulationInfo->realParameter[591]/* d[3].ctrl.prm.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[717]/* d[3].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1116
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[6,2] = d[3].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1116};
  (data->simulationInfo->realParameter[589]/* d[3].ctrl.prm.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[716]/* d[3].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1117
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[6,1] = 0.5 * d[3].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1117};
  (data->simulationInfo->realParameter[588]/* d[3].ctrl.prm.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[716]/* d[3].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1118
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[5,6] = d[3].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1118};
  (data->simulationInfo->realParameter[587]/* d[3].ctrl.prm.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[718]/* d[3].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1119
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[5,5] = 0.5 * d[3].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1119};
  (data->simulationInfo->realParameter[586]/* d[3].ctrl.prm.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[716]/* d[3].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1120
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[5,4] = 0.5 * d[3].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1120};
  (data->simulationInfo->realParameter[585]/* d[3].ctrl.prm.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[717]/* d[3].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1121
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[5,2] = 0.5 * d[3].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1121};
  (data->simulationInfo->realParameter[583]/* d[3].ctrl.prm.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[716]/* d[3].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1122
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[4,6] = 0.5 * d[3].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1122};
  (data->simulationInfo->realParameter[581]/* d[3].ctrl.prm.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[718]/* d[3].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1123
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[4,4] = d[3].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1123};
  (data->simulationInfo->realParameter[579]/* d[3].ctrl.prm.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[717]/* d[3].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1124
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[4,3] = 0.5 * d[3].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1124};
  (data->simulationInfo->realParameter[578]/* d[3].ctrl.prm.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[717]/* d[3].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1125
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[4,2] = d[3].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1125};
  (data->simulationInfo->realParameter[577]/* d[3].ctrl.prm.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[716]/* d[3].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1126
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[4,1] = 0.5 * d[3].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1126};
  (data->simulationInfo->realParameter[576]/* d[3].ctrl.prm.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[716]/* d[3].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1127
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[3,6] = 0.5 * d[3].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1127};
  (data->simulationInfo->realParameter[575]/* d[3].ctrl.prm.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[718]/* d[3].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1128
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[3,4] = d[3].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1128};
  (data->simulationInfo->realParameter[573]/* d[3].ctrl.prm.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[717]/* d[3].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1129
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[3,3] = 0.5 * d[3].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1129};
  (data->simulationInfo->realParameter[572]/* d[3].ctrl.prm.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[717]/* d[3].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1130
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[3,2] = 0.5 * d[3].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1130};
  (data->simulationInfo->realParameter[571]/* d[3].ctrl.prm.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[716]/* d[3].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1131
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[2,6] = 0.5 * d[3].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1131};
  (data->simulationInfo->realParameter[569]/* d[3].ctrl.prm.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[718]/* d[3].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1132
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[2,4] = 0.5 * d[3].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1132};
  (data->simulationInfo->realParameter[567]/* d[3].ctrl.prm.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[717]/* d[3].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1133
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[2,2] = d[3].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1133};
  (data->simulationInfo->realParameter[565]/* d[3].ctrl.prm.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[716]/* d[3].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1134
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[2,1] = 0.5 * d[3].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1134};
  (data->simulationInfo->realParameter[564]/* d[3].ctrl.prm.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[716]/* d[3].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1135
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[1,6] = 0.5 * d[3].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1135};
  (data->simulationInfo->realParameter[563]/* d[3].ctrl.prm.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[718]/* d[3].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1136
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[1,4] = 0.5 * d[3].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1136};
  (data->simulationInfo->realParameter[561]/* d[3].ctrl.prm.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[717]/* d[3].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1137
type: SIMPLE_ASSIGN
d[3].ctrl.prm.areas[1,2] = 0.5 * d[3].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1137};
  (data->simulationInfo->realParameter[559]/* d[3].ctrl.prm.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[716]/* d[3].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1138
type: SIMPLE_ASSIGN
d[3].ctrl.prm.capacity = 18000.0 * d[3].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1138};
  (data->simulationInfo->realParameter[668]/* d[3].ctrl.prm.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[776]/* d[3].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1139
type: SIMPLE_ASSIGN
d[3].ctrl.prm.rechargedThreshold = d[3].ctrl.prm.capacity * d[3].ctrl.prm.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1139};
  (data->simulationInfo->realParameter[768]/* d[3].ctrl.prm.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[668]/* d[3].ctrl.prm.capacity PARAM */) ) * ((data->simulationInfo->realParameter[764]/* d[3].ctrl.prm.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1140
type: SIMPLE_ASSIGN
d[3].ctrl.prm.dangerousBatteryLevel = d[3].ctrl.prm.capacity * d[3].ctrl.prm.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1140};
  (data->simulationInfo->realParameter[692]/* d[3].ctrl.prm.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[668]/* d[3].ctrl.prm.capacity PARAM */) ) * ((data->simulationInfo->realParameter[696]/* d[3].ctrl.prm.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1141
type: SIMPLE_ASSIGN
d[3].ctrl.prm.rechargeRate = 2.5 * d[3].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1141};
  (data->simulationInfo->realParameter[760]/* d[3].ctrl.prm.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[776]/* d[3].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1142
type: SIMPLE_ASSIGN
d[3].ctrl.prm.commDischarge = 5.0 * d[3].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1142};
  (data->simulationInfo->realParameter[676]/* d[3].ctrl.prm.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[776]/* d[3].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1143
type: SIMPLE_ASSIGN
d[3].ctrl.prm.batteryDischarge = d[3].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1143};
  (data->simulationInfo->realParameter[664]/* d[3].ctrl.prm.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[776]/* d[3].ctrl.prm.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 1144
type: SIMPLE_ASSIGN
d[3].ctrl.prm.dangerRadius = 3.0 + d[3].ctrl.prm.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_1144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1144};
  (data->simulationInfo->realParameter[688]/* d[3].ctrl.prm.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[740]/* d[3].ctrl.prm.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 1145
type: SIMPLE_ASSIGN
d[3].d.p.areas[8,6] = d[3].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1145};
  (data->simulationInfo->realParameter[937]/* d[3].d.p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[1050]/* d[3].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1146
type: SIMPLE_ASSIGN
d[3].d.p.areas[8,5] = 0.5 * d[3].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1146};
  (data->simulationInfo->realParameter[936]/* d[3].d.p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1048]/* d[3].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1147
type: SIMPLE_ASSIGN
d[3].d.p.areas[8,4] = d[3].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1147};
  (data->simulationInfo->realParameter[935]/* d[3].d.p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[1049]/* d[3].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1148
type: SIMPLE_ASSIGN
d[3].d.p.areas[8,3] = 0.5 * d[3].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1148};
  (data->simulationInfo->realParameter[934]/* d[3].d.p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1049]/* d[3].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1149
type: SIMPLE_ASSIGN
d[3].d.p.areas[8,2] = d[3].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1149};
  (data->simulationInfo->realParameter[933]/* d[3].d.p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[1048]/* d[3].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1150
type: SIMPLE_ASSIGN
d[3].d.p.areas[8,1] = 0.5 * d[3].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1150};
  (data->simulationInfo->realParameter[932]/* d[3].d.p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1048]/* d[3].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1151
type: SIMPLE_ASSIGN
d[3].d.p.areas[7,6] = d[3].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1151};
  (data->simulationInfo->realParameter[931]/* d[3].d.p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[1050]/* d[3].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1152
type: SIMPLE_ASSIGN
d[3].d.p.areas[7,5] = 0.5 * d[3].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1152};
  (data->simulationInfo->realParameter[930]/* d[3].d.p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1048]/* d[3].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1153
type: SIMPLE_ASSIGN
d[3].d.p.areas[7,4] = d[3].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1153};
  (data->simulationInfo->realParameter[929]/* d[3].d.p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[1049]/* d[3].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1154
type: SIMPLE_ASSIGN
d[3].d.p.areas[7,3] = 0.5 * d[3].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1154};
  (data->simulationInfo->realParameter[928]/* d[3].d.p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1049]/* d[3].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1155
type: SIMPLE_ASSIGN
d[3].d.p.areas[7,2] = 0.5 * d[3].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1155};
  (data->simulationInfo->realParameter[927]/* d[3].d.p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1048]/* d[3].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1156
type: SIMPLE_ASSIGN
d[3].d.p.areas[6,6] = d[3].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1156};
  (data->simulationInfo->realParameter[925]/* d[3].d.p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[1050]/* d[3].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1157
type: SIMPLE_ASSIGN
d[3].d.p.areas[6,5] = 0.5 * d[3].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1157};
  (data->simulationInfo->realParameter[924]/* d[3].d.p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1048]/* d[3].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1158
type: SIMPLE_ASSIGN
d[3].d.p.areas[6,4] = 0.5 * d[3].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1158};
  (data->simulationInfo->realParameter[923]/* d[3].d.p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1049]/* d[3].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1159
type: SIMPLE_ASSIGN
d[3].d.p.areas[6,2] = d[3].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1159};
  (data->simulationInfo->realParameter[921]/* d[3].d.p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[1048]/* d[3].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1160
type: SIMPLE_ASSIGN
d[3].d.p.areas[6,1] = 0.5 * d[3].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1160};
  (data->simulationInfo->realParameter[920]/* d[3].d.p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1048]/* d[3].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1161
type: SIMPLE_ASSIGN
d[3].d.p.areas[5,6] = d[3].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1161};
  (data->simulationInfo->realParameter[919]/* d[3].d.p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[1050]/* d[3].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1162
type: SIMPLE_ASSIGN
d[3].d.p.areas[5,5] = 0.5 * d[3].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1162};
  (data->simulationInfo->realParameter[918]/* d[3].d.p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1048]/* d[3].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1163
type: SIMPLE_ASSIGN
d[3].d.p.areas[5,4] = 0.5 * d[3].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1163};
  (data->simulationInfo->realParameter[917]/* d[3].d.p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1049]/* d[3].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1164
type: SIMPLE_ASSIGN
d[3].d.p.areas[5,2] = 0.5 * d[3].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1164};
  (data->simulationInfo->realParameter[915]/* d[3].d.p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1048]/* d[3].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1165
type: SIMPLE_ASSIGN
d[3].d.p.areas[4,6] = 0.5 * d[3].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1165};
  (data->simulationInfo->realParameter[913]/* d[3].d.p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1050]/* d[3].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1166
type: SIMPLE_ASSIGN
d[3].d.p.areas[4,4] = d[3].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1166};
  (data->simulationInfo->realParameter[911]/* d[3].d.p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[1049]/* d[3].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1167
type: SIMPLE_ASSIGN
d[3].d.p.areas[4,3] = 0.5 * d[3].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1167};
  (data->simulationInfo->realParameter[910]/* d[3].d.p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1049]/* d[3].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1168
type: SIMPLE_ASSIGN
d[3].d.p.areas[4,2] = d[3].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1168};
  (data->simulationInfo->realParameter[909]/* d[3].d.p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[1048]/* d[3].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1169
type: SIMPLE_ASSIGN
d[3].d.p.areas[4,1] = 0.5 * d[3].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1169};
  (data->simulationInfo->realParameter[908]/* d[3].d.p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1048]/* d[3].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1170
type: SIMPLE_ASSIGN
d[3].d.p.areas[3,6] = 0.5 * d[3].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1170};
  (data->simulationInfo->realParameter[907]/* d[3].d.p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1050]/* d[3].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1171
type: SIMPLE_ASSIGN
d[3].d.p.areas[3,4] = d[3].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1171};
  (data->simulationInfo->realParameter[905]/* d[3].d.p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[1049]/* d[3].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1172
type: SIMPLE_ASSIGN
d[3].d.p.areas[3,3] = 0.5 * d[3].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1172};
  (data->simulationInfo->realParameter[904]/* d[3].d.p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1049]/* d[3].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1173
type: SIMPLE_ASSIGN
d[3].d.p.areas[3,2] = 0.5 * d[3].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1173};
  (data->simulationInfo->realParameter[903]/* d[3].d.p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1048]/* d[3].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1174
type: SIMPLE_ASSIGN
d[3].d.p.areas[2,6] = 0.5 * d[3].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1174};
  (data->simulationInfo->realParameter[901]/* d[3].d.p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1050]/* d[3].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1175
type: SIMPLE_ASSIGN
d[3].d.p.areas[2,4] = 0.5 * d[3].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1175};
  (data->simulationInfo->realParameter[899]/* d[3].d.p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1049]/* d[3].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1176
type: SIMPLE_ASSIGN
d[3].d.p.areas[2,2] = d[3].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1176};
  (data->simulationInfo->realParameter[897]/* d[3].d.p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[1048]/* d[3].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1177
type: SIMPLE_ASSIGN
d[3].d.p.areas[2,1] = 0.5 * d[3].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1177};
  (data->simulationInfo->realParameter[896]/* d[3].d.p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1048]/* d[3].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1178
type: SIMPLE_ASSIGN
d[3].d.p.areas[1,6] = 0.5 * d[3].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1178};
  (data->simulationInfo->realParameter[895]/* d[3].d.p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1050]/* d[3].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1179
type: SIMPLE_ASSIGN
d[3].d.p.areas[1,4] = 0.5 * d[3].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1179};
  (data->simulationInfo->realParameter[893]/* d[3].d.p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1049]/* d[3].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1180
type: SIMPLE_ASSIGN
d[3].d.p.areas[1,2] = 0.5 * d[3].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1180};
  (data->simulationInfo->realParameter[891]/* d[3].d.p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1048]/* d[3].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1181
type: SIMPLE_ASSIGN
d[3].d.p.capacity = 18000.0 * d[3].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1181};
  (data->simulationInfo->realParameter[1000]/* d[3].d.p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[1108]/* d[3].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1182
type: SIMPLE_ASSIGN
d[3].d.p.rechargedThreshold = d[3].d.p.capacity * d[3].d.p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1182};
  (data->simulationInfo->realParameter[1100]/* d[3].d.p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[1000]/* d[3].d.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1096]/* d[3].d.p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1183
type: SIMPLE_ASSIGN
d[3].d.p.dangerousBatteryLevel = d[3].d.p.capacity * d[3].d.p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1183};
  (data->simulationInfo->realParameter[1024]/* d[3].d.p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[1000]/* d[3].d.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1028]/* d[3].d.p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1184
type: SIMPLE_ASSIGN
d[3].d.p.rechargeRate = 2.5 * d[3].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1184};
  (data->simulationInfo->realParameter[1092]/* d[3].d.p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[1108]/* d[3].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1185
type: SIMPLE_ASSIGN
d[3].d.p.commDischarge = 5.0 * d[3].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1185};
  (data->simulationInfo->realParameter[1008]/* d[3].d.p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[1108]/* d[3].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1186
type: SIMPLE_ASSIGN
d[3].d.p.batteryDischarge = d[3].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1186};
  (data->simulationInfo->realParameter[996]/* d[3].d.p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[1108]/* d[3].d.p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 1187
type: SIMPLE_ASSIGN
d[3].d.p.dangerRadius = 3.0 + d[3].d.p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_1187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1187};
  (data->simulationInfo->realParameter[1020]/* d[3].d.p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[1072]/* d[3].d.p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 1188
type: SIMPLE_ASSIGN
d[3].p.areas[8,6] = d[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1188};
  (data->simulationInfo->realParameter[1269]/* d[3].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[1382]/* d[3].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1189
type: SIMPLE_ASSIGN
d[3].p.areas[8,5] = 0.5 * d[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1189};
  (data->simulationInfo->realParameter[1268]/* d[3].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1380]/* d[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1190
type: SIMPLE_ASSIGN
d[3].p.areas[8,4] = d[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1190};
  (data->simulationInfo->realParameter[1267]/* d[3].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[1381]/* d[3].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1191
type: SIMPLE_ASSIGN
d[3].p.areas[8,3] = 0.5 * d[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1191};
  (data->simulationInfo->realParameter[1266]/* d[3].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1381]/* d[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1192
type: SIMPLE_ASSIGN
d[3].p.areas[8,2] = d[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1192};
  (data->simulationInfo->realParameter[1265]/* d[3].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[1380]/* d[3].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1193
type: SIMPLE_ASSIGN
d[3].p.areas[8,1] = 0.5 * d[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1193};
  (data->simulationInfo->realParameter[1264]/* d[3].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1380]/* d[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1194
type: SIMPLE_ASSIGN
d[3].p.areas[7,6] = d[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1194};
  (data->simulationInfo->realParameter[1263]/* d[3].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[1382]/* d[3].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1195
type: SIMPLE_ASSIGN
d[3].p.areas[7,5] = 0.5 * d[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1195};
  (data->simulationInfo->realParameter[1262]/* d[3].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1380]/* d[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1196
type: SIMPLE_ASSIGN
d[3].p.areas[7,4] = d[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1196};
  (data->simulationInfo->realParameter[1261]/* d[3].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[1381]/* d[3].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1197
type: SIMPLE_ASSIGN
d[3].p.areas[7,3] = 0.5 * d[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1197};
  (data->simulationInfo->realParameter[1260]/* d[3].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1381]/* d[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1198
type: SIMPLE_ASSIGN
d[3].p.areas[7,2] = 0.5 * d[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1198};
  (data->simulationInfo->realParameter[1259]/* d[3].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1380]/* d[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1199
type: SIMPLE_ASSIGN
d[3].p.areas[6,6] = d[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1199};
  (data->simulationInfo->realParameter[1257]/* d[3].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[1382]/* d[3].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1200
type: SIMPLE_ASSIGN
d[3].p.areas[6,5] = 0.5 * d[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1200};
  (data->simulationInfo->realParameter[1256]/* d[3].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1380]/* d[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1201
type: SIMPLE_ASSIGN
d[3].p.areas[6,4] = 0.5 * d[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1201};
  (data->simulationInfo->realParameter[1255]/* d[3].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1381]/* d[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1202
type: SIMPLE_ASSIGN
d[3].p.areas[6,2] = d[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1202};
  (data->simulationInfo->realParameter[1253]/* d[3].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[1380]/* d[3].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1203
type: SIMPLE_ASSIGN
d[3].p.areas[6,1] = 0.5 * d[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1203};
  (data->simulationInfo->realParameter[1252]/* d[3].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1380]/* d[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1204
type: SIMPLE_ASSIGN
d[3].p.areas[5,6] = d[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1204};
  (data->simulationInfo->realParameter[1251]/* d[3].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[1382]/* d[3].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1205
type: SIMPLE_ASSIGN
d[3].p.areas[5,5] = 0.5 * d[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1205};
  (data->simulationInfo->realParameter[1250]/* d[3].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1380]/* d[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1206
type: SIMPLE_ASSIGN
d[3].p.areas[5,4] = 0.5 * d[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1206};
  (data->simulationInfo->realParameter[1249]/* d[3].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1381]/* d[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1207
type: SIMPLE_ASSIGN
d[3].p.areas[5,2] = 0.5 * d[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1207};
  (data->simulationInfo->realParameter[1247]/* d[3].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1380]/* d[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1208
type: SIMPLE_ASSIGN
d[3].p.areas[4,6] = 0.5 * d[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1208};
  (data->simulationInfo->realParameter[1245]/* d[3].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1382]/* d[3].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1209
type: SIMPLE_ASSIGN
d[3].p.areas[4,4] = d[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1209};
  (data->simulationInfo->realParameter[1243]/* d[3].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[1381]/* d[3].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1210
type: SIMPLE_ASSIGN
d[3].p.areas[4,3] = 0.5 * d[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1210};
  (data->simulationInfo->realParameter[1242]/* d[3].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1381]/* d[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1211
type: SIMPLE_ASSIGN
d[3].p.areas[4,2] = d[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1211};
  (data->simulationInfo->realParameter[1241]/* d[3].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[1380]/* d[3].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1212
type: SIMPLE_ASSIGN
d[3].p.areas[4,1] = 0.5 * d[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1212};
  (data->simulationInfo->realParameter[1240]/* d[3].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1380]/* d[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1213
type: SIMPLE_ASSIGN
d[3].p.areas[3,6] = 0.5 * d[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1213};
  (data->simulationInfo->realParameter[1239]/* d[3].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1382]/* d[3].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1214
type: SIMPLE_ASSIGN
d[3].p.areas[3,4] = d[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1214};
  (data->simulationInfo->realParameter[1237]/* d[3].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[1381]/* d[3].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1215
type: SIMPLE_ASSIGN
d[3].p.areas[3,3] = 0.5 * d[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1215};
  (data->simulationInfo->realParameter[1236]/* d[3].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1381]/* d[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1216
type: SIMPLE_ASSIGN
d[3].p.areas[3,2] = 0.5 * d[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1216};
  (data->simulationInfo->realParameter[1235]/* d[3].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1380]/* d[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1217
type: SIMPLE_ASSIGN
d[3].p.areas[2,6] = 0.5 * d[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1217};
  (data->simulationInfo->realParameter[1233]/* d[3].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1382]/* d[3].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1218
type: SIMPLE_ASSIGN
d[3].p.areas[2,4] = 0.5 * d[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1218};
  (data->simulationInfo->realParameter[1231]/* d[3].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1381]/* d[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1219
type: SIMPLE_ASSIGN
d[3].p.areas[2,2] = d[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1219};
  (data->simulationInfo->realParameter[1229]/* d[3].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[1380]/* d[3].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1220
type: SIMPLE_ASSIGN
d[3].p.areas[2,1] = 0.5 * d[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1220};
  (data->simulationInfo->realParameter[1228]/* d[3].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1380]/* d[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1221
type: SIMPLE_ASSIGN
d[3].p.areas[1,6] = 0.5 * d[3].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1221};
  (data->simulationInfo->realParameter[1227]/* d[3].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1382]/* d[3].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1222
type: SIMPLE_ASSIGN
d[3].p.areas[1,4] = 0.5 * d[3].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1222};
  (data->simulationInfo->realParameter[1225]/* d[3].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1381]/* d[3].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1223
type: SIMPLE_ASSIGN
d[3].p.areas[1,2] = 0.5 * d[3].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1223};
  (data->simulationInfo->realParameter[1223]/* d[3].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1380]/* d[3].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1224
type: SIMPLE_ASSIGN
d[3].p.capacity = 18000.0 * d[3].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1224};
  (data->simulationInfo->realParameter[1332]/* d[3].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[1440]/* d[3].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1225
type: SIMPLE_ASSIGN
d[3].p.rechargedThreshold = d[3].p.capacity * d[3].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1225};
  (data->simulationInfo->realParameter[1432]/* d[3].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[1332]/* d[3].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1428]/* d[3].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1226
type: SIMPLE_ASSIGN
d[3].p.dangerousBatteryLevel = d[3].p.capacity * d[3].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1226};
  (data->simulationInfo->realParameter[1356]/* d[3].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[1332]/* d[3].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1360]/* d[3].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1227
type: SIMPLE_ASSIGN
d[3].p.rechargeRate = 2.5 * d[3].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1227};
  (data->simulationInfo->realParameter[1424]/* d[3].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[1440]/* d[3].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1228
type: SIMPLE_ASSIGN
d[3].p.commDischarge = 5.0 * d[3].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1228};
  (data->simulationInfo->realParameter[1340]/* d[3].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[1440]/* d[3].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1229
type: SIMPLE_ASSIGN
d[3].p.batteryDischarge = d[3].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1229};
  (data->simulationInfo->realParameter[1328]/* d[3].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[1440]/* d[3].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 1230
type: SIMPLE_ASSIGN
d[3].p.dangerRadius = 3.0 + d[3].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1230};
  (data->simulationInfo->realParameter[1352]/* d[3].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[1404]/* d[3].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 1232
type: SIMPLE_ASSIGN
d[2].ctrl.kx2 = 2.0 * d[2].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1232};
  (data->simulationInfo->realParameter[427]/* d[2].ctrl.kx2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[447]/* d[2].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 1233
type: SIMPLE_ASSIGN
d[2].ctrl.kx1 = -d[2].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1233};
  modelica_real tmp6;
  tmp6 = (data->simulationInfo->realParameter[447]/* d[2].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[423]/* d[2].ctrl.kx1 PARAM */)  = (-((tmp6 * tmp6)));
  TRACE_POP
}

/*
equation index: 1234
type: SIMPLE_ASSIGN
d[2].ctrl.ky2 = 2.0 * d[2].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1234};
  (data->simulationInfo->realParameter[435]/* d[2].ctrl.ky2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[447]/* d[2].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 1235
type: SIMPLE_ASSIGN
d[2].ctrl.ky1 = -d[2].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1235};
  modelica_real tmp7;
  tmp7 = (data->simulationInfo->realParameter[447]/* d[2].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[431]/* d[2].ctrl.ky1 PARAM */)  = (-((tmp7 * tmp7)));
  TRACE_POP
}

/*
equation index: 1236
type: SIMPLE_ASSIGN
d[2].ctrl.kz2 = 2.0 * d[2].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_1236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1236};
  (data->simulationInfo->realParameter[443]/* d[2].ctrl.kz2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[447]/* d[2].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 1237
type: SIMPLE_ASSIGN
d[2].ctrl.kz1 = -d[2].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1237};
  modelica_real tmp8;
  tmp8 = (data->simulationInfo->realParameter[447]/* d[2].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[439]/* d[2].ctrl.kz1 PARAM */)  = (-((tmp8 * tmp8)));
  TRACE_POP
}

/*
equation index: 1238
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[8,6] = d[2].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1238};
  (data->simulationInfo->realParameter[557]/* d[2].ctrl.prm.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[715]/* d[2].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1239
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[8,5] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1239};
  (data->simulationInfo->realParameter[556]/* d[2].ctrl.prm.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[713]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1240
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[8,4] = d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1240};
  (data->simulationInfo->realParameter[555]/* d[2].ctrl.prm.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[714]/* d[2].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1241
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[8,3] = 0.5 * d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1241};
  (data->simulationInfo->realParameter[554]/* d[2].ctrl.prm.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[714]/* d[2].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1242
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[8,2] = d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1242};
  (data->simulationInfo->realParameter[553]/* d[2].ctrl.prm.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[713]/* d[2].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1243
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[8,1] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1243};
  (data->simulationInfo->realParameter[552]/* d[2].ctrl.prm.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[713]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1244
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[7,6] = d[2].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1244};
  (data->simulationInfo->realParameter[551]/* d[2].ctrl.prm.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[715]/* d[2].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1245
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[7,5] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1245};
  (data->simulationInfo->realParameter[550]/* d[2].ctrl.prm.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[713]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1246
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[7,4] = d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1246};
  (data->simulationInfo->realParameter[549]/* d[2].ctrl.prm.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[714]/* d[2].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1247
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[7,3] = 0.5 * d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1247};
  (data->simulationInfo->realParameter[548]/* d[2].ctrl.prm.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[714]/* d[2].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1248
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[7,2] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1248};
  (data->simulationInfo->realParameter[547]/* d[2].ctrl.prm.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[713]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1249
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[6,6] = d[2].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1249};
  (data->simulationInfo->realParameter[545]/* d[2].ctrl.prm.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[715]/* d[2].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1250
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[6,5] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1250};
  (data->simulationInfo->realParameter[544]/* d[2].ctrl.prm.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[713]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1251
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[6,4] = 0.5 * d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1251};
  (data->simulationInfo->realParameter[543]/* d[2].ctrl.prm.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[714]/* d[2].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1252
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[6,2] = d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1252};
  (data->simulationInfo->realParameter[541]/* d[2].ctrl.prm.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[713]/* d[2].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1253
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[6,1] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1253};
  (data->simulationInfo->realParameter[540]/* d[2].ctrl.prm.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[713]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1254
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[5,6] = d[2].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1254};
  (data->simulationInfo->realParameter[539]/* d[2].ctrl.prm.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[715]/* d[2].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1255
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[5,5] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1255};
  (data->simulationInfo->realParameter[538]/* d[2].ctrl.prm.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[713]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1256
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[5,4] = 0.5 * d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1256};
  (data->simulationInfo->realParameter[537]/* d[2].ctrl.prm.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[714]/* d[2].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1257
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[5,2] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1257};
  (data->simulationInfo->realParameter[535]/* d[2].ctrl.prm.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[713]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1258
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[4,6] = 0.5 * d[2].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1258};
  (data->simulationInfo->realParameter[533]/* d[2].ctrl.prm.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[715]/* d[2].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1259
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[4,4] = d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1259};
  (data->simulationInfo->realParameter[531]/* d[2].ctrl.prm.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[714]/* d[2].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1260
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[4,3] = 0.5 * d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1260};
  (data->simulationInfo->realParameter[530]/* d[2].ctrl.prm.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[714]/* d[2].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1261
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[4,2] = d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1261};
  (data->simulationInfo->realParameter[529]/* d[2].ctrl.prm.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[713]/* d[2].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1262
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[4,1] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1262};
  (data->simulationInfo->realParameter[528]/* d[2].ctrl.prm.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[713]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1263
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[3,6] = 0.5 * d[2].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1263};
  (data->simulationInfo->realParameter[527]/* d[2].ctrl.prm.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[715]/* d[2].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1264
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[3,4] = d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1264};
  (data->simulationInfo->realParameter[525]/* d[2].ctrl.prm.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[714]/* d[2].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1265
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[3,3] = 0.5 * d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1265};
  (data->simulationInfo->realParameter[524]/* d[2].ctrl.prm.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[714]/* d[2].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1266
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[3,2] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1266};
  (data->simulationInfo->realParameter[523]/* d[2].ctrl.prm.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[713]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1267
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[2,6] = 0.5 * d[2].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1267};
  (data->simulationInfo->realParameter[521]/* d[2].ctrl.prm.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[715]/* d[2].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1268
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[2,4] = 0.5 * d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1268};
  (data->simulationInfo->realParameter[519]/* d[2].ctrl.prm.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[714]/* d[2].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1269
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[2,2] = d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1269};
  (data->simulationInfo->realParameter[517]/* d[2].ctrl.prm.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[713]/* d[2].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1270
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[2,1] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1270};
  (data->simulationInfo->realParameter[516]/* d[2].ctrl.prm.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[713]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1271
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[1,6] = 0.5 * d[2].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1271};
  (data->simulationInfo->realParameter[515]/* d[2].ctrl.prm.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[715]/* d[2].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1272
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[1,4] = 0.5 * d[2].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1272};
  (data->simulationInfo->realParameter[513]/* d[2].ctrl.prm.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[714]/* d[2].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1273
type: SIMPLE_ASSIGN
d[2].ctrl.prm.areas[1,2] = 0.5 * d[2].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1273};
  (data->simulationInfo->realParameter[511]/* d[2].ctrl.prm.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[713]/* d[2].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1274
type: SIMPLE_ASSIGN
d[2].ctrl.prm.capacity = 18000.0 * d[2].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1274};
  (data->simulationInfo->realParameter[667]/* d[2].ctrl.prm.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[775]/* d[2].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1275
type: SIMPLE_ASSIGN
d[2].ctrl.prm.rechargedThreshold = d[2].ctrl.prm.capacity * d[2].ctrl.prm.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1275};
  (data->simulationInfo->realParameter[767]/* d[2].ctrl.prm.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[667]/* d[2].ctrl.prm.capacity PARAM */) ) * ((data->simulationInfo->realParameter[763]/* d[2].ctrl.prm.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1276
type: SIMPLE_ASSIGN
d[2].ctrl.prm.dangerousBatteryLevel = d[2].ctrl.prm.capacity * d[2].ctrl.prm.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1276};
  (data->simulationInfo->realParameter[691]/* d[2].ctrl.prm.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[667]/* d[2].ctrl.prm.capacity PARAM */) ) * ((data->simulationInfo->realParameter[695]/* d[2].ctrl.prm.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1277
type: SIMPLE_ASSIGN
d[2].ctrl.prm.rechargeRate = 2.5 * d[2].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1277};
  (data->simulationInfo->realParameter[759]/* d[2].ctrl.prm.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[775]/* d[2].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1278
type: SIMPLE_ASSIGN
d[2].ctrl.prm.commDischarge = 5.0 * d[2].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1278};
  (data->simulationInfo->realParameter[675]/* d[2].ctrl.prm.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[775]/* d[2].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1279
type: SIMPLE_ASSIGN
d[2].ctrl.prm.batteryDischarge = d[2].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1279};
  (data->simulationInfo->realParameter[663]/* d[2].ctrl.prm.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[775]/* d[2].ctrl.prm.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 1280
type: SIMPLE_ASSIGN
d[2].ctrl.prm.dangerRadius = 3.0 + d[2].ctrl.prm.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_1280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1280};
  (data->simulationInfo->realParameter[687]/* d[2].ctrl.prm.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[739]/* d[2].ctrl.prm.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 1281
type: SIMPLE_ASSIGN
d[2].d.p.areas[8,6] = d[2].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1281};
  (data->simulationInfo->realParameter[889]/* d[2].d.p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[1047]/* d[2].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1282
type: SIMPLE_ASSIGN
d[2].d.p.areas[8,5] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1282};
  (data->simulationInfo->realParameter[888]/* d[2].d.p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1045]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1283
type: SIMPLE_ASSIGN
d[2].d.p.areas[8,4] = d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1283};
  (data->simulationInfo->realParameter[887]/* d[2].d.p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[1046]/* d[2].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1284
type: SIMPLE_ASSIGN
d[2].d.p.areas[8,3] = 0.5 * d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1284};
  (data->simulationInfo->realParameter[886]/* d[2].d.p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1046]/* d[2].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1285
type: SIMPLE_ASSIGN
d[2].d.p.areas[8,2] = d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1285};
  (data->simulationInfo->realParameter[885]/* d[2].d.p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[1045]/* d[2].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1286
type: SIMPLE_ASSIGN
d[2].d.p.areas[8,1] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1286};
  (data->simulationInfo->realParameter[884]/* d[2].d.p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1045]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1287
type: SIMPLE_ASSIGN
d[2].d.p.areas[7,6] = d[2].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1287};
  (data->simulationInfo->realParameter[883]/* d[2].d.p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[1047]/* d[2].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1288
type: SIMPLE_ASSIGN
d[2].d.p.areas[7,5] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1288};
  (data->simulationInfo->realParameter[882]/* d[2].d.p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1045]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1289
type: SIMPLE_ASSIGN
d[2].d.p.areas[7,4] = d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1289};
  (data->simulationInfo->realParameter[881]/* d[2].d.p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[1046]/* d[2].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1290
type: SIMPLE_ASSIGN
d[2].d.p.areas[7,3] = 0.5 * d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1290};
  (data->simulationInfo->realParameter[880]/* d[2].d.p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1046]/* d[2].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1291
type: SIMPLE_ASSIGN
d[2].d.p.areas[7,2] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1291};
  (data->simulationInfo->realParameter[879]/* d[2].d.p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1045]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1292
type: SIMPLE_ASSIGN
d[2].d.p.areas[6,6] = d[2].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1292};
  (data->simulationInfo->realParameter[877]/* d[2].d.p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[1047]/* d[2].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1293
type: SIMPLE_ASSIGN
d[2].d.p.areas[6,5] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1293};
  (data->simulationInfo->realParameter[876]/* d[2].d.p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1045]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1294
type: SIMPLE_ASSIGN
d[2].d.p.areas[6,4] = 0.5 * d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1294};
  (data->simulationInfo->realParameter[875]/* d[2].d.p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1046]/* d[2].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1295
type: SIMPLE_ASSIGN
d[2].d.p.areas[6,2] = d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1295};
  (data->simulationInfo->realParameter[873]/* d[2].d.p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[1045]/* d[2].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1296
type: SIMPLE_ASSIGN
d[2].d.p.areas[6,1] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1296};
  (data->simulationInfo->realParameter[872]/* d[2].d.p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1045]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1297
type: SIMPLE_ASSIGN
d[2].d.p.areas[5,6] = d[2].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1297};
  (data->simulationInfo->realParameter[871]/* d[2].d.p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[1047]/* d[2].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1298
type: SIMPLE_ASSIGN
d[2].d.p.areas[5,5] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1298};
  (data->simulationInfo->realParameter[870]/* d[2].d.p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1045]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1299
type: SIMPLE_ASSIGN
d[2].d.p.areas[5,4] = 0.5 * d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1299};
  (data->simulationInfo->realParameter[869]/* d[2].d.p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1046]/* d[2].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1300
type: SIMPLE_ASSIGN
d[2].d.p.areas[5,2] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1300};
  (data->simulationInfo->realParameter[867]/* d[2].d.p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1045]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1301
type: SIMPLE_ASSIGN
d[2].d.p.areas[4,6] = 0.5 * d[2].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1301};
  (data->simulationInfo->realParameter[865]/* d[2].d.p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1047]/* d[2].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1302
type: SIMPLE_ASSIGN
d[2].d.p.areas[4,4] = d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1302};
  (data->simulationInfo->realParameter[863]/* d[2].d.p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[1046]/* d[2].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1303
type: SIMPLE_ASSIGN
d[2].d.p.areas[4,3] = 0.5 * d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1303};
  (data->simulationInfo->realParameter[862]/* d[2].d.p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1046]/* d[2].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1304
type: SIMPLE_ASSIGN
d[2].d.p.areas[4,2] = d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1304};
  (data->simulationInfo->realParameter[861]/* d[2].d.p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[1045]/* d[2].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1305
type: SIMPLE_ASSIGN
d[2].d.p.areas[4,1] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1305};
  (data->simulationInfo->realParameter[860]/* d[2].d.p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1045]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1306
type: SIMPLE_ASSIGN
d[2].d.p.areas[3,6] = 0.5 * d[2].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1306};
  (data->simulationInfo->realParameter[859]/* d[2].d.p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1047]/* d[2].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1307
type: SIMPLE_ASSIGN
d[2].d.p.areas[3,4] = d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1307};
  (data->simulationInfo->realParameter[857]/* d[2].d.p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[1046]/* d[2].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1308
type: SIMPLE_ASSIGN
d[2].d.p.areas[3,3] = 0.5 * d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1308};
  (data->simulationInfo->realParameter[856]/* d[2].d.p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1046]/* d[2].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1309
type: SIMPLE_ASSIGN
d[2].d.p.areas[3,2] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1309};
  (data->simulationInfo->realParameter[855]/* d[2].d.p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1045]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1310
type: SIMPLE_ASSIGN
d[2].d.p.areas[2,6] = 0.5 * d[2].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1310};
  (data->simulationInfo->realParameter[853]/* d[2].d.p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1047]/* d[2].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1311
type: SIMPLE_ASSIGN
d[2].d.p.areas[2,4] = 0.5 * d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1311};
  (data->simulationInfo->realParameter[851]/* d[2].d.p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1046]/* d[2].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1312
type: SIMPLE_ASSIGN
d[2].d.p.areas[2,2] = d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1312};
  (data->simulationInfo->realParameter[849]/* d[2].d.p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[1045]/* d[2].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1313
type: SIMPLE_ASSIGN
d[2].d.p.areas[2,1] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1313};
  (data->simulationInfo->realParameter[848]/* d[2].d.p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1045]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1314
type: SIMPLE_ASSIGN
d[2].d.p.areas[1,6] = 0.5 * d[2].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1314};
  (data->simulationInfo->realParameter[847]/* d[2].d.p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1047]/* d[2].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1315
type: SIMPLE_ASSIGN
d[2].d.p.areas[1,4] = 0.5 * d[2].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1315};
  (data->simulationInfo->realParameter[845]/* d[2].d.p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1046]/* d[2].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1316
type: SIMPLE_ASSIGN
d[2].d.p.areas[1,2] = 0.5 * d[2].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1316};
  (data->simulationInfo->realParameter[843]/* d[2].d.p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1045]/* d[2].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1317
type: SIMPLE_ASSIGN
d[2].d.p.capacity = 18000.0 * d[2].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1317};
  (data->simulationInfo->realParameter[999]/* d[2].d.p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[1107]/* d[2].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1318
type: SIMPLE_ASSIGN
d[2].d.p.rechargedThreshold = d[2].d.p.capacity * d[2].d.p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1318};
  (data->simulationInfo->realParameter[1099]/* d[2].d.p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[999]/* d[2].d.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1095]/* d[2].d.p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1319
type: SIMPLE_ASSIGN
d[2].d.p.dangerousBatteryLevel = d[2].d.p.capacity * d[2].d.p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1319};
  (data->simulationInfo->realParameter[1023]/* d[2].d.p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[999]/* d[2].d.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1027]/* d[2].d.p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1320
type: SIMPLE_ASSIGN
d[2].d.p.rechargeRate = 2.5 * d[2].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1320};
  (data->simulationInfo->realParameter[1091]/* d[2].d.p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[1107]/* d[2].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1321
type: SIMPLE_ASSIGN
d[2].d.p.commDischarge = 5.0 * d[2].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1321};
  (data->simulationInfo->realParameter[1007]/* d[2].d.p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[1107]/* d[2].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1322
type: SIMPLE_ASSIGN
d[2].d.p.batteryDischarge = d[2].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1322};
  (data->simulationInfo->realParameter[995]/* d[2].d.p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[1107]/* d[2].d.p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 1323
type: SIMPLE_ASSIGN
d[2].d.p.dangerRadius = 3.0 + d[2].d.p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_1323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1323};
  (data->simulationInfo->realParameter[1019]/* d[2].d.p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[1071]/* d[2].d.p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 1324
type: SIMPLE_ASSIGN
d[2].p.areas[8,6] = d[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1324};
  (data->simulationInfo->realParameter[1221]/* d[2].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[1379]/* d[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1325
type: SIMPLE_ASSIGN
d[2].p.areas[8,5] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1325};
  (data->simulationInfo->realParameter[1220]/* d[2].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1377]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1326
type: SIMPLE_ASSIGN
d[2].p.areas[8,4] = d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1326};
  (data->simulationInfo->realParameter[1219]/* d[2].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[1378]/* d[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1327
type: SIMPLE_ASSIGN
d[2].p.areas[8,3] = 0.5 * d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1327};
  (data->simulationInfo->realParameter[1218]/* d[2].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1378]/* d[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1328
type: SIMPLE_ASSIGN
d[2].p.areas[8,2] = d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1328};
  (data->simulationInfo->realParameter[1217]/* d[2].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[1377]/* d[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1329
type: SIMPLE_ASSIGN
d[2].p.areas[8,1] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1329};
  (data->simulationInfo->realParameter[1216]/* d[2].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1377]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1330
type: SIMPLE_ASSIGN
d[2].p.areas[7,6] = d[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1330};
  (data->simulationInfo->realParameter[1215]/* d[2].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[1379]/* d[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1331
type: SIMPLE_ASSIGN
d[2].p.areas[7,5] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1331};
  (data->simulationInfo->realParameter[1214]/* d[2].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1377]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1332
type: SIMPLE_ASSIGN
d[2].p.areas[7,4] = d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1332};
  (data->simulationInfo->realParameter[1213]/* d[2].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[1378]/* d[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1333
type: SIMPLE_ASSIGN
d[2].p.areas[7,3] = 0.5 * d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1333};
  (data->simulationInfo->realParameter[1212]/* d[2].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1378]/* d[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1334
type: SIMPLE_ASSIGN
d[2].p.areas[7,2] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1334};
  (data->simulationInfo->realParameter[1211]/* d[2].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1377]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1335
type: SIMPLE_ASSIGN
d[2].p.areas[6,6] = d[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1335};
  (data->simulationInfo->realParameter[1209]/* d[2].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[1379]/* d[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1336
type: SIMPLE_ASSIGN
d[2].p.areas[6,5] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1336};
  (data->simulationInfo->realParameter[1208]/* d[2].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1377]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1337
type: SIMPLE_ASSIGN
d[2].p.areas[6,4] = 0.5 * d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1337};
  (data->simulationInfo->realParameter[1207]/* d[2].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1378]/* d[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1338
type: SIMPLE_ASSIGN
d[2].p.areas[6,2] = d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1338};
  (data->simulationInfo->realParameter[1205]/* d[2].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[1377]/* d[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1339
type: SIMPLE_ASSIGN
d[2].p.areas[6,1] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1339};
  (data->simulationInfo->realParameter[1204]/* d[2].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1377]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1340
type: SIMPLE_ASSIGN
d[2].p.areas[5,6] = d[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1340};
  (data->simulationInfo->realParameter[1203]/* d[2].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[1379]/* d[2].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1341
type: SIMPLE_ASSIGN
d[2].p.areas[5,5] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1341};
  (data->simulationInfo->realParameter[1202]/* d[2].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1377]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1342
type: SIMPLE_ASSIGN
d[2].p.areas[5,4] = 0.5 * d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1342};
  (data->simulationInfo->realParameter[1201]/* d[2].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1378]/* d[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1343
type: SIMPLE_ASSIGN
d[2].p.areas[5,2] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1343};
  (data->simulationInfo->realParameter[1199]/* d[2].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1377]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1344
type: SIMPLE_ASSIGN
d[2].p.areas[4,6] = 0.5 * d[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1344};
  (data->simulationInfo->realParameter[1197]/* d[2].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1379]/* d[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1345
type: SIMPLE_ASSIGN
d[2].p.areas[4,4] = d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1345};
  (data->simulationInfo->realParameter[1195]/* d[2].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[1378]/* d[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1346
type: SIMPLE_ASSIGN
d[2].p.areas[4,3] = 0.5 * d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1346};
  (data->simulationInfo->realParameter[1194]/* d[2].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1378]/* d[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1347
type: SIMPLE_ASSIGN
d[2].p.areas[4,2] = d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1347};
  (data->simulationInfo->realParameter[1193]/* d[2].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[1377]/* d[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1348
type: SIMPLE_ASSIGN
d[2].p.areas[4,1] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1348};
  (data->simulationInfo->realParameter[1192]/* d[2].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1377]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1349
type: SIMPLE_ASSIGN
d[2].p.areas[3,6] = 0.5 * d[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1349};
  (data->simulationInfo->realParameter[1191]/* d[2].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1379]/* d[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1350
type: SIMPLE_ASSIGN
d[2].p.areas[3,4] = d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1350};
  (data->simulationInfo->realParameter[1189]/* d[2].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[1378]/* d[2].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1351
type: SIMPLE_ASSIGN
d[2].p.areas[3,3] = 0.5 * d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1351};
  (data->simulationInfo->realParameter[1188]/* d[2].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1378]/* d[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1352
type: SIMPLE_ASSIGN
d[2].p.areas[3,2] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1352};
  (data->simulationInfo->realParameter[1187]/* d[2].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1377]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1353
type: SIMPLE_ASSIGN
d[2].p.areas[2,6] = 0.5 * d[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1353};
  (data->simulationInfo->realParameter[1185]/* d[2].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1379]/* d[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1354
type: SIMPLE_ASSIGN
d[2].p.areas[2,4] = 0.5 * d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1354};
  (data->simulationInfo->realParameter[1183]/* d[2].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1378]/* d[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1355
type: SIMPLE_ASSIGN
d[2].p.areas[2,2] = d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1355};
  (data->simulationInfo->realParameter[1181]/* d[2].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[1377]/* d[2].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1356
type: SIMPLE_ASSIGN
d[2].p.areas[2,1] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1356};
  (data->simulationInfo->realParameter[1180]/* d[2].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1377]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1357
type: SIMPLE_ASSIGN
d[2].p.areas[1,6] = 0.5 * d[2].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1357};
  (data->simulationInfo->realParameter[1179]/* d[2].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1379]/* d[2].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1358
type: SIMPLE_ASSIGN
d[2].p.areas[1,4] = 0.5 * d[2].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1358};
  (data->simulationInfo->realParameter[1177]/* d[2].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1378]/* d[2].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1359
type: SIMPLE_ASSIGN
d[2].p.areas[1,2] = 0.5 * d[2].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1359};
  (data->simulationInfo->realParameter[1175]/* d[2].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1377]/* d[2].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1360
type: SIMPLE_ASSIGN
d[2].p.capacity = 18000.0 * d[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1360};
  (data->simulationInfo->realParameter[1331]/* d[2].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[1439]/* d[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1361
type: SIMPLE_ASSIGN
d[2].p.rechargedThreshold = d[2].p.capacity * d[2].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1361};
  (data->simulationInfo->realParameter[1431]/* d[2].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[1331]/* d[2].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1427]/* d[2].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1362
type: SIMPLE_ASSIGN
d[2].p.dangerousBatteryLevel = d[2].p.capacity * d[2].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1362};
  (data->simulationInfo->realParameter[1355]/* d[2].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[1331]/* d[2].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1359]/* d[2].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1363
type: SIMPLE_ASSIGN
d[2].p.rechargeRate = 2.5 * d[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1363};
  (data->simulationInfo->realParameter[1423]/* d[2].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[1439]/* d[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1364
type: SIMPLE_ASSIGN
d[2].p.commDischarge = 5.0 * d[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1364};
  (data->simulationInfo->realParameter[1339]/* d[2].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[1439]/* d[2].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1365
type: SIMPLE_ASSIGN
d[2].p.batteryDischarge = d[2].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1365};
  (data->simulationInfo->realParameter[1327]/* d[2].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[1439]/* d[2].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 1366
type: SIMPLE_ASSIGN
d[2].p.dangerRadius = 3.0 + d[2].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1366};
  (data->simulationInfo->realParameter[1351]/* d[2].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[1403]/* d[2].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 1368
type: SIMPLE_ASSIGN
d[1].ctrl.kx2 = 2.0 * d[1].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_1368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1368};
  (data->simulationInfo->realParameter[426]/* d[1].ctrl.kx2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[446]/* d[1].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 1369
type: SIMPLE_ASSIGN
d[1].ctrl.kx1 = -d[1].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_1369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1369};
  modelica_real tmp9;
  tmp9 = (data->simulationInfo->realParameter[446]/* d[1].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[422]/* d[1].ctrl.kx1 PARAM */)  = (-((tmp9 * tmp9)));
  TRACE_POP
}

/*
equation index: 1370
type: SIMPLE_ASSIGN
d[1].ctrl.ky2 = 2.0 * d[1].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_1370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1370};
  (data->simulationInfo->realParameter[434]/* d[1].ctrl.ky2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[446]/* d[1].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 1371
type: SIMPLE_ASSIGN
d[1].ctrl.ky1 = -d[1].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_1371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1371};
  modelica_real tmp10;
  tmp10 = (data->simulationInfo->realParameter[446]/* d[1].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[430]/* d[1].ctrl.ky1 PARAM */)  = (-((tmp10 * tmp10)));
  TRACE_POP
}

/*
equation index: 1372
type: SIMPLE_ASSIGN
d[1].ctrl.kz2 = 2.0 * d[1].ctrl.p
*/
OMC_DISABLE_OPT
static void System_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1372};
  (data->simulationInfo->realParameter[442]/* d[1].ctrl.kz2 PARAM */)  = (2.0) * ((data->simulationInfo->realParameter[446]/* d[1].ctrl.p PARAM */) );
  TRACE_POP
}

/*
equation index: 1373
type: SIMPLE_ASSIGN
d[1].ctrl.kz1 = -d[1].ctrl.p ^ 2.0
*/
OMC_DISABLE_OPT
static void System_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1373};
  modelica_real tmp11;
  tmp11 = (data->simulationInfo->realParameter[446]/* d[1].ctrl.p PARAM */) ;
  (data->simulationInfo->realParameter[438]/* d[1].ctrl.kz1 PARAM */)  = (-((tmp11 * tmp11)));
  TRACE_POP
}

/*
equation index: 1374
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,6] = d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1374};
  (data->simulationInfo->realParameter[509]/* d[1].ctrl.prm.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[712]/* d[1].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1375
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,5] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1375};
  (data->simulationInfo->realParameter[508]/* d[1].ctrl.prm.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[710]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1376
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,4] = d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1376};
  (data->simulationInfo->realParameter[507]/* d[1].ctrl.prm.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[711]/* d[1].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1377
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,3] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1377};
  (data->simulationInfo->realParameter[506]/* d[1].ctrl.prm.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[711]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1378
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,2] = d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1378};
  (data->simulationInfo->realParameter[505]/* d[1].ctrl.prm.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[710]/* d[1].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1379
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[8,1] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1379};
  (data->simulationInfo->realParameter[504]/* d[1].ctrl.prm.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[710]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1380
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[7,6] = d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1380};
  (data->simulationInfo->realParameter[503]/* d[1].ctrl.prm.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[712]/* d[1].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1381
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[7,5] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1381};
  (data->simulationInfo->realParameter[502]/* d[1].ctrl.prm.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[710]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1382
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[7,4] = d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1382};
  (data->simulationInfo->realParameter[501]/* d[1].ctrl.prm.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[711]/* d[1].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1383
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[7,3] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1383};
  (data->simulationInfo->realParameter[500]/* d[1].ctrl.prm.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[711]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1384
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[7,2] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1384};
  (data->simulationInfo->realParameter[499]/* d[1].ctrl.prm.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[710]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1385
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[6,6] = d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1385};
  (data->simulationInfo->realParameter[497]/* d[1].ctrl.prm.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[712]/* d[1].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1386
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[6,5] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1386};
  (data->simulationInfo->realParameter[496]/* d[1].ctrl.prm.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[710]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1387
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[6,4] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1387};
  (data->simulationInfo->realParameter[495]/* d[1].ctrl.prm.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[711]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1388
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[6,2] = d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1388};
  (data->simulationInfo->realParameter[493]/* d[1].ctrl.prm.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[710]/* d[1].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1389
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[6,1] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1389};
  (data->simulationInfo->realParameter[492]/* d[1].ctrl.prm.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[710]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1390
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[5,6] = d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1390};
  (data->simulationInfo->realParameter[491]/* d[1].ctrl.prm.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[712]/* d[1].ctrl.prm.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1391
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[5,5] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1391};
  (data->simulationInfo->realParameter[490]/* d[1].ctrl.prm.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[710]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1392
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[5,4] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1392};
  (data->simulationInfo->realParameter[489]/* d[1].ctrl.prm.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[711]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1393
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[5,2] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1393};
  (data->simulationInfo->realParameter[487]/* d[1].ctrl.prm.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[710]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1394
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[4,6] = 0.5 * d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1394};
  (data->simulationInfo->realParameter[485]/* d[1].ctrl.prm.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[712]/* d[1].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1395
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[4,4] = d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1395};
  (data->simulationInfo->realParameter[483]/* d[1].ctrl.prm.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[711]/* d[1].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1396
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[4,3] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1396};
  (data->simulationInfo->realParameter[482]/* d[1].ctrl.prm.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[711]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1397
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[4,2] = d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1397};
  (data->simulationInfo->realParameter[481]/* d[1].ctrl.prm.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[710]/* d[1].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1398
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[4,1] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1398};
  (data->simulationInfo->realParameter[480]/* d[1].ctrl.prm.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[710]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1399
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[3,6] = 0.5 * d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1399};
  (data->simulationInfo->realParameter[479]/* d[1].ctrl.prm.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[712]/* d[1].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1400
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[3,4] = d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1400};
  (data->simulationInfo->realParameter[477]/* d[1].ctrl.prm.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[711]/* d[1].ctrl.prm.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1401
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[3,3] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1401};
  (data->simulationInfo->realParameter[476]/* d[1].ctrl.prm.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[711]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1402
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[3,2] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1402};
  (data->simulationInfo->realParameter[475]/* d[1].ctrl.prm.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[710]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1403
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[2,6] = 0.5 * d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1403};
  (data->simulationInfo->realParameter[473]/* d[1].ctrl.prm.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[712]/* d[1].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1404
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[2,4] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1404};
  (data->simulationInfo->realParameter[471]/* d[1].ctrl.prm.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[711]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1405
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[2,2] = d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1405};
  (data->simulationInfo->realParameter[469]/* d[1].ctrl.prm.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[710]/* d[1].ctrl.prm.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1406
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[2,1] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1406};
  (data->simulationInfo->realParameter[468]/* d[1].ctrl.prm.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[710]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1407
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[1,6] = 0.5 * d[1].ctrl.prm.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1407};
  (data->simulationInfo->realParameter[467]/* d[1].ctrl.prm.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[712]/* d[1].ctrl.prm.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1408
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[1,4] = 0.5 * d[1].ctrl.prm.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1408};
  (data->simulationInfo->realParameter[465]/* d[1].ctrl.prm.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[711]/* d[1].ctrl.prm.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1409
type: SIMPLE_ASSIGN
d[1].ctrl.prm.areas[1,2] = 0.5 * d[1].ctrl.prm.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1409};
  (data->simulationInfo->realParameter[463]/* d[1].ctrl.prm.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[710]/* d[1].ctrl.prm.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1410
type: SIMPLE_ASSIGN
d[1].ctrl.prm.capacity = 18000.0 * d[1].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1410};
  (data->simulationInfo->realParameter[666]/* d[1].ctrl.prm.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[774]/* d[1].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1411
type: SIMPLE_ASSIGN
d[1].ctrl.prm.rechargedThreshold = d[1].ctrl.prm.capacity * d[1].ctrl.prm.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1411};
  (data->simulationInfo->realParameter[766]/* d[1].ctrl.prm.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[666]/* d[1].ctrl.prm.capacity PARAM */) ) * ((data->simulationInfo->realParameter[762]/* d[1].ctrl.prm.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1412
type: SIMPLE_ASSIGN
d[1].ctrl.prm.dangerousBatteryLevel = d[1].ctrl.prm.capacity * d[1].ctrl.prm.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1412};
  (data->simulationInfo->realParameter[690]/* d[1].ctrl.prm.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[666]/* d[1].ctrl.prm.capacity PARAM */) ) * ((data->simulationInfo->realParameter[694]/* d[1].ctrl.prm.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1413
type: SIMPLE_ASSIGN
d[1].ctrl.prm.rechargeRate = 2.5 * d[1].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1413};
  (data->simulationInfo->realParameter[758]/* d[1].ctrl.prm.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[774]/* d[1].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1414
type: SIMPLE_ASSIGN
d[1].ctrl.prm.commDischarge = 5.0 * d[1].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1414};
  (data->simulationInfo->realParameter[674]/* d[1].ctrl.prm.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[774]/* d[1].ctrl.prm.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1415
type: SIMPLE_ASSIGN
d[1].ctrl.prm.batteryDischarge = d[1].ctrl.prm.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1415};
  (data->simulationInfo->realParameter[662]/* d[1].ctrl.prm.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[774]/* d[1].ctrl.prm.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 1416
type: SIMPLE_ASSIGN
d[1].ctrl.prm.dangerRadius = 3.0 + d[1].ctrl.prm.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1416};
  (data->simulationInfo->realParameter[686]/* d[1].ctrl.prm.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[738]/* d[1].ctrl.prm.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 1417
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,6] = d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1417};
  (data->simulationInfo->realParameter[841]/* d[1].d.p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[1044]/* d[1].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1418
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,5] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1418};
  (data->simulationInfo->realParameter[840]/* d[1].d.p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1419
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,4] = d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1419};
  (data->simulationInfo->realParameter[839]/* d[1].d.p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[1043]/* d[1].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1420
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,3] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1420};
  (data->simulationInfo->realParameter[838]/* d[1].d.p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1043]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1421
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,2] = d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1421};
  (data->simulationInfo->realParameter[837]/* d[1].d.p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1422
type: SIMPLE_ASSIGN
d[1].d.p.areas[8,1] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1422};
  (data->simulationInfo->realParameter[836]/* d[1].d.p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1423
type: SIMPLE_ASSIGN
d[1].d.p.areas[7,6] = d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1423};
  (data->simulationInfo->realParameter[835]/* d[1].d.p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[1044]/* d[1].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1424
type: SIMPLE_ASSIGN
d[1].d.p.areas[7,5] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1424};
  (data->simulationInfo->realParameter[834]/* d[1].d.p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1425
type: SIMPLE_ASSIGN
d[1].d.p.areas[7,4] = d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1425};
  (data->simulationInfo->realParameter[833]/* d[1].d.p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[1043]/* d[1].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1426
type: SIMPLE_ASSIGN
d[1].d.p.areas[7,3] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1426};
  (data->simulationInfo->realParameter[832]/* d[1].d.p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1043]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1427
type: SIMPLE_ASSIGN
d[1].d.p.areas[7,2] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1427};
  (data->simulationInfo->realParameter[831]/* d[1].d.p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1428
type: SIMPLE_ASSIGN
d[1].d.p.areas[6,6] = d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1428};
  (data->simulationInfo->realParameter[829]/* d[1].d.p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[1044]/* d[1].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1429
type: SIMPLE_ASSIGN
d[1].d.p.areas[6,5] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1429};
  (data->simulationInfo->realParameter[828]/* d[1].d.p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1430
type: SIMPLE_ASSIGN
d[1].d.p.areas[6,4] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1430};
  (data->simulationInfo->realParameter[827]/* d[1].d.p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1043]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1431
type: SIMPLE_ASSIGN
d[1].d.p.areas[6,2] = d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1431};
  (data->simulationInfo->realParameter[825]/* d[1].d.p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1432
type: SIMPLE_ASSIGN
d[1].d.p.areas[6,1] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1432};
  (data->simulationInfo->realParameter[824]/* d[1].d.p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1433
type: SIMPLE_ASSIGN
d[1].d.p.areas[5,6] = d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1433};
  (data->simulationInfo->realParameter[823]/* d[1].d.p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[1044]/* d[1].d.p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1434
type: SIMPLE_ASSIGN
d[1].d.p.areas[5,5] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1434};
  (data->simulationInfo->realParameter[822]/* d[1].d.p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1435
type: SIMPLE_ASSIGN
d[1].d.p.areas[5,4] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1435};
  (data->simulationInfo->realParameter[821]/* d[1].d.p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1043]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1436
type: SIMPLE_ASSIGN
d[1].d.p.areas[5,2] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1436};
  (data->simulationInfo->realParameter[819]/* d[1].d.p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1437
type: SIMPLE_ASSIGN
d[1].d.p.areas[4,6] = 0.5 * d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1437};
  (data->simulationInfo->realParameter[817]/* d[1].d.p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1044]/* d[1].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1438
type: SIMPLE_ASSIGN
d[1].d.p.areas[4,4] = d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1438};
  (data->simulationInfo->realParameter[815]/* d[1].d.p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[1043]/* d[1].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1439
type: SIMPLE_ASSIGN
d[1].d.p.areas[4,3] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1439};
  (data->simulationInfo->realParameter[814]/* d[1].d.p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1043]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1440
type: SIMPLE_ASSIGN
d[1].d.p.areas[4,2] = d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1440};
  (data->simulationInfo->realParameter[813]/* d[1].d.p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1441
type: SIMPLE_ASSIGN
d[1].d.p.areas[4,1] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1441};
  (data->simulationInfo->realParameter[812]/* d[1].d.p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1442
type: SIMPLE_ASSIGN
d[1].d.p.areas[3,6] = 0.5 * d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1442};
  (data->simulationInfo->realParameter[811]/* d[1].d.p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1044]/* d[1].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1443
type: SIMPLE_ASSIGN
d[1].d.p.areas[3,4] = d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1443};
  (data->simulationInfo->realParameter[809]/* d[1].d.p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[1043]/* d[1].d.p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1444
type: SIMPLE_ASSIGN
d[1].d.p.areas[3,3] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1444};
  (data->simulationInfo->realParameter[808]/* d[1].d.p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1043]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1445
type: SIMPLE_ASSIGN
d[1].d.p.areas[3,2] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1445};
  (data->simulationInfo->realParameter[807]/* d[1].d.p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1446
type: SIMPLE_ASSIGN
d[1].d.p.areas[2,6] = 0.5 * d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1446};
  (data->simulationInfo->realParameter[805]/* d[1].d.p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1044]/* d[1].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1447
type: SIMPLE_ASSIGN
d[1].d.p.areas[2,4] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1447};
  (data->simulationInfo->realParameter[803]/* d[1].d.p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1043]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1448
type: SIMPLE_ASSIGN
d[1].d.p.areas[2,2] = d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1448};
  (data->simulationInfo->realParameter[801]/* d[1].d.p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1449
type: SIMPLE_ASSIGN
d[1].d.p.areas[2,1] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1449};
  (data->simulationInfo->realParameter[800]/* d[1].d.p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1450
type: SIMPLE_ASSIGN
d[1].d.p.areas[1,6] = 0.5 * d[1].d.p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1450};
  (data->simulationInfo->realParameter[799]/* d[1].d.p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1044]/* d[1].d.p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1451
type: SIMPLE_ASSIGN
d[1].d.p.areas[1,4] = 0.5 * d[1].d.p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1451};
  (data->simulationInfo->realParameter[797]/* d[1].d.p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1043]/* d[1].d.p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1452
type: SIMPLE_ASSIGN
d[1].d.p.areas[1,2] = 0.5 * d[1].d.p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1452};
  (data->simulationInfo->realParameter[795]/* d[1].d.p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1042]/* d[1].d.p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1453
type: SIMPLE_ASSIGN
d[1].d.p.capacity = 18000.0 * d[1].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1453};
  (data->simulationInfo->realParameter[998]/* d[1].d.p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[1106]/* d[1].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1454
type: SIMPLE_ASSIGN
d[1].d.p.rechargedThreshold = d[1].d.p.capacity * d[1].d.p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1454};
  (data->simulationInfo->realParameter[1098]/* d[1].d.p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[998]/* d[1].d.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1094]/* d[1].d.p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1455
type: SIMPLE_ASSIGN
d[1].d.p.dangerousBatteryLevel = d[1].d.p.capacity * d[1].d.p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1455};
  (data->simulationInfo->realParameter[1022]/* d[1].d.p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[998]/* d[1].d.p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1026]/* d[1].d.p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1456
type: SIMPLE_ASSIGN
d[1].d.p.rechargeRate = 2.5 * d[1].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1456};
  (data->simulationInfo->realParameter[1090]/* d[1].d.p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[1106]/* d[1].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1457
type: SIMPLE_ASSIGN
d[1].d.p.commDischarge = 5.0 * d[1].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1457};
  (data->simulationInfo->realParameter[1006]/* d[1].d.p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[1106]/* d[1].d.p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1458
type: SIMPLE_ASSIGN
d[1].d.p.batteryDischarge = d[1].d.p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1458};
  (data->simulationInfo->realParameter[994]/* d[1].d.p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[1106]/* d[1].d.p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 1459
type: SIMPLE_ASSIGN
d[1].d.p.dangerRadius = 3.0 + d[1].d.p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_1459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1459};
  (data->simulationInfo->realParameter[1018]/* d[1].d.p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[1070]/* d[1].d.p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 1460
type: SIMPLE_ASSIGN
d[1].p.areas[8,6] = d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1460};
  (data->simulationInfo->realParameter[1173]/* d[1].p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[1376]/* d[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1461
type: SIMPLE_ASSIGN
d[1].p.areas[8,5] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1461};
  (data->simulationInfo->realParameter[1172]/* d[1].p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1374]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1462
type: SIMPLE_ASSIGN
d[1].p.areas[8,4] = d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1462};
  (data->simulationInfo->realParameter[1171]/* d[1].p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[1375]/* d[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1463
type: SIMPLE_ASSIGN
d[1].p.areas[8,3] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1463};
  (data->simulationInfo->realParameter[1170]/* d[1].p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1375]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1464
type: SIMPLE_ASSIGN
d[1].p.areas[8,2] = d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1464};
  (data->simulationInfo->realParameter[1169]/* d[1].p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[1374]/* d[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1465
type: SIMPLE_ASSIGN
d[1].p.areas[8,1] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1465};
  (data->simulationInfo->realParameter[1168]/* d[1].p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1374]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1466
type: SIMPLE_ASSIGN
d[1].p.areas[7,6] = d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1466};
  (data->simulationInfo->realParameter[1167]/* d[1].p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[1376]/* d[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1467
type: SIMPLE_ASSIGN
d[1].p.areas[7,5] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1467};
  (data->simulationInfo->realParameter[1166]/* d[1].p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1374]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1468
type: SIMPLE_ASSIGN
d[1].p.areas[7,4] = d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1468};
  (data->simulationInfo->realParameter[1165]/* d[1].p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[1375]/* d[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1469
type: SIMPLE_ASSIGN
d[1].p.areas[7,3] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1469};
  (data->simulationInfo->realParameter[1164]/* d[1].p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1375]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1470
type: SIMPLE_ASSIGN
d[1].p.areas[7,2] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1470};
  (data->simulationInfo->realParameter[1163]/* d[1].p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1374]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1471
type: SIMPLE_ASSIGN
d[1].p.areas[6,6] = d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1471};
  (data->simulationInfo->realParameter[1161]/* d[1].p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[1376]/* d[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1472
type: SIMPLE_ASSIGN
d[1].p.areas[6,5] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1472};
  (data->simulationInfo->realParameter[1160]/* d[1].p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1374]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1473
type: SIMPLE_ASSIGN
d[1].p.areas[6,4] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1473};
  (data->simulationInfo->realParameter[1159]/* d[1].p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1375]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1474
type: SIMPLE_ASSIGN
d[1].p.areas[6,2] = d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1474};
  (data->simulationInfo->realParameter[1157]/* d[1].p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[1374]/* d[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1475
type: SIMPLE_ASSIGN
d[1].p.areas[6,1] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1475};
  (data->simulationInfo->realParameter[1156]/* d[1].p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1374]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1476
type: SIMPLE_ASSIGN
d[1].p.areas[5,6] = d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1476};
  (data->simulationInfo->realParameter[1155]/* d[1].p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[1376]/* d[1].p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1477
type: SIMPLE_ASSIGN
d[1].p.areas[5,5] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1477};
  (data->simulationInfo->realParameter[1154]/* d[1].p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1374]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1478
type: SIMPLE_ASSIGN
d[1].p.areas[5,4] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1478};
  (data->simulationInfo->realParameter[1153]/* d[1].p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1375]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1479
type: SIMPLE_ASSIGN
d[1].p.areas[5,2] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1479};
  (data->simulationInfo->realParameter[1151]/* d[1].p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1374]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1480
type: SIMPLE_ASSIGN
d[1].p.areas[4,6] = 0.5 * d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1480};
  (data->simulationInfo->realParameter[1149]/* d[1].p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1376]/* d[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1481
type: SIMPLE_ASSIGN
d[1].p.areas[4,4] = d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1481};
  (data->simulationInfo->realParameter[1147]/* d[1].p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[1375]/* d[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1482
type: SIMPLE_ASSIGN
d[1].p.areas[4,3] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1482};
  (data->simulationInfo->realParameter[1146]/* d[1].p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1375]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1483
type: SIMPLE_ASSIGN
d[1].p.areas[4,2] = d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1483};
  (data->simulationInfo->realParameter[1145]/* d[1].p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[1374]/* d[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1484
type: SIMPLE_ASSIGN
d[1].p.areas[4,1] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1484};
  (data->simulationInfo->realParameter[1144]/* d[1].p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1374]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1485
type: SIMPLE_ASSIGN
d[1].p.areas[3,6] = 0.5 * d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1485};
  (data->simulationInfo->realParameter[1143]/* d[1].p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1376]/* d[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1486
type: SIMPLE_ASSIGN
d[1].p.areas[3,4] = d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1486};
  (data->simulationInfo->realParameter[1141]/* d[1].p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[1375]/* d[1].p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1487
type: SIMPLE_ASSIGN
d[1].p.areas[3,3] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1487};
  (data->simulationInfo->realParameter[1140]/* d[1].p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1375]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1488
type: SIMPLE_ASSIGN
d[1].p.areas[3,2] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1488};
  (data->simulationInfo->realParameter[1139]/* d[1].p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1374]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1489
type: SIMPLE_ASSIGN
d[1].p.areas[2,6] = 0.5 * d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1489};
  (data->simulationInfo->realParameter[1137]/* d[1].p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1376]/* d[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1490
type: SIMPLE_ASSIGN
d[1].p.areas[2,4] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1490};
  (data->simulationInfo->realParameter[1135]/* d[1].p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1375]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1491
type: SIMPLE_ASSIGN
d[1].p.areas[2,2] = d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1491};
  (data->simulationInfo->realParameter[1133]/* d[1].p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[1374]/* d[1].p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1492
type: SIMPLE_ASSIGN
d[1].p.areas[2,1] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1492};
  (data->simulationInfo->realParameter[1132]/* d[1].p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1374]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1493
type: SIMPLE_ASSIGN
d[1].p.areas[1,6] = 0.5 * d[1].p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1493};
  (data->simulationInfo->realParameter[1131]/* d[1].p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1376]/* d[1].p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1494
type: SIMPLE_ASSIGN
d[1].p.areas[1,4] = 0.5 * d[1].p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1494};
  (data->simulationInfo->realParameter[1129]/* d[1].p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1375]/* d[1].p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1495
type: SIMPLE_ASSIGN
d[1].p.areas[1,2] = 0.5 * d[1].p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1495};
  (data->simulationInfo->realParameter[1127]/* d[1].p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1374]/* d[1].p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1496
type: SIMPLE_ASSIGN
d[1].p.capacity = 18000.0 * d[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1496};
  (data->simulationInfo->realParameter[1330]/* d[1].p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[1438]/* d[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1497
type: SIMPLE_ASSIGN
d[1].p.rechargedThreshold = d[1].p.capacity * d[1].p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1497};
  (data->simulationInfo->realParameter[1430]/* d[1].p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[1330]/* d[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1426]/* d[1].p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1498
type: SIMPLE_ASSIGN
d[1].p.dangerousBatteryLevel = d[1].p.capacity * d[1].p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1498};
  (data->simulationInfo->realParameter[1354]/* d[1].p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[1330]/* d[1].p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1358]/* d[1].p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1499
type: SIMPLE_ASSIGN
d[1].p.rechargeRate = 2.5 * d[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1499};
  (data->simulationInfo->realParameter[1422]/* d[1].p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[1438]/* d[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1500
type: SIMPLE_ASSIGN
d[1].p.commDischarge = 5.0 * d[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1500};
  (data->simulationInfo->realParameter[1338]/* d[1].p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[1438]/* d[1].p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1501
type: SIMPLE_ASSIGN
d[1].p.batteryDischarge = d[1].p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1501};
  (data->simulationInfo->realParameter[1326]/* d[1].p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[1438]/* d[1].p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 1502
type: SIMPLE_ASSIGN
d[1].p.dangerRadius = 3.0 + d[1].p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_1502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1502};
  (data->simulationInfo->realParameter[1350]/* d[1].p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[1402]/* d[1].p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}

/*
equation index: 1504
type: SIMPLE_ASSIGN
p.areas[8,6] = p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1504};
  (data->simulationInfo->realParameter[1911]/* p.areas[8,6] PARAM */)  = (data->simulationInfo->realParameter[1928]/* p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1505
type: SIMPLE_ASSIGN
p.areas[8,5] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1505};
  (data->simulationInfo->realParameter[1910]/* p.areas[8,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1926]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1506
type: SIMPLE_ASSIGN
p.areas[8,4] = p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1506};
  (data->simulationInfo->realParameter[1909]/* p.areas[8,4] PARAM */)  = (data->simulationInfo->realParameter[1927]/* p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1507
type: SIMPLE_ASSIGN
p.areas[8,3] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1507};
  (data->simulationInfo->realParameter[1908]/* p.areas[8,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1927]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1508
type: SIMPLE_ASSIGN
p.areas[8,2] = p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1508};
  (data->simulationInfo->realParameter[1907]/* p.areas[8,2] PARAM */)  = (data->simulationInfo->realParameter[1926]/* p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1509
type: SIMPLE_ASSIGN
p.areas[8,1] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1509};
  (data->simulationInfo->realParameter[1906]/* p.areas[8,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1926]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1510
type: SIMPLE_ASSIGN
p.areas[7,6] = p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1510};
  (data->simulationInfo->realParameter[1905]/* p.areas[7,6] PARAM */)  = (data->simulationInfo->realParameter[1928]/* p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1511
type: SIMPLE_ASSIGN
p.areas[7,5] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1511};
  (data->simulationInfo->realParameter[1904]/* p.areas[7,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1926]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1512
type: SIMPLE_ASSIGN
p.areas[7,4] = p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1512};
  (data->simulationInfo->realParameter[1903]/* p.areas[7,4] PARAM */)  = (data->simulationInfo->realParameter[1927]/* p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1513
type: SIMPLE_ASSIGN
p.areas[7,3] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1513};
  (data->simulationInfo->realParameter[1902]/* p.areas[7,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1927]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1514
type: SIMPLE_ASSIGN
p.areas[7,2] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1514};
  (data->simulationInfo->realParameter[1901]/* p.areas[7,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1926]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1515
type: SIMPLE_ASSIGN
p.areas[6,6] = p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1515};
  (data->simulationInfo->realParameter[1899]/* p.areas[6,6] PARAM */)  = (data->simulationInfo->realParameter[1928]/* p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1516
type: SIMPLE_ASSIGN
p.areas[6,5] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1516};
  (data->simulationInfo->realParameter[1898]/* p.areas[6,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1926]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1517
type: SIMPLE_ASSIGN
p.areas[6,4] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1517};
  (data->simulationInfo->realParameter[1897]/* p.areas[6,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1927]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1518
type: SIMPLE_ASSIGN
p.areas[6,2] = p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1518};
  (data->simulationInfo->realParameter[1895]/* p.areas[6,2] PARAM */)  = (data->simulationInfo->realParameter[1926]/* p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1519
type: SIMPLE_ASSIGN
p.areas[6,1] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1519};
  (data->simulationInfo->realParameter[1894]/* p.areas[6,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1926]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1520
type: SIMPLE_ASSIGN
p.areas[5,6] = p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1520};
  (data->simulationInfo->realParameter[1893]/* p.areas[5,6] PARAM */)  = (data->simulationInfo->realParameter[1928]/* p.flyZone[3] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1521
type: SIMPLE_ASSIGN
p.areas[5,5] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1521};
  (data->simulationInfo->realParameter[1892]/* p.areas[5,5] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1926]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1522
type: SIMPLE_ASSIGN
p.areas[5,4] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1522};
  (data->simulationInfo->realParameter[1891]/* p.areas[5,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1927]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1523
type: SIMPLE_ASSIGN
p.areas[5,2] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1523};
  (data->simulationInfo->realParameter[1889]/* p.areas[5,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1926]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1524
type: SIMPLE_ASSIGN
p.areas[4,6] = 0.5 * p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1524};
  (data->simulationInfo->realParameter[1887]/* p.areas[4,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1928]/* p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1525
type: SIMPLE_ASSIGN
p.areas[4,4] = p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1525};
  (data->simulationInfo->realParameter[1885]/* p.areas[4,4] PARAM */)  = (data->simulationInfo->realParameter[1927]/* p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1526
type: SIMPLE_ASSIGN
p.areas[4,3] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1526};
  (data->simulationInfo->realParameter[1884]/* p.areas[4,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1927]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1527
type: SIMPLE_ASSIGN
p.areas[4,2] = p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1527};
  (data->simulationInfo->realParameter[1883]/* p.areas[4,2] PARAM */)  = (data->simulationInfo->realParameter[1926]/* p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1528
type: SIMPLE_ASSIGN
p.areas[4,1] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1528};
  (data->simulationInfo->realParameter[1882]/* p.areas[4,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1926]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1529
type: SIMPLE_ASSIGN
p.areas[3,6] = 0.5 * p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1529};
  (data->simulationInfo->realParameter[1881]/* p.areas[3,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1928]/* p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1530
type: SIMPLE_ASSIGN
p.areas[3,4] = p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1530};
  (data->simulationInfo->realParameter[1879]/* p.areas[3,4] PARAM */)  = (data->simulationInfo->realParameter[1927]/* p.flyZone[2] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1531
type: SIMPLE_ASSIGN
p.areas[3,3] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1531};
  (data->simulationInfo->realParameter[1878]/* p.areas[3,3] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1927]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1532
type: SIMPLE_ASSIGN
p.areas[3,2] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1532};
  (data->simulationInfo->realParameter[1877]/* p.areas[3,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1926]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1533
type: SIMPLE_ASSIGN
p.areas[2,6] = 0.5 * p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1533};
  (data->simulationInfo->realParameter[1875]/* p.areas[2,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1928]/* p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1534
type: SIMPLE_ASSIGN
p.areas[2,4] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1534};
  (data->simulationInfo->realParameter[1873]/* p.areas[2,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1927]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1535
type: SIMPLE_ASSIGN
p.areas[2,2] = p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1535};
  (data->simulationInfo->realParameter[1871]/* p.areas[2,2] PARAM */)  = (data->simulationInfo->realParameter[1926]/* p.flyZone[1] PARAM */) ;
  TRACE_POP
}

/*
equation index: 1536
type: SIMPLE_ASSIGN
p.areas[2,1] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1536};
  (data->simulationInfo->realParameter[1870]/* p.areas[2,1] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1926]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1537
type: SIMPLE_ASSIGN
p.areas[1,6] = 0.5 * p.flyZone[3]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1537};
  (data->simulationInfo->realParameter[1869]/* p.areas[1,6] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1928]/* p.flyZone[3] PARAM */) );
  TRACE_POP
}

/*
equation index: 1538
type: SIMPLE_ASSIGN
p.areas[1,4] = 0.5 * p.flyZone[2]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1538};
  (data->simulationInfo->realParameter[1867]/* p.areas[1,4] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1927]/* p.flyZone[2] PARAM */) );
  TRACE_POP
}

/*
equation index: 1539
type: SIMPLE_ASSIGN
p.areas[1,2] = 0.5 * p.flyZone[1]
*/
OMC_DISABLE_OPT
static void System_eqFunction_1539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1539};
  (data->simulationInfo->realParameter[1865]/* p.areas[1,2] PARAM */)  = (0.5) * ((data->simulationInfo->realParameter[1926]/* p.flyZone[1] PARAM */) );
  TRACE_POP
}

/*
equation index: 1540
type: SIMPLE_ASSIGN
p.capacity = 18000.0 * p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1540};
  (data->simulationInfo->realParameter[1915]/* p.capacity PARAM */)  = (18000.0) * ((data->simulationInfo->realParameter[1942]/* p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1541
type: SIMPLE_ASSIGN
p.rechargedThreshold = p.capacity * p.rechargedPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1541};
  (data->simulationInfo->realParameter[1940]/* p.rechargedThreshold PARAM */)  = ((data->simulationInfo->realParameter[1915]/* p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1939]/* p.rechargedPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1542
type: SIMPLE_ASSIGN
p.dangerousBatteryLevel = p.capacity * p.dangerousBatteryPercentage
*/
OMC_DISABLE_OPT
static void System_eqFunction_1542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1542};
  (data->simulationInfo->realParameter[1921]/* p.dangerousBatteryLevel PARAM */)  = ((data->simulationInfo->realParameter[1915]/* p.capacity PARAM */) ) * ((data->simulationInfo->realParameter[1922]/* p.dangerousBatteryPercentage PARAM */) );
  TRACE_POP
}

/*
equation index: 1543
type: SIMPLE_ASSIGN
p.rechargeRate = 2.5 * p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1543};
  (data->simulationInfo->realParameter[1938]/* p.rechargeRate PARAM */)  = (2.5) * ((data->simulationInfo->realParameter[1942]/* p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1544
type: SIMPLE_ASSIGN
p.commDischarge = 5.0 * p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1544};
  (data->simulationInfo->realParameter[1917]/* p.commDischarge PARAM */)  = (5.0) * ((data->simulationInfo->realParameter[1942]/* p.unita PARAM */) );
  TRACE_POP
}

/*
equation index: 1545
type: SIMPLE_ASSIGN
p.batteryDischarge = p.unita
*/
OMC_DISABLE_OPT
static void System_eqFunction_1545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1545};
  (data->simulationInfo->realParameter[1914]/* p.batteryDischarge PARAM */)  = (data->simulationInfo->realParameter[1942]/* p.unita PARAM */) ;
  TRACE_POP
}

/*
equation index: 1546
type: SIMPLE_ASSIGN
p.dangerRadius = 3.0 + p.minDistanceFromObs
*/
OMC_DISABLE_OPT
static void System_eqFunction_1546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1546};
  (data->simulationInfo->realParameter[1920]/* p.dangerRadius PARAM */)  = 3.0 + (data->simulationInfo->realParameter[1933]/* p.minDistanceFromObs PARAM */) ;
  TRACE_POP
}
OMC_DISABLE_OPT
void System_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  System_eqFunction_503(data, threadData);
  System_eqFunction_504(data, threadData);
  System_eqFunction_505(data, threadData);
  System_eqFunction_506(data, threadData);
  System_eqFunction_507(data, threadData);
  System_eqFunction_508(data, threadData);
  System_eqFunction_509(data, threadData);
  System_eqFunction_510(data, threadData);
  System_eqFunction_511(data, threadData);
  System_eqFunction_512(data, threadData);
  System_eqFunction_513(data, threadData);
  System_eqFunction_514(data, threadData);
  System_eqFunction_515(data, threadData);
  System_eqFunction_516(data, threadData);
  System_eqFunction_517(data, threadData);
  System_eqFunction_518(data, threadData);
  System_eqFunction_519(data, threadData);
  System_eqFunction_520(data, threadData);
  System_eqFunction_521(data, threadData);
  System_eqFunction_522(data, threadData);
  System_eqFunction_523(data, threadData);
  System_eqFunction_524(data, threadData);
  System_eqFunction_525(data, threadData);
  System_eqFunction_526(data, threadData);
  System_eqFunction_527(data, threadData);
  System_eqFunction_528(data, threadData);
  System_eqFunction_529(data, threadData);
  System_eqFunction_530(data, threadData);
  System_eqFunction_531(data, threadData);
  System_eqFunction_532(data, threadData);
  System_eqFunction_533(data, threadData);
  System_eqFunction_534(data, threadData);
  System_eqFunction_535(data, threadData);
  System_eqFunction_536(data, threadData);
  System_eqFunction_537(data, threadData);
  System_eqFunction_538(data, threadData);
  System_eqFunction_539(data, threadData);
  System_eqFunction_540(data, threadData);
  System_eqFunction_541(data, threadData);
  System_eqFunction_542(data, threadData);
  System_eqFunction_543(data, threadData);
  System_eqFunction_544(data, threadData);
  System_eqFunction_545(data, threadData);
  System_eqFunction_546(data, threadData);
  System_eqFunction_547(data, threadData);
  System_eqFunction_548(data, threadData);
  System_eqFunction_549(data, threadData);
  System_eqFunction_550(data, threadData);
  System_eqFunction_551(data, threadData);
  System_eqFunction_552(data, threadData);
  System_eqFunction_555(data, threadData);
  System_eqFunction_556(data, threadData);
  System_eqFunction_557(data, threadData);
  System_eqFunction_558(data, threadData);
  System_eqFunction_559(data, threadData);
  System_eqFunction_560(data, threadData);
  System_eqFunction_561(data, threadData);
  System_eqFunction_562(data, threadData);
  System_eqFunction_563(data, threadData);
  System_eqFunction_564(data, threadData);
  System_eqFunction_565(data, threadData);
  System_eqFunction_566(data, threadData);
  System_eqFunction_567(data, threadData);
  System_eqFunction_568(data, threadData);
  System_eqFunction_569(data, threadData);
  System_eqFunction_570(data, threadData);
  System_eqFunction_571(data, threadData);
  System_eqFunction_572(data, threadData);
  System_eqFunction_573(data, threadData);
  System_eqFunction_574(data, threadData);
  System_eqFunction_575(data, threadData);
  System_eqFunction_576(data, threadData);
  System_eqFunction_577(data, threadData);
  System_eqFunction_578(data, threadData);
  System_eqFunction_579(data, threadData);
  System_eqFunction_580(data, threadData);
  System_eqFunction_581(data, threadData);
  System_eqFunction_582(data, threadData);
  System_eqFunction_583(data, threadData);
  System_eqFunction_584(data, threadData);
  System_eqFunction_585(data, threadData);
  System_eqFunction_586(data, threadData);
  System_eqFunction_587(data, threadData);
  System_eqFunction_588(data, threadData);
  System_eqFunction_589(data, threadData);
  System_eqFunction_590(data, threadData);
  System_eqFunction_591(data, threadData);
  System_eqFunction_592(data, threadData);
  System_eqFunction_593(data, threadData);
  System_eqFunction_594(data, threadData);
  System_eqFunction_595(data, threadData);
  System_eqFunction_596(data, threadData);
  System_eqFunction_597(data, threadData);
  System_eqFunction_600(data, threadData);
  System_eqFunction_601(data, threadData);
  System_eqFunction_602(data, threadData);
  System_eqFunction_603(data, threadData);
  System_eqFunction_604(data, threadData);
  System_eqFunction_605(data, threadData);
  System_eqFunction_606(data, threadData);
  System_eqFunction_607(data, threadData);
  System_eqFunction_608(data, threadData);
  System_eqFunction_609(data, threadData);
  System_eqFunction_610(data, threadData);
  System_eqFunction_611(data, threadData);
  System_eqFunction_612(data, threadData);
  System_eqFunction_613(data, threadData);
  System_eqFunction_614(data, threadData);
  System_eqFunction_615(data, threadData);
  System_eqFunction_616(data, threadData);
  System_eqFunction_617(data, threadData);
  System_eqFunction_618(data, threadData);
  System_eqFunction_619(data, threadData);
  System_eqFunction_620(data, threadData);
  System_eqFunction_621(data, threadData);
  System_eqFunction_622(data, threadData);
  System_eqFunction_623(data, threadData);
  System_eqFunction_624(data, threadData);
  System_eqFunction_625(data, threadData);
  System_eqFunction_626(data, threadData);
  System_eqFunction_627(data, threadData);
  System_eqFunction_628(data, threadData);
  System_eqFunction_629(data, threadData);
  System_eqFunction_630(data, threadData);
  System_eqFunction_631(data, threadData);
  System_eqFunction_632(data, threadData);
  System_eqFunction_633(data, threadData);
  System_eqFunction_634(data, threadData);
  System_eqFunction_635(data, threadData);
  System_eqFunction_636(data, threadData);
  System_eqFunction_637(data, threadData);
  System_eqFunction_638(data, threadData);
  System_eqFunction_639(data, threadData);
  System_eqFunction_640(data, threadData);
  System_eqFunction_641(data, threadData);
  System_eqFunction_642(data, threadData);
  System_eqFunction_645(data, threadData);
  System_eqFunction_646(data, threadData);
  System_eqFunction_647(data, threadData);
  System_eqFunction_648(data, threadData);
  System_eqFunction_649(data, threadData);
  System_eqFunction_650(data, threadData);
  System_eqFunction_651(data, threadData);
  System_eqFunction_652(data, threadData);
  System_eqFunction_653(data, threadData);
  System_eqFunction_654(data, threadData);
  System_eqFunction_655(data, threadData);
  System_eqFunction_656(data, threadData);
  System_eqFunction_657(data, threadData);
  System_eqFunction_658(data, threadData);
  System_eqFunction_659(data, threadData);
  System_eqFunction_660(data, threadData);
  System_eqFunction_661(data, threadData);
  System_eqFunction_662(data, threadData);
  System_eqFunction_663(data, threadData);
  System_eqFunction_664(data, threadData);
  System_eqFunction_665(data, threadData);
  System_eqFunction_666(data, threadData);
  System_eqFunction_667(data, threadData);
  System_eqFunction_668(data, threadData);
  System_eqFunction_669(data, threadData);
  System_eqFunction_670(data, threadData);
  System_eqFunction_671(data, threadData);
  System_eqFunction_672(data, threadData);
  System_eqFunction_673(data, threadData);
  System_eqFunction_674(data, threadData);
  System_eqFunction_675(data, threadData);
  System_eqFunction_676(data, threadData);
  System_eqFunction_677(data, threadData);
  System_eqFunction_678(data, threadData);
  System_eqFunction_679(data, threadData);
  System_eqFunction_680(data, threadData);
  System_eqFunction_681(data, threadData);
  System_eqFunction_682(data, threadData);
  System_eqFunction_683(data, threadData);
  System_eqFunction_684(data, threadData);
  System_eqFunction_685(data, threadData);
  System_eqFunction_686(data, threadData);
  System_eqFunction_687(data, threadData);
  System_eqFunction_690(data, threadData);
  System_eqFunction_691(data, threadData);
  System_eqFunction_692(data, threadData);
  System_eqFunction_693(data, threadData);
  System_eqFunction_694(data, threadData);
  System_eqFunction_695(data, threadData);
  System_eqFunction_696(data, threadData);
  System_eqFunction_697(data, threadData);
  System_eqFunction_698(data, threadData);
  System_eqFunction_699(data, threadData);
  System_eqFunction_700(data, threadData);
  System_eqFunction_701(data, threadData);
  System_eqFunction_702(data, threadData);
  System_eqFunction_703(data, threadData);
  System_eqFunction_704(data, threadData);
  System_eqFunction_705(data, threadData);
  System_eqFunction_706(data, threadData);
  System_eqFunction_707(data, threadData);
  System_eqFunction_708(data, threadData);
  System_eqFunction_709(data, threadData);
  System_eqFunction_710(data, threadData);
  System_eqFunction_711(data, threadData);
  System_eqFunction_712(data, threadData);
  System_eqFunction_713(data, threadData);
  System_eqFunction_714(data, threadData);
  System_eqFunction_715(data, threadData);
  System_eqFunction_716(data, threadData);
  System_eqFunction_717(data, threadData);
  System_eqFunction_718(data, threadData);
  System_eqFunction_719(data, threadData);
  System_eqFunction_720(data, threadData);
  System_eqFunction_721(data, threadData);
  System_eqFunction_722(data, threadData);
  System_eqFunction_723(data, threadData);
  System_eqFunction_724(data, threadData);
  System_eqFunction_725(data, threadData);
  System_eqFunction_726(data, threadData);
  System_eqFunction_727(data, threadData);
  System_eqFunction_728(data, threadData);
  System_eqFunction_729(data, threadData);
  System_eqFunction_730(data, threadData);
  System_eqFunction_731(data, threadData);
  System_eqFunction_732(data, threadData);
  System_eqFunction_735(data, threadData);
  System_eqFunction_736(data, threadData);
  System_eqFunction_737(data, threadData);
  System_eqFunction_738(data, threadData);
  System_eqFunction_739(data, threadData);
  System_eqFunction_740(data, threadData);
  System_eqFunction_741(data, threadData);
  System_eqFunction_742(data, threadData);
  System_eqFunction_743(data, threadData);
  System_eqFunction_744(data, threadData);
  System_eqFunction_745(data, threadData);
  System_eqFunction_746(data, threadData);
  System_eqFunction_747(data, threadData);
  System_eqFunction_748(data, threadData);
  System_eqFunction_749(data, threadData);
  System_eqFunction_750(data, threadData);
  System_eqFunction_751(data, threadData);
  System_eqFunction_752(data, threadData);
  System_eqFunction_753(data, threadData);
  System_eqFunction_754(data, threadData);
  System_eqFunction_755(data, threadData);
  System_eqFunction_756(data, threadData);
  System_eqFunction_757(data, threadData);
  System_eqFunction_758(data, threadData);
  System_eqFunction_759(data, threadData);
  System_eqFunction_760(data, threadData);
  System_eqFunction_761(data, threadData);
  System_eqFunction_762(data, threadData);
  System_eqFunction_763(data, threadData);
  System_eqFunction_764(data, threadData);
  System_eqFunction_765(data, threadData);
  System_eqFunction_766(data, threadData);
  System_eqFunction_767(data, threadData);
  System_eqFunction_768(data, threadData);
  System_eqFunction_769(data, threadData);
  System_eqFunction_770(data, threadData);
  System_eqFunction_771(data, threadData);
  System_eqFunction_772(data, threadData);
  System_eqFunction_773(data, threadData);
  System_eqFunction_774(data, threadData);
  System_eqFunction_775(data, threadData);
  System_eqFunction_776(data, threadData);
  System_eqFunction_777(data, threadData);
  System_eqFunction_780(data, threadData);
  System_eqFunction_781(data, threadData);
  System_eqFunction_782(data, threadData);
  System_eqFunction_783(data, threadData);
  System_eqFunction_784(data, threadData);
  System_eqFunction_785(data, threadData);
  System_eqFunction_786(data, threadData);
  System_eqFunction_787(data, threadData);
  System_eqFunction_788(data, threadData);
  System_eqFunction_789(data, threadData);
  System_eqFunction_790(data, threadData);
  System_eqFunction_791(data, threadData);
  System_eqFunction_792(data, threadData);
  System_eqFunction_793(data, threadData);
  System_eqFunction_794(data, threadData);
  System_eqFunction_795(data, threadData);
  System_eqFunction_796(data, threadData);
  System_eqFunction_797(data, threadData);
  System_eqFunction_798(data, threadData);
  System_eqFunction_799(data, threadData);
  System_eqFunction_800(data, threadData);
  System_eqFunction_801(data, threadData);
  System_eqFunction_802(data, threadData);
  System_eqFunction_803(data, threadData);
  System_eqFunction_804(data, threadData);
  System_eqFunction_805(data, threadData);
  System_eqFunction_806(data, threadData);
  System_eqFunction_807(data, threadData);
  System_eqFunction_808(data, threadData);
  System_eqFunction_809(data, threadData);
  System_eqFunction_810(data, threadData);
  System_eqFunction_811(data, threadData);
  System_eqFunction_812(data, threadData);
  System_eqFunction_813(data, threadData);
  System_eqFunction_814(data, threadData);
  System_eqFunction_815(data, threadData);
  System_eqFunction_816(data, threadData);
  System_eqFunction_817(data, threadData);
  System_eqFunction_818(data, threadData);
  System_eqFunction_819(data, threadData);
  System_eqFunction_820(data, threadData);
  System_eqFunction_821(data, threadData);
  System_eqFunction_822(data, threadData);
  System_eqFunction_825(data, threadData);
  System_eqFunction_826(data, threadData);
  System_eqFunction_827(data, threadData);
  System_eqFunction_828(data, threadData);
  System_eqFunction_829(data, threadData);
  System_eqFunction_830(data, threadData);
  System_eqFunction_831(data, threadData);
  System_eqFunction_832(data, threadData);
  System_eqFunction_833(data, threadData);
  System_eqFunction_834(data, threadData);
  System_eqFunction_835(data, threadData);
  System_eqFunction_836(data, threadData);
  System_eqFunction_837(data, threadData);
  System_eqFunction_838(data, threadData);
  System_eqFunction_839(data, threadData);
  System_eqFunction_840(data, threadData);
  System_eqFunction_841(data, threadData);
  System_eqFunction_842(data, threadData);
  System_eqFunction_843(data, threadData);
  System_eqFunction_844(data, threadData);
  System_eqFunction_845(data, threadData);
  System_eqFunction_846(data, threadData);
  System_eqFunction_847(data, threadData);
  System_eqFunction_848(data, threadData);
  System_eqFunction_849(data, threadData);
  System_eqFunction_850(data, threadData);
  System_eqFunction_851(data, threadData);
  System_eqFunction_852(data, threadData);
  System_eqFunction_853(data, threadData);
  System_eqFunction_854(data, threadData);
  System_eqFunction_855(data, threadData);
  System_eqFunction_856(data, threadData);
  System_eqFunction_857(data, threadData);
  System_eqFunction_858(data, threadData);
  System_eqFunction_859(data, threadData);
  System_eqFunction_860(data, threadData);
  System_eqFunction_861(data, threadData);
  System_eqFunction_862(data, threadData);
  System_eqFunction_863(data, threadData);
  System_eqFunction_864(data, threadData);
  System_eqFunction_865(data, threadData);
  System_eqFunction_866(data, threadData);
  System_eqFunction_867(data, threadData);
  System_eqFunction_870(data, threadData);
  System_eqFunction_871(data, threadData);
  System_eqFunction_872(data, threadData);
  System_eqFunction_873(data, threadData);
  System_eqFunction_874(data, threadData);
  System_eqFunction_875(data, threadData);
  System_eqFunction_876(data, threadData);
  System_eqFunction_877(data, threadData);
  System_eqFunction_878(data, threadData);
  System_eqFunction_879(data, threadData);
  System_eqFunction_880(data, threadData);
  System_eqFunction_881(data, threadData);
  System_eqFunction_882(data, threadData);
  System_eqFunction_883(data, threadData);
  System_eqFunction_884(data, threadData);
  System_eqFunction_885(data, threadData);
  System_eqFunction_886(data, threadData);
  System_eqFunction_887(data, threadData);
  System_eqFunction_888(data, threadData);
  System_eqFunction_889(data, threadData);
  System_eqFunction_890(data, threadData);
  System_eqFunction_891(data, threadData);
  System_eqFunction_892(data, threadData);
  System_eqFunction_893(data, threadData);
  System_eqFunction_894(data, threadData);
  System_eqFunction_895(data, threadData);
  System_eqFunction_896(data, threadData);
  System_eqFunction_897(data, threadData);
  System_eqFunction_898(data, threadData);
  System_eqFunction_899(data, threadData);
  System_eqFunction_900(data, threadData);
  System_eqFunction_901(data, threadData);
  System_eqFunction_902(data, threadData);
  System_eqFunction_903(data, threadData);
  System_eqFunction_904(data, threadData);
  System_eqFunction_905(data, threadData);
  System_eqFunction_907(data, threadData);
  System_eqFunction_908(data, threadData);
  System_eqFunction_909(data, threadData);
  System_eqFunction_910(data, threadData);
  System_eqFunction_911(data, threadData);
  System_eqFunction_912(data, threadData);
  System_eqFunction_913(data, threadData);
  System_eqFunction_914(data, threadData);
  System_eqFunction_915(data, threadData);
  System_eqFunction_916(data, threadData);
  System_eqFunction_917(data, threadData);
  System_eqFunction_918(data, threadData);
  System_eqFunction_919(data, threadData);
  System_eqFunction_920(data, threadData);
  System_eqFunction_921(data, threadData);
  System_eqFunction_922(data, threadData);
  System_eqFunction_923(data, threadData);
  System_eqFunction_924(data, threadData);
  System_eqFunction_925(data, threadData);
  System_eqFunction_926(data, threadData);
  System_eqFunction_927(data, threadData);
  System_eqFunction_928(data, threadData);
  System_eqFunction_929(data, threadData);
  System_eqFunction_930(data, threadData);
  System_eqFunction_931(data, threadData);
  System_eqFunction_932(data, threadData);
  System_eqFunction_933(data, threadData);
  System_eqFunction_934(data, threadData);
  System_eqFunction_935(data, threadData);
  System_eqFunction_936(data, threadData);
  System_eqFunction_937(data, threadData);
  System_eqFunction_938(data, threadData);
  System_eqFunction_939(data, threadData);
  System_eqFunction_940(data, threadData);
  System_eqFunction_941(data, threadData);
  System_eqFunction_942(data, threadData);
  System_eqFunction_943(data, threadData);
  System_eqFunction_944(data, threadData);
  System_eqFunction_945(data, threadData);
  System_eqFunction_946(data, threadData);
  System_eqFunction_947(data, threadData);
  System_eqFunction_948(data, threadData);
  System_eqFunction_949(data, threadData);
  System_eqFunction_951(data, threadData);
  System_eqFunction_952(data, threadData);
  System_eqFunction_953(data, threadData);
  System_eqFunction_954(data, threadData);
  System_eqFunction_955(data, threadData);
  System_eqFunction_956(data, threadData);
  System_eqFunction_957(data, threadData);
  System_eqFunction_960(data, threadData);
  System_eqFunction_961(data, threadData);
  System_eqFunction_962(data, threadData);
  System_eqFunction_963(data, threadData);
  System_eqFunction_964(data, threadData);
  System_eqFunction_965(data, threadData);
  System_eqFunction_966(data, threadData);
  System_eqFunction_967(data, threadData);
  System_eqFunction_968(data, threadData);
  System_eqFunction_969(data, threadData);
  System_eqFunction_970(data, threadData);
  System_eqFunction_971(data, threadData);
  System_eqFunction_972(data, threadData);
  System_eqFunction_973(data, threadData);
  System_eqFunction_974(data, threadData);
  System_eqFunction_975(data, threadData);
  System_eqFunction_976(data, threadData);
  System_eqFunction_977(data, threadData);
  System_eqFunction_978(data, threadData);
  System_eqFunction_979(data, threadData);
  System_eqFunction_980(data, threadData);
  System_eqFunction_981(data, threadData);
  System_eqFunction_982(data, threadData);
  System_eqFunction_983(data, threadData);
  System_eqFunction_984(data, threadData);
  System_eqFunction_985(data, threadData);
  System_eqFunction_986(data, threadData);
  System_eqFunction_987(data, threadData);
  System_eqFunction_988(data, threadData);
  System_eqFunction_989(data, threadData);
  System_eqFunction_990(data, threadData);
  System_eqFunction_991(data, threadData);
  System_eqFunction_992(data, threadData);
  System_eqFunction_993(data, threadData);
  System_eqFunction_994(data, threadData);
  System_eqFunction_995(data, threadData);
  System_eqFunction_996(data, threadData);
  System_eqFunction_997(data, threadData);
  System_eqFunction_998(data, threadData);
  System_eqFunction_999(data, threadData);
  System_eqFunction_1000(data, threadData);
  System_eqFunction_1001(data, threadData);
  System_eqFunction_1002(data, threadData);
  System_eqFunction_1003(data, threadData);
  System_eqFunction_1004(data, threadData);
  System_eqFunction_1005(data, threadData);
  System_eqFunction_1006(data, threadData);
  System_eqFunction_1007(data, threadData);
  System_eqFunction_1008(data, threadData);
  System_eqFunction_1009(data, threadData);
  System_eqFunction_1010(data, threadData);
  System_eqFunction_1011(data, threadData);
  System_eqFunction_1012(data, threadData);
  System_eqFunction_1013(data, threadData);
  System_eqFunction_1014(data, threadData);
  System_eqFunction_1015(data, threadData);
  System_eqFunction_1016(data, threadData);
  System_eqFunction_1017(data, threadData);
  System_eqFunction_1018(data, threadData);
  System_eqFunction_1019(data, threadData);
  System_eqFunction_1020(data, threadData);
  System_eqFunction_1021(data, threadData);
  System_eqFunction_1022(data, threadData);
  System_eqFunction_1023(data, threadData);
  System_eqFunction_1024(data, threadData);
  System_eqFunction_1025(data, threadData);
  System_eqFunction_1026(data, threadData);
  System_eqFunction_1027(data, threadData);
  System_eqFunction_1028(data, threadData);
  System_eqFunction_1029(data, threadData);
  System_eqFunction_1030(data, threadData);
  System_eqFunction_1031(data, threadData);
  System_eqFunction_1032(data, threadData);
  System_eqFunction_1033(data, threadData);
  System_eqFunction_1034(data, threadData);
  System_eqFunction_1035(data, threadData);
  System_eqFunction_1036(data, threadData);
  System_eqFunction_1037(data, threadData);
  System_eqFunction_1038(data, threadData);
  System_eqFunction_1039(data, threadData);
  System_eqFunction_1040(data, threadData);
  System_eqFunction_1041(data, threadData);
  System_eqFunction_1042(data, threadData);
  System_eqFunction_1043(data, threadData);
  System_eqFunction_1044(data, threadData);
  System_eqFunction_1045(data, threadData);
  System_eqFunction_1046(data, threadData);
  System_eqFunction_1047(data, threadData);
  System_eqFunction_1048(data, threadData);
  System_eqFunction_1049(data, threadData);
  System_eqFunction_1050(data, threadData);
  System_eqFunction_1051(data, threadData);
  System_eqFunction_1052(data, threadData);
  System_eqFunction_1053(data, threadData);
  System_eqFunction_1054(data, threadData);
  System_eqFunction_1055(data, threadData);
  System_eqFunction_1056(data, threadData);
  System_eqFunction_1057(data, threadData);
  System_eqFunction_1058(data, threadData);
  System_eqFunction_1059(data, threadData);
  System_eqFunction_1060(data, threadData);
  System_eqFunction_1061(data, threadData);
  System_eqFunction_1062(data, threadData);
  System_eqFunction_1063(data, threadData);
  System_eqFunction_1064(data, threadData);
  System_eqFunction_1065(data, threadData);
  System_eqFunction_1066(data, threadData);
  System_eqFunction_1067(data, threadData);
  System_eqFunction_1068(data, threadData);
  System_eqFunction_1069(data, threadData);
  System_eqFunction_1070(data, threadData);
  System_eqFunction_1071(data, threadData);
  System_eqFunction_1072(data, threadData);
  System_eqFunction_1073(data, threadData);
  System_eqFunction_1074(data, threadData);
  System_eqFunction_1075(data, threadData);
  System_eqFunction_1076(data, threadData);
  System_eqFunction_1077(data, threadData);
  System_eqFunction_1078(data, threadData);
  System_eqFunction_1079(data, threadData);
  System_eqFunction_1080(data, threadData);
  System_eqFunction_1081(data, threadData);
  System_eqFunction_1082(data, threadData);
  System_eqFunction_1083(data, threadData);
  System_eqFunction_1084(data, threadData);
  System_eqFunction_1085(data, threadData);
  System_eqFunction_1086(data, threadData);
  System_eqFunction_1087(data, threadData);
  System_eqFunction_1088(data, threadData);
  System_eqFunction_1089(data, threadData);
  System_eqFunction_1090(data, threadData);
  System_eqFunction_1091(data, threadData);
  System_eqFunction_1092(data, threadData);
  System_eqFunction_1093(data, threadData);
  System_eqFunction_1094(data, threadData);
  System_eqFunction_1096(data, threadData);
  System_eqFunction_1097(data, threadData);
  System_eqFunction_1098(data, threadData);
  System_eqFunction_1099(data, threadData);
  System_eqFunction_1100(data, threadData);
  System_eqFunction_1101(data, threadData);
  System_eqFunction_1102(data, threadData);
  System_eqFunction_1103(data, threadData);
  System_eqFunction_1104(data, threadData);
  System_eqFunction_1105(data, threadData);
  System_eqFunction_1106(data, threadData);
  System_eqFunction_1107(data, threadData);
  System_eqFunction_1108(data, threadData);
  System_eqFunction_1109(data, threadData);
  System_eqFunction_1110(data, threadData);
  System_eqFunction_1111(data, threadData);
  System_eqFunction_1112(data, threadData);
  System_eqFunction_1113(data, threadData);
  System_eqFunction_1114(data, threadData);
  System_eqFunction_1115(data, threadData);
  System_eqFunction_1116(data, threadData);
  System_eqFunction_1117(data, threadData);
  System_eqFunction_1118(data, threadData);
  System_eqFunction_1119(data, threadData);
  System_eqFunction_1120(data, threadData);
  System_eqFunction_1121(data, threadData);
  System_eqFunction_1122(data, threadData);
  System_eqFunction_1123(data, threadData);
  System_eqFunction_1124(data, threadData);
  System_eqFunction_1125(data, threadData);
  System_eqFunction_1126(data, threadData);
  System_eqFunction_1127(data, threadData);
  System_eqFunction_1128(data, threadData);
  System_eqFunction_1129(data, threadData);
  System_eqFunction_1130(data, threadData);
  System_eqFunction_1131(data, threadData);
  System_eqFunction_1132(data, threadData);
  System_eqFunction_1133(data, threadData);
  System_eqFunction_1134(data, threadData);
  System_eqFunction_1135(data, threadData);
  System_eqFunction_1136(data, threadData);
  System_eqFunction_1137(data, threadData);
  System_eqFunction_1138(data, threadData);
  System_eqFunction_1139(data, threadData);
  System_eqFunction_1140(data, threadData);
  System_eqFunction_1141(data, threadData);
  System_eqFunction_1142(data, threadData);
  System_eqFunction_1143(data, threadData);
  System_eqFunction_1144(data, threadData);
  System_eqFunction_1145(data, threadData);
  System_eqFunction_1146(data, threadData);
  System_eqFunction_1147(data, threadData);
  System_eqFunction_1148(data, threadData);
  System_eqFunction_1149(data, threadData);
  System_eqFunction_1150(data, threadData);
  System_eqFunction_1151(data, threadData);
  System_eqFunction_1152(data, threadData);
  System_eqFunction_1153(data, threadData);
  System_eqFunction_1154(data, threadData);
  System_eqFunction_1155(data, threadData);
  System_eqFunction_1156(data, threadData);
  System_eqFunction_1157(data, threadData);
  System_eqFunction_1158(data, threadData);
  System_eqFunction_1159(data, threadData);
  System_eqFunction_1160(data, threadData);
  System_eqFunction_1161(data, threadData);
  System_eqFunction_1162(data, threadData);
  System_eqFunction_1163(data, threadData);
  System_eqFunction_1164(data, threadData);
  System_eqFunction_1165(data, threadData);
  System_eqFunction_1166(data, threadData);
  System_eqFunction_1167(data, threadData);
  System_eqFunction_1168(data, threadData);
  System_eqFunction_1169(data, threadData);
  System_eqFunction_1170(data, threadData);
  System_eqFunction_1171(data, threadData);
  System_eqFunction_1172(data, threadData);
  System_eqFunction_1173(data, threadData);
  System_eqFunction_1174(data, threadData);
  System_eqFunction_1175(data, threadData);
  System_eqFunction_1176(data, threadData);
  System_eqFunction_1177(data, threadData);
  System_eqFunction_1178(data, threadData);
  System_eqFunction_1179(data, threadData);
  System_eqFunction_1180(data, threadData);
  System_eqFunction_1181(data, threadData);
  System_eqFunction_1182(data, threadData);
  System_eqFunction_1183(data, threadData);
  System_eqFunction_1184(data, threadData);
  System_eqFunction_1185(data, threadData);
  System_eqFunction_1186(data, threadData);
  System_eqFunction_1187(data, threadData);
  System_eqFunction_1188(data, threadData);
  System_eqFunction_1189(data, threadData);
  System_eqFunction_1190(data, threadData);
  System_eqFunction_1191(data, threadData);
  System_eqFunction_1192(data, threadData);
  System_eqFunction_1193(data, threadData);
  System_eqFunction_1194(data, threadData);
  System_eqFunction_1195(data, threadData);
  System_eqFunction_1196(data, threadData);
  System_eqFunction_1197(data, threadData);
  System_eqFunction_1198(data, threadData);
  System_eqFunction_1199(data, threadData);
  System_eqFunction_1200(data, threadData);
  System_eqFunction_1201(data, threadData);
  System_eqFunction_1202(data, threadData);
  System_eqFunction_1203(data, threadData);
  System_eqFunction_1204(data, threadData);
  System_eqFunction_1205(data, threadData);
  System_eqFunction_1206(data, threadData);
  System_eqFunction_1207(data, threadData);
  System_eqFunction_1208(data, threadData);
  System_eqFunction_1209(data, threadData);
  System_eqFunction_1210(data, threadData);
  System_eqFunction_1211(data, threadData);
  System_eqFunction_1212(data, threadData);
  System_eqFunction_1213(data, threadData);
  System_eqFunction_1214(data, threadData);
  System_eqFunction_1215(data, threadData);
  System_eqFunction_1216(data, threadData);
  System_eqFunction_1217(data, threadData);
  System_eqFunction_1218(data, threadData);
  System_eqFunction_1219(data, threadData);
  System_eqFunction_1220(data, threadData);
  System_eqFunction_1221(data, threadData);
  System_eqFunction_1222(data, threadData);
  System_eqFunction_1223(data, threadData);
  System_eqFunction_1224(data, threadData);
  System_eqFunction_1225(data, threadData);
  System_eqFunction_1226(data, threadData);
  System_eqFunction_1227(data, threadData);
  System_eqFunction_1228(data, threadData);
  System_eqFunction_1229(data, threadData);
  System_eqFunction_1230(data, threadData);
  System_eqFunction_1232(data, threadData);
  System_eqFunction_1233(data, threadData);
  System_eqFunction_1234(data, threadData);
  System_eqFunction_1235(data, threadData);
  System_eqFunction_1236(data, threadData);
  System_eqFunction_1237(data, threadData);
  System_eqFunction_1238(data, threadData);
  System_eqFunction_1239(data, threadData);
  System_eqFunction_1240(data, threadData);
  System_eqFunction_1241(data, threadData);
  System_eqFunction_1242(data, threadData);
  System_eqFunction_1243(data, threadData);
  System_eqFunction_1244(data, threadData);
  System_eqFunction_1245(data, threadData);
  System_eqFunction_1246(data, threadData);
  System_eqFunction_1247(data, threadData);
  System_eqFunction_1248(data, threadData);
  System_eqFunction_1249(data, threadData);
  System_eqFunction_1250(data, threadData);
  System_eqFunction_1251(data, threadData);
  System_eqFunction_1252(data, threadData);
  System_eqFunction_1253(data, threadData);
  System_eqFunction_1254(data, threadData);
  System_eqFunction_1255(data, threadData);
  System_eqFunction_1256(data, threadData);
  System_eqFunction_1257(data, threadData);
  System_eqFunction_1258(data, threadData);
  System_eqFunction_1259(data, threadData);
  System_eqFunction_1260(data, threadData);
  System_eqFunction_1261(data, threadData);
  System_eqFunction_1262(data, threadData);
  System_eqFunction_1263(data, threadData);
  System_eqFunction_1264(data, threadData);
  System_eqFunction_1265(data, threadData);
  System_eqFunction_1266(data, threadData);
  System_eqFunction_1267(data, threadData);
  System_eqFunction_1268(data, threadData);
  System_eqFunction_1269(data, threadData);
  System_eqFunction_1270(data, threadData);
  System_eqFunction_1271(data, threadData);
  System_eqFunction_1272(data, threadData);
  System_eqFunction_1273(data, threadData);
  System_eqFunction_1274(data, threadData);
  System_eqFunction_1275(data, threadData);
  System_eqFunction_1276(data, threadData);
  System_eqFunction_1277(data, threadData);
  System_eqFunction_1278(data, threadData);
  System_eqFunction_1279(data, threadData);
  System_eqFunction_1280(data, threadData);
  System_eqFunction_1281(data, threadData);
  System_eqFunction_1282(data, threadData);
  System_eqFunction_1283(data, threadData);
  System_eqFunction_1284(data, threadData);
  System_eqFunction_1285(data, threadData);
  System_eqFunction_1286(data, threadData);
  System_eqFunction_1287(data, threadData);
  System_eqFunction_1288(data, threadData);
  System_eqFunction_1289(data, threadData);
  System_eqFunction_1290(data, threadData);
  System_eqFunction_1291(data, threadData);
  System_eqFunction_1292(data, threadData);
  System_eqFunction_1293(data, threadData);
  System_eqFunction_1294(data, threadData);
  System_eqFunction_1295(data, threadData);
  System_eqFunction_1296(data, threadData);
  System_eqFunction_1297(data, threadData);
  System_eqFunction_1298(data, threadData);
  System_eqFunction_1299(data, threadData);
  System_eqFunction_1300(data, threadData);
  System_eqFunction_1301(data, threadData);
  System_eqFunction_1302(data, threadData);
  System_eqFunction_1303(data, threadData);
  System_eqFunction_1304(data, threadData);
  System_eqFunction_1305(data, threadData);
  System_eqFunction_1306(data, threadData);
  System_eqFunction_1307(data, threadData);
  System_eqFunction_1308(data, threadData);
  System_eqFunction_1309(data, threadData);
  System_eqFunction_1310(data, threadData);
  System_eqFunction_1311(data, threadData);
  System_eqFunction_1312(data, threadData);
  System_eqFunction_1313(data, threadData);
  System_eqFunction_1314(data, threadData);
  System_eqFunction_1315(data, threadData);
  System_eqFunction_1316(data, threadData);
  System_eqFunction_1317(data, threadData);
  System_eqFunction_1318(data, threadData);
  System_eqFunction_1319(data, threadData);
  System_eqFunction_1320(data, threadData);
  System_eqFunction_1321(data, threadData);
  System_eqFunction_1322(data, threadData);
  System_eqFunction_1323(data, threadData);
  System_eqFunction_1324(data, threadData);
  System_eqFunction_1325(data, threadData);
  System_eqFunction_1326(data, threadData);
  System_eqFunction_1327(data, threadData);
  System_eqFunction_1328(data, threadData);
  System_eqFunction_1329(data, threadData);
  System_eqFunction_1330(data, threadData);
  System_eqFunction_1331(data, threadData);
  System_eqFunction_1332(data, threadData);
  System_eqFunction_1333(data, threadData);
  System_eqFunction_1334(data, threadData);
  System_eqFunction_1335(data, threadData);
  System_eqFunction_1336(data, threadData);
  System_eqFunction_1337(data, threadData);
  System_eqFunction_1338(data, threadData);
  System_eqFunction_1339(data, threadData);
  System_eqFunction_1340(data, threadData);
  System_eqFunction_1341(data, threadData);
  System_eqFunction_1342(data, threadData);
  System_eqFunction_1343(data, threadData);
  System_eqFunction_1344(data, threadData);
  System_eqFunction_1345(data, threadData);
  System_eqFunction_1346(data, threadData);
  System_eqFunction_1347(data, threadData);
  System_eqFunction_1348(data, threadData);
  System_eqFunction_1349(data, threadData);
  System_eqFunction_1350(data, threadData);
  System_eqFunction_1351(data, threadData);
  System_eqFunction_1352(data, threadData);
  System_eqFunction_1353(data, threadData);
  System_eqFunction_1354(data, threadData);
  System_eqFunction_1355(data, threadData);
  System_eqFunction_1356(data, threadData);
  System_eqFunction_1357(data, threadData);
  System_eqFunction_1358(data, threadData);
  System_eqFunction_1359(data, threadData);
  System_eqFunction_1360(data, threadData);
  System_eqFunction_1361(data, threadData);
  System_eqFunction_1362(data, threadData);
  System_eqFunction_1363(data, threadData);
  System_eqFunction_1364(data, threadData);
  System_eqFunction_1365(data, threadData);
  System_eqFunction_1366(data, threadData);
  System_eqFunction_1368(data, threadData);
  System_eqFunction_1369(data, threadData);
  System_eqFunction_1370(data, threadData);
  System_eqFunction_1371(data, threadData);
  System_eqFunction_1372(data, threadData);
  System_eqFunction_1373(data, threadData);
  System_eqFunction_1374(data, threadData);
  System_eqFunction_1375(data, threadData);
  System_eqFunction_1376(data, threadData);
  System_eqFunction_1377(data, threadData);
  System_eqFunction_1378(data, threadData);
  System_eqFunction_1379(data, threadData);
  System_eqFunction_1380(data, threadData);
  System_eqFunction_1381(data, threadData);
  System_eqFunction_1382(data, threadData);
  System_eqFunction_1383(data, threadData);
  System_eqFunction_1384(data, threadData);
  System_eqFunction_1385(data, threadData);
  System_eqFunction_1386(data, threadData);
  System_eqFunction_1387(data, threadData);
  System_eqFunction_1388(data, threadData);
  System_eqFunction_1389(data, threadData);
  System_eqFunction_1390(data, threadData);
  System_eqFunction_1391(data, threadData);
  System_eqFunction_1392(data, threadData);
  System_eqFunction_1393(data, threadData);
  System_eqFunction_1394(data, threadData);
  System_eqFunction_1395(data, threadData);
  System_eqFunction_1396(data, threadData);
  System_eqFunction_1397(data, threadData);
  System_eqFunction_1398(data, threadData);
  System_eqFunction_1399(data, threadData);
  System_eqFunction_1400(data, threadData);
  System_eqFunction_1401(data, threadData);
  System_eqFunction_1402(data, threadData);
  System_eqFunction_1403(data, threadData);
  System_eqFunction_1404(data, threadData);
  System_eqFunction_1405(data, threadData);
  System_eqFunction_1406(data, threadData);
  System_eqFunction_1407(data, threadData);
  System_eqFunction_1408(data, threadData);
  System_eqFunction_1409(data, threadData);
  System_eqFunction_1410(data, threadData);
  System_eqFunction_1411(data, threadData);
  System_eqFunction_1412(data, threadData);
  System_eqFunction_1413(data, threadData);
  System_eqFunction_1414(data, threadData);
  System_eqFunction_1415(data, threadData);
  System_eqFunction_1416(data, threadData);
  System_eqFunction_1417(data, threadData);
  System_eqFunction_1418(data, threadData);
  System_eqFunction_1419(data, threadData);
  System_eqFunction_1420(data, threadData);
  System_eqFunction_1421(data, threadData);
  System_eqFunction_1422(data, threadData);
  System_eqFunction_1423(data, threadData);
  System_eqFunction_1424(data, threadData);
  System_eqFunction_1425(data, threadData);
  System_eqFunction_1426(data, threadData);
  System_eqFunction_1427(data, threadData);
  System_eqFunction_1428(data, threadData);
  System_eqFunction_1429(data, threadData);
  System_eqFunction_1430(data, threadData);
  System_eqFunction_1431(data, threadData);
  System_eqFunction_1432(data, threadData);
  System_eqFunction_1433(data, threadData);
  System_eqFunction_1434(data, threadData);
  System_eqFunction_1435(data, threadData);
  System_eqFunction_1436(data, threadData);
  System_eqFunction_1437(data, threadData);
  System_eqFunction_1438(data, threadData);
  System_eqFunction_1439(data, threadData);
  System_eqFunction_1440(data, threadData);
  System_eqFunction_1441(data, threadData);
  System_eqFunction_1442(data, threadData);
  System_eqFunction_1443(data, threadData);
  System_eqFunction_1444(data, threadData);
  System_eqFunction_1445(data, threadData);
  System_eqFunction_1446(data, threadData);
  System_eqFunction_1447(data, threadData);
  System_eqFunction_1448(data, threadData);
  System_eqFunction_1449(data, threadData);
  System_eqFunction_1450(data, threadData);
  System_eqFunction_1451(data, threadData);
  System_eqFunction_1452(data, threadData);
  System_eqFunction_1453(data, threadData);
  System_eqFunction_1454(data, threadData);
  System_eqFunction_1455(data, threadData);
  System_eqFunction_1456(data, threadData);
  System_eqFunction_1457(data, threadData);
  System_eqFunction_1458(data, threadData);
  System_eqFunction_1459(data, threadData);
  System_eqFunction_1460(data, threadData);
  System_eqFunction_1461(data, threadData);
  System_eqFunction_1462(data, threadData);
  System_eqFunction_1463(data, threadData);
  System_eqFunction_1464(data, threadData);
  System_eqFunction_1465(data, threadData);
  System_eqFunction_1466(data, threadData);
  System_eqFunction_1467(data, threadData);
  System_eqFunction_1468(data, threadData);
  System_eqFunction_1469(data, threadData);
  System_eqFunction_1470(data, threadData);
  System_eqFunction_1471(data, threadData);
  System_eqFunction_1472(data, threadData);
  System_eqFunction_1473(data, threadData);
  System_eqFunction_1474(data, threadData);
  System_eqFunction_1475(data, threadData);
  System_eqFunction_1476(data, threadData);
  System_eqFunction_1477(data, threadData);
  System_eqFunction_1478(data, threadData);
  System_eqFunction_1479(data, threadData);
  System_eqFunction_1480(data, threadData);
  System_eqFunction_1481(data, threadData);
  System_eqFunction_1482(data, threadData);
  System_eqFunction_1483(data, threadData);
  System_eqFunction_1484(data, threadData);
  System_eqFunction_1485(data, threadData);
  System_eqFunction_1486(data, threadData);
  System_eqFunction_1487(data, threadData);
  System_eqFunction_1488(data, threadData);
  System_eqFunction_1489(data, threadData);
  System_eqFunction_1490(data, threadData);
  System_eqFunction_1491(data, threadData);
  System_eqFunction_1492(data, threadData);
  System_eqFunction_1493(data, threadData);
  System_eqFunction_1494(data, threadData);
  System_eqFunction_1495(data, threadData);
  System_eqFunction_1496(data, threadData);
  System_eqFunction_1497(data, threadData);
  System_eqFunction_1498(data, threadData);
  System_eqFunction_1499(data, threadData);
  System_eqFunction_1500(data, threadData);
  System_eqFunction_1501(data, threadData);
  System_eqFunction_1502(data, threadData);
  System_eqFunction_1504(data, threadData);
  System_eqFunction_1505(data, threadData);
  System_eqFunction_1506(data, threadData);
  System_eqFunction_1507(data, threadData);
  System_eqFunction_1508(data, threadData);
  System_eqFunction_1509(data, threadData);
  System_eqFunction_1510(data, threadData);
  System_eqFunction_1511(data, threadData);
  System_eqFunction_1512(data, threadData);
  System_eqFunction_1513(data, threadData);
  System_eqFunction_1514(data, threadData);
  System_eqFunction_1515(data, threadData);
  System_eqFunction_1516(data, threadData);
  System_eqFunction_1517(data, threadData);
  System_eqFunction_1518(data, threadData);
  System_eqFunction_1519(data, threadData);
  System_eqFunction_1520(data, threadData);
  System_eqFunction_1521(data, threadData);
  System_eqFunction_1522(data, threadData);
  System_eqFunction_1523(data, threadData);
  System_eqFunction_1524(data, threadData);
  System_eqFunction_1525(data, threadData);
  System_eqFunction_1526(data, threadData);
  System_eqFunction_1527(data, threadData);
  System_eqFunction_1528(data, threadData);
  System_eqFunction_1529(data, threadData);
  System_eqFunction_1530(data, threadData);
  System_eqFunction_1531(data, threadData);
  System_eqFunction_1532(data, threadData);
  System_eqFunction_1533(data, threadData);
  System_eqFunction_1534(data, threadData);
  System_eqFunction_1535(data, threadData);
  System_eqFunction_1536(data, threadData);
  System_eqFunction_1537(data, threadData);
  System_eqFunction_1538(data, threadData);
  System_eqFunction_1539(data, threadData);
  System_eqFunction_1540(data, threadData);
  System_eqFunction_1541(data, threadData);
  System_eqFunction_1542(data, threadData);
  System_eqFunction_1543(data, threadData);
  System_eqFunction_1544(data, threadData);
  System_eqFunction_1545(data, threadData);
  System_eqFunction_1546(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int System_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  (data->simulationInfo->integerParameter[1]/* cc.p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  (data->simulationInfo->integerParameter[2]/* cc.p.nAreas PARAM */)  = ((modelica_integer) 8);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  (data->simulationInfo->integerParameter[3]/* cc.p.nDrones PARAM */)  = ((modelica_integer) 4);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  (data->simulationInfo->integerParameter[4]/* cc_to_drone[1].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  (data->simulationInfo->integerParameter[5]/* cc_to_drone[2].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  (data->simulationInfo->integerParameter[6]/* cc_to_drone[3].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[6].time_unvarying = 1;
  (data->simulationInfo->integerParameter[7]/* cc_to_drone[4].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  (data->simulationInfo->integerParameter[8]/* cc_to_drone[1].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  (data->simulationInfo->integerParameter[9]/* cc_to_drone[2].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  (data->simulationInfo->integerParameter[10]/* cc_to_drone[3].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[10].time_unvarying = 1;
  (data->simulationInfo->integerParameter[11]/* cc_to_drone[4].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[11].time_unvarying = 1;
  (data->simulationInfo->integerParameter[60]/* d[1].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[60].time_unvarying = 1;
  (data->simulationInfo->integerParameter[61]/* d[2].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[61].time_unvarying = 1;
  (data->simulationInfo->integerParameter[62]/* d[3].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[62].time_unvarying = 1;
  (data->simulationInfo->integerParameter[63]/* d[4].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[63].time_unvarying = 1;
  (data->simulationInfo->integerParameter[72]/* drone_to_cc[1].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[72].time_unvarying = 1;
  (data->simulationInfo->integerParameter[73]/* drone_to_cc[2].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[73].time_unvarying = 1;
  (data->simulationInfo->integerParameter[74]/* drone_to_cc[3].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[74].time_unvarying = 1;
  (data->simulationInfo->integerParameter[75]/* drone_to_cc[4].p.fifo_len PARAM */)  = ((modelica_integer) 10);
  data->modelData->integerParameterData[75].time_unvarying = 1;
  (data->simulationInfo->integerParameter[76]/* drone_to_cc[1].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[76].time_unvarying = 1;
  (data->simulationInfo->integerParameter[77]/* drone_to_cc[2].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[77].time_unvarying = 1;
  (data->simulationInfo->integerParameter[78]/* drone_to_cc[3].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[78].time_unvarying = 1;
  (data->simulationInfo->integerParameter[79]/* drone_to_cc[4].p.msg_len PARAM */)  = ((modelica_integer) 5);
  data->modelData->integerParameterData[79].time_unvarying = 1;
  (data->simulationInfo->integerParameter[90]/* m.p.nAreas PARAM */)  = ((modelica_integer) 8);
  data->modelData->integerParameterData[90].time_unvarying = 1;
  (data->simulationInfo->integerParameter[95]/* p.nDrones PARAM */)  = ((modelica_integer) 4);
  data->modelData->integerParameterData[95].time_unvarying = 1;
  System_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

