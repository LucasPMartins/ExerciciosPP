#include<stdio.h>

/*. Faça uma função que receba um número inteiro positivo n 
e calcule o seu fatorial, n!.*/

int fatorial(int a);

int main (){
    int num1,fat;
    printf("Digite um numero:");
    scanf("%d",&num1);
    fat = fatorial(num1);
    printf("%d fatorial eh igual a %d",num1,fat);
    return 0;
}

int fatorial(int a){
    if(a==1){
        return 1;
    }
    else{
        return a*fatorial(a-1);
    }
}