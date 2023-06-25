#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*.Faça um programa que recebe como entrada o nome de um arquivo de
entrada e o nome de um arquivo de saída. O arquivo de entrada contém
o nome de um aluno ocupando 40 caracteres e três inteiros que indicam
suas notas. O programa deverá ler o arquivo de entrada e gerar um
arquivo de saída onde aparece o nome do aluno e as suas notas em
ordem crescente.*/

int main(){
    FILE *fp;
    FILE *fp2;
    char nome[40];
    float nota[3];
    float pri,seg,ter;
    char aqentrada[30];
    char aqsaida[30];
    int maior = 0;
    int n,i,j;
    printf("Digite o nome do arquivo de entrada:");
    setbuf(stdin,NULL);
    scanf("%s",aqentrada);
    fp = fopen(aqentrada,"r");
    if(fp == NULL){
        printf("Erro ao abrir arquivo!");
        return 1;
    }
    fscanf(fp,"%s %f %f %f\n",nome,&nota[0],&nota[1],&nota[2]);
    printf("Digite o nome do arquivo de saida:");
    setbuf(stdin,NULL);
    scanf("%s",aqsaida);
    fp2 = fopen(aqsaida,"w");
    if(fp2 == NULL){
        printf("Erro ao abrir arquivo!");
        return 1;
    }
    fprintf(fp2,"Nome: %s \nNotas em ordem crescente:\n",nome);
    for(i = 0;i < 3;i++){
        for(j = 0;j < 3;j++){
            if(nota[i]>nota[j]){
                maior++;
            }
        }
        if(maior == 2){
            pri = nota[i];
        }
        else if(maior == 1){
            seg = nota[i];
        }
        else if(maior == 0){
            ter = nota[i];
        }
    }
    fprintf(fp2,"1 - %.2f\t2 - %.2f\t3 - %.2f",pri,seg,ter);
    fclose(fp2);
    fclose(fp);
    return 0;
}