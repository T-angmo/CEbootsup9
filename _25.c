#include<stdio.h>
int main()
{
    float m,a,F;
    scanf("%f %f", &m, &a);
    F =m*a;
    printf("%.6f = %.6f x %.6f", F,m,a);
    
    return 0;
}