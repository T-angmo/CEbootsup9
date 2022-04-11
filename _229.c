#include<stdio.h>

int main()
{
    float x1,x2,y1,y2;
    float m,c;
    scanf("%f %f,%f %f", &x1, &y1, &x2, &y2);
    int i =(x1==x2 && y1==y2);
    // printf("%d\n",i);
    m =(y2-y1)/(x2-x1);
    c =y1-(m*x1);
    if(i!=1) //ถ้าm!=0 คือขนานแกนx not y
    {
        printf("y=%.2fx+%.2f", m, c);
    }
        
    return 0;
}