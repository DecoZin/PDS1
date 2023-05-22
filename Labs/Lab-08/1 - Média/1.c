#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void media(double vet[], int n, int *i){
    double med=0;
    int j;
    int mais_prox=0;
    int x=0, y=0;
    for(j=0;j<n;j++){
            med = med + vet[j];
    }
    med = med/n;
    for(j=0;j<n;j++){
        int a = med-vet[j];
        int b = med-vet[mais_prox];
        if(a<0)
            x = vet[j]-med;
        else if(a>0)
            x = a;
        if(a==0)
            mais_prox=j;
        if(b<0)
            y = vet[mais_prox]-med;
        else if(b>0)
            y = b;
        if(x<y)
            mais_prox=j;

    }
    printf("%f\n",med);
    *i = mais_prox;
}
int main(){
    int n,m,j;
    m=0;
    scanf("%d",&n);
    double vetor[n];
    for(j=0;j<n;j++){
        scanf("%lf",&vetor[j]);
    }
    media(vetor,n,&m);
    printf("%d",m);

    return 0;
}
