#include<stdio.h>
#include<string.h>

/*Faça um programa que leia 2 valores inteiros e chame uma função que
receba estas 2 variáveis e troque o seu conteúdo, i.e., esta função é
chamada passando duas variáveis A e B, por exemplo, e após a execução da
função, A conterá o valor de B e B terá o valor de A. Imprima os valores
antes e depois da troca*/

int troca(int *x,int *y);

int main(){
    int A,B;
    printf("Digite dois valores inteiros:\n");
    printf("A:");
    setbuf(stdin,NULL);
    scanf("%d",&A);
    printf("B:");
    setbuf(stdin,NULL);
    scanf("%d",&B);
    troca(&A,&B);
    printf("Trocando os valores de A e B:\n");
    printf("Novo valor de A:%d\n",A);
    printf("Novo valor de B:%d",B);
    return 0;
}

int troca(int *x,int *y){
    int t;
    t = *y;
    *y = *x;
    *x = t;
}