#include<stdio.h>
#include<math.h>

int eh_triangulo(int a,int b,int c); 
int classficao(int a,int b,int c);

int main(){
    unsigned int a,b,c;
    printf("Digite um valor para a:");
    scanf("%u",&a);
    printf("Digite um valor para b:");
    scanf("%u",&b);
    printf("Digite um valor para c:");
    scanf("%u",&c);
    eh_triangulo(a,b,c);
    return 0;
}

int eh_triangulo(int a,int b,int c){
    if((a<(b+c))&&(b<(a+c))&&(c<(a+b))){
        printf("Eh um triagulo!\n");
        classficao(a,b,c);     
    }
    else{
        return printf("Nao eh um triagulo!");}
}
int classficao(int a,int b,int c){
    if(a==b&&b==c&&a==c){
        return printf("Eh um triagulo equilatero!");
    }
    if((a==b&&b!=c)||(a!=b&&b==c)||(a==c&&c!=b)){
        return printf("Eh um triagulo isosceles!");
    }
    if(a!=b&&b!=c&&a!=c){
        return printf("Eh um triagulo escaleno!");
    }
}
