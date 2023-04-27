#include<stdio.h>

/*. Faça uma função que receba por parâmetro dois valores inteiros x e z. Calcule e retorne o
resultado de x^z para o programa principal. Atenção não utilize nenhuma função pronta de
exponenciação*/

int potencia(int a,int b);

int main ()
{
    int num1,num2,pow = 0;
    printf("Digite um numero:");
    scanf("%d",&num1);
    printf("Digite outro numero:");
    scanf("%d",&num2);
    pow = potencia(num1,num2);
    printf("%d elevado a %d eh igual a %d",num1,num2,pow);
    return 0;
}

int potencia(int a,int b){
    int pow,i;
    for(i=1,pow=a;i<b;i++){
        pow = pow*a;
    }
    return pow;
}