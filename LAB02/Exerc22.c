#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
aposentar. As condições para aposentadoria são
1- Ter pelo menos 65 anos;
2- Ou ter trabalhado pelo menos 30 anos;
3- Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/

int main (){

    int idade;
    int tempo;

    printf("Digite sua idade:");
    scanf("%d",&idade);
    printf("Digite seu tempo de servico:");
    scanf("%d",&tempo);

    if((idade>=65)||(tempo>=30)||(idade>=60)&&(tempo>=25)){
        printf("Voce pode se aposentar!");
    }
    else{
        printf("Voce nao pode se aposentar!");
    }
    return 0;

}