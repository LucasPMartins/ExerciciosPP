#include<stdio.h>
#include<stdlib.h>

/*. Escreva um programa que leia primeiro os 6 números gerados pela
loteria e depois os 6 números do seu bilhete. O programa então compara
quantos números o jogador acertou. Em seguida, ele aloca espaço para
um vetor de tamanho igual a quantidade de números corretos e guarda
os números corretos nesse vetor. Finalmente, o programa exibe os
números sorteados e os seus números corretos*/

int main(){
    int acertou = 0;
    int *p1,*p2,*p3;
    int i,j,k;
    printf("Digite o numero gerado pela loteria:\n");
    p1 = (int *) calloc(6,sizeof(int));
    for(i = 0;i < 6;i++){
        printf("Numero %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",p1+i);
    }
    printf("Digite o numero do seu bilhete:\n");
    p2 = (int *) calloc(6,sizeof(int));
    for(i = 0;i < 6;i++){
        printf("Numero %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",p2+i);
    }
    for(i = 0;i<6;i++){
        for(j = 0;j < 6;j++){
            if(*(p1+i)==*(p2+j)){
                acertou++;
            }
        }  
    }
    printf("Voce acertou %d numeros\n",acertou);
    p3 = (int *) malloc(acertou*sizeof(int));
    for(i = 0,k = 0;i<6;i++){
        for(j = 0;j < 6;j++){
            if(*(p1+i)==*(p2+j)){
                *(p3+k) = *(p1+i);
                k++;
            }
        }  
    }
    printf("Numeros do Bilhete:\n");
    for(i = 0;i < 6;i++){
        printf("%d ",*(p1+i));
    }
    printf("\n");
    printf("Numeros que voce acertou:\n");
    for(i = 0;i < acertou;i++){
        printf("%d ",*(p3+i));
    }
    free(p1);
    free(p2);
    free(p3);
    return 0;
}