#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Dados três valores, A, B, C, verificar se eles podem 
ser valores dos lados de um triangulo e, se forem, se é um triângulo escaleno,
equilátero ou isósceles, considerando os seguintes conceitos:
1-O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados;
2-Chama-se equilátero o triângulo que tem três lados iguais;
3-Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
4-Recebe o nome de escaleno o triângulo que tem os três lados diferentes*/

int main(){

    int a, b, c;
    int somalado1,somalado2,somalado3;
    printf("Digite um valor para o lado A:");
    scanf("%d",&a);
    printf("Digite um valor para o lado B:");
    scanf("%d",&b);
    printf("Digite um valor para o lado C:");
    scanf("%d",&c);

    somalado1=a+b;
    somalado2=b+c;
    somalado3=a+c;

    if((somalado1>c)&&(somalado2>a)&&(somalado3>b)){
        if((a==b)&&(b==c)){
            printf("O triangulo eh equilatero!");
        }
        if(((a!=b)&&(b==c))||((a==b)&&(b!=c))){
            printf("O triangulo eh isosceloes!");
        }
        if((a!=b)&&(b!=c)){
            printf("O triangulo eh escaleno!");
        }
    }
    else{
        printf("Valores invalidos!");
    }

    return 0;
}