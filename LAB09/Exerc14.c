#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int raizes(float A, float B, float C, float *X1, float *X2);

int main(){
    float A,B,C;
    int r;
    float raiz1,raiz2;
    printf("---Calculador de raizes de equacoes do segundo grau---\n");
    do{
        printf("Digite o valor de A:");
        setbuf(stdin,NULL);
        scanf("%f",&A);
        if(A==0){
            printf("Para que seja uma equacao de segundo grau,\n");
            printf("eh necessario que A seja diferente de zero\n");
            printf("Digite novamente!\n");
        }
    }while(A==0);
    printf("Digite o valor de B:");
    setbuf(stdin,NULL);
    scanf("%f",&B);
    printf("Digite o valor de C:");
    setbuf(stdin,NULL);
    scanf("%f",&C);
    r = raizes(A,B,C,&raiz1,&raiz2);
    if(r == 0){
        printf("Nao existe raiz real\n");
    }else{
    printf("A equacao tem %d raizes\n",r);
    printf("Suas raizes sao:\n");
    printf("Raiz 1: %.2f\n",raiz1);
    printf("Raiz 2: %.2f",raiz2);
    }
    return 0;
}

int raizes(float A, float B, float C, float *X1, float *X2){
    float delta;
    delta = pow(B,2) - 4*A*C;
    if(delta < 0){
        return 0;
    }else if(delta == 0){
        *X1 = (-B + sqrt(delta))/(2*A);
        *X2 = (-B - sqrt(delta))/(2*A);
        return 1;
    }else if(delta > 0){
        *X1 = (-B + sqrt(delta))/(2*A);
        *X2 = (-B - sqrt(delta))/(2*A);
        return 2;
    }
}