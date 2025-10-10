#include<stdio.h>
void func(int);
void func(int num)
{
    int i,sum=0,n;
    n=num;
    while(num!=0)//23(t)//2(t)//0(f)
    {
        i=num%10;//3//2
        sum=i+sum;//3//5
        num=num/10;//2//0
    }
    printf("The sum of %d is %d",n,sum);//5
}
int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    func(num);
    return 0;
}