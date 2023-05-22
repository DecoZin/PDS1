#include<stdio.h>
#include<stdlib.h>

int main(){
    int cpf;
    scanf("%d",&cpf);
    int a,b,c,d,e,f,g,h,i;
    a = cpf/100000000;
    b = cpf/10000000 - 10*a;
    c = cpf/1000000 - 100*a -10*b;
    d = cpf/100000 -1000*a - 100*b - 10*c;
    e = cpf/10000 - 10000*a - 1000*b - 100*c - 10*d;
    f = cpf/1000 -100000*a - 10000*b - 1000*c - 100*d - 10*e;
    g = cpf/100 -1000000*a -100000*b-10000*c-1000*d-100*e-10*f;
    h = cpf/10 - 10000000*a -1000000*b-100000*c-10000*d-1000*e-100*f-10*g;
    i = cpf/1 -100000000*a -10000000*b-1000000*c-100000*d-10000*e-1000*f-100*g-10*h;
    int x,y,dv,uv;
    x = (i*2+h*3+g*4+f*5+e*6+d*7+c*8+b*9+a*10);
    if(x%11 <= 1){
        dv = 0;
    }
    else{
        dv = 11 - x%11;
    }
    y = (2*dv+3*i+4*h+5*g+6*f+7*e+8*d+9*c+10*b+11*a);
    if(y%11 <= 1){
        uv = 0;
    }
    else{
        uv = 11 - y%11;
    }
    printf("%d%d",dv,uv);

    return 0;
}
