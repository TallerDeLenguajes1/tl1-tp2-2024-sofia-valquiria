#include <stdio.h>
#include <time.h>

struct{
        int velocidad;//entre 1 y 3 GHz
        int anio;//entre 2015 y 2023
        int cantidad;//entre 1 y 8
        char *tipo_cpu; //valores del arreglo tipos
    }typedef compu;

void main(){
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    compu compus[5];
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        compus[i].anio = rand()%10 +2015;
        compus[i].velocidad = rand()%3 + 1;
        compus[i].cantidad =  rand()%8 + 1;
        int tipo = rand()%6;
        compus->tipo_cpu = tipos[tipo];
    }
    compu* pCompus = compus;
    mostrarPCs(pCompus);    
    
}

void mostrarPCs(compu* pCompus){
    for (int i = 0; i < 5; i++)
    {
        printf("-------- Compu: %d --------\n", i+1);
        printf("Anio:");
        printf("%d\n",pCompus->anio);
        printf("Cantidad de nucleos:");
        printf("%d\n",pCompus->cantidad);
        printf("Velocidad:");
        printf("%d\n",pCompus->velocidad);
        printf("Tipo de CPU:");
        printf("%s\n",pCompus->tipo_cpu);
        pCompus++;
    }
    
}