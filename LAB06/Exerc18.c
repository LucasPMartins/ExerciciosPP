#include<stdio.h>
#include<string.h>
#define V 5 // Número de voos
#define A 5 // Número de aeroportos

/*Faça um programa que controle o fluxo de voos nos aeroportos de um país. Com V = 5 (voos)
e A = 5 (aeroportos) e:
- Crie e leia um vetor de voos, sendo que cada voo contém um código de aeroporto de
origem e um de destino;
- Crie um vetor de aeroportos, sendo que cada aeroporto contém seu código, quantidade
de voos que saem e quantidade de voos que chegam.
Nota: Cada aeroporto é identificado por um código inteiro entre 0 e (A-1). Não aceite
aeroportos de código inexistente*/

typedef struct {
    int origem;
    int destino;
} Voo;

typedef struct {
    int codigo;
    int voos_saindo;
    int voos_chegando;
} Aeroporto;

int main() {
    Voo voos[V];
    Aeroporto aeroportos[A];

    // Leitura dos voos
    printf("Informe os voos:\n");
    for (int i = 0; i < V; i++) {
        printf("Voo %d:\n", i + 1);
        printf("Aeroporto de origem: ");
        scanf("%d", &voos[i].origem);
        printf("Aeroporto de destino: ");
        scanf("%d", &voos[i].destino);

        // Verificação de código de aeroporto inválido
        if (voos[i].origem < 0 || voos[i].origem >= A || voos[i].destino < 0 || voos[i].destino >= A) {
            printf("Código de aeroporto inválido!\n");
            return 1;
        }

        // Atualização das informações dos aeroportos
        aeroportos[voos[i].origem].voos_saindo++;
        aeroportos[voos[i].destino].voos_chegando++;
    }

    // Exibição das informações dos aeroportos
    printf("\nInformações dos Aeroportos:\n");
    for (int i = 0; i < A; i++) {
        printf("Aeroporto %d:\n", i);
        printf("Voos saindo: %d\n", aeroportos[i].voos_saindo);
        printf("Voos chegando: %d\n", aeroportos[i].voos_chegando);
        printf("------------------\n");
    }

    return 0;
}