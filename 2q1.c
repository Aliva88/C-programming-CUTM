#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter 3 numbers ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2&&num2>num3)
    printf("%d num1 is greater",num1);
else if(num2>num3)
printf("%d num2 is greater",num2);
else
printf("%d num3 is greater",num3);
return 0;
}