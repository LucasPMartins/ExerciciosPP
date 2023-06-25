#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Crie um programa que receba como entrada o número de alunos de uma
disciplina. Aloque dinamicamente dois vetores para armazenar as
informações a respeito desses alunos. O primeiro vetor contém o nome
dos alunos e o segundo contém suas notas finais. Crie um arquivo que
armazene, a cada linha, o nome do aluno e sua nota final. Use nomes
com no máximo 40 caracteres. Se o nome não contém 40 caracteres,
complete com espaço em branco.*/

int main(){
    FILE *fp;
    char **p;
    int *q;
    int tamanho;
    int n,i,j;
    printf("Digite quantos alunos sao da disciplina:");
    setbuf(stdin,NULL);
    scanf("%d",&n);
    p = (char **) malloc(n*sizeof(char *));
    if(p == NULL){
        printf("Memoria insuficiente!");
        return 1;
    }
    q = (int *) malloc(n*sizeof(int ));
    if(q == NULL){
        printf("Memoria insuficiente!");
        return 1;
    }
    for(i = 0;i < n;i++){
        p[i] = (char *) malloc(40*sizeof(char));
        if(p[i] == NULL){
            printf("Memoria insuficiente!");
            return 1;
        }
        printf("Digite o nome %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%s",p[i]);
        tamanho = strlen(p[i]);
        if (tamanho < 40) {
            snprintf(p[i], 40, "%-*s", 40, p[i]);
        }
        printf("Digite a nota do aluno %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",&q[i]);
    }
    printf("Transferindo informacoes para o arquivo...\n");
    fp = fopen("notas","w");
    if(fp == NULL){
        printf("Erro ao abrir arquivo!");
        return 1;
    }
    for(i = 0;i < n;i++){
        fprintf(fp,"Nome: %s \tNota Final: %d\n",p[i],q[i]);
    }
    fclose(fp);
    free(p);
    free(q);
    return 0;
}