#include<stdio.h>
#include<string.h>

/*Peça ao usuário para digitar seus dados pessoais (Nome, Endereço, Data de Nascimento,
Cidade, CEP, e-mail), verifique se as informações de Data de Nascimento, CEP e e-mail fazem
sentido, e mostre ao usuário as informações, se estão todas corretas, ou mostre que alguma
informação estava errada*/

typedef struct{
    char nome[30];
    char endereco[40];
    int data[3];
    char cidade[20];
    char cep[10];
    char email[40];
}dados;

int main(){
    int i,j;
    int tamanho,tamanhoemail,ehvalido;
    int datavalida;
    dados c;
    printf("Digite seus dados pessoais:\n");
    printf("Digite seu nome:");
    setbuf(stdin,NULL);
    fgets(c.nome,30,stdin);
    printf("Digite seu endereco:");
    setbuf(stdin,NULL);
    fgets(c.endereco,40,stdin);
    printf("Digite sua data de nascimento (dd/mm/aaaa):");
    scanf("%d/%d/%d",&c.data[0],&c.data[1],&c.data[2]);
    printf("Digite sua cidade:");
    setbuf(stdin,NULL);
    fgets(c.cidade,20,stdin);
    printf("Digite o CEP da cidade:");
    setbuf(stdin,NULL);
    fgets(c.cep,10,stdin);
    printf("Digite o seu E-mail:");
    setbuf(stdin,NULL);
    fgets(c.email,40,stdin);
    tamanho = strlen(c.cep);
    if(tamanho==9){
        if(c.cep[5]=='-'){
            printf("CEP valido!\n");
        }else{
            printf("CEP invalido!\n");
        }
    }else{
        printf("CEP invalido!\n");
    }
    tamanhoemail = strlen(c.email);
    for(i=0;i<tamanhoemail;i++){
        ehvalido = 0;
        if((c.email[i]=='.')&&(c.email[i+1]=='c')&&(c.email[i+2]=='o')&&(c.email[i+3]=='m')){
            ehvalido = 1;
            break;
        }  
    }
    if(ehvalido){
        printf("E-mail valido!\n");
    }else{
        printf("E-mail invalido!\n");
    }
    datavalida = 1;
    if(c.data[2]>2023){
        datavalida = 0;
    }
    else{
        if(c.data[1]<1||c.data[1]>12){
            datavalida = 0;
        }else{
            if(c.data[2]%4==0){
                if(c.data[1]==2){
                    if(c.data[0]<1||c.data[0]>29){
                        datavalida = 0;
                    }
                }else{
                    if(c.data[0]<1||c.data[0]>31){
                        datavalida = 0;
                    }
                }
            }else{
                if(c.data[1]==2){
                    if(c.data[0]<1||c.data[0]>28){
                        datavalida = 0;
                    }
                }else{
                    if(c.data[0]<1||c.data[0]>31){
                        datavalida = 0;
                    }
                }
            }
        }
    }
    if(datavalida){
        printf("Data de nascimento valida!\n");
    }else{
        printf("Data de nascimento invalida!\n");
    }
    return 0;
}