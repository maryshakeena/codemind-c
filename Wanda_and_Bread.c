#include<stdio.h>
int main()
{
    int  n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    if(n<=m*k)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}