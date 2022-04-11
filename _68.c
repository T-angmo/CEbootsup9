#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    scanf("%lf", &a);
    b=(a*10000)-floor(a*10000);
    if(b>=0.5)
    {
        a=ceil(a*10000);
    }
    else if(b<0.5)
    {
         a=floor(a*10000);
    }
    b=a/10000;
    printf("%.4lf", b);
    
    return 0;
}
