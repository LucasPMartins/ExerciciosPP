#include<stdio.h>

int main ()
{
    int num[6];
    int i,soma = 0,impar;
    printf("---Digite 6 numeros---\n");
    for (i = 0; i < 6;i++)
    {
        printf("Digite um numero na posicao %d:",i);
        scanf("%d",&num[i]);
    }
    for(i=0;i<6;i++){
        if(num[i]%2==0){
            printf("Numero da posicao %d de valor %d eh par!\n",i,num[i]);
            soma += num[i];
        }
        else{
            printf("Numero da posicao %d de valor %d eh impar!\n",i,num[i]);
            impar++;
        }
    }
    printf("A soma dos numeros pares digitados eh %d\n",soma);
    printf("A quantidade de numeros impares digitados eh %d\n",impar);
    return 0;
    
}