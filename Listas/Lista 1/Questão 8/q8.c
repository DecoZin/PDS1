#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    float h,p;
    char sexo[100];
    p = 0;
    scanf("%f%",&h);
    gets(sexo);
    if(strcmp(sexo,"homem")== 0){
        p = 72.7*h - 58;
        printf("%.2f",p);
    }
    else{
        p = 62.1*h - 44.7;
        printf("%.2f",p);
    }


    return 0;
}
