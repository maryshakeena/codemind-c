#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r=n%3;
    if(n%3==0)
    {
        printf("NORMAL");
    }
    else if(n%3==1)
    {
        printf("HUGE");
    }
    else if(n%3==2)
    {
        printf("SMALL");
    }
}