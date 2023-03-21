#include <stdio.h>
#include <math.h>

int main ()
{
    float s;
    float ns;
    float nss;
    printf("Digite um valor do salario do funcionario:");
    scanf("%f", &s);
    ns = s*0.25;
    nss = s + ns;
    printf("O valor do novo salario do funcionario eh:%f", nss);
    return 0;
}