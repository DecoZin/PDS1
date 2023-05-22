#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void soma(int v1[],int v2[],int v[],int t){
    int i;
    v1 = (int *)malloc(t*sizeof(int *));
    for(i=0;i<t;i++){
        scanf("%d",&v1[i]);
    }
    v2 = (int *)malloc(t*sizeof(int *));
    for(i=0;i<t;i++){
        scanf("%d",&v2[i]);
    }
    for(i=0;i<t;i++){
        v[i] = v1[i] + v2[i];
    }
}

int main(){
    int t,i;
    scanf("%d",&t);
    int v[t],v1[t],v2[t];
    soma(v1,v2,v,t);
    for(i=0;i<t;i++){
        printf("%d\n",v[i]);
    }

    return 0;
}
