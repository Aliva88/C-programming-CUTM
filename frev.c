#include<stdio.h>
int swap(int* a,int* b);
int swap(int* a,int* b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    return 0;
}
int main()
{
    int x=3;
    int y=5;
    swap(&x,&y);
    printf("%d %d",x,y);
    return 0;
}