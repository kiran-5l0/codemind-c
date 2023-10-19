#include<stdio.h>
int main()
{
    int x,y,total;
    scanf("%d%d",&x,&y);
    total=y*30;
    if(x >= total)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}