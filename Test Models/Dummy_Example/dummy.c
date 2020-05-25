#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "dummy.h"
#include "blas.h"
#include "lapack.h"


mwSignedIndex ione = 1;
const int itwo = 2;
const int ithree = 3;
const int iseven = 7;
const double fone = 1;
const double ftwo = 2;
const double fzero = 0;
const double fmone = -1;
int quiet = 1;
int one = 1;


    
double dummy2(double *A,double *x, mwSignedIndex T, mwSignedIndex n, double *eyen) 
{
    int iiter, i, cont;
    double *b, *dptr, *At;

    /* memory allocation */
    b = malloc(sizeof(double)*T*n);
    At = malloc(sizeof(double)*n*n);
    
  
    for (i = 0; i < n*T; i++) b[i] = 0;
    //dgemv("n",&n,&n,&fone,A,&n,x,&ione,&fzero,b,&ione);
    dgemm("t","n",&n,&n,&n,&fone,A,&n,eyen,&n,&fzero,At,&n);
    return At[12];
    
}
