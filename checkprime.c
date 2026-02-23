#include<stdio.h>
void func(int);
void func(int num)
{
    int i,count=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0){
        count++;
        printf("%d\n",count);
        }
    }
    if(count==2)
    {
        printf("The number is prime\n");
    }
    else{
        printf("The number is not a prime\n");
    }
}
int main()
{
    int num;
    printf("Enter a num ");
    scanf("%d",&num);
    func(num);
    return 0;
}