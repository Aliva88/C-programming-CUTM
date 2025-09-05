#include<stdio.h>
int main()
{
    int num;
    printf("Enter num ");
    scanf("%d",&num);
    if(num>=0)
    {
        printf("The number is positive\n");
        if(num%2==0)
        {
            printf("The number is even\n");
        }
        else
        {
            printf("The number is odd\n");
        }
    }
    else
    {
        printf("The number is nagative\n");
    }
    return 0;
}