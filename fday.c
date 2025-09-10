#include<stdio.h>
void func(int days)
{
    switch(days)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thusday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Invalid choice");
    }
}
int main()
{
    int days;
    printf("Enter the day's naumber ");
    scanf("%d",&days);
    func(days);
    return 0;
}