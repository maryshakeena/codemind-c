#include <stdio.h>

int main() {
    int n,arr[20],sum = 0;
    scanf("%d", &n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }

    printf("%d",sum);
}
