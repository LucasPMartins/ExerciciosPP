#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <math.h>

/*20. Faça um programa que calcule a soma de todos 
os números primos abaixo de dois milhões*/

int main ()
{
    int i,j;
    int primo;
    int soma;
    int quantdiv;

    for(i=3;i<=2000000;i+=2){
        quantdiv = 0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                quantdiv++;}
            if(quantdiv>2){
                break;}
        }
        if(quantdiv==2){
            soma += i;
        }
    }

    printf("A soma dos numeros primos abaixo de 2 milhoes eh: %d\n", soma);

    return 0;

}