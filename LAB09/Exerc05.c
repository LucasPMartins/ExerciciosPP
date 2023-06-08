#include<stdio.h>

/*Escreva uma função que dado um número real passado como parâmetro,
retorne a parte inteira e a parte fracionária deste número. Escreva um
programa que chama esta função.
Protótipo: void frac(float num, int *inteiro, float *frac);*/

void frac(float num, int *inteiro, float *frac);

int main(){
    float x;
    int inteira;
    float fracinada;
    printf("Digite um numero real:");
    scanf("%f",&x);
    frac(x,&inteira,&fracinada);
    printf("Numero:%f\n",x);
    printf("Parte inteira:%i\n",inteira);
    printf("Parte Fracionda:%f\n",fracinada);
}

void frac(float num, int *inteiro, float *frac){
    *inteiro = (int)num;
    *frac = num - *inteiro;
}