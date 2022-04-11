#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,z;
    int n;
    scanf("%lf %lf %d", &x, &y, &n);
    if(n>0 && x!=0) {
        z = x*(pow((y/x),(n-1)));
        printf("%.6lf",z);
    }
    else {
        printf("ERROR");
    }

    return 0;
}