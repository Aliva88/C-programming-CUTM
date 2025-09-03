#include<stdio.h>
int main()
{
    int a,b=1,sum,n;
    printf("Enter n ");
    scanf("%d",&n);
    for(a=0;b<=n;b++)
    {
        sum=a+b;
        a=sum;
    }
    printf("sum=%d\n",sum);
    return 0;
}