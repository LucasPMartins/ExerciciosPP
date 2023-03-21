#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float K;
    float M;
    scanf ("%f", &M);
    K = M*3.6;
    printf("A conversao de %f m/s em %f km/h", M, K);
    return 0;
}