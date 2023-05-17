/* Linearization */
#include "System_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *System_linear_model_frame()
{
  return "model linearized_model \"System\" \n  parameter Integer n = 12 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 7 \"number of outputs\";\n"
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
  "  Real 'x_d[1].d.Vx' = x[1];\n""  Real 'x_d[2].d.Vx' = x[2];\n""  Real 'x_d[1].d.Vy' = x[3];\n""  Real 'x_d[2].d.Vy' = x[4];\n""  Real 'x_d[1].d.Vz' = x[5];\n""  Real 'x_d[2].d.Vz' = x[6];\n""  Real 'x_d[1].d.x' = x[7];\n""  Real 'x_d[2].d.x' = x[8];\n""  Real 'x_d[1].d.y' = x[9];\n""  Real 'x_d[2].d.y' = x[10];\n""  Real 'x_d[1].d.z' = x[11];\n""  Real 'x_d[2].d.z' = x[12];\n"
  "  Real 'y_Tcc' = y[1];\n""  Real 'y_arrivalThreshold' = y[2];\n""  Real 'y_arrival_timeout' = y[3];\n""  Real 'y_cc_choice' = y[4];\n""  Real 'y_comm_timeout' = y[5];\n""  Real 'y_p_recharge' = y[6];\n""  Real 'y_p_worst' = y[7];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linearized_model;\n";
}
const char *System_linear_model_datarecovery_frame()
{
  return "model linearized_model \"System\" \n parameter Integer n = 12 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 7 \"number of outputs\";\n  parameter Integer nz = 55 \"data recovery variables\";\n"
  "  parameter Real x0[12] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[55] = %s;\n"
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
  "  Real 'x_d[1].d.Vx' = x[1];\n""  Real 'x_d[2].d.Vx' = x[2];\n""  Real 'x_d[1].d.Vy' = x[3];\n""  Real 'x_d[2].d.Vy' = x[4];\n""  Real 'x_d[1].d.Vz' = x[5];\n""  Real 'x_d[2].d.Vz' = x[6];\n""  Real 'x_d[1].d.x' = x[7];\n""  Real 'x_d[2].d.x' = x[8];\n""  Real 'x_d[1].d.y' = x[9];\n""  Real 'x_d[2].d.y' = x[10];\n""  Real 'x_d[1].d.z' = x[11];\n""  Real 'x_d[2].d.z' = x[12];\n"
  "  Real 'y_Tcc' = y[1];\n""  Real 'y_arrivalThreshold' = y[2];\n""  Real 'y_arrival_timeout' = y[3];\n""  Real 'y_cc_choice' = y[4];\n""  Real 'y_comm_timeout' = y[5];\n""  Real 'y_p_recharge' = y[6];\n""  Real 'y_p_worst' = y[7];\n"
  "  Real 'z_Tcc' = z[1];\n""  Real 'z_arrivalThreshold' = z[2];\n""  Real 'z_arrival_timeout' = z[3];\n""  Real 'z_cc.msg_from_drone[1,1]' = z[4];\n""  Real 'z_cc.msg_from_drone[1,2]' = z[5];\n""  Real 'z_cc.msg_from_drone[1,3]' = z[6];\n""  Real 'z_cc.msg_from_drone[1,4]' = z[7];\n""  Real 'z_cc.msg_from_drone[1,5]' = z[8];\n""  Real 'z_cc.msg_from_drone[2,1]' = z[9];\n""  Real 'z_cc.msg_from_drone[2,2]' = z[10];\n""  Real 'z_cc.msg_from_drone[2,3]' = z[11];\n""  Real 'z_cc.msg_from_drone[2,4]' = z[12];\n""  Real 'z_cc.msg_from_drone[2,5]' = z[13];\n""  Real 'z_cc_choice' = z[14];\n""  Real 'z_cc_to_drone[1].inputdata[1]' = z[15];\n""  Real 'z_cc_to_drone[1].inputdata[2]' = z[16];\n""  Real 'z_cc_to_drone[1].inputdata[3]' = z[17];\n""  Real 'z_cc_to_drone[1].inputdata[4]' = z[18];\n""  Real 'z_cc_to_drone[1].inputdata[5]' = z[19];\n""  Real 'z_cc_to_drone[2].inputdata[1]' = z[20];\n""  Real 'z_cc_to_drone[2].inputdata[2]' = z[21];\n""  Real 'z_cc_to_drone[2].inputdata[3]' = z[22];\n""  Real 'z_cc_to_drone[2].inputdata[4]' = z[23];\n""  Real 'z_cc_to_drone[2].inputdata[5]' = z[24];\n""  Real 'z_comm_timeout' = z[25];\n""  Real 'z_d[1].batteryPercentage' = z[26];\n""  Real 'z_d[2].batteryPercentage' = z[27];\n""  Real 'z_d[1].ctrl.Trustx' = z[28];\n""  Real 'z_d[2].ctrl.Trustx' = z[29];\n""  Real 'z_d[1].ctrl.Trusty' = z[30];\n""  Real 'z_d[2].ctrl.Trusty' = z[31];\n""  Real 'z_d[1].ctrl.Trustz' = z[32];\n""  Real 'z_d[2].ctrl.Trustz' = z[33];\n""  Real 'z_d[1].ctrl.setx' = z[34];\n""  Real 'z_d[2].ctrl.setx' = z[35];\n""  Real 'z_d[1].ctrl.sety' = z[36];\n""  Real 'z_d[2].ctrl.sety' = z[37];\n""  Real 'z_d[1].ctrl.setz' = z[38];\n""  Real 'z_d[2].ctrl.setz' = z[39];\n""  Real 'z_d[1].ctrl.x' = z[40];\n""  Real 'z_d[2].ctrl.x' = z[41];\n""  Real 'z_d[1].ctrl.y' = z[42];\n""  Real 'z_d[2].ctrl.y' = z[43];\n""  Real 'z_drone_to_cc[1].inputdata[1]' = z[44];\n""  Real 'z_drone_to_cc[1].inputdata[2]' = z[45];\n""  Real 'z_drone_to_cc[1].inputdata[3]' = z[46];\n""  Real 'z_drone_to_cc[1].inputdata[4]' = z[47];\n""  Real 'z_drone_to_cc[1].inputdata[5]' = z[48];\n""  Real 'z_drone_to_cc[2].inputdata[1]' = z[49];\n""  Real 'z_drone_to_cc[2].inputdata[2]' = z[50];\n""  Real 'z_drone_to_cc[2].inputdata[3]' = z[51];\n""  Real 'z_drone_to_cc[2].inputdata[4]' = z[52];\n""  Real 'z_drone_to_cc[2].inputdata[5]' = z[53];\n""  Real 'z_p_recharge' = z[54];\n""  Real 'z_p_worst' = z[55];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linearized_model;\n";
}
#if defined(__cplusplus)
}
#endif

