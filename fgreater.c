#include<stdio.h>
void func(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
    printf("A is greater");
else
printf("C is greater");
    }
    else
{
    if(b>c)
printf("B is greater");
else
printf("C is greater");
}
    }
int main()
{
    int a,b,c;
    printf("Enter a,b and c ");
    scanf("%d %d %d",&a,&b,&c);
    func(a,b,c);
    return 0;
}