#include<stdio.h>
#include<stdlib.h>

/*Implemente uma função que receba como parâmetro um array de números
reais de tamanho N e retorne quantos números negativos há nesse array.
Essa função deve obedecer ao protótipo: int negativos(float *vet, int
N);*/

int negativos(float *vet, int N);

int main(){
    float *p;
    int N,i;
    int neg;
    do{
        printf("Digite quantos valores seu array tera:");
        setbuf(stdin,NULL);
        scanf("%d",&N);
        p = (float *) malloc(N*sizeof(float));
        if(p == NULL){
            printf("Memoria insuficiente!");
            free(p);
            printf("Digite novamente!\n");
        }
    }while(p == NULL);
    for(i = 0;i < N;i++){
        printf("Digite o valor %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%f",p+i);
    }
    printf("Calculando...\n");
    neg = negativos(p,N);
    printf("Existem %d valores negativos nesse array",neg);
    free(p);
    return 0;
}

int negativos(float *vet, int N){
    int neg = 0;
    for(int i = 0;i < N; i++){
        if(vet[i] < 0){
            neg++;
        }
    }
    return neg;
}