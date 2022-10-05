#include<stdio.h>
int main()
{
    int i,l,a[100],sum;
    float average;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<l;i++)
    {
        sum=sum+a[i];
    }
    average=(float)sum/l;
    printf("%.2f",average);
}