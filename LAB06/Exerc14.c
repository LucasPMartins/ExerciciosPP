#include<stdio.h>
#include<string.h>

/*. Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras),
ano e preço. Leia um valor p e mostre as informações de todos os carros com preço menor
que p. Repita este processo até que seja lido um valor p = 0*/

typedef struct{
    char marca[15];
    int ano;
    float preco;
}carros;

int main(){
    carros c[5];
    int p,i;
    printf("---Digite os dados dos 5 carros---\n");
    for(i=0;i<5;i++){
        printf("Digite o nome da marca do carro %i:",i+1);
        setbuf(stdin,NULL);
        fgets(c[i].marca,15,stdin);
        printf("Digite o ano do carro %i:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",&c[i].ano);
        printf("Digite o preco do carro %i:",i+1);
        setbuf(stdin,NULL);
        scanf("%f",&c[i].preco);
        printf("============================\n");
    }
    printf("Digite um valor:");
    setbuf(stdin,NULL);
    scanf("%d",&p);
    printf("---Carros com preco menor que R$%.2f---\n",p);
    for(i=0;i<5;i++){
        if(c[i].preco<p){
            printf("O carro %s tem valor menor que R$%.2f\n",c[i].marca,p);
            printf("Preco:R$%.2f\n",c[i].preco);
        }
    }
    return 0;
}