#include<stdio.h>
#include<stdlib.h>

/*9. Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que
considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor
salário terão um aumento proporcionalmente maior do que os funcionários com um salário
maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus
adicional de salário. Faça um programa que leia:
 o valor do salário atual do funcionário;
 o tempo de serviço desse funcionário na empresa (número de anos de trabalho na
empresa).
Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o valor do
salário final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum
aumento.*/

int main ()
{
    float salarioatual;
    int temposervico;
    float novosalario;
    int reajuste;

    printf("Digite o salario atual do funcionario:R$");
    scanf("%f",&salarioatual);
    printf("Digite o tempo de servico(em anos):");
    scanf("%f",&temposervico);

    if(salarioatual<=500&&temposervico<=1){
        reajuste = (salarioatual*25)/100;
        novosalario = salarioatual+reajuste;
        printf("O  valor do salário final reajustado eh R$%.2f",novosalario);
        printf("Sem bonus");
    }
    if((salarioatual>500&&salarioatual<=1000)&&(temposervico>1&&temposervico<=3)){
        reajuste = (salarioatual*20)/100;
        novosalario = salarioatual+reajuste+100;
        printf("O  valor do salário final reajustado eh R$%.2f",novosalario);
        printf("Bonus de R$100");
    }
    if((salarioatual>1000&&salarioatual<=1500)&&(temposervico>=4&&temposervico<=6)){
        reajuste =(salarioatual*15)/100;
        novosalario = salarioatual+reajuste+200;
        printf("O  valor do salário final reajustado eh R$%.2f",novosalario);
        printf("Bonus de R$200");
    }
    if((salarioatual>1500&&salarioatual<=2000)&&(temposervico>=7&&temposervico<=10)){
        reajuste = (salarioatual*10)/100;
        novosalario = salarioatual+reajuste+300;
        printf("O  valor do salário final reajustado eh R$%.2f",novosalario);
        printf("Bonus de R$300");
    }
    if(salarioatual>2000&&temposervico>10){
        novosalario = salarioatual+500;
        printf("O  valor do salário final reajustado eh R$%.2f",novosalario);
        printf("Bonus de R$500");
        printf("Sem reajuste");
    }
    else{printf("O funcionario nao tenha direito a nenhum aumento.");}
    return 0;
}