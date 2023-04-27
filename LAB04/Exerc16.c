#include<stdio.h>
#include<math.h>

/*Faça uma função chamada desenha_linha. Ele deve desenhar uma linha na tela usando uma
sequência de símbolos de igual (Ex.: ========). A função recebe por parâmetro quantos
sinais de igual serão mostrados.*/

int desenha_linha(int a);

int main ()
{
    int num;
    printf ("Digite um numero:");
    scanf("%d",&num);
    desenha_linha(num);
    return 0;
}

int desenha_linha(int a){
    int i;
    for(i=0;i<a;i++){
        printf("=");
    }
}