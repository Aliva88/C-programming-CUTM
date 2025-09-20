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
        sum(a,b);
        printf(a+b);
        case 2:
        sub(a,b);
        printf(a-b);
        case 3:
        mul(a,b);
        printf(a*b);
        case 4:
        div(a,b);
        printf(a/b);
        default:
        printf("invelid");
    }
    return 0;
}