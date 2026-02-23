#include<stdio.h>
int main()
{
    int arr[100],size,i;
    printf("Enter the size of array ");
    scanf("%d",&size);
    printf("Enter values ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    for(i=0;i<size;i++)
    {
        arr[i]=arr[i]+1;
    }
    printf("_________\n");
    for(i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("_________\n");
    for(i=0;i<size;i++)
    {
        arr[i]=0;
    }
    for(i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    return 0;
}