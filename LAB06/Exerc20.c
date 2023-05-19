#include<stdio.h>

/*Escreva um programa que receba dois structs do tipo “dma”, cada um representando uma
data válida, e calcule o número de dias que decorreram entre as duas datas.
struct dma {
 int dia;
 int mes;
 int ano;
};*/

typedef struct{
 int dia;
 int mes;
 int ano;
}dma;

typedef struct{
 int dia;
 int mes;
 int ano;
}dma2;

int main(){
    dma c;
    dma2 e;
    unsigned int decormes,decordia,decorano,decorre;
    int datavalida = 1;
    do{
    printf("Digite a data para o DMA:\n");
    printf("Digite o dia:");
    setbuf(stdin,NULL);
    scanf("%d",&c.dia);
    printf("Digite o mes:");
    setbuf(stdin,NULL);
    scanf("%d",&c.mes);
    printf("Digite o ano:");
    setbuf(stdin,NULL);
    scanf("%d",&c.ano);
    if(c.mes<1||c.mes>12){
        printf("Data invalida!\n");
        datavalida = 0;
    }
    if(c.ano%4==0){
        if(c.mes==2){
            if(c.dia<1||c.dia>29){
                printf("Data invalida!\n");
                datavalida = 0;
            }
        }else{
            if(c.dia<1||c.dia>31){
                printf("Data invalida!\n");
                datavalida = 0;
            }
        }
    }else{
        if(c.mes==2){
            if(c.dia<1||c.dia>28){
                printf("Data invalida!\n");
                datavalida = 0;
            }
        }else{
            if(c.dia<1||c.dia>31){
                printf("Data invalida!\n");
                datavalida = 0;
            }
        }
    }
    }while(datavalida == 0);
    datavalida = 1;
    do{
    printf("Digite a data para o DMA2:\n");
    printf("Digite o dia:");
    setbuf(stdin,NULL);
    scanf("%d",&e.dia);
    printf("Digite o mes:");
    setbuf(stdin,NULL);
    scanf("%d",&e.mes);
    printf("Digite o ano:");
    setbuf(stdin,NULL);
    scanf("%d",&e.ano);
    if(e.mes<1||e.mes>12){
        printf("Data invalida!\n");
        datavalida = 0;
    }
    if(e.ano%4==0){
        if(e.mes==2){
            if(e.dia<1||e.dia>29){
                printf("Data invalida!\n");
                datavalida = 0;
            }
        }else{
            if(e.dia<1||e.dia>31){
                printf("Data invalida!\n");
                datavalida = 0;
            }
        }
    }else{
        if(e.mes==2){
            if(e.dia<1||e.dia>28){
                printf("Data invalida!\n");
                datavalida = 0;
            }
        }else{
            if(e.dia<1||e.dia>31){
                printf("Data invalida!\n");
                datavalida = 0;
            }
        }
    }
    }while(datavalida == 0);
    printf("Datas validas!\n");
    decorano = e.ano - c.ano;
    decorano = (decorano*12)*30;
    decormes = e.mes - c.mes;
    decormes = decormes*30;
    decordia = e.dia - c.dia;
    decorre = decordia + decorano + decormes;
    printf("O numero de dias que decorreram entre as duas datas eh %u\n",decorre);
}