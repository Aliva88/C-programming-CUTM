#include<stdio.h>
void func(int);
void func(int num)
{
    if(num%2==0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }

}
int main()
{
    int a;
    printf("enter the value number ");
    scanf("%d",&a);
    func(a);
    return 0;
}