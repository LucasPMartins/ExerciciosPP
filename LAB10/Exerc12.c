#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/*Considere um cadastro de produtos de um estoque, com as seguintes
informações para cada produto:
 Código de identificação do produto: representado por um valor
inteiro
 Nome do produto: com até 50 caracteres
 Quantidade disponível no estoque: representado por um número
inteiro
 Preço de venda: representado por um valor real
a) Defina uma estrutura, denominada produto, que tenha os campos
apropriados para guardar as informações de um produto;
b) Crie um conjunto de N produtos (N é um valor fornecido pelo usuário)
e peca ao usuário para entrar com as informações de cada produto;
c) Encontre o produto com o maior preço de venda;
d) Encontre o produto com a maior quantidade disponível no estoque*/

typedef struct{
    int codg;
    char nome[50];
    int quant;
    float preco;
}produto;

int main(){
    produto *p;
    int N,i;
    float maior;
    int maiorquant;
    char maiornm[50];
    printf("Digite quantos produtos serao armazenados:");
    setbuf(stdin,NULL);
    scanf("%d",&N);
    p = (produto *) malloc(N*sizeof(produto));
    if(p == NULL){
        printf("Memoria insuficiente!\n");
        free(p);
        exit(1);
    }
    printf("Entre com as informacoes dos produtos\n");
    for(i = 0;i < N;i++){
        printf("Codigo de indentificao do produto %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",&p[i].codg);
        printf("Nome do produto %d:",i+1);
        setbuf(stdin,NULL);
        fgets(p[i].nome,50,stdin);
        printf("Quantidade do produto %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",&p[i].quant);
        printf("Preco do produto %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%f",&p[i].preco);
    }
    maior = p[0].preco;
    strcpy(maiornm,p[0].nome);
    for(i = 0;i < N;i++){
        if(p[i].preco>maior){
            maior = p[i].preco;
            strcpy(maiornm,p[i].nome);
        }
    }
    printf("O produto com maior preco de venda eh %s",maiornm);
    printf("Preco:%.2f\n",maior);
    maiorquant = p[0].quant;
    strcpy(maiornm,p[0].nome);
    for(i = 0;i < N;i++){
        if(p[i].quant>maiorquant){
            maiorquant = p[i].quant;
            strcpy(maiornm,p[i].nome);
        }
    }
    printf("O produto com a maior quantidade disponivel no estoque eh %s",maiornm);
    printf("Quantidade:%d\n",maiorquant);
    free(p);
    return 0;
}