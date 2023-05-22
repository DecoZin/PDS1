#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float x,y,z,m;
    int o;
    scanf("%d\n%f\n%f\n%f",&o,&x,&y,&z);
    switch (o){
        m = 0;
        case 1:
            m = cbrt(x*y*z);
            break;
        case 2:
            m = (x+2*y+3*z)/6;
            break;
        case 3:
            m = 3/(1/x+1/y+1/z);
            break;
        case 4:
            m = (x+y+z)/3;
            break;
    }
    printf("%.2f",m);

    return 0;
}
