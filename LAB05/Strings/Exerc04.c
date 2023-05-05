#include<stdio.h>
#include<string.h>

int main (){
    char str[50];
    char letra;
    int i,temvogal = 0;
    printf("Digite uma palavra:");
    fgets(str,50,stdin);
    for(i=0;i<strlen(str);i++){
        if(str[i]=='a'){
            temvogal++;
        }
        if(str[i]=='e'){
            temvogal++;
        }
        if(str[i]=='i'){
            temvogal++;
        }
        if(str[i]=='o'){
            temvogal++;
        }
        if(str[i]=='u'){
            temvogal++;
        }
    }
    printf("A palavra tem %d vogais\n",temvogal);
    printf("Digite um caractere:");
    scanf("%c",&letra);
    for(i=0;i<strlen(str);i++){
        if(str[i]=='a'){
            str[i] = letra;
        }
        if(str[i]=='e'){
            str[i] = letra;
        }
        if(str[i]=='i'){
            str[i] = letra;
        }
        if(str[i]=='o'){
            str[i] = letra;
        }
        if(str[i]=='u'){
            str[i] = letra;
        }
    }
    printf("Substituindo todas as vogais pelo caractere fica:");
    printf("%s",str);
    return 0;
}