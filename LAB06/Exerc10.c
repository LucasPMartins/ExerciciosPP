#include<stdio.h>
#include<string.h>
/*Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e
telefone de 5 pessoas e os imprima em ordem alfabética*/

typedef struct{
    char nome[20];
    char endereco[30];
    char telefone[12];
}dados;

void ordenarPessoas(dados pessoas[]) {
    int i, j;
    dados temp;
    for (i = 0; i < 5 - 1; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                temp = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = temp;
            }
        }
    }
}

int main(){
    dados c[5];
    int i,j;
    int menor;
    printf("Digite os dados das cinco pessoas:\n");
    for(i=0;i<5;i++){
        printf("Digite o nome:");
        setbuf(stdin,NULL);
        fgets(c[i].nome,20,stdin);
        printf("Digite o endereco:");
        setbuf(stdin,NULL);
        fgets(c[i].endereco,30,stdin);
        printf("Digite o telefone:");
        setbuf(stdin,NULL);
        fgets(c[i].telefone,12,stdin);
        printf("=======================\n");
    }
    printf("---Tabela de dados em ordem alfabetica---\n");

    ordenarPessoas(c);

    printf("\nPessoas em ordem alfabetica:\n");

    for (i = 0; i < 5; i++) {
        printf("Pessoa %d\n", i + 1);
        printf("Nome: %s", c[i].nome);
        printf("Endereco: %s", c[i].endereco);
        printf("Telefone: %s\n", c[i].telefone);
    }

    return 0;
}