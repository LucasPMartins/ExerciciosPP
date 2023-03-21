#include <stdio.h>
#include <math.h>

int main ()
{
    float p;
    float d;
    float v;
    printf("Digite um valor do produto:");
    scanf("%f", &p);
    d = p*0.12;
    v = p - d;
    printf("O valor do produto com desconto eh:%f", v);
    return 0;
}