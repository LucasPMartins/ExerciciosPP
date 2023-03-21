#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float K;
    float M;
    scanf ("%f", &M);
    K = 1.61*M;
    printf("A conversao de %f milhas para kilometros eh %f ", M, K);
    return 0;
}