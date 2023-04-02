#include<stdio.h>

/*. Faça um programa que some todos os números naturais 
abaixo de 1000 que são múltiplos de 3 ou 5*/

int main ()
{
    int i;
    int soma = 1;

    for(i=0;i<1000;i++){
        if(i%3==0&&i%5==0){
            soma += i;
        }
    }
    printf("A soma de todos os numeros naturais\n abaixo de 1000 que sao multiplos de 3 ou 5 eh %d",soma);

    return 0;
}