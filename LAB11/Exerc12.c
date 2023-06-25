#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Abra um arquivo texto, calcule e escreva o número de caracteres, o
número de linhas e o número de palavras neste arquivo. Escreva
também quantas vezes cada letra ocorre no arquivo (ignorando letras
com acento). Obs.: palavras são separadas por um ou mais caracteres
espaço, tabulação ou nova linha.*/

int main(){
    char buffer[30];
    char nome[20];
    char c;
    FILE *fp;
    int count_linha = 0,count_c = 0,count_word = 0;
    printf("Digite o nome do arquivo: ");
    scanf("%s",nome);
    fp = fopen(nome,"r");
    if(fp == NULL){
        printf("Erro ao abrir arquivo!");
        return 1;
    }
    while((c = fgetc(fp)) != EOF){
        count_c++;
        if(c ==  '\n'){
            count_linha++;
            count_word++;
        }else if(c == '\t' || c == '\0' || c == ' ' || c == '  '){
            count_word++;
        }
    }
    printf("O numero de caracteres eh %d\n",count_c);
    printf("O numero de linhas eh %d\n",count_linha);
    printf("O numero de palavras eh %d\n",count_word);
    fclose(fp);
    return 0;
}