#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
   int x,y,z;
   scanf("%d\n%d\n%d",&x,&y,&z);
   if(x % y == 0 && x % z == 0){
    printf("O número é divisível");
   }
   else {
    printf("O número não é divisível");
   }
    return 0;
}
