#include<stdio.h>
#include<stdlib.h>


/*Leia uma data e determine se ela é válida. 
Ou seja, verifique se o mês está entre 1 e 12, 
e se o dia existe naquele mês. Note que Fevereiro 
tem 29 dias em anos bissextos, e 28 dias em
anos não bissextos.*/

int main ()
{
    int ano,dia,mes;
    float r;
    
    printf("Digite o ano:");
    scanf("%d",&ano);
     printf("Digite o dia:");
    scanf("%d",&dia);
     printf("Digite o mes:");
    scanf("%d",&mes);

    r = ano%400;

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
    }else{printf("A data nao eh valida");}

    return 0;
}