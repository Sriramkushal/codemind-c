#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum,a[100],sum1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum=sum+a[i];
        }
        else
        {
            sum1=sum1+a[i];
        }
    }
    printf("%d",abs(sum-sum1));
}