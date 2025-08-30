#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age of person");
    scanf("%d",&age);
    if(age>=18&&age<100)
    {
        printf("The person is elisible for vote");
    }
    else
    {
        printf("The person is not elisible for vote");
    }
    return 0;
}