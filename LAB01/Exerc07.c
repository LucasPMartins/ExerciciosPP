#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float C;
    float F;
    scanf ("%f", &F);
    C = 5.0*(F- 32.0)/9.0;
    printf("A temperatura %f em graus Fahrenheit convertida Celsius eh %f", F, C);
    return 0;
}