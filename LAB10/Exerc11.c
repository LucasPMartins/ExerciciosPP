#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*Crie um programa que declare uma estrutura (registro) para o cadastro
de alunos.
a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome
(apenas um) e ano de nascimento;
b) Ao início do programa, o usuário deverá informar o número de alunos
que serão armazenados;
c) O programa deverá alocar dinamicamente a quantidade necessária
de memória para armazenar os registros dos alunos;
d) O programa deverá pedir ao usuário que entre com as informações
dos alunos.
e) Ao final, mostrar os dados armazenados e liberar a memória alocada*/

typedef struct
{
    int matricula;
    char sobrenome[20];
    char nascimento[12];
}registro;


int main(){
    registro *p;
    int N,i;
    printf("Digite quantos alunos serao armazenados:");
    setbuf(stdin,NULL);
    scanf("%d",&N);
    p = (registro *) malloc(N*sizeof(registro));
    if(p == NULL){
        printf("Memoria insuficiente!\n");
        free(p);
        exit(1);
    }
    printf("Entre com os dados dos alunos:\n");
    for(i = 0;i < N;i++){
        printf("Digite a matricula do aluno %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",&p[i].matricula);
        printf("Digite o sobrenome do aluno %d:",i+1);
        setbuf(stdin,NULL);
        fgets(p[i].sobrenome,20,stdin);
        printf("Digite a data de nascimento do aluno %d:",i+1);
        setbuf(stdin,NULL);
        fgets(p[i].nascimento,10,stdin);
    }
    printf("Salvando...\n");
    for(i = 0;i < N;i++){
        printf("Matricula do aluno %d:%d\n",i+1,p[i].matricula);
        printf("Sobrenome do aluno %d:%s",i+1,p[i].sobrenome);
        printf("Data de nascimento do aluno %d:%s",i+1,p[i].nascimento);
    }
    free(p);
    return 0;
}