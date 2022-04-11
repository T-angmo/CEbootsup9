#include<stdio.h>
int main(){
    double x,y,z;
    int n;
        scanf("%lf %lf %d", &x, &y, &n);
    z = ((y-x)*(n-1))+x;
    printf("%.6lf", z);

    return 0;
}