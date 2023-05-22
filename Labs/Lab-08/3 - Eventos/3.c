#include<stdio.h>
#include<stdlib.h>
#include<string.h>
enum mes{x,j,f,mr,ab,mi,jn,jl,ag,st,ou,nv,dz};

struct data{
    int dia;
    enum mes m;
    int ano;
};
struct evento{
    char nome[100];
    char local[100];
    struct data dat;
};

void cadastrar_eventos(struct evento agenda[],int n){
    for(int i=0;i<n;i++){
        scanf("%s",agenda[i].nome);
        scanf("%s",agenda[i].local);
        scanf("%d%d%d",&agenda[i].dat.dia,&agenda[i].dat.m,&agenda[i].dat.ano);
    }
}

void imprimir_eventos(struct evento agenda[],struct data d,int n){
    int ok_evento = 1;
    for(int i=0;i<n;i++){
        if(d.dia==agenda[i].dat.dia && d.m==agenda[i].dat.m && d.ano==agenda[i].dat.ano){
            ok_evento = 0;
            printf("%s %s\n",agenda[i].nome,agenda[i].local);
        }
    }
    if(ok_evento==1){
        printf("Nenhum evento encontrado!");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    struct evento agenda[n];
    cadastrar_eventos(agenda,n);
    struct data d;
    scanf("%d%d%d",&d.dia,&d.m,&d.ano);
    imprimir_eventos(agenda,d,n);

    return 0;
}
