#include<stdio.h>
#include<stdlib.h>

/*Escrever um programa que leia o código do produto 
escolhido do cardápio de uma lanchonete e a
quantidade. O programa deve calcular o valor a ser 
pago por aquele lanche.Considere que a cada execução
somente será calculado um pedido. O cardápio da 
lanchonete segue o padrão abaixo*/

int main()
{
    int codigo;
    float pagar;
    int quantidade;

    printf("Digite o codigo do produto:");
    scanf("%d",&codigo);
    printf("Digite a quantidade:");
    scanf("%d",&quantidade);

    if(codigo>=100&&codigo<=106){
        if(codigo==100){pagar=1.20*quantidade;printf("O Total a pagar eh R$%.2f",pagar);}
        if(codigo==101){pagar=1.30*quantidade;printf("O Total a pagar eh R$%.2f",pagar);}
        if(codigo==102){pagar=1.50*quantidade;printf("O Total a pagar eh R$%.2f",pagar);}
        if(codigo==103){pagar=1.20*quantidade;printf("O Total a pagar eh R$%.2f",pagar);}
        if(codigo==104){pagar=1.70*quantidade;printf("O Total a pagar eh R$%.2f",pagar);}
        if(codigo==105){pagar=2.20*quantidade;printf("O Total a pagar eh R$%.2f",pagar);}
        if(codigo==106){pagar=1.00*quantidade;printf("O Total a pagar eh R$%.2f",pagar);}
    }else{printf("Codigo invalido!");}

    return 0;

}