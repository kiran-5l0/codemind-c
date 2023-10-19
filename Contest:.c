#include<stdio.h>
int main()
{
    int x,a,b,totalpoints;
    scanf("%d%d%d",&x,&a,&b);
    totalpoints=(a*1)+(b*2);
    if(totalpoints >= x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}