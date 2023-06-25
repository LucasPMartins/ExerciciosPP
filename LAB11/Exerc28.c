#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COLUNAS 30

void inverterLinha(char* linha) {
    int tamanho = strlen(linha);
    int i, j;

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        char temp = linha[i];
        linha[i] = linha[j];
        linha[j] = temp;
    }
}

void inverterArquivo(const char* arquivoEntrada, const char* arquivoSaida) {
    FILE* fpEntrada = fopen(arquivoEntrada, "r");
    FILE* fpSaida = fopen(arquivoSaida, "w");

    if (fpEntrada == NULL || fpSaida == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    char linha[MAX_COLUNAS + 1];

    while (fgets(linha, sizeof(linha), fpEntrada) != NULL) {
        inverterLinha(linha);
        fprintf(fpSaida, "%s", linha);
    }

    fclose(fpEntrada);
    fclose(fpSaida);

    printf("Arquivo invertido com sucesso.\n");
}

int main() {
    char arquivoEntrada[100];
    char arquivoSaida[100];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", arquivoEntrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", arquivoSaida);

    inverterArquivo(arquivoEntrada, arquivoSaida);

    return 0;
}
