#include<stdio.h>
#include<stdlib.h>

int main(){
    float i1,i2,i3;
    float m;
    int o;
    scanf("%f\n%f\n%f\n%d",&i1,&i2,&i3,&o);
    if(o>3 || o<1){
        printf("Erro");
    }
            switch(o){
                case 1:
                    if (i1 >= i2 && i1 >= i3){
        printf("%d\n",i1);
    }
    else if (i2 >= i1 && i2 >= i3){
        printf("%d\n", i2);
    }
    else {
        printf("%d\n",i3);
    }
    break ;
                case 2:
                    if (i1 <= i2 && i1 <= i3){
        printf("%d\n",i1);
    }
    else if (i2 <= i1 && i2 <= i3){
        printf("%d\n", i2);
    }
    else {
        printf("%d\n",i3);
    }
    break;
                case 3:
                    m = (i1+i2+i3)/3;
                    printf("%.2f\n",m);
                    break;
            }
    return 0;
}

