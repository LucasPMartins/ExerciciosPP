#include<stdio.h>

int main()
{
    float M;//area metros quadrados
    float H;//hectares
    scanf("%f", &M);
    H = M*0.0001;
    printf("%f metros quadrados eh igual a %f hectares", M, H);
    return 0;
}