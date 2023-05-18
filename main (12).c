#include <stdio.h>
#include <string.h>

int canRearrangePalindrome(char s[]) {
    int count[26] = {0}; 
    for (int i = 0; i < strlen(s); i++) {
        count[s[i] - 'a']++;
    }

    
    int oddCount = 0; 
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            oddCount++;
        }
    }

    if (oddCount <= 1) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        char s[51];
        scanf("%s", s); 

        if (canRearrangePalindrome(s)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
