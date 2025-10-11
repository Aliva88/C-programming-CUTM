#include<stdio.h>
int main()
{
    int num;
    num=1;
   for(num=1;num<=30;num++)
    {
        if(num==10)
        continue;
        if(num==20)
        break;
     printf("num=%d\n",num);
    
    }
    return 0;
}