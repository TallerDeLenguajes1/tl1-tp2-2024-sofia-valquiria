#define N 20
#include <stdio.h>
#include <time.h>

void main(){
int i;
double vt[N];
double *pVt;
pVt = vt;

srand(time(NULL));
for(i = 0;i<N; i++)
{
*pVt = 1+rand()%100;
printf(" %f", *pVt);
pVt++;
}}