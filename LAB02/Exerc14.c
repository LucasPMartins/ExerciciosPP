#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* A nota final de um estudante é calculada a partir de três notas atribuídas entre o 
intervalo de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação 
semestral e a um exame final. A média das três notas mencionadas anteriormente obedece 
aos pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo 
com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de 
recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.*/

int main()
{
    float nota1,nota2,nota3;
    float media = 0 ;

    printf("Digite a nota do trabalho de laboratorio:");
    scanf("%f",&nota1);
    printf("Digite a nota da avaliacao semestral:");
    scanf("%f",&nota2);
    printf("Digite a nota do exame final:");
    scanf("%f",&nota3);

    media = ((nota1*2)+(nota2*3)+(nota3*5))/(2+3+5);

    if((nota1<=10) && (nota1>=0) && (nota2<=10) && (nota2>=0) && (nota3<=10) && (nota3>=0)){
            
            if((media>=0.0)&&(media<=2.9)){
            printf("Media = %.2f\n",media);
            printf("aluno reprovado!\n");}
            if((media>=3.0)&&(media<=4.9)){
            printf("Media = %.2f\n",media);
            printf("aluno de recuperacao!\n");}
            if((media>=5)&&(media<=10.0)){
            printf("Media = %.2f\n",media);
            printf("aluno aprovado!\n");}
    }
    else{
        printf("Notas invalidas");
    } 

    return 0;
}