#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your mark ");
    scanf("%d",&mark);
    switch(mark)
    {
        case if(mark >=90 && mark <=100):
        printf("A");
        break;
        case if(mark>=80 && mark<=89):
        printf("B");
        break;
        case if(mark>=70 && mark<=79):
        printf("C");
        break;
        case if(mark>=60 && mark<=69):
        printf("D");
        break;

         default:
         printf("F");
    }
    return 0;
}