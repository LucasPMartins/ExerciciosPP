#include<stdio.h>
#include<stdlib.h>

/*Faça um programa para armazenar em memória um vetor de dados
contendo 1500 valores do tipo int, usando a função de alocação
dinâmica de memória CALLOC:
a) Faça um loop e verifique se o vetor contém realmente os 1500
valores inicializados com zero (conte os 1500 zeros do vetor);
b) Atribua para cada elemento do vetor o valor do seu índice junto a
este vetor;
c) Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor.*/

int main(){
    int i,erro = 0;
    int *p;
    do{
        p = (int *) calloc(1500,sizeof(int));
        if(p == NULL){
            printf("Memoria Insuficente!");
        }
    }while(p == NULL);
    printf("---Verificando Valores---\n");
    for(i = 0;i < 1500;i++){
        if(*(p+i)!=0){
            erro++;
        }
    }
    if(erro==0){
        printf("Todos os valores do vetor sao 0\n");
    }else{
        printf("Existem %d valores diferentes de 0\n",erro);
    }
    printf("---Atribuindo Valores---\n");
    for(i = 0;i < 1500;i++){
        *(p+i) = i;
    }
    printf("Os 10 primeiros numeros sao:");
    for(i = 0;i < 10;i++){
        printf("%d ",*(p+i));
    }
    printf("\n");
    printf("Os 10 ultimos numeros sao:");
    for(i = 1499;i > 1489;i--){
        printf("%d ",*(p+i));
    }
    free(p);
    return 0;
}