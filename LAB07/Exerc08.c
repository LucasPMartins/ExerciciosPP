#include<stdio.h>
#include<string.h>

/*Faça um programa que leia seis números e armazene-os em um vetor.
Utilizando aritmética de ponteiro, imprima os valores do vetor. O programa
deve apresentar também o endereço de memória desses números.*/

int main(){
    int x[6];
    int *p;
    for(int i = 0;i<6;i++){
        printf("Digite um valor %d:",i+1);
        setbuf(stdin,NULL);
        scanf("%d",&x[i]);
    }
    p = x;
    for(int i = 0;i<6;i++){
        printf("Valor vetor %d:%d\n",i+1,*(p+i));
        printf("Endereco do vetor %d:%p\n",i+1,p+i);  
    }
    return 0;
}