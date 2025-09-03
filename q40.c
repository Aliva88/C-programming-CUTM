#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,div,mod;
    printf("enter a and b");
    scanf("%d %d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("sum=%d\nsub=%d\nmul=%d\ndiv=%d\nmod=%d",sum,sub,mul,div,mod);
    return 0;
}