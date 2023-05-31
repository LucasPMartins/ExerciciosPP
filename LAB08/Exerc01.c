#include<stdio.h>
#include<string.h>

/*Crie um programa que contenha um array de float contendo 10 elementos.
Utilizando aritmética de ponteiro, imprima o endereço de cada posição
desse array.*/

int main (){
    float elementos[10];
    for(int i = 0;i<10;i++){      
        printf("Endereco %d:%p\n",i,elementos+i);
    }
    return 0;
}