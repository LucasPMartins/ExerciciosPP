#include<stdio.h>
#include<stdlib.h>

/*As tarifas de certo parque de estacionamento são as seguintes:
- 1a e 2a hora - R$1,00 cada;
- 3a e 4a hora - R$1,40 cada;
- 5a hora e seguintes - R$2,00 cada
O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem
estacionar durante 61 minutos pagará por duas horas, que é o mesmo que pagaria se tivesse
permanecido 120 minutos. Os momentos de chegada ao parque e partida deste são
apresentados na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par
12 50 representará “dez para a uma da tarde”. Pretende-se criar um programa que, lidos pelo
teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo
estacionamento. Admite-se que a chegada e a partida se dão com intervalo não superior a 24
horas. Portanto, se uma dada hora de chegada for superior à da partida, isso não é uma situação
de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.*/

int main()
{
    int horac,minutoc;
    int horap,minutop;
    int soma;
    int subhora,subminuto;
    int convehora;
    float valor;
    int horasup;

    printf("Digite o horaio de chegada:");
    scanf("%d %d",&horac,&minutoc);
    printf("Digite o horaio de partida:");
    scanf("%d %d",&horap,&minutop);

    subhora = horap - horac;
    subminuto = minutop + minutoc;
    convehora = subhora*60;
    soma = convehora + subminuto;

    if(soma>=1&&soma<=120){
       if(soma>=1&&soma<=60){
        valor = 1;
        printf("Voce pagara R$%.2f",valor);}
       if(soma>60&&soma<=120){
        valor = 2;
        printf("Voce pagara R$%.2f",valor);}
    }
    if(soma>120&&soma<=240){
        if(soma>120&&soma<=180){
        valor = 2 + 1.40;
        printf("Voce pagara R$%.2f",valor);}
        if(soma>180&&soma<=240){
        valor = 2 + (2*1.40);
        printf("Voce pagara R$%.2f",valor);}
    }   
    if(soma>240&&soma<=300){
        valor = 4 + (2*1.40);
        printf("Voce pagara R$%.2f",valor);
    }
    while(soma>300)
    {
        horasup = (soma-300)/60;
        valor = 4 + (2*1.40) + 2*horasup;
        printf("Voce pagara R$%.2f",valor);
        soma = soma-(soma-300);
    }

    return 0;

}