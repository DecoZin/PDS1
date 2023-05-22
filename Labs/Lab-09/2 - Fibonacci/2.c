#include<stdio.h>
#include<stdlib.h>

int fib(int n){
    if(n==0||n==1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}
int main(){
    int x,f;
    scanf("%d",&x);
    f = fib(x);
    printf("%d",f);

    return 0;
}
