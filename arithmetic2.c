#include<stdio.h>
int main()
{
    int num1,num2;
    int sum,sub,mul,div,mod;
    printf("Enter 2 number ");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    mod=num1%num2;
    printf("Addition = %d\nSubstaction = %d\nMultiplication = %d\nDivision = %d\nModular Devision = %d",sum,sub,mul,div,mod);
    return 0;
}