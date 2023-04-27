#include<stdio.h>
#include<math.h>

/*4. Faça uma função que receba a distância em Km e a quantidade de litros de gasolina
consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma
mensagem de acordo com a tabela abaixo*/

float consumo(float a,float b);

int main ()
{
    float litros,distancia;
    printf("Digite a distancia em KM:");
    scanf("%f",&distancia);
    printf("Digite a quantidade de litros:");
    scanf("%f",&litros);
    consumo(distancia,litros);
    return 0;
}

float consumo(float a,float b){
    float consumokml;
    consumokml = a/b;
    if(consumokml<8){
        return printf("Venda o carro!");
    }
    if(consumokml>=8&&consumokml<=14){
        return printf("Economico!");
    }
    if(consumokml>14){
        return printf("Super Economico!");
    }
    else{
        return printf("Erro!");
    }
}