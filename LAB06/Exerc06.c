#include<stdio.h>
#include<string.h>

/*Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de
alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de até
10 alunos. Após ler todos os dados digitados, e depois de armazena-los em um vetor de
estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias finais
(use uma média ponderada: Nota1 com peso = 1.0 e Nota2 com peso = 2.0).*/

struct alunos{
    char matricula[20];
    char nome[30];
    char codgdic[20];
    int nota1,nota2;
};

int main(){
    struct alunos c[10];
    int i;
    float media;
    for(i=0;i<10;i++){
        printf("Digite a matricula do aluno %d:",i+1);
        setbuf(stdin,NULL);
        fgets(c[i].matricula,20,stdin);
        printf("Digite o nome do aluno %d:",i+1);
        setbuf(stdin,NULL);
        fgets(c[i].nome,30,stdin);
        printf("Digite o Codigo da Disciplina do aluno %d:",i+1);
        setbuf(stdin,NULL);
        fgets(c[i].codgdic,20,stdin);
        printf("Digite a nota 1 do aluno %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",&c[i].nota1);
        printf("Digite a nota 2 do aluno %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",&c[i].nota2);
        printf("=========================\n"); 
    }
    printf("----Lista dos Alunos----\n");
    for(i=0;i<10;i++){
        media = 0;
        printf("%s",c[i].matricula);
        printf("%s",c[i].nome);
        printf("%s",c[i].codgdic);
        media = ((c[i].nota1*1)+(c[i].nota2*2))/3;
        printf("A media das notas desse aluno eh %.2f\n",media);
        printf("=========================\n"); 
    }
    return 0;   
}