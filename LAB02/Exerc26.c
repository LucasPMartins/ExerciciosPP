#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int km;
    int litros;
    int consumo;

    printf("Digite a distancia em Km:");
    scanf("%d",&km);
    printf("Digite a quantidade de litros de gasolina consumidos:");
    scanf("%d",&litros);

    consumo = km/litros;

    if(consumo<=8){
        printf("Venda o carro!");  
    }
    if((consumo>8)&&(consumo<=14)){
        printf("Economico!");  
    }
    if(consumo>14){
        printf("Super economico!");  
    }
    return 0;
}