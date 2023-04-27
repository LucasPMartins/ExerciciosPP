#include<stdio.h>

/*Escreva uma função para determinar a quantidade de números primos abaixo de N.*/

int primos(int a);

int main (){
    int num,quant = 0;
    printf("Digite uma valor para N:");
    scanf("%d",&num);
    quant = primos(num);
    printf("A quantidade de numeros primos abaixos de %d eh %d",num,quant);
    return 0;
}

int primos(int a){
    int quantdiv;
    int quantprimo;
    int i,j;
    for(i=2;i<=a;i++){
        for(j=1,quantdiv=0;j<=i;j++){
            if(i%j==0){
                quantdiv++;
            }
        }
        if(quantdiv<3){
            quantprimo++;
        }
    }
    return quantprimo;
}