#include<stdio.h>
#include<string.h>

/*Faça um programa que leia os dados de 10 alunos (Nome, matricula, Média Final),
armazenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores,
o vetor dos aprovados e o vetor dos reprovados, considerando a média mínima para a
aprovação como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos dados
do vetor de reprovados.*/

typedef struct{
    char nome[30];
    char matricula[20];
    int  media;
}aluno;

int main (){
    aluno c[10];
    aluno aprovados[10],reprovados[10];
    int i,j,k,l;
    printf("Digite os dados de 10 alunos:\n");
    for(i=0;i<10;i++){
        printf("Digite o nome do aluno %d:",i+1);
        setbuf(stdin,NULL);
        fgets(c[i].nome,30,stdin);
        printf("Digite a matricula do aluno %d:",i+1);
        setbuf(stdin,NULL);
        fgets(c[i].matricula,30,stdin);
        printf("Digite a media do aluno %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",&c[i].media);   
    }
    for(i=0,j=0,l=0;i<10;i++){
        if(c[i].media>5){
            strcpy(aprovados[j].nome,c[i].nome);
            strcpy(aprovados[j].matricula,c[i].matricula);
            aprovados[j].media = c[i].media;
            j++;
        }else{
            strcpy(reprovados[j].nome,c[i].nome);
            strcpy(reprovados[j].matricula,c[i].matricula);
            reprovados[j].media = c[i].media;
            l++;
        }
    }
    printf("---Alunos Aprovados---\n");
    for(i=0;i<=j;i++){
        printf("Nome:%s",aprovados[i].nome);
        printf("Matricula:%s",aprovados[i].matricula);
        printf("Media:%d\n",aprovados[i].media);
        printf("=========================\n");
    }
    printf("---Alunos Reprovados---\n");
    for(i=0;i<=l;i++){
        printf("Nome:%s",reprovados[i].nome);
        printf("Matricula:%s",reprovados[i].matricula);
        printf("Media:%d\n",reprovados[i].media);
        printf("=========================\n");
    }
    return 0;
}
