#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Leia um número fornecido pelo usuário.
Se esse número for positivo, calcule a raiz quadrada do número.
Se o número for negativo, mostre uma mensagem dizendo que o número é inválido*/

int main()
{
    float x,y,z;
    printf("Digite um numeros qualquer:");
    scanf("%f",&x);

    if(x>0){
        y = sqrt(x);
        printf("a raiz quadrada do numero digitado eh %.2f\n",y);
    }
    else{
        printf("o número é inválido");
    }
    system("pause");
    return 0;

}