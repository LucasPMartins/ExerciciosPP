#include<stdio.h>
#include<stdlib.h>

/*Escreva uma função que receba um array de inteiros V e os endereços de
duas variáveis inteiras, min e max, e armazene nessas variáveis o valor
mínimo e máximo do array. Escreva também uma função main que use essa
função.*/

int maxmin(int *vet,int num,int *max,int *min);

int main(){
    int i,N,*p;
    int max,min;
    do{
        printf("Digite quantos valores seu array tera:");
        setbuf(stdin,NULL);
        scanf("%d",&N);
        p = (int *) malloc(N*sizeof(int));
        if(p == NULL){
            printf("Memoria insuficiente!\n");
            free(p);
            printf("Digite novamente!\n");
        }
    }while(p == NULL);
    printf("Digite os valores do array:\n");
    for(i = 0;i < N;i++){
        printf("Digite o valor %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%i",p+i);
    }
    maxmin(p,N,&max,&min);
    printf("O maior valor desse array eh %d\n",max);
    printf("O menor valor desse array eh %d",min);
    return 0;
}

int maxmin(int *vet,int num,int *max,int *min){
    int i;
    int maximo = vet[0];
    int minimo = vet[0];
    for(i = 0;i < num; i++){
        if(vet[i] > maximo){
            maximo = vet[i];
        }else if(vet[i] < minimo){
            minimo = vet[i];
        }
    }
    *max = maximo;
    *min = minimo;
}