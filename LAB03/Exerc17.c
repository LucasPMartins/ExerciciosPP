#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <math.h>

/*17. Chico tem 1.50 metro e cresce 2 centímetros por ano,
enquanto Zé tem 1.10 metros e cresce 3 centímetros por ano.
Escreva um programa que calcule e imprima quantos anos 
serão necessários para que Zé seja maior que Chico.*/

int main ()
{
    float chico;
    float ze;
    int ano = 1;

    for(int i = 0;i<ano;i++){
        chico =(float)1.50*2*ano;
        ze =(float)1.10*3*ano;
        ano++;       
        if(ze>chico){
            printf("Serao necessarios %d anos para que Ze seja maior que Chico",ano);
            break;
        }
    }
    return 0;

}