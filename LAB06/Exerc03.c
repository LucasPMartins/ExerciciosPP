#include<stdio.h>
#include<string.h>

struct aluno{
    char nome[30];
    char matricula[20];
    char curso[100];
};

int main(){
    struct aluno c[5];
    int i;
    for(i = 0;i<5;i++){
        printf("Digite o nome do aluno %d:",i);
        setbuf(stdin,NULL);
        fgets(c[i].nome,30,stdin);
        printf("Digite o numero da matricula do aluno %d:",i);
        setbuf(stdin,NULL);
        fgets(c[i].matricula,20,stdin);
        printf("Digite o curso do aluno %d:",i);
        setbuf(stdin,NULL);
        fgets(c[i].curso,100,stdin);
    }
    printf("Todos os dados do alunos foram salvos!\n");
    printf("------------------------\n");
    for(i = 0;i<5;i++){
        printf("Nome do aluno %d:%s",i,c[i].nome); 
        printf("Numero da matricula do aluno %d:%s",i,c[i].matricula);        
        printf("Curso do aluno %d:%s",i,c[i].curso);
    }
    printf("------------------------");
    return 0;  
}