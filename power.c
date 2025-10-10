#include<stdio.h>
int main()
{
    long long num,power,num1,i;
    printf("Enter number ");
    scanf("%lld",&num);
    printf("Enter power ");
    scanf("%lld",&power);
    num1=num;
    for(i=1;i<power;i++)
    {
        num=num*num1;
    }
    printf("POWER=%lld",num);
    return 0;
}