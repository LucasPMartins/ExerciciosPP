#include<stdio.h>
#include<math.h>

/*Faça uma função que receba 3 números inteiros como parâmetro, representando horas,
minutos e segundos, e os converta em segundos.*/

int conv(int hora,int minuto,int segundo);

int main(){
    int segundo,minuto,hora;
    int totalseg;
    printf("Digite um numero inteiro para horas:");
    scanf("%d",&hora);
    printf("Digite um numero inteiro para minutos:");
    scanf("%d",&minuto);
    printf("Digite um numero inteiro para segundos:");
    scanf("%d",&segundo);
    totalseg = conv(hora, minuto, segundo);
    printf("Convertendo em segundos temos: %d",totalseg);
    return 0;
}

int conv(int hora,int minuto,int segundo){
   int totalseg;
   totalseg = (hora*3600) + (minuto*60) + segundo;
   return totalseg;
}