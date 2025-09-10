#include<stdio.h>
void func(int yr)
{
    if(yr%4==0)
    printf("The year is leap year");
else
printf("The year is not a leap year");
}
int main()
{
    int year;
    printf("Enter year ");
    scanf("%d",&year);
    func(year);
    return 0;
}