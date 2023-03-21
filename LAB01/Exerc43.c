#include <stdio.h>
#include <math.h>

int main ()
{
    float T;
    float d10;
    float r;
    float r1;
    float r3;
    float r4;
    printf("Digite um valor total:R$");
    scanf("%f", &T);
    d10 = T*0.10;
    r = T-d10;
    r1 = r/3;
    r3 = r*0.05;
    r4 = T*0.05;
    printf("Total a pagar com desconto de 10 porcento R$%.2f\n", r);
    printf("valor de cada parcela, no parcelamento (3x) sem juros R$%.2f \n", r1);
    printf("Comissao do vendedor, no caso da venda ser a vista (5 porcento sobre o valor com desconto) R$%.2f\n", r3);
    printf("Comissao do vendedor, no caso da venda ser parcelada (5 porcento sobre o valor total) R$%.2f\n", r4);
    return 0;
}