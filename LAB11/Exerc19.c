#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Faça um programa que receba do usuário um arquivo que contenha o
nome e a nota de diversos alunos (da seguinte forma: NOME: JOÃO
NOTA: 8), um aluno por linha. Mostre na tela o nome e a nota do aluno
que possui a maior nota*/

typedef struct {
    char nome[20];
    int nota;
}notas;

int main(){
     FILE *fp;
    notas *p;
    int tamanho = 0,count = 0,i;
    int maior;
    char c;
    fp = fopen("notas","r");
    if(fp == NULL){
        printf("Erro ao abrir o arquivo!");
        return 1;
    }
    while((c = fgetc(fp)) != EOF){
        if(c == '\n'){
            tamanho++;
        }
    }
    p = (notas *) malloc(tamanho*sizeof(notas));
    if(p == NULL){
        printf("Memoria insuficiente!");
        return 1;
    }
    rewind(fp);
    do{
        fscanf(fp,"NOME: %s NOTA: %d\n",&p[count].nome,&p[count].nota);
        count++;
    }while(count < tamanho);
    maior = p[0].nota;
    for(i = 0;i < tamanho;i++){
        if(p[i].nota > maior){
            maior = p[i].nota;
        }
    }
    for(i = 0;i < tamanho;i++){
        if(p[i].nota == maior){
            printf("O aluno com maior nota (%d) eh %s\n",p[i].nota,p[i].nome);
            break;
        }
    }
    free(p);
    fclose(fp);
    return 0;
}