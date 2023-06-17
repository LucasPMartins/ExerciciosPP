#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/*Faça um programa que leia dois números N e M e:
a) Crie e leia uma matriz de inteiros N x M;
b) Localize os três maiores números de uma matriz e mostre a linha e a
coluna onde estão.*/

int main(){
    int **p;
    int maior[3];
    int pos1[3],pos2[3];
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
            printf("[%-3d]",p[i][j]);
        }
        printf("\n");
    }
    maior[0] = p[0][0];
    maior[1] = p[0][0];
    maior[2] = p[0][0];
    for(i = 0;i < N;i++){
        for(j = 0;j < M;j++){
            if(p[i][j]>maior[0]){
                maior[0] = p[i][j];
                pos1[0] = i;
                pos2[0] = j;
            }
        }
    }
    for(i = 0;i < N;i++){
        for(j = 0;j < M;j++){
            if(p[i][j]>maior[1]&&p[i][j]<maior[0]){
                maior[1] = p[i][j];
                pos1[1] = i;
                pos2[1]= j;
            }
        }
    }
    for(i = 0;i < N;i++){
        for(j = 0;j < M;j++){
            if(p[i][j]>maior[2]&&p[i][j]<maior[1]){
                maior[2] = p[i][j];
                pos1[2] = i;
                pos2[2] = j;
            }
        }
    }        
    printf("Os tres maiores numeros da matriz eh:\n");
    printf("%d - posicao [%d][%d]\n",maior[0],pos1[0],pos2[0]);
    printf("%d - posicao [%d][%d]\n",maior[1],pos1[1],pos2[1]);
    printf("%d - posicao [%d][%d]\n",maior[2],pos1[2],pos2[2]);
    free(p);
    return 0;
}