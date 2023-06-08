#include<stdio.h>

/*Crie um programa que contenha uma função que permita passar por
parâmetro dois números inteiros A e B. A função deverá calcular a soma
entre estes dois números e armazenar o resultado na variável A. Esta função
não deverá possuir retorno, mas deverá modificar o valor do primeiro
parâmetro. Imprima os valores de A e B na função principal.*/

int somar(int *x,int *y);

int main(){
    int A,B;
    printf("Digite dois valores inteiros:\n");
    printf("A:");
    setbuf(stdin,NULL);
    scanf("%d",&A);
    printf("B:");
    setbuf(stdin,NULL);
    scanf("%d",&B);
    printf("Valor de A:%d\n",A);
    printf("Valor de B:%d\n",B);
    somar(&A,&B);
    printf("A soma dos valores A e B:%d",A);
    return 0;
}

int somar(int *x,int *y){
    *x = *x + *y;
}