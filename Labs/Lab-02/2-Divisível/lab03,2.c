#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
   int x,y,z;
   scanf("%d\n%d\n%d",&x,&y,&z);
   if(x % y == 0 && x % z == 0){
    printf("O n�mero � divis�vel");
   }
   else {
    printf("O n�mero n�o � divis�vel");
   }
    return 0;
}
