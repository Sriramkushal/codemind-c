#include<stdio.h>
int main()
{
    int n,a[100],i,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
}