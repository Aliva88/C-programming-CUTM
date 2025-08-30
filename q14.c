#include<stdio.h>
void main()
{
    int a,b;
    printf("enter a,b");
    scanf("%d %d",&a,&b);
    printf("%d\n",a>56&&b>34);
    printf("%d\n",a<34||b<12);
    printf("%d\n",a!=b);

}