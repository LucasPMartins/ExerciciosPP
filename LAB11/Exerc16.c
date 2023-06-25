#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*.Faça um programa que recebe um vetor de 10 números, converta cada
um desses números para binário e grave a sequência de 0s e 1s em um
arquivo texto. Cada número deve ser gravado em uma linha.*/

void decimalToBinary(int number, char *binary) {
    if (number == 0) {
        binary[0] = '0';
        binary[1] = '\0';
        return;
    }

    int index = 0;
    while (number > 0) {
        binary[index] = (number % 2) + '0';
        number /= 2;
        index++;
    }
    binary[index] = '\0';

    // Inverte a string binária
    int start = 0;
    int end = index - 1;
    while (start < end) {
        char temp = binary[start];
        binary[start] = binary[end];
        binary[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int numbers[10];
    char binary[32];  // Assume que o número máximo tem 32 bits
    FILE *file;
    int i;

    // Recebe os 10 números do usuário
    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    // Abre o arquivo para escrita
    file = fopen("binario.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    // Converte cada número para binário e grava no arquivo
    for (i = 0; i < 10; i++) {
        decimalToBinary(numbers[i], binary);
        fprintf(file, "%s\n", binary);
    }

    // Fecha o arquivo
    fclose(file);

    printf("Dados gravados no arquivo binario.txt.\n");

    return 0;
}

