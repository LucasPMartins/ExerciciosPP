#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*Faça um programa que pergunte ao usuário quantos valores ele deseja
armazenar em um vetor de double, depois use a função MALLOC para
reservar (alocar) o espaço de memória de acordo com o especificado
pelo usuário. Esse vetor deve ter um tamanho maior ou igual a 10
elementos. Use este vetor dinâmico como um vetor comum, atribuindo
aos 10 primeiros elementos do vetor valores aleatórios (usando a função
rand) entre 0 e 100. Exiba na tela os valores armazenados nos 10
primeiros elementos do vetor.*/

int main(){
    double *p;
    int i,N;
    srand(time(NULL));
    do{
        printf("Digite o tamanho do vetor:");
        setbuf(stdin,NULL);
        scanf("%d",&N);
        p = (double *) malloc(N*sizeof(double));
        if(N<10){
            printf("O vetor deve ter um tamanho maior que 10!\n");
            printf("Digite novamente!\n");
        }
    }while(N<10);
    for(i = 0;i < 10;i++){
        *(p+i) = rand() % 100;
    }
    printf("Valores dos 10 primeiros numeros:\n");
    for(i = 0;i < 10;i++){
        printf("%d ",*(p+i));
    }
    free(p);
    return 0;
}