#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char s[50];
    int i=-1;
    fgets(s,sizeof(s),stdin);
    while(s[i]!='\0'){
        i++;
    }
    for(;i>=0;i--){
        printf("%c",s[i]);
    }

    return 0;
}

