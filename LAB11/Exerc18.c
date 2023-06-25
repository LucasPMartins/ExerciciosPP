#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Faça um programa que leia um arquivo contendo o nome e o preço de
diversos produtos (separados por linha), e calcule o total da compra.*/

typedef struct{
    char nome[30];
    float preco;
}produtos;

int main(){
    FILE *fp;
    produtos *p;
    int tamanho = 0,count = 0,i;
    float total;
    char c;
    fp = fopen("produtos","r");
    if(fp == NULL){
        printf("Erro ao abrir o arquivo!");
        return 1;
    }
    while((c = fgetc(fp)) != EOF){
        if(c == '\n'){
            tamanho++;
        }
    }
    p = (produtos *) malloc(tamanho*sizeof(produtos));
    if(p == NULL){
        printf("Memoria insuficiente!");
        return 1;
    }
    rewind(fp);
    do{
        fscanf(fp,"%s %f\n",&p[count].nome,&p[count].preco);
        count++;
    }while(count < tamanho);
    for(i = 0;i < tamanho;i++){
        total += p[i].preco;
    }
    printf("Preco de cada item:\n");
    for(i = 0;i < tamanho;i++){
        printf("Nome: %s \tPreco: R$%.2f\n",p[i].nome,p[i].preco);
    }
    printf("O total da compra eh R$%.2f",total);
    free(p);
    fclose(fp);
    return 0;
}