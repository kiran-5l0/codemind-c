#include<stdio.h>
int main()
{
    int m,n,count=0,i;
    scanf("%d%d",&m,&n);
    if(m<1 || n>10000 || m>n)
    {
        return 1;
    }
    for(i=m;i<=n;i++)
    {
        if(i%3==0)
        {
            count++;
        }
    }
    printf("%d",count);
}