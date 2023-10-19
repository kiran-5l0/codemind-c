#include<stdio.h>
int main()
{
    int m,n,winner,find_winner;
    scanf("%d%d",&m,&n);
    if(m % 2 == 0 || n % 2 == 0)
    {
        printf("Player 1");
    }
    else
    {
        printf("Player 2");
    }
}