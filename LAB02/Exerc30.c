#include<stdio.h>
#include<stdlib.h>

/* Faça um programa que receba três números e 
mostre-os em ordem crescente.*/

int main ()
{
    float num,num2,num3;

    printf("Digite tres numeros:");
    scanf("%f ",&num);
    scanf("%f ",&num2);
    scanf("%f",&num3);

    if((num>num2)&&(num>num3)&&(num2>num3))
    {
        printf("%.2f %.2f %.2f",num3,num2,num);
    }
    if((num2>num)&&(num2>num3)&&(num>num3))
    {
        printf("%.2f %.2f %.2f",num3,num,num2);
    }
    if((num3>num)&&(num3>num2)&&(num2>num))
    {
        printf("%.2f %.2f %.2f",num,num2,num3);
    }
    if((num2>num)&&(num2>num3)&&(num3>num))
    {
        printf("%.2f %.2f %.2f",num,num3,num2);
    }
    if((num>num3)&&(num>num2)&&(num3>num2))
    {
        printf("%.2f %.2f %.2f",num2,num3,num);
    }
    if((num3>num)&&(num3>num2)&&(num>num2))
    {
        printf("%.2f %.2f %.2f",num2,num,num3);
    }
    else{printf("valores invalidos");}
    return 0;
}