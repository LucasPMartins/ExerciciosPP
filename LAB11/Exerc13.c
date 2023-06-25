#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Faça um programa que permita que o usuário entre com diversos nomes
e telefone para cadastro, e crie um arquivo com essas informações, uma
por linha. O usuário finaliza a entrada com ‘0’ para o telefone.*/

typedef struct{
    char nome[30];
    int numero;
}cadastro;


int main(){
    cadastro *p;
    int i = 0;
    char c;
    FILE *fp;
    int sair = 0;
    p = (cadastro *) malloc(10*sizeof(cadastro));
    if(p == NULL){
        printf("Memoria insuficiente!");
        return 1;
    }
    do{
        setbuf(stdin, NULL);
        printf("Digite um nome:");
        setbuf(stdin, NULL);
        fgets(p[i].nome,30,stdin);
        p[i].nome[strcspn(p[i].nome, "\n")] = '\0';
        printf("Digite o numero de telefone(0 para sair):");
        setbuf(stdin, NULL);
        scanf("%d",&p[i].numero);
        if(p[i].numero == 0){
            printf("Salvando...\n");
            sair = 1;
            break;
        }
        if(i == 10 && sair == 0){
            p = (cadastro *) realloc(p,(i+10)*sizeof(cadastro));
            if(p == NULL){
                printf("Memoria insuficiente!");
                return 1;
            }
        }
        i++;
    }while(sair == 0);
    fp = fopen("cadastro.txt","w");
    if(fp == NULL){
        printf("Erro ao abrir arquivo!");
        return 1;
    }
    for(int j = 0;j < i;j++){
        fprintf(fp,"Nome: %s Telefone: %d\n",p[j].nome,p[j].numero);
    }
    fclose(fp);
    fp = fopen("cadastro.txt","r");
    if(fp == NULL){
        printf("Erro ao abrir arquivo!");
        return 1;
    }
    while((c = fgetc(fp)) != EOF){
        printf("%c",c);
    }
    fclose(fp);
    free(p);
    return 0;
}