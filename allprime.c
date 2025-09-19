#include<stdio.h>
int main()
{
   int count,i,start,end,num;
   printf("Enter start: ");
   scanf("%d",&start);
   printf("Enter end: ");
   scanf("%d",&end);
   for(num=start;num<=end;num++){
   count=0;
   for(i=1;i<=num;i++)
   {
    if(num%i==0)
    count++;
   }
   if(count==2)
   printf("%d\n",num);
   }
    return 0;
}