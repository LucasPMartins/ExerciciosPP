#include<stdio.h>

int main (){
    int matriz[4][4];
    int i,j;
    int maior = 0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite um numero para a posicao[%d][%d]:",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(matriz[i][j]>10){
                maior++;
            }
        }
    }
    printf("A matriz possui %d valores maiores que 10",maior);
    return 0;
}