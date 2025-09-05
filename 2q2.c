#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    if(num%3==0&&num%5==0)
    printf("The number is divisible by 3 & 5");
else
printf("The number is not divisible by 3 & 5");
return 0;
}