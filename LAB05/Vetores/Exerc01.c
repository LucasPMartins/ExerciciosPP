#include<stdio.h>

int main (){
    int A[7] = {1,0,5,-2,-5,7};
    int soma,vetor = 1;
    soma = A[0] + A[1] + A[5];
    printf("A soma entre os valores das posicoes A[0], A[1] e A[5] do vetor eh %d\n",soma);
    A[4] = 100;
    for(int i = 0;i<6;i++){
        printf("Vetor %d = %d\n",vetor++,A[i]);
    }
    return 0;
}
