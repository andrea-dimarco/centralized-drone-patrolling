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
  const int colPtrIndex[1+18] = {0,2,2,2,2,2,2,2,2,2,9,9,9,9,9,9,9,9,9};
  const int rowIndex[99] = {0,9,1,10,2,11,3,12,4,13,5,14,6,15,7,16,8,17,0,1,2,3,4,5,6,7,8,0,1,2,3,4,5,6,7,8,0,1,2,3,4,5,6,7,8,0,1,2,3,4,5,6,7,8,0,1,2,3,4,5,6,7,8,0,1,2,3,4,5,6,7,8,0,1,2,3,4,5,6,7,8,0,1,2,3,4,5,6,7,8,0,1,2,3,4,5,6,7,8};
  int i = 0;
  
  jacobian->sizeCols = 18;
  jacobian->sizeRows = 18;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(18,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(18,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((18+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(99*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNonZeros = 99;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(18*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 10;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (18+1)*sizeof(unsigned int));
  
  for(i=2;i<18+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 99*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[17] = 1;
  jacobian->sparsePattern->colorCols[14] = 2;
  jacobian->sparsePattern->colorCols[11] = 3;
  jacobian->sparsePattern->colorCols[16] = 4;
  jacobian->sparsePattern->colorCols[13] = 5;
  jacobian->sparsePattern->colorCols[10] = 6;
  jacobian->sparsePattern->colorCols[0] = 7;
  jacobian->sparsePattern->colorCols[3] = 7;
  jacobian->sparsePattern->colorCols[6] = 7;
  jacobian->sparsePattern->colorCols[1] = 7;
  jacobian->sparsePattern->colorCols[4] = 7;
  jacobian->sparsePattern->colorCols[7] = 7;
  jacobian->sparsePattern->colorCols[2] = 7;
  jacobian->sparsePattern->colorCols[5] = 7;
  jacobian->sparsePattern->colorCols[8] = 7;
  jacobian->sparsePattern->colorCols[15] = 8;
  jacobian->sparsePattern->colorCols[12] = 9;
  jacobian->sparsePattern->colorCols[9] = 10;
  TRACE_POP
  return 0;
}


