#include<stdio.h>
int main()
{
    int a,b,sum;
    int *p1,*p2,*p3;
    p1=&a;
    p2=&b;
    printf("Enter the value of a and b ");
    scanf("%d %d",p1,p2);
    sum=*p1+*p2;
    p3=&sum;
    printf("Sum of 2 numbers is %d",*p3);
    return 0;
}