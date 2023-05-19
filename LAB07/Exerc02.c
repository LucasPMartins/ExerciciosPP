#include<stdio.h>
#include<string.h>

/*Escreva um programa que declare um inteiro, um real e um char, e
ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use
&). Modifique os valores de cada variável usando os ponteiros. Imprima os
valores das variáveis antes e após a modificação.*/

int main(){
    int num = 10;
    float num2 = 20.9;
    char a = 'A';
    int* p;
    float* p2;
    char* b;
    p = &num;
    p2 = &num2;
    b = &a;
    printf("Antes da modificao:\n");
    printf("%i\n",*p);
    printf("%.2f\n",*p2);
    printf("%c\n",*b);
    *p = 15;
    *p2 = 39.9;
    *b = 'B';
     printf("Depois da modificao:\n");
    printf("%i\n",*p);
    printf("%.2f\n",*p2);
    printf("%c\n",*b);
    return 0;
}