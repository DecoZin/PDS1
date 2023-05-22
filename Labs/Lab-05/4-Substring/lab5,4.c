#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>


int main(){
    setlocale(LC_ALL,"Portuguese");
    char s[50],sub[50];
    int c1=0,c2=0,i,j,f;
    gets(s);
    gets(sub);
    c1 = strlen(s);
    c2 = strlen(sub);
    for(i=0;i<=c1-c2;i++){
        for(j=i;j<1+c2;j++){
            f=1;
            if(s[j]!=sub[j-i]){
                f = 0;
                break;
            }
        }
        if(f==1)
            break;
    }
    if(f==1)
        printf("É substring");
    else
        printf("Não é substring");

    return 0;
}

