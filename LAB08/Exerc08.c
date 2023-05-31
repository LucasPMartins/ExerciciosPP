#include<stdio.h>
#include<string.h>

/*Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um
programa que leia a variável ‘A’ e calcule e exiba o dobro, o triplo e o
quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B
deve ser usada para calcular o dobro, C o triplo e D o quádruplo.*/

int main(){
    int A;
    int *B;
    int **C;
    int ***D;
    printf("Digite um valor para A:");
    setbuf(stdin,NULL);
    scanf("%d",&A);
    B = &A;
    printf("Dobro de %d = %d\n",A,(*B * 2));
    C = &B;
    printf("Triplo de %d = %d\n",A,(**C * 3));
    D = &C;
    printf("Quadruplo de %d = %d\n",A,(***D * 4));
    return 0;
}