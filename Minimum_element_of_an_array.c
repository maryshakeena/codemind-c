#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n],i,min;
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
min=arr[0];
for(i=0;i<n;i++)
{
    if(min>arr[i])
    {
        min=arr[i];
        arr[i]=arr[0];
    }
}
printf("%d",min);
}