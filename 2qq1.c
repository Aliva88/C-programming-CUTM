#include<stdio.h>
void posnev(int n);
void posnev(int n)
{
    if(n>0)
    printf("Positive");
else if(n<0)
printf("Negative");
else
printf("zero");
}
int main()
{
    int num;
    printf("Enter num");
    scanf("%d",&num);
    posnev(num);
    return 0;
}