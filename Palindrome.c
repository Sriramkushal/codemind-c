#include<stdio.h>
int main()
{
    int rem,result=0,a,x;
    scanf("%d",&a);
    x=a;
    while(a!=0)
    {
       rem=a%10;
       result=(result*10)+rem;
       a=a/10;
    }
if(x==result)
 printf("True");
else
 printf("False");

}