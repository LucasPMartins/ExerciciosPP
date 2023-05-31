#include<stdio.h>
#include<string.h>

/*Crie um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e
imprima o dobro de cada valor lido*/

int main(){
    int elementos[5];
    int i;
    printf("Digite 5 numeros inteiros:\n");
    for(i = 0;i<5;i++){
        printf("Numero %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",elementos+i);
    }
    printf("--- DOBRO ---\n");
    for(i=0;i<5;i++){
        printf("Dobro do numero %d = %d\n",*(elementos+i),(*(elementos+i) * 2));
    }
    return 0;
}