#include<stdio.h>
void main()
{
    int a,b;
    printf("enter a and b");
    scanf("%d %d",&a,&b);
    printf("a=%d\nb=%d\n",++a,--b);
    printf("a=%d\nb=%d\n",a++,b--);
    printf("a=%d\nb=%d\n",a,b);
}