#include<stdio.h>

/*2. Escreva um programa que escreva na tela, de 1 até 100,
de 1 em 1, 3 vezes. A primeira vez deve usar a estrutura de 
repetição for, a segunda while, e a terceira do-while*/

int main()
{
    int i = 1;
    int x = 0;
    int y = 1;

    for(i=1;i<101;i++){
        printf("%d,",i);
    }
    printf("\n\n");
    while(x>=0&&x<100){
        x++;
        printf("%d,",x);
    }
    printf("\n\n");
    do{
        printf("%d,",y);
        y++;
    }while(y<101);
    printf("\n\n");

    return 0;

}