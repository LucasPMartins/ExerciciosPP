#include<stdio.h>
#include<stdlib.h>

/*. O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do
distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica,
de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor.*/

int main()
{

    float custof,comissao,imposto;
    float soma;

    printf("Digite o custo de fabrica:R$");
    scanf("%f",&custof);

    if(custof>=0&&custof<=12000){

        comissao = (custof*5)/100;
        imposto = 0;
        soma = custof+comissao+imposto;
        printf("O custo ao consumidor de um carro novo eh R$%.2f",soma);
    }
    if(custof>12000&&custof<=25000){

        comissao = (custof*10)/100;
        imposto = (custof*15)/100;
        soma = custof+comissao+imposto;
        printf("O custo ao consumidor de um carro novo eh R$%.2f",soma);
    }
    if(custof>25000){

        comissao = (custof*15)/100;
        imposto =  (custof*20)/100;;
        soma = custof+comissao+imposto;
        printf("O custo ao consumidor de um carro novo eh R$%.2f",soma);
    }

    return 0;

}