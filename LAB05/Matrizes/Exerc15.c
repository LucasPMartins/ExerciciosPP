#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
    int mat[5][5];
    int i,j,numero;
    int numeros_sorteados[100] = {0};
    srand(time(NULL));
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            mat[i][j] = rand()%99;
        } 
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            do {
                numero = rand() % (99); 
            } while (numeros_sorteados[numero]); 
            mat[i][j] = numero; 
            numeros_sorteados[numero] = 1;
        } 
    }
    printf("Cartela:\n");
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