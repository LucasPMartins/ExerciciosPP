#include<stdio.h>
#include<string.h>

struct aluno{
    char nome[30];
    char matricula[20];
    float notas[3];
};

int main(){
    struct aluno c[5];
    int i,j;
    int maior,menor;
    float media[5];
    for(i = 0;i<5;i++){
        printf("Digite o nome do aluno %d:",i);
        setbuf(stdin,NULL);
        fgets(c[i].nome,30,stdin);
        printf("Digite o numero da matricula do aluno %d:",i);
        setbuf(stdin,NULL);
        fgets(c[i].matricula,20,stdin);
        for(j=0;j<3;j++){
            printf("Digite a nota %d do aluno %d:",j,i);
            setbuf(stdin,NULL);
            scanf("%f",&c[i].notas[j]);
        }
    }
    for(i=0;i<5;i++){
        maior = 0;
        for(j=0;j<5;j++){
            if(c[i].notas[0]>c[j].notas[0]){
                maior++;
            }
        }
        if(maior==4){
            printf("O aluno %s tem a maior nota (%.1f)\n",c[i].nome,c[i].notas[1]);
        }       
    }
    for(i=0;i<5;i++){
        media[i]= c[i].notas[0] + c[i].notas[1] + c[i].notas[2];
    }
    for(i=0;i<5;i++){
        maior = 0;
        menor = 0;
        for(j=0;j<5;j++){
            if(media[i]>media[j]){
                maior++;
            }
            if(media[i]<media[j]){
                menor++;
            }
        }
        if(maior==4){
            printf("O aluno %s tem a maior media geral (%.1f)\n",c[i].nome,media[i]);
        }
        if(menor==4){
            printf("O aluno %s tem a menor media geral (%.1f)\n",c[i].nome,media[i]);
        }       
    }
    for(i=0;i<5;i++){
        if(media[i]>=6){
            printf("Aluno %s aprovado\n",c[i].nome);
        }else{
            printf("Aluno %s reprovado\n",c[i].nome);
        }
    }
    return 0;  
}
