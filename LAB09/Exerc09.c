#include<stdio.h>
#include<stdlib.h>

/*Escreva um programa que declare um array de inteiros e um ponteiro para
inteiros. Associe o ponteiro ao array. Agora, some mais um (+1) a cada
posição do array usando o ponteiro (use *).*/

int main(){
    int array[5];
    int *p,i;
    for(i = 0;i<5;i++){
        printf("Digite o valor %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",&array[i]);
    }
    printf("Valores do Array:\n");
    for(i = 0;i<5;i++){
        printf("Valor %d:%d\n",i+1,array[i]);
    }
    printf("--- Somando +1 ---\n");
    for(i = 0;i < 5;i++){
        p = &array[i];
        *p = *p + 1;
    }
    printf("--- Novos Valores ---\n");
    for(i = 0;i < 5; i++){
        printf("Valor %d:%d\n",i+1,array[i]);
    }
    return 0;
}