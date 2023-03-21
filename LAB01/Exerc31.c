#include<stdio.h>

int main ()
{
    int x;
    int R;
    int R2;
    printf("Digite um numero:");
    scanf ("%d", &x);
    R = x - 1;
    R2 = x + 1;
    printf("O antecessor desse numero eh %d\n", R);
    printf("e o sucessor desse numero eh %d", R2);
    return 0;
}