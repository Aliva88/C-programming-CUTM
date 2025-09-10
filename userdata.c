#include<stdio.h>
void main()
{
    int rollno;
    char name[50];
    int mark;
    float percentage;
    printf("enter rollno");
    scanf("%d",&rollno);
    printf("\nenter name");
    scanf("%s",&name);
    printf("\nenter mark");
    scanf("%d",&mark);
    printf("\nenter percentage");
    scanf("%f",&percentage);
    printf("\nname %s\n",name);
    printf("rollno %d\n",rollno);
    printf("mark %d\n",mark);
    printf("percentage %f",percentage);

}