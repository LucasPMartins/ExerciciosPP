#include<stdio.h>

/*. Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas
com pontos de exclamação, conforme o exemplo abaixo (para n = 5)*/

int linhas(int a);

int main ()
{
    int num,linha;
    printf("Digite uma valor para o numero de linhas:");
    scanf("%d",&num);
    linhas(num);
    return 0;
}

int linhas(int a){
    int i,j;
    for(i=0;i<a;i++){
        for(j=0;j<=i;j++){
            printf("!");
        }
        printf("\n");
    }
}