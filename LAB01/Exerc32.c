#include<stdio.h>

int main ()
{
    int x;
    int R;
    int R2;
    int R3;
    printf("Digite um numero:");
    scanf ("%d", &x);
    R = (x + 1)*3;
    R2 = (x - 1)*2;
    R3 = R + R2;
    printf ("A soma do sucessor de seu triplo \ncom o antecessor de seu dobro eh %d", R3);
    return 0;
}
