#include<stdio.h>
void func(int,int);
void func(int num1,int num2)
{
    int sum,sub,mul,div,mod;
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    mod=num1%num2;
    printf("%d %d %d %d %d",sum,sub,mul,div,mod);
}
int main()
{
    int a,b;
    printf("Enter 2 number ");
    scanf("%d %d",&a,&b);
    func(a,b);
    return 0;
}