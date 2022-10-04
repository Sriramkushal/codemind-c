 #include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i*(i+1)==n)
        {
            count+=1;
        }
    }
    if(count==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
 