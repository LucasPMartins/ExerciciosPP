#include<stdio.h>
#include<stdlib.h>

/* Faça um programa que receba a altura e o peso 
de uma pessoa. De acordo com a tabela a seguir, 
verifique e mostra qual a classificação dessa pessoa.*/

int main()
{
    float altura;
    float peso;

    printf("Digite sua altura:");
    scanf("%f",&altura);
    printf("Digite seu peso:");
    scanf("%f",&peso);

    if(altura<1.20){
        if(peso<60){printf("Sua classificao eh A");}
        if(peso>=60&&peso<=90){printf("Sua classificao eh D");}
        if(peso>90){printf("Sua classificao eh G");}
    }
    if(altura>=1.20&&altura<=1.70){
        if(peso<60){printf("Sua classificao eh B");}
        if(peso>=60&&peso<=90){printf("Sua classificao eh E");}
        if(peso>90){printf("Sua classificao eh H");}
    }
    if(altura>1.70){
        if(peso<60){printf("Sua classificao eh C");}
        if(peso>=60&&peso<=90){printf("Sua classificao eh F");}
        if(peso>90){printf("Sua classificao eh I");}
    }
    else{printf("numeros invalidos!");}
    return 0;
}