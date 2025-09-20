#include<stdio.h>
void func(int,int);
void func(int num1,int num2)
{
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("a=%d\nb=%d",num1,num2);
}
int main()
{
    int a,b;
    printf("enter a and b");
    scanf("%d %d",&a,&b);
    printf("a=%d\nb=%d\n",a,b);
    func(a,b);
    return 0;
}