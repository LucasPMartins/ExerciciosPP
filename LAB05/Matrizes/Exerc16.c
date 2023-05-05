#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int matriz();
int imprime(int mat[2][2]);

int main (){
    int mat[2][2];
    int mat2[2][2];
    int matsoma[2][2];
    int i,j,num,num2,constante;
    char constante1;
    char str[10];
    printf("Digite os valores para a Matriz 1:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite uma valor para a posicao [%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Digite os valores para a Matriz 2:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite uma valor para a posicao [%d][%d]:",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }  
    do{
        printf("---MENU---\n");
        printf("Opcao 1 - somar as duas matrizes\n");
        printf("Opcao 2 - subtrair a primeira matriz da segunda\n");
        printf("Opcao 3 - adicionar uma constante as duas matrizes\n");
        printf("Opcao 4 - imprimir as matrizes\n");
        printf("Digite uma opcao:");
        scanf("%d",&num);
    }while(num<1&&num>4);

    switch (num){
    case 1:
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    matsoma[i][j] = mat[i][j] + mat2[i][j]; 
                }
            }
            printf("A soma das duas matrizes eh:\n");
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    printf("[%-2d]",matsoma[i][j]);
                    if(j==1){
                        printf("\n");
                    }
                }
            } 
            break;
    case 2:
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    matsoma[i][j] = mat[i][j] - mat2[i][j]; 
                }
            }
            printf("A subtracao das duas matrizes eh:\n");
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    printf("[%-2d]",matsoma[i][j]);
                    if(j==1){
                        printf("\n");
                    }
                }
            } 
            break;
    case 3:
                printf("Digite o valor da constante:");
                scanf("%d",&constante);
                for(i=0;i<2;i++){
                    for(j=0;j<2;j++){
                        mat[i][j] = constante*mat[i][j]; 
                    }
                }
                printf("Adicionando a constante a matriz 1:\n");
                for(i=0;i<2;i++){
                    for(j=0;j<2;j++){
                        printf("[%-2d]",mat[i][j]);
                        if(j==1){
                            printf("\n");
                        }
                    }
                }
                for(i=0;i<2;i++){
                    for(j=0;j<2;j++){
                        mat2[i][j] = constante*mat2[i][j]; 
                    }
                }
                printf("Adicionando a constante a matriz 2:\n");
                for(i=0;i<2;i++){
                    for(j=0;j<2;j++){
                        printf("[%-2d]",mat2[i][j]);
                        if(j==1){
                            printf("\n");
                        }
                    }
                } 
            break;
    case 4:
            printf("Matriz 1:\n");
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    printf("[%-2d]",mat[i][j]);
                    if(j==1){
                        printf("\n");
                    }
                }
            }
            printf("Matriz 2:\n");
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    printf("[%-2d]",mat2[i][j]);
                    if(j==1){
                        printf("\n");
                    }
                }
            }
            break;
    
    return 0;
    }
}
