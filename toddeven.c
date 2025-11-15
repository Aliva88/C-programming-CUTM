#include<stdio.h>
int main()
{
    int year;
    printf("Enter year ");
    scanf("%d",&year);
    printf("%d is %s",year,(year%4==0?"a leap year":"not a leap year"));
    return 0;
}