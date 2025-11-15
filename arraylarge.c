#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int a[100];
    printf("\nEnter the %d elements of the array\n",n);
    for(int i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    int max = a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Greater among all is %d",max);
    return 0;
}