#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void primos(int m,int *p1,int *p2){
    int ehprimo;
    for(int a=m-1; a<m; a--){
        ehprimo = 1;
        for(int i=2; i<a; i++){
            if(a % i == 0)
            ehprimo = 0;
        }
        if(ehprimo == 1){
            *p1 = a;
            break;
        }
    }
    for(int b = m+1; b>m; b++){
        ehprimo = 1;
        for(int i=2; i<b; i++){
            if(b % i == 0)
            ehprimo = 0;
        }
        if(ehprimo == 1){
            *p2= b;
            break;
        }
    }
}
int main(){
    int N,pA,pD;
    scanf("%d",&N);
    primos(N,&pA,&pD);
    printf("%d\n%d",pA,pD);

    return 0;
}
