#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any charecter ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("The charecter %c is in upper case",ch);
    }
    else{
        printf("The charecter %c is in lower case",ch);
    }
    return 0;
}