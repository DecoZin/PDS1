#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    struct endereco{
        char rua[50];
        unsigned int num;
        char estado[50];
    };
    struct registro{
        char nome[50];
        unsigned int idade;
        float salario;
        struct endereco ende;
    };
    struct registro R[5];
    int i=0,j;
    char op[10];
    char MosNome[50];
    char AltNome[50];
    while(fgets(op, 10, stdin)){
        if(strcmp(op,"inserir\n")==0){
            if(i<5){
                scanf("%s",R[i].nome);
                scanf("%d",&R[i].idade);
                scanf("%f",&R[i].salario);
                scanf("%s",R[i].ende.rua);
                scanf("%d",&R[i].ende.num);
                scanf("%s",R[i].ende.estado);
                printf("Registro %s %d %.2f %s %d %s inserido\n",R[i].nome,R[i].idade,R[i].salario,R[i].ende.rua,R[i].ende.num,R[i].ende.estado);
                i++;
            }
            else{
                printf("Espaco insuficiente\n");
            }
        }
        else if(strcmp(op,"mostrar\n")==0){
            scanf("%s",MosNome);
            int ausente = 0;
            for(j=0;j<5;j++){
                if(strcmp(MosNome,R[j].nome)==0){
                    printf("Registro %s %d %.2f %s %d %s\n",R[i].nome,R[i].idade,R[i].salario,R[i].ende.rua,R[i].ende.num,R[i].ende.estado);
                    ausente = 1;
                }
            }
            if(ausente == 0)
                printf("Registro ausente\n");
        }
        else if(strcmp(op,"alterar\n")==0){
            scanf("%s",AltNome);
            int ausenteA = 0;
            for(j=0;j<5;j++){
                if(strcmp(AltNome,R[j].nome)==0){
                    scanf("%s",R[j].nome);
                    scanf("%d",&R[j].idade);
                    scanf("%f",&R[j].salario);
                    scanf("%s",R[j].ende.rua);
                    scanf("%d",&R[j].ende.num);
                    scanf("%s",R[j].ende.estado);
                    printf("Registro %s %d %.2f %s %d %s alterado\n",R[i].nome,R[i].idade,R[i].salario,R[i].ende.rua,R[i].ende.num,R[i].ende.estado);
                    ausenteA = 1;
                }
            }
            if(ausenteA == 0)
                printf("Registro ausente para alteracao\n");
        }
    }

    return 0;
}
