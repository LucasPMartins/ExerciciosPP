#include<stdio.h>
#include<string.h>

/*Faça um programa que leia dois variáveis do tipo inteiro (A e B) e duas do
tipo ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros,
o programa deve retornar a soma do dobro dos dois números lidos. O dobro
de A na própria variável A e o dobro de B na própria variável B.*/

int main(){
    int A,B;
    int *pA;
    int *pB;
    int soma;
    pA = &A;
    pB = &B;
    printf("Digite um valor para A:");
    setbuf(stdin,NULL);
    scanf("%d",&A);
    printf("Digite um valor para B:");
    setbuf(stdin,NULL);
    scanf("%d",&B);
    soma = (*pA)*2 + (*pB)*2;
    printf("A soma do dobro dos dois numeros lidos eh %d\n",soma);
    A = (*pA)*2;
    printf("O dobro de A na propria variavel A:%d\n",A);
    B = (*pB)*2;
    printf("O dobro de B na propria variavel B:%d\n",B);
    return 0;
}