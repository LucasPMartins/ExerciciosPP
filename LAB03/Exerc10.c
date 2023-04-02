#include<stdio.h>

/*10. Faça um programa que calcule e 
mostre a soma dos 50 primeiros números pares.*/

int main ()
{
    int i;
    int num;
    int soma = 0;

    printf("Digite um numero:");
    scanf("%d",&num);

    if(num%2==0){
        for(i=0;i>=0&&i<51;i++){
            num = num+2;
            soma += num;
        }
    printf("A soma do 50 primeiros numeros pares eh %d\n",soma);
    }
    if(num%2!=0){
        for(i=0;i>=0&&i<51;i++){
            if(num%2==0){
                num = num+2;
                soma += num;
                if(i==50){printf("A soma do 50 primeiros numeros pares eh %d\n",soma);}
            }
            else{
                num = num+1;
                soma += num;
                if(i==50){printf("A soma do 50 primeiros numeros pares eh %d\n",soma);}
            }
            }
        
        }

    return 0;
    
}