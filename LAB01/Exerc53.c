#include <stdio.h>
#include <math.h>

int main (){

    int l;
    int c;
    int area;
    int p;
    int preco;
    printf("Digite a largura do terreno em metros:");
    scanf("%d", &l);
    printf("Digite o comprimento do terreno em metros:");
    scanf("%d", &c);
    printf("Digite o preco do metro de tela :R$");
    scanf("%d", &p);
    area = l*c;
    preco = area*p;
    printf("O custo para cercar este mesmo terreno com tela eh R$%d", preco);
    return 0;

}

