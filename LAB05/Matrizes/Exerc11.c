#include<stdio.h>

int main (){
    int mat[4][4];
    int i, j, max_val = -2000, max_row = 0, max_col = 0;
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite um valor na posicao [%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
            if (mat[i][j] > max_val) {
                max_val = mat[i][j];
                max_row = i;
                max_col = j;
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

    printf("A localizacao do maior valor [%d] eh [%d][%d]",max_val,max_row,max_col);
    return 0;
}