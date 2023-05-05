#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int i, count = 0;

    printf("Digite uma string contendo 0's e 1's: ");
    scanf("%s", str);
    //strlen faz a leitura de quantos caracteres tem a string
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == '1') {
            count++;
        }
    }

    printf("O numero de 1's na string eh: %d", count);

    return 0;
}