#include<stdio.h>
int main()
{
    int num1,num2;
    int x,ans;
    printf("Enter 2 numbers ");
    scanf("%d %d",&num1,&num2);
    if(num1 >= num2)
    {
        x=num2;
    }
    else{
        x=num1;
    }
    ans=1;
    for(int i=1;i<=x;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            ans=i;
        }
    }
    printf("Ans=%d",ans);
    return 0;
}