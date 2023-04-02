#include <stdio.h>

int main() 
{
    int num;
    int counter = 1;
    int i,j;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
    }
    
    return 0;
    
}