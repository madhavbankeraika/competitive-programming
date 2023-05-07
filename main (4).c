#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        int n, t;
        scanf("%d%d", &n, &t);
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        int max_ent = -1, max_index = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] <= t && b[i] > max_ent) {
                max_ent = b[i];
                max_index = i;
            }
        }
        printf("%d\n", max_index + 1);
    }
    return 0;
}






