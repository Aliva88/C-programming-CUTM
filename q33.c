#include<stdio.h>
int main()
{
    int i,rev=0,n,org;
    printf("Enter a num ");
    scanf("%d",&i);
    org=i;
    while(i!=0)
    {
        n=i%10;
        rev=rev*10+n;
        i=i/10;
    }
    printf("The reverse is %d\n",rev);
    if(org!=rev)
    {
        printf("The number is not palindraome");
    }
    else
    {
        printf("The number is a palindrome");
    }
    return 0;
}
