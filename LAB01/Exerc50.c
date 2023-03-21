#include<stdio.h>
#include<math.h>

int main()
{
    int idade;
    int anoatual;
    int anonasc;
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    printf("Digite o ano atual:\n");
     scanf("%d", &anoatual);
    anonasc = anoatual - idade;
    printf("O ano de seu nascimento eh %d", anonasc);
    return 0;
}