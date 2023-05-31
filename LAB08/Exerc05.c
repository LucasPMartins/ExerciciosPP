#include<stdio.h>
#include<string.h>

/*Elabore um programa que receba duas strings digitadas pelo usuário e
verifique se a segunda string ocorre dentro da primeira. Use aritmética de
ponteiros para acessar os caracteres das strings*/

int main(){
    char str1[50];
    char str2[50];
    int i,tamanho1,tamanho2,sub;
    printf("Digite um string:");
    setbuf(stdin,NULL);
    fgets(str1,50,stdin);
    tamanho1 = strlen(str1);
    printf("Digite outra string:");
    setbuf(stdin,NULL);
    fgets(str2,50,stdin);
    sub = 0;
    for(i=0;i<tamanho1;i++){
        if(*(str1+i)==*(str2+i)&&*(str1+2)==*(str2+2)){
            printf("A segunda string ocorre dentro da primeira\n");
            printf("Substring:");
            break;
        }
    }
    for(i=0;i<tamanho1;i++){
        if(*(str1+i)==*(str2+i)&&*(str1+2)==*(str2+2)){
            while(*(str1+i)==*(str2+i)){
                printf("%c",*(str2+i));
                sub = 1;
                i++;
            }
            if(*(str1+i)!=*(str2+i)){
                break;
            }
        }  
    }
    if(sub==0){
        printf("A segunda string nao ocorre dentro da primeira\n");
        }
    return 0;
}