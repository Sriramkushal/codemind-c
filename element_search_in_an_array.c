#include<stdio.h>
int main()
{
    int l,a[100],count=0,i,value;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&value);
    for(i=0;i<l;i++)
    {
        if(value==a[i])
        {
            count=count+1;
            break;
        }
    }
    if(count==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}