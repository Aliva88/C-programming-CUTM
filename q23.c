#include<stdio.h>
void main()
{
    int year;
    printf("enter year");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("the year is leap year");
    }
    else
    {
        printf("the year is not a leap year");
    }
}