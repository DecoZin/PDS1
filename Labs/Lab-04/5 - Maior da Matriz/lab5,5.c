#include<stdio.h>
#include<stdlib.h>

int main(){
    int matriz[100][100];
    int i,j,l,c,n,Maior;
    Maior = 0;
    scanf("%d\n%d",&l,&c);
    for(i = 0; i<l ; i++){
        for(j = 0; j<c ; j++){
            scanf("%d",&n);
            matriz[i][j] = n;
        }
    }
    for(i = 0; i<l ; i++){
        for(j = 0; j<c ; j++){
            if(matriz[i][j]>Maior)
            Maior = matriz[i][j];
        }
    }
    printf("%d",Maior);

    return 0;
}
