#include<stdio.h>

void main()
{
    const int a=39;
    int b=83;
    printf("a %d\n",a);
    b=4;
    printf("b %d\na=%d\n",b,a);
    //a=3;
    printf("a=%d",a);
}