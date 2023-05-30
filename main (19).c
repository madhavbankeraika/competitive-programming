#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int longestSpace = 0;
        int currentSpace = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                currentSpace++;
            } else {
                if (currentSpace > longestSpace) {
                    longestSpace = currentSpace;
                }
                currentSpace = 0;
            }
        }

        if (currentSpace > longestSpace) {
            longestSpace = currentSpace;
        }

        printf("%d\n", longestSpace);
    }

    return 0;
}
