#include<stdio.h>
int findgcd(int a,int b)
{
    while(b !=0)
    {
        int temp = b;
        b = a%b;
        a=temp;
    }
    return a;
}
int findlcm(int n1,int n2)
{
    int gcd = findgcd(n1,n2);
    int lcm = (n1 * n2)/gcd;
    return lcm;
}
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int lcm = findlcm(n1,n2);
    printf("%d",lcm);
}