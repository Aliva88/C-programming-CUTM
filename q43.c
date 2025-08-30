#include<stdio.h>
void main()
{
    int num,result,n;
    printf("enter num");
    scanf("%d",&num);
    for(n=1;n<=10;n++)
    {
        result=num*n;
        printf("%d*%d=%d\n",num,n,result);
    }
}