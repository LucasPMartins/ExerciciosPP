#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/*Escreva um programa que aloque dinamicamente uma matriz (de
inteiros) de dimensões definidas pelo usuário e a leia. Em seguida,
implemente uma função que receba um valor, retorne 1 caso o valor
esteja na matriz ou retorne 0 caso não esteja na matriz*/

int pertence(int num,int **p,int n,int m){
    int i,j;
    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++){
            if(num == p[i][j]){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int **p;
    int i,j,N,M;
    int num,r;
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
    printf("Digite um numero:");
    setbuf(stdin,NULL);
    scanf("%d",&num);
    r = pertence(num,p,N,M);
    if(r == 1){
        printf("O valor %d esta na matriz",num);
    }else{
        printf("O valor %d nao esta na matriz",num);
    }
    free(p);
    return 0;
}