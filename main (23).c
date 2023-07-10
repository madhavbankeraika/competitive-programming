#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int* nums, int l, int r) {
    while (l < r)
        swap(&nums[l++], &nums[r--]);
}

void nextPermutation(int* nums, int n) {
    int i;
    for (i = n - 2; i >= 0; --i) {
        if (nums[i] < nums[i + 1]) {
            break;
        }
    }

    if (i >= 0) {
        for (int j = n - 1; j > i; --j) {
            if (nums[j] > nums[i]) {
                swap(&nums[i], &nums[j]);
                break;
            }
        }
    }

    reverse(nums, i + 1, n - 1);
}

int main() {
    int nums[] = {1, 2, 3}; // Example input
    int n = sizeof(nums) / sizeof(nums[0]);

    nextPermutation(nums, n);

    printf("Next permutation: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
