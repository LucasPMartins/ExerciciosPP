#include<stdio.h>
#include<stdlib.h>

/*Faça um programa que leia um número N e:
a) Crie dinamicamente e leia um vetor de inteiro de N posições;
b) Leia um número inteiro X e conte e mostre os múltiplos desse número
que existem no vetor.*/

int main(){
    int i,N,X;
    int quant,mult;
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
    printf("Digite um numero:");
    setbuf(stdin,NULL);
    scanf("%d",&X);
    for(i = 0;i < N;i++){
        if(*(p+i)%X==0){
            quant++;
            printf("%d ",*(p+i));
        }
    }
    printf("A quantidade de numeros multiplos sao %d",quant);
    printf("Os multiplos de %d eh:",X);
    free(p);
    return 0;
}