#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Registro {
    int codigo_vendedor;
    char nome_vendedor[50];
    float valor_da_venda;
    int mes;
};

void criarArquivo() {
    FILE *arquivo = fopen("registros.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return;
    }
    fclose(arquivo);
    printf("Arquivo criado com sucesso.\n");
}

void incluirRegistro() {
    struct Registro registro;
    FILE *arquivo = fopen("registros.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("Digite o código do vendedor: ");
    scanf("%d", &registro.codigo_vendedor);
    printf("Digite o nome do vendedor: ");
    scanf("%s", registro.nome_vendedor);
    printf("Digite o valor da venda: ");
    scanf("%f", &registro.valor_da_venda);
    printf("Digite o mês: ");
    scanf("%d", &registro.mes);

    fwrite(&registro, sizeof(struct Registro), 1, arquivo);
    fclose(arquivo);
    printf("Registro incluído com sucesso.\n");
}

void excluirRegistro() {
    int codigo, mes;
    printf("Digite o código do vendedor a ser excluído: ");
    scanf("%d", &codigo);
    printf("Digite o mês do registro a ser excluído: ");
    scanf("%d", &mes);

    FILE *arquivo = fopen("registros.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    FILE *temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        printf("Erro ao criar arquivo temporário.\n");
        fclose(arquivo);
        return;
    }

    struct Registro registro;
    int encontrado = 0;
    while (fread(&registro, sizeof(struct Registro), 1, arquivo)) {
        if (registro.codigo_vendedor != codigo || registro.mes != mes) {
            fwrite(&registro, sizeof(struct Registro), 1, temp);
        } else {
            encontrado = 1;
        }
    }

    fclose(arquivo);
    fclose(temp);

    remove("registros.txt");
    rename("temp.txt", "registros.txt");

    if (encontrado) {
        printf("Registro excluído com sucesso.\n");
    } else {
        printf("Registro não encontrado.\n");
    }
}

void alterarVenda() {
    int codigo, mes;
    float novo_valor;
    printf("Digite o código do vendedor: ");
    scanf("%d", &codigo);
    printf("Digite o mês do registro: ");
    scanf("%d", &mes);
    printf("Digite o novo valor da venda: ");
    scanf("%f", &novo_valor);

    FILE *arquivo = fopen("registros.txt", "r+");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    struct Registro registro;
    int encontrado = 0;
    while (fread(&registro, sizeof(struct Registro), 1, arquivo)) {
        if (registro.codigo_vendedor == codigo && registro.mes == mes) {
            registro.valor_da_venda = novo_valor;
            fseek(arquivo, -sizeof(struct Registro), SEEK_CUR);
            fwrite(&registro, sizeof(struct Registro), 1, arquivo);
            encontrado = 1;
            break;
        }
    }

    fclose(arquivo);

    if (encontrado) {
        printf("Valor da venda alterado com sucesso.\n");
    } else {
        printf("Registro não encontrado.\n");
    }
}

void imprimirRegistros() {
    FILE *arquivo = fopen("registros.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    struct Registro registro;
    while (fread(&registro, sizeof(struct Registro), 1, arquivo)) {
        printf("Código do vendedor: %d\n", registro.codigo_vendedor);
        printf("Nome do vendedor: %s\n", registro.nome_vendedor);
        printf("Valor da venda: %.2f\n", registro.valor_da_venda);
        printf("Mês: %d\n", registro.mes);
        printf("-----------------\n");
    }

    fclose(arquivo);
}

void excluirArquivo() {
    if (remove("registros.txt") == 0) {
        printf("Arquivo excluído com sucesso.\n");
    } else {
        printf("Erro ao excluir o arquivo.\n");
    }
}

int main() {
    int opcao;

    do {
        printf("Menu:\n");
        printf("1. Criar o arquivo de dados\n");
        printf("2. Incluir um registro no arquivo\n");
        printf("3. Excluir um vendedor do arquivo\n");
        printf("4. Alterar o valor de uma venda no arquivo\n");
        printf("5. Imprimir os registros\n");
        printf("6. Excluir o arquivo de dados\n");
        printf("7. Finalizar o programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                criarArquivo();
                break;
            case 2:
                incluirRegistro();
                break;
            case 3:
                excluirRegistro();
                break;
            case 4:
                alterarVenda();
                break;
            case 5:
                imprimirRegistros();
                break;
            case 6:
                excluirArquivo();
                break;
            case 7:
                printf("Programa finalizado.\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 7);

    return 0;
}
