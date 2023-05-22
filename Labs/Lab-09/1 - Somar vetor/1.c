#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int soma(int vetor[1000],int tamanho){
    if(tamanho == 1)
        return vetor[0];
    else
        return vetor[tamanho-1] + soma(vetor,tamanho-1);
}
int main(){
    int v[1000],t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&v[i]);
    }
    int s = soma(v,t);
    printf("%d",s);

    return 0;
}
