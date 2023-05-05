#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len, palindromo = 1;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    len = strlen(str) - 1; // Subtrai 1 para remover o caractere de quebra de linha

    for (i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str[i] != str[j]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("A string eh um palindromo.");
    } else {
        printf("A string nao eh um palindromo.");
    }

    return 0;
}