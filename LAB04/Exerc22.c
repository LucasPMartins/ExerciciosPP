#include<stdio.h>

/*Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exemplo,
a saída para n = 4 seria:*/

int triangulo_lateral(int a);

int main (){
    int num,linha;
    printf("Digite uma valor para N:");
    scanf("%d",&num);
    triangulo_lateral(num);
    return 0;
}

int triangulo_lateral(int a){
    int i, j;
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = a-1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}