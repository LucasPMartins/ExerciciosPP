#include<stdio.h>
#include<string.h>

/*Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras), autor
(máximo 15 letras) e ano. Procure um livro por título, perguntando ao usuário qual título
deseja buscar. Mostre os dados de todos os livros encontrados.*/

typedef struct{
    char titulo[15];
    char autor[15];
    int ano;
}livro;

int main(){
    int i;
    int tem=0;
    char busca[15];
    livro c[5];
    printf("Digite os dados dos 5 livros:\n");
    for(i=0;i<5;i++){
        printf("Digite o titulo do livro %d:",i+1);
        setbuf(stdin,NULL);
        fgets(c[i].titulo,15,stdin);
        printf("Digite o nome do autor do livro %s:",c[i].titulo);
        setbuf(stdin,NULL);
        fgets(c[i].autor,15,stdin);
        printf("Digite o ano do livro %s:",c[i].titulo);
        setbuf(stdin,NULL);
        scanf("%d",&c[i].ano);
        printf("----------------------\n");
    }
    printf("Os dados dos livros foram salvos!\n");
    printf("Digite um titulo para a busca:");
    setbuf(stdin,NULL);
    fgets(busca,15,stdin);
    for(i=0,tem=0;i<5;i++){
        if(strcmp(busca,c[i].titulo)==0){
            printf("Livro encontrado:%d",i+1);
            printf("Titulo:%s",c[i].titulo);
            printf("Autor:%s",c[i].autor);
            printf("Ano:%d",c[i].ano);
            print("----------------\n");
            tem = 1;
        }
    }
    if(tem==0){
        printf("Livro nao encontrado!\n");
    }
    return 0;
}