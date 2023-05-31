#include<stdio.h>
#include<string.h>

/*Escreva um programa que receba um array de inteiros com 10 elementos
digitados pelo usuário e encontre o menor (min) e o maior (max) elemento
desse array. Utilize ponteiros tanto para acessar o array quanto para acessar
as variáveis min e max, ou seja, são necessários pelo menos 3 ponteiros.*/


void findMinMax(int *array, int size, int *min, int *max) {
    *min = *max = array[0]; // Inicializa min e max com o primeiro elemento do array
    for (int i = 1; i < size; i++) {
        if (array[i] < *min) {
            *min = array[i]; // Atualiza o valor mínimo
        }
        if (array[i] > *max) {
            *max = array[i]; // Atualiza o valor máximo
        }
    }
}

int main() {
    int elementos[10];
    int min, max;
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &elementos[i]);
    }
    findMinMax(elementos, 10, &min, &max);
    printf("O menor numero eh: %d\n", min);
    printf("O maior numero eh: %d\n", max);
    return 0;
}
