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
  const int colPtrIndex[1+24] = {0,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1};
  const int rowIndex[36] = {0,12,1,13,2,14,3,15,4,16,5,17,6,18,7,19,8,20,9,21,10,22,11,23,0,1,2,3,4,5,6,7,8,9,10,11};
  int i = 0;
  
  jacobian->sizeCols = 24;
  jacobian->sizeRows = 24;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(24,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(24,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((24+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(36*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNonZeros = 36;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(24*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 2;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (24+1)*sizeof(unsigned int));
  
  for(i=2;i<24+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 36*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  jacobian->sparsePattern->colorCols[4] = 1;
  jacobian->sparsePattern->colorCols[8] = 1;
  jacobian->sparsePattern->colorCols[1] = 1;
  jacobian->sparsePattern->colorCols[5] = 1;
  jacobian->sparsePattern->colorCols[9] = 1;
  jacobian->sparsePattern->colorCols[2] = 1;
  jacobian->sparsePattern->colorCols[6] = 1;
  jacobian->sparsePattern->colorCols[10] = 1;
  jacobian->sparsePattern->colorCols[3] = 1;
  jacobian->sparsePattern->colorCols[7] = 1;
  jacobian->sparsePattern->colorCols[11] = 1;
  jacobian->sparsePattern->colorCols[12] = 2;
  jacobian->sparsePattern->colorCols[16] = 2;
  jacobian->sparsePattern->colorCols[20] = 2;
  jacobian->sparsePattern->colorCols[13] = 2;
  jacobian->sparsePattern->colorCols[17] = 2;
  jacobian->sparsePattern->colorCols[21] = 2;
  jacobian->sparsePattern->colorCols[14] = 2;
  jacobian->sparsePattern->colorCols[18] = 2;
  jacobian->sparsePattern->colorCols[22] = 2;
  jacobian->sparsePattern->colorCols[15] = 2;
  jacobian->sparsePattern->colorCols[19] = 2;
  jacobian->sparsePattern->colorCols[23] = 2;
  TRACE_POP
  return 0;
}


