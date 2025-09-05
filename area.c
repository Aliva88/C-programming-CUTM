#include<stdio.h>
int main()
{
    float r,area;
    float pi=3.14;
    printf("enter the radius");
    scanf("%f",&r);
    area=pi*r*r;
    printf("the area of the circle is %f",area);
    return 0;
}