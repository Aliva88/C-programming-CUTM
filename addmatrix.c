#include<stdio.h>
int main()
{
    int c,r,i,j;
    int a[10][10],b[10][10],add[10][10];
    printf("Enter the size of matrix ");
    scanf("%d %d",&r,&c);
    printf("Enter the elements 1st of matrix ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            add[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
    return 0;
}