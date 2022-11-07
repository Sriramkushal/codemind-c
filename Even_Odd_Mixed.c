#include<stdio.h>
int main()
{
    int n,d,even=0,odd=0;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        if(d%2==0)
        {
            even++;
        }
        else 
        {
            odd++;
        }
        n/=10;
    }
    if(odd==0)
    {
        printf("Even");
    }
    else if(even==0)
    {
        printf("Odd");
    }
    else
    printf("Mixed");
}