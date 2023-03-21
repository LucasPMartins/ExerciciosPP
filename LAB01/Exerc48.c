#include<stdio.h>
#include<math.h>

int main()
{
    int seg;
    int min;
    int minrest;
    int hrs;
    int hrsrest;
    printf("Digite um valor inteiro em segundos:");
    scanf("%d", &seg);
    hrs = seg/3600;
    hrsrest = seg%3600;
    min = hrsrest/60;
    minrest = hrsrest%60;
    seg = minrest;
    printf("%dhoras,%dminutos e %dsegundos",hrs,min,seg);
    return 0;
    
}