#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

const int m[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

int dt(int a,int b,int c)
{
    int dias=0;
    for(int i = c; i<= 2020;i++)
    {
        if(i%4 == 0)
        {
            dias +=366;
        }
        else
        {
            dias+=365;
        }
    }
    dias -= a;
    for(int i=b-1;i>0;i++)
    {
        dias -= m[i];
    }
    if(c%4 != 0 && b>2)
    {
        dias+=1;
    }
    dias -= 366-261;
    return dias +1;
}

int main()
{
    int a,b,c;
    while(1)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a==-1)
        {
            break;
        }
        printf("%d\n",dt(a,b,c));
    }
}
