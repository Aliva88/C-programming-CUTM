#include<stdio.h>
void fumc(int);
void func(int n)
{
    int i;
    long long fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Fectorial of %d is %lld",n,fact);
}
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    func(n);
    return 0;
}