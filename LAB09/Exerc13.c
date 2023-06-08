#include<stdio.h>
#include<stdlib.h>

/*Faça um programa que possua uma função para:
 - ler 2 notas e retorná-las por parâmetro (chamar uma função dedicada a ler
2 notas válidas e que devolver os 2 números lidos);
 - calcular a média simples e a média ponderada e retorná-las por parâmetro,
onde a segunda nota tem peso 2: media_ponderada = (n1 + n2*2)/3*/

void notas(float *n1,float *n2);
void media(float *num,float *num2,float n1,float n2);

int main(){
    float nota1,nota2;
    float medias,mediap;
    printf("Digite as 2 notas:\n");
    notas(&nota1,&nota2);
    printf("Nota 1:%.2f\n",nota1);
    printf("Nota 2:%.2f\n",nota2);
    media(&medias,&mediap,nota1,nota2);
    printf("A media simples eh %.2f\n",medias);
    printf("A media ponderada eh %.2f",mediap);
    return 0; 
}

void notas(float *n1,float *n2){
    printf("Digite a nota 1:");
    setbuf(stdin,NULL);
    scanf("%f",n1);
    printf("Digite a nota 2:");
    setbuf(stdin,NULL);
    scanf("%f",n2);
}

void media(float *num,float *num2,float n1,float n2){
    *num = (n1 + n2) / 2;
    *num2 = (n1 + n2*2)/3;
}