#include<stdio.h>
int main()
{
    int a,b;
    int st,end,ans;
    printf("Enter a and b ");
    scanf("%d %d",&a,&b);
    if(a>=b)
    {
        st=a;
    }
    else{
        st=b;
    }
    for(int i=st;i<=end;i++)
    {
        if(i%a==0 && i%b==0)
        {
            ans=i;
            break;
        }
    }
    printf("%d",ans);
    return 0;
}