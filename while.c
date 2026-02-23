#include<stdio.h>
int main()
{
    int i;
    printf("Enter i ");
    scanf("%d",&i);
    while(i>10)
    {
        printf("i=%d\n",i);
        i--;
    }
    return 0;
}