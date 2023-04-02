#include<stdio.h>

/*11. Faça um programa que leia um número inteiro positivo
 N e imprima todos os números naturais de 0 até N em ordem 
crescente*/

int main ()
{
    int N;
    int i;
    int num = 0;

    printf("Digite um numero:");
    scanf("%d",&N);

    if(N>0){
        for(i=0;i>=0&&i<N;i++){
            num++;
            if(num==N){printf("%d.",num);}
            else{printf("%d,",num);}
        }
    }else{printf("Numero invalido");}


}