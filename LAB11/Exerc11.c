#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*.Faça um programa no qual o usuário informa o nome do arquivo e uma
palavra, e retorne o número de vezes que aquela palavra aparece no
arquivo.*/

int main() {
    char fileName[30 + 1], word[30 + 1], buffer[30 + 1];
    FILE *file;
    int count = 0;

    // Solicitar o nome do arquivo
    printf("Digite o nome do arquivo: ");
    scanf("%s", fileName);

    // Solicitar a palavra a ser buscada
    printf("Digite a palavra a ser buscada: ");
    scanf("%s", word);

    // Abrir o arquivo
    file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Ler o arquivo palavra por palavra e contar as ocorrências
    while (fscanf(file, "%s", buffer) != EOF) {
        if (strcmp(buffer, word) == 0) {
            count++;
        }
    }

    // Fechar o arquivo
    fclose(file);

    // Exibir o resultado
    printf("A palavra '%s' aparece %d vez(es) no arquivo.\n", word, count);

    return 0;
}
