#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Leia um número real.
Se o número for positivo imprima a raiz quadrada.
Do contrário, imprima o número ao quadrado*/

int main()
{
    float x,y;
    printf("Digite um numeros qualquer:");
    scanf("%f",&x);

    if(x>0){
        y = sqrt(x);
        printf("a raiz quadrada do numero digitado eh %.2f\n",y);
    }
    else{
        y = pow(x,2);
        printf("o numero ao quadrado eh %.2f\n", y);
    }
    system("pause");
    return 0;

}