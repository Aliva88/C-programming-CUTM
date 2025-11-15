#include<stdio.h>
int main()
{
    float F;
    float temp;
    printf("Enter the temperature of the city in degree centigrade ");
    scanf("%f",&temp);
    F=(temp*(9/5))+32;
    printf("The temperature of the city in Fahrenheit %f",F);
    return 0;
}