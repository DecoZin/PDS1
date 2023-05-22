#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;
    int ehprimo;
    scanf("%d\n%d",&a,&b);
    if(b<10000)
    for(; a<=b; a++) {
        ehprimo = 1;
            for(int i=2; i<a && ehprimo ==1; i++){
                if(a % i == 0)
                ehprimo = 0;
            }
            if(ehprimo != 0)
                printf("%d\n",a);
    }
    return 0;
}

