#include<stdio.h>
#include<stdlib.h>//malloc,free,etc

/*Escreva uma função que retorna o maior valor de um array de tamanho N.
Escreva um programa que leia N valores inteiros, imprima o array com ‘k’
elementos por linha, e o maior elemento. O valor de ‘k’ também deve ser
fornecido pelo usuário.*/

void maior(int *num,int n,int *num2);

int main(){
    int *p;
    int N,i,m;
    do{
        printf("Digite quantos valores seu array tera:");
        setbuf(stdin,NULL);
        scanf("%d",&N);
        p = (int *) malloc(N*sizeof(int));
        if(p == NULL){
            printf("Memoria insuficiente!");
            free(p);
            printf("Digite novamente!\n");
        }
    }while(p == NULL);
    printf("Digite os valores do array:\n");
    for(i = 0;i < N;i++){
        printf("Digite o valor %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%i",p+i);
    }
    printf("Os valores do array eh:\n");
    for(i = 0;i < N;i++){
        printf("Valor %d:%d\n",i+1,*(p+i));
    }
    maior(p,N,&m);
    printf("O maior valor eh %d",m);
    free(p);
    return 0;
}

void maior(int *num,int n,int *num2){
    int i;
    int maiornum = *(num+0);
    for(i = 0;i < n; i++){
        if(*(num+i)>maiornum){
            maiornum = *(num+i);
        }
    }
    *num2 = maiornum;
}
