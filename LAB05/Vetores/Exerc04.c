#include<stdio.h>

/*Fazer um programa para ler 5 valores e, em seguida, 
mostrar a posição onde se encontram o maior e o menor 
valor.*/

int main ()
{
    int vet[6];
    int i,j,menor,maior,maior1,menor1;
    printf("---Digite 5 numeros---\n");
    for(i=0;i<5;i++){
        printf("Digite um numero na posicao %d:",i);
        scanf("%d",&vet[i]);
    }
    for(i=0;i<5;i++){
        maior = 0;
        for(j=0;j<5;j++){
            if(vet[i]>=vet[j]){
                maior++;
                if(maior==5){
                    maior1 = i;
                    break;
                }
            }
        }
    }
    for(i=0;i<5;i++){
        menor = 0;
        for(j=0;j<5;j++){
            if(vet[i]<=vet[j]){
                menor++;
                if(menor==5){
                    menor1 = i;
                    break;
                }
            }
        }
    }
    printf("Posicao do maior = %d\n",maior1);
    printf("Posicao do menor = %d\n",menor1);
    return 0;
}
