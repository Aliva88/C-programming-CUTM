#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter values ");
        scanf("%d",&arr[i]);
    }
    printf("Sum of 1st 2 values is %d\n",(arr[1]+arr[2]));
    printf("Sub of 2nd 2 values is %d",(arr[3]-arr[4]));
    return 0;
}