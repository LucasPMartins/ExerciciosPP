#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Implemente um controle simples de mercadorias em uma despensa
doméstica. Para cada produto armazene um código numérico, descrição
e quantidade atual. O programa deve ter opções para entrada e retirada
de produtos, bem como um relatório geral e um de produtos não
disponíveis. Armazene os dados em arquivo binário.*/

typedef struct {
    int codigo;
    char descricao[50];
    int quantidade;
} Produto;

void cadastrarProduto(FILE* arquivo) {
    Produto produto;

    printf("Cadastrar Produto\n");

    printf("Código: ");
    scanf("%d", &produto.codigo);

    printf("Descrição: ");
    scanf(" %[^\n]", produto.descricao);

    printf("Quantidade: ");
    scanf("%d", &produto.quantidade);

    fwrite(&produto, sizeof(Produto), 1, arquivo);

    printf("Produto cadastrado com sucesso.\n");
}

void retirarProduto(FILE* arquivo) {
    int codigo;
    Produto produto;

    printf("Retirar Produto\n");

    printf("Código: ");
    scanf("%d", &codigo);

    while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
        if (produto.codigo == codigo) {
            int quantidadeRetirada;

            printf("Descrição: %s\n", produto.descricao);
            printf("Quantidade atual: %d\n", produto.quantidade);

            printf("Quantidade a ser retirada: ");
            scanf("%d", &quantidadeRetirada);

            if (quantidadeRetirada <= produto.quantidade) {
                produto.quantidade -= quantidadeRetirada;
                fseek(arquivo, -sizeof(Produto), SEEK_CUR);
                fwrite(&produto, sizeof(Produto), 1, arquivo);
                printf("Produto retirado com sucesso.\n");
            } else {
                printf("Quantidade insuficiente.\n");
            }

            return;
        }
    }

    printf("Produto não encontrado.\n");
}

void relatorioGeral(FILE* arquivo) {
    Produto produto;

    printf("Relatório Geral\n");

    rewind(arquivo);

    while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
        printf("Código: %d\n", produto.codigo);
        printf("Descrição: %s\n", produto.descricao);
        printf("Quantidade: %d\n", produto.quantidade);
        printf("--------------------\n");
    }
}

void relatorioIndisponiveis(FILE* arquivo) {
    Produto produto;
    int encontrados = 0;

    printf("Relatório de Produtos Indisponíveis\n");

    rewind(arquivo);

    while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
        if (produto.quantidade == 0) {
            printf("Código: %d\n", produto.codigo);
            printf("Descrição: %s\n", produto.descricao);
            printf("--------------------\n");
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum produto indisponível encontrado.\n");
    }
}

int main() {
    FILE* arquivo;
    int opcao;

    arquivo = fopen("despensa.bin", "r+b");

    if (arquivo == NULL) {
        arquivo = fopen("despensa.bin", "w+b");
        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo.\n");
            return 1;
        }
    }

    do {
        printf("Controle de Mercadorias - Despensa Doméstica\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Retirar Produto\n");
        printf("3. Relatório Geral\n");
        printf("4. Relatório de Produtos Indisponíveis\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProduto(arquivo);
                break;
            case 2:
                retirarProduto(arquivo);
                break;
            case 3:
                relatorioGeral(arquivo);
                break;
            case 4:
                relatorioIndisponiveis(arquivo);
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }

        printf("\n");

    } while (opcao != 0);

    fclose(arquivo);

    return 0;
}