#include<stdio.h>
int main()
{
    int a=0,b=1,n,i=0,next=0;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=2;i<n;i++)
    {
        next=a+b;
        printf("%d ",next);
        a=b;
        b=next;
    }
}