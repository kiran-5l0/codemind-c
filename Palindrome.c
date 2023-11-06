#include<stdio.h>
int main()
{
    int n,r,v=0,x;
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
        r=n%10;
        v=v*10+r;
        n=n/10;
    }
    if(x==v)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}