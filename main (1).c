#include <stdio.h>

int countDistinctWays(int n) {
    if (n <= 1)
        return 1;

    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n;
    printf("Enter the number of steps: ");
    scanf("%d", &n);

    int distinctWays = countDistinctWays(n);

    printf("The number of distinct ways to climb %d steps is %d\n", n, distinctWays);

    return 0;
}
