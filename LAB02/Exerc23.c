#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for
divisível por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992,
1996*/

int main()
{
    int ano;
    int r, r1, r2;
    printf("Digite o ano:");
    scanf("%d",&ano);

    r = ano%400;
    r2 = ano%4;
    r1 = ano%100;

    if((r==0)||((r2==0)&&(r1!=0)))
    {
        printf("O ano eh bissexto!");
    }
    else{
        printf("O ano nao eh bissexto!");
    }
    return 0;
    
}