#include <stdio.h>
#include <time.h>
struct{
        int id;
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
        compus[i].id = i+1;
        compus[i].anio = rand()%10 +2015;
        compus[i].velocidad = rand()%3 + 1;
        compus[i].cantidad =  rand()%8 + 1;
        int tipo = rand()%6;
        compus[i].tipo_cpu = tipos[tipo];
    }
    compu* pCompus = compus;
    mostrarPCs(pCompus);
    buscarPCmasVieja(pCompus); 
    buscarPCmasRapida(pCompus);   
    
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

void buscarPCmasVieja(compu* pCompus){
    compu* compuMasVieja;
    int edadMasVieja = 9999;
    for (int i = 0; i < 5; i++)
    {
        
        if (pCompus->anio<=edadMasVieja)
        {
            edadMasVieja = pCompus->anio;
            compuMasVieja = pCompus;
        }
        pCompus++;
    }
    printf("La PC mas vieja es la: %d.\n", compuMasVieja->id);    
}

void buscarPCmasRapida(compu* pCompus){
    compu* compuMasRapida;
    int velocidadMasRapida = 0;
    for (int i = 0; i < 5; i++)
    {
        
        if (pCompus->velocidad >=velocidadMasRapida)
        {
            velocidadMasRapida = pCompus->velocidad;
            compuMasRapida = pCompus;
        }
        pCompus++;
    }
    printf("La PC mas rapida es la: %d.\n", compuMasRapida->id);    
}