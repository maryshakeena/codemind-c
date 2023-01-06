#include<stdio.h>
int main()
{
    int n,sum=0,mul=1,d;
    scanf("%d",&n);
    while(n)
    {
    d=n%10;
    n=n/10;
    sum=sum+d;
    mul=mul*d;
    }
    if(sum==mul)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}