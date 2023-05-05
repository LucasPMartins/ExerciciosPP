#include<stdio.h>

int main (){
    int A[9];
    int x,y,soma = 0;
    for(int i = 0;i<8;i++){
        printf("Digite um valor para a posicao %d:",i);
        scanf("%d",&A[i]);
    }
    do{
        printf("Digite uma posicao:");
        scanf("%d",&x);
        if((x>7||x<0)){
            printf("Posicao invalida!\n");
        }
    }while((x>7||x<0));
    do{
        printf("Digite uma outra posicao:");
        scanf("%d",&y);
        if((y>7||y<0)){
            printf("Posicao invalida!\n");
        }
    }while((y>7||y<0));
    soma = A[x]+A[y];
    printf("A soma dos valores nas posicoes %d e %d eh %d\n",x,y,soma);
    return 0;
}