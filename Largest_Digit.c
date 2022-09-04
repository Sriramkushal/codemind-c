#include<stdio.h>
int main()
{
    int a,b,largest=0;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        if(b>largest)
        {
            largest=b;
        }
        a=a/10;
    }printf("%d",largest);
}