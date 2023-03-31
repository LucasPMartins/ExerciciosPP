#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int idade;
    printf("Digite sua idade:");
    scanf("%d",&idade);

    if(idade<5){printf("Categoria: Nenhuma");}
    if((idade>=5)&&(idade<=7)){printf("Categoria: Infantil A");}
    if((idade>=8)&&(idade<=10)){printf("Categoria: Infantil B");}
    if((idade>=11)&&(idade<=13)){printf("Categoria: Juvenil A");}
    if((idade>=14)&&(idade<=17)){printf("Categoria: Juvenil B");}
    if(idade>=18){printf("Categoria: Senior");}

    return 0;

}