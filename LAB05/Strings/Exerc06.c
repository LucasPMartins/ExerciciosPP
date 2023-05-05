#include<stdio.h>
#include<string.h>

int main (){
    char palavra[50];
    int i;
    printf("Digite uma palavra:");
    fgets(palavra,50,stdin);
    for(i=0;i<strlen(palavra);i++){
        if(palavra[i]>=97&&palavra[i]<=122){
            palavra[i] = palavra[i] - 32;
        }
    }
    printf("Convertendo as letra minusculas em maiusculas:");
    printf("%s",palavra);
    return 0;
}