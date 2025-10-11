#include<stdio.h>
int fact(int);
int fact(int num)
{
    if(num==0||num==1)
    return 1;
else
    return num*fact(num-1);
}
int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    printf("factorial of %d is %d",num,fact(num));
    return 0;
}