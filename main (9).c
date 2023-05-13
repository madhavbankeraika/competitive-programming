#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); 
    
    while (t--) {
        long long n, k;
        scanf("%lld %lld", &n, &k); 
        
        if (n % 2 == 0 || k % 2 == 0 || n < k * k) {
            printf("NO\n"); 
        } else {
            printf("YES\n"); 
        }
    }
    
    return 0;
}