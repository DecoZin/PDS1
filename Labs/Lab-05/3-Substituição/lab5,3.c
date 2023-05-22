#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char s[50];
    char c1,c2;
    int i=0;
    fgets(s,sizeof(s),stdin);
    scanf(" %c",&c1);
    scanf(" %c",&c2);
    for(;i<50;i++){
        if(s[i] == '\0')
            break;
        if(s[i] == c1){
            s[i] = c2;
            break;
        }
    }
    printf("%s",s);

    return 0;
}
