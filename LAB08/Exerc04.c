#include<stdio.h>
#include<string.h>

/*Crie um programa que contenha um array contendo 5 elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo
valores pares.*/

int main(){
    int num[5];
    int i;
    printf("Digite 5 numeros inteiros:\n");
    for(i = 0;i<5;i++){
        printf("Numero %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",num+i);
    }
    printf("Endereco dos numeros pares:\n");
    for(i=0;i<5;i++){
        if(*(num+i)%2==0){
            printf("Endereco do numero %d:%p\n",*(num+i),num+i);
        }
    }
    return 0;
}