
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        if (n == 1) {
            printf("1\n");
        } else if (n == 2 || n == 3) {
            printf("-1\n");
        } else {
            int permutation[n];
            for (int i = 0; i < n; i++) {
                permutation[i] = i + 1;
            }
            for (int i = 0; i < n-1; i += 2) {
                int temp = permutation[i];
                permutation[i] = permutation[i+1];
                permutation[i+1] = temp;
            }
            if (n % 2 == 0) {
                int temp = permutation[n-2];
                permutation[n-2] = permutation[n-1];
                permutation[n-1] = temp;
            }
            for (int i = 0; i < n; i++) {
                printf("%d ", permutation[i]);
            }
            printf("\n");
        }
    }
    return 0;
}