#include <stdio.h>
#include <string.h>

int minMelodies(char s[], int n) {
    int count = 1; // Initialize count as 1 since we need at least one melody
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i-1]) {
            count++; 
        }
    }
    return (count + 1) / 2;  
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n); 
        
        char s[51];
        scanf("%s", s); 
        
        int result = minMelodies(s, n); 
        
        printf("%d\n", result); 
    }
    
    return 0;
}
