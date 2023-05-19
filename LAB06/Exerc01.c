#include<stdio.h>
#include<string.h>

struct compromisso
{
    int hr,min,seg;
    int dia,ano;
    char mes[20];
    char texto[100];
};


int main(){
    struct compromisso c;
    printf("Digite um horario:");
    setbuf(stdin,NULL);
    scanf("%d%d%d",&c.hr,&c.min,&c.seg);
    printf("Digite a data do compromisso:\n");
    printf("Dia:");
    scanf("%d",&c.dia);
    printf("Mes:");
    setbuf(stdin,NULL);
    fgets(c.mes,20,stdin);
    printf("Ano:");
    setbuf(stdin,NULL);
    scanf("%d",&c.ano);
    printf("Digite o texto que descreve o compromisso:");
    setbuf(stdin,NULL);
    fgets(c.texto,100,stdin);
    printf("Compromisso salvo!\n");
    printf("-------------\n");
    printf("Data:%d de %s de %d\n",c.dia,c.mes,c.ano);
    printf("Horario:%d:%d:%d\n",c.hr,c.min,c.seg);
    printf("%s",c.texto);
    printf("-------------\n");
    return 0;
}