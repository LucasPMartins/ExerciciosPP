#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que leia um número e, caso ele seja positivo,
calcule e mostre: O número digitado ao quadrado
A raiz quadrada do número digitado*/

int main()
{
    float x,y,z;
    printf("Digite um numeros qualquer:");
    scanf("%f",&x);

    if(x>0){
        y = sqrt(x);
        printf("a raiz quadrada do numero digitado eh %.2f\n",y);
        z = pow(x,2);
        printf("numero ao quadrado digitado eh %.2f\n",z);
    }
    else{
        printf("o numero invalido\n");
    }
    system("pause");
    return 0;

}