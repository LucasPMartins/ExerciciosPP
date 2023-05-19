#include<stdio.h>
#include<string.h>

/*Faça um programa que seja uma agenda de compromissos e:
- Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e
data. A data deve ser outra estrutura de dados contendo dia, mês e ano;
- Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o
procedimento até ler M = 0*/

typedef struct{
    int dia;
    int mes;
    int ano;
}data;

typedef struct{
    char compromisso[60];
    data DATA;
}agenda;

int main(){
    int M,A;
    agenda c[5];
    int i,j=0;
    printf("---Agenda de Compromissos---\n");
    for(i=0;i<5;i++){
        printf("Digite o compromisso:");
        setbuf(stdin,NULL);
        fgets(c[i].compromisso,60,stdin);
        printf("Digite a data do compromisso:\n");
        printf("Dia:");
        setbuf(stdin,NULL);
        scanf("%d",&c[i].DATA.dia);
        printf("Mes:");
        setbuf(stdin,NULL);
        scanf("%d",&c[i].DATA.mes);
        printf("Ano:");
        setbuf(stdin,NULL);
        scanf("%d",&c[i].DATA.ano);
        printf("============================\n");
    }
    printf("---Compromissos Salvos!---\n");
    printf("Digite um MES para a busca:");
    setbuf(stdin,NULL);
    scanf("%d",&M);
    printf("Digite um ANO para a busca:");
    setbuf(stdin,NULL);
    scanf("%d",&A);
    printf("...procurando...\n");
    for(i=0,j=0;i<5;i++){
        if(c[i].DATA.mes==M){
            printf("Compromisso encontrado na data %d/%d/%d\n",c[i].DATA.dia,c[i].DATA.mes,c[i].DATA.ano);
            printf("\"%s\"",c[i].compromisso);
            printf("=========================\n");
            j=1;
        }
    }
    if(j==0){
        printf("Compromissos nao encontrado no mes %d\n",M);
    }
    return 0;
}
