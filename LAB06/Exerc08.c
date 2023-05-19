#include<stdio.h>
#include<string.h>

/*Faça um programa que armazene em um registro de dados (estrutura composta) os dados
de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de
Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30
caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura
e exibidos na tela.*/

struct dados
{
    char nome[30];
    int idade;
    char sexo;
    char cpf[15];
    char data[12];
    char codigosetor[100];
    char cargo[30];
    int salario;
};


int main(){
    struct dados c;
    printf("Digite o nome do funcionario:");
    setbuf(stdin,NULL);
    fgets(c.nome,30,stdin);
    printf("Digite a idade do funcionario:");
    setbuf(stdin,NULL);
    scanf("%d",&c.idade);
    printf("Digite o sexo (M/F) do funcionario:");
    setbuf(stdin,NULL);
    scanf("%c",&c.sexo);
    printf("Digite o CPF do funcionario:");
    setbuf(stdin,NULL);
    fgets(c.cpf,15,stdin);
    printf("Digite a data de nascimento do funcionario:");
    setbuf(stdin,NULL);
    fgets(c.data,12,stdin);
    printf("Digite o codigo do setor do funcionario:");
    setbuf(stdin,NULL);
    fgets(c.codigosetor,100,stdin);
    printf("Digite o cargo do funcionario:");
    setbuf(stdin,NULL);
    fgets(c.cargo,30,stdin);
    printf("Digite o salario do funcionario:");
    setbuf(stdin,NULL);
    scanf("%d",&c.salario);
    printf("=============================\n");
    printf("Nome:%s",c.nome);
    printf("Idade:%d\n",c.idade);
    printf("Sexo:%c\n",c.sexo);
    printf("CPF:%s",c.cpf);
    printf("Data de nascimento:%s",c.data);
    printf("Codigo do setor:%s",c.codigosetor);
    printf("Cargo:%s",c.cargo);
    printf("Salario:%d\n",c.salario);
    printf("=============================\n");
    return 0;
}