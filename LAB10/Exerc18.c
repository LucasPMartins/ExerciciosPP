#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/*Escreva um programa para fazer a alocação dinâmica dos blocos de
dados conforme solicitado abaixo:
a) Vetor de 1024 Bytes (1 Kbyte);
b) Matriz de inteiros de dimensão 10 × 10;
c) Vetor para armazenar 50 registros contendo: nome do produto (30
caracteres), código do produto (inteiro) e preço em reais;
d) Texto de até 100 linhas com até 80 caracteres em cada linha.
*/

typedef struct{
    char nome[30];
    int codigo;
    float preco;
}registros;

int main(){
    int *p;
    int **q;
    registros *r;
    char **texto;
    int i;
    //a)
    p = (int *) malloc(1024);
    //b)
    q = (int **) malloc(10*sizeof(int *));
    for(i = 0;i < 10;i++){
        q[i] = (int *) malloc(10*sizeof(int));
    }
    //c)
    r = (registros *) malloc(50*sizeof(registros));
    //d)
    texto = (char **) malloc(100*sizeof(char *));
    for(i = 0;i < 10;i++){
        texto[i] = (char *) malloc(80*sizeof(char));
    }
    free(p);
    free(q);
    free(r);
    free(texto);
    return 0;
}