#include<stdio.h>

int main()
{
    const float pi = 3.141592;
    float G, R;
    scanf ("%f", &R);
    G = R*180/pi,
    printf ("Certo angulo \"%f\" em radianos eh igual a \"%f\" em graus", R, G);
    return 0;
}