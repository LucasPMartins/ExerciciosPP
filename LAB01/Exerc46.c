#include <stdio.h>
#include<math.h>

int main(){
    int x, y, y1, r, r1, z;
    printf("\n\nDigite um numero de tres digitos:\n");
    scanf("%d",&x);
    r = x/100;
    r1 = x % 100;
    y = r1/10;
    y1 = r1 % 10;
    printf("%d%d%d",y1,y,r);
    return 0;
}
