#include<stdio.h>
void func(int num)
{
    num=1;
    while(num<=10)
    {
        printf("%d\n",num);
        num++;
    }
    num=1;
    do
    {
        printf("%d\n",num);
        num++;
    }
    while(num<=10);
}
int main()
{
    int n;
    func(n);
    return 0;
}