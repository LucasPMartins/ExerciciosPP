#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <math.h>

/*. Faça um programa que conte quantos números 
primos existentes entre a e b, onde a e b são
números informados pelo usuário.*/

int main ()
{
    int i,j;
    int quantdiv; 
    int a,b; 

    printf("Digite um valor para a:");
    scanf("%d",&a);
    printf("Digite um valor para b:");
    scanf("%d",&b);

    for(i=a;i<=b;i+=2){
        quantdiv = 0;
            for(j=1;j<=i;j++){
                if(i%j==0){
                quantdiv++;}
                if(quantdiv>2){
                    break;}
        }
            if(quantdiv==2){
                printf("%d,",i);
        }
    }
    return 0;
}