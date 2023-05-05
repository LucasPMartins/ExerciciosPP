#include<stdio.h>
#include<string.h>

struct carro
{
    char modelo[20];
    int consumo;
};

int main (){
    struct carro m[5];
    struct carro c[5];
    int i,j,km,litros;
    int economico;
    for(i=0;i<5;i++){
        printf("Digite nome de um veiculo:");
        fgets(m[i].modelo,20,stdin);
    }
    for(i=0;i<5;i++){
        printf("Digite o consumo do carro %sR:",m[i].modelo);
        scanf("%d",&c[i].consumo);
    }
    for(i=0;i<5;i++){
        economico = 0;
        for(j=0;j<5;j++){
            if(c[i].consumo>c[j].consumo){
                economico++;
            }
            if(economico==4){
                printf("O carro mais economico eh o carro %s",m[i].modelo);
            }
        }
    }
    for(i=0;i<5;i++){
        litros = 1000/c[i].consumo;
        printf("O carro %sutiliza %d litros para percorrer 1000 quilometros\n",m[i].modelo,litros);
    }
    return 0;
}

