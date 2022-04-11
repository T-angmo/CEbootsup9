#include<stdio.h>
int main()
{
    int person,food;
    scanf("%d", &person);
    int a = (person/4); //ต้องใส่ค่าก่อน แล้วค่อยเขียนการคำนวณ
    if(a>0) {
        person = person-(a*4);
        food = (a*747)+(person*249);
    }
    else {
        food = person*249;
    }
    printf("%d", food);

    return 0;
}