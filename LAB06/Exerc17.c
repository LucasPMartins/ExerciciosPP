#include<stdio.h>
#include<string.h>

/*Faça um programa que controla o consumo de energia dos eletrodomésticos de sua casa e:
- Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em
kW) e tempo ativo por dia (real, em horas);
- Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo
relativo de cada eletrodoméstico (consumo/consumo total) nesse período de tempo.
Apresente este último dado em porcentagem.
*/

typedef struct{
    char nome[15];
    int potencia;
    int tempoativo;
    float consumo,consumoporcentagem;
}eletro;

int main(){
    eletro c[5];
    int i,j;
    int tamanho,t;
    float consumototal;
    printf("Digite os dados de 5 eletromesticos:\n");
    for(i=0;i<5;i++){
        printf("Digite o nome do eletromestico %i:",i+1);
        setbuf(stdin,NULL);
        fgets(c[i].nome,15,stdin);
        tamanho = strlen(c[i].nome);
        for(j=0;j<tamanho;j++){
            if(c[i].nome[j]=='\n'){
                c[i].nome[j]='\0';
                break;
            }
        }
        printf("Digite a pontencia (real, em kW) do %s:",c[i].nome);
        setbuf(stdin,NULL);
        scanf("%d",&c[i].potencia);
        printf("Digite o tempo ativo por dia (real, em horas) do %s:",c[i].nome);
        setbuf(stdin,NULL);
        scanf("%d",&c[i].tempoativo);
        printf("----------------------\n");
    }
    printf("---Dados Salvos!---\n");
    printf("Digite um tempo para calcular consumo total na casa e o \nconsumo relativo de cada eletrodomestico nesse periodo de tempo:");
    setbuf(stdin,NULL);
    scanf("%d",&t);
    for(i=0;i<5;i++){
        c[i].consumo = (c[i].potencia*c[i].tempoativo)*t;
        consumototal += c[i].consumo;
    }
    printf("O consumo total da casa no periodo de %d dias eh igual a %.2f kWh\n",t,consumototal);
    printf("---Consumo relativo de cada eletrodomestico---\n");
    for(i=0;i<5;i++){
        c[i].consumoporcentagem = (c[i].consumo/consumototal)*100;
        printf("Consumo do eletrodomestico %s:%.2f%%\n",c[i].nome,c[i].consumoporcentagem);
    }
    return 0;
}