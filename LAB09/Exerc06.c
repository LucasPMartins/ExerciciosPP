#include<stdio.h>
#include<math.h>
#define PI 3.1415

/*Implemente uma função que calcule a área da superfície e o volume de uma
esfera de raio R. Essa função deve obedecer ao protótipo:
void calc_esfera(float R, float *area, float *volume);
A área da superfície e o volume são dados, respectivamente, por:*/

void calc_esfera(float R, float *area, float *volume);

int main(){
    float r;
    float area;
    float volume;
    printf("--- Calcular Area e Volume ---\n");
    printf("Digite o raio:");
    setbuf(stdin,NULL);
    scanf("%f",&r);
    calc_esfera(r,&area,&volume);
    printf("A area da superfice eh: %f\n",area);
    printf("O volume da esfera eh: %f",volume);
    return 0;
}

void calc_esfera(float R, float *area, float *volume){
    *area = 4 * PI * pow(R,2);
    *volume = 4/3 * PI * pow(R,3);
}

