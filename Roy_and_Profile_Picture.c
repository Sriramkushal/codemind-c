#include<stdio.h>
int main()
{
    int l,w,h,i,n;
    scanf("%d%d",&l,&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&w,&h);
        if(w<l||h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if(w>=l && h>=l)
        {
            if(w==h)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
    }
}