#include <stdio.h>
#include <math.h>

int main ()
{
    float r2;
    float r4;
    float r3;
    float r;
    float sb;
    printf("Digite o salario do funcionario:R$");
    scanf("%f", &sb);
    r = sb*0.05;
    r2 = r + sb;
    r3 = r2*0.07;
    r4 = r2 - r3;
    printf("O salario do funcionario eh R$%f", r4);
    return 0;
}