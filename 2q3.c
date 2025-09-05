#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your mark ");
    scanf("%d",&mark);
    if(mark>=90&&mark<=100)
    {
    printf("Your grade is A");
    }
else if(mark>=80&&mark<=89)
{
printf("Your grade is B");
}
else if(mark>=70&&mark<=79)
{
printf("Your grade is C");
}
else if(mark>=60&&mark<=69)
{
printf("Your grade is D");
}
else
{
printf("Your grade is F");
}
return 0;
}