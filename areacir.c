#include<stdio.h>
const int pi=3.14159;
void main()
{
    int r1,r=7;
    float area,cir;
    area=pi*r*r;
    printf("area of the circle is %f\n",area);
    printf("enter the radius");
    scanf("%d",&r1);
    cir= 2*pi*r1;
    printf("circumference of the circle is %f",cir);
}