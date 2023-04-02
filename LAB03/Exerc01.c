#include<stdio.h>

/*Faça um programa que determine e o mostre os cinco primeiros múltiplos 
de 3, considerando números maiores que 0.*/

int main (){

    int multiplo;
    int multiplicador = 3;
    int r = 1;
    int resultado;

    printf("Digite um numero:");
    scanf("%d",&multiplo);


    if(multiplo>0){
    while(r<=5){
        resultado = multiplo*multiplicador;
        multiplo++;
        r++;
        printf("%d\n",resultado);
    }
    }else{printf("Valor invalido");}
    return 0;
} 