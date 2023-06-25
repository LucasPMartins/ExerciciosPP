#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Dado um arquivo contendo um conjunto de nome e data de nascimento
(DD MM AAAA), isto é, 3 inteiros em sequência), faça um programa que
leia o nome do arquivo e a data de hoje e construa outro arquivo
contendo o nome e a idade de cada pessoa do primeiro arquivo.*/

typedef struct{
    char nome[30];
    int d,m,a;
}datanc;

int main(){
    FILE *fp1;
    FILE *fp2;
    datanc *p;
    int tamanho = 0,i = 0;
    int idade;
    char aqdata[30];
    char aqidade[20];
    char c;
    printf("Digite o nome do arquivo com as datas de nascimento:");
    setbuf(stdin,NULL);
    scanf("%s",aqdata);
    printf("Digite o nome do arquivo a ser criado:");
    setbuf(stdin,NULL);
    scanf("%s",aqidade);
    fp1 = fopen(aqdata,"r");
    fp2 = fopen(aqidade,"w");
    if(fp1 == NULL || fp2 == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    while((c = fgetc(fp1)) != EOF){
        if(c == '\n'){
            tamanho++;
        }
    }
    rewind(fp1);
    p = (datanc *) malloc(tamanho*sizeof(datanc));
    if(p == NULL){
        printf("Memoria insuficiente!");
        return 1;
    }
    while(fscanf(fp1,"%s %d %d %d\n",p[i].nome,&p[i].d,&p[i].m,&p[i].a) == 4){
        i++;
    }
    for(i = 0;i < tamanho;i++){
        idade = 2023 - p[i].a;
        fprintf(fp2,"Nome: %s Idade: %d\n",p[i].nome,idade);
    }
    fclose(fp2);
    fp2 = fopen(aqidade,"r");
    if(fp2 == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    while((c = fgetc(fp2)) != EOF){
        printf("%c",c);
    }
    fclose(fp1);
    fclose(fp2);
    free(p);
    return 0;
}