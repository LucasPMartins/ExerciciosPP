#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que receba dois números e mostre o maior.
Se por acaso, os dois números forem iguais,
imprima a mensagem: “Números iguais”*/

int main()
{
    int x,y,z;
    printf("Digite dois numeros:");
    scanf("%d",&x);
    scanf("%d",&y);

    if(x>y){
        printf("O primeiro numero (%d) eh maior que o segundo (%d)\n",x,y);
    }
    if (y>x){
        printf("O segundo numero (%d) eh maior que o primeiro (%d)\n",y,x);
    }
    if (x==y){
        printf("O numeros sao iguais\n");
    }
    system("pause");
    return 0;

}