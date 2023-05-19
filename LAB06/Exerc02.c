#include<stdio.h>
#include<string.h>

struct dados
{
    int idade;
    char nome[30];
    char endereco[100];
};

int main(){
    struct dados c;
    printf("Digite um nome:");
    fgets(c.nome,30,stdin);
    printf("Digite sua idade:");
    scanf("%d",&c.idade);
    printf("Digite o endereco:");
    setbuf(stdin,NULL);
    fgets(c.endereco,100,stdin);
    printf("Dados salvos!\n");
    printf("---------------\n");
    printf("Nome:%s",c.nome);
    printf("Idade:%d\n",c.idade);
    printf("Endereco:%s",c.endereco);
    printf("---------------\n");
    return 0;
}

