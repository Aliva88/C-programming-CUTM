#include<stdio.h>
int func(int);
int func(int n)
{
    int a=0,b=1,i,c;
    printf("%d\n%d\n",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    func(n);
    return 0;
}