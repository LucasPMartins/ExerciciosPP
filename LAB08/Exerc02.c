#include<stdio.h>
#include<string.h>

/* Crie um programa que contenha uma matriz de float contendo 3 linhas e 3
colunas. Utilizando aritmética de ponteiro, imprima o endereço de cada
posição dessa matriz.*/

int main(){
    float mat[3][3];
    for(int i = 0;i<9;i++){
        printf("Endereco %d:%p\n",i,mat+i);
    }
    return 0;
}