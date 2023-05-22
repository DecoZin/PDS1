#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct iris{
    float comprimento_s;
    float largura_s;
    float comprimento_p;
    float largura_p;
    char tipo[50];
};

void classificar(struct iris nao_identificada,struct iris registros_identificados[],int n){
    float distancia[n];
    int i;
    for(i=0;i<n;i++){
        distancia[i] = sqrt(((nao_identificada.comprimento_s - registros_identificados[i].comprimento_s) * (nao_identificada.comprimento_s - registros_identificados[i].comprimento_s)) + ((nao_identificada.largura_s - registros_identificados[i].largura_s) * (nao_identificada.largura_s - registros_identificados[i].largura_s)) + ((nao_identificada.comprimento_p - registros_identificados[i].comprimento_p) * (nao_identificada.comprimento_p - registros_identificados[i].comprimento_p))+ ((nao_identificada.largura_p - registros_identificados[i].largura_p) * (nao_identificada.largura_p - registros_identificados[i].largura_p)));
    }
    int menor=0;
    for(i=1;i<n;i++){
        if(distancia[i]<distancia[menor]){
            menor=i;
        }
    }
    printf("%s",registros_identificados[menor].tipo);
}

int main(){
    int n;
    scanf("%d",&n);
    struct iris registro[n];
    for(int i=0;i<n;i++){
        scanf("%f",&registro[i].comprimento_s);
        scanf("%f",&registro[i].largura_s);
        scanf("%f",&registro[i].comprimento_p);
        scanf("%f",&registro[i].largura_p);
        scanf("%s",&registro[i].tipo);
    }
    struct iris nao_identificada;
    scanf("%f",&nao_identificada.comprimento_s);
    scanf("%f",&nao_identificada.largura_s);
    scanf("%f",&nao_identificada.comprimento_p);
    scanf("%f",&nao_identificada.largura_p);
    classificar(nao_identificada,registro,n);

    return 0;
}
