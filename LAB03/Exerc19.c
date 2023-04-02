#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <math.h>

/*19. Escreva um programa que receba como entrada o valor 
do saque realizado pelo cliente de um banco e retorne 
quantas notas de cada valor serão necessárias para atender 
ao saque com a menor quantidade de notas possível. 
Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real*/

int main ()
{
    int valor;
    int n200,n100,n50,n20,n10,n5,n2,n1;

    printf("Digite o valor a ser sacado:R$");
    scanf("%d",&valor);
   
    n200=valor/200;
    n100=(valor%200)/100;
    n50=((valor%200)%100)/50;
    n20=(((valor%200)%100)%50)/20;
    n10=((((valor%200)%100)%50)%20)/10;
    n5=(((((valor%200)%100)%50)%20)%10)/5;
    n2=((((((valor%200)%100)%50)%20)%10)%5)/2;
    n1=(((((((valor%200)%100)%50)%20)%10)%5)%2)/1;
    
    printf("%d notas de 200 reais",n200);
    printf("\n%d notas de 100 reais",n100);       
    printf("\n%d notas de 50 reais",n50);
    printf("\n%d notas de 20 reais",n20);
    printf("\n%d notas de 10 reais",n10);
    printf("\n%d notas de 5 reais",n5);
    printf("\n%d notas de 2 reais",n2);
    printf("\n%d moedas de 1 real",n1);

    return 0;
}