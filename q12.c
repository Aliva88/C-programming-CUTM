#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("enter a and b to swap");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d\nb=%d",a,b);

}