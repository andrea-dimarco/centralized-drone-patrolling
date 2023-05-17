/* Linearization */
#include "System_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *System_linear_model_frame()
{
  return "model linearized_model \"System\" \n  parameter Integer n = 18 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 2 \"number of outputs\";\n"
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
  "  Real 'x_d[1].d.Vx' = x[1];\n""  Real 'x_d[2].d.Vx' = x[2];\n""  Real 'x_d[3].d.Vx' = x[3];\n""  Real 'x_d[1].d.Vy' = x[4];\n""  Real 'x_d[2].d.Vy' = x[5];\n""  Real 'x_d[3].d.Vy' = x[6];\n""  Real 'x_d[1].d.Vz' = x[7];\n""  Real 'x_d[2].d.Vz' = x[8];\n""  Real 'x_d[3].d.Vz' = x[9];\n""  Real 'x_d[1].d.x' = x[10];\n""  Real 'x_d[2].d.x' = x[11];\n""  Real 'x_d[3].d.x' = x[12];\n""  Real 'x_d[1].d.y' = x[13];\n""  Real 'x_d[2].d.y' = x[14];\n""  Real 'x_d[3].d.y' = x[15];\n""  Real 'x_d[1].d.z' = x[16];\n""  Real 'x_d[2].d.z' = x[17];\n""  Real 'x_d[3].d.z' = x[18];\n"
  "  Real 'y_Tcc' = y[1];\n""  Real 'y_cc_choice' = y[2];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linearized_model;\n";
}
const char *System_linear_model_datarecovery_frame()
{
  return "model linearized_model \"System\" \n parameter Integer n = 18 \"number of states\";\n  parameter Integer m = 0 \"number of inputs\";\n  parameter Integer p = 2 \"number of outputs\";\n  parameter Integer nz = 20 \"data recovery variables\";\n"
  "  parameter Real x0[18] = %s;\n"
  "  parameter Real u0[0] = %s;\n"
  "  parameter Real z0[20] = %s;\n"
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
  "  Real 'x_d[1].d.Vx' = x[1];\n""  Real 'x_d[2].d.Vx' = x[2];\n""  Real 'x_d[3].d.Vx' = x[3];\n""  Real 'x_d[1].d.Vy' = x[4];\n""  Real 'x_d[2].d.Vy' = x[5];\n""  Real 'x_d[3].d.Vy' = x[6];\n""  Real 'x_d[1].d.Vz' = x[7];\n""  Real 'x_d[2].d.Vz' = x[8];\n""  Real 'x_d[3].d.Vz' = x[9];\n""  Real 'x_d[1].d.x' = x[10];\n""  Real 'x_d[2].d.x' = x[11];\n""  Real 'x_d[3].d.x' = x[12];\n""  Real 'x_d[1].d.y' = x[13];\n""  Real 'x_d[2].d.y' = x[14];\n""  Real 'x_d[3].d.y' = x[15];\n""  Real 'x_d[1].d.z' = x[16];\n""  Real 'x_d[2].d.z' = x[17];\n""  Real 'x_d[3].d.z' = x[18];\n"
  "  Real 'y_Tcc' = y[1];\n""  Real 'y_cc_choice' = y[2];\n"
  "  Real 'z_Tcc' = z[1];\n""  Real 'z_cc.pos[1,1]' = z[2];\n""  Real 'z_cc.pos[1,2]' = z[3];\n""  Real 'z_cc.pos[1,3]' = z[4];\n""  Real 'z_cc.pos[2,1]' = z[5];\n""  Real 'z_cc.pos[2,2]' = z[6];\n""  Real 'z_cc.pos[2,3]' = z[7];\n""  Real 'z_cc.pos[3,1]' = z[8];\n""  Real 'z_cc.pos[3,2]' = z[9];\n""  Real 'z_cc.pos[3,3]' = z[10];\n""  Real 'z_cc_choice' = z[11];\n""  Real 'z_d[1].ctrl.Trustx' = z[12];\n""  Real 'z_d[2].ctrl.Trustx' = z[13];\n""  Real 'z_d[3].ctrl.Trustx' = z[14];\n""  Real 'z_d[1].ctrl.Trusty' = z[15];\n""  Real 'z_d[2].ctrl.Trusty' = z[16];\n""  Real 'z_d[3].ctrl.Trusty' = z[17];\n""  Real 'z_d[1].ctrl.Trustz' = z[18];\n""  Real 'z_d[2].ctrl.Trustz' = z[19];\n""  Real 'z_d[3].ctrl.Trustz' = z[20];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linearized_model;\n";
}
#if defined(__cplusplus)
}
#endif

