#include<stdio.h>
#include<stdlib.h>

/*Faça um programa que receba do usuário o tamanho de uma string e
chame uma função para alocar dinamicamente essa string. Em seguida,
o usuário deverá informar o conteúdo dessa string. O programa imprime
a string sem suas vogais.*/

int main(){
    int i,N;
    char *p;
    printf("Digite o tamanho da string:\n");
    setbuf(stdin,NULL);
    scanf("%d",&N);
    p = (char *) malloc(N*sizeof(char));
    printf("Digite a string:");
    setbuf(stdin,NULL);
    fgets(p,N,stdin);
    printf("A string sem vogal:\n");
    for(i = 0;*(p+i)!='\0';i++){
        if(*(p+i)!='a'&&*(p+i)!='e'&&*(p+i)!='i'&&*(p+i)!='o'&&*(p+i)!='u'&&*(p+i)!='A'&&*(p+i)!='E'&&*(p+i)!='I'&&*(p+i)!='O'&&*(p+i)!='U'){
            printf("%c",*(p+i));
        }
    }
    free(p);
    return 0;
}