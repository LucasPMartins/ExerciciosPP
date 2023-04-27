#include<stdio.h>


int mes(int a);

int main(){
    int dia,mes1,ano;
    printf("Digite o dia:");
    scanf("%d",&dia);
    printf("Digite o mes:");
    scanf("%d",&mes1);
    printf("Digite o ano:");
    scanf("%d",&ano);
    printf("%d de ",dia);
    mes(mes1);
    printf("%d.",ano);

}

int mes(int a){
    switch(a){
        case 1:printf("Janeiro de ");break;
        case 2:printf("Fevereiro de ");break;
        case 3:printf("Marco de ");break;
        case 4:printf("Abril de ");break;
        case 5:printf("Maio de ");break;
        case 6:printf("Junho de ");break;
        case 7:printf("Julho de ");break;
        case 8:printf("Agosto de ");break;
        case 9:printf("Setembro de ");break;
        case 10:printf("Outubro de ");break;
        case 11:printf("Novembro de ");break;
        case 12:printf("Dezembro de ");break;
        default:printf("Mes nao existe");break;
    }
}
