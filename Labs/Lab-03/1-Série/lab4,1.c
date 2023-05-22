#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,x0,x1;
    int nn;
    scanf("\n%d\n%d\n%d",&n,&x0,&x1);
    printf("X0:%d \nX1:%d \n",x0,x1);
    for(int xn = 2;xn<=n;xn++){
        nn = 4*(x1) - 2*(x0);
        printf("X%d:%d\n",xn,nn);
        x0 = x1;
        x1 = nn;

    }
    return 0;
}


