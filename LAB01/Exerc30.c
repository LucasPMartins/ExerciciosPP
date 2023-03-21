#include<stdio.h>

int main ()
{
    float R;
    float D;
    float d;
    printf ("Digite o valor da cotacao de dolar:");
    scanf("%f", &d);
    printf ("Digite uma valor em reais para a conversao:");
    scanf ("%f", &R);
    D = R/d;
    printf ("%f reais hoje convertidos em dolares eh %f", R, D);
    return 0;
}