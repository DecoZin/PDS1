#include<stdio.h>
#include<stdlib.h>

int main(){
    char matriz[100][100];
    int i,j,t,nx,X,Y,perdeu;
    char n;
    int qntJ,Jogos,qntj,jogada;
    printf("Quantidade de jogos:");
    scanf("%d",&qntJ);
    for(Jogos = 0; Jogos < qntJ; Jogos++){
            nx = 0;
            perdeu = 1;
            printf("Tamanho da matriz:");
            scanf("%d",&t);
            printf("Matriz:\n");
            for(i = 0; i<t ; i++){
                for(j = 0; j<t ; j++){
                        scanf("\t%c",&n);
                        matriz[i][j] = (char)n;
                        if (n == (char)120){
                            matriz[i][j] = 1;
                            nx++;
                        }
                }
            }
            printf("O nx = %d\n",nx);
            printf("Quantidade de jogadas:");
            scanf("%d",&qntj);
            for(jogada=0;jogada<qntj;jogada++){
                    printf("\nValor de X e Y:");
                    scanf("%d%d",&X,&Y);
                    if(matriz[X][Y] == (char)98){
                       perdeu = 0;
                    }
                    if(matriz[X-1][Y-1]!=(char)98 && matriz[X-1][Y]!=(char)98 && matriz[X-1][Y+1]!=(char)98 && matriz[X][Y-1]!=(char)98 && matriz[X][Y]!=(char)98 && matriz[X][Y+1]!=(char)98 && matriz[X+1][Y-1]!=(char)98 && matriz[X+1][Y]!=(char)98 && matriz[X+1][Y+1]!=(char)98){
                            for(i=-1;i<2;i++){
                                for(j=-1;j<2;j++){
                                    if(matriz[X+i][Y+j]== 1){
                                        matriz[X+i][Y+j] = 0;
                                    }
                                }
                            }

                    }
                    for(i = 0; i<t ; i++){
                        printf("\n");
                        for(j = 0; j<t ; j++){
                            printf("%d ",matriz[i][j]);
                        }
                    }
            }
            for(i = 0; i<t ; i++){
                for(j = 0; j<t ; j++){
                        if (matriz[i][j]==0){
                            nx--;
                        }
                }
            }
            printf("O nx = %d\n",nx);
            if (perdeu == 0){
                printf("PERDEU\n");
            }
            else if(nx == 0 && perdeu == 1){
                printf("GANHOU\n");
            }
            else{
                printf("FALTOU TERMINAR\n");
            }
    }
    return 0;
}
