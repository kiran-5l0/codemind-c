#include<stdio.h>
int main()
{
    int n,i,ip=1;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            ip=0;
            break;
        }
    }
    if(n<=1 || !ip)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
}