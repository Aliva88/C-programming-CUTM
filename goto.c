#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d\n",i);
        if(n==2)
        goto start;
    }
    start:
    printf("Its the end");
    return 0;
}