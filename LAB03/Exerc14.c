#include<stdio.h>
#include <stdlib.h> 
#include <time.h>

/*14. Faça um programa que simula o lançamento de dois 
dados, d1 e d2, n vezes, e tem como saída o número de 
cada dado e a relação entre eles (>, <, =) de cada 
lançamento.*/

int main ()
{
    int n = 0;
    int i;
    int lancamento = 1;
    int dado1,dado2;

    srand(time(NULL));

    printf("Digite quantas vezes o dado sera lancado:");
    scanf("%d",&n);

    for(i = 0;i<n;i++)
    {
        dado1 = rand()%7;
        dado2 = rand()%7;
        printf("Lancamento %d:Dado 1 = '%d' e Dado 2 = '%d'\n",lancamento++,dado1,dado2);
        if(dado1>dado2){printf("dado 1 eh maior que o dado 2\n");}
        if(dado1<dado2){printf("dado 1 eh menor que o dado 2\n");}
        if(dado1==dado2){printf("dado 1 eh igual ao dado 2\n");}
    }
    return 0;

}