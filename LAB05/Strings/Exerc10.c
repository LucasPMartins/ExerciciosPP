#include<stdio.h>
#include<string.h>

int main(){
    char nome[50];
    float valor,desconto,valorcomdesconto;
    printf("Digite o nome da mercadoria:");
    fgets(nome,50,stdin);
    printf("Digite o valor da mercadoria:R$");
    scanf("%f",&valor);
    desconto = (valor*10)/100;
    valorcomdesconto = valor - desconto;
    printf("---Nota Fiscal---\n");
    printf("O nome da mercadoria eh %s",nome);
    printf("O valor total a ser pago eh %.2f\n",valor);
    printf("O valor do desconto eh %.2f\n",desconto);
    printf("O valor a ser pago a vista eh %.2f\n",valorcomdesconto);
    return 0;

}