#include<stdio.h>

/*3. Faça um algoritmo utilizando o comando while 
que mostra uma contagem regressiva na tela,iniciando
em 10 e terminando em 0. Mostrar uma mensagem “FIM!” 
após a contagem.*/

int main ()
{
    int contagem = 10;
    int contador = 1;

    while(contador<11&&contador>0){
        printf("%d\n",contagem);
        contador++;
        contagem--;
        if(contagem==0){
            printf("%d\n",contagem);
            printf("Fim!");
        }
    }
    return 0;
}