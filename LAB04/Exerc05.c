#include<stdio.h>
#include<math.h>

/*Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo
que o raio é passado por parâmetro.*/

float volume(float raio);

int main(){
    float volume1;
    float r;
    printf("Digite um valor para o raio:");
    scanf("%f",&r);
    volume1 = volume(r);
    printf("volume = %.2f",volume1);
    return 0;
}

float volume(float raio){
    float volume;
    const float pi = 3.1415;
    volume = (4.0/3.0)*pi*pow(raio,3);
    return volume;
}