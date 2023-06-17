#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

/*Faça um programa para associar nomes as linhas de uma matriz de
caracteres. O usuário irá informar o número máximo de nomes que
poderão ser armazenados. Cada nome poderá ter até 30 caracteres com
o '\0'. O usuário poderá usar 5 opções diferentes para manipular a
matriz:
a) Gravar um nome em uma linha da matriz;
b) Apagar o nome contido em uma linha da matriz;
c) Informar um nome, procurar a linha onde ele se encontra e substituir
por outro nome;
d) Informar um nome, procurar a linha onde ele se encontra e apagar;
e) Pedir para recuperar o nome contido em uma linha da matriz*/

int main(){
    char **mat;
    char opcao;
    int verifica;
    char nome[30];
    int pos;
    int i,l,N,j = 0,sair = 1;
    printf("Digite o numero maximo de nomes:");
    setbuf(stdin,NULL);
    scanf("%d",&N);
    mat = (char **) malloc(N*sizeof(char *));
    for(i = 0;i < N;i++){
        mat[i] = (char *) malloc(30*sizeof(char));
    }
    if(mat == NULL){
        printf("Memoria insuficiente!");
        exit(1);
    }
    do{
        printf("a) Gravar um nome \nb) Apagar o nome \nc) Substituir nome \nd) Procurar e apagar nome \ne) Recuperar o nome \nf) Sair \n");
        printf("Digite um opcao:");
        setbuf(stdin,NULL);
        scanf("%c",&opcao);
        if(opcao == 'a'){
            printf("Digite o nome:");
            setbuf(stdin,NULL);
            fgets(mat[j],30,stdin);
            j++;
            sair = 1;
        }else if(opcao == 'b'){
            printf("Digite o posicao:");
            setbuf(stdin,NULL);
            scanf("%d",&pos);
            printf("Apagando...\n");
            mat[pos][0] = '\0';
            sair = 1;
        }else if(opcao == 'c'){
            printf("Digite o nome que deseja substituir:");
            setbuf(stdin,NULL);
            fgets(nome,30,stdin);
            verifica = 0;
            for(i = 0;i < N;i++){
                if(strcmp(mat[i],nome)==0){
                    printf("Digite o nome para substituir:");
                    setbuf(stdin,NULL);
                    fgets(nome,30,stdin);
                    strcpy(mat[i],nome);
                    verifica = 1;
                }
            }
            if(verifica == 0){
                printf("Nome nao encontrado!\n");
            }
            sair = 1;
        }else if(opcao == 'd'){
            printf("Digite o nome que deseja apagar:");
            setbuf(stdin,NULL);
            fgets(nome,30,stdin);
            verifica = 0;
            for(i = 0;i < N;i++){
                if(strcmp(mat[i],nome)==0){
                    printf("Nome encontrado!\nApagando...\n");
                    mat[i][0] = '\0';
                    verifica = 1;
                }
            }
            if(verifica == 0){
                printf("Nome nao encontrado!\n");
            }
            sair = 1;
        }else if(opcao == 'e'){
            printf("Digite o nome que deseja recuperar:");
            setbuf(stdin,NULL);
            fgets(nome,30,stdin);
            verifica = 0;
            for(i = 0;i < N;i++){
                if(strcmp(mat[i],nome)==0){
                    printf("O nome esta na linha %d\n",i);
                    verifica = 1;
                }
            }
            if(verifica == 0){
                printf("Nome nao encontrado!\n");
            }
            sair = 1;
        }else if(opcao == 'f'){
            printf("Saindo...\n");
            sair = 0;
        }else{
            printf("Opcao invalida!\n");
            sair = 1;
        }
    }while(sair == 1);
    printf("Lista do nomes:\n");
    for(i = 0;i < N;i++){
        printf("%s",mat[i]);
    }
    free(mat);
    return 0;
}