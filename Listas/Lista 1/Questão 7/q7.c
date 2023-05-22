#include<stdio.h>
#include<stdlib.h>

int main(){
    float a,b,r;
    int o;
    r=0;
    scanf("%d%f%f",&o,&a,&b);
    if (o<1 || o>4){
        printf("Erro");
    }
    else{
        switch(o){
        case 1:
            r = (a+b)/2;
            printf("%.2f",r);
            break;
        case 2:
            if(a>b){
                r = a-b;
            }
            else{
                r = b-a;
            }
            printf("%.0f",r);
            break;
        case 3:
            r = a*b;
            printf("%.0f",r);
            break;
        case 4:
            if(b!=0){
                r = a/b;
                printf("%.2f",r);
            }
            else{
                printf("Nao existe");
            }
            break;

    }
    }
    return 0;
}
