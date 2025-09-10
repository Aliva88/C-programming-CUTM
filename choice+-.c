#include<stdio.h>
void func(int a,int b, int choice,int sum,int sub,int mul,int div,int mod)
{
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
        div=a/b;
        printf("div=%d",div);
        break;
        case 4:
        mul=a*b;
        printf("mul=%d",mul);
        break;
        case 5:
        mod=a%b;
        printf("mod=%d",mod);
        break;
        default:
        printf("invalid choice");
    }
}
int main()
{
    int x,y,choice;
    int sum,sub,div,mul,mod;
    printf("Enter a and b ");
    scanf("%d %d",&x,&y);
    printf("Enter your choice ");
    scanf("%d",&choice);
    func(x,y,choice,sum,sub,mul,div,mod);
    return 0;
}