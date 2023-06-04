#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char* str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int longestNonPalindromeSubsequence(char* str) {
    int len = strlen(str);
    int start = 0;
    int end = len - 1;

    while (start <= end) {
        if (str[start] != str[end])
            return len;
        else {
            if (isPalindrome(str, start + 1, end - 1))
                return -1;
            start++;
            end--;
        }
    }

    return len - 1;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char str[51];
        scanf("%s", str);

        int result = longestNonPalindromeSubsequence(str);
        printf("%d\n", result);
    }

    return 0;
}
