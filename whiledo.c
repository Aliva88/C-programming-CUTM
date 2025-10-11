#include<stdio.h>
void func(int num)
{
    num=1;
    while(num<=5)
    {
        printf("%d\n",num);
        num++;
    }
    do
    {
        printf("%d\n",num);
        num++;
    }
    while(num<=5);
}
int main()
{
    int n;
    func(n);
    return 0;
}