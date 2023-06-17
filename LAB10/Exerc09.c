#include<stdio.h>
#include<stdlib.h>

/*Faça um programa que leia uma quantidade qualquer de números
armazenando-os na memória e pare a leitura quando o usuário entrar
um número negativo. Em seguida, imprima o vetor lido. Use a função
REALLOC.*/

int main(){
    int *p;
    int erro = 0;
    int i = 0,j = 1;
    p = (int *) malloc(1*sizeof(int));
    do{
        printf("Digite um numero:");
        setbuf(stdin,NULL);
        scanf("%d",p+i);
        if(*(p+i)>0){
            j++;
            i++;
            p = (int *) realloc(p,j*sizeof(int));
        }else{
            erro = 1;
        }
    }while(erro==0);
    printf("Os numeros digitados foram:");
    for(i = 0;i < j-1;i++){
        printf("%d ",*(p+i));
    }
    free(p);
    return 0;
}