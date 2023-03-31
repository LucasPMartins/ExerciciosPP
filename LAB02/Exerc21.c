#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida.
Escreva uma mensagem de erro se a opção for inválida.
Escolha a opção:
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
Opção*/

int main()
{
    int num;
    float r;
    float x, y;

    do{
        printf("Escolha uma das opcoes abaixo\n");
        printf("(1) Soma de 2 numeros\n");
        printf("(2) Diferenca entre 2 numeros (maior pelo menor)\n");
        printf("(3) Produto entre 2 numeros\n");
        printf("(4) Divisao entre 2 numeros\n");
        scanf("%d",&num);
    }while(num<1 || num>4);

    switch (num)
    {
    case 1:printf("Digite dois valores:");
           scanf("%f ",&x);
           scanf("%f",&y);
           r =(float) x + y;
           printf("A soma dos valores eh:%.2f",r);break;
    case 2:printf("Digite dois valores:");
           scanf("%f ",&x);
           scanf("%f",&y);
           if(x<y){r =(float) y - x;printf("A subtracao dos valores eh:%.2f",r);}
           if(x>y){r =(float) x - y;printf("A subtracao dos valores eh:%.2f",r);}
           if(x==y){r =(float) x - y;printf("A subtracao dos valores eh:%.2f",r);}
           break;
    case 3:printf("Digite dois valores:");
           scanf("%f ",&x);
           scanf("%f",&y);
           r =(float) x * y;
           printf("A multiplicacao dos valores eh:%.2f",r);break;
    case 4:printf("Digite o numerador:");
           scanf("%f",&x);
           printf("Digite o denominador:");
           scanf("%f",&y);
           if(y!=0){r =(float) x / y;printf("A divisao dos valores eh:%.2f",r);}
           else{printf("Valor do denominador invalido!");}
           break;
    default:break;
    }

    return 0;

}
