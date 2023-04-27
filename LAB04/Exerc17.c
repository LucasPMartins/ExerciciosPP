#include<stdio.h>
#include<math.h>

/*Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a
soma dos N números inteiros existentes entre eles.*/

int soma(int a,int b);

int main (){
    int num1,num2,somar;
    printf("Digite um numero:");
    scanf("%d",&num1);
    printf("Digite outro numero:");
    scanf("%d",&num2);
    somar = soma(num1,num2);
    printf("A soma dos N numeros existentes inteiros entre %d e %d eh %d",num1,num2,somar);
    return 0;
}

int soma(int a,int b){
    int num,i,somar;
    for(i=0;i<b;i++){
        if(i>a&&i<b){
            somar += i;
        } 
    }
    return somar;
}