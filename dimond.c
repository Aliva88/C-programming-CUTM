#include<stdio.h>
int main()
{
    int n=5,m=4;
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++)
printf(" ");
for(int k=1;k<=2*i-1;k++)
printf("*");
printf("\n");
}
for(int i=1;i<=m;i++){
    for(int j=1;j<=i*1;j++)
    printf(" ");
for(int k=1;k<=2*(m-i)+1;k++)
printf("*");
printf("\n");
}
return 0;
}