#include<stdio.h>

/*9. Faça um programa que leia um número inteiro N 
e depois imprima os N primeiros números naturais ímpares.*/

int main()
{
    int num;
    int n;
    int i;
    int imp = 0;

    printf("Digite um numero:");
    scanf("%d",&n);

    num = n + 1 + (n%2);//se par +1,se impar +2(1+resto de n%2)

    for(i=0;i<n;i++){
        printf("%d\n",num);
        num +=2;
    }

    return 0;
}