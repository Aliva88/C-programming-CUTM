#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,greater;
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    greater= fmax(a,fmax(b,c));
    printf("greater number is %d",greater);
}