#include<stdio.h>
int main()
{
    int x,y,m,j,i;
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
    {
        m=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                m++;
            }
        }
        if(m==2)
        {
            printf("%d
",i);
        }
    }
}