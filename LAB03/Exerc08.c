#include<stdio.h>

/*8. Escreva um programa que leia 10 números 
e escreva o menor valor lido e o maior valor lido.*/

int main ()
{
    int num;
    int contagem;
    int maior,menor;

        printf("Digite um numero:");
        scanf("%d",&num);
        maior = num;
        menor = num;
        for(contagem=1;contagem<10;contagem++)
        {
            printf("Digite um numero:");
            scanf("%d",&num);
            if(num>maior){maior=num;}
            if(num<menor){menor=num;}
        }

        printf("O menor numero eh:%d\n",menor);
        printf("O maior numero eh:%d",maior);

        return 0;
    
}