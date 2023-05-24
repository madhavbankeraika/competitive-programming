#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[11];  
        scanf("%s", s);

        char target[] = "codeforces";
        int diff = 0;
        int i;

        for (i = 0; i < 10; i++) {
            if (s[i] != target[i])
                diff++;
        }

        printf("%d\n", diff);
    }

    return 0;
}
