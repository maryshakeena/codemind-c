#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int c=k*m;
    if(n%c==0)
    {
        printf("%d",n/c);
    }
    else{
        printf("%d",n/c+1);
    }
}