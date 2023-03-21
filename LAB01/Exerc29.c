#include<stdio.h>

int main()
{
    float x;
    float y;
    float w;
    float z;
    float R;
    printf ("digite quatro notas\n");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &w);
    scanf("%f", &z);
    R = (x + y + w + z) / 4;
    printf ("A media aritmetica dessas notas eh %f", R);
    return 0;
}
