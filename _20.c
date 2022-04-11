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
    return 0;
}