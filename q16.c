#include<stdio.h>
void main()
{
    int a;
    printf("enter a");
    scanf("%d",&a);
    if(a<0)
    {
        printf("a is negetive");
    }
    else if(a>0)
    {
        printf("a is positive");
    }
    else
    {
        printf("a=%d",a);
    }
}