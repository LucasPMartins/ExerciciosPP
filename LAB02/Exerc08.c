#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que leia 2 notas de um aluno,
verifique se as notas são válidas e exiba na
tela a média destas notas. Uma nota válida deve ser,
obrigatoriamente, um valor entre 0.0 e
10.0, onde caso a nota não possua um valor válido,
este fato deve ser informado ao usuário e o
programa termina.*/

int main()
{
    float nota1,nota2,media;
    printf("Digite as notas do aluno:");
    scanf("%f",&nota1);
    scanf("%f",&nota2);

    if (((nota1>0)&&(nota1<=10) && (nota2>0)&&(nota2<=10))){

        media = (nota1+nota2)/2;
        printf("A media das notas eh:%.2f",media);
    }
    else{
        printf("A nota nao possui valor valido\n");
    }
    return 0;

}