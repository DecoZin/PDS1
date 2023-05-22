#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char *nstr(char str[100],char c){
    int l = strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]==c){
            for(int j=i;j<l;j++){
                str[j]=str[j+1];
            }
        }
    }
    return str;
}
int main(){
    char s[100],car;
    fgets(s,sizeof(s),stdin);
    scanf("%c",&car);
    char s2[100];
    strcpy(s2,nstr(s,car));
    printf("%s",s2);

    return 0;
}
