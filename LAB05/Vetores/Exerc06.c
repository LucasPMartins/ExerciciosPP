#include<stdio.h>

int main(){
    int vet[10];
    int i,j,quantdiv;
    printf("Digite 10 numeros inteiros\n");
    for(i=0;i<10;i++){
        printf("Digite um numero para a posicao %d:",i);
        scanf("%d",&vet[i]);
    }
    for(i=0;i<10;i++){
        quantdiv = 0;
        for(j=1;j<=vet[i];j++){
            if(vet[i]%j==0){
                quantdiv++;
            }
        }
        if(quantdiv==2){
                printf("O numero da posicao %d de valor %d eh primo\n",i,vet[i]);
        }
    }
    return 0;
}