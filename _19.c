#include<stdio.h>

int main()
{
    int a,b,c[100],d;
    scanf("%d", &a);
    d =a;
    int i=99;
    for(;a>=8;i--) {
        c[i]=a%8;
        a/=8;        
    }
    printf("%d", a);
    for(i=i+1;i<100;i++) {
        printf("%d", c[i]);
    }
    printf("%d", d);

    int j=0,e;
    char hexa[50];
    for(;d>0;j++)
    {
        e=d%16;
        d/=16;
        if(e<10)
        {
            e+=30;
        }
        if(e>=10){
            e+=87;
        }
        hexa[j]=e;
    }
    for(;j>=0;)
    {
        printf("%s", hexa[--j]);
    }
    return 0;
}
    
