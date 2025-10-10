#include<stdio.h>
void func(int);
void func(int i)
{
    int rev=0,n,org;
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
}
int main()
{
    int i;
    printf("Enter a num ");
    scanf("%d",&i);
    func(i);
    return 0;
}
