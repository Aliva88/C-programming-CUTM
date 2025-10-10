#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int space=1;space<=(4-i);space++)
        {
            printf(" ");
        }
        for(int num=1;num<=((2*i)-1);num++)
        {
            printf("%d",num);
        }
        printf("\n");
    }
    return 0;
}