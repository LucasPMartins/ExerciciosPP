#include<stdio.h>
#include<math.h>

int main()
{
    int seginicio;
    int mininicio;
    int hrinicio;
    int duracao;
    int seg;
    int min;
    int minrest;
    int hrs;
    int hrsrest;
    int hrfinal, minfinal, segfinal;
    printf("Digite a hora de inicio do experimento:\n");
    scanf("%d", &hrinicio);
    printf("Digite o minuto de inicio do experimento:\n");
    scanf("%d", &mininicio);
    printf("Digite o segundo de inicio do experimento:\n");
    scanf("%d", &seginicio);
    printf("Digite a duracao do experimento em segundos:\n");
    scanf("%d", &duracao);
    hrs = duracao/3600;
    hrsrest = duracao%3600;
    min = hrsrest/60;
    minrest = hrsrest%60;
    seg = minrest;
    hrfinal = hrinicio+hrs;
    minfinal = mininicio+min;
    segfinal = seginicio+seg;
    printf("Termino do experimento:%dhoras,%dminutos e %dsegundos",hrfinal, minfinal,segfinal);

    return 0;
    
}