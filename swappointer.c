#include<stdio.h>
int main()
{
    int *p1,*p2;
    int num1,num2,temp;
    p1=&num1;
    p2=&num2;
    printf("Enter 2 number ");
    scanf("%d %d",p1,p2);
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("num1=%d\nnum2=%d",*p1,*p2);
    return 0;
}