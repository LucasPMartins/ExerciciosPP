#include<stdio.h>
#include<string.h>
#include<math.h>
#define pi 3.1415

struct coordenada_polar
{
    int raio;
    int argumento_rad;
};
struct coordenada_cart
{
    int x,y;
};

int main(){
    struct coordenada_polar c;
    struct coordenada_cart p;
    printf("Digite o raio:");
    setbuf(stdin,NULL);
    scanf("%d",&c.raio);
    printf("Digite o argumento em radianos:");
    setbuf(stdin,NULL);
    scanf("%d",&c.argumento_rad);
    p.x = c.raio*cos(c.argumento_rad);
    p.y = c.raio*sin(c.argumento_rad);
    printf("As coordenadas polares convertidas em coordenadas polares:");
    printf("[%d,%d]",p.x,p.y);
    return 0;   
}