#include<stdio.h>
#include<stdlib.h>

/*Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga
ao vendedor. Para calcular a comissão, considere a tabela abaixo:
*/

int main()
{
    float valor1;
    float venda;
    float comissao;

    printf("Digite o valor da venda:R$");
    scanf("%f",&venda);

    if(venda>=100000){
        valor1 = (venda*16)/100;
        comissao = 700 + valor1;
        printf("O valor da comissao eh %.2f",comissao);
    }
    if(venda<100000&&venda>=80000){
        valor1 = (venda*14)/100;
        comissao = 650 + valor1;
        printf("O valor da comissao eh %.2f",comissao);
    }
    if(venda<80000&&venda>=60000){
        valor1 = (venda*14)/100;
        comissao = 600 + valor1;
        printf("O valor da comissao eh %.2f",comissao);
    }
    if(venda<60000&&venda>=40000){
        valor1 = (venda*14)/100;
        comissao = 550 + valor1;
        printf("O valor da comissao eh %.2f",comissao);
    }
    if(venda<40000&&venda>=20000){
        valor1 = (venda*14)/100;
        comissao = 500 + valor1;
        printf("O valor da comissao eh %.2f",comissao);
    }
    if(venda<20000){
        valor1 = (venda*14)/100;
        comissao = 400 + valor1;
        printf("O valor da comissao eh %.2f",comissao);
    }
    return 0;

}