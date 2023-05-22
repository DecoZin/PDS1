#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char frase[100];
    char feliz[3] = ":)";
    char feliz1[4] = ":-)";
    char triste[3] = ":(";
    char triste1[4] = ":-(";
    char animado[3] = ":D";
    char clpf[3] = ":P";
    char dr[3] = "XD";
    char amor[3] = "<3";
    char chorando[4] = ":*(";
    char chorando1[4] = ":'( ";
    char alegre[4] = "^-^";
    char fofo[3] = ":3";
    char preocupado[3] = ":S";
    char cdqng[3] = ":\\";
    char bravo[4] = ">:(";
    char malvado[4] = ">:)";
    char burro[4] = "<:-";
    char descrente[4] = "O_o";
    char torcendo[4] = "\\ o/";
    char piscando[3] = ";)";
    char beijo[3] = ":*";
    fgets(frase,sizeof(frase),stdin);
    int P =0,N=0,c1=0,c2=0,i;
    c1 = strlen(frase);
    for(i=0;i<c1;i++){
            if(frase[i]==feliz[0] && frase[i+1]==feliz[1]){
                P++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==feliz1[0] && frase[i+1]==feliz1[1] && frase[i+2]==feliz1[2]){
                P++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==triste[0] && frase[i+1]==triste[1]){
                N++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==triste1[0] && frase[i+1]==triste1[1] && frase[i+2]==triste1[2]){
                N++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==animado[0] && frase[i+1]==animado[1]){
                P++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==clpf[0] && frase[i+1]==clpf[1]){
                N++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==dr[0] && frase[i+1]==dr[1]){
                P++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==amor[0] && frase[i+1]==amor[1]){
                P++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==chorando[0] && frase[i+1]==chorando[1]){
                N++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==chorando1[0] && frase[i+1]==chorando1[1] && frase[i+2]==chorando1[2]){
                N++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==alegre[0] && frase[i+1]==alegre[1] && frase[i+2]==alegre[2]){
                P++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==fofo[0] && frase[i+1]==fofo[1]){
                P++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==preocupado[0] && frase[i+1]==preocupado[1]){
                N++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==cdqng[0] && frase[i+1]==cdqng[1]){
                N++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==bravo[0] && frase[i+1]==bravo[1] && frase[i+2]==bravo[2]){
                N++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==malvado[0] && frase[i+1]==malvado[1] && frase[i+2]==malvado[2]){
                N++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==burro[0] && frase[i+1]==burro[1] && frase[i+2]==burro[2]){
                N++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==descrente[0] && frase[i+1]==descrente[1] && frase[i+2]==descrente[2]){
                N++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==torcendo[0] && frase[i+1]==torcendo[1] && frase[i+2]==torcendo[2]){
                P++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==piscando[0] && frase[i+1]==piscando[1]){
                P++;
            }
    }
    for(i=0;i<c1;i++){
            if(frase[i]==beijo[0] && frase[i+1]==beijo[1]){
                P++;
            }
    }
    if(P-N<0){
        printf("Negativa");
    }
    else if(P-N==0){
        printf("Neutra");
    }
    else{
        printf("Positiva");
    }

    return 0;
}

