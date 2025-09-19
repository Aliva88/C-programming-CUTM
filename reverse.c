#include<stdio.h>
int main()
{
    int num,i,rev=0;
    printf("Enter a number ");
    scanf("%d",&num);
    //548 is not equal to 0
    //54!=0(t)
    //5!=0(t)
    //0!=0(f)
    while(num!=0)
    {
        i=num%10;//8 //4 //5
        rev=rev*10+i;//8 //84 //845
        num=num/10;//54 //4 //0
    }
    printf("Reverse of the number is=%d",rev);
    return 0;
}