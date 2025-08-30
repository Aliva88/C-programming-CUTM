#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a,b and c");
    scanf("%d %d %d",&a,&b,&c);
    printf("%s",(a>b&&a>c?"true":"false"));
}