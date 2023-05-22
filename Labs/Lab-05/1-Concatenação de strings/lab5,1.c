#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char s1[50];
    char s2[50];
    gets(s1);
    gets(s2);
    strcat(s1,s2);
    printf("%s",s1);

    return 0;
}

