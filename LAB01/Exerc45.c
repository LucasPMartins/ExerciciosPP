#include <stdio.h>
#include <math.h>

int main ()
{
   char letra;
   int r,r1,r2;
   printf("Digite uma letra:");
   scanf("%c", &letra);
   r = (int)letra;

if ((r <= 90) && (r >= 60))
{
   r1 = r + 32;
   r2 = (char)r1;
   printf("%c = %c", letra, r2);
}
if ((r >= 97) && (r <= 122))
{
   r1 = r - 32;
   r2 = (char)r1;
   printf("%c = %c", letra, r2);
}
   return 0;
}