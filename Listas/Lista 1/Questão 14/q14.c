#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int m2 = 0;
    int m3 = 0;
    int m5 = 0;
    int mt = 0;
    int M2 = 0;
    int M3 = -1;
    int M5 = 0;
    int MT = -1;
    while(m2<1000){
            m2 = m2+2;
            M2++;
    }
     while(m3<1000){
            m3 = m3+3;
            M3++;
    }
     while(m5<1000){
            m5 = m5+5;
            M5++;
    }
     while(mt<1000){
            mt = mt+30;
            MT++;
    }
printf("Múltiplos de 2:%d\nMúltiplos de 3:%d\nMúltiplos de 5:%d\nMúltiplos de todos:%d",M2,M3,M5,MT);
    return 0;
}

