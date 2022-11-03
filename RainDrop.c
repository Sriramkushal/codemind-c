#include<stdio.h>
int main()
{
    int n,hi=0;
    scanf("%d",&n);
    if(n%3==0)
    {
        printf("Pling");
        hi++;
    }
    if(n%5==0)
    {
        printf("Plang");
        hi++;
    }
    if(n%7==0)
    {
        printf("Plong");
        hi++;
    }
    if(hi==0)
    {
        printf("%d",n);
    }
}