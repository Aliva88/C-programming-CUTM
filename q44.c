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
        printf("A is vowel");
        break;
        case 'e':
        case 'E':
        printf("E is vowel");
        break;
        case 'i':
        case 'I':
        printf("I is vowel");
        break;
        case 'o':
        case 'O':
        printf("O is vowel");
        break;
        case 'u':
        case 'U':
        printf("U is vowel");
        break;
        default:
        printf("The alphabate is consonant");
    }
    return 0;
}