#include<stdio.h>
int main()
{
    int n,m=0,o;
    scanf("%d",&n);
    while(n!=0)
    {
        o=n%10;
        m=m*10+o;
        n=n/10;
    }
    printf("%d",m);
}