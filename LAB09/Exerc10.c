#include<stdio.h>
#include<stdlib.h>

/* Crie uma função para somar dois arrays. Esta função deve receber dois
arrays e retornar a soma em um terceiro array. Caso o tamanho do primeiro
e segundo array seja diferente então a função retornará ZERO (0). Caso a
função seja concluída com sucesso a mesma deve retornar o valor UM (1).
Utilize aritmética de ponteiros para manipulação do array*/

int soma(int *vet1,int *vet2,int *vet3,int N1,int N2,int N3);

int main(){
    int *p1,*p2,*p3;
    int i,r,N,N1,N2;
    printf("--- Soma de Arrays ---\n");
    do{
        printf("Digite quantos valores seu array 1 tera:");
        setbuf(stdin,NULL);
        scanf("%d",&N1);
        p1 = (int *) malloc(N*sizeof(int));
        if(p1 == NULL){
            printf("Memoria insuficiente!\n");
            free(p1);
            printf("Digite novamente!\n");
        }else{
            printf("Digite os valores do Array 1:\n");
            for(i = 0;i < N1;i++){
            printf("Digite o valor %d:",i+1);
            setbuf(stdin,NULL);
            scanf("%i",p1+i);
            }
        }
        printf("Digite quantos valores seu array 2 tera:");
        setbuf(stdin,NULL);
        scanf("%d",&N2);
        p2 = (int *) malloc(N2*sizeof(int));
        if(p2 == NULL){
            printf("Memoria insuficiente!\n");
            free(p2);
            printf("Digite novamente!\n");
        }else{
            printf("Digite os valores do Array 2:\n");
            for(i = 0;i < N2;i++){
            printf("Digite o valor %d:",i+1);
            setbuf(stdin,NULL);
            scanf("%i",p2+i);
            }
        }
        N = N1;
        p3 = (int *) malloc(N*sizeof(int));
        if(p3 == NULL){
            printf("Memoria insuficiente!\n");
            free(p3);
            printf("Diminua o tamanho dos arrays!\n");
        }
    }while(p1 == NULL || p2 == NULL || p3 == NULL);
    r = soma(p1,p2,p3,N1,N2,N);
    if(r == 0){
        printf("Erro!\n");
        printf("Tamanho dos arrays diferentes, impossivel somar!\n");
    }else if(r == 1){
        printf("A soma dos arrays eh:\n");
        for(i = 0;i < N;i++){
            printf("Valor %d:%d + %d = %d\n",i+1,*(p1+i),*(p2+i),*(p3+i));
        }
    }
    printf("Fim do programa!");
    free(p1);
    free(p2);
    free(p3);
    return 0;
}

int soma(int *vet1,int *vet2,int *vet3,int N1,int N2,int N3){
    int i;
    if(N1 != N2){
        return 0;
    }else{
        for(i = 0;i < N3;i++){
            vet3[i] = vet1[i] + vet2[i];
        }
        return 1;
    }
}