#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float C;
    float F;
    scanf ("%f", &C);
    F = C*(9.0/5.0)+32.0;
    printf("A temperatura %f em graus Celsius convertida em Fahrenheit eh %f", C, F);
    return 0;
}