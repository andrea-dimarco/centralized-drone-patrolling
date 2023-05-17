/* Linearization */
#include "System_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *System_linear_model_frame()
{
  return "model linearized_model \"System\" \n  parameter Integer n = 24 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 7 \"number of outputs\";\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[m] = %s;\n"
  "\n"
  "  parameter Real A[n, n] =\n\t[%s];\n\n"
  "  parameter Real B[n, m] = zeros(n, m);%s\n\n"
  "  parameter Real C[p, n] =\n\t[%s];\n\n"
  "  parameter Real D[p, m] = zeros(p, m);%s\n\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[m];\n"
  "  output Real y[p];\n"
  "\n"
  "  Real 'x_d[1].d.Vx' = x[1];\n""  Real 'x_d[2].d.Vx' = x[2];\n""  Real 'x_d[3].d.Vx' = x[3];\n""  Real 'x_d[4].d.Vx' = x[4];\n""  Real 'x_d[1].d.Vy' = x[5];\n""  Real 'x_d[2].d.Vy' = x[6];\n""  Real 'x_d[3].d.Vy' = x[7];\n""  Real 'x_d[4].d.Vy' = x[8];\n""  Real 'x_d[1].d.Vz' = x[9];\n""  Real 'x_d[2].d.Vz' = x[10];\n""  Real 'x_d[3].d.Vz' = x[11];\n""  Real 'x_d[4].d.Vz' = x[12];\n""  Real 'x_d[1].d.x' = x[13];\n""  Real 'x_d[2].d.x' = x[14];\n""  Real 'x_d[3].d.x' = x[15];\n""  Real 'x_d[4].d.x' = x[16];\n""  Real 'x_d[1].d.y' = x[17];\n""  Real 'x_d[2].d.y' = x[18];\n""  Real 'x_d[3].d.y' = x[19];\n""  Real 'x_d[4].d.y' = x[20];\n""  Real 'x_d[1].d.z' = x[21];\n""  Real 'x_d[2].d.z' = x[22];\n""  Real 'x_d[3].d.z' = x[23];\n""  Real 'x_d[4].d.z' = x[24];\n"
  "  Real 'y_Tcc' = y[1];\n""  Real 'y_arrivalThreshold' = y[2];\n""  Real 'y_arrival_timeout' = y[3];\n""  Real 'y_cc_choice' = y[4];\n""  Real 'y_comm_timeout' = y[5];\n""  Real 'y_p_recharge' = y[6];\n""  Real 'y_p_worst' = y[7];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linearized_model;\n";
}
const char *System_linear_model_datarecovery_frame()
{
  return "model linearized_model \"System\" \n parameter Integer n = 24 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 7 \"number of outputs\";\n  parameter Integer nz = 103 \"data recovery variables\";\n"
  "  parameter Real x0[24] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[103] = %s;\n"
  "\n"
  "  parameter Real A[n, n] =\n\t[%s];\n\n"
  "  parameter Real B[n, m] = zeros(n, m);%s\n\n"
  "  parameter Real C[p, n] =\n\t[%s];\n\n"
  "  parameter Real D[p, m] = zeros(p, m);%s\n\n"
  "  parameter Real Cz[nz, n] =\n\t[%s];\n\n"
  "  parameter Real Dz[nz, m] = zeros(nz, m);%s\n\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[m];\n"
  "  output Real y[p];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'x_d[1].d.Vx' = x[1];\n""  Real 'x_d[2].d.Vx' = x[2];\n""  Real 'x_d[3].d.Vx' = x[3];\n""  Real 'x_d[4].d.Vx' = x[4];\n""  Real 'x_d[1].d.Vy' = x[5];\n""  Real 'x_d[2].d.Vy' = x[6];\n""  Real 'x_d[3].d.Vy' = x[7];\n""  Real 'x_d[4].d.Vy' = x[8];\n""  Real 'x_d[1].d.Vz' = x[9];\n""  Real 'x_d[2].d.Vz' = x[10];\n""  Real 'x_d[3].d.Vz' = x[11];\n""  Real 'x_d[4].d.Vz' = x[12];\n""  Real 'x_d[1].d.x' = x[13];\n""  Real 'x_d[2].d.x' = x[14];\n""  Real 'x_d[3].d.x' = x[15];\n""  Real 'x_d[4].d.x' = x[16];\n""  Real 'x_d[1].d.y' = x[17];\n""  Real 'x_d[2].d.y' = x[18];\n""  Real 'x_d[3].d.y' = x[19];\n""  Real 'x_d[4].d.y' = x[20];\n""  Real 'x_d[1].d.z' = x[21];\n""  Real 'x_d[2].d.z' = x[22];\n""  Real 'x_d[3].d.z' = x[23];\n""  Real 'x_d[4].d.z' = x[24];\n"
  "  Real 'y_Tcc' = y[1];\n""  Real 'y_arrivalThreshold' = y[2];\n""  Real 'y_arrival_timeout' = y[3];\n""  Real 'y_cc_choice' = y[4];\n""  Real 'y_comm_timeout' = y[5];\n""  Real 'y_p_recharge' = y[6];\n""  Real 'y_p_worst' = y[7];\n"
  "  Real 'z_Tcc' = z[1];\n""  Real 'z_arrivalThreshold' = z[2];\n""  Real 'z_arrival_timeout' = z[3];\n""  Real 'z_cc.msg_from_drone[1,1]' = z[4];\n""  Real 'z_cc.msg_from_drone[1,2]' = z[5];\n""  Real 'z_cc.msg_from_drone[1,3]' = z[6];\n""  Real 'z_cc.msg_from_drone[1,4]' = z[7];\n""  Real 'z_cc.msg_from_drone[1,5]' = z[8];\n""  Real 'z_cc.msg_from_drone[2,1]' = z[9];\n""  Real 'z_cc.msg_from_drone[2,2]' = z[10];\n""  Real 'z_cc.msg_from_drone[2,3]' = z[11];\n""  Real 'z_cc.msg_from_drone[2,4]' = z[12];\n""  Real 'z_cc.msg_from_drone[2,5]' = z[13];\n""  Real 'z_cc.msg_from_drone[3,1]' = z[14];\n""  Real 'z_cc.msg_from_drone[3,2]' = z[15];\n""  Real 'z_cc.msg_from_drone[3,3]' = z[16];\n""  Real 'z_cc.msg_from_drone[3,4]' = z[17];\n""  Real 'z_cc.msg_from_drone[3,5]' = z[18];\n""  Real 'z_cc.msg_from_drone[4,1]' = z[19];\n""  Real 'z_cc.msg_from_drone[4,2]' = z[20];\n""  Real 'z_cc.msg_from_drone[4,3]' = z[21];\n""  Real 'z_cc.msg_from_drone[4,4]' = z[22];\n""  Real 'z_cc.msg_from_drone[4,5]' = z[23];\n""  Real 'z_cc_choice' = z[24];\n""  Real 'z_cc_to_drone[1].inputdata[1]' = z[25];\n""  Real 'z_cc_to_drone[1].inputdata[2]' = z[26];\n""  Real 'z_cc_to_drone[1].inputdata[3]' = z[27];\n""  Real 'z_cc_to_drone[1].inputdata[4]' = z[28];\n""  Real 'z_cc_to_drone[1].inputdata[5]' = z[29];\n""  Real 'z_cc_to_drone[2].inputdata[1]' = z[30];\n""  Real 'z_cc_to_drone[2].inputdata[2]' = z[31];\n""  Real 'z_cc_to_drone[2].inputdata[3]' = z[32];\n""  Real 'z_cc_to_drone[2].inputdata[4]' = z[33];\n""  Real 'z_cc_to_drone[2].inputdata[5]' = z[34];\n""  Real 'z_cc_to_drone[3].inputdata[1]' = z[35];\n""  Real 'z_cc_to_drone[3].inputdata[2]' = z[36];\n""  Real 'z_cc_to_drone[3].inputdata[3]' = z[37];\n""  Real 'z_cc_to_drone[3].inputdata[4]' = z[38];\n""  Real 'z_cc_to_drone[3].inputdata[5]' = z[39];\n""  Real 'z_cc_to_drone[4].inputdata[1]' = z[40];\n""  Real 'z_cc_to_drone[4].inputdata[2]' = z[41];\n""  Real 'z_cc_to_drone[4].inputdata[3]' = z[42];\n""  Real 'z_cc_to_drone[4].inputdata[4]' = z[43];\n""  Real 'z_cc_to_drone[4].inputdata[5]' = z[44];\n""  Real 'z_comm_timeout' = z[45];\n""  Real 'z_d[1].batteryPercentage' = z[46];\n""  Real 'z_d[2].batteryPercentage' = z[47];\n""  Real 'z_d[3].batteryPercentage' = z[48];\n""  Real 'z_d[4].batteryPercentage' = z[49];\n""  Real 'z_d[1].ctrl.Trustx' = z[50];\n""  Real 'z_d[2].ctrl.Trustx' = z[51];\n""  Real 'z_d[3].ctrl.Trustx' = z[52];\n""  Real 'z_d[4].ctrl.Trustx' = z[53];\n""  Real 'z_d[1].ctrl.Trusty' = z[54];\n""  Real 'z_d[2].ctrl.Trusty' = z[55];\n""  Real 'z_d[3].ctrl.Trusty' = z[56];\n""  Real 'z_d[4].ctrl.Trusty' = z[57];\n""  Real 'z_d[1].ctrl.Trustz' = z[58];\n""  Real 'z_d[2].ctrl.Trustz' = z[59];\n""  Real 'z_d[3].ctrl.Trustz' = z[60];\n""  Real 'z_d[4].ctrl.Trustz' = z[61];\n""  Real 'z_d[1].ctrl.setx' = z[62];\n""  Real 'z_d[2].ctrl.setx' = z[63];\n""  Real 'z_d[3].ctrl.setx' = z[64];\n""  Real 'z_d[4].ctrl.setx' = z[65];\n""  Real 'z_d[1].ctrl.sety' = z[66];\n""  Real 'z_d[2].ctrl.sety' = z[67];\n""  Real 'z_d[3].ctrl.sety' = z[68];\n""  Real 'z_d[4].ctrl.sety' = z[69];\n""  Real 'z_d[1].ctrl.setz' = z[70];\n""  Real 'z_d[2].ctrl.setz' = z[71];\n""  Real 'z_d[3].ctrl.setz' = z[72];\n""  Real 'z_d[4].ctrl.setz' = z[73];\n""  Real 'z_d[1].ctrl.x' = z[74];\n""  Real 'z_d[2].ctrl.x' = z[75];\n""  Real 'z_d[3].ctrl.x' = z[76];\n""  Real 'z_d[4].ctrl.x' = z[77];\n""  Real 'z_d[1].ctrl.y' = z[78];\n""  Real 'z_d[2].ctrl.y' = z[79];\n""  Real 'z_d[3].ctrl.y' = z[80];\n""  Real 'z_d[4].ctrl.y' = z[81];\n""  Real 'z_drone_to_cc[1].inputdata[1]' = z[82];\n""  Real 'z_drone_to_cc[1].inputdata[2]' = z[83];\n""  Real 'z_drone_to_cc[1].inputdata[3]' = z[84];\n""  Real 'z_drone_to_cc[1].inputdata[4]' = z[85];\n""  Real 'z_drone_to_cc[1].inputdata[5]' = z[86];\n""  Real 'z_drone_to_cc[2].inputdata[1]' = z[87];\n""  Real 'z_drone_to_cc[2].inputdata[2]' = z[88];\n""  Real 'z_drone_to_cc[2].inputdata[3]' = z[89];\n""  Real 'z_drone_to_cc[2].inputdata[4]' = z[90];\n""  Real 'z_drone_to_cc[2].inputdata[5]' = z[91];\n""  Real 'z_drone_to_cc[3].inputdata[1]' = z[92];\n""  Real 'z_drone_to_cc[3].inputdata[2]' = z[93];\n""  Real 'z_drone_to_cc[3].inputdata[3]' = z[94];\n""  Real 'z_drone_to_cc[3].inputdata[4]' = z[95];\n""  Real 'z_drone_to_cc[3].inputdata[5]' = z[96];\n""  Real 'z_drone_to_cc[4].inputdata[1]' = z[97];\n""  Real 'z_drone_to_cc[4].inputdata[2]' = z[98];\n""  Real 'z_drone_to_cc[4].inputdata[3]' = z[99];\n""  Real 'z_drone_to_cc[4].inputdata[4]' = z[100];\n""  Real 'z_drone_to_cc[4].inputdata[5]' = z[101];\n""  Real 'z_p_recharge' = z[102];\n""  Real 'z_p_worst' = z[103];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linearized_model;\n";
}
#if defined(__cplusplus)
}
#endif

