#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui
uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um
programa em que o usuário entre com o valor e o estado destino do produto e o programa
retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o
estado digitado não for válido, mostrar uma mensagem de erro.*/

int main ()
{
    float valor = 0;
    int num;
    float r,r1;

    printf("Escolha uma dos estados abaixo:\n");
    printf("(1) MG\n");
    printf("(2) SP\n");
    printf("(3) RJ\n");
    printf("(4) MS\n");
    scanf("%d",&num);
    printf("Digite o valor do produto:R$");
    scanf("%f",&valor);
    

    if(num==1){
        r = (valor*7)/100;
        r1 = valor + r;
        printf("O valor do produto com o imposto de MG eh:R$%.2f",r1);
    }
    if(num==2){ 
        r=(valor*12)/100;
        r1 = valor + r;
        printf("O valor do produto com o imposto de SP eh:R$%.2f",r1);
    }       
    if(num==3){
        r = (valor*15)/100;
        r1 = valor + r;
        printf("O valor do produto com o imposto de Rj eh:R$%.2f",r1);
    }
    if(num==4){
        r = (valor*8)/100;
        r1 = valor + r;
        printf("O valor do produto com o imposto de MS eh:R$%.2f",r1);
    }
    if((num!=1)&&(num!=2)&&(num!=3)&&(num!=4)){
        printf("Estado invalido!");
    }  
    
    return 0;
}   