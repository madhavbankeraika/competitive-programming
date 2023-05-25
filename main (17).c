#include <stdio.h>
#include <stdbool.h>

bool is_alternating_string(char* s, int n) {
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char s[2001];
        scanf("%s", s);

        if (is_alternating_string(s, n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
