#include <stdio.h>
#include <math.h>

int main ()
{
    int p;
    int g1;
    int g2;
    int g3;
    p = 780000;
    printf("O premio eh de R$780000.00\n");
    g1 = p*0.46;
    g2 = p*0.32;
    g3 = p-g1-g2;
    printf("O primeiro ganhador recebera:R$%d\n", g1);
    printf("O segundo ganhador recebera:R$%d\n", g2);
    printf("O terceiro ganhador recebera:R$%d\n", g3);
    return 0;
}