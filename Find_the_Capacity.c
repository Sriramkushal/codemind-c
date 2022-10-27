#include<stdio.h>
int main()
{
    int a,b,c,bytes=1024,cap,res;
    scanf("%d%d%d",&a,&b,&c);
    cap=a*b*c*2*512;
    res=cap/bytes;
    printf("%d",res);
    printf("KB");
}