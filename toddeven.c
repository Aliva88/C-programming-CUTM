#include<stdio.h>
void main()
{
    int a;
    printf("enter a");
    scanf("%d",&a);
    printf("%d is %s",a,(a%2==0?"even":"odd"));
}