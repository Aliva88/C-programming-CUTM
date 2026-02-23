#include<stdio.h>
void check(int num)
{
    if(num<0)
    {
        printf("a is negetive");
    }
    else if(num>0)
    {
        printf("a is positive");
    }
    else
    {
        printf("0");
    }
}
void main()
{
    int a;
    printf("enter a ");
    scanf("%d",&a);
    check(a);
}