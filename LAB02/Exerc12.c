#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    float log1;
    printf("Digite um numero interio:");
    scanf("%d",&num);
    if(num<0){
        printf("Numero invalido!\n");
    }
    else{
       log1 = (float)log10(num);
        printf("O logaritmo desse numero eh:%.2f\n",log1);
    }

    return 0;
}