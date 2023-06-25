#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Faça um programa que receba do usuário um arquivo texto e mostre na
tela quantas letras são vogais e quantas são consoantes.*/

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    char caractere;
    int vogais = 0;
    int consoantes = 0;
    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nomeArquivo);
    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == 'a' ||caractere == 'e' ||caractere == 'i' ||caractere == 'o' ||caractere == 'u' || caractere == 'A' ||caractere == 'E' ||caractere == 'I' ||caractere == 'O' ||caractere == 'U') {
            vogais++;
        }else{
            consoantes++;
        }
        
    }
    fclose(arquivo);
    printf("O arquivo possui %d vogais.\n", vogais);
    printf("O arquivo possui %d consoantes.\n", consoantes);
    return 0;
}