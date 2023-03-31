#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5,
mas, não simultaneamente pelos dois.*/

int main (){

    int num;

    printf("Digite um numero inteiro:");
    scanf("%d",&num);

    if((num%3==0)&&(num%5!=0)){
        printf("O numero digitado eh divisivel por tres");
    }
    if((num%5==0)&&(num%3!=0)){
        printf("O numero digitado eh divisivel por cinco");
    }
    if((num%5==0)&&(num%3==0)){
        printf("O numero digitado eh divisivel por tres e cinco");
    }
    if((num%5!=0)&&(num%3!=0)){
        printf("O numero digitado nao eh divisivel por tres e cinco");
    }
    return 0;
}
