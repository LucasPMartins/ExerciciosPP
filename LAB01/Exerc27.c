#include<stdio.h>

int main()
{
    float M;//area metros quadrados
    float H;//hectares
    scanf("%f", &H);
    M = H*10000;
    printf("%f hectares eh igual a %f metros quadrados", H, M);
    return 0;
}