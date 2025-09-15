#include<stdio.h>
int main()
{
    int num,i,rev=0;
    printf("Enter a number ");
    scanf("%d",&num);
    while(num!=0)
    {
        i=num%10;
        rev=rev*10+i;
        num=num/10;
    }
    printf("Reverse od the number is=%d",rev);
    return 0;
}