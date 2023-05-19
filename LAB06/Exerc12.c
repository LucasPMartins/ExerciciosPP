#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

/*Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu naipe
e seu valor). Implemente a parte de distribuição (sorteio) de cartas para 2 jogadores,
considerando que cada jogador irá receber 3 cartas. Exiba na tela as cartas que cada um dos
jogadores recebeu*/

typedef struct{
    int valor;
    int naipe;
}baralho;

int main(){
    int i,j;
    baralho carta[6];
    srand(time(NULL));
    printf("Cartas do primeiro jogador:\n");
    for(i=0;i<6;i++){
        carta[i].valor = rand() % 13;
        carta[i].naipe = rand() % 4;
        while(carta[i].valor==0){
            carta[i].valor = rand() % 14;
        }
        while(carta[i].naipe == 0){
            carta[i].naipe = rand() % 5;
        }     
    }
    for(i=0,j=1;i<3;i++,j++){
        printf("Carta %i:",j);
        switch (carta[i].valor)
        {
        case 1:
            printf("AS ");
            break;
        case 11:
            printf("Valete ");
            break;
        case 12:
            printf("Rainha ");
            break;
        case 13:
            printf("Rei ");
            break;
        default:
            printf("%i ",carta[i].valor);
            break;
        }
        switch (carta[i].naipe)
        {
        case 1:
            printf("Ouros\n");
            break;
        case 2:
            printf("Espadas\n");
            break;
        case 3:
            printf("Copas\n");
            break;
        case 4:
            printf("Paus\n");
            break;
        default:
            break;
        }
    }
    printf("Cartas do segundo jogador:\n");
    for(i=3,j=1;i<6;i++,j++){
        printf("Carta %i:",j);
        switch (carta[i].valor)
        {
        case 1:
            printf("AS ");
            break;
        case 11:
            printf("Valete ");
            break;
        case 12:
            printf("Rainha ");
            break;
        case 13:
            printf("Rei ");
            break;
        default:
            printf("%i ",carta[i].valor);
            break;
        }
        switch (carta[i].naipe)
        {
        case 1:
            printf("Ouros\n");
            break;
        case 2:
            printf("Espadas\n");
            break;
        case 3:
            printf("Copas\n");
            break;
        case 4:
            printf("Paus\n");
            break;
        default:
            break;
        }
    }
    return 0; 
}


