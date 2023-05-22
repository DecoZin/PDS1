
#include<stdio.h>
#include<stdlib.h>

int main(){
    int matriz1[100][100];
    int i,ir,j,jr,l1,l2,c1,c2,n;
    scanf("%d\n%d",&l1,&c1);
    for(i = 0; i<l1 ; i++){
        for(j = 0; j<c1 ; j++){
            scanf("%d",&n);
            matriz1[i][j] = n;
        }
    }
    int matriz2[100][100];
    scanf("%d\n%d",&l2,&c2);
    for(i = 0; i<l2 ; i++){
        for(j = 0; j<c2 ; j++){
            scanf("%d",&n);
            matriz2[i][j] = n;
        }
    }
    int matrizR[100][100];
    for(ir= 0; ir<l1 ; ir++){
        for(jr=0 ; jr<c2 ; jr++){
                for(i= 0; i<l1 ; i++){
                    for(j=0 ; j<c2 ; j++){
                        matrizR[ir][jr] = matrizR[ir][jr] + matriz1[i][j]*matriz2[j][i];
                }
            }
            printf("%d ",matrizR[ir][jr]);
        }
        printf("\n");
    }
    return 0;
}
