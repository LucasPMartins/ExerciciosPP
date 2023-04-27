#include<stdio.h>
#include<math.h>

/*Elabore uma função que receba três notas de um aluno como parâmetros e uma nota1. Se a
letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá
calcular a média ponderada, com pesos 5, 3 e 2.*/

float funcao(char a,float b,float c,float d);

int main (){
    float nota1,nota2,nota3;
    char letra;
    do{
    printf("Digite uma letra:");
    scanf("%c",&letra);
    getchar()
    }while((letra!='A')&&(letra!='P'));
    printf("Digite a nota 1:");
    scanf("%f",&nota1);
    printf("Digite a nota 2:");
    scanf("%f",&nota2);
    printf("Digite a nota 3:");
    scanf("%f",&nota3);
    funcao(letra,nota1,nota2,nota3);
    return 0;
}

float funcao(char a,float b,float c,float d){
    float media;
    if(a=='A'){
        media = (b+c+d)/3;
        return printf("A media aritmetica eh %.2f",media);
    }
    if(a=='P'){
        media = ((b*5)+(c*3)+(d*2))/3;
        return printf("A media ponderada eh %.2f",media);
    }
}
