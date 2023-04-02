#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <math.h>

/*15. Faça um programa que leia um conjunto não 
determinado de valores, um de cada vez, e
escreva para cada um dos valores lidos, o quadrado, 
o cubo e a raiz quadrada. Finalize a entrada
de dados com um valor negativo ou zero*/

int main ()
{
    int num;
    int conjunto;
    int i;
    float quadrado,cubo,raiz2;

    do{
        printf("Digite um valor:");
        scanf("%d",&num);
        if(num<=0){printf("FIM!");break;}
        quadrado = pow(num,2);
        cubo = pow(num,3);
        raiz2 = sqrt(num);
        printf("O quadrado desse valor eh:%.2f\n",quadrado);
        printf("O cubo desse valor eh:%.2f\n",cubo);
        printf("A raiz quadrada desse valor eh:%.2f\n",raiz2);
    }while(num>0);

    return 0;

}
