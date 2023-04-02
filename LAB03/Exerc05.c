#include<stdio.h>

/*Faça um programa que peça ao usuário 
para digitar 10 valores e some-os.*/

int main ()
{
    float num;
    int contagem = 1;
    float soma,somar;

    do
    {
        printf("Digite um numero:");
        scanf("%f",&num);
        soma += num;
        contagem++;
        if(contagem==11){
        somar = soma;
        printf("a soma desses 10 numeros eh %.2f",somar);
    }
    } while (contagem<11);

    return 0;
    
}