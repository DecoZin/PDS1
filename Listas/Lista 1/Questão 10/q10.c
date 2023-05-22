#include<stdio.h>
#include<stdlib.h>

int main(){
    float sb,s;
    s = 0;
    scanf("%f",&sb);
    if(sb<=350){
        s = (sb+100)-7*(sb)/100;
        printf("%.2f",s);
    }
    else if(sb>350 && sb<=600){
        s = (sb+75)-7*(sb)/100;
        printf("%.2f",s);
    }
     else if(sb>600 && sb<=900){
        s = (sb+50)-7*(sb)/100;
        printf("%.2f",s);
    }
    else{
        s = (sb+35)-7*(sb)/100;
        printf("%.2f",s);
    }

    return 0;
}
