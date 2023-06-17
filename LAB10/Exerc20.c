#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


/*.Faça um programa que:
a) Peça para o usuário entrar com o nome e a posição (coordenadas X e
Y) de N cidades e as armazene em um vetor de estruturas (N é
informado pelo usuário);
b) Crie uma matriz de distâncias entre cidades de tamanho N x N;
c) Calcule as distâncias entre cada duas cidades e armazene na matriz;
d) Exiba na tela a matriz de distancias obtida;
e) Quando o usuário digitar o número de duas cidades o programa
deverá retornar a distância entre elas*/

typedef struct{
    char nome[30];
    float x,y;
}cidades;

int main(){
    cidades *p;
    float **mat;
    int opcao = 1;
    int num1,num2;
    int i,j,N;
    printf("Digite quantas cidades:");
    setbuf(stdin,NULL);
    scanf("%d",&N);
    p = (cidades *) malloc(N*sizeof(cidades));
    for(i = 0;i < N;i++){
        printf("Digite o nome da cidade %d:",i+1);
        setbuf(stdin,NULL);
        fgets(p[i].nome,30,stdin);
        printf("Digite a coordenada X:");
        setbuf(stdin,NULL);
        scanf("%f",&p[i].x);
        printf("Digite a coordenada Y:");
        setbuf(stdin,NULL);
        scanf("%f",&p[i].y);
        printf("\n");
    }
    mat = (float **) malloc(N*sizeof(float*));
    for(i = 0;i < N;i++){
        mat[i] = (float *) malloc(N*sizeof(float));
        for(j = 0;j < N;j++){
            mat[i][j] = sqrt(pow((p[i].x-p[j].x),2)+pow((p[i].y-p[j].y),2));
        }
    }
    printf("Matriz de distancias:\n");
    for(i = 0;i < N;i++){
        for(j = 0;j < N;j++){
            printf("Distancia entre %s e %s = %.2f\n",p[i].nome,p[j].nome,mat[i][j]);
        }
    }
    do{
        printf("Digite o numero de uma cidade:");
        setbuf(stdin,NULL);
        scanf("%d",&num1);
        printf("Digite o numero de uma cidade:");
        setbuf(stdin,NULL);
        scanf("%d",&num2);
        if(num1>N||num1<0||num2>N||num2<0){
            opcao = 0;
            printf("Cidades invalidas!\nDigite novamente!\n\n");
        }else{
            printf("Distancia entre %s e %s = %.2f\n",p[num1].nome,p[num2].nome,mat[num1][num2]);
        }
    }while(opcao == 0);
    free(p);
    free(mat);
    return 0;
}