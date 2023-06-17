#include<stdio.h>
#include<stdlib.h>

/*Crie um programa que:
a) Aloque dinamicamente um array de 5 números inteiros;
b) Peça para o usuário digitar os 5 números no espaço alocado;
c) Mostre na tela os 5 números;
d) Libere a memória alocada.*/

int main(){
    int i;
    int *p;
    p = (int *) malloc(5*sizeof(int));
    printf("Digite 5 numeros:\n");
    for(i = 0;i < 5;i++){
        printf("Numeros %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",p+i);
    }
    printf("Os numeros digitados foram:\n");
    for(i = 0;i < 5;i++){
        printf("Numeros %d:%d\n",i+1,*(p+i));
    }
    free(p);
    return 0;
}