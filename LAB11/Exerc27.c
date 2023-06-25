#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUNOS 100
#define NOTA_MINIMA 6.0

typedef struct {
    char nome[100];
    float notas[3];
    float media;
} Aluno;

typedef struct {
    Aluno alunos[MAX_ALUNOS];
    int numAlunos;
} Turma;

void definirInformacoesTurma(Turma* turma) {
    printf("Digite o número de alunos na turma: ");
    scanf("%d", &(turma->numAlunos));
    printf("\n");
}

void inserirAluno(Turma* turma) {
    if (turma->numAlunos >= MAX_ALUNOS) {
        printf("Limite máximo de alunos atingido.\n");
        return;
    }

    Aluno novoAluno;

    printf("Digite o nome do aluno: ");
    scanf("%s", novoAluno.nome);

    printf("Digite as notas do aluno:\n");
    for (int i = 0; i < 3; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &(novoAluno.notas[i]));
    }

    novoAluno.media = (novoAluno.notas[0] + novoAluno.notas[1] + novoAluno.notas[2]) / 3.0;

    turma->alunos[turma->numAlunos] = novoAluno;
    turma->numAlunos++;

    printf("Aluno inserido com sucesso.\n");
    printf("\n");
}

void exibirAlunosMedias(Turma* turma) {
    printf("Alunos e Médias:\n");
    for (int i = 0; i < turma->numAlunos; i++) {
        printf("Aluno: %s\n", turma->alunos[i].nome);
        printf("Média: %.2f\n", turma->alunos[i].media);
        printf("\n");
    }
}

void exibirAlunosAprovados(Turma* turma) {
    printf("Alunos Aprovados:\n");
    for (int i = 0; i < turma->numAlunos; i++) {
        if (turma->alunos[i].media >= NOTA_MINIMA) {
            printf("Aluno: %s\n", turma->alunos[i].nome);
            printf("Média: %.2f\n", turma->alunos[i].media);
            printf("\n");
        }
    }
}

void exibirAlunosReprovados(Turma* turma) {
    printf("Alunos Reprovados:\n");
    for (int i = 0; i < turma->numAlunos; i++) {
        if (turma->alunos[i].media < NOTA_MINIMA) {
            printf("Aluno: %s\n", turma->alunos[i].nome);
            printf("Média: %.2f\n", turma->alunos[i].media);
            printf("\n");
        }
    }
}

void salvarDadosEmDisco(Turma* turma) {
    FILE* arquivo;
    int i;

    arquivo = fopen("alunos.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "Número de alunos: %d\n", turma->numAlunos);
    fprintf(arquivo, "Alunos e Médias:\n");

    for (i = 0; i < turma->numAlunos; i++) {
        fprintf(arquivo, "Aluno: %s\n", turma->alunos[i].nome);
        fprintf(arquivo, "Média: %.2f\n", turma->alunos[i].media);
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);

    printf("Dados salvos em disco.\n");
    printf("\n");
}

void liberarMemoria(Turma* turma) {
    turma->numAlunos = 0;
}

int main() {
    Turma turma;
    int opcao;

    turma.numAlunos = 0;

    while (1) {
        printf("Menu:\n");
        printf("1. Definir informações da turma\n");
        printf("2. Inserir aluno e notas\n");
        printf("3. Exibir alunos e médias\n");
        printf("4. Exibir alunos aprovados\n");
        printf("5. Exibir alunos reprovados\n");
        printf("6. Salvar dados em disco\n");
        printf("7. Sair do programa\n");
        printf("\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao) {
            case 1:
                definirInformacoesTurma(&turma);
                break;
            case 2:
                inserirAluno(&turma);
                break;
            case 3:
                exibirAlunosMedias(&turma);
                break;
            case 4:
                exibirAlunosAprovados(&turma);
                break;
            case 5:
                exibirAlunosReprovados(&turma);
                break;
            case 6:
                salvarDadosEmDisco(&turma);
                break;
            case 7:
                liberarMemoria(&turma);
                printf("Programa encerrado.\n");
                return 0;
            default:
                printf("Opção inválida.\n");
                printf("\n");
        }
    }

    return 0;
}
