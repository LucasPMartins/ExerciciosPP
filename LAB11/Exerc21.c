#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Crie um programa que receba como entrada o número de alunos de uma
disciplina. Aloque dinamicamente em uma estrutura para armazenar as
informações a respeito desses alunos: nome do aluno e sua nota final.
Use nomes com no máximo 40 caracteres. Em seguida, salve os dados
dos alunos em um arquivo binário. Por fim, leia o arquivo e mostre o
nome do aluno com a maior nota.*/

typedef struct{
    char nome[40];
    int nota;
}dados;

int main(){
    FILE *fp;
    dados *p;
    int maior;
    char nomemn[40];
    int n,i,j;
    printf("Digite quantos alunos sao da disciplina:");
    setbuf(stdin,NULL);
    scanf("%d",&n);
    p = (dados *) malloc(n*sizeof(dados));
    if(p == NULL){
        printf("Memoria insuficiente!");
        return 1;
    }
    for(i = 0;i < n;i++){
        printf("Digite o nome %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%s",p[i].nome);
        printf("Digite a nota do aluno %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",&p[i].nota);
    }
    printf("Transferindo informacoes para o arquivo...\n");
    fp = fopen("notas","wb");
    if(fp == NULL){
        printf("Erro ao abrir arquivo!");
        return 1;
    }
    for(i = 0;i < n;i++){
        fprintf(fp,"Nome: %s \tNota Final: %d\n",p[i].nome,p[i].nota);
    }
    fclose(fp);
    maior = p[0].nota;
    for(i = 0;i < n;i++){
        if(p[i].nota > maior){
            maior = p[i].nota;
            strcpy(nomemn,p[i].nome);
        }
    }
    printf("O aluno com maior nota eh: %s\n",nomemn);
    printf("Nota: %d",maior);
    fclose(fp);
    free(p);
    return 0;
}