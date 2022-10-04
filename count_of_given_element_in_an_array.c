#include<stdio.h>
int main()
{
    int a[100],n,i,value,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
        if(value==a[i])
        {
            count=count+1;
        }
    }
    printf("%d",count);
}