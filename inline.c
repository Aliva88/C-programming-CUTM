#include<stdio.h>
int sq(int x)
{
    return x*x;
}
int main()
{
    int num=5;
    printf("Square of %d is %d",num,sq(num));
    return 0;
}