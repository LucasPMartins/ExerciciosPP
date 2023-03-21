#include<stdio.h>

int main()
{
    int X;
    int Y;
    int Z;
    int R;
    printf ("digite tres valores\n");
    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);
    R = X*X + Y*Y + Z*Z;
    printf ("A soma dos quadrados dos tres valores lidos eh %d", R);
    return 0;
}