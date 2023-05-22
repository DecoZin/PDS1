#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void funcao(float *v,int n);

int main(){
    float array[100];
    for(int i=0;i<100;i++){
        array[i]=i;
    }
    funcao(array[80],20);

    return 0;
}

void funcao(float *v,int n){
    for(int i=0;i<n;i++){
        printf(" %.1f ",v[i]);
    }
}
