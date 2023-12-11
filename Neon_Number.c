#include<stdio.h>
int main()
{
    int n,sum=0,temp,sqt;
    scanf("%d",&n);
    sqt=n*n;
    temp=sqt;
    while(temp>0)
    {
        sum+=temp%10;
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}