#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <math.h>

/*18. Um funcionário recebe aumento anual. 
Em 1995 foi contratado por 2000 reais. Em 1996 recebeu
aumento de 1.5%. A partir de 1997, os aumentos sempre 
correspondem ao dobro do ano anterior. Faça programa que 
determine o salário atual do funcionário*/

int main ()
{
    float salario = 2000;
    float salario1 = 0;
    float aumento;
    float aumento2,aumento1=1.5;
    int ano = 1996;

    aumento = (salario*aumento1)/100;

    for(int i=0;i<ano;i++)
    {
        if(ano==2023){
            printf("O salario do funcionario no ano de %d eh R$%.2f\n",ano+1,salario1);
            break;}
        salario1 = 2000+aumento;
        printf("O salario do funcionario no ano de %d eh R$%.2f\n",ano+1,salario1);
        aumento = (aumento*2);
        ano++;        
    }

    return 0;
}