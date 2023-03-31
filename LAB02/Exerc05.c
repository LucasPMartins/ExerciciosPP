#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faça um programa que receba um número
inteiro e verifique se este número é par ou ímpar*/

int main()
{
    int x;
    printf("Digite um numeros qualquer:");
    scanf("%d",&x);

    if(x%2==0){
        printf("O numero digitado eh par\n");
    }
    else{
        printf("o numero digitado eh impar\n");
    }
    system("pause");
    return 0;

}