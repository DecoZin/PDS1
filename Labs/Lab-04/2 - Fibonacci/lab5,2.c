#include<stdio.h>
#include<stdlib.h>

int main(){
    int fib[801];
    int i,n;
    fib[0] = 0;
    fib[1] = 1;
    for(i=2;i<801;i++){
          fib[i]=fib[i-1] + fib[i-2];
    }
    while(1){
        n = 0;
       scanf("%d",&n);
       if(n>=0 && n<=800)
       printf("%d\n",fib[n]);
       else
        break;
    }
    return 0;
}
