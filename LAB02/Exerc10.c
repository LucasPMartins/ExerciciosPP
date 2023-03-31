#include<stdio.h>
#include<math.h>

int main (){

    float altura;
    char sexo;
    float altura2;
    printf("Digite a altura:");
    scanf("%f", &altura);
    printf("Digite o sexo, M para mulheres e H para homens:");
    scanf(" %c",&sexo);

    if ((sexo == 'H') || (sexo == 'h')){
        altura2 =   (72,7 * altura) - 58,0;
        printf("O peso ideal nessa condicoes eh:%f", altura2);

    }
    if((sexo == 'M') || (sexo == 'm')){
        altura2 =  (62,1 * altura) - 44,7;
        printf("O peso ideal nessa condicoes eh:%f", altura2);

    }  
    return 0;  

}