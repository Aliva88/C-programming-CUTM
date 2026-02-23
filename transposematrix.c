#include<stdio.h>
int main()
{
    int c,r,i,j;
    int a[10][10],t[10][10];
    printf("Enter size of matrix ");
    scanf("%d %d",&r,&c);
    printf("Enter elements of matrix ");
    for(i=0; i<r; i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[j][i]=a[i][j];
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
    return 0;
}