#include<stdio.h>
#include<math.h>

/*Faça uma função que receba dois números e retorne qual deles é o maior.*/

int maiormenor(float a,float b);

int main (){
    float num1,num2;
    printf("Digite um numero:");
    scanf("%f",&num1);
    printf("Digite outro numero:");
    scanf("%f",&num2);
    maiormenor(num1,num2);
    return 0;
}

int maiormenor(float a,float b){
    float num1,num2;
    num1 = a;
    num2 = b;
    if(num1>num2){
        printf("O numero %.2f eh maior que %.2f",num1,num2);
    }
    if(num2>num1){
        printf("O numero %.2f eh menor que %.2f",num1,num2);
    }
    if(num1==num2){
        printf("Os numeros sao iguais",num1,num2);
    }   
}