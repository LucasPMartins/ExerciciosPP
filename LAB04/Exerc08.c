#include<stdio.h>
#include<math.h>

/*Sejam a e b os catetos de um triangulo, onde a hipotenusa é obtida pela equação:
hipotenusa = √𝑎2 + 𝑏2. Faça uma função que receba os valores de a e b e calcule o valor
da hipotenusa através da equação.*/

int eq(int a,int b);

int main(){
    int hipotenusa,a,b;
    printf("Digite um valor para a:");
    scanf("%d",&a);
    printf("Digite um valor para b:");
    scanf("%d",&b);
    hipotenusa = eq(a,b);
    printf("O valor da hipotenusa eh %d",hipotenusa);
    return 0;
}

int eq(int a,int b){
    return sqrt(pow(a,2)+pow(b,2));
}