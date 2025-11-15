#include<stdio.h>
const float pi=3.14159;
int main()
{
    float area, circumference,r;
    printf("Enter the radius ");
    scanf("%f", &r);
    area=pi*r*r;
    circumference = 2*pi*r;
    printf("Area of the circle is %f\n",area);
    printf("Circumference of the circle is %f",circumference);
    return 0;
}
