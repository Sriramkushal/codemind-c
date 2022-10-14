#include<stdio.h>
int main()
{
    int num,r,result1=0,result2=0,r1,y,a;
    scanf("%d",&num);
    y=num*num;
    while(num>0)
    {
        r=num%10;
        result1=(result1*10)+r;
        num=num/10;
    }
    a=result1*result1;
    while(a>0)
    {
        r1=a%10;
        result2=(result2*10)+r1;
        a/=10;
    }
    if(y==result2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}