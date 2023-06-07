#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool isCatMeowing(int n, char s[]) {
    if (n < 5) {
        return false;  // Sound is too short to be a meowing
    }

    // Check the first letter
    if (s[0] != 'm' && s[0] != 'M') {
        return false;  // First letter is not 'm' or 'M'
    }

    // Check the second letter
    if (s[1] != 'e' && s[1] != 'E') {
        return false;  // Second letter is not 'e' or 'E'
    }

    // Check the third letter
    if (s[2] != 'o' && s[2] != 'O') {
        return false;  // Third letter is not 'o' or 'O'
    }

    // Check the fourth letter
    if (s[3] != 'w' && s[3] != 'W') {
        return false;  // Fourth letter is not 'w' or 'W'
    }

    // Check if the remaining characters are valid
    for (int i = 4; i < n; i++) {
        if (!isalpha(s[i])) {
            return false;  // Invalid character found
        }
    }

    return true;  // All conditions for meowing are satisfied
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char s[51];  // Maximum length is 50, plus 1 for null-terminator
        scanf("%s", s);

        if (isCatMeowing(n, s)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
