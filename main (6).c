#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[105];
        scanf("%s", s);

        int n = strlen(s);
        int cnt = 0, prev = -2;

        for (int i = 0; i < n; i++) {
            if (s[i] == '^') {
                if (i - prev == 2) {
                    cnt++;
                    prev = i;
                } else if (i - prev == 1) {
                    prev = i;
                }
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}




