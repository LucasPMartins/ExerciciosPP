#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char sobrenome[100];
    int anoNascimento;
} Aluno;

void cadastrarAlunos(Aluno** alunos, int numAlunos) {
    int i;

    for (i = 0; i < numAlunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &(alunos[i]->matricula));
        printf("Sobrenome: ");
        scanf("%s", alunos[i]->sobrenome);
        printf("Ano de Nascimento: ");
        scanf("%d", &(alunos[i]->anoNascimento));
        printf("\n");
    }
}

void gravarAlunosEmArquivo(Aluno** alunos, int numAlunos, const char* nomeArquivo) {
    FILE* arquivo;
    int i;

    arquivo = fopen(nomeArquivo, "wb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fwrite(&numAlunos, sizeof(int), 1, arquivo);

    for (i = 0; i < numAlunos; i++) {
        fwrite(alunos[i], sizeof(Aluno), 1, arquivo);
    }

    fclose(arquivo);
}

void mostrarAlunos(Aluno** alunos, int numAlunos) {
    int i;

    for (i = 0; i < numAlunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matrícula: %d\n", alunos[i]->matricula);
        printf("Sobrenome: %s\n", alunos[i]->sobrenome);
        printf("Ano de Nascimento: %d\n", alunos[i]->anoNascimento);
        printf("\n");
    }
}

void liberarMemoria(Aluno** alunos, int numAlunos) {
    int i;

    for (i = 0; i < numAlunos; i++) {
        free(alunos[i]);
    }

    free(alunos);
}

int main() {
    Aluno** alunos = NULL;
    int numAlunos;
    int opcao;
    const char* nomeArquivo = "alunos.dat";
    FILE* arquivo;
    int i;

    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);

    alunos = (Aluno**)malloc(numAlunos * sizeof(Aluno*));

    for (i = 0; i < numAlunos; i++) {
        alunos[i] = (Aluno*)malloc(sizeof(Aluno));
    }

    printf("Escolha uma opção:\n");
    printf("1. Cadastrar Alunos\n");
    printf("2. Carregar Alunos do Arquivo\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        cadastrarAlunos(alunos, numAlunos);
        gravarAlunosEmArquivo(alunos, numAlunos, nomeArquivo);
    } else if (opcao == 2) {
        arquivo = fopen(nomeArquivo, "rb");

        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo.\n");
            liberarMemoria(alunos, numAlunos);
            return 1;
        }

        fread(&numAlunos, sizeof(int), 1, arquivo);

        alunos = (Aluno**)realloc(alunos, numAlunos * sizeof(Aluno*));

        for (i = 0; i < numAlunos; i++) {
            alunos[i] = (Aluno*)malloc(sizeof(Aluno));
            fread(alunos[i], sizeof(Aluno), 1, arquivo);
        }

        fclose(arquivo);
    } else {
        printf("Opção inválida.\n");
        liberarMemoria(alunos, numAlunos);
        return 1;
    }

    mostrarAlunos(alunos, numAlunos);
    liberarMemoria(alunos, numAlunos);

    return 0;
}
