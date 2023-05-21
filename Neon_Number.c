#include<stdio.h>
int main()
{
    int n,rem,sqt,sum=0;
    scanf("%d",&n);
    sqt=n*n;
    while(sqt!=0)
    {
        rem=sqt%10;
        sum=sum+rem;
        sqt=sqt/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}