#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Faça um programa que mostre ao usuário um menu com 4 opções de operações
matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa
então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.*/

int main(){

    int num;
    float r;
    float x, y;

    do{
        printf("Escolha uma das opcoes abaixo\n");
        printf("(1) Soma\n");
        printf("(2) Subtracao\n");
        printf("(3) Multiplicacao\n");
        printf("(4) Divisao\n");
        scanf("%d",&num);
    }while(num<1 || num>4);

    switch (num)
    {
    case 1:printf("Digite dois valores:");
           scanf("%f ",&x);
           scanf("%f",&y);
           r =(float) x + y;
           printf("A soma dos valores eh:%.2f",r);break;
    case 2:printf("Digite dois valores:");
           scanf("%f ",&x);
           scanf("%f",&y);
           r =(float) x - y;
           printf("A subtracao dos valores eh:%.2f",r);break;
    case 3:printf("Digite dois valores:");
           scanf("%f ",&x);
           scanf("%f",&y);
           r =(float) x * y;
           printf("A multiplicacao dos valores eh:%.2f",r);break;
    case 4:printf("Digite dois valores:");
           scanf("%f ",&x);
           scanf("%f",&y);
           r =(float) x / y;
           printf("A divisao dos valores eh:%.2f",r);break;
    default:break;
    }

    return 0;

}
