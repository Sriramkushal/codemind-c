#include<stdio.h>
int main()
{
    int i,j,a,b,c=0,s=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        s=0;
        for(j=i;j<=b;j++)
        {
            s+=j;
            if(s%2!=0)
            {
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}