#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Faça um programa que receba do usuário um arquivo texto e mostre na
tela quantas linhas esse arquivo possui*/

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    char caractere;
    int numLinhas = 0;
    // Solicitar o nome do arquivo ao usuário
    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nomeArquivo);
    // Abrir o arquivo para leitura
    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    // Contar as linhas do arquivo
    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == '\n') {
            numLinhas++;
        }
    }
    // Fechar o arquivo
    fclose(arquivo);
    printf("O arquivo possui %d linha(s).\n", numLinhas);
    return 0;
}
