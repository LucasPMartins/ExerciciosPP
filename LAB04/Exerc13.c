#include<stdio.h>
#include<math.h>

/*. Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo
representará a operação que se deseja efetuar com os números. Se o símbolo for ‘+’ deverá
ser realizada uma adição, se for ‘–‘ uma subtração, se for ‘*’ uma multiplicação e se for ‘/’
será efetuada uma divisão.*/

float funcao(char a,float b,float c);

int main (){
    float num1,num2;
    char simbolo;
    do{
    printf("Digite um simbolo:");
    scanf("%c",&simbolo);
    getchar();
    }while((simbolo!='+')&&(simbolo!='-')&&(simbolo!='*')&&(simbolo!='/'));
    printf("Digite o valor 1:");
    scanf("%f",&num1);
    printf("Digite o valor 2:");
    scanf("%f",&num2);
    funcao(simbolo,num1,num2);
    return 0;
}

float funcao(char a,float b,float c){
    float operacao;
    switch (a)
    {
    case '+':
        operacao =  b + c;
        return printf("A soma desses dois valores eh %.2f",operacao);
        break;
    case '-':
        operacao =  b - c;
        return printf("A subtracao desses dois valores eh %.2f",operacao);
        break;
    case '*':
        operacao =  b * c;
        return printf("A multiplicacao desses dois valores eh %.2f",operacao);
        break;
    case '/':
        operacao =  b / c;
        return printf("A divisao desses dois valores eh %.2f",operacao);
        break;
    default:
        break;
    }
}