#include <stdio.h>
#include <math.h>

int main ()
{
    float r2;
    float r3;
    float r;
    float dias;
    printf ("Digite o numero de dias trabalhados:");
    scanf("%f", &dias);
    r = 30*dias;
    r2 = r*0.08;
    r3 = r-r2;
    printf("A quantia liquida que o encanador\n recebera descontados 8 porcento de imposto de renda eh %f", r3);
    return 0;
}