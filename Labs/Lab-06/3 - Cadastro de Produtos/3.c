#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct produto{
    char n[50];
    char m[50];
    float p;
};
int main(){
    struct produto P[8];
    char ms[5][50];
    int q[8] = {0,0,0,0,0,0,0,0};
    float pM[8] = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
    int cM = 0;
    for(int i=0;i<8;i++){
        scanf("%s%s%f",&P[i].n,&P[i].m,P[i].p);
    }
    for(int i=0;i<8;i++){
        int iM = -1;
        for(int j=0;j<8;j++){
            if(strcmp(ms[j],P[i].m) == 0){
                iM = j;
                break;
            }
        }
        if(iM == -1){
            strcpy(ms[cM],P[i].m);
            q[cM]+=1;
            pM[cM]+=1;
            cM++;
        }
        else{
            q[iM]+=1;
            pM[iM]+=P[i].p;
        }
    }
    for(int i=0;i<cM;i++){
        printf("%s %d\n",ms[i],q[i]);
    }
    float tp = 0.0;
    float ti = 0.0;
    for(int i=0;i<cM;i++){
        ti+=q[i];
        tp+=pM[i];
    }
    float pm = tp/ti;
    printf("media total %.2f\n",pm);
    for(int i=0;i<cM;i++){
        float mm=pM[i]/q[i];
        printf("media %s %.2f\n",ms[i],mm);
    }

    return 0;
}
// g++ 3.c -o arquivo3 -build
//./arquivo3           -run
