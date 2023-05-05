#include<stdio.h>

int main (){
    int A[7];
    int i,j;
    printf("Digite uma sequencia de numeros:\n");
    for(i = 0;i<6;i++){  
        scanf("%d",&A[i]);
    }
    printf("Ordem Inversa:\n");
    for(j=0,i=5;j<6;j++,i--){
        if(i==0){
            printf("%d\n",A[0]);
            break;
        }
        printf("%d ",A[i]);
    }
    return 0;
}