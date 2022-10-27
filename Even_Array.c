#include<stdio.h>
int main()
{
    int i,n,a[100],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if((a[i]%2==0)||a[i]==0)
        {
            count++;
        }
    }
    if(count==n)
    {
        printf("True");
    }
    else
    printf("False");
}