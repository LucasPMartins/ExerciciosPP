#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float C;
    float K;
    scanf ("%f", &C);
    K = C + 273.15;
    printf("A temperatura %f em Celsius convertida Kelvin eh %f", C, K);
    return 0;
}