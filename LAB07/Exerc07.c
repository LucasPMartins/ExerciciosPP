#include<stdio.h>
#include<string.h>

/*Faça um programa que declare três variáveis do tipo inteiro e três do tipo
ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros, leia
três números e os imprima em ordem crescente. O programa deve
apresentar também o endereço de memória desses números.*/

int main(){
    int a,b,c;
    int *p1;
    int *p2;
    int *p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    printf("Digite o valor a:");
    setbuf(stdin,NULL);
    scanf("%d",p1);
    printf("Digite o valor b:");
    setbuf(stdin,NULL);
    scanf("%d",p2);
    printf("Digite o valor c:");
    setbuf(stdin,NULL);
    scanf("%d",p3);
    printf("Ordem crescente dos numeros digitados:");
    if(*p1>*p2&&*p1>*p3&&*p2>*p3){
        printf("%d %d %d\n",*p3,*p2,*p1);
    }
    if(*p1>*p2&&*p3>*p2&&*p1>*p3){
        printf("%d %d %d\n",*p2,*p3,*p1);
    }
    if(*p2>*p1&&*p1>*p3&&*p2>*p3){
        printf("%d %d %d\n",*p3,*p1,*p2);
    }
    if(*p2>*p1&&*p3>*p1&&*p2>*p3){
        printf("%d %d %d\n",*p1,*p3,*p2);
    }
    if(*p3>*p1&&*p2>*p1&&*p3>*p2){
        printf("%d %d %d\n",*p1,*p2,*p3);
    }
    if(*p3>*p2&&*p1>*p2&&*p3>*p1){
        printf("%d %d %d\n",*p2,*p1,*p3);
    }
    printf("Endereco de memoria dos numeros:\n");
    printf("a:%p\n",p1);
    printf("b:%p\n",p2);
    printf("c:%p\n",p3);
    return 0;
}