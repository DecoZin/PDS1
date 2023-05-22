#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,t;
    t=0;
    scanf("%d",&n);
    for(i=1;i<11;++i){
       t = n*i;
       printf("%d\n",t);
    }

    return 0;
}
