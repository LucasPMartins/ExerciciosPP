#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int x,y,z;
    float r;
    char letra;

    printf("Escolha uma das opcoes abaixo\n");
    printf("(a) Geometrica\n");
    printf("(b) Ponderada\n");
    printf("(c) Harmonica\n");
    printf("(d) Aritmetica\n");
    scanf("%c",&letra);

    printf("Digite um numero inteiro:");
    scanf("%d",&x);
    printf("Digite um numero inteiro:");
    scanf("%d",&y);
    printf("Digite um numero inteiro:");
    scanf("%d",&z);
    
    switch (letra)
    {
    case 'a':
        r = (float)cbrt(x*y*z);
        printf("O resultado eh %.2f",r);
        break;
    case 'b':
        r = (float)((1+x)+(2+y)+(3+z))/3;
        printf("O resultado eh %.2f",r);
        break;
    case 'c':
        r = (float)1/((1/x)+(1/y)+(1/y));
        printf("O resultado eh %.2f",r);
        break;
    case 'd':
        r = (float)(x+y+z)/3;
        printf("O resultado eh %.2f",r);
        break;
    default: printf("Opcao nao existentem");
        break;
    }

    return 0;
    
}