#include<stdio.h>

int main()
{
    int a,b,c,d,i,j;
    scanf("%d %d\n%d %d", &a, &b, &c, &d);
    i = (a*c)-(b*d);
    j =(a*d)+(b*c);
    printf("(%d)+(%d)i", i, j);
    
    return 0;
}