#include<stdio.h>
int main()
{
    char str[100],str1[100];
    int len=0,i;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    printf("%s",str);
}