#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        // Check if n is a power of 2
        if ((n & (n - 1)) == 0) {
            printf("1\n");

            // If n is a power of 2, use only the first spell to reach n
            while (n > 1) {
                printf("1 ");
                n >>= 1;  // Divide n by 2
            }

            printf("\n");
        } else if ((n % 2) == 1) {
            printf("-1\n");  // If n is odd, it's impossible to reach n
        } else {
            int m = 0;
            int spells[40];

            // Start with 1 candy and try to reach n
            while (n > 1) {
                // Check if n is odd
                if ((n % 2) == 1) {
                    n++;  // If n is odd, add 1 to make it even
                    spells[m] = 2;
                } else {
                    n >>= 1;  // If n is even, divide by 2
                    spells[m] = 1;
                }

                m++;  // Increment the number of spells used
            }

            printf("%d\n", m);

            // Print the sequence of spells used
            for (int i = 0; i < m; i++) {
                printf("%d ", spells[i]);
            }

            printf("\n");
        }
    }

    return 0;
}