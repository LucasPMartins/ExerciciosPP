#include<stdio.h>

/*12. Escreva um programa que leia um número inteiro e 
calcule a soma de todos os divisores desse número, com 
exceção dele próprio. Ex.: a soma dos divisores do número 
66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78*/

int main ()
{
    int num;
    int divisor = 1;
    int d = 0;
    int soma = 1;
    int i;

    printf("Digite um numero inteiro:");
    scanf("%d",&num);

    for(i=0;i<=num;i++){
        divisor++; 
        d = num/divisor;
        if((num%divisor==0)&&(num!=divisor)){
            soma += d;}  
    }
    printf("A soma de todos os divisores desse numero eh %d",soma);


    return 0;
   
}