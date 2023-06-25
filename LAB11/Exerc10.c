#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_CHARACTERS 40

/*Faça um programa que receba o nome de um arquivo de entrada e outro
de saída. O arquivo de entrada contém em cada linha o nome de uma
cidade (ocupando 40 caracteres) e o seu número de habitantes. O
programa deverá ler o arquivo de entrada e gerar um arquivo de saída
onde aparece o nome da cidade mais populosa seguida pelo seu número
de habitantes*/

int main() {
    char inputFileName[100], outputFileName[100], cityName[MAX_CHARACTERS + 1], mostPopulousCity[MAX_CHARACTERS + 1];
    int population, maxPopulation = 0;
    FILE *inputFile, *outputFile;

    // Solicitar os nomes dos arquivos de entrada e saída
    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", inputFileName);
    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", outputFileName);

    // Abrir o arquivo de entrada
    inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    // Ler o arquivo de entrada linha por linha
    while (fscanf(inputFile, "%40s%d", cityName, &population) == 2) {
        if (population > maxPopulation) {
            maxPopulation = population;
            strcpy(mostPopulousCity, cityName);
        }
    }

    // Fechar o arquivo de entrada
    fclose(inputFile);

    // Abrir o arquivo de saída
    outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return 1;
    }

    // Escrever no arquivo de saída a cidade mais populosa
    fprintf(outputFile, "%s %d\n", mostPopulousCity, maxPopulation);

    // Fechar o arquivo de saída
    fclose(outputFile);

    printf("Arquivo de saída gerado com sucesso.\n");

    return 0;
}

