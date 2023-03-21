#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    int y;
    int r, r2, r3;
    printf("O ponto de origem eh (0,0) \n");
    printf("Digite as coordenadas x e y: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    r = pow(x,2);
    r2 = pow(y,2);
    r3 = sqrt(r + r2);
    printf("A distancia entre o ponto de origem e a coordenada digitada eh %d ", r3);
    return 0;
}