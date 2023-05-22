#include<stdio.h>
#include<stdlib.h>

int main(){
    char matriz[100][100];
    int i,j,t,nx,X,Y,perdeu;
    char n;
    int qntJ,Jogos,qntj,jogada;
    scanf("%d",&qntJ);
    for(Jogos = 0; Jogos < qntJ; Jogos++){
            nx = 0;
            perdeu = 1;
            scanf("%d",&t);
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
            scanf("%d",&qntj);
            for(jogada=0;jogada<qntj;jogada++){
                    scanf("%d%d",&X,&Y);
                    if(matriz[X][Y] == (char)98){
                       perdeu = 0;
                    }
                    else;{
                            for(i=-1;i<2;i++){
                                for(j=-1;j<2;j++){
                                    if(matriz[X+i][Y+j]== 1){
                                        matriz[X+i][Y+j] = 0;
                                    }
                                }
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

