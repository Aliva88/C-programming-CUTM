#include<stdio.h>
void main()
{
    int a,b,result;
    printf("enter a and b");
    scanf("%d %d",&a,&b);
    if(a!=0&&b==0)
    {
        printf("undifind");
    }
    else if(a==0&&b==0)
    {
        printf("infinite");
    }
    else if(a%b!=0)
    {
        float result=(float)a/(float)b;
        printf("result=%f",result);
    }
    else
    {
        result=a/b;
        printf("result=%d",result);
    }
}