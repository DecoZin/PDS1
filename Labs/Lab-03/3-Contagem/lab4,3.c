#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=233;
    while(228<=a && a<=300){
        a = a+5;
        printf("%d\n",a);
    }
    while(300<a && a<=400){
        a = a+3;
        printf("%d\n",a);
    }
    while(400<a && a<=452){
        a = a+5;
        printf("%d\n",a);
    }
    return 0;
}

