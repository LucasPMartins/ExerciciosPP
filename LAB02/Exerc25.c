#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Calcule as raízes da equação de 2º grau.
ax2 + bx + c = 0 representa uma equação do 2º grau.
A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é
equação de segundo grau”.
Se delta < 0, não existe real. Imprima a mensagem “Não existe raiz”.
Se delta = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
Se delta >= 0, imprima as duas raízes reais*/

int main()
{
    int a,b,c;
    float delta, solucao;
    float raiz, raiz2;

    printf("digite o valor de a:");
    scanf("%d",&a);
    printf("digite o valor de b:");
    scanf("%d",&b);
    printf("digite o valor de c:");
    scanf("%d",&c);

    printf("Formula = (%d)x2 + (%d)x + (%d)\n",a,b,c);

    if (a!=0)
    {
        delta = pow(b,2)-(4*a*c);
        raiz = (-b + sqrt(delta))/(2*a);
        raiz2 = (-b - sqrt(delta))/(2*a);
        if(delta < 0){
            printf("Nao existe raiz");
            }
        if(delta == 0){
            printf("Raiz = %d",raiz);
            printf("Raiz unica");
            }
        if(delta > 0){
            printf("As raizes da equacao eh %.2f e %.2f",raiz,raiz2);
        }
    }
        
    if(a==0){
        printf("Nao eh equacao de segundo grau");
    }
    return 0;
}

