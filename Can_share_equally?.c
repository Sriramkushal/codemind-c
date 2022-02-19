#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int ans=x+y*2;
    if(x==0 && y%2!=0)
    printf("NO");
    else if (ans%2==0)
    printf("YES");
    else
    printf("NO");
}