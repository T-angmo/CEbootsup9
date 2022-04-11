#include<stdio.h>

int main()
{
    float x1,y1,x2,y2;
    float m,n;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    m =(x1+x2)/2;
    n =(y1+y2)/2;
    printf("X=%.2f\n", m);
    printf("Y=%.2f", n);

    return 0;
}