#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *arq;
    char c;
    int i;
    arq = fopen("arquivo.txt","r");
    if(arq == NULL){
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }
    while((c = fgetc(arq)) != EOF){
        printf("%c",c);
    }
    fclose(arq);

    return 0;
}

