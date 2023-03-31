#include<stdio.h>

/*Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
𝐴 = (basemaior + basemenor) ∗ altura/2
Lembre-se a base maior e a base menor devem ser números maiores que zero.*/

int main (){
    int basemaior,basemenor;
    float area;
    int altura;

    printf("Digite um valor para a base maior do trapezio:");
    scanf("%d", &basemaior);
    printf("Digite um valor para a base menor do trapezio:");
    scanf("%d", &basemenor);
    printf("Digite um valor para a altura do trapezio:");
    scanf("%d", &altura);

    area = (basemaior + basemenor) * altura/2;

    if((basemaior>0) && (basemenor>0) && (altura>0)){
        printf("Area = %.2f",area);
    }
    else{
        printf("Lembre-se a base maior, base menor\ne a altura devem ser numeros maiores que zero");
    }
    return 0;
}