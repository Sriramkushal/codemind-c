#include<stdio.h>
int main()
{
    int n,a[100],i,j,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        a[i]=r;
        i++;
    }
    for(j=i;j>=0;j--)
    {
        if(a[j]==6)
        {
            a[j]=9;
            break;
        }
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}