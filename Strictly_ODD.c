#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[n]%2!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}