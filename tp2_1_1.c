#define N 20
#include <stdio.h>
#include <time.h>

void main(){
int i;
double vt[N];
srand(time(NULL));
for(i = 0;i<N; i++)
{
vt[i]=1+rand()%100;
printf(" %f", vt[i]);
}}