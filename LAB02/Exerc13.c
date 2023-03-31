#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e
indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
superior a 60 pontos.*/

int main()
{
    int nota1,nota2,nota3;
    float media = 0 ;

    printf("Digite a nota da primeira prova:");
    scanf("%d",&nota1);
    printf("Digite a nota da segunda prova:");
    scanf("%d",&nota2);
    printf("Digite a nota da terceira prova:");
    scanf("%d",&nota3);

    media = ((nota1*1)+(nota2*1)+(nota3*2))/(1+1+2);

    if(media>=60){
        printf("A media do aluno eh:%.2f\n",media);
        printf("Aluno aprovado");
    }
    else{
       printf("A media do aluno eh:%.2f\n",media);
       printf("Aluno reprovado");
    }

    return 0;
}