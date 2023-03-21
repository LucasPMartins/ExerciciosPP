#include <stdio.h>
#include <math.h>

int main (){

    float premio;
    float ganhador1;
    float ganhador2;
    float ganhador3;
    float aposta1, aposta2, aposta3;
    float apostatotal;
    float porcentagem1, porcentagem2, porcentagem3;
    printf("Digite o valor do premio:\n");
    scanf("%f", &premio);
    printf("Digite o valor do apostador 1:\n");
    scanf("%f", &aposta1);
    printf("Digite o valor do apostador 2:\n");
    scanf("%f", &aposta2);
    printf("Digite o valor do apostador 3:\n");
    scanf("%f", &aposta3);
    apostatotal = aposta1 + aposta2 + aposta3;
    porcentagem1 = aposta1/apostatotal;
    porcentagem2 = aposta2/apostatotal;
    porcentagem3 = aposta3/apostatotal;
    ganhador1 = porcentagem1*premio;
    ganhador2 = porcentagem2*premio;
    ganhador3 = porcentagem3*premio;
    printf("O apostador 1 recebeu: R$%.2f\n", ganhador1);
    printf("O apostador 2 recebeu: R$%.2f\n", ganhador2);
    printf("O apostador 3 recebeu: R$%.2f\n", ganhador3);
    return 0;
}