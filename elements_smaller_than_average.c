#include<stdio.h>
int main()
{
    int n,i,sum=0,avg,a[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg>=a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}