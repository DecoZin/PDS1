#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int x;
    int m2 = 0;
    int m3 = 0;
    int m5 = 0;
    int mt = 0;
    scanf("%d",&x);
    int M2 = 0;
    int M3 = -1;
    int M5 = 0;
    int MT = -1;
    while(m2<x){
            m2 = m2+2;
            M2++;
    }
     while(m3<x){
            m3 = m3+3;
            M3++;
    }
     while(m5<x){
            m5 = m5+5;
            M5++;
    }
     while(mt<x){
            mt = mt+30;
            MT++;
    }
printf("Múltiplos de 2:%d\nMúltiplos de 3:%d\nMúltiplos de 5:%d\nMúltiplos de todos:%d",M2,M3,M5,MT);
    return 0;
}
