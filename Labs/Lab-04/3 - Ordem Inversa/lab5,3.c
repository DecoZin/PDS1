#include<stdio.h>
#include<stdlib.h>

int main(){
    int vet[10];
    int i,x;
    for(i=0;i<10;i++){
        scanf("%d",&x);
        vet[i]=x;
    }
    for(i=9;i>=0;i--){
        printf("%d\n",vet[i]);
    }


    return 0;
}
