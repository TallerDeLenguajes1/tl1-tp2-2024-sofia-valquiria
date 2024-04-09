#define N 5
#define M 7
#include <stdio.h>

void main(){

int i,j;
int mt[N][M];
int* pMt = mt;
for(i = 0;i<N; i++)
    {
    for(j = 0;j<M; j++)
        {
        *pMt=1+rand()%100;
        printf("%d ", *pMt);
        pMt++;
        }
    printf("\n");
    }
}