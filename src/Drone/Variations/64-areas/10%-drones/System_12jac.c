/* Jacobians 5 */
#include "System_model.h"
#include "System_12jac.h"
int System_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int System_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int System_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int System_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int System_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = System_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int System_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = System_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

int System_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int System_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int System_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int System_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int System_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+42] = {0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
  const int rowIndex[63] = {0,21,1,22,2,23,3,24,4,25,5,26,6,27,7,28,8,29,9,30,10,31,11,32,12,33,13,34,14,35,15,36,16,37,17,38,18,39,19,40,20,41,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  int i = 0;
  
  jacobian->sizeCols = 42;
  jacobian->sizeRows = 42;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(42,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(42,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((42+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(63*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNonZeros = 63;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(42*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 2;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (42+1)*sizeof(unsigned int));
  
  for(i=2;i<42+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 63*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  jacobian->sparsePattern->colorCols[7] = 1;
  jacobian->sparsePattern->colorCols[14] = 1;
  jacobian->sparsePattern->colorCols[1] = 1;
  jacobian->sparsePattern->colorCols[8] = 1;
  jacobian->sparsePattern->colorCols[15] = 1;
  jacobian->sparsePattern->colorCols[2] = 1;
  jacobian->sparsePattern->colorCols[9] = 1;
  jacobian->sparsePattern->colorCols[16] = 1;
  jacobian->sparsePattern->colorCols[3] = 1;
  jacobian->sparsePattern->colorCols[10] = 1;
  jacobian->sparsePattern->colorCols[17] = 1;
  jacobian->sparsePattern->colorCols[4] = 1;
  jacobian->sparsePattern->colorCols[11] = 1;
  jacobian->sparsePattern->colorCols[18] = 1;
  jacobian->sparsePattern->colorCols[5] = 1;
  jacobian->sparsePattern->colorCols[12] = 1;
  jacobian->sparsePattern->colorCols[19] = 1;
  jacobian->sparsePattern->colorCols[6] = 1;
  jacobian->sparsePattern->colorCols[13] = 1;
  jacobian->sparsePattern->colorCols[20] = 1;
  jacobian->sparsePattern->colorCols[21] = 2;
  jacobian->sparsePattern->colorCols[28] = 2;
  jacobian->sparsePattern->colorCols[35] = 2;
  jacobian->sparsePattern->colorCols[22] = 2;
  jacobian->sparsePattern->colorCols[29] = 2;
  jacobian->sparsePattern->colorCols[36] = 2;
  jacobian->sparsePattern->colorCols[23] = 2;
  jacobian->sparsePattern->colorCols[30] = 2;
  jacobian->sparsePattern->colorCols[37] = 2;
  jacobian->sparsePattern->colorCols[24] = 2;
  jacobian->sparsePattern->colorCols[31] = 2;
  jacobian->sparsePattern->colorCols[38] = 2;
  jacobian->sparsePattern->colorCols[25] = 2;
  jacobian->sparsePattern->colorCols[32] = 2;
  jacobian->sparsePattern->colorCols[39] = 2;
  jacobian->sparsePattern->colorCols[26] = 2;
  jacobian->sparsePattern->colorCols[33] = 2;
  jacobian->sparsePattern->colorCols[40] = 2;
  jacobian->sparsePattern->colorCols[27] = 2;
  jacobian->sparsePattern->colorCols[34] = 2;
  jacobian->sparsePattern->colorCols[41] = 2;
  TRACE_POP
  return 0;
}


