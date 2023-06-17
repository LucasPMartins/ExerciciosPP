#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

/*Faça um programa que leia quatro números a, b, c e d, que serão as
dimensões de duas matrizes, e:
a) Crie e leia uma matriz, dadas as dimensões dela;
b) Crie e construa uma matriz que seja o produto de duas matrizes. Na
sua função main(), imprima as duas matrizes e o produto entre elas,
se existir.*/

int main(){
    int **q;
    int **p;
    int **produto;
    int a,b,c,d;
    int i,j,l,k;
    printf("Digite quantas linha Matriz 1 tem:");
    setbuf(stdin,NULL);
    scanf("%d",&a);
    printf("Digite quantas colunas Matriz 1 tem:");
    setbuf(stdin,NULL);
    scanf("%d",&b);
    q = (int **) malloc(a*sizeof(int *));
    for(i = 0;i < a;i++){
        q[i] = (int *) malloc(b*sizeof(int));
        for(j = 0;j < b;j++){
            printf("Digite o valor [%d][%d]:",i,j);
            setbuf(stdin,NULL);
            scanf("%d",&q[i][j]);
        }
    }
    printf("\n");
    printf("Digite quantas linha Matriz 2 tem:");
    setbuf(stdin,NULL);
    scanf("%d",&c);
    printf("Digite quantas colunas Matriz 2 tem:");
    setbuf(stdin,NULL);
    scanf("%d",&d);
    p = (int **) malloc(c*sizeof(int *));
    for(i = 0;i < c;i++){
        p[i] = (int *) malloc(d*sizeof(int));
        for(j = 0;j < b;j++){
            printf("Digite o valor [%d][%d]:",i,j);
            setbuf(stdin,NULL);
            scanf("%d",&p[i][j]);
        }
    }
    printf("\n");
    printf("Matriz 1: %dx%d\n",a,b);
    for(i = 0;i < a;i++){
        for(j = 0;j < b;j++){
            printf("[%-2d]",q[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matriz 2: %dx%d\n",c,d);
    for(i = 0;i < c;i++){
        for(j = 0;j < d;j++){
            printf("[%-2d]",p[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    if(b==c){
        printf("Produto entre Matriz 1 e Matriz 2\n");
        produto = (int **) malloc(a*sizeof(int *));
        for(i = 0;i < a;i++){
            produto[i] = (int *) malloc(d*sizeof(int));
        }
        for(i = 0;i < a;i++){
            for(j = 0;j < d;j++){
                produto[i][j] = 0;
                for(k = 0;k < a;k++){
                    produto[i][j] += q[i][k] * p[k][j];
                }
            }
        }
        for(i = 0;i < a;i++){
            for(j = 0;j < d;j++){
                printf("[%-2d]",produto[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("Impossivel fazer o produto entre as duas matrizes\n");
        free(p);
        free(q);
        free(produto);
        exit(1);
    }
    free(p);
    free(q);
    free(produto);
    return 0;
}