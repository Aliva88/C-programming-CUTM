#include<stdio.h>
int func(int);
int func(int n)
{
    return n*func(n);
}
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    func(n);
    printf("The square of %d is %d",n,func(n));
    return 0;
}