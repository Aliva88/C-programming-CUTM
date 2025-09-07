#include<stdio.h>
void vote(int n)
{
    if(n>=18&&n<100)
    printf("Eligible for vote");
else
printf("Not elisible for vote");
}
int main()
{
    int age;
    printf("enter your age ");
    scanf("%d",&age);
    vote(age);
    return 0;
}