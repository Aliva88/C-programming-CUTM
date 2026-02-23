#include<stdio.h>
#include<string.h>
int main()
{
char str1[]= "cutm";
char str2[] = "CUTM";  //Using strcmp()
int res=strcmp (str1 , str2);
printf("%d\n",res);
if (res==0)
{
printf("Strings are equal");
}
else
{
printf("Strings are unequal");
}
printf("\nValue returned by strcmp() is %d", res);
return 0;
}