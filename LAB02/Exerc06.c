#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Escreva um programa que, dados dois números inteiros,
 mostre na tela o maior deles, assim
como a diferença existente entre ambos.
*/

int main()
{
    int x,y,z;
    printf("Digite dois numeros quaisquer:");
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>y){
        printf("O primeiro numero (%d) eh maior que o segundo (%d)\n",x,y);
        z = x - y;
        printf("A diferenca existente entre ambos eh: %d\n",z);
    }
    if(y>x){
        printf("O segundo numero (%d) eh maior que o primeiro (%d)\n",y,x);
        z = y - x;
        printf("A diferenca existente entre ambos eh: %d\n",z);
    }
    system("pause");
    return 0;

}