#include<stdio.h>
#include<stdlib.h>

int main(){
    int tab[11][11];
    int i,j;
    for(i=1;i<=10;i++){
        printf("\n");
        for(j=1;j<=10;j++){
            tab[i][j]= i*j;
            printf("%d ",tab[i][j]);
        }
    }

    return 0;
}
