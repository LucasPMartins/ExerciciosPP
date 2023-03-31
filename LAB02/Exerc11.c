#include<stdio.h>
#include<math.h>

int main (){

    int num, num1,num2,num3,num4;
    int soma;
    printf("Digite um numero inteiro com tes algarismos maior do que zero:");
    scanf("%d", &num);

    if(num > 0){
        num1 = num/100;
        num2 = num%100;
        num3 = num2/10;
        num4 = num2%10;
        soma = num4 + num3 + num1;
        printf("A soma de todos os seus algarismos eh %d", soma);  
    }
    else{
        printf("Numero invalido");
    }
    return 0;
}