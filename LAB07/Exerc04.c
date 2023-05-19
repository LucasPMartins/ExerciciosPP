#include<stdio.h>
#include<string.h>

/*4 Escreva um programa que contenha duas variáveis inteiras. Leia essas
variáveis do teclado. Em seguida, compare seus endereços e exiba o
conteúdo do maior endereço*/

int main(){
    int x,y;
    int *px;
    int *py;
    px = &x;
    py = &y;
    printf("Digite um valor para x:");
    setbuf(stdin,NULL);
    scanf("%d",&x);
    printf("Digite um valor para y:");
    setbuf(stdin,NULL);
    scanf("%d",&y);
    printf("Endereco de x e y:\n");
    printf("x:%p\n",px);
    printf("y:%p\n",py);
    printf("Maior endereco entre x e y:\n");
    if(px>py){
        printf("Endereco de x:%p\n",px);
        printf("Conteudo:%d\n",x);
    }
    if(py>px){
        printf("Endereco de y:%p\n",py);
        printf("Conteudo:%d\n",x);
    }
    return 0;
}