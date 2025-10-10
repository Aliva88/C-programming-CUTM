#include<stdio.h>
void func(int);
void func(int num)
{
    int count=0;
    if(num==0)
    {
       printf("count=%d",count);
    }
    else
    {
        while(num!=0)
        {
            num=num/10;
            count++;
        }
        printf("Count =%d",count);
    }
}
int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    func(num);
    return 0;
}