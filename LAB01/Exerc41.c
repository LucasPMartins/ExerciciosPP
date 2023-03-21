#include <stdio.h>
#include <math.h>

int main ()
{
    float r2;
    float r3;
    float r;
    float valor;
    float horas;
    printf ("Digite o valor da hora de trabalho:R$");
    scanf("%f", &valor);
    printf ("Digite o numero de horas trabalhadas no mes:");
    scanf("%f", &horas);
    r = valor*horas;
    r2 = r*0.10;
    r3 = r2 + r;
    printf("O salario sera R$%f", r3);
    return 0;
}