#include<stdio.h>
int main ()
{
    float raio;
    float area;
    const float pi = 3.141592;
    printf("Digite um numero para o raio do circulo:");
    scanf("%f", &raio);
    area = pi*raio*raio;
    printf ("A area do circulo eh: %f", area);
    return 0;
}