#include<stdio.h>
int main()
{
    int a,sum=0,square;
    scanf("%d",&a);
    square=a*a;
    while(square!=0)
    {
        sum+=square%10;
        square=square/10;
    }
    if(sum==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}