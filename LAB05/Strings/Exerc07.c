#include<stdio.h>
#include<string.h>

int main(){
    char frase[100];
    int i,j;
    printf("Digite uma frase:");
    fgets(frase,100,stdin);
    for(i=0,j=0;i<strlen(frase);i++){
        if(frase[i]!=' '){
            frase[j] = frase[i];
            j++;
        }
    }
    frase[j] = '\0';
    printf("%s",frase);
    return 0;
}