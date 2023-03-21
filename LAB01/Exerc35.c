#include <stdio.h>
#include <math.h>

int main ()
{
    float h;
    float a;
    float b;
    printf("Digite um valor para \"a\":");
    scanf("%f", &a);
    printf("Digite um valor para \"b\":");
    scanf("%f", &b);
    h = sqrt((a*a)+(b*b));
    printf("o valor da hipotenusa eh %f", h);
    return 0;
}