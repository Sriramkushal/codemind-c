#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,r,a;
    scanf("%d%d%d",&x,&y,&m);
    r=pow(x,y);
    a=r%m;
    printf("%d",a);
}