#include<stdio.h>
#include<stdlib.h>

int main(){
    int matriz[100][100];
    int i,j,l,c,n;
    scanf("%d\n%d",&l,&c);
    for(i = 0; i<l ; i++){
        for(j = 0; j<c ; j++){
            scanf("%d",&n);
            matriz[i][j] = n;
        }
    }
    return 0;
}

