#include<stdio.h>
#include<math.h>

/*Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em
graus Fahrenheit. A fórmula de conversão é: 𝐹 = 𝐶 ∗ (9,0/5,0) + 32,0, sendo F a temperatura
em Fahrenheit e C a temperatura em Celsius.*/

float conversor(float a);

int main(){
    float grauc;
    float conversao = 0;
    printf("Digite o valor para a temperatura em grau Celsius:");
    scanf("%f",&grauc);
    conversao = conversor(grauc);
    printf("A temperatura em grau Celsius convertida em Fahrenheit eh %.2f",conversao);
    return 0;
}

float conversor(float a){
    float f;
    f = a*(9/5) + 32; 
    return f;
}

