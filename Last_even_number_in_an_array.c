#include<stdio.h>
int main()
{
    int i,l,ar[200],value;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=l-1;i>=0;i--)
    {
        if(ar[i]%2==0)
        {
          value=ar[i];
          break;
        }
    }
    printf("%d",value);
}