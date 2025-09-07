#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your mark");
    scanf("%d",&mark);
    switch(mark)
    {
        if(mark>=90&&mark<=100);
        case 1:
        printf("A");
        break;
        if(mark>=80&&mark<=89);
        case 2:
        printf("B");
        break;
        if(mark>=70&&mark<=79);
        case 3:
        printf("C");
        break;
        if(mark>=60&&mark<=69);
        case 4:
        printf("D");
        break;
        default:
        printf("F");
    }
    return 0;
}