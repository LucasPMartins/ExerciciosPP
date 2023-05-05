#include<STDIO.H>
#include<string.h>

int main (){
    char str[100];
    int i;
    printf("Digite uma frase:");
    fgets(str,100,stdin);
    int tamanho = strlen(str);
    for(i = 0;i<tamanho;i++){
        if(str[i]=='r'&&(str[i+1]<'a'||str[i+1]>'z')&&(str[i+1]<'A'||str[i+1]>'Z')){
            continue;
        }
        if (str[i] == 'r' && str[i+1] == 'r')
        {
            for(int j = i+1;j<tamanho;j++){
            if(j==i){
                str[i]=str[i+1];
            }
            str[j]=str[j+1];
            }
        }
        if(str[i]=='r'){
            str[i]='l';
        }
        else if(str[i]=='R'){
            str[i]='L';
        }
    }
    printf("%s",str);
    return 0;
}
