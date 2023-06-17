#include<stdio.h>
#include<stdlib.h>

/*Faça um programa que leia do usuário o tamanho de um vetor a ser lido
e faça a alocação dinâmica de memória. Em seguida, leia do usuário
seus valores e mostre quantos dos números são pares e quantos são
ímpares.*/

int main(){
    int i,N;
    int par  = 0,impar = 0;
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
    for(i = 0;i < N;i++){
        if(*(p+i)%2==0){
            par++;
        }else{
            impar++;
        }
    }
    printf("O vetor tem %d numeros pares\n",par);
    printf("O vetor tem %d numeros impares\n",impar);
    free(p);
    return 0;
}