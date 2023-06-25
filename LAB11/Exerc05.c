#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Faça um programa que receba do usuário um arquivo texto e um
caractere. Mostre na tela quantas vezes aquele caractere ocorre dentro
do arquivo.*/

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    char caractere;
    int vezes = 0;
    char letra;
    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nomeArquivo);
    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    printf("Digite uma letra:");
    setbuf(stdin,NULL);
    scanf("%c",&letra);
    while((caractere = fgetc(arquivo)) != EOF){
        if (caractere == letra){
            vezes++;
        }
    }
    fclose(arquivo);
    printf("O arquivo possui %d a letra %c.\n", vezes,letra);
    return 0;
}