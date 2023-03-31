#include<stdio.h>
#include<stdlib.h>


/* Um produto vai sofrer aumento de acordo com a 
tabela abaixo. Leia o preço antigo, calculee escreva
o preço novo, e escreva uma mensagem em função do 
preço novo (de acordo com a segunda tabela)*/

int main()
{
    float precoantigo;
    float preconovo,preconovo1;

    printf("Digite o preco antigo do produto:R$");
    scanf("%f",&precoantigo);

    if(precoantigo<50.00&&precoantigo>0.00){
        preconovo = (precoantigo*5)/100;
        preconovo1 = preconovo+precoantigo;
        printf("O novo preco eh:R$%.2f\n",preconovo1);
        if(preconovo<=80&&preconovo>0){printf("Barato!");}
        if(preconovo>80&&preconovo<=120){printf("Normal!");}
        if(preconovo>120&&preconovo<=200){printf("Caro!");}
        if(preconovo>200){printf("Muito Caro!");}
    }
     if(precoantigo>=50.00&&precoantigo<=100.00){
        preconovo = (precoantigo*10)/100;
        preconovo1 = preconovo+precoantigo;
        printf("O novo preco eh:R$%.2f\n",preconovo1);
        if(preconovo<=80&&preconovo>0){printf("Barato!");}
        if(preconovo>80&&preconovo<=120){printf("Normal!");}
        if(preconovo>120&&preconovo<=200){printf("Caro!");}
        if(preconovo>200){printf("Muito Caro!");}
    }
     if(precoantigo>100.00){
        preconovo = (precoantigo*15)/100;
        preconovo1 = preconovo+precoantigo;
        printf("O novo preco eh:R$%.2f\n",preconovo1);
        if(preconovo<=80&&preconovo>0){printf("Barato!");}
        if(preconovo>80&&preconovo<=120){printf("Normal!");}
        if(preconovo>120&&preconovo<=200){printf("Caro!");}
        if(preconovo>200){printf("Muito Caro!");}
    }else{printf("Valor invalido!");}
}