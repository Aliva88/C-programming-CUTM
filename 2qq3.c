#include<stdio.h>
void func(char ch)
{
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    printf("Alphabate");
else if(ch>='0'&&ch<='9')
printf("Digit");
else
printf("Special character");
}
int main()
{
    char c;
    printf("Enter character ");
    scanf("%c",&c);
    func(c);
    return 0;
}