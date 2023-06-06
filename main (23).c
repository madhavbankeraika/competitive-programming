#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Initialize variables
    int i, j;
    int* result = NULL;
    
    // Iterate through each element in the array
    for (i = 0; i < numsSize; i++) {
        // Check if the current element plus any other element equals the target
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                // Allocate memory for the result array
                result = (int*)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                
                // Set the size of the result array
                *returnSize = 2;
                
                // Return the result array
                return result;
            }
        }
    }
    
    // No solution found, return NULL
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    
    // Call the twoSum function
    int* result = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);
    
    // Print the result
    if (result != NULL) {
        printf("Indices: %d, %d\n", result[0], result[1]);
        free(result); // Free the allocated memory
    } else {
        printf("No solution found.\n");
    }
    
    return 0;
}
