#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float C;
    float K;
    scanf ("%f", &K);
     C = K-273.15;
    printf("A temperatura %f em Kelvin convertida Celsius eh %f", K, C);
    return 0;
}