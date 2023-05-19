#include<stdio.h>
#include<string.h>

/*Escreva um programa que contenha duas variáveis inteiras. Compare seus
endereços e exiba o maior endereço.*/

int main(){
    int x,y;
    int *px;
    int *py;
    px = &x;
    py = &y;
    printf("Endereco de x e y:\n");
    printf("x:%p\n",px);
    printf("y:%p\n",py);
    printf("Conteudo de x e y:\n");
    printf("Ponteiros:\n");
    printf("x:%d\n",*px);
    printf("y:%d\n",*py);
    printf("Variravel:\n");
    printf("x:%d\n",x);
    printf("y:%d\n",y);
    printf("Maior endereco entre x e y:\n");
    if(px>py){
        printf("Endereco de x:%p\n",px);
    }
    if(py>px){
        printf("Endereco de y:%p\n",py);
    }
    return 0;
}