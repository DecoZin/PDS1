#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int VAL_GLB = 7;
const int *END_GLB = &VAL_GLB;

void pglobais(void){
    int sem_uso = 99;
    printf("end glb %p\n",END_GLB);
    printf("val glb %p\n",VAL_GLB);
}

int main(void){
    double a=VAL_GLB;
    double *r=&a;
    printf("end loc r: %p\n",r);
    printf("val loc a: %p\n",a);
    a+=11;
    r+=1;
    printf("Linha 19: %p\n",r);
    printf("Linha 20: %f\n",*r);
    printf("Linha 21: %p\n",&a);
    printf("Linha 22: %f\n",a);

    pglobais();
    return 0;
}
