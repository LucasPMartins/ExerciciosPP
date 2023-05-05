#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    char l1,l2;
    int i;
    printf("Digite uma palavra:");
    fgets(str,30,stdin);
    printf("Digite a letra que deseja trocar:");
    scanf("%c",&l1);
    setbuf(stdin,NULL);//limpa o buffer
    printf("Digite uma letra:");
    scanf("%c",&l2);
    for (i = 0; i < strlen(str); i++){
        if(str[i] == l1){
            str[i] = l2;
        }      
    }
    printf("Trocando L1 por L2 temos: %s",str);
    return 0;   
}