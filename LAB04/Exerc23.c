#include<stdio.h>

/*Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exemplo, a
saída para n = 6 */

int triangulo(int a);

int main(){
    int num,linha;
    printf("Digite uma valor para N:");
    scanf("%d",&num);
    triangulo(num);
    return 0;
}

int triangulo(int a){
    int i, j, espacos;
    for (i = 1; i <= a; i++) {
        espacos = a - i;
        for (j = 1; j <= espacos; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2*i)-1; j++) {
            printf("*");
        }
        printf("\n");
    }

}
