#include<stdio.h>
#include<stdlib.h>

/*Faça um programa que leia do usuário o tamanho de um vetor a ser lido
e faça a alocação dinâmica de memória. Em seguida, leia do usuário
seus valores e imprima o vetor lido.*/

int main(){
    int i,N;
    int *p;
    printf("Digite o tamanho do vetor:");
    setbuf(stdin,NULL);
    scanf("%d",&N);
    p = (int *) malloc(N*sizeof(int));
    printf("Digite %d numeros:\n",N);
    for(i = 0;i < N;i++){
        printf("Numero %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",p+i);
    }
    printf("Os numeros digitados foram:\n");
    for(i = 0;i < N;i++){
        printf("Numeros %d:%d\n",i+1,*(p+i));
    }
    free(p);
    return 0;
}