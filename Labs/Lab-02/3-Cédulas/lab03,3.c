#include<stdio.h>
#include<stdlib.h>

int main(){
    int x;
    scanf("%d",&x);
    int a,b,c,d,e,f,g;
    a = x / 100;
    printf("100:%d\n",a);
    b = (x - a * 100) / 50;
    printf("50:%d\n",b);
    c = (x - a*100 - b*50) / 20;
    printf("20:%d\n",c);
    d = (x - a*100 - b*50 - c*20) / 10;
    printf("10:%d\n",d);
    e = (x - a*100 - b*50 - c*20 - d*10) / 5;
    printf("5:%d\n",e);
    f = (x - a*100 - b*50 - c*20 - d*10 - e*5) / 2;
    printf("2:%d\n",f);
    g = (x - a*100 - b*50 - c*20 - d*10 - e*5 - f*2) / 1;
    printf("1:%d\n",g);
    return 0;
}

