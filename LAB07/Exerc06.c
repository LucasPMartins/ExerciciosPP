#include<stdio.h>
#include<string.h>

/*Escreva um programa que declare duas variáveis do tipo inteiro e duas do
tipo ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros,
o programa deve ler dois números para essas variáveis e os imprimir,
realizando as quatro operações básicas de matemática com esses números.*/

int main(){
    int A,B;
    int *pA;
    int *pB;
    int soma,multi,sub;
    float div;
    pA = &A;
    pB = &B;
    printf("Digite um valor para A:");
    setbuf(stdin,NULL);
    scanf("%d",&A);
    printf("Digite um valor para B:");
    setbuf(stdin,NULL);
    scanf("%d",&B);
    printf("A:%d\n",*pA);
    printf("B:%d\n",*pB);
    soma = *pA + *pB;
    printf("Soma de A e B:%d\n",soma);
    sub = *pA - *pB;
    printf("Subtracao de A e B:%d\n",sub);
    multi = (*pA) * (*pB);
    printf("Multiplicacao de A e B:%d\n",multi);
    div = *pA / *pB;
    printf("Divisao de A e B:%.2f\n",div);
    return 0;
}