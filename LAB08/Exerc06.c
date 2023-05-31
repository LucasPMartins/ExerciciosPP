#include<stdio.h>
#include<string.h>

/*Elabore um programa que dado um array e um valor do mesmo tipo do
array, preencha os elementos de array com esse valor. Não utilize índices
para percorrer o array, apenas aritmética de ponteiros.*/

int main(){
    int array[10];
    int valor,i;
    printf("Valores inicias do array:\n");
    for(i=0;i<10;i++){
        printf("%d ",*(array+i));
        if(i==9){
            printf("\n");
        }
    }
    printf("Digite um valor:");
    setbuf(stdin,NULL);
    scanf("%d",&valor);
    printf("Novos valores do array:\n");
    for(i=0;i<10;i++){
        *(array+i) = valor;
        printf("%d ",*(array+i));
        if(i==9){
            printf("\n");
        }
    }
    return 0;
}