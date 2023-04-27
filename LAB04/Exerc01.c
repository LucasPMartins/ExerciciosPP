#include<stdio.h>

int dobro(int a);

int main(){

    int num;
    int dobro1;
    printf("Digite um numero inteiro:");
    scanf("%d",&num);
    dobro1 = dobro(num);
    printf("O dobro eh %d",dobro1);
    return 0;
}

int dobro(int a){
    return a*2;
}