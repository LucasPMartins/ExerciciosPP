#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/*Faça um programa que leia números do teclado e os armazene em um
vetor alocado dinamicamente. O usuário irá digitar uma sequência de
números, sem limite de quantidade. Os números serão digitados um a
um e, sendo que caso ele deseje encerrar a entrada de dados, ele irá
digitar o número ZERO. Os dados devem ser armazenados na memória
deste modo:
a) Inicie com um vetor de tamanho 10 alocado dinamicamente;
b) Após, caso o vetor alocado esteja cheio, aloque um novo vetor do
tamanho do vetor anterior adicionado espaço para mais 10 valores
(tamanho N+10, onde N inicia com 10);
c) Copie os valores já digitados da área inicial para esta área maior e
libere a memória da área inicial;
d) Repita este procedimento de expandir dinamicamente com mais 10
valores o vetor alocado cada vez que o mesmo estiver cheio. Assim o
vetor irá ser “expandido” de 10 em 10 valores.
Ao final, exiba o vetor lido. Não use a função REALLOC.*/

int main() {
    int tamanho = 10;
    int indice = 0;
    int numero;
    int* vetor = (int*)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }
    printf("Digite uma sequencia de numeros (0 para encerrar):\n");
    while (1) {
        scanf("%d", &numero);
        if (numero == 0){
            break;
        }
        vetor[indice] = numero;
        indice++;
        if (indice == tamanho) {
            tamanho += 10;
            int* novo_vetor = (int*)malloc(tamanho * sizeof(int));
            if (novo_vetor == NULL) {
                printf("Erro na alocacao de memoria.\n");
                free(vetor);
                return 1;
            }
            for (int i = 0; i < indice; i++) {
                novo_vetor[i] = vetor[i];
            }
            free(vetor);
            vetor = novo_vetor;
        }
    }
    printf("Vetor lido:\n");
    for (int i = 0; i < indice; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    free(vetor);
    return 0;
}
