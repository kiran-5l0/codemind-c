#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c+a && a+b>c+b)
    {
        printf("%d",a+b);
    }
    else if(b+c>a+b && b+c>c+a)
    {
        printf("%d",b+c);
    }
    else
    {
        printf("%d",c+a);
    }
}