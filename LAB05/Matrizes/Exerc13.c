#include<stdio.h>
#include<math.h>

int main (){
    int mat[10][10];
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i<j){
                mat[i][j] = 2*i + 7*j - 2;
            }
            if(i == j){
                mat[i][j] = 3*pow(i,2)- 1;
            }
            if(i>j){
                mat[i][j] = 4*pow(i,3) - 5*pow(j,2) + 1;
            }
        } 
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("[%-3d]",mat[i][j]);
            if(j==4){
                printf("\n");
            }
        }
    }
    return 0;
}