#include <stdio.h>
#include <math.h>

int main ()
{
    float h;
    float r;
    float V;
    const float pi = 3.141592;
    printf("Digite um valor para \"h\" altura do cilindro:");
    scanf("%f", &h);
    printf("Digite um valor para \"r\" raio do cilindro:");
    scanf("%f", &r);
    V = pi*(r*r)*h;
    printf("o volume do cilindro eh %f", V);
    return 0;
}