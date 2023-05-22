#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n,t,**p1,i,j;
    scanf("%d",&n);
    scanf("%d",&t);
    p1 = (int**)malloc(n*sizeof(int *));
    for(i=0;i<n;i++){
        p1[i] = (int *)malloc(t*sizeof(int *));
        for(j=0;j<t;j++){
            scanf("%d",&p1[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<t;j++){
            printf("%d ",p1[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        free(p1[i]);
    }
    free(p1);

    return 0;
}
