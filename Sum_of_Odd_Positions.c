#include<stdio.h>
int main()
{
    int n,i,sum,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
}