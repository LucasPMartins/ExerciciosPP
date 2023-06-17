#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/*Faça um programa que leia dois números N e M:
a) Crie e leia uma matriz N x M de inteiros;
b) Crie e construa uma matriz transposta M x N de inteiros;
c) Mostre as duas matrizes*/

int main(){
    int **p;
    int y;
    int i,j,N,M;
    printf("Digite o numero de linhas:");
    setbuf(stdin,NULL);
    scanf("%d",&N);
    p = (int **) malloc(N*sizeof(int*));
    printf("Digite o numero de colunas:");
    setbuf(stdin,NULL);
    scanf("%d",&M);
    for(i = 0;i < N;i++){
        p[i] = (int *) malloc(M*sizeof(int));
         for(j = 0;j < M;j++){
            printf("Digite o valor [%d,%d]:",i,j);
            setbuf(stdin,NULL);
            scanf("%d",&p[i][j]);
         }
    }
    printf("\nMatriz %dx%d\n",N,M);
    for(i = 0;i < N;i++){
        for(j = 0;j < M;j++){
            printf("[%-2d]",p[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz %dx%d Transposta\n",N,M);
    for(i = 0;i < N;i++){
        for(j = 0;j < i;j++){
            y = p[i][j];
            p[i][j] = p[j][i];
            p[j][i] = y;
        }
    }
    for(i = 0;i < N;i++){
        for(j = 0;j < M;j++){
            printf("[%-2d]",p[i][j]);
        }
        printf("\n");
    }
    free(p);
    return 0;
}