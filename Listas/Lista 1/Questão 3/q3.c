#include<stdio.h>
#include<stdlib.h>

int main(){
    float a,b,c,p1,p2,p3,m;
    scanf("%f\n%f\n%f\n%f\n%f\n%f",&a,&b,&c,&p1,&p2,&p3);
    m = 0;
    m = ((a*p1)+(b*p2)+(c*p3))/(p1+p2+p3);
    printf(".2%f",m);

    return 0;
}
