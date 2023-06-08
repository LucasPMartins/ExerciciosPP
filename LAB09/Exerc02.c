#include<stdio.h>

/*Faça um programa que leia dois valores inteiros e chame uma função que
receba estes 2 valores de entrada e retorne o maior valor na primeira
variável e o menor valor na segunda variável. Escreva o conteúdo das 2
variáveis na tela.*/

int Maior(int *x,int *y);

int main(){
    int A,B;
    printf("Digite dois valores inteiros:\n");
    printf("Primeira Variavel:");
    setbuf(stdin,NULL);
    scanf("%d",&A);
    printf("Segunda Variavel:");
    setbuf(stdin,NULL);
    scanf("%d",&B);
    Maior(&A,&B);
    printf("O maior valor na primeira variavel e o menor valor na segunda variavel\n");
    printf("Primeira Variavel:%d\n",A);
    printf("Segunda Variavel:%d",B);
    return 0;
}

int Maior(int *x,int *y){
    int t;
    if(*x>*y){
        *x = *x;
        *y = *y;
    }else if (*y>*x){
        t = *x;
        *x = *y;
        *y = t;
    }else{
        *y = *x;
    } 
}