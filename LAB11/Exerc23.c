#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*.Escreva um programa que leia a profissão e o tempo de serviço (em
anos) de cada um dos 5 funcionários de uma empresa e armazene-os no
arquivo “emp.txt”. Cada linha do arquivo corresponde aos dados de um
funcionário. Utilize o comando fprintf(). Em seguida, leia o mesmo
arquivo utilizando fscanf(). Apresente os dados na tela.*/

typedef struct{
    char profissao[20];
    int tempo;
}dados;

int main(){
    dados p[5];
    int i,j;
    FILE *fp;
    fp = fopen("emp.txt","w");
    if(fp == NULL){
        printf("Erro ao abrir arquivo!");
        return 1;
    }
    printf("Digite os dados dos 5 funcionarios:\n");
    for(i = 0;i < 5;i++){
        printf("Digite a profissao do funcionario %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%s",p[i].profissao);
        printf("Digite o tempo de servico (em anos) do funcionario %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",&p[i].tempo);
        fprintf(fp,"%s %d\n",p[i].profissao,&p[i].tempo);
    }
    fclose(fp);
    fp = fopen("emp.txt","r");
    if(fp == NULL){
        printf("Erro ao abrir arquivo!");
        return 1;
    }
    printf("Dados dos Funcionarios:\n");
    for(i = 0;i < 5;i++){
        fscanf(fp,"%s %d\n",p[i].profissao,&p[i].tempo);
        printf("Funcionario %d:\nProfissao: %s\tTempo de servico: %d\n",i+1,p[i].profissao,p[i].tempo);
    }
    fclose(fp);
    return 0;
}
