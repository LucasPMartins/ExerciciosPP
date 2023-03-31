#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

/* Faça uma prova de matemática para crianças que 
estão aprendendo a somar números inteiros menores 
do que 100. Escolha números aleatórios entre 1 e 100,
e mostre na tela a pergunta: qual é a soma de a + b,
onde a e b são os números aleatórios. Peça a resposta.
Faça cinco perguntas ao aluno, e mostre para ele as 
perguntas e as respostas corretas, além de
quantas vezes o aluno acertou*/

int main()
{
    int a,b;
    int resposta;
    int respostacerta;
    int acerto = 0;
    int perguntas;

    srand(time(NULL));

    for(perguntas=0;perguntas<5;perguntas++){
    a = rand() % 100;
    b = rand() % 100;
    respostacerta = a + b;
    resposta = respostacerta;
    printf("Qual eh a soma de %d + %d?\n",a,b);
    scanf("%d",&resposta);
    if (resposta != respostacerta){
        printf("resposta errada! A resposta certa eh:%d\n",respostacerta);
    }
    else{acerto++;}
    }
    printf("Acertos = %d",acerto);
    return 0;

}