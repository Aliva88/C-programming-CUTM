#include<stdio.h>
int main()
{
    int n;

    printf("Enter the size of array ");
    scanf("%d",&n);

    int a[100];
    printf("Enter %d element\n",n);

    for(int i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    int min=a[0];

    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("The smallest element is %d",min);
    return 0;
}