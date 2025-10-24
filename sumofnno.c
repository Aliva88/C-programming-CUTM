#include<stdio.h>
int main()
{
    int a=0,b=1,sum,n;
    printf("Enter n ");
    scanf("%d",&n);
    do
    {
        sum=a+b;
        a=sum;
        printf("%d\n",sum);
        b++;
    }
    while(b<=n);
    printf("sum=%d\n",sum);
    return 0;
}