#include<stdio.h>

int main()
{
    int A,B,C,D,E,F;
    int i,j,k;
    scanf("%d %d %d\n%d %d %d", &A, &B, &C, &D, &E, &F);
    i =(B*F)-(C*E);
    j =(C*D)-(A*F);
    k =(A*E)-(B*D);
    printf("(%d)i+(%d)j+(%d)k", i,j,k);
    return 0;
}