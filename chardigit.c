#include<stdio.h>
void func(char);
void func(char ch)
{
    if(ch>='0' && ch<='9')
    printf("The character is digit ");
else if(ch>='a' && ch<='z'||ch>='A' && ch<='Z')
printf("The charecter is alphabate ");
else
printf("It is a special charecter");
}
int main()
{
    char ch;
    printf("Enter a character ");
    scanf("%s",&ch);
    func(ch);
    return 0;
}