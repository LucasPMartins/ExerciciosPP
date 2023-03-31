#include<stdio.h>
#include<stdlib.h>

/*Leia a nota e o número de faltas de um aluno,
e escreva seu conceito. De acordo com a tabela 
abaixo,quando o aluno tem mais de 20 faltas ocorre 
uma redução de conceito*/

int main()
{
    float nota;
    int faltas;

    printf("Digite a nota do Aluno:");
    scanf("%f",&nota);
    printf("Digite o numero de faltas do Aluno:");
    scanf("%d",&faltas);

    if(faltas<=20){
        if(nota>=9.0&&nota<=10){printf("Conceito = A");}
        if(nota>=7.5&&nota<=8.9){printf("Conceito = B");}
        if(nota>=5.0&&nota<=7.4){printf("Conceito = C");}
        if(nota>=4.0&&nota<=4.9){printf("Conceito = D");}
        if(nota>=0.0&&nota<=3.9){printf("Conceito = E");}
    }
    if (faltas>20){
        if(nota>=9.0&&nota<=10){printf("Conceito = B");}
        if(nota>=7.5&&nota<=8.9){printf("Conceito = C");}
        if(nota>=5.0&&nota<=7.4){printf("Conceito = D");}
        if(nota>=4.0&&nota<=4.9){printf("Conceito = E");}
        if(nota>=0.0&&nota<=3.9){printf("Conceito = F");}      
    }

    return 0;
    
}