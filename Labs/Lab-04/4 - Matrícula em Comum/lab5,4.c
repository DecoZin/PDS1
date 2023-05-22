#include<stdio.h>
#include<stdlib.h>

int main(){
    int vaeds[1000];
    int vcal1[1000];
    int nAa,nAc,i,j,mna,mnc;
    scanf("%d",&nAa);
    for(i=0;i<nAa;i++){
        scanf("%d",&mna);
        vaeds[i]=mna;
    }
    scanf("%d",&nAc);
    for(i=0;i<nAc;i++){
        scanf("%d",&mnc);
        vcal1[i]=mnc;
    }
    for(i=0;i<=nAa;i++){
            for(j=0;j<=nAc;j++){
                if(vaeds[i]== vcal1[j])
                    printf("%d\n",vcal1[j]);
            }
    }
    return 0;
}
