#include<stdio.h>
int main()
{
    float si,p,r,t;
    printf("Enter the principal ammount");
    scanf("%f",&p);
    printf("Enter the annual interest rate");
    scanf("%f",&r);
    printf("Enter the time period");
    scanf("%f",&t);
    si=(p+r+t)/100;
    printf("The simple inerest is %f",si);
    return 0;
}