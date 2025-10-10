#include<stdio.h>
int main()
{
    int num1,num2,num3,sum,avg;
    printf("enter num1 num2 and num3");
    scanf("%d %d %d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    printf("sum=%d\n",sum);
    avg=sum/3;
    printf("avgerage=%d",avg);
    return 0;
}