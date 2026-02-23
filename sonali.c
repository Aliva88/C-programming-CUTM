#include<stdio.h>
int main()
{
  int n=5;
  for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==3||i==5||i==2&&j==1||i==4&&j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("_____________\n");
  for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==5||j==1||j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("_____________\n");
  for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==2&&j==2||i==3&&j==3||i==4&&j==4||j==1||j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("_____________\n");
  for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==3||j==1||j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("_____________\n");
  for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==5||j==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("_____________\n");
  for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==5||j==3)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("_____________\n");
}
