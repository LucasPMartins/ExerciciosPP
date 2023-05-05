#include <stdio.h>
#include <string.h>

int main() {
    char S[100];
    unsigned int i, j;

    printf("Digite uma string: ");
    fgets(S,100,stdin);

    printf("Digite dois inteiros nao-negativos i e j: ");
    scanf("%d %d", &i, &j);

    printf("O segmento de S[%d..%d] eh: ", i, j);

    for (int k = i; k <= j && S[k] != '\0'; k++) {
        printf("%c", S[k]);
    }

    return 0;
}