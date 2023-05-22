#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b+c && b<a+c && c<a+b){
        if(a == b && a == c){
            printf("equilatero");
        }
        else if(a == b || a == c || c == b){
            printf("isoceles");
        }
        else {
            printf("escaleno");
        }
    }
    else{
        printf("nao forma triangulo");
    }

    return 0;
}
