#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=a%i;
        if(b==0)
        {
            printf("%d ",i);
        }
    }
}