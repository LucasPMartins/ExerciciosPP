#include<stdio.h>

/*7. Faça um programa que leia 10 inteiros positivos, 
ignorando não positivos, e imprima sua média.*/

int main ()
{
    unsigned int num;
    int contagem = 1;
    float media = 0;
    int soma = 0;

    do
    {
        printf("Digite um numero inteiro:");
        scanf("%u",&num);
        soma += num;
        contagem++;
        if(contagem==11){
        media = (float)soma/10;
        printf("a media desses 10 numeros eh %.2f",media);
        }
    } while (contagem<11);

    return 0;
}