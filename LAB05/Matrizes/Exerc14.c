#include<stdio.h>
#include<math.h>

int imprime(void);

int main (){
    int mat[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int i,j;
    printf("Matriz 4 x 4:\n");
    imprime();
    printf("Transformando a matriz em uma matriz triangula inferior:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i!=j){
                if(i==3){
                    break;
                }
                if(j==1&&i==0){
                    mat[i][j] = 0;
                }
                if(j>1){
                    mat[i][j] = 0;
                }
            }
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("[%-2d]",mat[i][j]);
            if(j==3){
                printf("\n");
            }
        }
    }
    return 0;
}

int imprime(void){
    int i,j;
    int mat[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("[%-2d]",mat[i][j]);
            if(j==3){
                printf("\n");
            }
        }
    }
}