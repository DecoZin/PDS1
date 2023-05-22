#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int x=0;
    int soma;
    int s=0;
    scanf("%d",&n);
    for(;s<=n;s++){
        soma = x + s;
        x=soma;
    }
    printf("%d\n",x);
    return 0;
}


