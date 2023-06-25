#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*.Faça um programa que leia um arquivo que contenha as dimensões de
uma matriz (linha e coluna), a quantidade de posições que serão
anuladas, e as posições a serem anuladas (linha e coluna). O programa
lê esse arquivo e, em seguida, produz um novo arquivo com a matriz
com as dimensões dadas no arquivo lido, e todas as posições
especificadas no arquivo ZERADAS e o restante recebendo o valor 1.*/

int main(){
    FILE *fp1;
    FILE *fp2;
    char aqentrada[30];
    char aqsaida[30];
    int linha,coluna;
    int zera,zeraL,zeraC;
    int **p;
    int i,j;
    char c;
    int count = 1;
    printf("Digite o nome do arquivo de entrada:");
    setbuf(stdin,NULL);
    scanf("%s",aqentrada);
    printf("Digite o nome do arquivo de saida:");
    setbuf(stdin,NULL);
    scanf("%s",aqsaida);
    fp1 = fopen(aqentrada,"r");
    fp2 = fopen(aqsaida,"w");
    if(fp1 == NULL || fp2 == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    fscanf(fp1,"%d %d %d\n",&linha,&coluna,&zera);
    p = (int **) malloc(linha*sizeof(int *));
    for(i = 0;i < linha;i++){
        p[i] = (int *) malloc(coluna*sizeof(int));
        for(j = 0;j < coluna;j++){
            p[i][j] = 1;
        }
    }
    do{
        fscanf(fp1,"%d %d\n",&zeraL,&zeraC);
        for(i = 0;i < linha;i++){
            for(j = 0;j < coluna;j++){
                if(i == zeraL && j == zeraC){
                    p[i][j] = 0;    
                }
            }
        }
        count++;
    }while(count <= zera);
    fclose(fp1);
    for(i = 0;i < linha;i++){
        for(j = 0;j < coluna;j++){
            fprintf(fp2,"%d ",p[i][j]);
        }
        fprintf(fp2,"\n");
    }
    fclose(fp2);
    fp2 = fopen(aqsaida,"r");
    if(fp2 == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    printf("Matriz %dx%d\n",linha,coluna);
    while ((c = fgetc(fp2)) != EOF){
        printf("%c",c);
    }
    free(p);
    fclose(fp2);
    return 0;
}

