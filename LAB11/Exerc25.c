#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Faça um programa gerenciar uma agenda de contatos. Para cada
contato armazene o nome, o telefone e o aniversário (dia e mês). O
programa deve permitir
 inserir contato;
 remover contato;
 pesquisar um contato pelo nome;
 listar todos os contatos;
 listar os contatos cujo nome inicia com uma dada letra;
 imprimir os aniversariantes do mês.
Sempre que o programa for encerrado, os contatos devem ser
armazenados em um arquivo binário. Quando o programa iniciar, os
contatos devem ser inicializados com os dados contidos neste arquivo
binário*/

typedef struct{
    char nome[40];
    int telefone;
    int dia,mes;
}agenda;


int main(){
    agenda *p;
    agenda q;
    FILE *fp;
    char remover[40];
    int count = 0,n = 10, i;
    int tamanho = 0;
    char c,nome[40];
    int opcao = 0;
    int linha[100];
    p = (agenda *) malloc(n*sizeof(agenda));
        if(p == NULL){
            printf("Memoria insuficiente!");
            return 1;
        }
    printf(" ----- AGENDA -----\n\n");
    do{
        fp = fopen("agenda","r+");
        if(fp == NULL){
            printf("Erro ao abrir o arquivo!");
            return 1;
        }
        while((c = fgetc(fp)) != EOF){
            if(c == '\n'){
                tamanho++;
            }
        }
        printf("1 - inserir contato;2 - remover contato;\n3 - pesquisar um contato pelo nome;\n4 - listar todos os contatos;\n5 - listar os contatos cujo nome inicia com uma dada letra;\n6 - imprimir os aniversariantes do mês;7 - Sair;\n");
        printf("\nDigite uma opcao:");
        setbuf(stdin,NULL);
        scanf("%d",&opcao);
        if(opcao == 1){
            printf("Digite o nome do novo contato:");
            setbuf(stdin,NULL);
            fgets(p[count].nome,40,stdin);
            printf("Digite o telefone do novo contato:");
            setbuf(stdin,NULL);
            scanf("%s",p[count].telefone);
            printf("Digite o dia do aniversario do novo contato:");
            setbuf(stdin,NULL);
            scanf("%s",p[count].dia);
            printf("Digite o mes do aniversario do novo contato:");
            setbuf(stdin,NULL);
            scanf("%s",p[count].mes);
            count++;
            if(count == (n-1)){
                n += 10;
                p = (agenda *) realloc(p,n*sizeof(agenda));
                if(p == NULL){
                    printf("Memoria insuficiente!");
                    return 1;
                }
            }
            fprintf(fp,"%s %d %d %d\n",p[count].nome,&p[count].telefone,&p[count].dia,&p[count].mes);
            fclose(fp);
        }else if(opcao == 2){
            rewind(fp);
            printf("Digite o nome do contato:");
            setbuf(stdin,NULL);
            fgets(remover,40,stdin);
            while(fgets(linha, sizeof(linha), fp) != NULL){
                if(strcmp(remover,strtok(fp," ")) == 0){
                    fputs('\0',fp);
                    printf("Nome apagado com sucesso!\n");
                }
            }
            fclose(fp);
        }else if(opcao == 3){
            rewind(fp);
            printf("Digite o nome do contato:");
            setbuf(stdin,NULL);
            fgets(nome,40,stdin);
            while(fgets(linha, sizeof(linha), fp) != NULL){
                if(strcmp(nome,strtok(fp," ")) == 0){
                    printf("Nome encontrado com sucesso!\n");
                    fscanf(fp,"%s %d %d %d\n",q.nome,&q.telefone,&q.dia,&q.mes);
                    printf("Nome: %s\tTelefone: %d\nDia do aniversario:%d\tMes: %d\n\n",q.nome,q.telefone,q.dia,q.mes);
                }
            }
            fclose(fp);
        }else if(opcao == 4){
            rewind(fp);
            printf("Lista de todos os contatos:\n");
            for(i = 0;i < tamanho;i++){
                fscanf(fp,"%s %d %d %d\n",p[i].nome,&p[i].telefone,&p[i].dia,&p[i].mes);
                printf("Nome: %s\tTelefone: %d\nDia do aniversario:%d\tMes: %d\n",p[i].nome,&p[i].telefone,&p[i].dia,&p[i].mes);
                printf("---------------------\n");
            }
            printf("FIM da lista!\n");
            fclose(fp);        
        }else if(opcao == 5){
            rewind(fp);
            printf("Digite a letra:");
            setbuf(stdin,NULL);
            scanf("%c",c);
            for(i = 0;i < tamanho;i++){
                while(fgets(linha, sizeof(linha), fp) != NULL){
                    if(fgetc(linha) == c){
                        fscanf(fp,"%s %d %d %d\n",q.nome,&q.telefone,&q.dia,&q.mes);
                        printf("Nome: %s\tTelefone: %d\nDia do aniversario:%d\tMes: %d\n\n",q.nome,q.telefone,q.dia,q.mes);
                    }
                }
            }
            fclose(fp);
        }else if(opcao == 6){
            rewind(fp);
            for(i = 0;i < tamanho;i++){ 
                fscanf(fp,"%s %d %d %d\n",q.nome,&q.telefone,&q.dia,&q.mes);
                if(q.mes == 06){
                    printf("Aniversariante do mes:\nNome: %s\tTelefone: %d\nDia do aniversario:%d\n\n",q.nome,q.telefone,q.dia,q.mes);
                }                        
            }
            fclose(fp);
        }else if(opcao == 7){
            break;
        }else{
            printf("Opcao invalida!\nDigite novamente!\n");
            opcao = 0;
        }
    }while(opcao == 0);
    return 0;
}