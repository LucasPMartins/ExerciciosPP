#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Escreva um programa que:
a) Crie/abra um arquivo texto de nome “arq.txt”;
b) Permita que o usuário grave diversos caracteres nesse arquivo, até
que o usuário entre com o caractere ‘0’;
c) Feche o arquivo.
Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela
todos os caracteres armazenados.
*/

int main() {
    FILE *arquivo;
    char caractere;
    
    arquivo = fopen("arq.txt", "w");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    printf("Digite os caracteres (pressione '0' para encerrar): \n");

    do{
        scanf(" %c", &caractere);
        fputc(caractere, arquivo);
    }while(caractere != '0');

    fclose(arquivo);

    arquivo = fopen("arq.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    printf("\nConteudo do arquivo:\n");

    while((caractere = fgetc(arquivo)) != EOF){
        printf("%c", caractere);
    }
    fclose(arquivo);
    return 0;
}
