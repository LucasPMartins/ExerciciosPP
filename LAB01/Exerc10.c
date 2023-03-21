#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float K;
    float M;
    scanf ("%f", &K);
     M = K/3.6;
    printf("A conversao de %f km/h em %f m/s", K, M);
    return 0;
}