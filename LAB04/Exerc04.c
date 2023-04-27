#include<stdio.h>
#include<math.h>

/*Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado
perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de
outro número inteiro. Ex.: 1, 4, 9...*/

int quadrado(int a);

int main (){
    int num;
    printf("Digite um numero:");
    scanf("%d",&num);
    quadrado(num);
}

int quadrado(int a){
    int raiz;
    raiz = sqrt(a);
    if(a==(raiz*raiz)){
        printf("O numero eh um quadrado perfeito");
    }
    else{
        printf("O numero nao eh um quadrado perfeito");
    }
}