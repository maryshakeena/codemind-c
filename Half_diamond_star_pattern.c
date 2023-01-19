#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    if(n>=3 && n<=100)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("
");
        }
    
    for(i=1;i<=n-1;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf("*");
        }
        printf("
");
    }
}
else
{
    printf("The pattern is not possible");
}

}
    