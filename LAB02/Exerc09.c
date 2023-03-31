#include<stdio.h>
#include<math.h>

int main (){

    float salario,prestacao;
    int x;
    printf("Digite o salario do trabalhador: R$");
    scanf("%f", &salario);
    printf("Digite a prestacao do emprestimo: R$");
    scanf(" %f", &prestacao);
    x = (prestacao/salario)*100;
    if(x>20){
        printf("Emprestimo nao concedido!");   
    }
    else {
        printf("Emprestimo concedido!");
    }
    return 0;
}