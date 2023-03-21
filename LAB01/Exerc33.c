#include<stdio.h>

int main ()
{
    int lado;
    int area;
    printf("Digite um numero para o lado do quadrado:");
    scanf("%d", &lado);
    area = lado*lado;
    printf ("A area do quadrado eh: %d", area);
    return 0;
}
