#include<stdio.h>
int main()
{
    char alp;
    printf("Enter any alphabate ");
    scanf("%c",&alp);
    switch(alp)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("The alphabate is vowel");
        break;
        default:
        printf("The alphabate is consonant");
    }
    return 0;
}