#include<stdio.h>

int main()
{
    const float pi = 3.141592;
    float G, R;
    scanf ("%f", &G);
    R = G*pi/180;
    printf ("Certo angulo \"%f\" em graus eh igual a \"%f\" em radianos", G, R);
    return 0;
}