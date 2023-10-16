#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int num_10_rupee_coins = N/10;
    int remaining_amount = N - (num_10_rupee_coins * 10);
    if (remaining_amount % 5 == 0) {
        int num_5_rupee_coins = remaining_amount / 5;
        int total_coins = num_10_rupee_coins + num_5_rupee_coins;
        printf("%d
", total_coins);
    } else {
        printf("-1
");
    }
    return 0;
}
