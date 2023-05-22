#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n,*p,i;
    scanf("%d",&n);
    p = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\n",p[i]);
    }
    free(p);

    return 0;
}
