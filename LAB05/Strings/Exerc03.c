#include<stdio.h>
#include<string.h>

int main (){
    char str[30];
    int i;
    printf("Digite uma palavra:");
    fgets(str,30,stdin); 
    printf("A palavra digitada de tras-para-frente eh:");
    for(i=strlen(str)-1;i>=0;i--){      
        printf("%c",str[i]);
    }
    return 0;
}