#include<stdio.h>
int ispal(int num)
{
    int d,res=0,temp;
    temp=num;
    while(num)
    {
        d=num%10;
        res=res*10+d;
        num=num/10;
    }
    if(temp==res)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isprim(int num)
{
    int f=0,i;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            f++;
        }
    }
    if(f==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,k;
    scanf("%d",&n);
    for(k=n+1;;k++)
    {
        if(ispal(k)&&isprim(k))
        {
            break;
        }
    }
    printf("%d",k);
}