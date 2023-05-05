#include<stdio.h>

int main (){
    
    int mat[5][5];
    int i,j,x,enc = 0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite um valor para a posicao [%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        } 
    }  
    printf("Digite um valor X:");
    scanf("%d",&x); 
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(x==mat[i][j]){
                printf("Valor encontrado na posicao [%d][%d]\n",i,j);
                enc++;
            }  
        }
    }
    if(enc == 0){
        printf("Valor nao encontrado\n");
    }
    
    return 0;
}