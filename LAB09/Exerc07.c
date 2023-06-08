#include<stdio.h>
#include<stdlib.h>

/*Escreva uma função que aceita como parâmetro um array de inteiros com N
valores, e determina o maior elemento do array e o número de vezes que
este elemento ocorreu no array. Por exemplo, para um array com os
seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a função deve retorna para
o programa que a chamou o valor 15 e o número 3 (indicando que o número
15 ocorreu 3 vezes). A função deve ser do tipo void.
*/

void maior(int *num,int n,int *m,int *o);

int main(){
    int *p;
    int N,i;
    int ocorre,maiorvl;
    do{
        printf("Digite quantos valores seu array tera:");
        setbuf(stdin,NULL);
        scanf("%d",&N);
        p = (int *) malloc(N*sizeof(int));
        if(p == NULL){
            printf("Memoria insuficiente!");
            free(p);
        }
    }while(p == NULL);
    for(i = 0;i < N;i++){
        printf("Digite o valor %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",p+i);
    }
    printf("Calculando...\n");
    maior(p,N,&maiorvl,&ocorre);
    printf("Maior valor do array:%d\n",maiorvl);
    printf("O valor %d ocorre no array %d vezes\n",maiorvl,ocorre);
    free(p);
    return 0;
}

void maior(int* num,int n,int *m,int *o){
    int i;
    int maior = num[0];
    for(i = 0;i < n;i++){
        if(num[i]>maior){
            maior = num[i];
            *m = num[i];
            *o = 0;
        }
        if(num[i]==maior){
            (*o)++;
        }
    }
}