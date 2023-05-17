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
  const int colPtrIndex[1+6] = {0,2,2,2,1,1,1};
  const int rowIndex[9] = {0,3,1,4,2,5,0,1,2};
  int i = 0;
  
  jacobian->sizeCols = 6;
  jacobian->sizeRows = 6;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((6+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(9*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNonZeros = 9;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(6*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 2;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (6+1)*sizeof(unsigned int));
  
  for(i=2;i<6+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 9*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  jacobian->sparsePattern->colorCols[1] = 1;
  jacobian->sparsePattern->colorCols[2] = 1;
  jacobian->sparsePattern->colorCols[3] = 2;
  jacobian->sparsePattern->colorCols[4] = 2;
  jacobian->sparsePattern->colorCols[5] = 2;
  TRACE_POP
  return 0;
}


