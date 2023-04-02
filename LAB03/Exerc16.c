#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <math.h>

/*Faça um programa que apresente um menu de opções para o cálculo das seguintes
operações entre dois números:
 Adição (opção 1)
 Subtração (opção 2)
 Multiplicação (opção 3)
 Divisão (opção 4).
 Saída (opção 5)
O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado
e a volta ao menu de opções. O programa só termina quando for escolhida a opção de saída
(opção 5).*/

int main ()
{
    int num;
    float x,y;
    float soma,mult,div,sub;

    do{
        printf("Adicao (opcao 1)\n");
        printf("Subtracao (opcao 2)\n");
        printf("Multiplicacao (opcao 3)\n");
        printf("Divisao (opcao 4)\n");
        printf("Saida (opcao 5)\n");
        scanf("%d",&num);

        switch (num)
    {
    case 1:
        printf("Digite um numero:");
        scanf("%f",&x);
        printf("Digite um numero:");
        scanf("%f",&y);
        soma = (x + y);
        printf("A adicao desses dois numeros eh %.2f\n\n",soma);
        break;
    case 2:
        printf("Digite um numero:");
        scanf("%f",&x);
        printf("Digite um numero:");
        scanf("%f",&y);
        sub = (float)x - y;
        printf("A subtracao desses dois numeros eh %.2f\n\n",sub);
        break;
    case 3:
        printf("Digite um numero:");
        scanf("%f",&x);
        printf("Digite um numero:");
        scanf("%f",&y);
        mult = (float)x * y;
        printf("A multiplicao desses dois numeros eh %.2f\n\n",mult);
        break;
    case 4:
        printf("Digite um numero:");
        scanf("%f",&x);
        printf("Digite um numero:");
        scanf("%f",&y);
        div = (float)x / y;
        printf("A divisao desses dois numeros eh %.2f\n\n",div);
        break;
    }
    }while(num!=5);
    if(num==5){printf("FIM!");}
    
    return 0;

}