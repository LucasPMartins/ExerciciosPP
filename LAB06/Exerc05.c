#include<stdio.h>
#include<string.h>

struct vetor
{
    float a;
    float b;
    float c;
};

int main(){
    struct vetor cord[2];
    int x,y,z;
    for(int i = 0;i<2;i++){
        printf("Digite a coordenada do vetor %d:",i);
        setbuf(stdin,NULL);
        scanf("%f%f%f",&cord[i].a,&cord[i].b,&cord[i].c);
    }
    x = (cord[0].a+cord[1].a);
    y = (cord[0].b+cord[1].b);
    z = (cord[0].c+cord[1].c);
    printf("A soma dos dois vetores eh (%d,%d,%d)",x,y,z);
    return 0;
}
