#include<stdio.h>
#include<stdlib.h>

/*Leia uma data de nascimento de uma pessoa fornecida 
através de três números inteiros: Dia, Mês e Ano. 
Teste a validade desta data para saber se está é uma data 
válida. Teste se o dia fornecido é um dia válido: dia > 0,
dia  28 para o mês de fevereiro (29 se o ano for bissexto),
dia  30 em abril, junho, setembro e novembro, dia  31 nos
outros meses. Teste a validade do mês: mês > 0 e mês < 13.
Teste a validade do ano: ano  ano atual (use uma constante
definida com o valor igual a 2022). Imprimir: “data válida”
ou “data inválida” no final da execução do programa*/

int main ()
{
    int dia,mes,ano;
    const int anoatual = 2022;
    float r;
    printf("Digite o seu dia de nascimeto:");
    scanf("%d",&dia);
    printf("Digite o seu mes de nascimeto:");
    scanf("%d",&mes);
    printf("Digite o seu ano de nascimeto:");
    scanf("%d",&ano);

    r = ano%400;

    if(ano<=anoatual){
    if(r==0)//bissexto
    {
        if(mes>0&&mes<13){
            if((mes==1)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}
            if((mes==2)&&(dia>=1&&dia<=29)){printf("A data eh valida!");}
            if((mes==3)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}
            if((mes==4)&&(dia>=1&&dia<=30)){printf("A data eh valida!");}
            if((mes==5)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}
            if((mes==6)&&(dia>=1&&dia<=30)){printf("A data eh valida!");}
            if((mes==7)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}
            if((mes==8)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}
            if((mes==9)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}
            if((mes==10)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}
            if((mes==11)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}
            if((mes==12)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}

            if((mes==1)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
            if((mes==2)&&(dia<1&&dia>29)){printf("A data nao eh valida!");}
            if((mes==3)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
            if((mes==4)&&(dia<1&&dia>30)){printf("A data nao eh valida!");}
            if((mes==5)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
            if((mes==6)&&(dia<1&&dia>30)){printf("A data nao eh valida!");}
            if((mes==7)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
            if((mes==8)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
            if((mes==9)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
            if((mes==10)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
            if((mes==11)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
            if((mes==12)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
        }else{printf("A data nao eh valida em mes");}
    }

    if(r!=0)//nao bissexto
    {
        if(mes>0&&mes<13){
            if((mes==1)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}
            if((mes==2)&&(dia>=1&&dia<=28)){printf("A data eh valida!");}
            if((mes==3)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}
            if((mes==4)&&(dia>=1&&dia<=30)){printf("A data eh valida!");}
            if((mes==5)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}
            if((mes==6)&&(dia>=1&&dia<=30)){printf("A data eh valida!");}
            if((mes==7)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}
            if((mes==8)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}
            if((mes==9)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}
            if((mes==10)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}
            if((mes==11)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}
            if((mes==12)&&(dia>=1&&dia<=31)){printf("A data eh valida!");}

            if((mes==1)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
            if((mes==2)&&(dia<1&&dia>28)){printf("A data nao eh valida!");}
            if((mes==3)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
            if((mes==4)&&(dia<1&&dia>30)){printf("A data nao eh valida!");}
            if((mes==5)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
            if((mes==6)&&(dia<1&&dia>30)){printf("A data nao eh valida!");}
            if((mes==7)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
            if((mes==8)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
            if((mes==9)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
            if((mes==10)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
            if((mes==11)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
            if((mes==12)&&(dia<1&&dia>31)){printf("A data nao eh valida!");}
        
        }else{printf("A data nao eh valida em mes");}
    }
    }else{printf("A data nao eh valida!");}

    return 0;
}