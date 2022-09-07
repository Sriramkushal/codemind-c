#include<stdio.h>
int main()
{
    int a,b,sum=0,product=1 ;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        sum=sum+b;
        product=product*b;
        a=a/10;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}