#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Faça um programa que receba como entrada o ano corrente e o nome de
dois arquivos: um de entrada e outro de saída. Cada linha do arquivo de
entrada contém o nome de uma pessoa (ocupando 40 caracteres) e o
seu ano de nascimento. O programa deverá ler o arquivo de entrada e
gerar um arquivo de saída onde aparece o nome da pessoa seguida por
uma string que representa a sua idade.
- Se a idade for menor do que 18 anos, escreva “menor de idade”;
- Se a idade for maior do que 18 anos, escreva “maior de idade”;
- Se a idade for igual a 18 anos, escreva “entrando na maior idade”.*/

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
    char aqentrada[30];
    char aqsaida[30];
    char c;
    printf("Digite o nome do arquivo de entrada:");
    setbuf(stdin,NULL);
    scanf("%s",aqentrada);
    printf("Digite o nome do arquivo de saida:");
    setbuf(stdin,NULL);
    scanf("%s",aqsaida);
    fp1 = fopen(aqentrada,"r");
    fp2 = fopen(aqsaida,"w");
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
    while(fscanf(fp1,"%s %d\n",p[i].nome,&p[i].d,&p[i].m,&p[i].a) == 2){
        i++;
    }
    for(i = 0;i < tamanho;i++){
        idade = 2023 - p[i].a;
        if(idade < 18){
            fprintf(fp2,"%s menor de idade\n",p[i].nome);
        }
        if(idade > 18){
            fprintf(fp2,"%s maior de idade\n",p[i].nome);
        }
        if(idade == 18){
            fprintf(fp2,"%s entrando na maior idade\n",p[i].nome);
        }  
    }
    fclose(fp2);
    fp2 = fopen(aqsaida,"r");
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