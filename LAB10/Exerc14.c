#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/*Construa um programa que leia o número de linhas e de colunas de uma
matriz de números reais, aloque espaço dinamicamente para esta e a
inicialize com valores fornecidos pelo usuário. Ao final, o programa
deverá retornar a matriz na saída padrão com layout apropriado.*/

int main(){
    float **p;
    int i,j,N,M;
    printf("Digite o numero de linhas:");
    setbuf(stdin,NULL);
    scanf("%d",&N);
    p = (float **) malloc(N*sizeof(float*));
    printf("Digite o numero de colunas:");
    setbuf(stdin,NULL);
    scanf("%d",&M);
    for(i = 0;i < N;i++){
        p[i] = (float *) malloc(M*sizeof(float));
         for(j = 0;j < M;j++){
            printf("Digite o valor [%d,%d]:",i,j);
            setbuf(stdin,NULL);
            scanf("%f",&p[i][j]);
         }
    }
    printf("\nMatriz %dx%d\n\n",N,M);
    for(i = 0;i < N;i++){
        for(j = 0;j < M;j++){
            printf("[%-4.1f]",p[i][j]);
        }
        printf("\n");
    }
    free(p);
    return 0;
}