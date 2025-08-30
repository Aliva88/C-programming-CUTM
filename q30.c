#include<stdio.h>
int main()
{
    int num1,num2,mod;
    printf("Enter any 2 numbers ");
    scanf("%d %d",&num1,&num2);
    mod = num1%num2;
    printf("The modulus will be %d",mod);
}