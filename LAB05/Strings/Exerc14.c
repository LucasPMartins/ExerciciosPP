#include <stdio.h>
#include <string.h>

int main (){
    char str1[100];
    char str2[100];
    int N,len1,len2;
    int concatene;
    printf("Digite a string str1:");
    fgets(str1,100,stdin);
    printf("Digite a string str2:");
    fgets(str2,100,stdin);
    printf("Digite um valor inteiro positivo N:");
    scanf("%d",&N);
    len1 = strlen(str1) - 1; // Subtrai 1 para remover o caractere de quebra de linha
    len2 = strlen(str2) - 1; // Subtrai 1 para remover o caractere de quebra de linha
    if (N > len2) {
        N = len2;
    }
    if (len1 + N > 100 - 1) {
        N = 100 - len1 - 1;
    }
    strncat(str1, str2, N);
    printf("A nova string concatenada e: %s", str1);
    return 0;

}