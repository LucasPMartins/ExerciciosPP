#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>//para toupper e tolower

/*Faça um programa que leia o conteúdo de um arquivo e crie um arquivo
com o mesmo conteúdo, mas com todas as letras minúsculas
convertidas para maiúsculas. Os nomes dos arquivos serão fornecidos,
via teclado, pelo usuário. A função que converte maiúscula para
minúscula é o toupper(). Ela é aplicada em cada caractere da string.
*/

int main(){
    FILE *fp;
    FILE *fp2;
    char c;
    char nome[30];
    char nome2[30];
    printf("Digite o nome do arquivo:");
    setbuf(stdin,NULL);
    scanf("%s",nome);
    fp = fopen(nome,"r");
    if(fp == NULL){
        printf("Nao foi possivel abrir o arquivo");
        return 0;
    }
    printf("Digite o nome do arquivo de copia:");
    setbuf(stdin,NULL);
    scanf("%s",nome2);
    fp2 = fopen(nome2,"w");
    if(fp2 == NULL){
        printf("Nao foi possivel abrir o arquivo");
        return 0;
    }
    while((c = fgetc(fp)) != EOF){
        if(c >= 97 && c <= 122){
            c = toupper(c);
            fputc(c,fp2);
        }else{
            fputc(c,fp2);
        }
    }
    fclose(fp);
    fclose(fp2);
    fp2 = fopen(nome2,"r");
    if(fp2 == NULL){
        printf("Nao foi possivel abrir o arquivo");
        return 0;
    }
    printf("Todas as letras minusculas convertidas para maiusculas:\n");
    while((c = fgetc(fp2)) != EOF){
        printf("%c", c);
    }
    fclose(fp);
    fclose(fp2);
    return 0;
}
