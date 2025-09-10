#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,div,choice;
    printf("Enter any a and b ");
    scanf("%d %d",&a,&b);
    printf("Enter your choice ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        sum=a+b;
        printf("sum=%d",sum);
        break;
        case 2:
        sub=a-b;
        printf("sub=%d",sub);
        break;
        case 3:
        mul=a*b;
        printf("mul=%d",mul);
        break;
        case 4:
        div=a/b;
        printf("div=%d",div);
        break;
        default:
        printf("invalid input");
    }
    return 0;
}