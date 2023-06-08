#include<stdio.h>

/*Faça um programa que leia três valores inteiros e chame uma função que
receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o
menor valor na primeira variável, o segundo menor valor na variável do
meio, e o maior valor na última variável. A função deve retornar o valor 1 se
os três valores forem iguais e 0 se existirem valores diferentes. Exibir os
valores ordenados na tela.*/

int ordem(int *x,int *y,int *z);

int main(){
    int A,B,C;
    int r;
    printf("Digite tres valores inteiros:\n");
    printf("Primeira Variavel:");
    setbuf(stdin,NULL);
    scanf("%d",&A);
    printf("Segunda Variavel:");
    setbuf(stdin,NULL);
    scanf("%d",&B);
    printf("Ultima Variavel:");
    setbuf(stdin,NULL);
    scanf("%d",&C);
    printf(" --- Variaveis --- \n");
    printf("Primeira Variavel:%d\n",A);
    printf("Segunda Variavel:%d\n",B);
    printf("Ultima Variavel:%d\n",C);
    printf(" --- Ordenando as Variaveis --- \n");
    r = ordem(&A,&B,&C);
    if(r == 0){
        printf(" --- Variaveis diferentes ---\n");
        printf("Primeira Variavel:%d\n",A);
        printf("Segunda Varivavel:%d\n",B);
        printf("Ultima Variavel:%d\n",C);
    }else if(r == 1){
        printf(" --- A variaveis sao iguais ---\n");
        printf("Primeira Variavel:%d\n",A);
        printf("Segunda Varivavel:%d\n",B);
        printf("Ultima Variavel:%d\n",C);    
    }
    return 0;
}

int ordem(int *x,int *y,int *z){
    int t1,t2,t3;
    t1 = *x;
    t2 = *y;
    t3 = *z;
    if(*z < *x && *z < *y){
        *x = *z;
        if(t2 < t1){
            *y = t2;
            *z = t1;
        }if(t1 < t2){
            *y = t1;
            *z = t2;
        }
        if(t1 == t2){
            *y = t1;
            *z = t2;
        }
        return 0;
    }
    if(*y < *x && *y < *z){
        *x = *y; 
        if(t1 < t3){
            *y = t1;
            *z = t3;
        }if(t3 < t1){
            *y = t3;
            *z = t1;
        }
        if(t1 == t3){
            *y = t1;
            *z = t3;
        }
        return 0;       
    }
    if(*x < *y && *x < *z){
        if(t2 < t3){
            *y = t2;
            *z = t3;
        }
        if(t3 < t2){
            *y = t3;
            *z = t2;
        }
        if(t3 == t2){
            *y = t1;
            *z = t3;
        }
        return 0;
    }
    if(*x == *y && *x == *z && *y == *z){
        return 1;
    }
}