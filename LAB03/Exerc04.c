#include<stdio.h>

/*4. Escreva um programa que declare um inteiro, 
inicialize-o com 0, e incremente-o de 1000 em 1000, 
imprimindo seu valor na tela, até que seu valor 
seja 100.000 (cem mil).*/

int main ()
{
    int inteiro;

    for(inteiro = 0;inteiro<=100000;inteiro=inteiro+1000){
        if(inteiro==100000){
            printf("%d.",inteiro);
        }else{printf("%d,",inteiro);}
    }
    return 0;
}