#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Pessoa{
    char nome[50];
    int idade;
    struct Pessoa *filhos;
    int numFilhos;
};

void buscaPessoa(struct Pessoa *pessoaAsc,char nomeProcurado[],int nivel,int imprimeNivel){
    nivel=0;
    imprimeNivel=0;
    if(strcmp(pessoaAsc.filhos.nome,nomeProcurado)==0){
        nivel=1;
        imprimeNivel=1;
    }
    if(strcmp(pessoaAsc.filhos.filhos.nome,nomeProcurado)==0){
        nivel=2;
        imprimeNivel=1;
    }
    if(strcmp(pessoaAsc.filhos.filhos.filhos.nome,nomeProcurado)==0){
        nivel=3;
        imprimeNivel=1;
    }
    if(strcmp(pessoaAsc.filhos.filhos.filhos.filhos.nome,nomeProcurado)==0){
        nivel=4;
        imprimeNivel=1;
    }
    if(strcmp(pessoaAsc.filhos.filhos.filhos.filhos.filhos.nome,nomeProcurado)==0){
        nivel=5;
        imprimeNivel=1;
    }
    if(strcmp(pessoaAsc.filhos.filhos.filhos.filhos.filhos.filhos.nome,nomeProcurado)==0){
        nivel=6;
        imprimeNivel=1;
    }
    if(strcmp(pessoaAsc.filhos.filhos.filhos.filhos.filhos.filhos.filhos.nome,nomeProcurado)==0){
        nivel=7;
        imprimeNivel=1;
    }
    if(strcmp(pessoaAsc.filhos.filhos.filhos.filhos.filhos.filhos.filhos.filhos.nome,nomeProcurado)==0){
        nivel=8;
        imprimeNivel=1;
    }
    if(strcmp(pessoaAsc.filhos.filhos.filhos.filhos.filhos.filhos.filhos.filhos.filhos.nome,nomeProcurado)==0){
        nivel=9;
        imprimeNivel=1;
    }
    if(imprimeNivel==1){
        printf("%d",nivel);
    }
}

int main(){
    int n,m,i,j,imprimeNivel=1,nivel;
    char pm[50],desc[50],asc[50];
    scanf("%d",&n);
    struct Pessoa p[n];
    for(i=0;i<n,i++){
        p[i].filhos = (int *) malloc(p[i].numFilhos*sizeof(int));
        scanf("%s",&p[i].nome);
        scanf("%d",&p[i].idade);
        scanf("%s",&pm);
        for(j=0;j<i,j++){
            if(strcmp(pm,p[j].nome)==0){
                p[j].numFilhos++;
                p[j].filhos = realloc(p[j].filhos,p[j].numFilhos*sizeof(int));
                p[j].*filhos = p[i];
            }
        }
    }
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%s",&desc);
        scanf("%s",&asc);
        for(j=0;j<n;j++){
            if(strcmp(asc,p[j].nome)==0){
                struct Pessoa* buscaPessoa(*p,desc,nivel,imprimeNivel);
            }
        }
    }

    return 0;
}
