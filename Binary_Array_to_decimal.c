#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,z,a[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    z=n;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            sum=sum+pow(2,z-1);
        }
        z--;
    }
    printf("%d",sum);
}