#include<stdio.h>
#include<stdlib.h>

/*Faça um programa que simule a memória de um computador: o usuário
irá especificar o tamanho da memória, ou seja, quantos bytes serão
alocados do tipo inteiro. Para tanto, a memória solicitada deve ser um
valor múltiplo do tamanho do tipo inteiro. Em seguida, o usuário terá 2
opções: inserir um valor em uma determinada posição ou consultar o
valor contido em uma determinada posição. A memória deve iniciar com
todos os dados zerados.*/

int main(){
    int i,N,X;
    int opcao;
    int *p;
    printf("Digite o tamanho do vetor:");
    setbuf(stdin,NULL);
    scanf("%d",&N);
    p = (int *) calloc(N,sizeof(int));
    do{
        printf("1- Inserir um valor\n");
        printf("2- Consultar valor\n");
        printf("3 - Sair\n");
        printf("Digite uma opcao:");
        setbuf(stdin,NULL);
        scanf("%d",&opcao);
        if(opcao==1){
            do{
                printf("Digite a posicao:");
                setbuf(stdin,NULL);
                scanf("%d",&X);
            }while(X>N||X<0);
            printf("Digite o numero:");
            setbuf(stdin,NULL);
            scanf("%d",p+X);
            opcao = 0;
        }else if(opcao==2){
            do{
                printf("Digite a posicao:");
                setbuf(stdin,NULL);
                scanf("%d",&X);
            }while(X>N||X<0);
            if(*(p+X)==0){
                printf("Valor nao existente na posicao digitada!\n");
                opcao = 0;
            }
            else{
                printf("O valor da posicao %d eh %d\n\n",X,*(p+X));
                opcao = 0;
            }
        }else if(opcao==3){
            opcao = 1;
        }else{
            opcao = 0;
            printf("\nOpcao invalida!\nDigite novamente!\n\n");
        }
    }while(opcao == 0);
    free(p);
    return 0;
}