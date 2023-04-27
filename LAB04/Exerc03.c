#include<stdio.h>

/*Faça uma função para verificar se um número é positivo ou negativo. 
Sendo que o valor de retorno será 1 se positivo, 
-1 se negativo e 0 se for igual a 0.*/

int posneg(int a);

int main(){
    int num;
    printf("Digite um numero:");
    scanf("%d",&num);
    if(posneg(num)==1){
        printf("O numero eh positivo");
    }
    if(posneg(num)==-1){
        printf("O numero eh negativo");
    }
    if(posneg(num)==0){
        printf("O numero eh igual a zero");
    }
}

int posneg(int a){
    if(a>0){
        return 1;
    }
    if(a<0){
        return -1;
    }
    if(a==0){
        return 0;
    }
}