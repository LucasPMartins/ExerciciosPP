#include <stdio.h>
#include <math.h>

int main ()
{
    float ad;//altura do degrau
    float a;/*altura que o usuário deseja
          alcançar subindo a escada*/
    float r;
    printf("Digite a altura que voce deseja subir em centimetros:");
    scanf("%f", &a);
    printf("Digite a altura de cada degrau da escada em centimetros:");
    scanf("%f", &ad);
    r = a/ad;
    printf("Voce subiu %f degraus!", r);
    return 0;
}