#include <stdio.h>
#include <string.h>

int main (){
    int i,num,opcao,contador;
    int posicao, tamanho;
    char str1[20],str2[20],str3[20];
    char C1,C2;
    do{
        printf("--- Menu de Opcoes ---\n");
        printf("Opcao 1:Ler uma string S1\n");
        printf("Opcao 2:Imprimir o tamanho da string S1\n");
        printf("Opcao 3:Comparar a string S1 com uma nova string S2\n");
        printf("Opcao 4:Concatenar a string S1 com uma nova string S2\n");
        printf("Opcao 5:Imprimir a string S1 de forma reversa\n");
        printf("Opcao 6:Contar quantas vezes um dado caractere aparece na string S1\n");
        printf("Opcao 7:Substituir o C1 da string S1 pelo caractere C2\n");
        printf("Opcao 8:Verificar se uma string S2 eh substring de S1\n");
        printf("Opcao 9:Retornar uma substring da string S1\n");
        printf("Opcao 10:Sair\n");
        printf("Digite sua opcao:");
        scanf("%d",&num);
        switch (num){
        case 1:
            printf("Digite a string:");
            scanf("%s",str1);
            opcao = 2;
            break;
        case 2:
            printf("O tamanho a string eh %d\n\n",strlen(str1));
            opcao = 2;
            break;
        case 3:
            printf("Digite a string S2:");
            scanf("%s",str2);
            if(strcmp(str1,str2)==0){
                printf("Strings S1 e S2 sao iguais!\n\n");
            }else{
                printf("Strings S1 e S2 nao sao iguais!\n\n");
            }
            opcao = 2;
            break;
        case 4:
            strcat(str1,str2);
            printf("A string S1 concatenada com S2 eh %s\n\n",str1);
            opcao = 2;
            break;
        case 5:
            for(i=strlen(str1)-1;i>=0;i--){      
                printf("%c",str1[i]);
                if(i==0){
                    printf("\n\n");
                }
            }
            opcao = 2;
            break;
        case 6:
            printf("Digite um carcatere:");
            setbuf(stdin,NULL);
            scanf("%c",&C1);
            contador = 0;
            for(i=0;i<strlen(str1);i++){
                if(str1[i] == C1){
                    contador++;
                }
            }
            printf("O C1 %c aparece %d vezes na string S1\n\n",C1,contador);
            opcao = 2;
            break;
        case 7:
            printf("Digite um caractere C1:");
            setbuf(stdin,NULL);
            scanf("%c",&C1);
            printf("Digite um caractere C1:");
            setbuf(stdin,NULL);
            scanf("%c",&C2);
            
            for(i=0;i<strlen(str1);i++){
                if(str1[i] == C1){
                    str1[i] = C2;
                }
            }
            printf("Nova string: %s\n\n",str1);
            opcao = 2;
            break;
        case 8:
            printf("Digite a string S2:");
            setbuf(stdin,NULL);
            scanf("%s",str2);
            if (strstr(str1,str2) != NULL) {
                printf("A string S2 eh uma substring de S1.\n\n");
            }else {
                printf("A string S2 nao eh uma substring de S1.\n\n");
            }
            opcao = 2;
            break;
        case 9:
            printf("Digite a posicao a partir da qual a substring sera criada: ");
            scanf("%d", &posicao);
            printf("Digite o tamanho da substring: ");
            scanf("%d", &tamanho);
            strncpy(str3, &str1[posicao], tamanho);
            str3[tamanho] = '\0';
            printf("A substring de S1 eh: %s\n\n", str3);
            opcao = 2;
            break;
        case 10:
            opcao = 0;
            break;
        }
    }while(opcao==2);
    
    return 0;
}