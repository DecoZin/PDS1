#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    struct registro{
        char nome[50];
        unsigned idade;
        float salario;
    };
    struct registro R[4];
    int i=0,j;
    char opIns[10] = "inserir";
    char opMos[10] = "mostrar";
    char MosNome[50];
    char op[8];
    int idade=0;
    float salario=0;
    while(fgets(op, sizeof(op), stdin)){
        if(strcmp(op,opIns)==0){
            if(i<4){
                scanf("%s",R[i].nome);
                scanf("%d",&R[i].idade);
                scanf("%f",&R[i].salario);
                printf("Registro %s %d %.2f inserido\n",R[i].nome,R[i].idade,R[i].salario);
                i++;
            }
            else{
                printf("Espaco insuficiente\n");
            }
        }
        if(strcmp(op,opMos)==0){
            scanf("%s",MosNome);
            int ausente = 0;
            for(j=0;j<4;j++){
                if(strcmp(MosNome,R[j].nome)==0){
                    printf("Registro %s %d %.2f\n",R[j].nome,R[j].idade,R[j].salario);
                    ausente = 1;
                }
            }
            if(ausente == 0)
                printf("Registro ausente\n");
        }
    }

    return 0;
}
