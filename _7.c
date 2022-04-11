#include<stdio.h>
int main()
{   
    int A,B,C,D,E,F,x;
    scanf("%d %d %d", &A, &B, &C);
    scanf("%d %d %d", &D, &E, &F);
    x = (A*D)+(B*E)+(C*F);
    printf("%d", x);

    return 0;
}