#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int sum(int a,int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int main()
{
    int a,b,choice;
    printf("Enter a and b ");
    scanf("%d %d",&a,&b);
    printf("enter choice ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Sum=%d",sum(a,b));
        break;
        case 2:
        printf("Sub=%d",sub(a,b));
        break;
        case 3:
        printf("Mul=%d",mul(a,b));
        break;
        case 4:
        printf("Div=%d",div(a,b));
        break;
        default:
        printf("Invalid");
    }
    return 0;
}