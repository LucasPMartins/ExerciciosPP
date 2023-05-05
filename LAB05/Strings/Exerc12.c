#include <stdio.h>
#include <string.h>

int main (){
    char frase[200];
    int i;
    printf("Digite uma frase:");
    fgets(frase,200,stdin);
    for(i=0;i<strlen(frase);i++){
        if(frase[i]>=65&&frase[i]<=90){
            frase[i] = frase[i] + 3;
        }
        if(frase[i]>=97&&frase[i]<=122){
            frase[i] = frase[i] - 32;
            if(frase[i]>=65&&frase[i]<=90){
                if(frase[i]>=88&&frase[i]<=90){
                    switch (frase[i])
                    {
                    case 88:
                        frase[i] = 65;
                        break;
                    case 89:
                        frase[i] = 66;
                        break;
                    case 90:
                        frase[i] = 67;
                        break;
                    default:
                        break;
                    }
                }
                frase[i] = frase[i] + 3;
            }
        }
    }
    
    printf("--->>>Codificando a frase<<<---\n");
    printf("Frase codificada:");
    printf("%s",frase);
    return 0;
}