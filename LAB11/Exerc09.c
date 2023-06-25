#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Faça um programa que receba dois arquivos do usuário, e crie um
terceiro arquivo com o conteúdo dos dois primeiros juntos (o conteúdo
do primeiro seguido do conteúdo do segundo).*/

int main(){
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    char c;
    char nome1[30];
    char nome2[30];
    char nome3[30];
    printf("Digite o nome do arquivo:");
    setbuf(stdin,NULL);
    scanf("%s",nome1);
    fp1 = fopen(nome1,"r");
    if(fp1 == NULL){
        printf("Nao foi possivel abrir o arquivo");
        return 0;
    }
    printf("Digite o nome do arquivo 2:");
    setbuf(stdin,NULL);
    scanf("%s",nome2);
    fp2 = fopen(nome2,"r");
    if(fp2 == NULL){
        printf("Nao foi possivel abrir o arquivo");
        return 0;
    }
    printf("Digite o nome do arquivo 3:");
    setbuf(stdin,NULL);
    scanf("%s",nome3);
    fp3 = fopen(nome3,"w");
    if(fp3 == NULL){
        printf("Nao foi possivel abrir o arquivo");
        return 0;
    }
    fputs("Conteudo do arquivo 1:\n",fp3);
    while((c = fgetc(fp1)) != EOF){
        fputc(c,fp3);
    }
    fputs("\nConteudo do arquivo 2:\n",fp3);
    while((c = fgetc(fp2)) != EOF){
        fputc(c,fp3);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fp3 = fopen(nome3,"r");
    if(fp3 == NULL){
        printf("Nao foi possivel abrir o arquivo");
        return 0;
    }
    printf("\nConteudo do arquivo 3:\n");
    while((c = fgetc(fp3)) != EOF){
        printf("%c",c);
    }
    fclose(fp3);
    return 0;
}