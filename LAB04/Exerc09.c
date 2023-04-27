#include<stdio.h>
#include<math.h>

/*Faça uma função que receba a altura e o raio de um cilindro circular e 
retorne o volume do cilindro. O volume de um cilindro circular é calculado 
por meio da seguinte fórmula: 𝑉 = pi*raio^2*altura, onde pi = 3.141592*/

float volume(int a,int b);

int main ()
{
    int altura,raio;
    float v;
    printf("Digite um valor para a Altura:");
    scanf("%d",&altura);
    printf("Digite um valor para o Raio:");
    scanf("%d",&raio);
    v = volume(altura,raio);
    printf("O volume do cilindro circular eh %.2f",v);
    return 0;
}

float volume(int a,int b){
    const float pi = 3.141592;
    float volume;
    volume = pi*pow(b,2)*a;
    return volume;
}