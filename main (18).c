#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, q;
        scanf("%d%d", &n, &q);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }

        while (q--) {
            int l, r, k;
            scanf("%d%d%d", &l, &r, &k);

            int diff = 0;
            for (int i = l - 1; i < r; i++) {
                diff += a[i] - k;
            }

            if (k % 2 == 0) {
                sum += diff;
            } else {
                sum -= diff;
            }

            for (int i = l - 1; i < r; i++) {
                a[i] = k;
            }

            if (sum % 2 == 0) {
                printf("NO\n");
            } else {
                printf("YES\n");
            }
        }
    }

    return 0;
}
