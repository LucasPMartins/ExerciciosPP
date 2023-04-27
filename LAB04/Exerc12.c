#include<stdio.h>
#include<math.h>

/*Escreva uma função que receba um número inteiro maior do que zero e retorne a soma de
todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1).
Se o número lido não for maior do que zero, o programa terminará com a mensagem
“Número inválido”.*/

int soma(int a);

int main ()
{
    int num;
    printf("Digite um numero:");
    scanf("%d",&num);
    soma(num);
    return 0;
}

int soma(int a)
{
    int soma = 0;
    if(a>0){
        while (a > 0){
        soma += a % 10;
        a /= 10;
        }
        return printf("A soma dos algarismos eh %d",soma);
    }
    else{return printf("Numero invalido!");}
}