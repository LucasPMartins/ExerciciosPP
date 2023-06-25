#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Faça um programa que receba do usuário um arquivo texto. Crie outro
arquivo texto contendo o texto do arquivo de entrada, mas com as
vogais substituídas por ‘*’*/

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    FILE *arquivo2;
    char caractere;
    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nomeArquivo);
    arquivo = fopen(nomeArquivo, "r");
    arquivo2 = fopen("arq.txt","w");
    if(arquivo == NULL || arquivo2 == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }//copia os caracteres do arquivo para arquivo2(aqr.txt)
    while ((caractere = fgetc(arquivo)) != EOF) {
        fputc(caractere,arquivo2);
    }//sempre fechar e abrir arquivo para voltar o cursor para o inicio
    fclose(arquivo);
    fclose(arquivo2);
    // Substituir vogais por *
    arquivo = fopen("arq.txt", "r");
    arquivo2 = fopen("arq.txt", "r+");
    if(arquivo == NULL || arquivo2 == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
            caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
            fputc('*', arquivo2);
        } else {
            fputc(caractere, arquivo2);
        }
    }//sempre fechar e abrir arquivo para voltar o cursor para o inicio
    fclose(arquivo);
    fclose(arquivo2);
    arquivo2 = fopen("arq.txt","r");
    printf("Trocando todas as vogais por \"*\" no arquivo auxiliar\n");
    while ((caractere = fgetc(arquivo2)) != EOF) {
        printf("%c",caractere);
    }
    fclose(arquivo2);
    return 0;
}