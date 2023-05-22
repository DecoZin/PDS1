#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int num_c(char s[100],char c){
    int l = strlen(s);
    int n=0;
    for(int i=0;i<l;i++){
        if(s[i]==c)
            n++;
    }
    return n;
}
int main(){
    char str[100],car;
    fgets(str,sizeof(str),stdin);
    scanf("%c",&car);
    printf("%d",num_c(str,car));

    return 0;
}
