#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j;
    int* result = malloc(2 * sizeof(int));
    *returnSize = 2;

    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    return NULL; // No solution found
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;

    int* indices = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);

    if (indices != NULL) {
        printf("Indices: %d, %d\n", indices[0], indices[1]);
        free(indices);
    } else {
        printf("No solution found.\n");
    }

    return 0;
}
