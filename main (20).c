#include <stdio.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        long long int max1 = LLONG_MIN, max2 = LLONG_MIN;
        long long int num;

        for (int i = 0; i < n; i++) {
            scanf("%lld", &num);
            
            if (num > max1) {
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max2 = num;
            }
        }

        long long int beauty = max1 * max2;
        printf("%lld\n", beauty);
    }

    return 0;
}

